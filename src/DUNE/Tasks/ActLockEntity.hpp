//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

#ifndef DUNE_TASKS_ACTIVATION_LOCK_ENTITY_HPP_INCLUDED_
#define DUNE_TASKS_ACTIVATION_LOCK_ENTITY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

#include <DUNE/Tasks/BasicEntity.hpp>
#include <DUNE/Status/Messages.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class Task;

    class ActLockEntity : public BasicEntity
    {
    public:
      ActLockEntity(Task* task):
        BasicEntity(task)
      {
      }

      void
      setBindings(Recipient* recipient)
      {
        BasicEntity::setBindings(recipient);
        bind<IMC::EntityActivationLock>(recipient, this);
        bind<IMC::QueryEntityStatus>(recipient, this);
      }

      bool
      isActive(void);

      //! Consume EntityActivationLock messages and reply accordingly.
      //! @param[in] msg EntityActivationLock message.
      void
      consume(const IMC::EntityActivationLock* msg);

      //! Consume QueryEntityStatus messages and reply accordingly.
      //! @param[in] msg QueryEntityStatus message.
      void
      consume(const IMC::QueryEntityStatus* msg);

    private:
      //! List of active locks
      typedef std::map<unsigned int, Time::Counter<float> > LocksMap;
      LocksMap m_locks;

      //! Request activation lock
      float
      acquireLock(unsigned int eid, float timeout);

      //! Request activation lock
      void
      releaseLock(unsigned int eid);

      //! Prune locks
      void
      pruneLocks(void);

    };
  }
}

#endif
