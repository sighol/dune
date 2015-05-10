//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: dd186813efb490ac251f1633db2ebf3a                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.4803164989532488);
    msg.setSource(36969U);
    msg.setSourceEntity(161U);
    msg.setDestination(42383U);
    msg.setDestinationEntity(115U);
    msg.state = 79U;
    msg.flags = 28U;
    msg.description.assign("LZCVBOFHWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.43391245760918484);
    msg.setSource(38582U);
    msg.setSourceEntity(58U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(77U);
    msg.state = 86U;
    msg.flags = 70U;
    msg.description.assign("ASQMTGCRKUYDHSXGLPZWJYPZEXYFULOQCDIJOLBHHYHOPFZAPFZJWTEVUIYJYELQAHQWTECLTLNFSVMUWCKFQHAJYOGEXGRYKDWIAPZRQNEOLAPXPKUDYRLEBMCOTVCDXZIOZTWGSBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.636189309819447);
    msg.setSource(65232U);
    msg.setSourceEntity(43U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(173U);
    msg.state = 88U;
    msg.flags = 191U;
    msg.description.assign("UHILDBTEHWVXVUGRKDUYKHBURLTPNWITDSGFQPWYOKDZMZWSMOJOQVAJUAIVFZUYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.12601651208064568);
    msg.setSource(39804U);
    msg.setSourceEntity(53U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(215U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.915691839174434);
    msg.setSource(10976U);
    msg.setSourceEntity(176U);
    msg.setDestination(55912U);
    msg.setDestinationEntity(156U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.8722323625009072);
    msg.setSource(28684U);
    msg.setSourceEntity(144U);
    msg.setDestination(52834U);
    msg.setDestinationEntity(17U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.096417892984069);
    msg.setSource(6847U);
    msg.setSourceEntity(182U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(17U);
    msg.id = 251U;
    msg.label.assign("GMSSEVKAATFGHVPJTYTSPNYDIHFWOZKWBKOARMKOBRXHPNARITFDQFCMBQSMTPWHZZECRJXJKOVWRFSRUPVKPRLVICRAOVEPICZRSMGJMHKWJXCCXXYHLUYAOPLUNYQMRWXXZSDJTUXEULAGHNLHEWVBCQTDQMDNGDKZEMNJSFWQUCSH");
    msg.component.assign("CKIYDUXCLNVRSBAPMQYNTRTZMOCXSPUDRMCPFLFYWYTKBLQUSRCNARJIVTYYPUTBLQBKMZKVAOXCMW");
    msg.act_time = 229U;
    msg.deact_time = 58111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.5677461287534604);
    msg.setSource(27250U);
    msg.setSourceEntity(218U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(57U);
    msg.id = 145U;
    msg.label.assign("ATGMEZBZMAQPDWFQZRJUFCCRTNSEJJHRKYQXRBPZNHFTLSFBAHHKQMRQEJPWAKTLUKIWNXPXOXGZFLDBAIPVEBYDEVJAKVHKLSNOPTISDKTLQHQEJYBLTVVUZVILNGUNKIXHRCPGIMXOWXOMDMHXUCBURMWVSUJVWEAIHDCMWPAILBCSYS");
    msg.component.assign("DKODYOEQBLFWYYNLNETBRNSMKXHZMOJLOKQUPZXDZBCOVKLTQXCQGUCIUTPGTSNXDGABQCJPJNOKNJAUGSEEYCEQHOUAPTORVWGNODWGMMPFFTWTWFRMCIEWGMQUHPHRJNHBUUDVKYXBNFWZCXYRARVBVORTY");
    msg.act_time = 27741U;
    msg.deact_time = 22034U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.4080957296998553);
    msg.setSource(6593U);
    msg.setSourceEntity(101U);
    msg.setDestination(6621U);
    msg.setDestinationEntity(216U);
    msg.id = 51U;
    msg.label.assign("RTUWWXGXJMIBKEONBXWTMJEXXPCZPEKSHDMKSYBFJYJCEQKBJWFDYCGV");
    msg.component.assign("AQFKHCKMUMSKEDJBJYRUOJLMNZHJCUEPYCWRURHQAXSLSJGHKQACXXTAYNEWBKQHGSSSNVHOLLFRPDWKDMDFZCRUCTALOITHBVVXXOJXKSUELOZPUQVVLWOZZIBBQ");
    msg.act_time = 45885U;
    msg.deact_time = 57794U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.8714639018218698);
    msg.setSource(38082U);
    msg.setSourceEntity(48U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(235U);
    msg.id = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.3597185099950291);
    msg.setSource(65331U);
    msg.setSourceEntity(33U);
    msg.setDestination(56375U);
    msg.setDestinationEntity(90U);
    msg.id = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.6117755621487105);
    msg.setSource(35068U);
    msg.setSourceEntity(121U);
    msg.setDestination(15137U);
    msg.setDestinationEntity(151U);
    msg.id = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.23417286152793182);
    msg.setSource(17782U);
    msg.setSourceEntity(229U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(95U);
    msg.op = 193U;
    msg.list.assign("WVYCPCDJQEYXLNYZJIAGZRRZRKUXZEXUOFWCUZYGOFKIVKFNTMOPOTBLQSDHTKIXHDRMSDURALEWAHWXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.24347244160843196);
    msg.setSource(37145U);
    msg.setSourceEntity(212U);
    msg.setDestination(21592U);
    msg.setDestinationEntity(87U);
    msg.op = 50U;
    msg.list.assign("FBPSTMYDMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.03880724739469066);
    msg.setSource(6427U);
    msg.setSourceEntity(165U);
    msg.setDestination(62878U);
    msg.setDestinationEntity(228U);
    msg.op = 68U;
    msg.list.assign("QLYRIXNVRRSZRFPKBCBKPIJOPRSHDTEYYOUXLTMJANBTFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.5552504829495293);
    msg.setSource(1936U);
    msg.setSourceEntity(48U);
    msg.setDestination(35205U);
    msg.setDestinationEntity(132U);
    msg.value = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.3076529615121353);
    msg.setSource(61818U);
    msg.setSourceEntity(189U);
    msg.setDestination(42725U);
    msg.setDestinationEntity(93U);
    msg.value = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.07007967388610548);
    msg.setSource(40744U);
    msg.setSourceEntity(87U);
    msg.setDestination(25459U);
    msg.setDestinationEntity(249U);
    msg.value = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.22669403460674886);
    msg.setSource(48205U);
    msg.setSourceEntity(204U);
    msg.setDestination(11626U);
    msg.setDestinationEntity(192U);
    msg.consumer.assign("MTCSPTGYOVYYYNHAFXSHPBJLQYZDQBIAJFJGDLNNRBIRRPLCBZRZKEEMLDNOUOEMFFCJYAVPSOVABKYGPUHM");
    msg.message_id = 38402U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.0027686527771985103);
    msg.setSource(9280U);
    msg.setSourceEntity(251U);
    msg.setDestination(42195U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("PROAGIADYWRJEURSPFMLMWNYRILCRJFNPZFQUKJKVNQSUIAQMEIYLXBZIYELOGZGOJRVYACUVBRKXXNOUDTBITTVWUXOVNTEPCVHGG");
    msg.message_id = 39115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.311064505380925);
    msg.setSource(46844U);
    msg.setSourceEntity(100U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(33U);
    msg.consumer.assign("ATTMTFVVCCXDXNPQDLXNVWQQPKJXNFNEAZGGUJMWBSUKYJBDVKMOKGHVEHESSBHRMIRZVHUGGXABUBYLRHWCORKPQDW");
    msg.message_id = 47193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.3620492002022877);
    msg.setSource(9354U);
    msg.setSourceEntity(184U);
    msg.setDestination(66U);
    msg.setDestinationEntity(201U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.7639486712026734);
    msg.setSource(2425U);
    msg.setSourceEntity(237U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.8032332045135752);
    msg.setSource(18305U);
    msg.setSourceEntity(123U);
    msg.setDestination(40810U);
    msg.setDestinationEntity(241U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0343543734158972);
    msg.setSource(48049U);
    msg.setSourceEntity(189U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(91U);
    msg.op = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.7884388589263833);
    msg.setSource(16468U);
    msg.setSourceEntity(79U);
    msg.setDestination(20652U);
    msg.setDestinationEntity(73U);
    msg.op = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.06319002802203122);
    msg.setSource(9436U);
    msg.setSourceEntity(135U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(202U);
    msg.op = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.3102229970749615);
    msg.setSource(38360U);
    msg.setSourceEntity(46U);
    msg.setDestination(57931U);
    msg.setDestinationEntity(105U);
    msg.total_steps = 134U;
    msg.step_number = 223U;
    msg.step.assign("NVZXMMDGPHFPLZILXCZLIZAEPJHOXCNNOGULMDLWCKEXGYMYKBIREZJNPWELYZGOSNKRVDDBFFQHCMBURXFQUOEXQYCGADJJT");
    msg.flags = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.7081051917445114);
    msg.setSource(36168U);
    msg.setSourceEntity(206U);
    msg.setDestination(32191U);
    msg.setDestinationEntity(94U);
    msg.total_steps = 22U;
    msg.step_number = 85U;
    msg.step.assign("XDMPJPISVDKEHSYEULDNYUFTARGAOHKKSAYFFQDZRVRWJZMIXZWMGYZJOVJNJAQIFATEYXWBLXSMYBSUPKXILOPUBQCGANXQACZKGWM");
    msg.flags = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.28383957667256865);
    msg.setSource(3547U);
    msg.setSourceEntity(215U);
    msg.setDestination(1210U);
    msg.setDestinationEntity(238U);
    msg.total_steps = 11U;
    msg.step_number = 93U;
    msg.step.assign("FPPFLIQUGURSXPYHOENOGYCGKQBUCTPZWHCUFFHGMIDXXDIONFDZJPOHFXADHENJIPQBVMWVOMBDYMQADYUZXBIGLDFAMTYWGBJTAAXKHSQEZMWLEWCOZOWGTHAQNKIIDSJPVOUJLVUPKAUUSXBEKTZMWZJIFKFLMZOGKJRLYVNNWRCTQYRSGRSJPJECKZBZRTBCVGHHAWQDFLSNVVLPUOEYRINLYBSKEHXSECRMQNXTSJYWVBACMLIEQCVKTT");
    msg.flags = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.7154192854416584);
    msg.setSource(51044U);
    msg.setSourceEntity(188U);
    msg.setDestination(11921U);
    msg.setDestinationEntity(217U);
    msg.state = 24U;
    msg.error.assign("EHORFHKWOCYTWVTMFZGISUOBUZAXIYLGIENJMYCJBDGPQKRLVMZBULFXLVXQZRVIJWKFCPDQAEHWSDIYNBNIRQCBOMRZMGXFMOAZQODVNEWFLEXPRQIGVEKPTSGDMNCURHCPYZTMLAWQNJAXASKJDYLLRMQSLFIEJPXAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.036117682744016166);
    msg.setSource(52900U);
    msg.setSourceEntity(75U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(12U);
    msg.state = 45U;
    msg.error.assign("LTVOOFUCVXWWGNNDICVHGHBIMOBJMXYSLYIFZYUIQFSFQGIFNNSRAHGOJBJPRPLXOAVKZZPNJWYOSMDQKUEJCJYFQTVCPHUXHXUEGPQNAWPQLYZFVMUXCMROYTBXXCDEEVZRMKBJKAGSKMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.5935419592913173);
    msg.setSource(7537U);
    msg.setSourceEntity(229U);
    msg.setDestination(38738U);
    msg.setDestinationEntity(167U);
    msg.state = 89U;
    msg.error.assign("FAOQDZZXQTWAOMVMPAFTLLKHPWMSFFMRECPYSQZSDJMONDFTXKFZDNKCGMQESEHVOXRLKKVDXPPONBSIUMVAUJMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.46877245312932103);
    msg.setSource(22842U);
    msg.setSourceEntity(63U);
    msg.setDestination(27143U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.37141361981419074);
    msg.setSource(33578U);
    msg.setSourceEntity(239U);
    msg.setDestination(47314U);
    msg.setDestinationEntity(239U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.823796713519124);
    msg.setSource(19349U);
    msg.setSourceEntity(16U);
    msg.setDestination(9944U);
    msg.setDestinationEntity(219U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.9481603701999421);
    msg.setSource(7025U);
    msg.setSourceEntity(179U);
    msg.setDestination(7336U);
    msg.setDestinationEntity(43U);
    msg.op = 162U;
    msg.speed_min = 0.06069631608400983;
    msg.speed_max = 0.810451811327952;
    msg.long_accel = 0.6436978838615566;
    msg.alt_max_msl = 0.3344713396735389;
    msg.dive_fraction_max = 0.06639083038979388;
    msg.climb_fraction_max = 0.8696468679593479;
    msg.bank_max = 0.12624430295153544;
    msg.p_max = 0.24572988061388423;
    msg.pitch_min = 0.9302678263621157;
    msg.pitch_max = 0.7155486931621624;
    msg.q_max = 0.9371513990328376;
    msg.g_min = 0.4924558334483592;
    msg.g_max = 0.49327118528174285;
    msg.g_lat_max = 0.6994629893143041;
    msg.rpm_min = 0.8826340862969093;
    msg.rpm_max = 0.5390851319136701;
    msg.rpm_rate_max = 0.7698323931987467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.35321807366970304);
    msg.setSource(58709U);
    msg.setSourceEntity(251U);
    msg.setDestination(55389U);
    msg.setDestinationEntity(112U);
    msg.op = 175U;
    msg.speed_min = 0.8180631310773373;
    msg.speed_max = 0.3662524702423723;
    msg.long_accel = 0.2869371880329794;
    msg.alt_max_msl = 0.9588584167246836;
    msg.dive_fraction_max = 0.06955034182647524;
    msg.climb_fraction_max = 0.6386928075134628;
    msg.bank_max = 0.5984850152046418;
    msg.p_max = 0.21147949383727183;
    msg.pitch_min = 0.20189178067006597;
    msg.pitch_max = 0.23143798318579356;
    msg.q_max = 0.2350010324335159;
    msg.g_min = 0.039026269271188685;
    msg.g_max = 0.707834198245495;
    msg.g_lat_max = 0.9165664766101163;
    msg.rpm_min = 0.07399690270811121;
    msg.rpm_max = 0.002241043643098961;
    msg.rpm_rate_max = 0.6393530569100638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.018031259694085366);
    msg.setSource(47960U);
    msg.setSourceEntity(93U);
    msg.setDestination(36926U);
    msg.setDestinationEntity(122U);
    msg.op = 118U;
    msg.speed_min = 0.3185689592709553;
    msg.speed_max = 0.5863579128642579;
    msg.long_accel = 0.6468697209978215;
    msg.alt_max_msl = 0.8263291432083674;
    msg.dive_fraction_max = 0.8529626245822675;
    msg.climb_fraction_max = 0.059042353075438814;
    msg.bank_max = 0.411526551416337;
    msg.p_max = 0.29899234775305994;
    msg.pitch_min = 0.9930152633401368;
    msg.pitch_max = 0.8263142464871447;
    msg.q_max = 0.11179722566110528;
    msg.g_min = 0.7749605986419529;
    msg.g_max = 0.4517718488067617;
    msg.g_lat_max = 0.9606066058891286;
    msg.rpm_min = 0.5536149359151944;
    msg.rpm_max = 0.43039570357939116;
    msg.rpm_rate_max = 0.13996197508989605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.34841191288228845);
    msg.setSource(16022U);
    msg.setSourceEntity(107U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(248U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.8735728431438016);
    msg.setSource(49235U);
    msg.setSourceEntity(158U);
    msg.setDestination(29226U);
    msg.setDestinationEntity(67U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("VKXBVIKNXPUJQHLYJEHZDQTXRJWIARGVVUGTUMXVFDZQZSHZYHGWQTRCCLJYWIHTEBYUNISPBRRMDQIMLWFWKUCCCTCHGSPTMEBQNDOFHOBKL");
    tmp_tmp_msg_0_0.lat = 0.28347567894603076;
    tmp_tmp_msg_0_0.lon = 0.9608489523687023;
    tmp_tmp_msg_0_0.depth = 0.7816160166885489;
    tmp_tmp_msg_0_0.query_channel = 251U;
    tmp_tmp_msg_0_0.reply_channel = 170U;
    tmp_tmp_msg_0_0.transponder_delay = 110U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.644433269378454;
    tmp_msg_0.y = 0.30827315478891737;
    tmp_msg_0.var_x = 0.7508002814573518;
    tmp_msg_0.var_y = 0.6156058327483247;
    tmp_msg_0.distance = 0.5374096288785832;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.5939337206135704);
    msg.setSource(11364U);
    msg.setSourceEntity(87U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(195U);
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("FIGNTYYVWHADUNXQEZJDVUHTUCNIRSXEXKOSQBPCYDQGLMZKSNAQFNIFHUGLEXKKQWNVIZVPPUYSUMLUKZQCWJWDBJKCEXESKLBASFHWLYMERVYFXCMCXPZZTLVOJIVWBJGQJPFUWSRSFHHLZMTTHIDSMPT");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("RGQRNDWPMRAEUPQAZWCRMWSLVJHTJSIBHMOFEKYHFYVDWDXAUZXNRPGJXGSXIPCTBVGRPYOSRYWDJDQUUQHSHEWCZBUSOTPCOZEPANFVVJYSCBBTNYYWQNDCYFKXXYQPINJTMJEHVBFFWFIZKHMGLOIVAOCLKDOTWQMRFUTZKIINZAFOEIHSQKFLDBHMKOHZKBLVCNCVENIMLPMKLARGAQBTLZJQX");
    tmp_tmp_msg_0_0.sys_type = 243U;
    tmp_tmp_msg_0_0.owner = 31324U;
    tmp_tmp_msg_0_0.lat = 0.7472735001849933;
    tmp_tmp_msg_0_0.lon = 0.03807416832647181;
    tmp_tmp_msg_0_0.height = 0.32251610221924065;
    tmp_tmp_msg_0_0.services.assign("EVHJCYUBXASRLIKBCFNBTQIWMAKKJZUFANVLOZDJPFSOIFGHTJDEUSMMJYWIKTCWXQYUTHMCEQRKDTERBTASERXCLPMJTSRGVFSXPLHZRYZYXLVHHPDBAKYLBKICFMIIWITRPXHNEOUPWAOPUYQOMQW");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.10553358199729446);
    msg.setSource(55471U);
    msg.setSourceEntity(182U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.0914727925523161;
    msg.lon = 0.7922546264675415;
    msg.height = 0.25907926040283036;
    msg.x = 0.6993840157233322;
    msg.y = 0.5556672793014957;
    msg.z = 0.8842209243722304;
    msg.phi = 0.9626792386096995;
    msg.theta = 0.45700567398299563;
    msg.psi = 0.1762596772976429;
    msg.u = 0.9129105831541076;
    msg.v = 0.4721392456829372;
    msg.w = 0.8327833011739316;
    msg.p = 0.7170949164406502;
    msg.q = 0.6765546779802134;
    msg.r = 0.9349397514365263;
    msg.svx = 0.3245418668424819;
    msg.svy = 0.9647520277820207;
    msg.svz = 0.1596226659004275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.046811665789629475);
    msg.setSource(9465U);
    msg.setSourceEntity(186U);
    msg.setDestination(57065U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.06493273315246284;
    msg.lon = 0.7482629791275258;
    msg.height = 0.5207750138974293;
    msg.x = 0.8503990369294565;
    msg.y = 0.7262790136618589;
    msg.z = 0.6181296257116343;
    msg.phi = 0.8007632645028435;
    msg.theta = 0.7693303560955763;
    msg.psi = 0.9391521875064122;
    msg.u = 0.041015347610282804;
    msg.v = 0.5147161543727751;
    msg.w = 0.6192608039018;
    msg.p = 0.23747705342646175;
    msg.q = 0.7859572447424434;
    msg.r = 0.3356642392198118;
    msg.svx = 0.4861746467200646;
    msg.svy = 0.30368988372920513;
    msg.svz = 0.28770700741032285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7023182889204669);
    msg.setSource(19812U);
    msg.setSourceEntity(192U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.07947980297738766;
    msg.lon = 0.4555603947095954;
    msg.height = 0.05453793634539528;
    msg.x = 0.629570380585311;
    msg.y = 0.3787064750136808;
    msg.z = 0.9209629073348472;
    msg.phi = 0.8343466775060995;
    msg.theta = 0.3024020442614256;
    msg.psi = 0.68147815867563;
    msg.u = 0.7991803735732994;
    msg.v = 0.61846618505803;
    msg.w = 0.6254323318830723;
    msg.p = 0.8288578827937348;
    msg.q = 0.4384401644138215;
    msg.r = 0.3743539451705955;
    msg.svx = 0.5411432621707005;
    msg.svy = 0.8751275544717754;
    msg.svz = 0.9026484729452194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.31899887292112417);
    msg.setSource(19331U);
    msg.setSourceEntity(55U);
    msg.setDestination(39347U);
    msg.setDestinationEntity(192U);
    msg.op = 107U;
    msg.entities.assign("EVSKLEVRMKPWHWYJAUXBBSKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.8308471926312654);
    msg.setSource(39807U);
    msg.setSourceEntity(129U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(4U);
    msg.op = 137U;
    msg.entities.assign("CYCWVGUYGOGSROHFJFXUVTTPGGZZXDSKFDKHMJXBURCQUOBBCMKNTDUOVXECGKHLRWIQPCANYMHQQESQPKBDRCXSOLMEBFPPWVUYJNWSJZTGVKCTIMYERNKMPRPQUYEZRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.802481510804024);
    msg.setSource(25535U);
    msg.setSourceEntity(202U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(88U);
    msg.op = 25U;
    msg.entities.assign("IZXBNENTGDQLDGIWTZBXITZWMYUHLRBTUGHPVIFMRFJVQCUFOOPYJZKPHOJASWPCKLIUWXLHMURBPXBWUYONCZMFVRATAFYDBERDXWVVRKPNZWASQKLGTCZFECLDYVNHZJNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.9227030733954658);
    msg.setSource(39853U);
    msg.setSourceEntity(79U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(12U);
    msg.type = 100U;
    msg.speed = 27607U;
    const char tmp_msg_0[] = {19, -18, 91, -84, -95, 69, 117, 35, 94, 17, -106, 90, -112, 97, -78, 123, -104, -105, 6, -91, 77, -28, -4, -47, 68, -73, 55, -22, 92, -26, -52, -54, -62, 45, 71, -86, 99, 35, -39, 88, -33, -96, -34, 95, -87, 20, 65, 119, -8, 93, -126, 25, -116, 75, -46, 6, -119, -102, 66, -76, 42, 83, 38, 94, 88, -67, -109, -61, 72, 37, -117, 33, 125, -106, 123, -21, 61, -57, 2, 97, -59, -17, -98, 125, 27, -8, 55, 9, -17, 54, -58, -124, -24, -32, -104, 108, 35, 62, 40, 19, -9, -21, 25, 90, -15, 86, -18, 108, 61, -82, -24, -87, 120, -20, 10, -40, -33, 53, 89, -2, -79, 55, -100, 88, -76, 45, -105, -58, 4, 80, -91, 49, -86, -94, -49, -48, 42, -10, 58, 108, -56, 9, 118, -98, 25, 118, -17, 46, 62, 97, -37, -7, -55, -39, -42, 84, -4, 115, 101, -93, -30, -16, -35, 120, 93, -50, 42, -116, 118, 105, 7, -55, -10, 23, -96, 125, -63, 25, -102, -21, 36, -24, 37, -125, -65, 59, 94, -71, 90, -54, -87, -115, 33, -90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.9550998913630568);
    msg.setSource(11712U);
    msg.setSourceEntity(190U);
    msg.setDestination(52823U);
    msg.setDestinationEntity(140U);
    msg.type = 236U;
    msg.speed = 7438U;
    const char tmp_msg_0[] = {118, -105, 75, -57, -44, 92, -19, 55, -78, 45, -128, -37, -128, -92, 89, -123, 109, 123, -63, -43, 111, -98, 93, 40, 51, -40, -89, -118, 89, -97, 112, -51, -62, -114, 75, 122, 17, -64, -30, 9, -1, 13, 62, 47, 81, 48, 73, 113, -112, 24, -10, 12, -81, -88, 48, -26, 15, 31, 32, 33, -30, -94, -122, -126, 94, 58, -101, -128, -78, 42, 84, 68, -33, 6, 83, 63, -64, 86, 107, -12, 69, 95, -7, 92, 109, -86, 118, -95, 7, -19, 107, 36, -100, 40, -38, -16, 40, -87, 39, 26, -26, 77, 69, 116, -41, -14, 50, -33, 91, 117, -116, 126, -121, -63, 43, 76, 101, 25, 125, -5, -79, -86, -44, 52, 21, 42, -99, 24, 57, -12, -6, -47, 105, -100, 48, -29, 61, -7, 84, -66, 63, -126, -66, -36, -96, -98, -98, -16, 117, -109, -83, -52, -53, -126, 113, 110, -79, -32, -78, -36, -104, 72, 94, 31, 86, -82, 111, -71, 41, -14, -97, -23, 60, -26, -121, -124, -106, 113, -19, 30, 72, 106, 124, -84, -112, -113, 72, -123, -29, 69, -16, 51, 120, -72, -80, -68, -28, -74, -77, 104, 11, -57, 27, -18, 45, -53, -33, 81, -89, -45, 38, 45, 7, 28, 92, -111, 5, -31, -87, -36, 56, 74, -49, -34, -111, -115, -97, -12, 120, -121, 69, -113, -66, -26, 39, 11, 54, -59, 78, -16, -28, -25, -30, 15, -80, 11, 29, 117, 39, 6, -17, 54, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.2358999185863565);
    msg.setSource(55935U);
    msg.setSourceEntity(52U);
    msg.setDestination(35665U);
    msg.setDestinationEntity(127U);
    msg.type = 61U;
    msg.speed = 47891U;
    const char tmp_msg_0[] = {-112, 103, -103, -4, -9, -3, 8, -80, -116, -27, 18, 81, -48, 33, 123, 59, -82, -58, -77, 116, -18, -114, 17, -97, -21, 25, 17, 52, 31, 84, 106, 29, -53, 65, -10, -49, -48, 52, -90, 24, 43, -84, -32, -23, 74, 78, 9, -79, 123, -29, 68, 13, 111, 36, 59, 120, -123, 40, 25, -55, -75, 12, 1, 75, 46, -111, -22, -70, 84, -40, -8, -44, -117, 10, 19, 69, 52, -20, 74, -117, 91, 116, 3, 110, -95, 56, 24, -120, -66, -80, -48, -123, 79, 107, 46, 92, -36, -109, 37, 7, 121, 104, 96, 103, -112, -84, -43, 42, 53, -51, 10, 24, 80, -50, -105, 21, 45, 99, -99, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.7552721592374942);
    msg.setSource(24126U);
    msg.setSourceEntity(105U);
    msg.setDestination(1796U);
    msg.setDestinationEntity(48U);
    msg.op = 109U;
    msg.tas2acc_pgain = 0.881174524879821;
    msg.bank2p_pgain = 0.08043489947431759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.28757589191640165);
    msg.setSource(40233U);
    msg.setSourceEntity(128U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(53U);
    msg.op = 148U;
    msg.tas2acc_pgain = 0.20916848728682647;
    msg.bank2p_pgain = 0.9935500512526576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.8990557433013984);
    msg.setSource(25083U);
    msg.setSourceEntity(105U);
    msg.setDestination(13313U);
    msg.setDestinationEntity(31U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.8489326279634951;
    msg.bank2p_pgain = 0.29695611257017596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.44017096855825577);
    msg.setSource(28782U);
    msg.setSourceEntity(123U);
    msg.setDestination(28514U);
    msg.setDestinationEntity(206U);
    msg.available = 310152816U;
    msg.value = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.61955975624147);
    msg.setSource(64768U);
    msg.setSourceEntity(225U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(244U);
    msg.available = 2667710832U;
    msg.value = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.05174859863020553);
    msg.setSource(28671U);
    msg.setSourceEntity(34U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(74U);
    msg.available = 877395865U;
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.5649890781660886);
    msg.setSource(4094U);
    msg.setSourceEntity(30U);
    msg.setDestination(57546U);
    msg.setDestinationEntity(106U);
    msg.op = 152U;
    msg.snapshot.assign("AVTBHPQWMJKAWAEGOUJGLWLTGEPEWDNVXCWGKYGJSOZVBPCEJBKTAXMCSHRUYVKJUAZSXGRPEEAVGGUHDSSYLFBTUIETPXZVNHUMCPEFBQSRZPRDANMWBTMAQWMLAYXC");
    IMC::TeleoperationDone tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.6075846777951763);
    msg.setSource(59200U);
    msg.setSourceEntity(215U);
    msg.setDestination(52419U);
    msg.setDestinationEntity(182U);
    msg.op = 238U;
    msg.snapshot.assign("VHHSUEOTNFLVYXKMNULISOAOJBOVBUSIVGDAYMTGBDJWVGJYPITCPUCHZNVRQCXJNUAAFAOVAETRSSVEKFSBXEQRYFIMICCTTJVAFOYZEJMNLRXKDBPIQQRWPTDMWLCLUPGKAMQZWWRSWRXOIOPXCBTZVYIALFGFQUMWXLRMQY");
    IMC::ReconControlState tmp_msg_0;
    tmp_msg_0.state = 46U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.976379822545082);
    msg.setSource(63376U);
    msg.setSourceEntity(22U);
    msg.setDestination(54177U);
    msg.setDestinationEntity(211U);
    msg.op = 145U;
    msg.snapshot.assign("LSQQVZTQZCCNSIQZEWYWMABPUANFGIADQLBCKXCFHJNVVDHAFETTKBRRDYKHEVYXCFRUENSSRQIVUMGMIVEFKDEIKJHDZTUHSDTJWJFPGGEJXBCGWZYTRRPCZVMZDTOKWUUHZVPCCHOQANFPBNXAPQBROWRAOFSJMFJZBLLALPDLIIMUUAIOSOKNSYFGDXYJCMZNWLUVH");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.10130577221814074;
    tmp_msg_0.x = 0.03371022793615053;
    tmp_msg_0.y = 0.28711505288314176;
    tmp_msg_0.z = 0.6744051041453349;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.33208935617001256);
    msg.setSource(53748U);
    msg.setSourceEntity(159U);
    msg.setDestination(61579U);
    msg.setDestinationEntity(43U);
    msg.op = 9U;
    msg.name.assign("RYETJABNLUCGBDDMFIFXMMCEKMFLMGFOYWFHUQBOMDRRCFXEWYJEEPYUEUVIBKHHKHCXGPIZGPPZAXETXDJSTSATPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.19161517613336176);
    msg.setSource(12127U);
    msg.setSourceEntity(157U);
    msg.setDestination(31797U);
    msg.setDestinationEntity(89U);
    msg.op = 132U;
    msg.name.assign("MXFEAHTYVGXDMGDWWEJYPNZBSFGUZKJJJCBHDIEOVTJAOVODGJTYWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.25250878828898504);
    msg.setSource(37542U);
    msg.setSourceEntity(99U);
    msg.setDestination(44880U);
    msg.setDestinationEntity(139U);
    msg.op = 151U;
    msg.name.assign("NVLTLUSGKRBXMXISFPVHCRJDXUIAZFZAHJSSFDIPWPKSZKJQOPRSKEUKDIOLIEHWSLMGDEJMAHRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.3895110757047763);
    msg.setSource(43232U);
    msg.setSourceEntity(129U);
    msg.setDestination(23933U);
    msg.setDestinationEntity(63U);
    msg.type = 99U;
    msg.htime = 0.33509384426792044;
    msg.context.assign("YZWFJTHTBFPITTWYXDBKVFQCMAIPQUXKEHNKSGLRRHGDHXULGUWMUKSVS");
    msg.text.assign("RUSZMZKKFTQIJDTLWSIQWWCVSNOFQUXXRZPALAPXFNLEIFUMKOOOCLBJCJMCARUNKMGYVKPYDKLEJTESPDGRGJITFBVZCNCHMVESZSNCNBXUPFTAJHPKERNNFDXJHQYPWMZAEAHWZQDRXHWERLJVSCYDQGIVOMCFGOPZHBXIBBDYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.3343920683154603);
    msg.setSource(64632U);
    msg.setSourceEntity(43U);
    msg.setDestination(48136U);
    msg.setDestinationEntity(12U);
    msg.type = 139U;
    msg.htime = 0.9805327670104895;
    msg.context.assign("XODDYPLVGGUKQGTXBEUUXOALNVFDOMQPQWW");
    msg.text.assign("IRXZSXPYLWJJVAIRMHMPJGJZRVTAQEONPGVXZEIPGNRTEIJDKUQSRLBSDEYPEMCFYVECGTVBTKXCFOUTZGIVCHBFKIQUNGAZNZFIPWQIANXOYMQWHXQABNQHWGLPKZUUKHJYLDHDCCTBKAIDNSWEEFLJFMTFOFBQIOPBPZTXUQFOCJLZLWLNYYUUWNCAKMHLCMVBVEDDKHRJAFDYHUAGERYASWSHSRVUVDPSLMGXMBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.8104319735586255);
    msg.setSource(46125U);
    msg.setSourceEntity(153U);
    msg.setDestination(7178U);
    msg.setDestinationEntity(245U);
    msg.type = 234U;
    msg.htime = 0.5101165224634765;
    msg.context.assign("ZGGRTJRICBLMJRMZQHTLELDMRVJCGAXBSNHSWETMUMIFDTIARPQAWCELEBAPXDNUREENVJKKMHDSLXXNJDQCDGUGYCGBSYJUJQAKZDNGXONAXWAKGRBRWTBAQYUXOVKDHIISPWEKKTLALINVFUVCZSCYZQWVFOEMKFDMRJXQMSHJH");
    msg.text.assign("ZYONHYVVEJLWHTLULNUWFAWWJPPRKFLCVIUCIKGAJTXSDZBXASIKCLEOPYUHYJNUUQBXLRXNRIQSXVVOBDSFFVGKSRAKJHBTMKIRBMAQHVXBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.5128583085453122);
    msg.setSource(24741U);
    msg.setSourceEntity(119U);
    msg.setDestination(20624U);
    msg.setDestinationEntity(145U);
    msg.command = 177U;
    msg.htime = 0.35947868940634553;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 148U;
    tmp_msg_0.htime = 0.5485424570570487;
    tmp_msg_0.context.assign("MJXBCFBRQTRJVONABRSVVJMLUWGQXXPIYAWKAJXODPICQNWIHSEGRWBDEKVBOWKSQMVMFUSPTKAGKANOLWNQDZPZVCCYTEYPDULZCGJUEGMCJQTNYHIUPYRBAUHWMZOEHFTKAHEPDGVUZGJSSHTFX");
    tmp_msg_0.text.assign("WTQNQCPHLSKUZWBKMVWJCJFNUWMOIMCITVAGKSXNFZKEIRGXDIGJWND");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.13695299061118238);
    msg.setSource(42367U);
    msg.setSourceEntity(74U);
    msg.setDestination(38383U);
    msg.setDestinationEntity(29U);
    msg.command = 163U;
    msg.htime = 0.07216421736013467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.3172260205046795);
    msg.setSource(15528U);
    msg.setSourceEntity(181U);
    msg.setDestination(42544U);
    msg.setDestinationEntity(49U);
    msg.command = 120U;
    msg.htime = 0.3138239325643801;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 121U;
    tmp_msg_0.htime = 0.6363964004518572;
    tmp_msg_0.context.assign("QCGSLOLOVPPTIOSTGRRIPQUKFEHGX");
    tmp_msg_0.text.assign("NCZYEDYDCXJAOETSKSLALFUABTIWFNWGPAYPFITGBANQZIODM");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.9786231240784955);
    msg.setSource(43054U);
    msg.setSourceEntity(158U);
    msg.setDestination(7143U);
    msg.setDestinationEntity(38U);
    msg.op = 64U;
    msg.file.assign("BSDDKDJBGRFASBNELTENGGPXZKYRVQAVGLGUUOJVLXJEMECZIYMYZPPHCLYPAMTRZBRMPMFEIHYHEWOOOUVJAGUTGWLAJOSOGVBMDCSWBHNBSNINCVOXQDNDFRXIIXXUVMQPEYIFMGYCWRBWVYRTXROTSQFFTVPUCAYNKNYWFJANKRUDZKINBXEJZFPHJDPLTMAWZTEKGJHKQXCKCLUZWXMHTSDLJIASUZQISHFWOCFDELCRTOWQSQHUILVQKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.11844540189259622);
    msg.setSource(38679U);
    msg.setSourceEntity(130U);
    msg.setDestination(25462U);
    msg.setDestinationEntity(103U);
    msg.op = 145U;
    msg.file.assign("TRTJZQKBXWQWZSJKFOATSXUXUJJNEGMFVTCWEDWIFKBACDTRBEQZEUEOGNNVXTFYOUOBIZPRSVNGPHFMOSMKEWEYPHEVSMPEAPJLUMQKXHXIFJGVLYHSCRVUDDINEPKYDJZOFUIWRQLDABCIVSBIGCMNPUYZGXKADRNCQWVBNRHKXFHAGSNPCYKJCWZFNZXVTUOOMQDPHBWYJYGRFGMCYPIAMQJHKMVOAZUTWLLHTDLLQIRBQILSAXYCRZLOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.7461357918064352);
    msg.setSource(24099U);
    msg.setSourceEntity(185U);
    msg.setDestination(37668U);
    msg.setDestinationEntity(31U);
    msg.op = 25U;
    msg.file.assign("WCDQOBOYTCPEMXYEGFJMMIQDSNTUNZRSSLGKCKHDYEIHAKHYGXHZNDJWIALDWQJXTGPILCMAYTBIOYRGFMPVJZWHFFHZKWQEPXUGGSVUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.40316138140590774);
    msg.setSource(33989U);
    msg.setSourceEntity(10U);
    msg.setDestination(35847U);
    msg.setDestinationEntity(92U);
    msg.op = 43U;
    msg.clock = 0.380474110886867;
    msg.tz = -24;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.9600418667114128);
    msg.setSource(2777U);
    msg.setSourceEntity(123U);
    msg.setDestination(39656U);
    msg.setDestinationEntity(123U);
    msg.op = 144U;
    msg.clock = 0.924942154733481;
    msg.tz = -57;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.4121254825393428);
    msg.setSource(23522U);
    msg.setSourceEntity(126U);
    msg.setDestination(10406U);
    msg.setDestinationEntity(77U);
    msg.op = 108U;
    msg.clock = 0.3486845537961851;
    msg.tz = -121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.4280767556807856);
    msg.setSource(56212U);
    msg.setSourceEntity(199U);
    msg.setDestination(27841U);
    msg.setDestinationEntity(149U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.5740637847543036);
    msg.setSource(11423U);
    msg.setSourceEntity(60U);
    msg.setDestination(44207U);
    msg.setDestinationEntity(41U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.6647177649791096);
    msg.setSource(1862U);
    msg.setSourceEntity(165U);
    msg.setDestination(48739U);
    msg.setDestinationEntity(235U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.11838118034486655);
    msg.setSource(42369U);
    msg.setSourceEntity(111U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("JLXFAPXVRUFEEKHWBLTNTPWAMBVX");
    msg.sys_type = 223U;
    msg.owner = 356U;
    msg.lat = 0.5859204814492881;
    msg.lon = 0.7099846669013585;
    msg.height = 0.5502109254758275;
    msg.services.assign("TYRHIHKAALEZRONGNQZRDBSJSTHZOLJEOMCYZQJDVNZSMIYHFIVCSXSTFPLMWDMEHLBLOKCKGYUVWIBDPNESUMWDTFCSBBVAWPXBMTFACISERYWXGADMOVJZRHKRTUEFRUCXXGURQNKMNIOXLCXBPCBQDOGIVRMBRPXZPKWOUSNJWIALKQQUCETGVXXJYIWLFLFUVEPBJND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.03280956125915391);
    msg.setSource(39843U);
    msg.setSourceEntity(16U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(124U);
    msg.sys_name.assign("DXXJEIKNHCMNGJMWFRBXWLPGQDPJWUHSAEDMOKWEYFRTRMEHPOIWQLKMVNAUNNRUBCXYCXGBNHKKYDOGZZTTTDQRCSLRFOXVJOIKIROOOVBHLFMMFXZENVAASQSJUPDSEULIBETLZJHXUDQIASZCNVWIPSAVKC");
    msg.sys_type = 211U;
    msg.owner = 61390U;
    msg.lat = 0.07684161956335;
    msg.lon = 0.7219837048958554;
    msg.height = 0.026560144412496545;
    msg.services.assign("EMAHISAPXRFKOWFEEJQVSMDKJVWXEYJUMLDTXHWZBZODKSNCQAILTQDVLYLGECWJTLUVFMUYONGNEAORWBXYIAIMCGQTSUBNAPNUKDJXDZCSNHDZFJSWIELTIOHTHDHCRCQUUFMXPFYZBAGYZCQZUMKWHRITRXXJKZTDPTCEEYIGHMWEJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.713753187982691);
    msg.setSource(30477U);
    msg.setSourceEntity(152U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("POVQACPXDTNJIIJXXKTEHSAJUJGUIWSWBRQKVNYWYTIVLMDWBXQWOISNRXANTBK");
    msg.sys_type = 203U;
    msg.owner = 15703U;
    msg.lat = 0.3523329226341382;
    msg.lon = 0.5548985899675597;
    msg.height = 0.10442828772440738;
    msg.services.assign("THXWVOOFSFUBCEGBJKYYOBHVXGLWTXIIEBSEHYATAFXLGCTZMBWUZHKLPMRIHXMDKVNYWKZDZYVKPKCEQOUSELOUNTZYUPZHOJSYEPKBNPFXDYUQWZRQAMGDQLHBOQTMHCFJIJAOPHWDCMIULDMJERNGARSXPGVJIILVVTSLMBUDBFDGJVSGCVTZFSNGJNCEJCLAKNVQRYKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.842404628308052);
    msg.setSource(2309U);
    msg.setSourceEntity(5U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(197U);
    msg.service.assign("HLZOZCYMZQJQLEAHAWSPGHOBWLDTSFVWLBCQOITIJEPUJTOMASRZOSHPODGDKRXOGMEXKHWVPTUMSVXINJYNBKDUAPNWNFCNWBKTXZJXDKRLDRYZVVFIBFTBUUBPMBHKLGQRAYMXCVSSJPICEWJVEEGRBIEKMZFEE");
    msg.service_type = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.7399214364194501);
    msg.setSource(22110U);
    msg.setSourceEntity(126U);
    msg.setDestination(32170U);
    msg.setDestinationEntity(69U);
    msg.service.assign("JSRPPWFUQMINCYTJDPLEQRNDEZXVCGBDZSENUERMPSFOMFNGKJCOMOMLMXSELGZZUDZEXACBGAWFWDQIINPHKACPOWRPZJHETU");
    msg.service_type = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.7842375844174362);
    msg.setSource(51582U);
    msg.setSourceEntity(127U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(169U);
    msg.service.assign("VGGOZPKUKMBKSYUQJIFWAOKETNCRQNOYLQEJMILZCRHDCNAJZWTGMGVSETBMPNPOXUFDADMXGIIFYUJQXFLOUHEWWBHVHPJMQMODWUPDXCYJTXGDATJMICGLPWRFHGHVAYXOSVZMLCYWAUCZAFBNENGTXRPRQDHACIRKKRSZNBOCBYFXNJEAZFSBPWZPPRVBAFTQRKBHULITVZVVHYTINGWQNVTQUS");
    msg.service_type = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.03839973538609698);
    msg.setSource(37078U);
    msg.setSourceEntity(89U);
    msg.setDestination(15738U);
    msg.setDestinationEntity(217U);
    msg.value = 0.9166766804237253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.33053761096104683);
    msg.setSource(45707U);
    msg.setSourceEntity(170U);
    msg.setDestination(35031U);
    msg.setDestinationEntity(55U);
    msg.value = 0.3338942833669335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.28622354662904015);
    msg.setSource(26935U);
    msg.setSourceEntity(46U);
    msg.setDestination(28738U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3206159130631082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.8755370978543389);
    msg.setSource(59956U);
    msg.setSourceEntity(135U);
    msg.setDestination(1742U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6684131219077166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.25641259833845564);
    msg.setSource(21442U);
    msg.setSourceEntity(29U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(208U);
    msg.value = 0.9180576123181432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.9439770957626251);
    msg.setSource(37496U);
    msg.setSourceEntity(145U);
    msg.setDestination(55503U);
    msg.setDestinationEntity(14U);
    msg.value = 0.04772555662623312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.8296417508808172);
    msg.setSource(22046U);
    msg.setSourceEntity(154U);
    msg.setDestination(31278U);
    msg.setDestinationEntity(191U);
    msg.value = 0.02865967788450574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.2549341069088179);
    msg.setSource(5259U);
    msg.setSourceEntity(89U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(214U);
    msg.value = 0.998116441089467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.2222908686674684);
    msg.setSource(41341U);
    msg.setSourceEntity(117U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0480120194045176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.28970260848727514);
    msg.setSource(9651U);
    msg.setSourceEntity(182U);
    msg.setDestination(64857U);
    msg.setDestinationEntity(195U);
    msg.number.assign("ESLXBBDREIDPNBQMSINLNYKHFJJSWEFPSIHEJNOVAEEMLPMTWCSDFVQREJABNOAXYUHXKTGORFVGUOHGGIHLGQLLSGSCDYUNMJYTTDQODZGUQBBZMQAIYZLJPGCOVTBSRPRWXFHOKRUFXQFBXMKUQJDQHEPCYAWNISTRRKKYVJMFUDDZOMJOGOVXPWREQACTKCUACTIPAWATWWLFIVHWVZXCZKGMUXZZSNVHJHUDZ");
    msg.timeout = 41202U;
    msg.contents.assign("RRIKYOQJTSXTWHGOEDGQSXTKHBGDUJXCZEPPFEWTHXNHKPVPUJDJSGLQACVQRAPLIZOOZEOCYBJAPALQMRDIIUHBMFLIASYYOPTTRKWNJFVGOQZKMZRLLMBCJISASGWUEUKNAOMGMUMYVDTJDASHQCNESELZZNXIIEEPYBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.5498026730123848);
    msg.setSource(13502U);
    msg.setSourceEntity(149U);
    msg.setDestination(33038U);
    msg.setDestinationEntity(144U);
    msg.number.assign("RHPVQXMYTFHGMJBVTSCDRPZEUJXGOZAGUIOMHBCQZLEQGXILNQYUXABVLOKDRNGBIPILQFXXKKHYEIFTQEDETWRAACWKJYCUHVXHAZZXSBXVWMVQSUIWRYCYQHSVGLEOCOMUJPRPRPWLFSBNTYOJSEPMKDCRMSZHKMY");
    msg.timeout = 57186U;
    msg.contents.assign("QJMWDCEMHYEFJIMTCZEOSNFHCZMYVEFJDPAKNIRABRSGTFUKXTKYVTEAGLKBNGBZWBHGGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.7283765781506819);
    msg.setSource(10817U);
    msg.setSourceEntity(181U);
    msg.setDestination(35080U);
    msg.setDestinationEntity(196U);
    msg.number.assign("KICEHITIFLCUKIYNMNNMFXXFRZBQYDBUQHRNGVGBFHTWVDYATYM");
    msg.timeout = 2826U;
    msg.contents.assign("GKLBYYUNDSMBVXYOCQMRJXIHGPXCVTXTJPAAETAUJZHAIBDIDQAKKNCHAMYOQUCPMUTUZWAVWZRTKMJUSEFWJJDONBNJNSIQFWYMXXSDGOWSOXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.08692019636838377);
    msg.setSource(52725U);
    msg.setSourceEntity(175U);
    msg.setDestination(62762U);
    msg.setDestinationEntity(243U);
    msg.seq = 1871768373U;
    msg.destination.assign("AOPVXOHZDWIAHSZODCPGQHZKFPPFAEAXTXRIWPDSODAFXWQUNGBHUFNEEILSNIDMVKYVBRQLYQTHRSBKYUNUFCMBVWETURRTIDLJHTCALNGDCRFJQUYVRMLEAKWZBXYTYMCHBTGGVWLXPZIUJABLJDXGDTGHCPCMOGEIQXEIRHNTTZFKQYIMAMSVVUBGCZSZQJJJKBQNOVGOLMCOAVKEEPZYKBJN");
    msg.timeout = 21002U;
    const char tmp_msg_0[] = {37, -74, -31, 46, -120, -93, -40, 8, -52, 5, -48, -8, 93, 32, -18, -24, -100, 79, -105, 44, 75, -86, 95, 68, -5, -23, 70, 2, -29, 47, -55, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.40281409838804605);
    msg.setSource(23260U);
    msg.setSourceEntity(247U);
    msg.setDestination(43561U);
    msg.setDestinationEntity(117U);
    msg.seq = 2085632837U;
    msg.destination.assign("SJMZNLXMJLCIABHVXHXWDHZCKQRKQRFVQYDKHDFVIMKFTVIUQ");
    msg.timeout = 6408U;
    const char tmp_msg_0[] = {-84, 72, 125, -110, 84, -75, 112, -115, 22, -27, -103, -42, -124, -92, -73, -28, -99, 82, -115, 53, -111, -67, 121, 101, -106, -9, -102, 67, 56, 19, -33, -34, 63, -36, -12, 87, -12, 102, 80, 104, 30, -23, -33, 3, 56, -29, -6, 26, 106, -52, -104, -27, 116, 33, 45, -94, -89, 117, 97, 115, -104, -88, 115, -110, -117, 8, 48, -125, 58, -14, -112, -113, 16, -91, 23, 96, 33, -43, 25, 102, -1, 77, 35, 2, 9, -124, 39, 118, -65, -38, -41, -52, -23, -118, -33, -14, 2, -37, -85, 76, -118, 103, 66, 44, -65, -43, -55, -100, 45, 104, 82, -119, -2, 61, 32, 59, -30, 10, -72, -35, 9, -78, 69, -49, -104, 58, 92, 98, -61, 42, -34, -84, -21, 48, -61, -7, -94, -56, 29, 13, 122, 79, -97, -12, 40, 7, 68, 37, -49, -118, -18, -87, 2, -37, 9, -36, -52, -67, -34, 4, -73, 80, -70, -71, 6, -124, -6, 35, -64, 25, 125, 26, 100, 81, 88, -43, 96, 11, -88, -20, 47, -115, 126, 40, 4, -94, -120, 66, -3, 16, -67, -66, -11, -14, 34, -76, -65, -81, -17, -93, 96, -100, -31, -31, -37, -60, -35, -43, -68, -124, 20, -29, 27, -105, 2, -5, -10, -4, 63, 85, 32, -69, 1, -49, 19, -11, -18, -123, -85, 93, 102, -13, -112, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.041979563976103695);
    msg.setSource(48011U);
    msg.setSourceEntity(11U);
    msg.setDestination(34870U);
    msg.setDestinationEntity(77U);
    msg.seq = 736734380U;
    msg.destination.assign("MGHYFLFJQVCRQGOEENKNBJFNIKFUDTEZLMTYYWTDCJVXSLZWIRLLSAHCUCAHIMAQZRZBRORHMOTWMTXLHYAYGLILYRUXQXUYPMSSIXXVPTUHQEAJQXGMBACVBDSXWBAIZMVCIFE");
    msg.timeout = 29235U;
    const char tmp_msg_0[] = {108, 32, 64, -71, 74, -113, 9, 20, 54, -53, -91, 99, 18, -120, -17, -89, -48, 17, -53, -47, 19, -57, -84, 117, 30, 80, 120, -125, 20, -32, 98, -115, 31, -59, -11, -96, -55, -56, 38, -6, -63, 72, 117, -64, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.577786172269101);
    msg.setSource(26639U);
    msg.setSourceEntity(214U);
    msg.setDestination(56286U);
    msg.setDestinationEntity(89U);
    msg.source.assign("TXJKUTTLZARKQMYNFMIOSUBRVKBXVDSYB");
    const char tmp_msg_0[] = {-127, -95, 3, 17, 121, -18, 42, 91, -40, -3, -17, 107, -54, -93, -89, -81, -83, -110, 14, -23, -60, -126, 55, -102, 96, 29, -57, 55, 45, 78, -62, -128, 126, 78, -24, -20, -80, -128, -62, -35, 64, -45, 7, 41, -44, -109, -106, -51, 99, 18, 122, -90, 24, 75, -46, 100, 74, 107, -91, -106, 105, -37, 58, -28, 81, 16, 101, -125, 73, -124, 52, 103, 24, -23, -17, 104, -12, 3, -114, -76, 59, -116, 126, -3, -9, -73, -4, 55, 116, 65, -58, -19, -85, -124, -30, 68, -16, 66, 71, 3, 92, -107, -114, 59, 47, -111, 47, 20, -15, -10, 69, 62, 107, -59, -111, -44, 83, -87, 33, 28, -127, 3, -39, 43, 5, -11, 110, 94, 8, -55, -115, 13, -109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.961431248582034);
    msg.setSource(44305U);
    msg.setSourceEntity(189U);
    msg.setDestination(52235U);
    msg.setDestinationEntity(189U);
    msg.source.assign("HLZUSFJTVOCLPKSHHMBSZXZJUGJCTLNCQTDHLXXNAVOPOBGYZTSQSXEAQOULOYEWKWCWAICWNCGPIBJGXIRZIPNPBUIYAYDADBELTAEGWRTJSFBLBOPORPAYZGTIMXXHGTYVQUKKKAHAXEZNOMIRJIFYGJTFXEDDCFVWYMDRJODWHFGUPLQUVXNNFJNZSHDCQMQUDTOKFSBYUEHIRADPR");
    const char tmp_msg_0[] = {58, 85, -117, -34, 80, -22, 60, 5, -78, -31, -107, 13, -99, -46, 125, -16, 59, 84, 89, 39, 52, -119, 103, -12, 9, -123, -95, 44, 104, -45, 106, -28, -87, -77, 4, 91, -121, 66, -75, -127, -40, 94, -103, 51, 7, -114, -109, 47, -22, 11, -95, 112, 4, -77, 8, -40, -8, -25, -96, 123, -52, 126, 110, -47, 104, -68, 105, -52, -45, 82, -4, 51, 90, -119, 93, -112, -36, -27, 12, 9, 93, -24, 36, -80, -49, 120, 12, -106, -2, 30, -93, 16, -39, -89, 58, -50, -37, 15, 16, 65, 65, 83, 77, 88, -26, -47, 90, 67, -16, -119, -108, 95, -6, 19, 113, 91, 122, 56, 79, 22, -103, 24, 68, -115, 62, 60, 33, 125, 16, -5, 94, 117, -75, -99, 50, 98, 125, 39, -18, -90, 27, -82, -33, -55, 34, 45, 13, 10, 40, -78, -56, 77, -96, -106, -22, 102, -80, -107, -29, -123, 62, -42, 15, 86, -20, 18, 122, -93, -57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.0478422443916422);
    msg.setSource(6701U);
    msg.setSourceEntity(85U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(58U);
    msg.source.assign("DDJRJKUFKPGPXBLEXDJFVGLADZLMMBFENKGCWXZKWFNCQODXMHCRIOMFSDJSTNUVNTNYAXFDLHBIYHOGFHLCRAYRAXPVQBFEUQWBEMORTVKZNTOWYANUVLLPGSNRWOZCPFNIHZPPIPPBLIMEQUBHIAAZBZCFJKTVTOSQJXIQTISCVBCGKEWH");
    const char tmp_msg_0[] = {-52, -43, 93, -45, 32, -58, -123, -123, -75, 99, 112, 59, -127, 30, 84, 12, -126, -27, -110, -10, 14, -114, 33, -35, -81, -125, 87, 61, 48, 76, -25, -69, 40, 55, 73, 4, 106, 115, 102, -59, 126, 38, -62, 118, -34, 93, 15, 106, -64, -59, 44, -39, -121, -26, -21, -100, -125, 87, 109, 47, 39, -112, 21, -68, 5, 40, -116, -123, 107, 109, 84, 114, 14, 83, 65, 6, -112, -23, 96, 80, 49, -118, 5, -65, -53, 81, -120, -43, 115, -72, 69, -51, 6, -110, 119, -87, -104, 65, 113, 70, 124, -94, 97, 79, 108, -70, 7, -72, -12, -9, -41, 51, -125, 12, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.42953877040438204);
    msg.setSource(1212U);
    msg.setSourceEntity(163U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(77U);
    msg.seq = 2749113021U;
    msg.state = 251U;
    msg.error.assign("FNULJHKQBDPFOLYHKTHXJDXPUUIRSENDERJBEZJDOIDLRKZXJDGGMCQIBGGBEXKARMYPGCYSOTANZHTCETWWFBUZEVNHOQQPYRLISZLVZSFDHJSZNVOSROLQHUMJIVWFMRGTRDLWGNSAVCTXKNQADMFFUMELVIYURHCHAKFRFYXWAQKKVKQISYVJGMCPPECCLBVZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.5298857192120198);
    msg.setSource(39066U);
    msg.setSourceEntity(85U);
    msg.setDestination(20494U);
    msg.setDestinationEntity(61U);
    msg.seq = 1498136310U;
    msg.state = 136U;
    msg.error.assign("IHWTTSAIMOOEVXRSNXJTXCISEQSIPKIPDWDDJUJMDBYZZNCTLQCHFGGCLTJYRTORGLTBAEFEFDBZSNZJYJGGFXKLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.17776153279168505);
    msg.setSource(11624U);
    msg.setSourceEntity(141U);
    msg.setDestination(58705U);
    msg.setDestinationEntity(254U);
    msg.seq = 4093998654U;
    msg.state = 192U;
    msg.error.assign("VKNYRFFZOKGNRTANVCZGAJHEERIFYZLZXILYZHQOASTADTSGXAFHYDUDVRLGWJCEMBEQSIRNVWKZDRWTGQWQKHOTDPPYPWFMGNVOTAX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.557799914063854);
    msg.setSource(12593U);
    msg.setSourceEntity(71U);
    msg.setDestination(6769U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("PINOQGRLDNSLGZBSOXNFVIOQQAQNGTBGZREHWDMCRRAQOIGSQVLKNCHWXZDVUPMLIFXSQEHQWEBYEKKMPWRPWVUTBCTADQEFEJLCOAMALTXFVPWFHYFUMPNYXIRCCROKJMGSLDMGJYBDUUJRNYZDBTMTFY");
    msg.text.assign("JVRHWIMBKTKWNSEDPTRQAAWRSDBEIXVBFXKFWYPOGESQXHNCUOKMAIISJVXEKPXYNWJWNTDCCUDDFZGENJSXFMQKMLTLXYNEYZTGMRGHKVQCAZAOMUPLJXKGASBUUZRGPLJFKAWRAETIJYMJXOQQHZVESTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8984138219421575);
    msg.setSource(27113U);
    msg.setSourceEntity(245U);
    msg.setDestination(22947U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("RWAZDTXHRCGFTSTTDJZGDAYJBOKUSUQKQHSBOQBAQUVIZLYN");
    msg.text.assign("NBIAXAXQJRQBXOFNVYDBIZRYUYSEKPFCENGMGFJUUEAMECOCHWGWUWMRXSPEIPMZBHMRXHKDQNDKYAPMCLHELVHVYSCBYDOZSBJWZDMYRQGKFKMAAVMLUFIZNXAWCHJTWZDUNNQTCIGVQPLVJNRTABSSHBPPSOXXKFVTSQCETBF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.8880722559437835);
    msg.setSource(9607U);
    msg.setSourceEntity(125U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("OTHWJDZEVUYTKQASBPKNGUYKQ");
    msg.text.assign("AMYOKQAGKNYUWIWCWRFPKVRPUHLITIMEUBRDHAEAQITOPLHDSEVATJQDJLPCHUOTFEFSFRZNQWKKLCGBZDFOLPLXWWVNYMXDZVMXXOPDYVSCLUNAUAJCEBSPTYORHYUIRERHCGZJSRQXBBMCNJVOSNBVKKRYDDZBJZTHXOCQFHJVQCXEAMYXUXMHYWELTBQIGMIFGNFZIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.04587621591993063);
    msg.setSource(13829U);
    msg.setSourceEntity(163U);
    msg.setDestination(16848U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("OQVRJQWGBKQHSGRLAFK");
    msg.htime = 0.8903929952158969;
    msg.lat = 0.04511274381226493;
    msg.lon = 0.7320573024780972;
    const char tmp_msg_0[] = {9, -93, -20, 8, 59, -2, 14, -105, 98, 59, -81, 49, -28, -126, -67, -8, 39, -86, 113, 15, 112, -39, -81, 73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.49453251122546704);
    msg.setSource(26433U);
    msg.setSourceEntity(224U);
    msg.setDestination(35008U);
    msg.setDestinationEntity(79U);
    msg.origin.assign("COUKGQANKPJQIHCMZKSPBUMJTTFGXPRUHLBJIQIZOZEPIJLDZUYWWCZMOTALFYFISHECKKTPYROAAVBHPKSGGOBQWAVRESEXQKDZLHCOFXKHWSSVHAJXGOGBYVVVYLJHTYGKIVF");
    msg.htime = 0.35661497034999623;
    msg.lat = 0.7516110112831803;
    msg.lon = 0.6065707045210209;
    const char tmp_msg_0[] = {-23, -37, -67, -30, -91, -75, -40, 48, -43, -104, -80, 4, 60, 68, -57, 66, 72, 121, -45, -63, -53, -72, 110, -43, -64, -40, -36, 62, 23, -11, 45, 121, 26, 63, 93, -1, 109, -112, -73, 110, 16, 64, -122, -124, -33, -47, -28, 81, 32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.20675387864460804);
    msg.setSource(24641U);
    msg.setSourceEntity(13U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(215U);
    msg.origin.assign("RNIAELTGVXWHJDRTEORWSASUBIKUEWDNMBDIDGMVWICDFEAWDVGIOLWRUWECKRSLVNPNCSHAKFIAMHQTOTTCAJYVEKFYCQLJSQMFBYGIRDGFRPLOQZULYKPRKOLFHJBUFZBQUBAQXXHSOCXPAVYXTOXVCZHUPTUJHVNEFZEHXGSNZDRP");
    msg.htime = 0.8790161839427854;
    msg.lat = 0.15745484219472505;
    msg.lon = 0.9653682569512612;
    const char tmp_msg_0[] = {-49, -110, -49, 67, -19, 22, -101, 81, -103, -9, -48, -27, -71, -89, -124, -42, -25, -48, -73, 72, -12, 109, 119, -12, 1, -30, 38, -86, -65, -89, 84, -110, -39, -94, -82, -33, 112, 123, 34, 95, 65, 48, -49, -30, 45, -40, 68, 18, 44, -64, 116, -127, 89, 23, 44, 68, -79, 17, 0, 79, 68, 107, 14, -20, 67, 73, 1, 53, 18, -6, -7, -114, 28, -73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.5693376899131504);
    msg.setSource(41663U);
    msg.setSourceEntity(76U);
    msg.setDestination(36054U);
    msg.setDestinationEntity(230U);
    msg.req_id = 63167U;
    msg.ttl = 25541U;
    msg.destination.assign("DIJPPFTPDKBRNLUOZYXLTVSDGLEOBMGHKUVFZBMXKAAFPAREVERZBOPQCSVMKRZUJROAKKLEPLCZVONGUJNKVWSHXUOJUDYSDHWQRQTRBOVYNEVTPRNGSLOEHUXGJWDML");
    const char tmp_msg_0[] = {-87, -26, -20, -3, 84, 121, 61, 87, 20, 105, 115, 114, 115, 124, 77, -124, 89, -24, 104, 86, 99, -31, -62, 47, -64, 36, 5, -52, 108, 12, 115, 92, -105, -25, -117, -75, 57, 96, -34, -101, 124, -50, -118, -83, -13, 31, 47, 78, -87, 89, 14, -121, 80, 98, -89, -61, -119, -15, 126, -93, 117, -84, -76, 20, 66, 17, -117, 54, 30, -105, 100, -20, 79, -58, 4, 57, 113, -93, 96, -32, -117, -111, 118, 55, -105, 101, 78, -41, -56, -2, 77, -122, -80, -77, -41, -95, 39, 5, -7, -87, 91, 111, 60, 83, 51, -109, 47, 84, -53, 30, -55, 124, -59, 12, -49, -46, 4, 24, -34, 104, -37, 56, -121, -104, -4, 21, 71, 16, -81, -96, 0, 102, -48, -84, 116, 108, -34, -113, -28, -16, 56, -53, 24, 69, -35, -91, 40, 27, 64, -35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.6862273832945162);
    msg.setSource(3237U);
    msg.setSourceEntity(118U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(252U);
    msg.req_id = 58460U;
    msg.ttl = 61403U;
    msg.destination.assign("GJNSTMXHBDFNWMGGEBFZYL");
    const char tmp_msg_0[] = {-35, -105, -105, 22, -115, -71, 51, -86, -98, -46, 46, -24, 64, -14, 82, -64, -73, -1, 32, 71, -21, -123, -7, 14, 110, -21, -103, -48, 88, -34, -83, 121, -4, 103, 13, -59, 8, 55, -1, 15, -18, 85, -61, -16, -2, 98, 97, 56, 99, 90, -91, 20, 84, 99, -55, -38, 54, -124, 95, 75, 24, 88, -122, -88, 102, -124, 120, -34, -110, -71, -28, 113, 62, 98, 21, 46, 68, 86, 89, -79, 80, -29, 105, -47, -40, 29, -63, 120, -30, -27, -112, -63, -59, -68, -38, -65, -124, 89, 77, -91, 62, -80, -107, 55, 32, 55, 67, -44, 15, 112, -53, -119, 125, 110, -86, -101, 91, -62, 116, 86, 33, -70, -100, 106, 39, 101, -48, -112, 98, -92, -58, -79, 41, 84, 60, -38, -29, 2, -70, 19, -92, -58, 43, 38, -122, -51, 49, -58, 25, -90, -73, 92, 98, 1, 88, 38, 58, 36, -118, 108, -35, 69, 82, 6, -111, -72, 59, -88, 51, -97, -122, -110, 21, -60, 36, -74, 91, -69, 86, 126, 95, 126, -107, 67, -110, -89, -99, -6, 54, 74, -60, -36, -65, 118, -89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.899961387319947);
    msg.setSource(49554U);
    msg.setSourceEntity(55U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(214U);
    msg.req_id = 17577U;
    msg.ttl = 49288U;
    msg.destination.assign("FBMRDWCBPRGWWSLKJYMTSHWDVSYAFKOOZGRCQNIDPCZ");
    const char tmp_msg_0[] = {-115, 116, 2, -77, -72, 89, 39, 124, 98, -47, 23, -98, -34, -20, -35, 17, 20, -116, 66, 80, -92, 122, -127, -104, 29, -21, 46, 63, 59, 42, -38, 89, 49, -48, 94, -57, -35, -71, 123, -14, -90, -89, -35, -13, 25, 74, -115, 79, -52, -81, -50, -30, 122, -119, 116, 1, 68, -77, -73, -44, -73, 67, 19, 20, 5, -104, 81, -109, 4, 51, -25, 45, 93, 107, -30, 12, 36, -118, 99, 14, -29, -12, 30, 31, 18, 41, 28, 70, -100, -23, -100, 77, 57, 55, -123, 113, 7, -97, 32, -88, 72, 24, 123, -4, 8, 32, 112, -68, -109, 9, -77, -7, 17, -37, 74, -19, -35, -87, 38, -105, -50, -94, 93, 19, -92, 34, 28, -111, 48, 105, -29, -78, 124, 18, 77, 15, 106, 106, 58, 121, 73, 31, -37, 65, 52, -93, 19, 111, -37, 97, 30, -6, -2, 48, 120, -82, -123, -73, -117, 84, 4, 111, 53, 92, 34, 105, 33, -100, 85, 29, 97, 86, -115, -93, 39, -85, 81, -71, 19, -117, -9, -2, -88, -78, 97, -59, 117, -28, -61, -102, -69, 65, 19, -97, -47, 19, -75, -8, -50, -61, -105, -79, -100, 36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.9606520966554161);
    msg.setSource(36992U);
    msg.setSourceEntity(186U);
    msg.setDestination(20060U);
    msg.setDestinationEntity(164U);
    msg.req_id = 374U;
    msg.status = 227U;
    msg.text.assign("FZWYBRFEYRCDCOHSJWCWTIZBOWZXULGQKIDBICLCYRXSILUJYEUAQLMOABQLMHXEAWENICVMEOUDKHPEABBLXXMOKPUGYUJFQFTRPDGNSSVHWKMTKEVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.08106885566743582);
    msg.setSource(36226U);
    msg.setSourceEntity(156U);
    msg.setDestination(8258U);
    msg.setDestinationEntity(205U);
    msg.req_id = 11392U;
    msg.status = 4U;
    msg.text.assign("ROUSPJNJMJBGGRAFNFTXLTWICDOUUHPMTXPQKEKCVFXAINWOBZLMVESGUBFECQLEGFSPSBWNMTZBGCNYHRLBXEZIRESJGYONQWZXISSIRJZXLCZGVVEXANAIMBCVJHBPNDQOWIWQATQSXFUDWMHHJGEKRYVFHZGZKAIAXISKFORHTYFDDCUAKOYUYQOYDAHUDKWRYNKDHVNEJCLMDLPRMSMTTWYQVQPBJUKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.42991544592708464);
    msg.setSource(52693U);
    msg.setSourceEntity(254U);
    msg.setDestination(10474U);
    msg.setDestinationEntity(37U);
    msg.req_id = 7770U;
    msg.status = 62U;
    msg.text.assign("NOAYXAHMOCEUQQGYQAWONZSIPQJRVJKRWHZLIQVKCMROKTDSRENRYLTEYODBLGPXNWYVYZVIJFQWGCBMTKHVKCVPUHXXNSHVFQJUCNZPKMSGGJMSFAHBXDYUOADUTNVRGQPOIXHPPXBQCLFDTULSMLRKGRBZENWBMJTTJBEEWSWXGUAEZMIGHZESBOWEAZJOPIICDNSQHATLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.21929095449221458);
    msg.setSource(28040U);
    msg.setSourceEntity(165U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("CIJXSNEXVJYVBYAQQZ");
    msg.links = 2157580065U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.11830090863490395);
    msg.setSource(7640U);
    msg.setSourceEntity(144U);
    msg.setDestination(4759U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("FLYINRDCVGFMXDNWUKGSTZHEOQOTLOKGQDEHZHBRKSEWWQJFMSXTXCMMNVQDIVDCTBHXPYBTDFVSOPBGDQFBUJUJC");
    msg.links = 1162318984U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.4640574450261582);
    msg.setSource(45884U);
    msg.setSourceEntity(67U);
    msg.setDestination(9397U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("IJMGMHYSYDBOALPOCHSDGOLXFCDPUQOGDBGQFIYNWAKVRZCKEEHAAXDSFLZIJCLPTPUYIMGKVQGUIEIWJTJIBTWEECNGHKUDLQATURWMNMYPDFRAJEVSHVNLPSFAJFYPMJYKYBHERRXLYXUXTNUBMHOGOZGNCZERRRKGQCNXWLW");
    msg.links = 1231791857U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.8664965832612666);
    msg.setSource(52311U);
    msg.setSourceEntity(104U);
    msg.setDestination(4959U);
    msg.setDestinationEntity(192U);
    msg.groupname.assign("IRGBOSJXLMAOVDCFSIEYXIDCNTSCMXHXKSPIAGTZSREATXWOHEDKJFDKUMOCISRLCPPYURNMUHHKEQQDENAYXMPDBLQWNOJHZGVITUUSHZEXARBVCCFLLGZHAIEUFXPJDJGWBWTKHMOFNWCTLTZTDPYNMYQAXGPVYKVMILYHTPCBRFBCLUSEWXJRRJNGMGMGQNDOQQLQFQIU");
    msg.action = 153U;
    msg.grouplist.assign("YXGHGSSAVXTUEQWHPJXWKUITNHBWPNNKYOWTHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.5117977279310608);
    msg.setSource(11190U);
    msg.setSourceEntity(146U);
    msg.setDestination(20932U);
    msg.setDestinationEntity(114U);
    msg.groupname.assign("QJPZSSKUMLFCTKVLDLQYQBZYTDOWARZYIOUHFXWMZGSJUZECNUGGLCIMHYWMGVAFLNMRMPTUPBKPTRRJOQEXOSXKHUJIRVVEZQXQGRFANVFAXGSXCZVYJTBKYLMUZSGDJNWSDBTVUQNEPVIRVDWYVHPEKOCONEJFMWYEHIAITMTOQSJFWQSPXFBHXBOFCBKNTOCANDJLYNHE");
    msg.action = 76U;
    msg.grouplist.assign("XHAQGDRJLKSQBHVOMWJYXYEWEZTCHMJTEKWBMYRXRSBUDGLOTDHMGZSEGJPBPXUWSGCPMQWXMOSXVCGVZMQDSXCDPNHUVXUYINFNRCNKYYIUIULDBFLFNPQZTSPVFIUAJMLKICAWYEBLYHQKNWWOVZTXGCGMBCETNSFJNBUPRMTDHZFRRFIZSABOLPHIQIKHEFPFHKVEJQJJLELIYUPOOJTSKUAWKGYDRGTAELAODQWNZCIDOVXRNFOVAZRCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.08194995938924876);
    msg.setSource(12354U);
    msg.setSourceEntity(222U);
    msg.setDestination(48387U);
    msg.setDestinationEntity(153U);
    msg.groupname.assign("EEWOBNWEMSIIEYPOAWFTUDQNSIKGWVGCUSWZNHBOJQYXBKKABCTHYZKHRDKTBXVSNGEDXACFRWGQQVUNGQMRRZNHJPTQKILSPCODPMOFCCEPEOHCFDSFZJLEPJGIONMNYVMURCFLYTQHAAUGASLKVZEWDIDXLEDTUTNDZYWINRJXJKJBZJCMMUYFVIQBVVWLXBJUKPAQLXUYGBMIOTSCKMAVSPMXPHGFGTAYUSAOJXBDLHPRFLHXYL");
    msg.action = 168U;
    msg.grouplist.assign("FUDKGSVTECZWRETKNTRFIRACLCMQJOAFTTZHXNTXIGWYRVXDEFSXKSOBBGYGVOWBLWXELISYWZBBELHPPFYIIUMARJWJSOOSFOXXQKZVKLMWKYFEDMLYKQSKAVPYSTEXPUCOFSVVFPYQLZUMZNCHAHBCDALQCNPGWCDJTCKDBGPJPQQNDAUWOBNYINVQQHGRBWGZJHNMARUIJUMSJVHNUDXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.21102373843186772);
    msg.setSource(65527U);
    msg.setSourceEntity(190U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(140U);
    msg.id = 7U;
    msg.range = 0.7901337414471369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.7802322564978199);
    msg.setSource(63106U);
    msg.setSourceEntity(125U);
    msg.setDestination(64814U);
    msg.setDestinationEntity(225U);
    msg.id = 241U;
    msg.range = 0.32525368490377693;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.6791749532447546);
    msg.setSource(60355U);
    msg.setSourceEntity(218U);
    msg.setDestination(52377U);
    msg.setDestinationEntity(115U);
    msg.id = 168U;
    msg.range = 0.6044541426688675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.20586525325873695);
    msg.setSource(34492U);
    msg.setSourceEntity(9U);
    msg.setDestination(25016U);
    msg.setDestinationEntity(128U);
    msg.beacon.assign("OHRKHGENFCBCKWUYZPQMQMJZJWZUPDLHOEDNKVCUAEOFNQDZVJYMASZXSCVKMWJNPLGDAZLASAHMDOMGNTDDYFNLQCKVYWFKHRUSJZTZEWEDSGNMOURZIBQCBQLVFLPVLMTYZWDXBFVCCRUBUBFMROTISJHWPRXKJDSIMHVVYUHPJXSKIWXVGLONCPYBGWAJXIIXOAIILRBTJGPTUOXYRQQFEABHOYLPBGSNGKEQXTFEXRAT");
    msg.lat = 0.5657388165078878;
    msg.lon = 0.6401132106478713;
    msg.depth = 0.4197903724221287;
    msg.query_channel = 150U;
    msg.reply_channel = 148U;
    msg.transponder_delay = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.3138371945700974);
    msg.setSource(35989U);
    msg.setSourceEntity(180U);
    msg.setDestination(50814U);
    msg.setDestinationEntity(2U);
    msg.beacon.assign("TZMZFRQVOHOSIPGOBYESBDFJBBDPNRFBERNZTKUTANEOPNJSWJNVEXUIHXAUTHVDTBBUYAPWBPFFHAIHFELQISYQIKPZGYCUHQOJOJMXCDCJCOKWDKTIWXWGALZMXMRPBZWGXTSISGJPTWRLMLKNIGOKGHNRSFDCWEVZPLEAXCEABICCHRSMMMLQRCAVYNQVQHVZFGKSVNDWAKHUOYLFXSAQQPRZYOFLUTEUDJCJYVKYWXUUJMG");
    msg.lat = 0.8400222520737585;
    msg.lon = 0.32337888595150655;
    msg.depth = 0.6081031662053216;
    msg.query_channel = 46U;
    msg.reply_channel = 235U;
    msg.transponder_delay = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.3488437777013996);
    msg.setSource(5092U);
    msg.setSourceEntity(229U);
    msg.setDestination(1229U);
    msg.setDestinationEntity(142U);
    msg.beacon.assign("JIVQNWKIZTLZFZRUGDTJKFDQUAHJOWCJYUNEEHJBSCLCGVMYKCZYOFPCNLIDSZEOWIGQJSDPSRWFZKNXMRIWMBXKILYVVEHURMMUNWNFEHBDXWZPQFZADXRMQQSPSATXHGPKUUGEEKTOXFUCTXTGLQUWMOEPRSKBRAYICFXMLS");
    msg.lat = 0.3946964403035693;
    msg.lon = 0.2880836016073257;
    msg.depth = 0.4294693623545748;
    msg.query_channel = 223U;
    msg.reply_channel = 140U;
    msg.transponder_delay = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.15647669391757646);
    msg.setSource(13266U);
    msg.setSourceEntity(254U);
    msg.setDestination(21626U);
    msg.setDestinationEntity(165U);
    msg.op = 4U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MPGBUUACNGYMLNUBSABIXHEMIPOHPBXXXVNUETWKVIBWABTKMJSEKJLMGYDRQDKWOZVVFRKUWHERWUKFRGJPTPUYFYZRAXTYJKJKTAHOLWEUDONRSIZXEMMEAQMGFOYCACDVUVLLNVBRNSJMKJWLULZOACIWTOQEJQYCWXSHLCFZDCZQWCIDITQQLFBOZTIHOVTVZPSAMJOSGHDRPHXFBLZQYIIREXAKSNTFN");
    tmp_msg_0.lat = 0.3913149408246057;
    tmp_msg_0.lon = 0.21786831034251886;
    tmp_msg_0.depth = 0.7776491730128633;
    tmp_msg_0.query_channel = 184U;
    tmp_msg_0.reply_channel = 143U;
    tmp_msg_0.transponder_delay = 62U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.9585335838189498);
    msg.setSource(51575U);
    msg.setSourceEntity(32U);
    msg.setDestination(26614U);
    msg.setDestinationEntity(78U);
    msg.op = 119U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FUQKUWEJVTBCQWOXFYSCGGHCPUYHCSFLZGUATXAJJYVZPZZHHTVWAPUNBBFZYXLQFZSRNNNDPOKEERAODWFPTLVGXSVKGUOYNCRNWMVRIMBJWFMJOBQJKXNPXPSBRQZKYDWEEXHHOTLUDLFTDLYOZIAYMIXMQHPWFRKNCVQTMAIHKJRULFJRCEHSAZUIXBOMVBGIMGDQEMDDGKGPNLROLXUTYJBIWODMSKCCIBJQVHSRZSVTI");
    tmp_msg_0.lat = 0.7368445731037437;
    tmp_msg_0.lon = 0.7233738841459495;
    tmp_msg_0.depth = 0.9416093537828718;
    tmp_msg_0.query_channel = 168U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 120U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.9299750121512294);
    msg.setSource(13427U);
    msg.setSourceEntity(147U);
    msg.setDestination(32055U);
    msg.setDestinationEntity(0U);
    msg.op = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.9075319918706606);
    msg.setSource(32011U);
    msg.setSourceEntity(132U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(149U);
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.frequency = 435422901U;
    tmp_msg_0.min_range = 23035U;
    tmp_msg_0.max_range = 57571U;
    tmp_msg_0.bits_per_point = 119U;
    tmp_msg_0.scale_factor = 0.08459417636626476;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.08436076424108274;
    tmp_tmp_msg_0_0.beam_height = 0.6727258545126678;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {21, -52, -75, -12, -34, 100, -49, 3, -11, -111, 60, -73, -36, -103, -85, 94, -51, -10, 79, -84, -93, -116, -117, 87, 16, -108, -68, -77, -59, 10, 50, 79, -66, 16, 9, -113, 93, 13, 38, -101, -9, 118, 48, 29, 114, -15, 123, -74, -82, 75, 76, -20, 106, 82, -47, -96, 80, 42, -90, -111, -96, 0, 108, -73, 31, -49, 116, -99, 114, 100, 71, 46, -84, 112, 68, 2, -51, 14, 93, -103, -18, 20, 72, 110, -100, -22, 106, 74, 110, -79, -70, 2, 55, -79, -50, 70, -111, -84, 21, -43, -119, 57, 104, 61, 48, 18, 77, 20, 30, 125, -56, 4, -21, 25, 109, -101, -115, -45, 98, -55, -51, -9, -27, -4, 35, -102, 6, 89, -17, 106, 23, -51, -77, 21, -14, 116, 44, 44, -127, -77, 8, -45, -110, -13, -124, 125, -97, -118, -13, 113, -54, 107, 22, 11, 65, 107, 32, -105, 53, 49, 35, 95, -79, -92, 21, 110, 61, 44, -36, 110, -74, -110, -101, 56, 75, 76, 11, -9, -114, -67, -2, -48, -30, 37, 64, 2, 90, 13, -83, -54, 20, -93, 87, -10, 70, -66, 119, 73, 49};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.02119253001514365);
    msg.setSource(40803U);
    msg.setSourceEntity(88U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(97U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.006573460913739559;
    tmp_msg_0.beam_height = 0.41275237241707796;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.4454324432351199);
    msg.setSource(29003U);
    msg.setSourceEntity(39U);
    msg.setDestination(997U);
    msg.setDestinationEntity(232U);
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("DUBECYAMWHIYCOPBYUSIXEAMWSXYJOGXDRCCPSYQRFROPRNHVDMHIVVKGLRGZGIVFFEDOLOBNAUECXTWALKTFYFTTMKTOUMIFVQFKNPTLTIEHAXINTQRGQMVUDJGXRJYZRTAESPBUDYXJRMZSJWWXCPRGQSLOYAESIZPMJZGNBSGJQWZUZHNANINJOOVUHPVPTKWUBXVUGLNWIMFSKPKLJCZYVKXOBBJEACHQBN");
    const char tmp_tmp_msg_0_0[] = {62, 121, -34, 30, 88, -115, 11, -110, 102, 4, 104, 96, 67, 2, -68, -73, 6, 46, 106, -90, -107, 51, -2, 44, -6, -38, -65, -71, 106, 78, -88, 60, -19, 22, 45, 112, 29, -50, -106, -27, 54, -116, -72, 117, 18, 73, -44, -38, -16, 125, 101, 107, -49, -35, -1, -26, 15, 45, -17, -47, -87, 21, 114, 105, -4, 80, 25, -53, 1, -124, -112, -61, 72, 115, 121, -85, -55, 122, 16, -17, 36, 81, -34, 36, 107, -44};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.32626183505080786);
    msg.setSource(10560U);
    msg.setSourceEntity(254U);
    msg.setDestination(52596U);
    msg.setDestinationEntity(76U);
    msg.op = 95U;
    msg.system.assign("JVINCOJAQGVTSZGHAWRGFUNPFNYBDUHYFARZPJBFPHDLKXXBPMWVDCLSRWLQNCOWKZHKIJNZJSYQHMMECVVRUTTTRSGFFVVGASFMDBYLSRIMYHJVUEAUMAFEMWTDLOTBLPVZEXZYZIWWNQEQDUMWOXPQDEXYIYQLWCXQKRHLNGWGJXQBMOTSCIKGFCINPTVARBJKZPSPSSKMZZGUOIOECYGXODBAAXNKEDTLXUHHBUOLC");
    msg.range = 0.4791460794434952;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.6763050603962184;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.07286448915824728);
    msg.setSource(63386U);
    msg.setSourceEntity(154U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(70U);
    msg.op = 126U;
    msg.system.assign("NZOTZGEKZKLEAVVHNEKUYBSXASOTXATDPITTMDXNIEIQOPEUGAZNQMWGCFSRTODMCHLWIEMVQCUSCKQRPUGOMDBCREFEQAJAPDCMBYIBMITWNRUZWHJIOEHRW");
    msg.range = 0.1579400557857492;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.3956922113041945;
    tmp_msg_0.ay_cmd = 0.38437489157754867;
    tmp_msg_0.az_cmd = 0.07885191571874195;
    tmp_msg_0.ax_des = 0.6245170081132955;
    tmp_msg_0.ay_des = 0.33910955646130136;
    tmp_msg_0.az_des = 0.2567519404109747;
    tmp_msg_0.virt_err_x = 0.6109304508607538;
    tmp_msg_0.virt_err_y = 0.027236621297280217;
    tmp_msg_0.virt_err_z = 0.8041564404501748;
    tmp_msg_0.surf_fdbk_x = 0.37633677835145196;
    tmp_msg_0.surf_fdbk_y = 0.21411441766944184;
    tmp_msg_0.surf_fdbk_z = 0.4776237371476376;
    tmp_msg_0.surf_unkn_x = 0.8513083134230597;
    tmp_msg_0.surf_unkn_y = 0.45840836850351996;
    tmp_msg_0.surf_unkn_z = 0.6161494661031873;
    tmp_msg_0.ss_x = 0.31644901038817663;
    tmp_msg_0.ss_y = 0.7764419344774033;
    tmp_msg_0.ss_z = 0.5970926622385416;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("GXNVZXRONEYPVKZLLIIUDOORLATWSUVMYJFJLLUWBMJPKNJHA");
    tmp_tmp_msg_0_0.dist = 0.060966297994165086;
    tmp_tmp_msg_0_0.err = 0.2143675282406341;
    tmp_tmp_msg_0_0.ctrl_imp = 0.7170577789057727;
    tmp_tmp_msg_0_0.rel_dir_x = 0.16623240219497604;
    tmp_tmp_msg_0_0.rel_dir_y = 0.13799825840628943;
    tmp_tmp_msg_0_0.rel_dir_z = 0.9049216256492565;
    tmp_tmp_msg_0_0.err_x = 0.8148558153548566;
    tmp_tmp_msg_0_0.err_y = 0.8481188573380392;
    tmp_tmp_msg_0_0.err_z = 0.4322698478942403;
    tmp_tmp_msg_0_0.rf_err_x = 0.9345459230527753;
    tmp_tmp_msg_0_0.rf_err_y = 0.5866366180563868;
    tmp_tmp_msg_0_0.rf_err_z = 0.7219408332742315;
    tmp_tmp_msg_0_0.rf_err_vx = 0.8511865768700057;
    tmp_tmp_msg_0_0.rf_err_vy = 0.9423571898739671;
    tmp_tmp_msg_0_0.rf_err_vz = 0.9788310653691387;
    tmp_tmp_msg_0_0.ss_x = 0.06791749899783994;
    tmp_tmp_msg_0_0.ss_y = 0.7412914986546666;
    tmp_tmp_msg_0_0.ss_z = 0.823314945464076;
    tmp_tmp_msg_0_0.virt_err_x = 0.743925709927695;
    tmp_tmp_msg_0_0.virt_err_y = 0.4337221613328188;
    tmp_tmp_msg_0_0.virt_err_z = 0.6490918313136739;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.445928484131743);
    msg.setSource(48641U);
    msg.setSourceEntity(104U);
    msg.setDestination(58047U);
    msg.setDestinationEntity(74U);
    msg.op = 141U;
    msg.system.assign("DCPESRJGAHZSVQRBEVZGHFJXKRIOBORPETMALFXPQDAHBMTBVZANRADFVOOZQUOSFXTOLNWDDESICASNMYQIWRVHWMJKPCSXXOIMDQYVPMASCLVRCXIMGCFYKNDWUNZLQKNSUWJGHFXIHAKQLZTQGYLJRIZINLEWYUDGIJSIZHYHUXZEVH");
    msg.range = 0.3755974127747521;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 2274082105U;
    tmp_msg_0.lat = 0.3906097108469151;
    tmp_msg_0.lon = 0.15049528321518757;
    tmp_msg_0.height_ell = 0.18996741443569432;
    tmp_msg_0.height_sea = 0.24992752291776077;
    tmp_msg_0.hacc = 0.33287891360277055;
    tmp_msg_0.vacc = 0.06928117965862779;
    tmp_msg_0.vel_n = 0.08455408260911712;
    tmp_msg_0.vel_e = 0.9203413558557139;
    tmp_msg_0.vel_d = 0.01994633505898047;
    tmp_msg_0.speed = 0.8160627599256239;
    tmp_msg_0.gspeed = 0.3199302522517019;
    tmp_msg_0.heading = 0.7696479295149896;
    tmp_msg_0.sacc = 0.3313102934597749;
    tmp_msg_0.cacc = 0.39296458968734704;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.7717160929258388);
    msg.setSource(55540U);
    msg.setSourceEntity(206U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(12U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.7004436089582545);
    msg.setSource(40297U);
    msg.setSourceEntity(239U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(17U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.26385579155280825);
    msg.setSource(52038U);
    msg.setSourceEntity(158U);
    msg.setDestination(18353U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.7168653915924703);
    msg.setSource(44326U);
    msg.setSourceEntity(100U);
    msg.setDestination(16306U);
    msg.setDestinationEntity(2U);
    msg.list.assign("AQNFMRDRITEVURHHGIUGXCPUADOBBLZNIABQYQODUTLSJVIKXXLHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.7912763484879887);
    msg.setSource(33807U);
    msg.setSourceEntity(48U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(95U);
    msg.list.assign("FNFRCRFPSQTYNIVKYFDVMIRMWKCWSSOCGMHIPYXFHJUWUWPQJDKSXRPEQUPEVAIJFYZPQXJUDCMWJOIUQEUPIQCXQDDBYCXKLVEAVUFKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.35371325410105536);
    msg.setSource(8618U);
    msg.setSourceEntity(130U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(42U);
    msg.list.assign("DESHUZYQISBCPQJEBEQPDMRPXTJOUFYAQFTOHJUCGEMZCCILMAWJADIBLRIDLLFGLMTB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.9584496275897142);
    msg.setSource(53558U);
    msg.setSourceEntity(131U);
    msg.setDestination(42194U);
    msg.setDestinationEntity(89U);
    msg.value = 25506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.794215058622414);
    msg.setSource(34837U);
    msg.setSourceEntity(211U);
    msg.setDestination(38490U);
    msg.setDestinationEntity(9U);
    msg.value = -23575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.01308850800370942);
    msg.setSource(28705U);
    msg.setSourceEntity(35U);
    msg.setDestination(2122U);
    msg.setDestinationEntity(195U);
    msg.value = -25887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.06549149305999014);
    msg.setSource(51873U);
    msg.setSourceEntity(228U);
    msg.setDestination(12123U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5819017445323287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.20231456393933234);
    msg.setSource(28304U);
    msg.setSourceEntity(44U);
    msg.setDestination(28914U);
    msg.setDestinationEntity(213U);
    msg.value = 0.2509291342267721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.300802293715146);
    msg.setSource(20558U);
    msg.setSourceEntity(240U);
    msg.setDestination(22104U);
    msg.setDestinationEntity(94U);
    msg.value = 0.24942844214195603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.772052986182016);
    msg.setSource(34546U);
    msg.setSourceEntity(232U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(186U);
    msg.value = 0.883245793255654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.06068812705833804);
    msg.setSource(53631U);
    msg.setSourceEntity(159U);
    msg.setDestination(41836U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7401137853207028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.38578042796294143);
    msg.setSource(62298U);
    msg.setSourceEntity(241U);
    msg.setDestination(53063U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8551297121589644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.35780794199823585);
    msg.setSource(63637U);
    msg.setSourceEntity(171U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(106U);
    msg.validity = 29728U;
    msg.type = 155U;
    msg.utc_year = 34468U;
    msg.utc_month = 15U;
    msg.utc_day = 192U;
    msg.utc_time = 0.25116289621736776;
    msg.lat = 0.5408317072470409;
    msg.lon = 0.14758386274900115;
    msg.height = 0.6789627586698588;
    msg.satellites = 222U;
    msg.cog = 0.8100612376073256;
    msg.sog = 0.5960997626851061;
    msg.hdop = 0.34712771270993137;
    msg.vdop = 0.25937228541551216;
    msg.hacc = 0.02555122219502637;
    msg.vacc = 0.5649555810550759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.992517668266911);
    msg.setSource(25477U);
    msg.setSourceEntity(57U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(149U);
    msg.validity = 1001U;
    msg.type = 42U;
    msg.utc_year = 40947U;
    msg.utc_month = 109U;
    msg.utc_day = 182U;
    msg.utc_time = 0.10770041738240543;
    msg.lat = 0.6873727800413403;
    msg.lon = 0.04025774561336126;
    msg.height = 0.25739425691579043;
    msg.satellites = 159U;
    msg.cog = 0.08645009911327572;
    msg.sog = 0.7036973916086318;
    msg.hdop = 0.2817285318264404;
    msg.vdop = 0.7511316781707622;
    msg.hacc = 0.4174070943371292;
    msg.vacc = 0.9360993821060923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.48455969247931785);
    msg.setSource(281U);
    msg.setSourceEntity(223U);
    msg.setDestination(34640U);
    msg.setDestinationEntity(77U);
    msg.validity = 34094U;
    msg.type = 156U;
    msg.utc_year = 62414U;
    msg.utc_month = 130U;
    msg.utc_day = 189U;
    msg.utc_time = 0.4973181870303701;
    msg.lat = 0.7238147784652833;
    msg.lon = 0.12711862800390517;
    msg.height = 0.4193234946454628;
    msg.satellites = 246U;
    msg.cog = 0.06538413887768424;
    msg.sog = 0.4231005470040521;
    msg.hdop = 0.8448685090746758;
    msg.vdop = 0.813341540276463;
    msg.hacc = 0.07051294574850564;
    msg.vacc = 0.05409027905796204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.1119293187098338);
    msg.setSource(26718U);
    msg.setSourceEntity(114U);
    msg.setDestination(59090U);
    msg.setDestinationEntity(106U);
    msg.time = 0.41895460788409467;
    msg.phi = 0.9646969946619589;
    msg.theta = 0.17137594668329503;
    msg.psi = 0.9163511754568314;
    msg.psi_magnetic = 0.8011155712238353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.11741262753149329);
    msg.setSource(27148U);
    msg.setSourceEntity(177U);
    msg.setDestination(40081U);
    msg.setDestinationEntity(82U);
    msg.time = 0.6418254470695963;
    msg.phi = 0.5728489556519075;
    msg.theta = 0.49080939032158954;
    msg.psi = 0.390105754032106;
    msg.psi_magnetic = 0.8521321520940983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.991145430190076);
    msg.setSource(58474U);
    msg.setSourceEntity(122U);
    msg.setDestination(28994U);
    msg.setDestinationEntity(69U);
    msg.time = 0.4576203928373318;
    msg.phi = 0.0975256226859883;
    msg.theta = 0.23424451171386862;
    msg.psi = 0.934639482570852;
    msg.psi_magnetic = 0.28178731956089353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.8035653876453301);
    msg.setSource(5333U);
    msg.setSourceEntity(179U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(225U);
    msg.time = 0.08110016892136318;
    msg.x = 0.2123470651076258;
    msg.y = 0.6203366979673998;
    msg.z = 0.8415663856747737;
    msg.timestep = 0.38094764527812475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.631079463518079);
    msg.setSource(43345U);
    msg.setSourceEntity(238U);
    msg.setDestination(35537U);
    msg.setDestinationEntity(177U);
    msg.time = 0.08582322798427644;
    msg.x = 0.9643769408403006;
    msg.y = 0.37168750655921134;
    msg.z = 0.06086526337974707;
    msg.timestep = 0.9522918606413943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.9141407067047923);
    msg.setSource(34761U);
    msg.setSourceEntity(113U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(141U);
    msg.time = 0.8159117303265133;
    msg.x = 0.7137356108743653;
    msg.y = 0.8955002846025932;
    msg.z = 0.49257330988699843;
    msg.timestep = 0.6945559760252044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.8962427277643581);
    msg.setSource(56522U);
    msg.setSourceEntity(21U);
    msg.setDestination(46937U);
    msg.setDestinationEntity(205U);
    msg.time = 0.7992369880162231;
    msg.x = 0.47352858410542265;
    msg.y = 0.867566438125095;
    msg.z = 0.6488962163731123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.4139892750523404);
    msg.setSource(49177U);
    msg.setSourceEntity(11U);
    msg.setDestination(28053U);
    msg.setDestinationEntity(56U);
    msg.time = 0.893389054376983;
    msg.x = 0.7217480944088129;
    msg.y = 0.1921250269986602;
    msg.z = 0.030504097599685087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.6646361760910321);
    msg.setSource(15416U);
    msg.setSourceEntity(241U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(27U);
    msg.time = 0.07660634923283971;
    msg.x = 0.4861864747328609;
    msg.y = 0.793335551941884;
    msg.z = 0.5025459328906398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.5234171283833717);
    msg.setSource(36888U);
    msg.setSourceEntity(215U);
    msg.setDestination(14552U);
    msg.setDestinationEntity(68U);
    msg.time = 0.7719422787915875;
    msg.x = 0.6149334774155811;
    msg.y = 0.21681601063160016;
    msg.z = 0.17159876078893754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.909568513324381);
    msg.setSource(9345U);
    msg.setSourceEntity(45U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(145U);
    msg.time = 0.3060445114307516;
    msg.x = 0.15658499312842966;
    msg.y = 0.21205581651845362;
    msg.z = 0.20961212443709665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.14040396183458947);
    msg.setSource(55343U);
    msg.setSourceEntity(100U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(41U);
    msg.time = 0.4537779264932378;
    msg.x = 0.13925847654241152;
    msg.y = 0.1703507694672185;
    msg.z = 0.956066917898802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.6514479954776944);
    msg.setSource(34092U);
    msg.setSourceEntity(31U);
    msg.setDestination(61609U);
    msg.setDestinationEntity(235U);
    msg.time = 0.9714730301928611;
    msg.x = 0.9987635458057739;
    msg.y = 0.959465620142476;
    msg.z = 0.06447186605687738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.10123959409384009);
    msg.setSource(60559U);
    msg.setSourceEntity(157U);
    msg.setDestination(54648U);
    msg.setDestinationEntity(58U);
    msg.time = 0.5400340090133811;
    msg.x = 0.3439546897254707;
    msg.y = 0.23964304908509904;
    msg.z = 0.30805185556317716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.9805075738038898);
    msg.setSource(55148U);
    msg.setSourceEntity(8U);
    msg.setDestination(38954U);
    msg.setDestinationEntity(20U);
    msg.time = 0.36602155699200234;
    msg.x = 0.5819638938162818;
    msg.y = 0.47833316150129657;
    msg.z = 0.8959032272190719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.12150523773787059);
    msg.setSource(25886U);
    msg.setSourceEntity(42U);
    msg.setDestination(20056U);
    msg.setDestinationEntity(110U);
    msg.validity = 37U;
    msg.x = 0.43357452141278663;
    msg.y = 0.8690594732056384;
    msg.z = 0.5214549437991072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.9362968767057697);
    msg.setSource(10681U);
    msg.setSourceEntity(119U);
    msg.setDestination(13511U);
    msg.setDestinationEntity(60U);
    msg.validity = 116U;
    msg.x = 0.38182814147560606;
    msg.y = 0.19279491698618623;
    msg.z = 0.4799730396719861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.15807344587670524);
    msg.setSource(700U);
    msg.setSourceEntity(145U);
    msg.setDestination(52408U);
    msg.setDestinationEntity(166U);
    msg.validity = 72U;
    msg.x = 0.8949621960137395;
    msg.y = 0.6687403314648951;
    msg.z = 0.9429334164060776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.003841537884650026);
    msg.setSource(57386U);
    msg.setSourceEntity(205U);
    msg.setDestination(31189U);
    msg.setDestinationEntity(65U);
    msg.validity = 20U;
    msg.x = 0.32560691055009117;
    msg.y = 0.41137384189699455;
    msg.z = 0.7832495614336732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.7267533315238794);
    msg.setSource(32593U);
    msg.setSourceEntity(7U);
    msg.setDestination(24111U);
    msg.setDestinationEntity(4U);
    msg.validity = 66U;
    msg.x = 0.16821210751448823;
    msg.y = 0.9797178334650406;
    msg.z = 0.30144682656611543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.40753278180051977);
    msg.setSource(24473U);
    msg.setSourceEntity(229U);
    msg.setDestination(20338U);
    msg.setDestinationEntity(102U);
    msg.validity = 42U;
    msg.x = 0.9832899840247958;
    msg.y = 0.20566389940317742;
    msg.z = 0.472577378228901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.7578316221628268);
    msg.setSource(25301U);
    msg.setSourceEntity(152U);
    msg.setDestination(65315U);
    msg.setDestinationEntity(194U);
    msg.time = 0.631192685765756;
    msg.x = 0.5818920714316629;
    msg.y = 0.6163023068783017;
    msg.z = 0.25132636297560385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.4380451720433073);
    msg.setSource(10178U);
    msg.setSourceEntity(178U);
    msg.setDestination(14990U);
    msg.setDestinationEntity(245U);
    msg.time = 0.9050925269352694;
    msg.x = 0.50524346679082;
    msg.y = 0.33364072750636165;
    msg.z = 0.3997645178332221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.6058930308246112);
    msg.setSource(35129U);
    msg.setSourceEntity(202U);
    msg.setDestination(13132U);
    msg.setDestinationEntity(215U);
    msg.time = 0.41374295263259664;
    msg.x = 0.9910492229948543;
    msg.y = 0.3771436806302868;
    msg.z = 0.24200528206906124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.5747405790943265);
    msg.setSource(1481U);
    msg.setSourceEntity(159U);
    msg.setDestination(10404U);
    msg.setDestinationEntity(96U);
    msg.validity = 183U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9250635642666525;
    tmp_msg_0.y = 0.11002070979459144;
    tmp_msg_0.z = 0.4394060267578015;
    tmp_msg_0.phi = 0.18250124920199506;
    tmp_msg_0.theta = 0.1801238985152369;
    tmp_msg_0.psi = 0.9103813509116438;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6732118334176617;
    tmp_msg_1.beam_height = 0.31735107863083634;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.44217496667451683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.12686983627988846);
    msg.setSource(5032U);
    msg.setSourceEntity(105U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(109U);
    msg.validity = 124U;
    msg.value = 0.47704012627783754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.38011827936026954);
    msg.setSource(14864U);
    msg.setSourceEntity(253U);
    msg.setDestination(38996U);
    msg.setDestinationEntity(21U);
    msg.validity = 102U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.22558538724333976;
    tmp_msg_0.beam_height = 0.961248484481507;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8224545684562131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.4489904345889292);
    msg.setSource(59893U);
    msg.setSourceEntity(165U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2729442774798966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.49616331331427665);
    msg.setSource(62685U);
    msg.setSourceEntity(170U);
    msg.setDestination(62832U);
    msg.setDestinationEntity(191U);
    msg.value = 0.8650937340915781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.6058237769978758);
    msg.setSource(25810U);
    msg.setSourceEntity(17U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(161U);
    msg.value = 0.5781006903625421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.7468114746035276);
    msg.setSource(47392U);
    msg.setSourceEntity(76U);
    msg.setDestination(32142U);
    msg.setDestinationEntity(68U);
    msg.value = 0.3135766316497214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.12374662469903563);
    msg.setSource(33490U);
    msg.setSourceEntity(221U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0354182919587801;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.7798272051175129);
    msg.setSource(135U);
    msg.setSourceEntity(214U);
    msg.setDestination(59463U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8646436817102849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.22486981781891424);
    msg.setSource(25607U);
    msg.setSourceEntity(131U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(133U);
    msg.value = 0.7465111345977555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.35579468607218345);
    msg.setSource(53016U);
    msg.setSourceEntity(27U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(106U);
    msg.value = 0.25826973022196986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.9229808391120814);
    msg.setSource(31203U);
    msg.setSourceEntity(245U);
    msg.setDestination(32308U);
    msg.setDestinationEntity(33U);
    msg.value = 0.42089839818817976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.3621269948084749);
    msg.setSource(46450U);
    msg.setSourceEntity(250U);
    msg.setDestination(42867U);
    msg.setDestinationEntity(70U);
    msg.value = 0.351350523740277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.051930314813999345);
    msg.setSource(55952U);
    msg.setSourceEntity(78U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(235U);
    msg.value = 0.4944000193270025;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.5445011223446786);
    msg.setSource(7180U);
    msg.setSourceEntity(134U);
    msg.setDestination(18506U);
    msg.setDestinationEntity(56U);
    msg.value = 0.36507795431241163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.4213778522379593);
    msg.setSource(42036U);
    msg.setSourceEntity(216U);
    msg.setDestination(12439U);
    msg.setDestinationEntity(35U);
    msg.value = 0.027811292554298928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.47531719462445);
    msg.setSource(58247U);
    msg.setSourceEntity(145U);
    msg.setDestination(39095U);
    msg.setDestinationEntity(152U);
    msg.value = 0.22691704324434092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.9232465635658151);
    msg.setSource(23196U);
    msg.setSourceEntity(190U);
    msg.setDestination(25090U);
    msg.setDestinationEntity(184U);
    msg.value = 0.0926630558901348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9440688121794362);
    msg.setSource(18159U);
    msg.setSourceEntity(160U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(45U);
    msg.value = 0.3082960044459735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9898129701083284);
    msg.setSource(18363U);
    msg.setSourceEntity(33U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(158U);
    msg.value = 0.46242182179932234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9969272065922583);
    msg.setSource(18229U);
    msg.setSourceEntity(76U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8472986228519933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.5632550092813664);
    msg.setSource(26749U);
    msg.setSourceEntity(77U);
    msg.setDestination(10861U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6389750447822214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.5923081825993683);
    msg.setSource(54109U);
    msg.setSourceEntity(37U);
    msg.setDestination(12725U);
    msg.setDestinationEntity(3U);
    msg.value = 0.2512481527952044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.8351039716578461);
    msg.setSource(8251U);
    msg.setSourceEntity(63U);
    msg.setDestination(24911U);
    msg.setDestinationEntity(145U);
    msg.value = 0.30887835161368216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.8615324223466152);
    msg.setSource(36821U);
    msg.setSourceEntity(15U);
    msg.setDestination(13020U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5058714073872079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.045349886639861725);
    msg.setSource(62109U);
    msg.setSourceEntity(0U);
    msg.setDestination(60950U);
    msg.setDestinationEntity(6U);
    msg.value = 0.11445014268097242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.6700015805294168);
    msg.setSource(18176U);
    msg.setSourceEntity(4U);
    msg.setDestination(58108U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5487860524335078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.8847986578313872);
    msg.setSource(36012U);
    msg.setSourceEntity(92U);
    msg.setDestination(57875U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.9833310851308313;
    msg.speed = 0.4952883608117097;
    msg.turbulence = 0.28305767249239655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.2885382644518);
    msg.setSource(28902U);
    msg.setSourceEntity(244U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(145U);
    msg.direction = 0.7153837747453748;
    msg.speed = 0.1362896457561692;
    msg.turbulence = 0.09135098790656715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.06408011148396509);
    msg.setSource(34158U);
    msg.setSourceEntity(236U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.20327312974170175;
    msg.speed = 0.1483116984884597;
    msg.turbulence = 0.7767043420592185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.09760917565195737);
    msg.setSource(25658U);
    msg.setSourceEntity(169U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9847430396647422;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.9139942235591905);
    msg.setSource(4911U);
    msg.setSourceEntity(196U);
    msg.setDestination(7590U);
    msg.setDestinationEntity(224U);
    msg.value = 0.29455735459216714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.0749703316620085);
    msg.setSource(64322U);
    msg.setSourceEntity(162U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5262897415484253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.8090667047143102);
    msg.setSource(50986U);
    msg.setSourceEntity(158U);
    msg.setDestination(21922U);
    msg.setDestinationEntity(1U);
    msg.value.assign("KZPASNONLMDPROJFSXFQNAWLASFLYSZSNFRKCDEWZPAYGJKPSEYNEDUIUOWIIHSCLBYAHMBUGVQSUTU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.019903403970768285);
    msg.setSource(46485U);
    msg.setSourceEntity(219U);
    msg.setDestination(6818U);
    msg.setDestinationEntity(84U);
    msg.value.assign("GOQMFUWBVQCEUQOEKVJAIEMIGQGGRHRUDJYZJXKAPXST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.9502852028086698);
    msg.setSource(9555U);
    msg.setSourceEntity(34U);
    msg.setDestination(44174U);
    msg.setDestinationEntity(212U);
    msg.value.assign("OIOTTHVPOXAKNRLIFXPXFOZTDNKMGTGQWSJBVOXVYHGMYENPIXZLAPGCAEAGAFDTZRGWUVCHOBKYMCJQSRLRSSNPCQMHBBFKUYUJWVECDCSTULAWMURPUYOSYPKNPXJVDNRPZBYLIZCBQEGFXWQALYWCOJXZWVUYNYWGSUZBZHLHBNJIWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.47243715575379874);
    msg.setSource(14199U);
    msg.setSourceEntity(243U);
    msg.setDestination(56856U);
    msg.setDestinationEntity(34U);
    const char tmp_msg_0[] = {70, -121, 57, 61, -8, -27, 10, -68, 56, 6, 4, -3, 5, -46, -97, -29, -78, -74, 110, 114, -125, 27, -55, 103, -101, 82, 46, -55, 82, -2, 4, -19, -106, -113, 47, -87, -16, -37, -72, -67, -68, -128, 125, 58, 1, 109, 38, 103, -12, -117, -69, 4, 46, 95, 72, 103, -73, 101, -56, 50, -12, -67, 71, -120, -30, 95, 25, 39, -110, 0, 99, -23};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.009199301995462483);
    msg.setSource(13814U);
    msg.setSourceEntity(10U);
    msg.setDestination(11193U);
    msg.setDestinationEntity(102U);
    const char tmp_msg_0[] = {-14, 71, 73, -28, -10, -79, 31, 94, 88, 67, -108, 17, 1, -67, 55, 108, -54, 30, 2, 11, 76, -45, 75, -117, 90, 68, 122, -109, -24, -101, -11, -99, 16, -18, -82, 57, 82, -94, 24, -90, -1, -62, 8, -78, -21, 60, 45, -16, -5, -118, 88, 4, -30, 5, 86, 100, -89, -8, -124, -67, -105, 107, 101, 15, -19, 63, 51, 70, 119, -44, 74, 92, 68, -99, 88, 45, 103, -39, -32, 21, -103, 6, -12, -81, -61, -11, -77, -3, 114, 33, 74, 111, 97, -6, 110, 26, -106, -118, -5, -46, -65, 23, 70, 110, 106, -108, 35, -22, 111, 105, -92, 84, 54, -80, 53, 101, -26, 50, 39, 55, -70, -121, -4, 39, -81, -36, -7, -79, 26, 80, -108, 66, 56, 27, 121, -77, 81, 84, -93, 49, -95, 13, -96, -102, 93, 52, -3, 62, -79, -1, 100, -32, -104, -22, -111, 35, -78, -95, 43, -125, -49, -23, -116, -63, -94, -106, 90, -5, -74, 82, 38, 18, -114, -10, -50, -104, 41, 47, 105, -11, 22, -9, -96, -110, 53, -55, 63, 38, 34, 119, 35, 62, -44, -55, 24, 34, 13, -101, -121, -75, 21, -61};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.036244360422208355);
    msg.setSource(63867U);
    msg.setSourceEntity(6U);
    msg.setDestination(41977U);
    msg.setDestinationEntity(136U);
    const char tmp_msg_0[] = {3, 107, 123, 57, -37, -77, -115, -84, -51, -108, -110, -97, 14, 60, -70, -62, -82, 98, 58, 74, 27, 18, -41, 58, -53, -11, -105, 94, 86, 88, 101, -45, -56, 72, -91, 16, -9, 2, -19, 54, 46, -52, -110, 62, 28, -110, 113, 19, 102, -58, 102, 5, 108, -77, -71, -59, -93, 73, -31, -7, -49, -29, 98, 124, 6, -40, -30, 46, -30, -12, -4, 69, -91, -111, 33, 1, 44, 31, -15, -26, 36, -95, -27, -6, 111, 123, -33, -106, 113, 98, 126, 97, -18, -31, 8, 53, -36, -65, 126, -18, -10, 78, -21, -73, -80, -115, 114, -71, -40, 47, -2, 99, -69, 101, 124, -4, -60, 52, -118, 27, 117, -76, -76, -61, 31, -85, -3, 64, -17, 37, -80, -12, -13, 12, -29, -18, 122, 0, -61, 88, -29, 121, 62, 79, -115, 10, -12, 95, 85, -38, -43, -107, -64, 8, -76, -120, -107, 69, -61, 126, -72, 70, -43, 26, -118, -109, 103, 102, -7, -125, -41, -72, 28, -12, -128, -127, -31, 96, 12, -44, 66, 97, 5, 77, -127, 79, 60, 7, 28};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.6107355188923707);
    msg.setSource(37045U);
    msg.setSourceEntity(185U);
    msg.setDestination(48659U);
    msg.setDestinationEntity(211U);
    msg.type = 137U;
    msg.frequency = 2768930918U;
    msg.min_range = 52324U;
    msg.max_range = 60914U;
    msg.bits_per_point = 20U;
    msg.scale_factor = 0.15373391256025737;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.41711068146522867;
    tmp_msg_0.beam_height = 0.08951946400856203;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, -91, -55, -10, -60, 61, 121, 44, 6, 7, 113, 117, -75, 91, 28, -49, -39, -122, 106, -6, 39, 52, -48, 60, -75, -123, 14, 59, 90, 72, -106, 95, 28, -107, 90, -125, 80, -109, 108, 124, -80, -65, -125, -97, -127, 102, 58, 5, -103, -124, 121, 109, 21, -102, -26, -110, -78, 101, -54, 43, -80, 2, -88, 1, 79, -127, -99, 101, -120, 0, -32, 115, 43, 60, -5, 34, 10, 115, -17, 120, 11, 80, 43, 108, -34, 4, 94, -41, 76, -105, -103, -25, -110, -28, 58, 70, -123, 77, -63, 34, -58, -7, -113, 16, 50, -123, 67, -37, 78, -95, -4, 84, 21, -80, -97, -23, 79, 21, -53, 27, 61, -64, 14, 95, -28, -20, -114, 72, 40, 65, -11, 36, 29, -83, -47, 105, -57, -9, -84, -101, -25, -121, 5, 105, 10, -2, -87, 71, -24, -25, -26, 101, 108, -126, 36, 72, -8, 31, 105, 7, -9, -6, -46, 65, -91, -123, 11, -48, -62, -65, -47, -66, 74, 91, 111, -117, -74, 85, -94, -80, 89, 124, 49, -77, -70, 19, -11, 107, 27, -79, 104, -2, 42, -77, 64, -101, 57, 33, 106};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.7393253382092474);
    msg.setSource(15538U);
    msg.setSourceEntity(244U);
    msg.setDestination(20951U);
    msg.setDestinationEntity(186U);
    msg.type = 211U;
    msg.frequency = 67218442U;
    msg.min_range = 14318U;
    msg.max_range = 3466U;
    msg.bits_per_point = 185U;
    msg.scale_factor = 0.5957713518422537;
    const char tmp_msg_0[] = {-83, 46, -77, -71, -120, 89, -14, -102, -29, -90, -70, -81, -78, 63, -37, -45, -5, 100, 95, 62, 98, -96, -80, -29, -25, -35, -41, 114, 99, -118, 7, -126, 81, 66, 126, -31, 39, -56, 85, -22, -57, 79, 83, -60, -125, 38, 87, -16, -28, 32, -54, -88, 41, -22, -69, -66, -28, 25, -63, -48, 26, 3, 57, 112, 64, 106, 5, -61, -41, -116, 18, -56, 17, -88, -105, 29, -127, -99, -27, -57, 83, -119, 88, -33, -96, -24, -51, 5, -70, -89, -55, 15, 69, -85, -46, -101, 47, -66, -23, 89, 83, -94, -105, -95, -65, 77, 34, 64, -74, -91, -121, 118, 80, 35, -71, -112, 44, -25, 84, 82, -121, 21, 99, 3, -117, 58, 72, 114, 117, -15, 105, -29, -100, -33, 8, -44, 14, -2, 30, -71, -120, 66, -72, -117, 14, 92, -15, 33, 52, 8, 6, 14, -51, 93, -120, -3, -57, -2, 103, -75, -84, 91, -108, 36, 67, 65, 36, -1, 120, -53, -127, -6, -10, 97, 108, 64, 94, -102, -39, -80, -37, -98, -124, 28, -64, -63, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.6581606263498445);
    msg.setSource(31477U);
    msg.setSourceEntity(101U);
    msg.setDestination(56825U);
    msg.setDestinationEntity(169U);
    msg.type = 44U;
    msg.frequency = 3375679197U;
    msg.min_range = 52197U;
    msg.max_range = 41282U;
    msg.bits_per_point = 87U;
    msg.scale_factor = 0.3197393984531519;
    const char tmp_msg_0[] = {-24, -106, 111, 16, 36, -101, -30, -58, 74, 76, 85, 75, -20, 36, 74, 96, 72, -83, -18, 80, 24, 78, 74, -51, -73, 101, 33, 27, 5, 51, -122, 87, -46, 114, -94, -83, -113, 30, 90, -85, -52, -13, -86, -122, -16, -94, 40, -70, 35, -113, 1, -95, 116, 96, -78, 20, 86, -17, -63, -35, -100, 119, -96, 5, -36, -9, -118, -43, 2, -106, -45, -86, -119, -23, -103, 43, -22, -73, 71, 54, 48, 7, 47, -98, 96, 92, 73, -14, 74, -44, -128, -91, 57, 8, -108, -102, -96, 113, -63, 75, -80, -6, -28, 85, 116, 20, -13, 84, 41, -61, 90, -56, 4, -76, 68, 22, -108, -120, 101, 102, 61, -83, 36, -126, 53, -128, -47, -62, -54, -108, -44, -110, -24, -43, -62, 96, 25, -3, -24, -56, -31, -55, -17, -58, 108, -105, 35, -75, 44, -52, -120, -57, 13, -14, -41, -39, -40, -71, -64, -55, 64, -93, -43, -42, 123, 126, 22, 121, 44, 74, 54, 64, 41, 66, -31, -12, -43, -32, 112, 58, 114, -120, 99, 107, -122, -27, -72, -50, 125, -16, -83, -3, -90, -73, 35, 24, -92, 95, -106, -109, 22, 67, 18, 120, 109, -99, 96, -89, -1, -109, 2, 24, -46, -49, 69, 5, -78, -28, 35, 42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.74260375975883);
    msg.setSource(36641U);
    msg.setSourceEntity(69U);
    msg.setDestination(57672U);
    msg.setDestinationEntity(125U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.9711771764426551);
    msg.setSource(17970U);
    msg.setSourceEntity(148U);
    msg.setDestination(34693U);
    msg.setDestinationEntity(60U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.18996696578490468);
    msg.setSource(10636U);
    msg.setSourceEntity(104U);
    msg.setDestination(39213U);
    msg.setDestinationEntity(157U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.3873530058465863);
    msg.setSource(48382U);
    msg.setSourceEntity(87U);
    msg.setDestination(60041U);
    msg.setDestinationEntity(124U);
    msg.op = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.8082957980798817);
    msg.setSource(34378U);
    msg.setSourceEntity(129U);
    msg.setDestination(7075U);
    msg.setDestinationEntity(116U);
    msg.op = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.5632609879559213);
    msg.setSource(48845U);
    msg.setSourceEntity(129U);
    msg.setDestination(54128U);
    msg.setDestinationEntity(12U);
    msg.op = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.5888679240485053);
    msg.setSource(52773U);
    msg.setSourceEntity(156U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5423715611137112;
    msg.confidence = 0.23726066255023448;
    msg.opmodes.assign("LTQZVAKBKOCWECOEEFJFGHCNIXIKTRPINEDTXSGZDBBPNZBGQLVOLLTUYRCSBTMZBFFBKKHSOITLWIRLEQPQWTYYEMHAQODRHNS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.048974233243446075);
    msg.setSource(4601U);
    msg.setSourceEntity(170U);
    msg.setDestination(25492U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9563632244580751;
    msg.confidence = 0.47229051384649456;
    msg.opmodes.assign("NMUDVQKJBLSUFKOHYVZEZBGYYVKWRAGXGQKKDFSYXUQHFZQGLRVBCBLAWKNIAJYMDLWUSRURTOGTQNQGIXZVHYMAJSCAWZCJVPXJTSVNLODEZCEVTRMIGFMKHDRWTQHTZCPWWDMXIBGNBFEFHDOOUFPPDNOTXQOBWUNZPVJNRTMAABBTAQXTDFMLURMCKIXEUXLLJOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.36914281321551223);
    msg.setSource(15193U);
    msg.setSourceEntity(13U);
    msg.setDestination(25189U);
    msg.setDestinationEntity(177U);
    msg.value = 0.44621372680419724;
    msg.confidence = 0.8068805934062656;
    msg.opmodes.assign("PHHLJXCXSRNLHRHTNHFEYUHGUSLXOFLWCZINPCQZSQSNBTYUYQWTNZPVDLPQDFZVAVIHXJWSERYUOQJCGLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.6496220100037748);
    msg.setSource(36197U);
    msg.setSourceEntity(96U);
    msg.setDestination(5479U);
    msg.setDestinationEntity(253U);
    msg.itow = 50777251U;
    msg.lat = 0.8262197707676555;
    msg.lon = 0.7023267560324915;
    msg.height_ell = 0.019273428974736606;
    msg.height_sea = 0.9980297225370675;
    msg.hacc = 0.5046832353773298;
    msg.vacc = 0.1291137300221089;
    msg.vel_n = 0.46138640759746796;
    msg.vel_e = 0.9979070094922337;
    msg.vel_d = 0.19368926271560793;
    msg.speed = 0.4476199170004075;
    msg.gspeed = 0.7197975828978184;
    msg.heading = 0.8547485958353824;
    msg.sacc = 0.1432432706431972;
    msg.cacc = 0.9342928758366686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.35867668816325315);
    msg.setSource(19789U);
    msg.setSourceEntity(174U);
    msg.setDestination(19290U);
    msg.setDestinationEntity(39U);
    msg.itow = 3760119341U;
    msg.lat = 0.5725618586242291;
    msg.lon = 0.4297437921398173;
    msg.height_ell = 0.13095818613778565;
    msg.height_sea = 0.45643616889145744;
    msg.hacc = 0.877316855313926;
    msg.vacc = 0.5118812712318739;
    msg.vel_n = 0.2855435483830626;
    msg.vel_e = 0.7685859796629688;
    msg.vel_d = 0.8998378321707576;
    msg.speed = 0.8367459356654685;
    msg.gspeed = 0.45900692378045005;
    msg.heading = 0.2839776941613732;
    msg.sacc = 0.14327413520571397;
    msg.cacc = 0.6961580178010993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.43025154908077046);
    msg.setSource(6714U);
    msg.setSourceEntity(168U);
    msg.setDestination(20387U);
    msg.setDestinationEntity(169U);
    msg.itow = 2639494923U;
    msg.lat = 0.2508829650826745;
    msg.lon = 0.3913961549397321;
    msg.height_ell = 0.7382088775038557;
    msg.height_sea = 0.48216605874629526;
    msg.hacc = 0.1963621180805779;
    msg.vacc = 0.7536581523200243;
    msg.vel_n = 0.6979755945324863;
    msg.vel_e = 0.8721494835602438;
    msg.vel_d = 0.5760637860229628;
    msg.speed = 0.30193586709515874;
    msg.gspeed = 0.42601664859453126;
    msg.heading = 0.4081637658604734;
    msg.sacc = 0.09634012403403569;
    msg.cacc = 0.8799517247855486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.46423318023373683);
    msg.setSource(55223U);
    msg.setSourceEntity(8U);
    msg.setDestination(19551U);
    msg.setDestinationEntity(197U);
    msg.id = 141U;
    msg.value = 0.5821102188046653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.9435016000712284);
    msg.setSource(11324U);
    msg.setSourceEntity(167U);
    msg.setDestination(18851U);
    msg.setDestinationEntity(214U);
    msg.id = 109U;
    msg.value = 0.3273258525193663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.2845249200869233);
    msg.setSource(62689U);
    msg.setSourceEntity(31U);
    msg.setDestination(11973U);
    msg.setDestinationEntity(87U);
    msg.id = 24U;
    msg.value = 0.27942271952881315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.4195222356321432);
    msg.setSource(54457U);
    msg.setSourceEntity(12U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(102U);
    msg.x = 0.4547904006435368;
    msg.y = 0.8254421843232674;
    msg.z = 0.9200812512169889;
    msg.phi = 0.7280124187174077;
    msg.theta = 0.9989531896528283;
    msg.psi = 0.15052155928533162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.24553130323626238);
    msg.setSource(37644U);
    msg.setSourceEntity(99U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(116U);
    msg.x = 0.9797902629499228;
    msg.y = 0.9489787975948386;
    msg.z = 0.5623051455316215;
    msg.phi = 0.6397220490681226;
    msg.theta = 0.975177847494541;
    msg.psi = 0.24355371737472464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.6731100085221319);
    msg.setSource(29575U);
    msg.setSourceEntity(210U);
    msg.setDestination(56900U);
    msg.setDestinationEntity(18U);
    msg.x = 0.265057507739471;
    msg.y = 0.21580074318327813;
    msg.z = 0.9070607590472702;
    msg.phi = 0.0415204301693749;
    msg.theta = 0.8441136884110847;
    msg.psi = 0.49571889070430075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.5899563385914538);
    msg.setSource(39574U);
    msg.setSourceEntity(233U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(36U);
    msg.beam_width = 0.9098593524783934;
    msg.beam_height = 0.822135808502596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.2052607747481897);
    msg.setSource(1184U);
    msg.setSourceEntity(243U);
    msg.setDestination(3773U);
    msg.setDestinationEntity(26U);
    msg.beam_width = 0.13455855285324025;
    msg.beam_height = 0.5885911630561141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.05401493321595141);
    msg.setSource(2862U);
    msg.setSourceEntity(43U);
    msg.setDestination(30485U);
    msg.setDestinationEntity(224U);
    msg.beam_width = 0.047623031956460005;
    msg.beam_height = 0.8982030781472026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.37316210557945706);
    msg.setSource(48859U);
    msg.setSourceEntity(237U);
    msg.setDestination(15615U);
    msg.setDestinationEntity(183U);
    msg.sane = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.5999243315701489);
    msg.setSource(59446U);
    msg.setSourceEntity(166U);
    msg.setDestination(64507U);
    msg.setDestinationEntity(93U);
    msg.sane = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.5017673361688374);
    msg.setSource(33722U);
    msg.setSourceEntity(193U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(234U);
    msg.sane = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.9131427365935487);
    msg.setSource(54533U);
    msg.setSourceEntity(110U);
    msg.setDestination(55396U);
    msg.setDestinationEntity(54U);
    msg.value = 0.32263978081753786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.9683397054309425);
    msg.setSource(39200U);
    msg.setSourceEntity(232U);
    msg.setDestination(20273U);
    msg.setDestinationEntity(131U);
    msg.value = 0.047936837267555155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.3363109678406827);
    msg.setSource(36006U);
    msg.setSourceEntity(221U);
    msg.setDestination(17379U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8539185730864725;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.38657546225570827);
    msg.setSource(7865U);
    msg.setSourceEntity(240U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(81U);
    msg.value = 0.15219719184411262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.7533516737625622);
    msg.setSource(60667U);
    msg.setSourceEntity(10U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(103U);
    msg.value = 0.2553260243841472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.24744870339145297);
    msg.setSource(3817U);
    msg.setSourceEntity(206U);
    msg.setDestination(41300U);
    msg.setDestinationEntity(175U);
    msg.value = 0.8697815204538584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.5121595939903898);
    msg.setSource(10599U);
    msg.setSourceEntity(147U);
    msg.setDestination(45464U);
    msg.setDestinationEntity(20U);
    msg.value = 0.08081970081091072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.34713418683955066);
    msg.setSource(25635U);
    msg.setSourceEntity(134U);
    msg.setDestination(47273U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7729849757681085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.02669580391634996);
    msg.setSource(44852U);
    msg.setSourceEntity(92U);
    msg.setDestination(50704U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9088722599772369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.3540683938334708);
    msg.setSource(31664U);
    msg.setSourceEntity(29U);
    msg.setDestination(37084U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6784455964977703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.957942878586177);
    msg.setSource(58525U);
    msg.setSourceEntity(80U);
    msg.setDestination(57667U);
    msg.setDestinationEntity(2U);
    msg.value = 0.06646055188000011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.5173893355744561);
    msg.setSource(63961U);
    msg.setSourceEntity(207U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(189U);
    msg.value = 0.9866748269767082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.9365395708118999);
    msg.setSource(58188U);
    msg.setSourceEntity(183U);
    msg.setDestination(54820U);
    msg.setDestinationEntity(61U);
    msg.id = 42U;
    msg.zoom = 87U;
    msg.action = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.46918427795562834);
    msg.setSource(33410U);
    msg.setSourceEntity(62U);
    msg.setDestination(33716U);
    msg.setDestinationEntity(63U);
    msg.id = 65U;
    msg.zoom = 245U;
    msg.action = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.6380037058380299);
    msg.setSource(8826U);
    msg.setSourceEntity(79U);
    msg.setDestination(41965U);
    msg.setDestinationEntity(140U);
    msg.id = 55U;
    msg.zoom = 166U;
    msg.action = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.6102960387235253);
    msg.setSource(7189U);
    msg.setSourceEntity(193U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(168U);
    msg.id = 215U;
    msg.value = 0.1789278800166587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.053434558295172185);
    msg.setSource(33881U);
    msg.setSourceEntity(98U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(172U);
    msg.id = 170U;
    msg.value = 0.008096432592026304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.607196075881106);
    msg.setSource(37182U);
    msg.setSourceEntity(201U);
    msg.setDestination(14825U);
    msg.setDestinationEntity(218U);
    msg.id = 234U;
    msg.value = 0.09705490136850459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.5340530133898171);
    msg.setSource(16755U);
    msg.setSourceEntity(52U);
    msg.setDestination(33055U);
    msg.setDestinationEntity(16U);
    msg.id = 104U;
    msg.value = 0.5986171247417653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.2286936912801356);
    msg.setSource(50143U);
    msg.setSourceEntity(174U);
    msg.setDestination(10722U);
    msg.setDestinationEntity(104U);
    msg.id = 97U;
    msg.value = 0.8970132814754038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.9018008261368147);
    msg.setSource(23771U);
    msg.setSourceEntity(203U);
    msg.setDestination(35520U);
    msg.setDestinationEntity(147U);
    msg.id = 111U;
    msg.value = 0.08850738588062568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.5085729218159338);
    msg.setSource(64552U);
    msg.setSourceEntity(15U);
    msg.setDestination(51162U);
    msg.setDestinationEntity(93U);
    msg.id = 158U;
    msg.angle = 0.03948343495208129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.5150394920410585);
    msg.setSource(6931U);
    msg.setSourceEntity(234U);
    msg.setDestination(31350U);
    msg.setDestinationEntity(212U);
    msg.id = 205U;
    msg.angle = 0.45060913991611695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.6241573536144555);
    msg.setSource(63751U);
    msg.setSourceEntity(0U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(187U);
    msg.id = 123U;
    msg.angle = 0.267114527450524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.7529323196556641);
    msg.setSource(16158U);
    msg.setSourceEntity(76U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(106U);
    msg.op = 240U;
    msg.actions.assign("UKXJLZFOOMYIARKGUSLZQPEQBDIDONDAZLZYCEHDHGXTQUVWJABXZNOAGQCSUDTZBCRFPNADTFTKRCXDFKZLDXRIVQQGSTVULTGRVQGOIWENRWWOPSHEKAPNCNJTBCFEEJNVIEDSHLCUPYGFMJIBYDMGTPVPAPWAMKVRSOUJFVYSNJCEBLPKAYTWXSXMSHZMMXJZUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.6393074285608018);
    msg.setSource(60037U);
    msg.setSourceEntity(147U);
    msg.setDestination(57757U);
    msg.setDestinationEntity(203U);
    msg.op = 232U;
    msg.actions.assign("FCASCAQALXGYOGAXJZEADDZMSLMKUTUUTTICUYQWCBEUUIBVSWXGPHHKHKZOXMRJDMOQDYQMTSRDVGBZKGEXJIYYOHAPFKNEULS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.82692664145547);
    msg.setSource(58932U);
    msg.setSourceEntity(138U);
    msg.setDestination(54785U);
    msg.setDestinationEntity(217U);
    msg.op = 249U;
    msg.actions.assign("MQRARMCRJEVXDPSUNRJFTZECMFCYUHVBQOZTJFWYDZOPDAOIKPFSHFUVXHDEVRDGHINYGFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.7807215133342029);
    msg.setSource(7181U);
    msg.setSourceEntity(239U);
    msg.setDestination(24179U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("GSTHYDCPNNPTMQYIRLVZYMLELUDIHKZOSBQOPKWFIRSARGVHSUYXEWIXMLHCFCGCLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.19017227253279512);
    msg.setSource(14231U);
    msg.setSourceEntity(150U);
    msg.setDestination(11832U);
    msg.setDestinationEntity(99U);
    msg.actions.assign("UFMTNHMDXIMECZWTZYRJSGFVOVTXDUHNCYBSYKGQTFHAPODISGNCODMLZESVDXHEJYBSPMZIOWJCCSLPYRVONKXLJQOMQNXSILZMYEBAYUBZEGAHJPPXIPGJGXORTQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.7049798541465638);
    msg.setSource(26687U);
    msg.setSourceEntity(154U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(36U);
    msg.actions.assign("KSCNQBRKKMBLCJPFNUAVFBEHLBJPFIADHDUQXHAICUIGMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.5146769035245969);
    msg.setSource(24197U);
    msg.setSourceEntity(117U);
    msg.setDestination(23953U);
    msg.setDestinationEntity(26U);
    msg.button = 107U;
    msg.value = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.3393235344530683);
    msg.setSource(18336U);
    msg.setSourceEntity(248U);
    msg.setDestination(53054U);
    msg.setDestinationEntity(154U);
    msg.button = 128U;
    msg.value = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.34020395251098146);
    msg.setSource(41624U);
    msg.setSourceEntity(212U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(23U);
    msg.button = 128U;
    msg.value = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.5001027830393748);
    msg.setSource(63334U);
    msg.setSourceEntity(48U);
    msg.setDestination(3465U);
    msg.setDestinationEntity(233U);
    msg.op = 65U;
    msg.text.assign("GVBATPFKUSCHZUEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.42069495228342224);
    msg.setSource(59417U);
    msg.setSourceEntity(40U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(196U);
    msg.op = 17U;
    msg.text.assign("OHSCFIDKEMYKIEJDPPBJWBLTXAQNAREGTHAMRZBLOCJLMXFTCHSMKGFLUNSNCHZFERFQAIXEMVDAGYGSFQHYBVBOXUQMFIWPCJZEMMHPWRELITLKKBMRJJPWRBMRNYOZFJQTPZVXKUPCYLCGBWDHCSQRIWUZAONSVVIZJFKLYNSUYDZNYEOOFTEGNDXRDJCPPKKXEVZQOLQTSTAUHSWXWYGUXVNGHILXBQNJZUABKQID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.1883855592140392);
    msg.setSource(2931U);
    msg.setSourceEntity(63U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(225U);
    msg.op = 64U;
    msg.text.assign("LCTHFTBYCXEYWBKHCAJOEAUWVRXNIRLHWKOQDQZCOTBUVEIDZVPPCIUTOJGHAPBRGURSOVDXMBRVETUPAGDRAQFOVPJCRHKONINIPJCEVWKMUDSGILFTXFZGEBIWXBEKFLDWFAJLYUXQVVMNMPWDDNJKLSNHHCCTGOGEKYSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.9086973736249553);
    msg.setSource(55441U);
    msg.setSourceEntity(165U);
    msg.setDestination(4695U);
    msg.setDestinationEntity(51U);
    msg.op = 126U;
    msg.time_remain = 0.9453203796849282;
    msg.sched_time = 0.38223297268164924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.22540916314311854);
    msg.setSource(17707U);
    msg.setSourceEntity(74U);
    msg.setDestination(2568U);
    msg.setDestinationEntity(242U);
    msg.op = 227U;
    msg.time_remain = 0.8241587527737249;
    msg.sched_time = 0.21565476935826822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.2344719208986049);
    msg.setSource(6802U);
    msg.setSourceEntity(191U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(73U);
    msg.op = 5U;
    msg.time_remain = 0.4379636262499189;
    msg.sched_time = 0.02375993883986449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.4239437015050532);
    msg.setSource(8899U);
    msg.setSourceEntity(174U);
    msg.setDestination(65091U);
    msg.setDestinationEntity(103U);
    msg.name.assign("TXAOGAFTQDBSOBLCHLMYSZHQRGGWYJNTSBVKQCFTRHOJKZUPMMLFZOISQSVQBHNYXFLRTEXQMKIKOWLFCPSACVIABIDIEKEEFWVONHCGPFCRMQKDSBXOKPNATNWSCZHIIBNVXDOSJXDVTPAAQMELJWGLLZQPR");
    msg.op = 242U;
    msg.sched_time = 0.24153031635919497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.893746256821765);
    msg.setSource(61835U);
    msg.setSourceEntity(26U);
    msg.setDestination(35864U);
    msg.setDestinationEntity(183U);
    msg.name.assign("STAQFAUIQDXEEOBTHOLSZBNSYBPCFZHOLLMHOZKJXDVBDWUYRXNIRJBFYJUGDETJCHNOCLCDELHLYMQEPOMREPDSWUTMVJIFWSGBKFGHKTJDFRGRAKEHEPBLVISXWWURTQPAMFWBGPCSGBCZIJTIGDPKBEQXCAJNWAMLV");
    msg.op = 185U;
    msg.sched_time = 0.4457436491193012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.8875311218786319);
    msg.setSource(55190U);
    msg.setSourceEntity(233U);
    msg.setDestination(38075U);
    msg.setDestinationEntity(156U);
    msg.name.assign("NGGWXZNKQYVGUQGAYJIJTVKWQLMOIYLFKUOUBDFLRCNQPIREGABYMWKMZSHXLVAECTYOJMYXEYOIRDYCOPRRJQZBPTOEDLHRWEFXMWIFFNBBIDZDEXAFNQPVRCVXWOACPSQDWUYCGYLHINIKXTGDHSULPTTFJCIOBMFZVTKVAKGZPAOSBHXERSWMWMRTNECHH");
    msg.op = 36U;
    msg.sched_time = 0.21780499605744708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.3010807675857925);
    msg.setSource(63948U);
    msg.setSourceEntity(191U);
    msg.setDestination(19644U);
    msg.setDestinationEntity(243U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.5404315090494317);
    msg.setSource(53101U);
    msg.setSourceEntity(242U);
    msg.setDestination(24936U);
    msg.setDestinationEntity(45U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.5111634316540603);
    msg.setSource(12701U);
    msg.setSourceEntity(89U);
    msg.setDestination(48412U);
    msg.setDestinationEntity(123U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.9352279285477327);
    msg.setSource(3932U);
    msg.setSourceEntity(120U);
    msg.setDestination(41085U);
    msg.setDestinationEntity(112U);
    msg.name.assign("FTTAWYKNLIMUWERNTPKSDCWGHQDMERNALCVPYZNZMYBJDIKHUHRBIJRWOXTAVYCXXMMVJJBQHAEGTUKQBITZLJOHPQLTTELSMWGURAURNBNFNBMPFSJVCCIRPRUXVOVBZSFDVUKQI");
    msg.state = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8946516635898742);
    msg.setSource(28205U);
    msg.setSourceEntity(231U);
    msg.setDestination(56482U);
    msg.setDestinationEntity(48U);
    msg.name.assign("EFQCMRLXQPJOLPITRWPTZJXWYVZHASEWXNKVMAVRJDIKFHYELWJLYNTECMGOXNGKAYWRMQRCZPSTNFDDZWBKQJVQYYTBFNQJTAPORDKTACUKNQKSVRVHCGZRNQD");
    msg.state = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.5284504708913631);
    msg.setSource(41965U);
    msg.setSourceEntity(206U);
    msg.setDestination(3476U);
    msg.setDestinationEntity(56U);
    msg.name.assign("ZHSMCVYGYWYJYKJIHPICPXSBEZMLEQMYRDOAUDBPAVDQBCSAUTQOHRKERNDOMACJTURITVXMCFURNNBZLRTGWKLYUKH");
    msg.state = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.008659691751617071);
    msg.setSource(29251U);
    msg.setSourceEntity(232U);
    msg.setDestination(36835U);
    msg.setDestinationEntity(93U);
    msg.name.assign("AWMBNTTQTSQIYEWJLYHGSOJYAZQOXGEUEZTYVLRVQGKGNXPAMPDSGIIWBPPXJKJBVJPSQHBUVYCRBXVNHCKPVIYXDLJXDNDKKAERCVWRYOBVWBWFOGVYUGFSSFWTZMBXHDCFEKHHEGOZQCADOUFIVFEOSNTNWZSJIMRHQODKLQXLCTSRUAGRCZCDFN");
    msg.value = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.05850693335682078);
    msg.setSource(14782U);
    msg.setSourceEntity(205U);
    msg.setDestination(24580U);
    msg.setDestinationEntity(181U);
    msg.name.assign("MFYMXHOJTWSUAUFCNDSIHDXIGPQKDEHHZUPSDYSATIJONLOUDEKSLXMRASROGVIQAFWPTAUVUZVYIDVNWYWOAFIPCPJMWBEOOGTUXZLNBTTKMNKYTFIAMBORJMJFTHWAXXLRAKBTKTCMRYHQQRZJOFHFCRQBIHQLVZGPNEBJHVMEHRSLDEVGBQVZSBNN");
    msg.value = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.45414159667476206);
    msg.setSource(6843U);
    msg.setSourceEntity(169U);
    msg.setDestination(35515U);
    msg.setDestinationEntity(15U);
    msg.name.assign("DSTUPVIYFQNLROYWCKKZCCWTEYXKUNWZTHDUISPEMMANBPFJIGPNNHBGCPSEYWKGUFEMQKDJYQJABTFJ");
    msg.value = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.3772794356171567);
    msg.setSource(14889U);
    msg.setSourceEntity(144U);
    msg.setDestination(1036U);
    msg.setDestinationEntity(249U);
    msg.name.assign("NHDGSETCXAAUZHMOPNFTTCGJZNFPWVITZSMXNRBNVYDYLVJHDYVHBIJGVLEQDMTGHXGBKXRDSZGYURQINIOMYBKRVIQBCOOHWAGPFGHDFQQKEWIYVPLHMUJUAIEOSLXQZSNAJLUDACUXPEFKTFMIHUNMCGMRBQBTPKCOODWBBALPQJRCTZTNRSFQKAJEDEXYKPFLFTSJMNWERUODACLSXZUCZLKOJVPWWRALFWHCXRJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.6994316111513185);
    msg.setSource(60348U);
    msg.setSourceEntity(224U);
    msg.setDestination(7559U);
    msg.setDestinationEntity(220U);
    msg.name.assign("XSELLJXQSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.24659805616669017);
    msg.setSource(9160U);
    msg.setSourceEntity(170U);
    msg.setDestination(48893U);
    msg.setDestinationEntity(184U);
    msg.name.assign("NHXVQYIPAJWWSJYEUPUHCKCGNBIUBSPIMVATEEXYFJBXMRMYKCCAPGGIVREDJLPXRFFQGTDUKZWQODETYUXOQNVNHBSFCIONRTJTMFDKFPQICRCJCSLQJSBKSDKILVTZKBCVDGMADATLTLVOMZUSVNMJUEWZZRMQYSZEYYRAYDRGOHILQNWQBUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.04445007836365644);
    msg.setSource(26016U);
    msg.setSourceEntity(90U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(246U);
    msg.name.assign("IQMVNPQVVQWXMFFBODGCVJJLQIHLGMAMUSOVYZWBSR");
    msg.value = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.5387265755491729);
    msg.setSource(64851U);
    msg.setSourceEntity(14U);
    msg.setDestination(22221U);
    msg.setDestinationEntity(127U);
    msg.name.assign("IOPZEQQXGOTBZNVLMRLABDIUGSFRAAXNWIATUEYRWTFGGVVXWEKGVCHNHKLFMFDJOZSAKHRIYNWQEBJKDBNZMMGLYBNZOIVDITSSSHKFXIQYKQEDKVTPSJWNUXAVIPBPZNFIRLS");
    msg.value = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.5292953588400351);
    msg.setSource(25722U);
    msg.setSourceEntity(18U);
    msg.setDestination(65161U);
    msg.setDestinationEntity(180U);
    msg.name.assign("TXIUJSYGTAGEEOKPGGAPABYOAWS");
    msg.value = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.13514176135366163);
    msg.setSource(5425U);
    msg.setSourceEntity(136U);
    msg.setDestination(63758U);
    msg.setDestinationEntity(21U);
    msg.id = 172U;
    msg.period = 238773839U;
    msg.duty_cycle = 2284945998U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.7945570160995677);
    msg.setSource(47231U);
    msg.setSourceEntity(108U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(163U);
    msg.id = 127U;
    msg.period = 3609775831U;
    msg.duty_cycle = 920302676U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.4544463735926261);
    msg.setSource(6268U);
    msg.setSourceEntity(159U);
    msg.setDestination(12151U);
    msg.setDestinationEntity(231U);
    msg.id = 204U;
    msg.period = 1515237318U;
    msg.duty_cycle = 2274337381U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.028401128714125257);
    msg.setSource(35616U);
    msg.setSourceEntity(229U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(228U);
    msg.id = 35U;
    msg.period = 3134350795U;
    msg.duty_cycle = 3107849830U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.26643342304376283);
    msg.setSource(30188U);
    msg.setSourceEntity(137U);
    msg.setDestination(41639U);
    msg.setDestinationEntity(55U);
    msg.id = 65U;
    msg.period = 3899081775U;
    msg.duty_cycle = 586043047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.7107029814902802);
    msg.setSource(829U);
    msg.setSourceEntity(86U);
    msg.setDestination(1699U);
    msg.setDestinationEntity(22U);
    msg.id = 87U;
    msg.period = 710854615U;
    msg.duty_cycle = 2323142331U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.38454188192938243);
    msg.setSource(8557U);
    msg.setSourceEntity(36U);
    msg.setDestination(52522U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.11220567913420498;
    msg.lon = 0.7744351110396053;
    msg.height = 0.29825920146090146;
    msg.x = 0.730880359874354;
    msg.y = 0.9828329183482784;
    msg.z = 0.9022911069802505;
    msg.phi = 0.41532452376761697;
    msg.theta = 0.9721813003488181;
    msg.psi = 0.7709385042654618;
    msg.u = 0.8618050928262578;
    msg.v = 0.7051204066378793;
    msg.w = 0.9443760448945163;
    msg.vx = 0.11679325205303726;
    msg.vy = 0.3732325385335882;
    msg.vz = 0.7852653338222678;
    msg.p = 0.867451262669437;
    msg.q = 0.5321032361508502;
    msg.r = 0.9158690967065225;
    msg.depth = 0.9471603159644982;
    msg.alt = 0.6676708395888894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.2510273576724288);
    msg.setSource(28487U);
    msg.setSourceEntity(194U);
    msg.setDestination(1491U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.2546594143282921;
    msg.lon = 0.41022718016592286;
    msg.height = 0.6862805707056714;
    msg.x = 0.8025401009463123;
    msg.y = 0.3752791846100664;
    msg.z = 0.2865940410837571;
    msg.phi = 0.7844610973748721;
    msg.theta = 0.16253408311819084;
    msg.psi = 0.18446604875647066;
    msg.u = 0.5400844615486052;
    msg.v = 0.22077900190386301;
    msg.w = 0.31180019319776553;
    msg.vx = 0.8880223292903849;
    msg.vy = 0.776124501843502;
    msg.vz = 0.8004293048350853;
    msg.p = 0.9298772374504265;
    msg.q = 0.5280686609567612;
    msg.r = 0.8234345424859811;
    msg.depth = 0.2966502983248078;
    msg.alt = 0.9502463210401343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.1864699743249113);
    msg.setSource(58499U);
    msg.setSourceEntity(141U);
    msg.setDestination(40938U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.9409671887110949;
    msg.lon = 0.7241696618805231;
    msg.height = 0.45082875831479663;
    msg.x = 0.42676146781677105;
    msg.y = 0.5663914861093926;
    msg.z = 0.19529289783671255;
    msg.phi = 0.9598307596050981;
    msg.theta = 0.9395449058811731;
    msg.psi = 0.7846556774726421;
    msg.u = 0.030622147932741428;
    msg.v = 0.7169868500613459;
    msg.w = 0.4119017145400564;
    msg.vx = 0.8604025620509009;
    msg.vy = 0.8824944083620587;
    msg.vz = 0.2969906479354668;
    msg.p = 0.7707046560296132;
    msg.q = 0.512121227234358;
    msg.r = 0.5069239176913973;
    msg.depth = 0.9079076470229527;
    msg.alt = 0.12152502434523482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.9701871212543823);
    msg.setSource(27960U);
    msg.setSourceEntity(71U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(134U);
    msg.x = 0.8072027643469379;
    msg.y = 0.36727081554666485;
    msg.z = 0.33068352186684047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.4422608979777578);
    msg.setSource(26345U);
    msg.setSourceEntity(238U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(181U);
    msg.x = 0.09222387884264316;
    msg.y = 0.17488877622752863;
    msg.z = 0.2678470826232181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.36512719829283224);
    msg.setSource(4750U);
    msg.setSourceEntity(24U);
    msg.setDestination(5635U);
    msg.setDestinationEntity(155U);
    msg.x = 0.2052764543515484;
    msg.y = 0.5174910449914348;
    msg.z = 0.9165259858708865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.3743892148586747);
    msg.setSource(48374U);
    msg.setSourceEntity(98U);
    msg.setDestination(37385U);
    msg.setDestinationEntity(16U);
    msg.value = 0.8503947701293695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.3881242602000279);
    msg.setSource(54758U);
    msg.setSourceEntity(61U);
    msg.setDestination(45303U);
    msg.setDestinationEntity(82U);
    msg.value = 0.7510315657995038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.403827082510144);
    msg.setSource(20899U);
    msg.setSourceEntity(26U);
    msg.setDestination(42764U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6005191960751297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.6174180434642268);
    msg.setSource(64072U);
    msg.setSourceEntity(244U);
    msg.setDestination(34031U);
    msg.setDestinationEntity(213U);
    msg.value = 0.42292226228275176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.1074102331509208);
    msg.setSource(35606U);
    msg.setSourceEntity(198U);
    msg.setDestination(55179U);
    msg.setDestinationEntity(250U);
    msg.value = 0.13995923207306205;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.44210821406262335);
    msg.setSource(33812U);
    msg.setSourceEntity(234U);
    msg.setDestination(39645U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7069581115252446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.8059944264388018);
    msg.setSource(49579U);
    msg.setSourceEntity(170U);
    msg.setDestination(5172U);
    msg.setDestinationEntity(89U);
    msg.x = 0.39578857139755375;
    msg.y = 0.016435039256470496;
    msg.z = 0.29311511623336517;
    msg.phi = 0.20311244229105618;
    msg.theta = 0.5498006557485728;
    msg.psi = 0.7366217990564082;
    msg.p = 0.20374427674418394;
    msg.q = 0.9490892209259244;
    msg.r = 0.032650081696416366;
    msg.u = 0.01317927511789363;
    msg.v = 0.9607856938445144;
    msg.w = 0.9060094775013766;
    msg.bias_psi = 0.7025719960399224;
    msg.bias_r = 0.293262617170021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.3663914719018946);
    msg.setSource(30280U);
    msg.setSourceEntity(191U);
    msg.setDestination(17824U);
    msg.setDestinationEntity(28U);
    msg.x = 0.4488530934473428;
    msg.y = 0.7457246569014064;
    msg.z = 0.8177712057565686;
    msg.phi = 0.9718486233210303;
    msg.theta = 0.8560236426104416;
    msg.psi = 0.057882240237100535;
    msg.p = 0.10533469632225645;
    msg.q = 0.3129835570946059;
    msg.r = 0.8637397129228069;
    msg.u = 0.9768960395929941;
    msg.v = 0.3165693595459175;
    msg.w = 0.06658690750306395;
    msg.bias_psi = 0.11239309122862218;
    msg.bias_r = 0.5796785924653218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.41360020050437485);
    msg.setSource(8484U);
    msg.setSourceEntity(7U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(184U);
    msg.x = 0.8898216927119271;
    msg.y = 0.46796109000809427;
    msg.z = 0.7199355520843916;
    msg.phi = 0.008201480342863054;
    msg.theta = 0.5953916201609388;
    msg.psi = 0.0291950413133909;
    msg.p = 0.24929386356669425;
    msg.q = 0.9413494281291364;
    msg.r = 0.61219986329568;
    msg.u = 0.051723652898552075;
    msg.v = 0.90699176584218;
    msg.w = 0.07169744095427721;
    msg.bias_psi = 0.9335033256395422;
    msg.bias_r = 0.5688067925853568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.7741555861779896);
    msg.setSource(53483U);
    msg.setSourceEntity(212U);
    msg.setDestination(16385U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.5638688771375033;
    msg.bias_r = 0.9808226423851457;
    msg.cog = 0.9837179029460292;
    msg.cyaw = 0.3683873327213262;
    msg.lbl_rej_level = 0.9191505588459212;
    msg.gps_rej_level = 0.7466863967271782;
    msg.custom_x = 0.7220249119025983;
    msg.custom_y = 0.7833340072577064;
    msg.custom_z = 0.993054017705715;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.20760805371709257);
    msg.setSource(21649U);
    msg.setSourceEntity(120U);
    msg.setDestination(44307U);
    msg.setDestinationEntity(20U);
    msg.bias_psi = 0.8371815295150103;
    msg.bias_r = 0.0833491638646261;
    msg.cog = 0.32926477771641804;
    msg.cyaw = 0.12844925592241585;
    msg.lbl_rej_level = 0.34243101955530875;
    msg.gps_rej_level = 0.7689300047766678;
    msg.custom_x = 0.5748709265549742;
    msg.custom_y = 0.3186912779411091;
    msg.custom_z = 0.07503262837163183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.24724802748203545);
    msg.setSource(35829U);
    msg.setSourceEntity(123U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(132U);
    msg.bias_psi = 0.4330101942106521;
    msg.bias_r = 0.40406420530957576;
    msg.cog = 0.06835807912614589;
    msg.cyaw = 0.8976847372287291;
    msg.lbl_rej_level = 0.1393002643897684;
    msg.gps_rej_level = 0.4796309383897598;
    msg.custom_x = 0.8194540858131365;
    msg.custom_y = 0.6600896745926342;
    msg.custom_z = 0.16083653646969664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.6834019260435545);
    msg.setSource(62172U);
    msg.setSourceEntity(172U);
    msg.setDestination(47563U);
    msg.setDestinationEntity(71U);
    msg.utc_time = 0.6081113121904693;
    msg.reason = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.9878020150526693);
    msg.setSource(24067U);
    msg.setSourceEntity(10U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(127U);
    msg.utc_time = 0.14963148711652563;
    msg.reason = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.7214629176913362);
    msg.setSource(38550U);
    msg.setSourceEntity(51U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.325127991396469;
    msg.reason = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.756598918603762);
    msg.setSource(21529U);
    msg.setSourceEntity(14U);
    msg.setDestination(55624U);
    msg.setDestinationEntity(140U);
    msg.id = 130U;
    msg.range = 0.8560345583127572;
    msg.acceptance = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.5784695332239876);
    msg.setSource(40865U);
    msg.setSourceEntity(227U);
    msg.setDestination(18972U);
    msg.setDestinationEntity(225U);
    msg.id = 52U;
    msg.range = 0.27493238992291547;
    msg.acceptance = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.8524119183882689);
    msg.setSource(28178U);
    msg.setSourceEntity(38U);
    msg.setDestination(57650U);
    msg.setDestinationEntity(90U);
    msg.id = 188U;
    msg.range = 0.6264832233790725;
    msg.acceptance = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.4271253967999823);
    msg.setSource(37204U);
    msg.setSourceEntity(251U);
    msg.setDestination(42851U);
    msg.setDestinationEntity(0U);
    msg.type = 138U;
    msg.reason = 138U;
    msg.value = 0.574550007174503;
    msg.timestep = 0.15788922680876538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.03850295388500369);
    msg.setSource(18775U);
    msg.setSourceEntity(74U);
    msg.setDestination(60939U);
    msg.setDestinationEntity(34U);
    msg.type = 67U;
    msg.reason = 142U;
    msg.value = 0.07647946877071676;
    msg.timestep = 0.27969930287363454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.07195756656173324);
    msg.setSource(55430U);
    msg.setSourceEntity(127U);
    msg.setDestination(24352U);
    msg.setDestinationEntity(190U);
    msg.type = 79U;
    msg.reason = 51U;
    msg.value = 0.916314013989696;
    msg.timestep = 0.8714993347418766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.9373947708240515);
    msg.setSource(6645U);
    msg.setSourceEntity(220U);
    msg.setDestination(10943U);
    msg.setDestinationEntity(189U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OPJJEHBPBUQQJJWVEEZZUVUENNVKASGYI");
    tmp_msg_0.lat = 0.1885549829706421;
    tmp_msg_0.lon = 0.8270682072455852;
    tmp_msg_0.depth = 0.1537572743969714;
    tmp_msg_0.query_channel = 56U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 54U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.766612474374436;
    msg.y = 0.19593175130707796;
    msg.var_x = 0.8151930488326634;
    msg.var_y = 0.47480495413896107;
    msg.distance = 0.6310071320239721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.2759862194243371);
    msg.setSource(36940U);
    msg.setSourceEntity(249U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(23U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DXOXHYOMRJLHRKJVGFDPXRCOWKIRNDRQPFFGPKAKYEGSSQAUFXDQWIL");
    tmp_msg_0.lat = 0.08713825023334387;
    tmp_msg_0.lon = 0.17276054246461836;
    tmp_msg_0.depth = 0.968021754298532;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 220U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8028287415841158;
    msg.y = 0.6195628314060704;
    msg.var_x = 0.08425533416236086;
    msg.var_y = 0.9282917580245689;
    msg.distance = 0.3688046699557992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.8111073019918847);
    msg.setSource(7784U);
    msg.setSourceEntity(76U);
    msg.setDestination(40741U);
    msg.setDestinationEntity(73U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CTIULFPBEZQGDUYBLXDZUYEHYHIGAXPAKZMLURMCETVETPVUVUVSBIYRNGHVEPONSENCMKBJHAPOKDAEJBHCJHOOWSSSDWMRXXXHJARWJMOFLPYLAQBWTHXINBUZFUFWGCVNUAHXZGQRMYAZRVKMCBSYKFIWFFTEKPYVQUNAZQJRNNIOARGFTPKDLMMNOXXWQG");
    tmp_msg_0.lat = 0.2896922891289019;
    tmp_msg_0.lon = 0.47129559485249295;
    tmp_msg_0.depth = 0.046405701022095625;
    tmp_msg_0.query_channel = 253U;
    tmp_msg_0.reply_channel = 30U;
    tmp_msg_0.transponder_delay = 8U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.001894360083322777;
    msg.y = 0.4124707299629593;
    msg.var_x = 0.5018607629683972;
    msg.var_y = 0.8883362721282836;
    msg.distance = 0.7287412837368601;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.8021030278118);
    msg.setSource(60521U);
    msg.setSourceEntity(69U);
    msg.setDestination(32512U);
    msg.setDestinationEntity(165U);
    msg.state = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.75858685777011);
    msg.setSource(43113U);
    msg.setSourceEntity(156U);
    msg.setDestination(11987U);
    msg.setDestinationEntity(61U);
    msg.state = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.7943728785377191);
    msg.setSource(46937U);
    msg.setSourceEntity(108U);
    msg.setDestination(38930U);
    msg.setDestinationEntity(14U);
    msg.state = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.010811485387495323);
    msg.setSource(61778U);
    msg.setSourceEntity(57U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(139U);
    msg.x = 0.6906769191416564;
    msg.y = 0.47046505202939937;
    msg.z = 0.05998628598841105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.2166303209240127);
    msg.setSource(62952U);
    msg.setSourceEntity(223U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(45U);
    msg.x = 0.6625061572450598;
    msg.y = 0.9701212193800165;
    msg.z = 0.7538046633194524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.27164994789170416);
    msg.setSource(46337U);
    msg.setSourceEntity(173U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(187U);
    msg.x = 0.20182750190444487;
    msg.y = 0.3792007106617258;
    msg.z = 0.054018873951876545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.6107418992687033);
    msg.setSource(50435U);
    msg.setSourceEntity(140U);
    msg.setDestination(38572U);
    msg.setDestinationEntity(26U);
    msg.value = 0.3502904596721813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.8188425768836225);
    msg.setSource(21472U);
    msg.setSourceEntity(124U);
    msg.setDestination(8963U);
    msg.setDestinationEntity(1U);
    msg.value = 0.07221990779265886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.9727380752469894);
    msg.setSource(18886U);
    msg.setSourceEntity(192U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5213814180822678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.2997906604207534);
    msg.setSource(63971U);
    msg.setSourceEntity(8U);
    msg.setDestination(27206U);
    msg.setDestinationEntity(16U);
    msg.value = 0.5617947103707687;
    msg.z_units = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.8587532854878269);
    msg.setSource(64844U);
    msg.setSourceEntity(17U);
    msg.setDestination(39150U);
    msg.setDestinationEntity(145U);
    msg.value = 0.6582507544944564;
    msg.z_units = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.6785540234160047);
    msg.setSource(19563U);
    msg.setSourceEntity(49U);
    msg.setDestination(54048U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8731686428587453;
    msg.z_units = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.09613801966047641);
    msg.setSource(13830U);
    msg.setSourceEntity(180U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(38U);
    msg.value = 0.23323787818780684;
    msg.speed_units = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.9654850505648582);
    msg.setSource(48297U);
    msg.setSourceEntity(81U);
    msg.setDestination(55460U);
    msg.setDestinationEntity(79U);
    msg.value = 0.1999544118661648;
    msg.speed_units = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.5318637388940894);
    msg.setSource(43317U);
    msg.setSourceEntity(58U);
    msg.setDestination(6929U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6112320453437117;
    msg.speed_units = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.2226034966227295);
    msg.setSource(52008U);
    msg.setSourceEntity(246U);
    msg.setDestination(27790U);
    msg.setDestinationEntity(74U);
    msg.value = 0.788980082108848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.11199926921552383);
    msg.setSource(29296U);
    msg.setSourceEntity(111U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(26U);
    msg.value = 0.12307531116549075;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.412883790350561);
    msg.setSource(8939U);
    msg.setSourceEntity(163U);
    msg.setDestination(12361U);
    msg.setDestinationEntity(0U);
    msg.value = 0.2307626574654421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.25421812524069143);
    msg.setSource(52602U);
    msg.setSourceEntity(138U);
    msg.setDestination(62238U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5459513138539739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.9484408569257404);
    msg.setSource(6549U);
    msg.setSourceEntity(143U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6150032528094509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.6245965558655855);
    msg.setSource(45340U);
    msg.setSourceEntity(203U);
    msg.setDestination(57810U);
    msg.setDestinationEntity(69U);
    msg.value = 0.3005910646208023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.41578814227403726);
    msg.setSource(23368U);
    msg.setSourceEntity(179U);
    msg.setDestination(46763U);
    msg.setDestinationEntity(229U);
    msg.value = 0.2996809781534514;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.12136276491081333);
    msg.setSource(35731U);
    msg.setSourceEntity(81U);
    msg.setDestination(36803U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4169712961055224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.6330918508572473);
    msg.setSource(17629U);
    msg.setSourceEntity(65U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(154U);
    msg.value = 0.2685897865486546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.7990084641504014);
    msg.setSource(11178U);
    msg.setSourceEntity(245U);
    msg.setDestination(11731U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 1167612039U;
    msg.start_lat = 0.7578275551463053;
    msg.start_lon = 0.7706069442282479;
    msg.start_z = 0.5467752353271814;
    msg.start_z_units = 25U;
    msg.end_lat = 0.39444704627876037;
    msg.end_lon = 0.15621531571602354;
    msg.end_z = 0.7474405129224896;
    msg.end_z_units = 247U;
    msg.speed = 0.9780688450458189;
    msg.speed_units = 173U;
    msg.lradius = 0.8728708264521527;
    msg.flags = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.551611885484097);
    msg.setSource(58158U);
    msg.setSourceEntity(239U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 2689963739U;
    msg.start_lat = 0.7108253950013387;
    msg.start_lon = 0.600139431728893;
    msg.start_z = 0.6334456367515711;
    msg.start_z_units = 153U;
    msg.end_lat = 0.4676204576571318;
    msg.end_lon = 0.036628181592553766;
    msg.end_z = 0.7508893873110355;
    msg.end_z_units = 110U;
    msg.speed = 0.30719881533788207;
    msg.speed_units = 151U;
    msg.lradius = 0.20792659875966024;
    msg.flags = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.8469155838385668);
    msg.setSource(59388U);
    msg.setSourceEntity(145U);
    msg.setDestination(39914U);
    msg.setDestinationEntity(227U);
    msg.path_ref = 330424941U;
    msg.start_lat = 0.5685796425527148;
    msg.start_lon = 0.08648613736064747;
    msg.start_z = 0.24168213857488408;
    msg.start_z_units = 77U;
    msg.end_lat = 0.5782580039309171;
    msg.end_lon = 0.8458673551734017;
    msg.end_z = 0.41237006274249155;
    msg.end_z_units = 23U;
    msg.speed = 0.09316291291913548;
    msg.speed_units = 49U;
    msg.lradius = 0.9337117742867367;
    msg.flags = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.16179998772749282);
    msg.setSource(15842U);
    msg.setSourceEntity(199U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(134U);
    msg.x = 0.28271185258353215;
    msg.y = 0.6150255205613587;
    msg.z = 0.7501619644700446;
    msg.k = 0.5561040437939532;
    msg.m = 0.06282005745695607;
    msg.n = 0.9199549396610851;
    msg.flags = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.058116615092072);
    msg.setSource(58216U);
    msg.setSourceEntity(178U);
    msg.setDestination(45894U);
    msg.setDestinationEntity(222U);
    msg.x = 0.792327220308827;
    msg.y = 0.21529673625249912;
    msg.z = 0.4880254442264992;
    msg.k = 0.8937240096542385;
    msg.m = 0.1319939018470596;
    msg.n = 0.4123487767127074;
    msg.flags = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.6020452804618824);
    msg.setSource(36858U);
    msg.setSourceEntity(39U);
    msg.setDestination(28986U);
    msg.setDestinationEntity(173U);
    msg.x = 0.22531770502378423;
    msg.y = 0.6294087979057869;
    msg.z = 0.9871748938607156;
    msg.k = 0.7238237001177201;
    msg.m = 0.7225546344791703;
    msg.n = 0.9133359217945318;
    msg.flags = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.5342259662765991);
    msg.setSource(63156U);
    msg.setSourceEntity(229U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8230796523511944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.2618996727815327);
    msg.setSource(44839U);
    msg.setSourceEntity(74U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(125U);
    msg.value = 0.7909903140817405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.4962710570597304);
    msg.setSource(62551U);
    msg.setSourceEntity(21U);
    msg.setDestination(51334U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8999748444644633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.7310095022073078);
    msg.setSource(11240U);
    msg.setSourceEntity(205U);
    msg.setDestination(61827U);
    msg.setDestinationEntity(76U);
    msg.u = 0.057715418281819475;
    msg.v = 0.012957902684314182;
    msg.w = 0.39373639528631355;
    msg.p = 0.6075214549324907;
    msg.q = 0.7661811906384586;
    msg.r = 0.6245990638097955;
    msg.flags = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.3125870534674603);
    msg.setSource(17332U);
    msg.setSourceEntity(22U);
    msg.setDestination(61395U);
    msg.setDestinationEntity(125U);
    msg.u = 0.7725010875821917;
    msg.v = 0.8229552662207866;
    msg.w = 0.43904041375659786;
    msg.p = 0.622966341867245;
    msg.q = 0.8984617261338481;
    msg.r = 0.7518036992189832;
    msg.flags = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.5395767245733776);
    msg.setSource(60198U);
    msg.setSourceEntity(25U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(122U);
    msg.u = 0.2514549953893238;
    msg.v = 0.2551569479222583;
    msg.w = 0.5331875055613557;
    msg.p = 0.1838452146328322;
    msg.q = 0.8180198083608765;
    msg.r = 0.8318039127428978;
    msg.flags = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.660213888798477);
    msg.setSource(39056U);
    msg.setSourceEntity(192U);
    msg.setDestination(16331U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 1623440744U;
    msg.start_lat = 0.6208002005111087;
    msg.start_lon = 0.16627262194147374;
    msg.start_z = 0.5340925761481919;
    msg.start_z_units = 242U;
    msg.end_lat = 0.38576078335841246;
    msg.end_lon = 0.13650042872179036;
    msg.end_z = 0.6068479122417644;
    msg.end_z_units = 48U;
    msg.lradius = 0.47768843002979744;
    msg.flags = 214U;
    msg.x = 0.3543223194649172;
    msg.y = 0.24910386956536623;
    msg.z = 0.728106186460207;
    msg.vx = 0.13552377873668653;
    msg.vy = 0.7778724024687723;
    msg.vz = 0.7805401058229383;
    msg.course_error = 0.5685958576390988;
    msg.eta = 18077U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.2667593915652261);
    msg.setSource(25242U);
    msg.setSourceEntity(67U);
    msg.setDestination(3604U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 3509323360U;
    msg.start_lat = 0.6932545148659117;
    msg.start_lon = 0.36140651093697973;
    msg.start_z = 0.5863703301012806;
    msg.start_z_units = 34U;
    msg.end_lat = 0.8841411592394761;
    msg.end_lon = 0.47401903367960074;
    msg.end_z = 0.5231490444036362;
    msg.end_z_units = 162U;
    msg.lradius = 0.8288127416340157;
    msg.flags = 39U;
    msg.x = 0.8423057782887444;
    msg.y = 0.18713984455163413;
    msg.z = 0.24332198602980837;
    msg.vx = 0.4985075063394362;
    msg.vy = 0.8399895624818242;
    msg.vz = 0.5277393514109456;
    msg.course_error = 0.8715819973121959;
    msg.eta = 1799U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.7323762274614521);
    msg.setSource(3978U);
    msg.setSourceEntity(237U);
    msg.setDestination(10996U);
    msg.setDestinationEntity(173U);
    msg.path_ref = 1869745448U;
    msg.start_lat = 0.35214635186445165;
    msg.start_lon = 0.34091662848254545;
    msg.start_z = 0.9099911948489803;
    msg.start_z_units = 70U;
    msg.end_lat = 0.4394578769491798;
    msg.end_lon = 0.703094233081954;
    msg.end_z = 0.9134141462085027;
    msg.end_z_units = 199U;
    msg.lradius = 0.9893438948071143;
    msg.flags = 252U;
    msg.x = 0.06700499142298666;
    msg.y = 0.3005406451753131;
    msg.z = 0.005067310220118415;
    msg.vx = 0.9903716812664519;
    msg.vy = 0.024647848553398966;
    msg.vz = 0.8607712134140182;
    msg.course_error = 0.2867584278649157;
    msg.eta = 15747U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.1010696298906264);
    msg.setSource(52747U);
    msg.setSourceEntity(246U);
    msg.setDestination(16746U);
    msg.setDestinationEntity(73U);
    msg.k = 0.9194178449705029;
    msg.m = 0.3319616602603641;
    msg.n = 0.4769281721747358;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.538320935706108);
    msg.setSource(59622U);
    msg.setSourceEntity(7U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(174U);
    msg.k = 0.41187491310920255;
    msg.m = 0.2067560586948175;
    msg.n = 0.8560385809928884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.7875577416144507);
    msg.setSource(7274U);
    msg.setSourceEntity(65U);
    msg.setDestination(60647U);
    msg.setDestinationEntity(217U);
    msg.k = 0.1662985767557016;
    msg.m = 0.2565372725179097;
    msg.n = 0.23887913913543213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.003221125089077015);
    msg.setSource(54842U);
    msg.setSourceEntity(120U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(228U);
    msg.p = 0.9161386305978712;
    msg.i = 0.3037576568362712;
    msg.d = 0.2862410230107333;
    msg.a = 0.23791140853932502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.7509074567876768);
    msg.setSource(65410U);
    msg.setSourceEntity(205U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(180U);
    msg.p = 0.610095854156263;
    msg.i = 0.26877692988865454;
    msg.d = 0.37978384608429816;
    msg.a = 0.8109913851390207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.9203329185343085);
    msg.setSource(42664U);
    msg.setSourceEntity(85U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(155U);
    msg.p = 0.2732854220456028;
    msg.i = 0.03216920279879798;
    msg.d = 0.2947971770535317;
    msg.a = 0.7893571710950775;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.14485432781004515);
    msg.setSource(42065U);
    msg.setSourceEntity(221U);
    msg.setDestination(8353U);
    msg.setDestinationEntity(115U);
    msg.op = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.7636870952620527);
    msg.setSource(60057U);
    msg.setSourceEntity(38U);
    msg.setDestination(55332U);
    msg.setDestinationEntity(120U);
    msg.op = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.2302940314015961);
    msg.setSource(57277U);
    msg.setSourceEntity(105U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(29U);
    msg.op = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.4397089472319454);
    msg.setSource(54481U);
    msg.setSourceEntity(137U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(83U);
    msg.timeout = 35601U;
    msg.lat = 0.37301017139203474;
    msg.lon = 0.11847645591720779;
    msg.z = 0.49576173972975246;
    msg.z_units = 7U;
    msg.speed = 0.6241998698065998;
    msg.speed_units = 154U;
    msg.roll = 0.6536643590626333;
    msg.pitch = 0.3452767930309343;
    msg.yaw = 0.12481612497427019;
    msg.custom.assign("NHBROOHLXKSYMOVWNNKQUUJOVRGFWDYFFPHZQUOEOBLYWDYNUKAERIMLDZJNJTQXDDBYZFNYMHEGPTMZDKVRBTSCXWWXQCGMXDIULBCJYTMOZCVRYPNHBLLXVAAQIDSWGXSEJVUUJDGFGVJPTGEIAXVAMPSABCIZPPHEYUQXAFRUPNSUWME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.36302278332028237);
    msg.setSource(23638U);
    msg.setSourceEntity(160U);
    msg.setDestination(18541U);
    msg.setDestinationEntity(99U);
    msg.timeout = 50544U;
    msg.lat = 0.10344285462269631;
    msg.lon = 0.9926876238210383;
    msg.z = 0.8103008396932467;
    msg.z_units = 159U;
    msg.speed = 0.23726148315629114;
    msg.speed_units = 23U;
    msg.roll = 0.07883763319047865;
    msg.pitch = 0.20030380514863655;
    msg.yaw = 0.3092434425909706;
    msg.custom.assign("JODRJCTWARPPVMPLNQBCBWSHTDSKSDWPRERGZETKZMQFBZNAMOGBOPWVQMUWFZGXBKDKQEPLNQWLJZGDLYTPUVYHCUCGKDPJINAFQPRTZHNMOJAVODRILFOWYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.1800410818578735);
    msg.setSource(31395U);
    msg.setSourceEntity(223U);
    msg.setDestination(38373U);
    msg.setDestinationEntity(194U);
    msg.timeout = 58142U;
    msg.lat = 0.6506520870725447;
    msg.lon = 0.9595918837046188;
    msg.z = 0.8481979560336494;
    msg.z_units = 135U;
    msg.speed = 0.5093002572458143;
    msg.speed_units = 44U;
    msg.roll = 0.9441591772285778;
    msg.pitch = 0.8399674048675849;
    msg.yaw = 0.3052429278747515;
    msg.custom.assign("PPSZJCUODHKGKWDUSEWOPBLZJFMDMDGOHFCXNIEGSYCWVTPXQSGERBYIJHNIVFQLKXIAOPFSWTMSIRHLAOJPZIYHXZMJYFKDAKNMLOWTNUUPCXRZZZQGFQKBYRZBVVLVJOFAINNTMSUPOGAEMRDTTEJFEXHBLDJMCWEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.1288473769286531);
    msg.setSource(39414U);
    msg.setSourceEntity(197U);
    msg.setDestination(25365U);
    msg.setDestinationEntity(78U);
    msg.timeout = 45369U;
    msg.lat = 0.27708204897732913;
    msg.lon = 0.38855425402700505;
    msg.z = 0.4915782044443724;
    msg.z_units = 17U;
    msg.speed = 0.3491387702616069;
    msg.speed_units = 237U;
    msg.duration = 62421U;
    msg.radius = 0.10144066558226217;
    msg.flags = 75U;
    msg.custom.assign("KUQXWTQNZSJXICGJLNUAMCFUEWRBUJDJLMFKSGLAOQLFVGGDQCRHQAJJYERIGEMQDZFOUOBTFIMDWHHTVUZLGYZRDRAVEPUQPSONSVQXDPVPJPTHAOYWYYKITVOZMLHKQKFZIWUZHMLEPHTMBDLVOCHXFHFCCWGAYNXHXSXECZNLYZFVENRSXWZYDCKKUTTCDBDNOKATSTEXAIAFJNSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.6175568297450262);
    msg.setSource(43289U);
    msg.setSourceEntity(210U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(144U);
    msg.timeout = 12085U;
    msg.lat = 0.48249655474476905;
    msg.lon = 0.010922308056294572;
    msg.z = 0.14127696725201222;
    msg.z_units = 201U;
    msg.speed = 0.6870220323868782;
    msg.speed_units = 82U;
    msg.duration = 22686U;
    msg.radius = 0.7865367443844568;
    msg.flags = 113U;
    msg.custom.assign("KPLKPVTOKYNQIXLUVWGGPMNEOJOZHUYRQGKBBRGSYMIKYKOHXDJNZWLZJZJAAIOBAQTFEDBAFGMDJXSLEFLPVRHAWYSTQGXFTSJQKFMUUNDCNQDFXHGOMGVGUDDCBLYLHBFOTUSQYRKUZNKIYUERZWWRTBUPPXSJXPECRUICSYAVNVYENJRLDCACCTBIMOHMSQEOXCLFPXZPRDZHDSLKCIVJQCIFWTISMHWVWAZMPHQEOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.47569868355918987);
    msg.setSource(38236U);
    msg.setSourceEntity(17U);
    msg.setDestination(3701U);
    msg.setDestinationEntity(102U);
    msg.timeout = 32039U;
    msg.lat = 0.5441184794614293;
    msg.lon = 0.13377211939240774;
    msg.z = 0.8937814635482395;
    msg.z_units = 202U;
    msg.speed = 0.7088492046186721;
    msg.speed_units = 242U;
    msg.duration = 46111U;
    msg.radius = 0.9183746511941662;
    msg.flags = 151U;
    msg.custom.assign("CFROCUOCFWPDGKXILTGMOAUGKELHHLAXPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.685263368728548);
    msg.setSource(53826U);
    msg.setSourceEntity(201U);
    msg.setDestination(44584U);
    msg.setDestinationEntity(197U);
    msg.custom.assign("UCSRKOSTEMAZQKNFQILZOACDVLAROQSYBMBDYJHXXDXOWFHRTIKHRXNZQRFBSYWLMFDORUWCIXKMJIVYLHPYLNXDRTBGUAEBGQTTWMAXGCSZVQTUEYHIDGTJHMKOFEMWMWIPGJEFKBCJYBOVNLWZOJNDOIDSPHRJBYQZDIHVPCKNTUKNGUUZYXGSFFQPIQZXWMXSUURNSZPVCAWPAAGGVLREAKNGCPZLUENVVWVOYEEJHBJEHSKTTIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.9602266535898331);
    msg.setSource(45564U);
    msg.setSourceEntity(109U);
    msg.setDestination(50168U);
    msg.setDestinationEntity(241U);
    msg.custom.assign("BXVZVDDTOWJHVGDDSSWROXZQMESYVFUSWPEWWUXOUIDMWAFJCDAWUAAIXHQYPEXFIGQCANOMOWHBGRKXHUDUNZOLRTIFWKWXMZAAVJFFEISNTBELHOQJVRHRLBUGDPGQPSSHBFSIAVKNZLHGXCYTLKIKHYJUCVDFJZNTDUYLMBQUKSMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.0568851040649031);
    msg.setSource(64682U);
    msg.setSourceEntity(168U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(52U);
    msg.custom.assign("SNUNGYLSOSJBWEFZJTNTSRUSXEUQINOCIRBOOQICQSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.5009398508510886);
    msg.setSource(24056U);
    msg.setSourceEntity(124U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(131U);
    msg.timeout = 19589U;
    msg.lat = 0.1039049468871105;
    msg.lon = 0.6507992891186497;
    msg.z = 0.46177198481324877;
    msg.z_units = 116U;
    msg.duration = 42919U;
    msg.speed = 0.6870282656200936;
    msg.speed_units = 78U;
    msg.type = 1U;
    msg.radius = 0.7220219820803122;
    msg.length = 0.5964370950308701;
    msg.bearing = 0.9455467637606868;
    msg.direction = 108U;
    msg.custom.assign("AAUBFOSTFUDCEUOTJZMHLLLKQTJHOZVAJUPVUVWNKPDIPDHNMOMWNBRUPFVCNJKFIVEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.8518233103919821);
    msg.setSource(26637U);
    msg.setSourceEntity(167U);
    msg.setDestination(2327U);
    msg.setDestinationEntity(126U);
    msg.timeout = 64447U;
    msg.lat = 0.37148523362745733;
    msg.lon = 0.15747121911651019;
    msg.z = 0.5967393500905807;
    msg.z_units = 155U;
    msg.duration = 24769U;
    msg.speed = 0.3077207498393445;
    msg.speed_units = 107U;
    msg.type = 77U;
    msg.radius = 0.3661143818958319;
    msg.length = 0.32621199399643586;
    msg.bearing = 0.5082292754281823;
    msg.direction = 82U;
    msg.custom.assign("YSIMBTJUYFBUXZVHLGDYLJAUHIGFKXVEBHPFPAXJIQTYTOSEQKVXZVVQNEMDBUBLVPHCRATLMGLVSMZKCNXWICONBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.8960303774259204);
    msg.setSource(22745U);
    msg.setSourceEntity(150U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(51U);
    msg.timeout = 23869U;
    msg.lat = 0.23317357159299645;
    msg.lon = 0.04348020026784927;
    msg.z = 0.6779296750859061;
    msg.z_units = 137U;
    msg.duration = 47040U;
    msg.speed = 0.5417750244252008;
    msg.speed_units = 203U;
    msg.type = 69U;
    msg.radius = 0.10718072607343254;
    msg.length = 0.29012965108310484;
    msg.bearing = 0.4286983081398491;
    msg.direction = 241U;
    msg.custom.assign("UAVWLBRXMTEYEDCVOUPPZGVDPNZXNNRGQAKTGFHOTGSDKTVDLAFJAQJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.5339157169523829);
    msg.setSource(18592U);
    msg.setSourceEntity(50U);
    msg.setDestination(1700U);
    msg.setDestinationEntity(160U);
    msg.duration = 43308U;
    msg.custom.assign("BWTXTOYFLRYFPZOBDZIAOPYSETNTFECULHNBYLRALTDPWHWNBCGGLKYVAHSQMHIAAXQUUHOEXSTSWCGMCLRGNQKKUGMAHJIKUZNWPFNAKIWNLQWJVFYMEUHXNKBTDNIIDCFPJPWIDVBXXSZBYKMPJJLVDYSGVHQYLPWQEJKHMXXOCOXUREKMMDVEZOVFGREPDGTJATXCGZIPERSNYUUFFCISODWCLAAJBQFERBCMZVIQJQKVZBDOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.8757656852465199);
    msg.setSource(29895U);
    msg.setSourceEntity(34U);
    msg.setDestination(19936U);
    msg.setDestinationEntity(36U);
    msg.duration = 45215U;
    msg.custom.assign("MLFHSBWJDBEYAIRWBJNTMSGVFGLGRGILKXIKITKWZDTKZBHXNETHNMXVPFTANXCBDQBSWXPSOUWCAEUSQLCBKKZQSILAQYLJHYHOYNFRQZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.4373451851223654);
    msg.setSource(9880U);
    msg.setSourceEntity(117U);
    msg.setDestination(44889U);
    msg.setDestinationEntity(249U);
    msg.duration = 56989U;
    msg.custom.assign("RZBEOKDVWJASSKSNECLEOUTPGGXMPYNGFADKQCALARDMRGHKXRGZXEDMHPNLZLSIQBJXNMRZJYUDHXBDFHCRXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.48223787193954526);
    msg.setSource(49408U);
    msg.setSourceEntity(101U);
    msg.setDestination(27281U);
    msg.setDestinationEntity(37U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6323713066659672;
    tmp_msg_0.speed_units = 10U;
    msg.control.set(tmp_msg_0);
    msg.duration = 450U;
    msg.custom.assign("CJUHCJMEIIZATGDOJXJGXLSKDOARQNEBBCFFTYZHWCNJRBFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.853972388967747);
    msg.setSource(931U);
    msg.setSourceEntity(100U);
    msg.setDestination(7463U);
    msg.setDestinationEntity(25U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5090905826458513;
    msg.control.set(tmp_msg_0);
    msg.duration = 62190U;
    msg.custom.assign("GHRBLLOGJJZIBEDXKQHQJHZIQPUNYRBIDPOAUYSKZYUSWKWHFUQMADPMXNCBSTKLLCKCDDRGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.31289190829436186);
    msg.setSource(52391U);
    msg.setSourceEntity(3U);
    msg.setDestination(22342U);
    msg.setDestinationEntity(239U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.749530356656752;
    tmp_msg_0.speed_units = 126U;
    msg.control.set(tmp_msg_0);
    msg.duration = 36656U;
    msg.custom.assign("OJGBWXGFMLSKGKWCKGJZUJJYCHDVNIQGZCTEKYIFEBCDAIUXXLVCILWHOUQYDBDPOKWWDATDDUSTTAAAFQBPPFJHJCHQUPCGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.9792262986457616);
    msg.setSource(49505U);
    msg.setSourceEntity(60U);
    msg.setDestination(54802U);
    msg.setDestinationEntity(198U);
    msg.timeout = 17075U;
    msg.lat = 0.6109035925915838;
    msg.lon = 0.9794135592557071;
    msg.z = 0.5481606802937709;
    msg.z_units = 202U;
    msg.speed = 0.0422670981992993;
    msg.speed_units = 106U;
    msg.bearing = 0.17842261150593686;
    msg.cross_angle = 0.6363508681546719;
    msg.width = 0.3249224926966906;
    msg.length = 0.1984664112722545;
    msg.hstep = 0.531867061989216;
    msg.coff = 201U;
    msg.alternation = 122U;
    msg.flags = 254U;
    msg.custom.assign("BWRTPIIYQZFMMZUQFXQTYBKMZHJVRWGPFHHKOXDNWXSKJMFJRSYPPTRIZGEHWMUVMGEYWEAZNBGQJHHJFCMSAXRKBOYKBAUSZVNPKDSELIYPXISNAIVNVOIBDTDYVETLOECOQHRIOSOMXXMTWUNWHLUKWDENKHEFTACFYCPIRGEPKEHTBLCZANLJZLRGGKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.39323508966388787);
    msg.setSource(5154U);
    msg.setSourceEntity(213U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(120U);
    msg.timeout = 37280U;
    msg.lat = 0.9520823544860886;
    msg.lon = 0.15901447887364217;
    msg.z = 0.8031014018656369;
    msg.z_units = 42U;
    msg.speed = 0.07209069712954175;
    msg.speed_units = 233U;
    msg.bearing = 0.45284207952747335;
    msg.cross_angle = 0.6019722234469007;
    msg.width = 0.22281664088985964;
    msg.length = 0.5191507148809187;
    msg.hstep = 0.7323602204288192;
    msg.coff = 182U;
    msg.alternation = 195U;
    msg.flags = 192U;
    msg.custom.assign("TIKLDYDWJYERETFHPCYGUGFJSUGFBGKSICKMZHLUZHEGIFHTCGMYEBUJNZCNHIDNPALGMHQFQJVQYOANBDWORTPSQFVEMBLFYAWLNRIVQDMIOPNTQVYTQZPXOVRJTCHJBNBZHBTHRZKAJAWXQVEDTPJJGXZKAEBKYOOZZXSDCOASBUUKNLAXFSCOKSXPENRUYVKWLHDLWABECIIVIWXVOUMRXJUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.5347508305812539);
    msg.setSource(12427U);
    msg.setSourceEntity(136U);
    msg.setDestination(60218U);
    msg.setDestinationEntity(6U);
    msg.timeout = 269U;
    msg.lat = 0.3166631242008323;
    msg.lon = 0.9456995907768744;
    msg.z = 0.7503594749613806;
    msg.z_units = 151U;
    msg.speed = 0.676185868650865;
    msg.speed_units = 120U;
    msg.bearing = 0.8223250995957841;
    msg.cross_angle = 0.6845555716293827;
    msg.width = 0.15277733471718202;
    msg.length = 0.6655130819688568;
    msg.hstep = 0.5076037690727006;
    msg.coff = 127U;
    msg.alternation = 82U;
    msg.flags = 114U;
    msg.custom.assign("NDHOPLAFFVIQLRMKEJVUCPWSRBVBYYDMWXGAMTJLTZTOYMFZCUXSTVYLSNZGSRARYEPMQOTXYNQHKHTPRILBUFKKIBTIGIAFFGHIZZIJMGNOJHEDGKWVEXAQMPSZWQSRKECBKCLALVPWRRZNDDDFPJURYMCBTJFIGBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.3287904265183541);
    msg.setSource(57231U);
    msg.setSourceEntity(135U);
    msg.setDestination(11489U);
    msg.setDestinationEntity(9U);
    msg.timeout = 23548U;
    msg.lat = 0.9975436215154957;
    msg.lon = 0.5597518049472804;
    msg.z = 0.5506669040389646;
    msg.z_units = 30U;
    msg.speed = 0.18065351805323537;
    msg.speed_units = 72U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5182422141999257;
    tmp_msg_0.y = 0.10008128945169215;
    tmp_msg_0.z = 0.04901773056936365;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QLUVZKLJSQGSJEQHHQXCGOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.48129188903644415);
    msg.setSource(428U);
    msg.setSourceEntity(115U);
    msg.setDestination(10835U);
    msg.setDestinationEntity(32U);
    msg.timeout = 14480U;
    msg.lat = 0.7462293502550781;
    msg.lon = 0.5276605382934159;
    msg.z = 0.45757169300032485;
    msg.z_units = 136U;
    msg.speed = 0.9738024292843374;
    msg.speed_units = 63U;
    msg.custom.assign("HXZCKMCJEHCVUOMCKECPZZBOFADWPKGIDTOUIYTYWFEDAIDSQAYIYLBNFJGRSKDGTOLYBPNANKNWSYFJVAGDSIBRQQERBMCTQCOSKOVSRVQLPHPLFEHLSXUVLUTXGZCVRLJINUBEXAKWIALUXZFNZGGLMPTAGIETXBXRPYEKWHKJPOJBLUVZZWQEQTXPZRSJRWSMMAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.5853377322114786);
    msg.setSource(21532U);
    msg.setSourceEntity(30U);
    msg.setDestination(44891U);
    msg.setDestinationEntity(76U);
    msg.timeout = 4798U;
    msg.lat = 0.684069376172768;
    msg.lon = 0.3070492804467725;
    msg.z = 0.4294178009867037;
    msg.z_units = 105U;
    msg.speed = 0.9325815113382725;
    msg.speed_units = 7U;
    msg.custom.assign("YOBNZZQWKNEYMCNACIYVQHMMJBIGZYCEJPNLFWAWSPJCGKPYYMWCTJTJZDLMAFCOOVGOYUIBAQVTDDKVCQDAJPGDUNWTHAFIILKALIHEDDJDFLEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.5072027506534325);
    msg.setSource(63787U);
    msg.setSourceEntity(203U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(40U);
    msg.x = 0.24782024595001284;
    msg.y = 0.8777189070829404;
    msg.z = 0.5263440846486926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.36206913719502054);
    msg.setSource(41329U);
    msg.setSourceEntity(177U);
    msg.setDestination(34688U);
    msg.setDestinationEntity(185U);
    msg.x = 0.4235789314432983;
    msg.y = 0.9836072882893908;
    msg.z = 0.2557605000703955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.4639698427361799);
    msg.setSource(63136U);
    msg.setSourceEntity(86U);
    msg.setDestination(15741U);
    msg.setDestinationEntity(209U);
    msg.x = 0.24482790134494936;
    msg.y = 0.04508228800721481;
    msg.z = 0.8380709671423949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.4575179914902495);
    msg.setSource(60058U);
    msg.setSourceEntity(89U);
    msg.setDestination(44967U);
    msg.setDestinationEntity(226U);
    msg.timeout = 51334U;
    msg.lat = 0.01027005969518846;
    msg.lon = 0.7466765752244878;
    msg.z = 0.11342276609318558;
    msg.z_units = 111U;
    msg.amplitude = 0.19123274671925328;
    msg.pitch = 0.019190681041071245;
    msg.speed = 0.6775627116231111;
    msg.speed_units = 137U;
    msg.custom.assign("YBKSORYQPALDXCSBWMMCPLKZHDHRPJRNBFTGSMDCSPBGCRGXFYJSATYHBYXVHNPEOTLWAATAUPUQVRIHZYRDNBWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.40834046770482624);
    msg.setSource(48971U);
    msg.setSourceEntity(149U);
    msg.setDestination(36389U);
    msg.setDestinationEntity(93U);
    msg.timeout = 52593U;
    msg.lat = 0.5547047718725011;
    msg.lon = 0.6287138471702693;
    msg.z = 0.3302494061580181;
    msg.z_units = 242U;
    msg.amplitude = 0.4375999042406874;
    msg.pitch = 0.9624496010962933;
    msg.speed = 0.011073166809305923;
    msg.speed_units = 237U;
    msg.custom.assign("EJSFRLQEGWTHEMQMAJWGVUNFRASCUZOPZWWSZLTKDNJSWLTUBVAOILWRXXYXHFQLDXXINVCWFRJSZCOXBRRDGYCSTSQBYGZQOBVNMYQHVHGNHWVOTJIUOPMTIGRRALXJIFHTAKOKNUYECMEHDHJFVYSLIAUNOHRMMADBPGTIGEESCTLTJNUPIODXUBEQDKPPBBQGFKKNYFZKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.8008540059050754);
    msg.setSource(51548U);
    msg.setSourceEntity(196U);
    msg.setDestination(10955U);
    msg.setDestinationEntity(94U);
    msg.timeout = 56228U;
    msg.lat = 0.8000772101377585;
    msg.lon = 0.5708954031075727;
    msg.z = 0.40948543747400556;
    msg.z_units = 254U;
    msg.amplitude = 0.9348720418970226;
    msg.pitch = 0.2348997295598707;
    msg.speed = 0.3031390556707311;
    msg.speed_units = 197U;
    msg.custom.assign("WBRUMSFFSEDQYCOQBQOOTJFNDRWAHJUOIASNHTIWYBDRJYJOMNBXZCTIYMRCNVHNQZVLSUDIZBGFONSRKRSMSIZLUFMGARUGPTCKFDHLITWTVQGNXNWYPSCVZAHWUSAKCYRKPTHWRPUAEOXXUEPHNA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.7990854419802705);
    msg.setSource(31937U);
    msg.setSourceEntity(143U);
    msg.setDestination(57344U);
    msg.setDestinationEntity(69U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.42679135966962745);
    msg.setSource(879U);
    msg.setSourceEntity(236U);
    msg.setDestination(9236U);
    msg.setDestinationEntity(69U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.42194885054578246);
    msg.setSource(49822U);
    msg.setSourceEntity(216U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(16U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.0030763307443193444);
    msg.setSource(25387U);
    msg.setSourceEntity(61U);
    msg.setDestination(18398U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.15060217079161375;
    msg.lon = 0.20373491923422649;
    msg.z = 0.1573077908918955;
    msg.z_units = 8U;
    msg.radius = 0.6480525756349744;
    msg.duration = 9154U;
    msg.speed = 0.29820095549105163;
    msg.speed_units = 240U;
    msg.custom.assign("YNGWJSYLMUDVCOEUCEMNWIADISHAXABCTMTMBTQNCIHENQVZBHBTUOKDGTRURHAGSZXOSOKLROSTNATUYDCGWUHFWRSCGMFZYAXDJFGQUWZPKIBRXTYHXALYTAPEVWGLLVZEBFLQMOMDBPKJBQOYFFFJRNQXYXPANLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.9962777189794475);
    msg.setSource(43058U);
    msg.setSourceEntity(129U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.605079593359217;
    msg.lon = 0.15472092424192363;
    msg.z = 0.18269833720769857;
    msg.z_units = 222U;
    msg.radius = 0.6079373893623707;
    msg.duration = 24359U;
    msg.speed = 0.955986240833991;
    msg.speed_units = 135U;
    msg.custom.assign("SPGTPIKMVEOQYUIOMSWJYODUDSTDITSKCIWRNBZKKCBIAWKUHMTNBKLGJRGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.40314182165393475);
    msg.setSource(22153U);
    msg.setSourceEntity(157U);
    msg.setDestination(4887U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.32555481141277864;
    msg.lon = 0.05229626068898685;
    msg.z = 0.6162651856171406;
    msg.z_units = 85U;
    msg.radius = 0.1546275287349984;
    msg.duration = 28622U;
    msg.speed = 0.7883940519465087;
    msg.speed_units = 241U;
    msg.custom.assign("JWAPDLVPYAAGPZNGENMEESOXMKEGNWYFVFWGLUUKSGFOHDWLBMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.04933860129471468);
    msg.setSource(9639U);
    msg.setSourceEntity(31U);
    msg.setDestination(35173U);
    msg.setDestinationEntity(79U);
    msg.timeout = 15370U;
    msg.flags = 36U;
    msg.lat = 0.2197263579295362;
    msg.lon = 0.02993716790809009;
    msg.start_z = 0.3400681180510541;
    msg.start_z_units = 183U;
    msg.end_z = 0.989131155770313;
    msg.end_z_units = 189U;
    msg.radius = 0.287326341659184;
    msg.speed = 0.10123944763418646;
    msg.speed_units = 186U;
    msg.custom.assign("NFORKILKSHXMGRILOZQQKWUWVVVPSAUSMGKBHCOBZPRYLJOACFYXTNUCDSSJUYNPTJYTFCSKJDMQCFQMQMPCKPZAGHTLLBQMHGVWJEHMNEZKHNWZUIDTEFNCXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.29809332414504863);
    msg.setSource(62327U);
    msg.setSourceEntity(154U);
    msg.setDestination(32716U);
    msg.setDestinationEntity(62U);
    msg.timeout = 21526U;
    msg.flags = 67U;
    msg.lat = 0.9546896547335063;
    msg.lon = 0.0514546868046325;
    msg.start_z = 0.2212904514579792;
    msg.start_z_units = 169U;
    msg.end_z = 0.490361715009599;
    msg.end_z_units = 8U;
    msg.radius = 0.18827183238073253;
    msg.speed = 0.25691701893509955;
    msg.speed_units = 167U;
    msg.custom.assign("LGQNBGCVVMYYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.3299972368786436);
    msg.setSource(12118U);
    msg.setSourceEntity(149U);
    msg.setDestination(7537U);
    msg.setDestinationEntity(56U);
    msg.timeout = 5836U;
    msg.flags = 169U;
    msg.lat = 0.20967638634261898;
    msg.lon = 0.24664283172661627;
    msg.start_z = 0.9982579592610339;
    msg.start_z_units = 182U;
    msg.end_z = 0.31919656933180296;
    msg.end_z_units = 122U;
    msg.radius = 0.11980539211815988;
    msg.speed = 0.8378909681995319;
    msg.speed_units = 231U;
    msg.custom.assign("ZWKIVLRQYTDGUISYLUNSUPLGAOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.2189410177761132);
    msg.setSource(40936U);
    msg.setSourceEntity(38U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(19U);
    msg.timeout = 42966U;
    msg.lat = 0.37598225388496787;
    msg.lon = 0.133599480083467;
    msg.z = 0.006754117263045978;
    msg.z_units = 183U;
    msg.speed = 0.07634034893496144;
    msg.speed_units = 163U;
    msg.custom.assign("WNVKREHJPPGKCPJUOVWNPDEZFWTNGLZGKDTUSNLHLEACDHVITBOUCSYBWJJLIQWKBCLRGRUMBYEHAYYDIAXJXOURHTNILLTFQGDAENTJQRSTAAYFHPZSQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.06373697203417128);
    msg.setSource(27164U);
    msg.setSourceEntity(229U);
    msg.setDestination(20925U);
    msg.setDestinationEntity(17U);
    msg.timeout = 43980U;
    msg.lat = 0.6589219245466185;
    msg.lon = 0.8592518328336008;
    msg.z = 0.06387182433158789;
    msg.z_units = 146U;
    msg.speed = 0.1082719457868605;
    msg.speed_units = 112U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.541672957791548;
    tmp_msg_0.y = 0.9759363976201445;
    tmp_msg_0.z = 0.7649890447628378;
    tmp_msg_0.t = 0.7852709488038057;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VYOPROFJJQROLHWHSYQXVUPDLAQTJWSWNUMDWDXEAVBTIZGJDYDRSSBSFAODFTGZMGIFZMPYSPRBILKBVRLVBONNKRVPWFRFXOXAICCZANAIZLGBGYXPZYDVHNHHXFQEHQRDTKKJLYWQUOQBPTWEGIXWNQEEANLNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.9328627226552946);
    msg.setSource(63595U);
    msg.setSourceEntity(116U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(13U);
    msg.timeout = 21335U;
    msg.lat = 0.9143498623297255;
    msg.lon = 0.7578804759623358;
    msg.z = 0.8502765504948928;
    msg.z_units = 190U;
    msg.speed = 0.037302560083324;
    msg.speed_units = 245U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.02384454409364012;
    tmp_msg_0.y = 0.7061585098900663;
    tmp_msg_0.z = 0.6058445631042896;
    tmp_msg_0.t = 0.817436434541523;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VKXGYLNZAPCIOWKGXKPZHEYGPCHPIXGWYLAOZILBBVXWETHNYDHBWNMMLSYNAJCWBJTTGJIYODBEZCFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.285390329511349);
    msg.setSource(60870U);
    msg.setSourceEntity(62U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(149U);
    msg.x = 0.783013072563488;
    msg.y = 0.048355697714325796;
    msg.z = 0.7212775792491413;
    msg.t = 0.7415858750123953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.9330753272792611);
    msg.setSource(30780U);
    msg.setSourceEntity(212U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(120U);
    msg.x = 0.35335078747511617;
    msg.y = 0.09422065796080548;
    msg.z = 0.97746756703982;
    msg.t = 0.8245241499583776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.676008809463953);
    msg.setSource(27357U);
    msg.setSourceEntity(133U);
    msg.setDestination(43265U);
    msg.setDestinationEntity(133U);
    msg.x = 0.7300265874065538;
    msg.y = 0.006120872171191727;
    msg.z = 0.9633195753821534;
    msg.t = 0.8827320132356807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.7611506912248911);
    msg.setSource(44137U);
    msg.setSourceEntity(237U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(91U);
    msg.timeout = 3870U;
    msg.name.assign("QHZVBGELFTQXLZIUOIGSSPQTEBYBEWHZPAZNGKUMASOGRDTLXKUMRLAIZZNWFJSQQDYLJVVPDKHENLWYKFDROKJJAXXSPBIHEXGTYYWPHS");
    msg.custom.assign("KQGGEVCVTUYFMHSXNQTJPZWQPOQDERTORLBSULPLYRKUSVNQAUOULLGRMPTKCRXZHFQGNJSHFULPIIYTIIQDBJXJCFADZXHUUXCKCPCJLZYEAEREWSQFANFWWYETVLNBMMMIAVJEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.179078451875341);
    msg.setSource(29915U);
    msg.setSourceEntity(128U);
    msg.setDestination(34634U);
    msg.setDestinationEntity(28U);
    msg.timeout = 4762U;
    msg.name.assign("BIWPDCTFPXGSWQ");
    msg.custom.assign("LPJUNGKPRUPBHPQFVCMAHIQOKGQSJSWRFQIODZLDKUJKECVUPANIRLWIAOMXACTSHRQOVZTBGWEXZYOVOENJAMKSRSJJFGYIBCCEAOPLWFXZSGFXJATBXNIGVZMYHJKWEYGFRAWLLGENPMSFHXPCWKMBHYZMEDZYCBNUEBTSAHDUOJMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.4265649242052916);
    msg.setSource(32051U);
    msg.setSourceEntity(43U);
    msg.setDestination(3870U);
    msg.setDestinationEntity(100U);
    msg.timeout = 49789U;
    msg.name.assign("UHFAMXSXWLUZPICINAZMWCXDHYESHQGOREOG");
    msg.custom.assign("KUJPWUPTEITZVIVEQWKCQHLZZHIVRFNIASTWYOFBDKTXGMAWCDNNNQTWAHIAUBNYTTTZGTFRVBNJCKGHSYGFXZUXBKWELCVBRVRSXOMQWFLZJUSFPQQMIVPOFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8601065334796735);
    msg.setSource(25300U);
    msg.setSourceEntity(119U);
    msg.setDestination(7134U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.885306929115174;
    msg.lon = 0.010557608593298906;
    msg.z = 0.9926686429110482;
    msg.z_units = 24U;
    msg.speed = 0.1577952213736209;
    msg.speed_units = 165U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50914U;
    tmp_msg_0.off_x = 0.3681054768196649;
    tmp_msg_0.off_y = 0.4652349443451931;
    tmp_msg_0.off_z = 0.10852835610971401;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.703311200274531;
    msg.custom.assign("WBLZOBPGOHMTICAUZUWDPDZSTKTSWKWELIMRZLASYXVYRFJIACYLEANBCDGSMMIIVRVFIYQBJJUDFDKZJJOOBHUEPQVSHQRRTZEWCWWLIWGMOQINOFFRTXENGPXKZTGVACQOFMKDRCBABSWXZAQDPTRUYPEHQQADSACKHGYYHZUHLMVFNVOCGWJTIFXYDQZGKEHLVMGVXQNBJOACXXHXKKEYUFTSBUNLUEDBGRHMPNLJFCXRMNSYJLTJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.4145993254181287);
    msg.setSource(20822U);
    msg.setSourceEntity(39U);
    msg.setDestination(40799U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.47492481294561095;
    msg.lon = 0.31210304878718775;
    msg.z = 0.4512809822076067;
    msg.z_units = 215U;
    msg.speed = 0.8653005840626091;
    msg.speed_units = 96U;
    msg.start_time = 0.19663835095298499;
    msg.custom.assign("MAPHNPGDHIJZOUDSMWYRHOLTCVPSMVTGSSNTAEDAKBWATHXGPCUWMNJHHYQLPTOWFJPPYYYLVXLYICQURHLGJBXITRUXQVEUEYVVFNSZZCXJKTXZKDCRZVSOMWUFJIFGAAWDWTFAXMQWZBDEHQAXVSCKYIIAMAENWXLIZVGRQLTNNKSSOMCBOIYKEBKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.7842000171688644);
    msg.setSource(54160U);
    msg.setSourceEntity(40U);
    msg.setDestination(47390U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.25767154501108713;
    msg.lon = 0.21556954172704046;
    msg.z = 0.02288644868142986;
    msg.z_units = 30U;
    msg.speed = 0.19591630426935913;
    msg.speed_units = 48U;
    msg.start_time = 0.9243892751254387;
    msg.custom.assign("QFJMUPRKXRQFNCJQASKKKNZETSNARICBFJZKJIOEGZLPWAGUOOYEMMDHQQSYGAXZBPNILGPVXAUSHDRUVYUYWZQOSCUOAONSRJBULVIPGXERYAEHECLLTVQFCIJODWEHBWCCDLMPEKEDXWTKUGZFBSCLDPLGSITBPOYQJISRDHMWZNVQEVBTLBFIGRTNAPMFKSUYXVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.4371682765369376);
    msg.setSource(64517U);
    msg.setSourceEntity(176U);
    msg.setDestination(28196U);
    msg.setDestinationEntity(228U);
    msg.vid = 45407U;
    msg.off_x = 0.3732297373782678;
    msg.off_y = 0.5631228793540318;
    msg.off_z = 0.3002023392752071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.020667868221609598);
    msg.setSource(22412U);
    msg.setSourceEntity(62U);
    msg.setDestination(62441U);
    msg.setDestinationEntity(75U);
    msg.vid = 58682U;
    msg.off_x = 0.05990207910695511;
    msg.off_y = 0.30578748793928767;
    msg.off_z = 0.21042427818398457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.46844702573335206);
    msg.setSource(15766U);
    msg.setSourceEntity(230U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(199U);
    msg.vid = 22707U;
    msg.off_x = 0.7805749960767028;
    msg.off_y = 0.8640323041681452;
    msg.off_z = 0.38814756179945853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.6840959113124064);
    msg.setSource(41033U);
    msg.setSourceEntity(88U);
    msg.setDestination(8278U);
    msg.setDestinationEntity(135U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.8786441700194455);
    msg.setSource(47497U);
    msg.setSourceEntity(47U);
    msg.setDestination(49098U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.5089327744716501);
    msg.setSource(41242U);
    msg.setSourceEntity(233U);
    msg.setDestination(33607U);
    msg.setDestinationEntity(242U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.03892246507469044);
    msg.setSource(50975U);
    msg.setSourceEntity(45U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(23U);
    msg.mid = 58029U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.33515347478266855);
    msg.setSource(17388U);
    msg.setSourceEntity(239U);
    msg.setDestination(51195U);
    msg.setDestinationEntity(75U);
    msg.mid = 8095U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.6755439315221089);
    msg.setSource(49734U);
    msg.setSourceEntity(61U);
    msg.setDestination(50392U);
    msg.setDestinationEntity(53U);
    msg.mid = 62359U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.5078899805997767);
    msg.setSource(24684U);
    msg.setSourceEntity(144U);
    msg.setDestination(58022U);
    msg.setDestinationEntity(156U);
    msg.state = 166U;
    msg.eta = 5597U;
    msg.info.assign("BNIXYZKMGEZWKZAKFECKLOSIBVTXUNMKDJCIJTUYADHMFHHRDYPFWBNEVMWPXNIVJUXERISBLQPKBYOWZSAWJQDGQAVLYHRDVYSBXCKKMNFXEICRDXTVUNZJBSDIVUXGMOFOYPDMGJBJFYHNFCUATRZCUPLHXLSIGMRCOWQTYOGGNAPKRQDUAOTGGRMHIPFMETLIFQHUCQUZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.32646300859747923);
    msg.setSource(48820U);
    msg.setSourceEntity(70U);
    msg.setDestination(63265U);
    msg.setDestinationEntity(223U);
    msg.state = 63U;
    msg.eta = 64257U;
    msg.info.assign("IHAAALXQFAUBJDONM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.6331286454613396);
    msg.setSource(45267U);
    msg.setSourceEntity(14U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(186U);
    msg.state = 85U;
    msg.eta = 6645U;
    msg.info.assign("HDCLNNSKZTNNWLEAGDCUHRIANQDNTXKTEBVRRKXLSALOSXUZGQCBLXLMUIXPUQJCCPXVTHGPWESPNAIOHJHOKLMDKJQAKXUHRFMSRKAOZNAZHVIMZWLVFFFGSPQXYEKVSZDRBYFXMEHDOVOQWRWJMGUDHOCWAZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.9554356569744058);
    msg.setSource(8703U);
    msg.setSourceEntity(12U);
    msg.setDestination(55615U);
    msg.setDestinationEntity(226U);
    msg.system = 64163U;
    msg.duration = 30028U;
    msg.speed = 0.05638265269230758;
    msg.speed_units = 146U;
    msg.x = 0.3989033847044713;
    msg.y = 0.11700393783779528;
    msg.z = 0.2946937215322303;
    msg.z_units = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.9218760213373317);
    msg.setSource(47779U);
    msg.setSourceEntity(211U);
    msg.setDestination(9202U);
    msg.setDestinationEntity(25U);
    msg.system = 11104U;
    msg.duration = 14299U;
    msg.speed = 0.5439596678076524;
    msg.speed_units = 59U;
    msg.x = 0.6726184844821383;
    msg.y = 0.7908634595871258;
    msg.z = 0.6948639854812072;
    msg.z_units = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.40018774485488595);
    msg.setSource(2356U);
    msg.setSourceEntity(165U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(136U);
    msg.system = 48529U;
    msg.duration = 52025U;
    msg.speed = 0.34949889563586833;
    msg.speed_units = 43U;
    msg.x = 0.02012953012721086;
    msg.y = 0.657247598973272;
    msg.z = 0.8094358578204723;
    msg.z_units = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.625284355160131);
    msg.setSource(15358U);
    msg.setSourceEntity(173U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.22679604037495982;
    msg.lon = 0.6704397722647187;
    msg.speed = 0.33788464424235976;
    msg.speed_units = 134U;
    msg.duration = 16251U;
    msg.sys_a = 3217U;
    msg.sys_b = 4028U;
    msg.move_threshold = 0.4929162245903679;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.838123735350908);
    msg.setSource(40000U);
    msg.setSourceEntity(220U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.5581502432165335;
    msg.lon = 0.6856520344726657;
    msg.speed = 0.023536509325406962;
    msg.speed_units = 175U;
    msg.duration = 60102U;
    msg.sys_a = 53972U;
    msg.sys_b = 54358U;
    msg.move_threshold = 0.793779305215414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.9389911823398235);
    msg.setSource(50180U);
    msg.setSourceEntity(21U);
    msg.setDestination(39115U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.9805539286722654;
    msg.lon = 0.2943344758915598;
    msg.speed = 0.16840905013509133;
    msg.speed_units = 87U;
    msg.duration = 41915U;
    msg.sys_a = 5764U;
    msg.sys_b = 4922U;
    msg.move_threshold = 0.2619797688619131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.4754903698504733);
    msg.setSource(41214U);
    msg.setSourceEntity(212U);
    msg.setDestination(62557U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.2578774286772131;
    msg.lon = 0.1577946372800969;
    msg.z = 0.06542529314077594;
    msg.z_units = 5U;
    msg.speed = 0.8474204338418546;
    msg.speed_units = 93U;
    msg.custom.assign("IMSSWKJAYNUSPFZFGLERGPFUZQWKOBTHXRRDLEDACPNAWGEQXKQPVFEOWOCOTGZQEYBTMYREWMPYJPCQBANGPHHIEOFLUKYCZDXWTIUMFRJJCNMAFHJQNAKUAAVORYTHRCBBOYSSVTFMUBYUHJGRZDCZRTLQFWWIEBQTNVCYMGBSGMVRPPFLOUUZXYUCKVNQGDGXSXDJDMVILQXVSITTKDIEDKAJNNPXOOIBLWHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.8051564745947452);
    msg.setSource(29391U);
    msg.setSourceEntity(252U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.2759358788148961;
    msg.lon = 0.3394370696437302;
    msg.z = 0.20350594727843985;
    msg.z_units = 99U;
    msg.speed = 0.2379839105244378;
    msg.speed_units = 166U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3970555476796802;
    tmp_msg_0.lon = 0.6945698326432377;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XNQFHBCXJAKRGOZBYINWUDEMHPLPABVITILRVJUUNJACWYKIFWCPOSJHDPFTDQFLWMGJOUGULORJXSPVRWZJPMYYUPKYSOJNHEUCTNAKKQAYZVRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.3595851373423138);
    msg.setSource(52693U);
    msg.setSourceEntity(0U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.5571515961202594;
    msg.lon = 0.7027692338929629;
    msg.z = 0.8664283525144919;
    msg.z_units = 230U;
    msg.speed = 0.6738039646550449;
    msg.speed_units = 163U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4741483328277697;
    tmp_msg_0.lon = 0.6281543742533066;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UJGCFOHAAVFSFNLPDWNQRLCYLPZVFVXQMCHSYGDEYEGPDZSNNPXVEYTDRQMGJZNMXMXOHVRGQTIUKPMAJITIKHRNILOAZEZISPIZZKGIFOIENPUSXHMKWKRNQSDCFUVYETQAPCWTVBLKAUXHYETRFOAXYBNEAYBZWWJOCSUCCNQYXMIPWVMSBFSZKCBDHHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.3881194073624027);
    msg.setSource(60289U);
    msg.setSourceEntity(254U);
    msg.setDestination(61000U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.2304081858015432;
    msg.lon = 0.5858713066288018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.18800784577709517);
    msg.setSource(28713U);
    msg.setSourceEntity(17U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.15366679918296466;
    msg.lon = 0.15312815127608448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.19765539097752216);
    msg.setSource(37281U);
    msg.setSourceEntity(189U);
    msg.setDestination(16064U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.4246128041031292;
    msg.lon = 0.8981775500724195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.6416985668679365);
    msg.setSource(61216U);
    msg.setSourceEntity(88U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(232U);
    msg.timeout = 12592U;
    msg.lat = 0.7838289588138252;
    msg.lon = 0.8619886943302871;
    msg.z = 0.1962440105480877;
    msg.z_units = 250U;
    msg.pitch = 0.6875166867452632;
    msg.amplitude = 0.08124820527429422;
    msg.duration = 63942U;
    msg.speed = 0.6976522129485173;
    msg.speed_units = 233U;
    msg.radius = 0.8713717323706471;
    msg.direction = 145U;
    msg.custom.assign("QMDIUNWFJQAXTJJMITHGFYHQMUWARLORZPTSQUHEMWJQOMBBSTKBLXGJSCWAPJKPDFIVWBXSHQYKQQPEZONNKVKFDXTORGPTYEBFRMDJGOOJHDBCEVOVPEWRLYIUEFHKKLHAMCLFFZYNSSDFBATTWNVDZCLZVHLXERBKIEDYWTUSGXHCUDNRXIAFOGPAZUHMCGZJUABUSRWROGCEZPNYLXJDVLQXECPNOVNCWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.8483263365910659);
    msg.setSource(46870U);
    msg.setSourceEntity(5U);
    msg.setDestination(1291U);
    msg.setDestinationEntity(140U);
    msg.timeout = 29368U;
    msg.lat = 0.11588638471179513;
    msg.lon = 0.28554365425119566;
    msg.z = 0.19585031877895565;
    msg.z_units = 104U;
    msg.pitch = 0.7239143596060392;
    msg.amplitude = 0.6432166528609772;
    msg.duration = 50265U;
    msg.speed = 0.3094468661527294;
    msg.speed_units = 83U;
    msg.radius = 0.2433241216509049;
    msg.direction = 197U;
    msg.custom.assign("FOPUAMSJBDDOKAUCSTFIZHQZXUGVTLEOPFMWLAPKCKTOSBKNYBQLRGKHCLYAHABBTCXIJKXZKUNCGENQIGMXEYJBANFFHHGTTDEFINRIYFWSGYRVMZZVTEDSDWWMLRICUQXFYWHYRZZUJBVLVXULEJTNNQNRXHBJPLOMXOIRKGPDPDVJTZHUGVBCLXIUMQEUZAEZWNSPJSWIFMFGBQCADDWRHKVSASOTYPCINHKVQJEMEJRPVQDAGMOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.40103493516101074);
    msg.setSource(50590U);
    msg.setSourceEntity(206U);
    msg.setDestination(54603U);
    msg.setDestinationEntity(101U);
    msg.timeout = 24684U;
    msg.lat = 0.5798735905937773;
    msg.lon = 0.4252592813460814;
    msg.z = 0.12201189942529411;
    msg.z_units = 107U;
    msg.pitch = 0.7976826528931599;
    msg.amplitude = 0.12533922644208118;
    msg.duration = 384U;
    msg.speed = 0.41553530242351877;
    msg.speed_units = 145U;
    msg.radius = 0.4656493460523815;
    msg.direction = 254U;
    msg.custom.assign("OLBUUZKQMGGZRBHBUPYGVSHYQHULIYDLPCRZTDANASPFQFKTPOFZQEAOAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.42836257960495183);
    msg.setSource(51227U);
    msg.setSourceEntity(35U);
    msg.setDestination(26997U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("KSBAYITZSMNDQXJZMQZWHJLNMRPGPECOKTUULZJRCMBCAZGGPKTSXKLFXFCRLTNADMYHINPBJOHFHNUBTCBAJVGINWY");
    msg.reference_frame = 38U;
    msg.custom.assign("GWDIDEXMOSYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.09590912112308325);
    msg.setSource(46576U);
    msg.setSourceEntity(217U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("ALHWSJKQTNWWX");
    msg.reference_frame = 16U;
    msg.custom.assign("DHTRQIUEPNRGIYWMQOJXPVSKGGYDRCTZVKBGWNPJOYVBMGMBXFIXILINHSFFKISZQLHGXAFCJLFOTRQMTMJUDKHFYEEKOPZASRUENRRSVNWBTOZNJTLCJOMAOBXCNFPUTUDHXELDXHMYPCLWUQJVHQEWBZEJXOEFADWAMZCQRVZGATLJETWVRQLFNURFDKYGWSCCIYVCHUKXKBWEBIDNSQMBPLASBGPGIKNHWYMJVOQPIOLCZAZYAD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.25514260069167394);
    msg.setSource(29017U);
    msg.setSourceEntity(123U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(125U);
    msg.formation_name.assign("LLLHYWYGQACUXZJNDQOEIFPNIUEFFHTDSVPJPPNUXIDSACWVJOAADCXIMNJLGBBWDTMMZEBDYECRMWJPNFHSEGTVROZWQYSVJZTEXSRRPFOQDHSLRVAGIBBJD");
    msg.reference_frame = 197U;
    msg.custom.assign("YGYFWSVKONBDZITYKGLVSFJHUARBAPMDUYCBELVQGJZKPFHFKZZHNWYWFOXEBNKNUYGQVTDELWMSPDIRFCXDCTDEGSUEVVFDGRMIUPJZMTITVRBEPDOQYDPJISOPQTLFQGLHBXZZVPJFNMWXLXLWCJRELYBHJVHOZAQEQYYTLACMIQAZVSAKSWBIUCORRHJLXOMKCIEAGBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.47770043261137907);
    msg.setSource(1221U);
    msg.setSourceEntity(42U);
    msg.setDestination(421U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("NWVJMCEJGCEDMTHQLISKIAJIZVRWZEUIZQPKHXFKZNFSSHCSBROAPLAWSXEHNHZQQUORUUMJMGALTMBYUCSLQDGRXVVFFCCJZOSRQWOLPWPBKLHTYFNUHBPXYFQOZPFQQETAYTWVRJUMJCXSCZYQYBGRBEWDVTYXDWLNPNSGUGBOHTGMXCOJOVLBDIZBEANWRFHTMDOPDINY");
    msg.formation_name.assign("WTZIFQSXCVLQQMDKGYYWRVQLHLDGOBXUJBKNCOTYPWPIVPDQLNUPWYDIMXUXYMRSCOUMISMSGBUPRHLVONAAEEBCQNUUTAROVFTRJTNCEOIDOJZRHPKAMKPDLCKECNHFXAGWHJBFGKWGMNFX");
    msg.plan_id.assign("TLIBXIYCONXYPIVXBUKGKAEFXEYHTHTQ");
    msg.description.assign("RRAEIGEAKBGLOOUKSLWQFOTNELZSTAMYXKIZOTAAJNCHRCMUEYNUGZCBTXFEKHIZNXKVVZVHNWDYQGPYVEKBGDSVBMTFHVFRBWQZIRUX");
    msg.leader_speed = 0.6721559762348656;
    msg.leader_bank_lim = 0.6468477751169215;
    msg.pos_sim_err_lim = 0.21781013476344535;
    msg.pos_sim_err_wrn = 0.6849698946849667;
    msg.pos_sim_err_timeout = 62146U;
    msg.converg_max = 0.37164581902217575;
    msg.converg_timeout = 49448U;
    msg.comms_timeout = 25513U;
    msg.turb_lim = 0.8366885364379762;
    msg.custom.assign("WKUKMUPHNACESBSHPMPVFZLQMTEOOXLBJRABNFEWTJEUGYLULMIEEGILROUGVXDYNXFQZHRPAVXVFODDBCXQNYMREEOTQTHYSBZWSC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.08525338320189713);
    msg.setSource(51927U);
    msg.setSourceEntity(25U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("PLXBQWCSJBZLUSGDJQNUKYWHASHBXRIVFKRJIMFWFRZARDLTVLWAXCIGMEXPNEDGVKMMSCEZNHZTIZNPXAVRFONFFISDRDKQTSRIRFUCUOVSOKJBLZPNDWVAXXVTGTBLLMICEOYSCUJGTPFFYCCGJTYRHAODADBYHNAIWMKXZJPITKWQPAJYUBVCQWQQHXNOLDNULSBEKMZOUGDCUS");
    msg.formation_name.assign("FHMUYNWUMYSHPOSFEOBZVKZTMTEQZLFVXQTLMVUPWQXMQKWAQJFVEMAAEZODDCPCDIGHPJUHYJIQCEAD");
    msg.plan_id.assign("JSEUBZFBTTRALYYXWWGMHUUQMGLGCAKIALHZLOVAALZOLT");
    msg.description.assign("TXRNFQNOBLXSBCBTKDFKEHXWUHVJXBMPYMVIVXRMTOCTFJWCTJSXELTRRALUENZHUWJBLTNSBXPLBAKGFKGVCZJSDYARKBIYRBZUUYEMCMZGHWALQXAQSPFYMYQUVKNGLFLPZQNJHWGDVZAJPCGPHHOIPSALTCIONUDPYFCUHZYQEIVYQENIMFOKRANUOSPEEWDGM");
    msg.leader_speed = 0.3349428052936658;
    msg.leader_bank_lim = 0.7844787705739232;
    msg.pos_sim_err_lim = 0.10903131532687105;
    msg.pos_sim_err_wrn = 0.1933630330595243;
    msg.pos_sim_err_timeout = 36548U;
    msg.converg_max = 0.2843999596184723;
    msg.converg_timeout = 49859U;
    msg.comms_timeout = 15774U;
    msg.turb_lim = 0.16609512496656476;
    msg.custom.assign("HXTQCXEKEDFCWSZMQWAKWCWQTCOTZEBAPKYUTJSODDQDNJQILHNXLVFSDYFHNTNMTSXEGYVRKJLPFISHXBXPVNOUVKDUHTFVYPAFELXWAAMFWJIWEGVYROMGMQBOIGHKLBTOBDDDYGNVGGMYYZGUMREBTPZWPZPYRSUQSCEBVZSWGCUEQLCKIVZXGHSMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7147634501759893);
    msg.setSource(41171U);
    msg.setSourceEntity(18U);
    msg.setDestination(58032U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("AONMFCOVNMAZHMHZQRSHZBUUKYGRKLZJJIRTSEXEOCOSZQBNRGAKXRJEOYPUGGDLQAVLNYXWYPMLWCIUEGWOHXKMXRHNPDNIYNIBNZMGTUCSWNAXHRTCQPFGQVQDMESAAHDTFLKELVWDECVSAOLTKPVJWFFRJLMRCLSZUYBQOUP");
    msg.formation_name.assign("HSCVDMVDHVHOBYQDMZGEKWPSFVKTNXFIUXATCCFSZCLYODCMOINYMJURIENCQTHKALAPXLNMJAKCJAEWMVRALWMGRSYZWXTLEHFKMURFCMBOXVNVSOIYIZYLELGTJQQXPADHMJKTWTNJIBRTKBUEBOJVRQXYXEHIDUGZRDZQGINGY");
    msg.plan_id.assign("PCMUTWPHZSTSZIFFQYQGYPBRCNFUARJOGIDWKWJVNLHHUXAWQWSKUQRBEGNEHVREFEYIVHSJVXMRFPNMVRBALOGCDRMTZLGOJJJJOGXIKBLNMKWBZVUGCLWQATLCMQTAUHPKOEKZIDYHLYTBNCXGXPSESPYBIYAHOFSFKMKQXWUTPYZKDQXXZCOGLMUPBSCNCOEOUDDVDJWFYHBQNRNQO");
    msg.description.assign("WEKOHXPXPVJDTATNSRDVHIZEWLEZLSNYMDSQOMMRGLYJVFTNBWMEFICAMCBPRVKRHSUKCZVLOLFHUGDYCQOUDBKCEFKZFJILIKTCRTXHPIBLPKCQNYNADAGZMCWAYOWHLNJCIRVASPJHQTWHOPZXRBLF");
    msg.leader_speed = 0.7334661301093268;
    msg.leader_bank_lim = 0.28578392452086343;
    msg.pos_sim_err_lim = 0.0029469487023715546;
    msg.pos_sim_err_wrn = 0.7861243789816723;
    msg.pos_sim_err_timeout = 32193U;
    msg.converg_max = 0.8500183559504874;
    msg.converg_timeout = 20784U;
    msg.comms_timeout = 33495U;
    msg.turb_lim = 0.18542645173170447;
    msg.custom.assign("GCZKPGVYPLJHGJVWEILOZVLHITXGLBYRTJQYAXTNQMUARXVLTZBSDBTHNMQENAUWUXJFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.18260717250550418);
    msg.setSource(2952U);
    msg.setSourceEntity(155U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(28U);
    msg.control_src = 33478U;
    msg.control_ent = 81U;
    msg.timeout = 0.09765677495097003;
    msg.loiter_radius = 0.17824897416003394;
    msg.altitude_interval = 0.6558802058270208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.1113727840364318);
    msg.setSource(21363U);
    msg.setSourceEntity(36U);
    msg.setDestination(51626U);
    msg.setDestinationEntity(222U);
    msg.control_src = 9254U;
    msg.control_ent = 160U;
    msg.timeout = 0.9148436484580557;
    msg.loiter_radius = 0.5132661175431755;
    msg.altitude_interval = 0.664503948589815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.41736045060155913);
    msg.setSource(17821U);
    msg.setSourceEntity(179U);
    msg.setDestination(5241U);
    msg.setDestinationEntity(202U);
    msg.control_src = 35571U;
    msg.control_ent = 130U;
    msg.timeout = 0.4824007189996036;
    msg.loiter_radius = 0.47547643657733274;
    msg.altitude_interval = 0.2612707708819776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.9672241565290278);
    msg.setSource(62761U);
    msg.setSourceEntity(87U);
    msg.setDestination(25293U);
    msg.setDestinationEntity(140U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9357501084062538;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.044933765095944045;
    tmp_msg_1.z_units = 66U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5194673441954495;
    msg.lon = 0.20927743107366703;
    msg.radius = 0.5213186463371637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.813111746334484);
    msg.setSource(46165U);
    msg.setSourceEntity(50U);
    msg.setDestination(64954U);
    msg.setDestinationEntity(253U);
    msg.flags = 173U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3179891530870249;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3798967032056234;
    tmp_msg_1.z_units = 100U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.30157899519347153;
    msg.lon = 0.6357587163527421;
    msg.radius = 0.9478456425511835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.08094867154919416);
    msg.setSource(1995U);
    msg.setSourceEntity(42U);
    msg.setDestination(43014U);
    msg.setDestinationEntity(65U);
    msg.flags = 151U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40831567396733404;
    tmp_msg_0.speed_units = 79U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14381544819896874;
    tmp_msg_1.z_units = 145U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4220623558423976;
    msg.lon = 0.4777782067554206;
    msg.radius = 0.7708393944119027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.12832647390766905);
    msg.setSource(9687U);
    msg.setSourceEntity(236U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(106U);
    msg.control_src = 60502U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 157U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6182156739012732;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.519476398003895;
    tmp_tmp_msg_0_1.z_units = 212U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5515743822266183;
    tmp_msg_0.lon = 0.8714421774689466;
    tmp_msg_0.radius = 0.23271500335345596;
    msg.reference.set(tmp_msg_0);
    msg.state = 40U;
    msg.proximity = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.37622505381288707);
    msg.setSource(9724U);
    msg.setSourceEntity(67U);
    msg.setDestination(34183U);
    msg.setDestinationEntity(151U);
    msg.control_src = 30982U;
    msg.control_ent = 62U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 13U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9478374917108845;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.913441706466415;
    tmp_tmp_msg_0_1.z_units = 105U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.565413631921528;
    tmp_msg_0.lon = 0.5080539068402679;
    tmp_msg_0.radius = 0.0606380473469843;
    msg.reference.set(tmp_msg_0);
    msg.state = 98U;
    msg.proximity = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.011885400544544789);
    msg.setSource(49634U);
    msg.setSourceEntity(252U);
    msg.setDestination(48110U);
    msg.setDestinationEntity(199U);
    msg.control_src = 45170U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 241U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8163577860747223;
    tmp_tmp_msg_0_0.speed_units = 4U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4171004940173012;
    tmp_tmp_msg_0_1.z_units = 28U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9822440725434352;
    tmp_msg_0.lon = 0.7433008977415695;
    tmp_msg_0.radius = 0.1374132983477684;
    msg.reference.set(tmp_msg_0);
    msg.state = 219U;
    msg.proximity = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.8349325706149058);
    msg.setSource(17883U);
    msg.setSourceEntity(215U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(13U);
    msg.ax_cmd = 0.6160946369071838;
    msg.ay_cmd = 0.027209677513928665;
    msg.az_cmd = 0.8867071786939031;
    msg.ax_des = 0.595445119895615;
    msg.ay_des = 0.5080419221013375;
    msg.az_des = 0.7755236068816996;
    msg.virt_err_x = 0.636695260270426;
    msg.virt_err_y = 0.9962814368975049;
    msg.virt_err_z = 0.8761620582104781;
    msg.surf_fdbk_x = 0.9660385038996263;
    msg.surf_fdbk_y = 0.6126793251266085;
    msg.surf_fdbk_z = 0.601611823056343;
    msg.surf_unkn_x = 0.8599610848567698;
    msg.surf_unkn_y = 0.21401223206035003;
    msg.surf_unkn_z = 0.34315432482968167;
    msg.ss_x = 0.04970985229556146;
    msg.ss_y = 0.9811995814277028;
    msg.ss_z = 0.4837004287529121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.07139675375132093);
    msg.setSource(38271U);
    msg.setSourceEntity(8U);
    msg.setDestination(60561U);
    msg.setDestinationEntity(150U);
    msg.ax_cmd = 0.40884661112541365;
    msg.ay_cmd = 0.10502781083662116;
    msg.az_cmd = 0.5434574679570424;
    msg.ax_des = 0.3548611219344374;
    msg.ay_des = 0.4618379747586133;
    msg.az_des = 0.20500438385707176;
    msg.virt_err_x = 0.9766601753951349;
    msg.virt_err_y = 0.03161663642190449;
    msg.virt_err_z = 0.12421323605994106;
    msg.surf_fdbk_x = 0.9260744851195231;
    msg.surf_fdbk_y = 0.512912732076252;
    msg.surf_fdbk_z = 0.12683739793784754;
    msg.surf_unkn_x = 0.29526773970533493;
    msg.surf_unkn_y = 0.843467254172097;
    msg.surf_unkn_z = 0.43424205319893505;
    msg.ss_x = 0.9141986886784214;
    msg.ss_y = 0.4601250315528097;
    msg.ss_z = 0.1912895774374771;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PIQHOUOGPLCDYPOGZLCKBBEVESSZIIEKFMVFECWPIUILBGKDFSNPEDJDJJJNVHNIXNDYIUMMYXYDJRHGQFXCSODASMACLBZUAVBAPASEGOQTJNTXRWVSKQMHNVCZRPYVIZFNVGQFFZFQTPRMETYXTIAOALIOZXOERWMMKRTZQUUBEUSLDTGNBHLCZYB");
    tmp_msg_0.dist = 0.17564796940088956;
    tmp_msg_0.err = 0.2793448009020978;
    tmp_msg_0.ctrl_imp = 0.956609944258442;
    tmp_msg_0.rel_dir_x = 0.6097474645180775;
    tmp_msg_0.rel_dir_y = 0.4198334896468927;
    tmp_msg_0.rel_dir_z = 0.1517968564168224;
    tmp_msg_0.err_x = 0.63168092136484;
    tmp_msg_0.err_y = 0.7754266982658101;
    tmp_msg_0.err_z = 0.7650392067575409;
    tmp_msg_0.rf_err_x = 0.2652111911939171;
    tmp_msg_0.rf_err_y = 0.13971491193925678;
    tmp_msg_0.rf_err_z = 0.1523975461451963;
    tmp_msg_0.rf_err_vx = 0.3566794514840773;
    tmp_msg_0.rf_err_vy = 0.00792119852425377;
    tmp_msg_0.rf_err_vz = 0.583263276527655;
    tmp_msg_0.ss_x = 0.3148230799407117;
    tmp_msg_0.ss_y = 0.4844890526512694;
    tmp_msg_0.ss_z = 0.25578236213733274;
    tmp_msg_0.virt_err_x = 0.9139495802590122;
    tmp_msg_0.virt_err_y = 0.8385810611230259;
    tmp_msg_0.virt_err_z = 0.28502148734386645;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.47517595971918714);
    msg.setSource(10876U);
    msg.setSourceEntity(201U);
    msg.setDestination(2875U);
    msg.setDestinationEntity(167U);
    msg.ax_cmd = 0.7379684875987088;
    msg.ay_cmd = 0.05246996564204953;
    msg.az_cmd = 0.21925044289154338;
    msg.ax_des = 0.7943569041697967;
    msg.ay_des = 0.237145257020816;
    msg.az_des = 0.9029945529183605;
    msg.virt_err_x = 0.5823737727615197;
    msg.virt_err_y = 0.6184039332012803;
    msg.virt_err_z = 0.6495541303935712;
    msg.surf_fdbk_x = 0.6252593385032482;
    msg.surf_fdbk_y = 0.10623224937693487;
    msg.surf_fdbk_z = 0.3873654695652341;
    msg.surf_unkn_x = 0.25857721175708615;
    msg.surf_unkn_y = 0.12378875436425141;
    msg.surf_unkn_z = 0.4468859911826303;
    msg.ss_x = 0.9518036190402074;
    msg.ss_y = 0.15751419573302217;
    msg.ss_z = 0.9882587895946183;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WHMCXJTXYQJXEBNWFZVLYQSB");
    tmp_msg_0.dist = 0.7552264957581973;
    tmp_msg_0.err = 0.6074677705919459;
    tmp_msg_0.ctrl_imp = 0.8265054131884851;
    tmp_msg_0.rel_dir_x = 0.1979616733974422;
    tmp_msg_0.rel_dir_y = 0.25442200237235046;
    tmp_msg_0.rel_dir_z = 0.0015967453394297726;
    tmp_msg_0.err_x = 0.882212488829488;
    tmp_msg_0.err_y = 0.20679707735624397;
    tmp_msg_0.err_z = 0.3912428755339633;
    tmp_msg_0.rf_err_x = 0.5413553512812435;
    tmp_msg_0.rf_err_y = 0.14342307395363785;
    tmp_msg_0.rf_err_z = 0.8962318744817275;
    tmp_msg_0.rf_err_vx = 0.47795302814898133;
    tmp_msg_0.rf_err_vy = 0.537832921887865;
    tmp_msg_0.rf_err_vz = 0.7678899348665621;
    tmp_msg_0.ss_x = 0.09211308672928775;
    tmp_msg_0.ss_y = 0.8519960481364677;
    tmp_msg_0.ss_z = 0.9050658672578339;
    tmp_msg_0.virt_err_x = 0.24391721796193155;
    tmp_msg_0.virt_err_y = 0.7079723260491453;
    tmp_msg_0.virt_err_z = 0.25635389601957426;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.8724063755000717);
    msg.setSource(18914U);
    msg.setSourceEntity(141U);
    msg.setDestination(807U);
    msg.setDestinationEntity(107U);
    msg.s_id.assign("QXQJSWGEZASDEUTNNYAMVSCFVDPZFPZXRAIKIVYIZONDPVUTGMIITMZEKBKZAAVORJATVRFQNDQXMXTWHDLMKJCGKFWSSNKDVMTXLCWBETSLQGFKEUMJOGRNRNMLHACXBCFOLRILRCVKEBNPHPCEGUPAVHVJKYUBHTHYXABODBEULOHQXSG");
    msg.dist = 0.7229326315072618;
    msg.err = 0.6038826611688586;
    msg.ctrl_imp = 0.4888847443092589;
    msg.rel_dir_x = 0.10283695464076681;
    msg.rel_dir_y = 0.5575557483198084;
    msg.rel_dir_z = 0.48202295939311124;
    msg.err_x = 0.16587845475019347;
    msg.err_y = 0.7709066424044441;
    msg.err_z = 0.5255372619875309;
    msg.rf_err_x = 0.7012089536817487;
    msg.rf_err_y = 0.9244790166501092;
    msg.rf_err_z = 0.7124693218565717;
    msg.rf_err_vx = 0.007912747113291818;
    msg.rf_err_vy = 0.7501144134153819;
    msg.rf_err_vz = 0.7431285864933308;
    msg.ss_x = 0.6133734009234496;
    msg.ss_y = 0.7615164439651269;
    msg.ss_z = 0.3188371736499128;
    msg.virt_err_x = 0.2681784844417575;
    msg.virt_err_y = 0.7431636406441533;
    msg.virt_err_z = 0.15714711758966782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.7732452046561785);
    msg.setSource(55057U);
    msg.setSourceEntity(181U);
    msg.setDestination(15037U);
    msg.setDestinationEntity(50U);
    msg.s_id.assign("BZAFNRVFBEIIJGAAVBAYLSHGJSMPCYKQKLLXYGVJSOXBTMLLZDNTWYLKQTPBBKEIKQHOCOHXYNIDHPUXBWOYVIEEWATZZRRFWRFVGAEHEIVTNLJFYTMDDOBPCUGSWCWUKATAWQFKNSMVKNRZQFNTRRWXQZHUXJCMXPUOERNFVCXGOXIOHSKURHLPDMSQWFAZIUN");
    msg.dist = 0.012117722600673342;
    msg.err = 0.8643764056195348;
    msg.ctrl_imp = 0.1798850858701072;
    msg.rel_dir_x = 0.8269139107137811;
    msg.rel_dir_y = 0.9839312024880991;
    msg.rel_dir_z = 0.29654878819519837;
    msg.err_x = 0.8073432273904102;
    msg.err_y = 0.7532676584181689;
    msg.err_z = 0.7465921830411121;
    msg.rf_err_x = 0.3210399408114467;
    msg.rf_err_y = 0.2936913408321403;
    msg.rf_err_z = 0.0003603444015153334;
    msg.rf_err_vx = 0.8256765630893925;
    msg.rf_err_vy = 0.8074419959091355;
    msg.rf_err_vz = 0.7801023330606146;
    msg.ss_x = 0.7756033511350707;
    msg.ss_y = 0.6829583176343406;
    msg.ss_z = 0.15357131782374134;
    msg.virt_err_x = 0.40163792472060633;
    msg.virt_err_y = 0.19397067855314343;
    msg.virt_err_z = 0.744815658295519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.6768316164763628);
    msg.setSource(13478U);
    msg.setSourceEntity(158U);
    msg.setDestination(3090U);
    msg.setDestinationEntity(171U);
    msg.s_id.assign("UOJUFDNYCKKSFWP");
    msg.dist = 0.2517278161723824;
    msg.err = 0.5255647870947742;
    msg.ctrl_imp = 0.21469532939433256;
    msg.rel_dir_x = 0.3184349069169483;
    msg.rel_dir_y = 0.050060646109929885;
    msg.rel_dir_z = 0.518612517017599;
    msg.err_x = 0.7231355203079258;
    msg.err_y = 0.9821712475362783;
    msg.err_z = 0.3785129684953338;
    msg.rf_err_x = 0.49258568141145254;
    msg.rf_err_y = 0.24274408725582408;
    msg.rf_err_z = 0.5123453326059721;
    msg.rf_err_vx = 0.9909502287601939;
    msg.rf_err_vy = 0.33939500114185717;
    msg.rf_err_vz = 0.15095994650535405;
    msg.ss_x = 0.4840883719134773;
    msg.ss_y = 0.07934507594434548;
    msg.ss_z = 0.6246533944813819;
    msg.virt_err_x = 0.7213495580043404;
    msg.virt_err_y = 0.40525666096460433;
    msg.virt_err_z = 0.7830775692976117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.30945000491577956);
    msg.setSource(57140U);
    msg.setSourceEntity(103U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(63U);
    msg.timeout = 52062U;
    msg.rpm = 0.4211169684366005;
    msg.direction = 34U;
    msg.custom.assign("ASRGVLQZSJBELTOUPIVQPSICXIUOALHFNGLUTJMOQPKBWUDMEPRMNTQWVWDLPZOYMXNZFAYHGPURGRFAYQFSMKLRTJCRJNFVQKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.8656079045118749);
    msg.setSource(17725U);
    msg.setSourceEntity(195U);
    msg.setDestination(61352U);
    msg.setDestinationEntity(42U);
    msg.timeout = 63565U;
    msg.rpm = 0.3614524110399876;
    msg.direction = 138U;
    msg.custom.assign("OUYVWVAQSZGTIBYKRVTIYEWTSEKBJAYDXRLMGIRCAIUTLJAIWEDSNJIKWXRHYHCATKPVEUCJYGRCSOIBQDCBPHUEZQGAQTAWVSXHONJLBMOAOXKDNGPVHZGXSIKBGTTKOHLUHVNUTZYUBYJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.24394118719896152);
    msg.setSource(42768U);
    msg.setSourceEntity(232U);
    msg.setDestination(26901U);
    msg.setDestinationEntity(59U);
    msg.timeout = 29566U;
    msg.rpm = 0.18870377949088912;
    msg.direction = 244U;
    msg.custom.assign("LJVTFJWTFLYKOBMUKIXMLUJSVRDUNMFMBOYRJBHECYCACOIHRHPLIDGLZHFZIDPRSXTNYZXDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.7678265658870709);
    msg.setSource(43956U);
    msg.setSourceEntity(185U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("LJALQAOGGDVGZRHUPWBKFSLLRHQDCENKVRUQF");
    msg.type = 95U;
    msg.op = 216U;
    msg.group_name.assign("KWSPQVRRHXMBWSRCLLNBNMMCNWPDLQQADMZIZRXRPHKJUHGYTCBQDUBPNXMAGSPWNJUUGNWAHOGOEJSGXWBBDYFOGVXAUKMIKLVQOPNNFZKSWYDHXHPLLGVYYSIVVBJQERXDUHZHPAOPAMDCTWKTEFJTKUOTZKFVTMITQLFJUBXQFBYYZATZZAYGTQXERCUDMCRSNGSFRHPICQJSHOUYACCEFVIILZEJNOSFJLF");
    msg.plan_id.assign("DFMMAPPWFRLOMZYUDCHFNOMSTIXOGPEKCVQPGNCNUVCFIHFECVQBAZNDQEKVUJQYAGTFZIJYRTWARNFMFJNLGSSWSCAODJBMG");
    msg.description.assign("WXQPGBHANLGXJFKGOUTPEUCRLRSNBXOFKCNQVTETZRVXQPUBXOQCDFSKGLNRIYFTAYDMVGBLNCRYYYRIXWSCQHMHIPKIGPLHEHORBAVKEMKUUECNIJOBZZSGCGQJJWQLUOEGRZMLHJEYGAZYICDYZUIUEXUXTOMCKMKTDRTDANIWBIDMLZTOIROZQSVKNVVAXZHVNKPDMQSBWO");
    msg.reference_frame = 206U;
    msg.leader_bank_lim = 0.11746593195642552;
    msg.leader_speed_min = 0.0005255715402621153;
    msg.leader_speed_max = 0.23167008689090385;
    msg.leader_alt_min = 0.825979176944422;
    msg.leader_alt_max = 0.34842185960886274;
    msg.pos_sim_err_lim = 0.2804165628096448;
    msg.pos_sim_err_wrn = 0.04497144483934001;
    msg.pos_sim_err_timeout = 12217U;
    msg.converg_max = 0.4027295024754649;
    msg.converg_timeout = 43141U;
    msg.comms_timeout = 16597U;
    msg.turb_lim = 0.27937147161063713;
    msg.custom.assign("VMFOEHZDNOTEKUTAOCBZLICBCYILWDNZAFEUNTMTQPWQUHLXWXUFXPEGPBQNSIBODOLZDZTLNXXEHSQEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.6509795924727778);
    msg.setSource(33140U);
    msg.setSourceEntity(160U);
    msg.setDestination(21568U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("JYTVXOJSOYIDEDUMFDMQUHKOKEOJ");
    msg.type = 223U;
    msg.op = 7U;
    msg.group_name.assign("JBUSQFTKORLPDPWWPSLTROOVBZGBUNNRQOLXSCLVUAXTAFDRKAAYYJMALFHAGNOZNJFDORVHLKYRVJBTARQGITFIBTWMBUSNTEDUJQYUOPONKWLIDQIHEHPDFB");
    msg.plan_id.assign("BSBLZVHVIXIYYKBMSMUIDOMEAFBSGBCRQZVLZEQPMSQIPKLJBDWVWXYTXFRLSDGPUFALZCAIRROHPNSJMSOIYXGYFFYDGUTOWDFBNPGFHNDVMTBEJHJQVABKLHQHGXMAHYWXTIPYJXFNTWCVMCLDZRN");
    msg.description.assign("SMGGFGJNYRIEGACFKUPCFIHSRYFQOORTOELZFIKVEZTPSTTTTJROFXGJYJKYKQDCHWMLVWIHZCNGYSZCDKZAPPNU");
    msg.reference_frame = 251U;
    msg.leader_bank_lim = 0.6905435002426489;
    msg.leader_speed_min = 0.5473127767259358;
    msg.leader_speed_max = 0.30721312465901573;
    msg.leader_alt_min = 0.9217145355014589;
    msg.leader_alt_max = 0.8682906214572484;
    msg.pos_sim_err_lim = 0.5931000016423348;
    msg.pos_sim_err_wrn = 0.22906264148463995;
    msg.pos_sim_err_timeout = 60744U;
    msg.converg_max = 0.9685535186216244;
    msg.converg_timeout = 62922U;
    msg.comms_timeout = 108U;
    msg.turb_lim = 0.08127747071019065;
    msg.custom.assign("OFAYATGNCSKPVOMZQKRWPFXAMWEOFSOMHJYECQMVSVPIBBIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.5818429766573371);
    msg.setSource(6350U);
    msg.setSourceEntity(206U);
    msg.setDestination(54303U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("GDTXTRYPDNROHOVWLKAMWISWBPYTEZCJFSMOLNJGNKMWUOFJRTRT");
    msg.type = 183U;
    msg.op = 36U;
    msg.group_name.assign("FHRHRHWLYMGTHWTQUFOEMOGOIQFGWAOXWZBOHSTTGNBKVYMVHKSJFDIQNTZRUPSVPUUOWZCGHXWAYIGQCKILVLAWNVZCOJGFPRXDUBEVXPADQJEYAZUZXNKNPNMTUNKMWPCEMKCEEZDNIMLRQPDKHXDUSUGTAWLLGVFASZJTAYAWCJSLOIJBJDELFDJRTBKCQKBEBBIOS");
    msg.plan_id.assign("BXMCDRTSDMSPGJLJVBKKPHKQTOQOMPZCBZAWGVZNCEPHLEPATFXGNFZLNVQPMJLTDCYGIFQYCMCABOZZGQDFUMEPKYSBBYRELWHTQNLGOXWIWKTAHZLKFEEKJDSGU");
    msg.description.assign("WDHJAOWSWLDTLCEHATNTQWUUCIZSOOQQMGYFRXIKVBMPBRBGCPTVFPJBCFJMRFMVWYGMTZNQIXABIHWELYGASKKZBCRCBESZKRAKKHXYVECHHWVYLQNQRYVZXTUEPDPYLFYNEQHBEORAUCPDBVXSDOKDSLQZHXPDHDZARJQSRANKNQDNYVODJSRUNWUKGMUXPZUXKWJNJAIHGVLFOTTJUIETLFTFEELMMJVZFG");
    msg.reference_frame = 35U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51127U;
    tmp_msg_0.off_x = 0.830621250771245;
    tmp_msg_0.off_y = 0.1660961486112219;
    tmp_msg_0.off_z = 0.9564834277432431;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5388527788406859;
    msg.leader_speed_min = 0.1483784357843898;
    msg.leader_speed_max = 0.9222774992758555;
    msg.leader_alt_min = 0.2980791545199907;
    msg.leader_alt_max = 0.6968069198354406;
    msg.pos_sim_err_lim = 0.33504210750985985;
    msg.pos_sim_err_wrn = 0.5668144168496727;
    msg.pos_sim_err_timeout = 9053U;
    msg.converg_max = 0.5307986117744957;
    msg.converg_timeout = 41088U;
    msg.comms_timeout = 11302U;
    msg.turb_lim = 0.23317085901155798;
    msg.custom.assign("IJWNEUICKHSBKFPFPSAWSJJYJGSDBCWBBKCPRIFPTISQSCFJGVGHZOPMDIOANYHKBYNZFJPQUZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.33013454275013543);
    msg.setSource(7848U);
    msg.setSourceEntity(49U);
    msg.setDestination(63949U);
    msg.setDestinationEntity(90U);
    msg.op_mode = 74U;
    msg.error_count = 38U;
    msg.error_ents.assign("YHZFHNSQJUIBHEHMGURRBD");
    msg.maneuver_type = 35354U;
    msg.maneuver_stime = 0.7464315000602691;
    msg.maneuver_eta = 19585U;
    msg.control_loops = 1291330631U;
    msg.flags = 230U;
    msg.last_error.assign("MOVVWHKIZPKJUYFRCIMNLJOKCILKAOVPNPPYUHOBGOCNYGDUSZOJSWQNVSMHHTLPJUFCLGDELWNBKZYUDXVJOQEVCQAKJFRTAMXWCTBUFXXBKSTIADHULKHRGIIHHBFYEACLMBAJFZGVRVSFGSXSLRKGBAMJTERHRWYFZUWXZDKDMDQUEXSQPOMIBDVWTWODASYCYEGINY");
    msg.last_error_time = 0.3067384424048707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.9073181003348966);
    msg.setSource(19985U);
    msg.setSourceEntity(103U);
    msg.setDestination(59258U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 149U;
    msg.error_count = 87U;
    msg.error_ents.assign("KKSGUFCZJOLHTHIYHPSBVZJOUITDEGXWETNYXHZEPSHUJLDRSUYFOVKHQOFAEOTAXSJSXRNZNXGAJRRCNAPNLCYMFQSQYTWDLBWVWQIYCZSYNKLBPVARHUOZPAQWCEHTRGXMAUNKSVEKBMMFCKKEQLBWBMUMJPPWOVTJGTQFOPVRZKUVAUMMRDXJOGNWLYIBIFMZZLRBLGPDYRG");
    msg.maneuver_type = 60385U;
    msg.maneuver_stime = 0.47769930299634056;
    msg.maneuver_eta = 3173U;
    msg.control_loops = 2271945875U;
    msg.flags = 160U;
    msg.last_error.assign("GGOBQFEFQYYCKQHJDTXBVXTDRADBHBBDUEDQOSIOFYNHXUYKDASJMMPWCINDUFIWOKSWSUZQGUCZCVLVQZWLQVUQEAPTOYCHCILOKOJQJHEGVPHEXHUAOTRJRFNGVJIYLAJYKXXBLFFNLWPVRWRIZWUPZZNKHWEZHMNNFRBISRSTSKWGOGFPYXJPTMRIYCNARTSGPAZISJMCMQGXRNAEEKEPLVWBKVHXGKMMNUDJLTOVACTLZBDCLITSMAFZ");
    msg.last_error_time = 0.5431308848940067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5599008717516399);
    msg.setSource(39495U);
    msg.setSourceEntity(123U);
    msg.setDestination(28814U);
    msg.setDestinationEntity(97U);
    msg.op_mode = 99U;
    msg.error_count = 60U;
    msg.error_ents.assign("WTTVCLYWDRMJEYUKEJJGSIDJYSVESHFLCRAVPUKEHONCYVYWJJXXXNYWRVPRQTGKXPIKKFVBUHILYUAZCZQUEMZQMNTIADUOIGBBHFEFGIGLMWFLBEODRTJOATNRUDQH");
    msg.maneuver_type = 36272U;
    msg.maneuver_stime = 0.13644035520362707;
    msg.maneuver_eta = 15549U;
    msg.control_loops = 1982237073U;
    msg.flags = 210U;
    msg.last_error.assign("YDXXCRWOLLENSMPHTMVUJSOCTXGNHPSADUNTQITJOGCEYZHRYYRIUJEPRVHNKYSUBQDDSHBEIFVTAGBLOFOBJVKFXQUCLINJZFYGSHVOPDFPMVXIMZRTDUJIHMUWRPWZQGWAZKRXABWZXCLLPWFQOBLWQNCJEYKJASEHG");
    msg.last_error_time = 0.6901539022638934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.6034762703957047);
    msg.setSource(14503U);
    msg.setSourceEntity(103U);
    msg.setDestination(46799U);
    msg.setDestinationEntity(155U);
    msg.type = 201U;
    msg.request_id = 52594U;
    msg.command = 69U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 55988U;
    tmp_msg_0.lat = 0.4485870975670615;
    tmp_msg_0.lon = 0.34908896873171735;
    tmp_msg_0.z = 0.9917494266223434;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.amplitude = 0.29262480340204655;
    tmp_msg_0.pitch = 0.8560066999168771;
    tmp_msg_0.speed = 0.00970785775295524;
    tmp_msg_0.speed_units = 197U;
    tmp_msg_0.custom.assign("GMPBIOJNIMJCBUFUEQHMXFOKIHGXEYTEFWFDOKSKVUTNQEUYIAPRUGDBVAXZYGOPRHMBGLVKSCWFUTNGMKPQHLTGGJSINJYFRQUOWCPCDWAOIBVSAQZPDVKORARQBHVSMVTEEOFJNMOXPDQLWVLWBCSELWXEYNWYCKCZSXXRISUTERDTTRZGHJYBNFJAYDZTMNLBIKQCKDPBFSYZUZJJTVHUACWFILHZZIDRXNGZDAAMHLNPLKSEPQHMQX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20138U;
    msg.info.assign("MVMMOLZJKUOXFSCRKGDZMVHUNPEIPCPGMQWMMEFGROXXYKEQFKXVPCXJIWSBQNDYKOSARESNOIZACURASZORNKCEQRTHIXLJFCQEGDBTKLUIVEKHVVXYJAJYLNUJCCUGBLRMAYLLTQNWHRRZIOYVVEMBLPXCPTOFBWSZPDWHCSDQZYTFNPITDRJJNAZAAFGWWPHBASUNODGDXYJPOWQHBGTVHSWTFEAUNZKMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.27607613551929844);
    msg.setSource(39623U);
    msg.setSourceEntity(119U);
    msg.setDestination(30116U);
    msg.setDestinationEntity(148U);
    msg.type = 132U;
    msg.request_id = 45918U;
    msg.command = 72U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("TFQHUXYJPDTJMGQABTDEFDXGXNXPMRATHYEFSCICCVXIFBROYBVXRMGIUYQTLEOPONYWRDSIUTHMBHJSGUWOUMOKBUTENTWUOFWEQJGUBVGDMVYKFHAQRGJCNMMPRDLA");
    tmp_msg_0.formation_name.assign("HLJADENVJHFIFGEQNRYMRKQTAUQYHEVVGVIAFGBBIIQDBYMTUPBIKGWJKXRCABOFTXWAYMUFRZQMUQVXPJZJNVOFGEBOUKEJXFSHJPRDKAZZCIQYCDCUSALSTTQWTCR");
    tmp_msg_0.plan_id.assign("BHPKMFHUZRNYNBHXJQOEXBNISHAYGDUVJILYVZWLUPOKDHRJDEVRVIANOGLQYUXYDNGUCKRSQHLMMOCIXXVFQELAJZPBUMVVZJJAWFPRQMBFJUGTACGVSGZHDFNKQCVZEJWRHIDYNFPCBOFZLBYKELBWRHOKGEYDMOUARWHTKEZFTDCKN");
    tmp_msg_0.description.assign("YXGNZAYYWKGPUPSYZWWDMWHIEYRGOGXSWLZMRABISSQRSTYFEOLUICFLCIHLHFSEMTPQLLOLLAJPFBCURHQEHIOKYSMXDOCOJMITKTVVEAQTPPDABHVUPEQJXTNCKQCWDIUANMZMNGGRINFGKVVMYQWPUGXBUMAJBXPLNKFHZRSRKBNRHUZDSTQOXKCAIZEZOJFSQVOTDDRZNYFCGVHJVEDU");
    tmp_msg_0.leader_speed = 0.8022770577303678;
    tmp_msg_0.leader_bank_lim = 0.13486604668472968;
    tmp_msg_0.pos_sim_err_lim = 0.6564354639102724;
    tmp_msg_0.pos_sim_err_wrn = 0.055870453603247494;
    tmp_msg_0.pos_sim_err_timeout = 21071U;
    tmp_msg_0.converg_max = 0.8707731095429883;
    tmp_msg_0.converg_timeout = 61316U;
    tmp_msg_0.comms_timeout = 12791U;
    tmp_msg_0.turb_lim = 0.6911229442106676;
    tmp_msg_0.custom.assign("SFPCIFPETRMRVJPVBNURCIRTDSSEUHNFVALXMEIQKWGXJGBRQXMZXNTMYGOQZWIDWAGLEJICRSEFEFFIBYSKJU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11073U;
    msg.info.assign("YFDFKELASKBILFMYIXUATKBWPCQSITZMEECGEUEUFKANWKSPQCZLJEFMYJXUICZXZIBNWMHSZWDRDHVJVOYIMGIYTZNVSTITRMGALSLMWNDESPTOEADGARFHIUNFBYZUJPQROHOXGKGNRWVNEFDODQVXTCBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.11207391537581834);
    msg.setSource(10764U);
    msg.setSourceEntity(45U);
    msg.setDestination(4961U);
    msg.setDestinationEntity(183U);
    msg.type = 222U;
    msg.request_id = 42286U;
    msg.command = 207U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.8335839250514232;
    tmp_msg_0.lon = 0.683086518263654;
    tmp_msg_0.z = 0.29162028958559805;
    tmp_msg_0.z_units = 213U;
    tmp_msg_0.speed = 0.25302251345295834;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.start_time = 0.2957854923111274;
    tmp_msg_0.custom.assign("OTJYFOUUXCJXUI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30234U;
    msg.info.assign("YNFYACEWYCZWFSLFWEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.15539563759456387);
    msg.setSource(41561U);
    msg.setSourceEntity(157U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(24U);
    msg.command = 151U;
    msg.entities.assign("XXOPFKIWHZPZPBUVJZLIKLNVFBKQWGAVAUESUCSPBTZSFTOTHERSFEXTBRZYAZMYNYQTRLMIPWSKGCZDXQHMKEDIRCNYLQXVRELHXNKYIGVGECUVENMECUYLFRPIKZDIICCUZJHBDMKJOBVOQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.08525426497746125);
    msg.setSource(6173U);
    msg.setSourceEntity(194U);
    msg.setDestination(62559U);
    msg.setDestinationEntity(141U);
    msg.command = 112U;
    msg.entities.assign("KYKMEUSXWNPRNAFAVZYFPJPCAPIALZCZIQEMETNDSTKAGGGIJAMSNZELYQSOBLSXZLRVVQFUJUBWXWZIZMQDRWCIXCVZICQGGTVKQPYPSDHDBLOJTXSASTJREHEXOIEUWIJUFBCHJFKKCHHOXGKEYSJTFHXKLRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.1964898701463932);
    msg.setSource(2600U);
    msg.setSourceEntity(77U);
    msg.setDestination(49710U);
    msg.setDestinationEntity(17U);
    msg.command = 206U;
    msg.entities.assign("IIEZTCTZQHRSCFBBOQHDSLLMYPJHOASSWMVMKDPALCTNYWNHZPPDYJTKDDCHRLEJFRHRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.15236032255156562);
    msg.setSource(49403U);
    msg.setSourceEntity(85U);
    msg.setDestination(9219U);
    msg.setDestinationEntity(132U);
    msg.mcount = 214U;
    msg.mnames.assign("UNQOOXPVJBRZPMYTFSEHSUOMZWMKAJTFJIVLIMGMVLXHNLHUVVVYDPMAEKFEBCFXYKCHSRSFPYLWCADRLFMZUBNPQKEQKYNXTHESAFGREJJNWQGNTCCLURTSMPZVJBBTOFLNUHOVHOHCADXWUCQYZZW");
    msg.ecount = 193U;
    msg.enames.assign("NMPQUHJQRXQOVMRVTQPYYAIHBADFJRPLDFLZITFDFZKAAUCZIUNSZBGL");
    msg.ccount = 73U;
    msg.cnames.assign("IYJTUPBSMJLJAYWJHVLXBYIVMMAFOOMBNINASIEWUJBBTHNIMCHWZZMCVDEDWDOUIWFLMFXYWXQGDVVG");
    msg.last_error.assign("BXNAXGLJPXPHGYSNWTPULKUURNSJXZRAUMOFBILRALWDMCWQOFSSFRMJB");
    msg.last_error_time = 0.8165993361149451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.23933557039774878);
    msg.setSource(27640U);
    msg.setSourceEntity(188U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(238U);
    msg.mcount = 180U;
    msg.mnames.assign("KDZJKNGZIYANKDTDQCKOYTEPTGGLYZDXESLQVKXVRLQWJSNAPXVLFFFVPNUNRZFZWGLIUTCS");
    msg.ecount = 104U;
    msg.enames.assign("XLNJCBIRULOFTKOPFHDXNXNFRAUJPHTMWSYDYVGAZZKUVGIJMTRYWHGKGBCTOZRARJEQKKFWWGPZIECTNWSAIGNMYTBXZVSIYJEDZKDPGYOFPDTHUBZMKRLTQUTMHUD");
    msg.ccount = 176U;
    msg.cnames.assign("PYDXJVVONHEOTYRTLYMDWYEFBXMLSHCXNPHSAALTUZUQPLNUQIHESZIDSASQFYPQVKVBXHDZCJLFQVKYBFRMQTNSJPWYTMNFAJBXVOKYGQGZRUIADDLIWZRHTXPKNZMJUMFEBJBYRVWPHTZRFWWSRVWCCKPAAOEFIZZQRUEPUVOOIWHMCAJWBSCXRENISRMTGKDLCXCJKPWMUFVETQGODILKEDSLFOLNICMOYOXBGZHUNG");
    msg.last_error.assign("OWRJGEPUUSTMKZFYFFWKABAMXENEJBSCKNYAYEVXNPSGDJQJEAHSIGTUPRTHTZPUDRNHAODTQEBYWOLUQKQYGLUUHMKLBQQCLSUTCVVLDQCKVFTCHEVZNDDWBDIJEBCXZPZIAWVRTSAXCNXIWSPDTFOYTUOYCRABOVJWZJHFXZAZJQGRIAZHMEEWGNYPMIXQNSIRJMHVVRLDQCSMBKOKHDILPSF");
    msg.last_error_time = 0.8696925950611404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.3537233131078482);
    msg.setSource(54672U);
    msg.setSourceEntity(183U);
    msg.setDestination(19960U);
    msg.setDestinationEntity(253U);
    msg.mcount = 253U;
    msg.mnames.assign("PLOPCCJAIGYYYHAVIUNVWYXEWOBCMGQAZOBWK");
    msg.ecount = 122U;
    msg.enames.assign("DOQETSQJGYOKWEPVPKEFDOIAXDMZRINBJRAKXKHHSPCZWKLOWPRGAXJUNFPKILJHWZBFSMLQCSGPIBEHUZOMRRJVOSQCQSEZTMJYVPQUBOFGCVYWCATZT");
    msg.ccount = 95U;
    msg.cnames.assign("ZHYBVGPHBTCWESQLTFFUKCGBMMSUKMXRBWDJSLDOBQUKDTITLVUUDHFTKRYNLUAPPOZOKQVFXCYEZIEAGJAZUCUQZKOANSPWNIBJKFONMQNIWWIQGMOUCHWPHXQCXMZVHISMGYTKJAICEPCYSHTPLVAZAEZNLGMIUNRGIRMYBCPSFAXEKHFOLWQIL");
    msg.last_error.assign("VMNZYJZJCHGJZIKYLABJFBCPGPYFNEXXVLJVIRUFEVINWERWSVMJWOULLEUCHHMCPAQVWBYGUZVONSXPPASDGSHEQFOSEAQFZOOKDXDLIKKCPRETWSRANBRIEBSQFMRKARACXWTEQNJDZKQSVJOGAMTKIBBSHXNOATPBDQOCRZQJMXRHKLUYGTMUDBXHIHIULKBDXYTFYTINPGQWXHYTTVWDUDUULOZMZDPFGVAPCNMEYWYONTKLHRMGQFCJI");
    msg.last_error_time = 0.8373883210825096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.18311883638791882);
    msg.setSource(64610U);
    msg.setSourceEntity(187U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(131U);
    msg.mask = 200U;
    msg.max_depth = 0.5300774507998474;
    msg.min_altitude = 0.02567223543651842;
    msg.max_altitude = 0.4489298432972443;
    msg.min_speed = 0.11871371088211047;
    msg.max_speed = 0.5405616818179744;
    msg.max_vrate = 0.06153133447281045;
    msg.lat = 0.03914444506486525;
    msg.lon = 0.22241447600864528;
    msg.orientation = 0.24134108628435436;
    msg.width = 0.38463916317721614;
    msg.length = 0.48562773699175876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.6847686565490606);
    msg.setSource(7182U);
    msg.setSourceEntity(92U);
    msg.setDestination(37152U);
    msg.setDestinationEntity(61U);
    msg.mask = 131U;
    msg.max_depth = 0.08531615368284107;
    msg.min_altitude = 0.6797437436585195;
    msg.max_altitude = 0.9681048530368747;
    msg.min_speed = 0.8889531523626331;
    msg.max_speed = 0.3506508070074129;
    msg.max_vrate = 0.8925349999054896;
    msg.lat = 0.7067226849224677;
    msg.lon = 0.5657485936669604;
    msg.orientation = 0.7479479964639891;
    msg.width = 0.35082648937636374;
    msg.length = 0.959473957853453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.5430047430235047);
    msg.setSource(45456U);
    msg.setSourceEntity(96U);
    msg.setDestination(15452U);
    msg.setDestinationEntity(113U);
    msg.mask = 143U;
    msg.max_depth = 0.8462045949339483;
    msg.min_altitude = 0.1735530395697974;
    msg.max_altitude = 0.16636961265804417;
    msg.min_speed = 0.005640367607679719;
    msg.max_speed = 0.7047172628038776;
    msg.max_vrate = 0.23992270659326853;
    msg.lat = 0.4823243827567364;
    msg.lon = 0.17380079716423613;
    msg.orientation = 0.020496150803057;
    msg.width = 0.7625081396005241;
    msg.length = 0.35520874645275047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.5568172535256931);
    msg.setSource(31482U);
    msg.setSourceEntity(153U);
    msg.setDestination(27472U);
    msg.setDestinationEntity(59U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.09875807933304426);
    msg.setSource(50486U);
    msg.setSourceEntity(87U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.026960004328264175);
    msg.setSource(64986U);
    msg.setSourceEntity(232U);
    msg.setDestination(1281U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.6364501613570903);
    msg.setSource(48701U);
    msg.setSourceEntity(228U);
    msg.setDestination(51994U);
    msg.setDestinationEntity(248U);
    msg.duration = 10727U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.6820711989531288);
    msg.setSource(48651U);
    msg.setSourceEntity(217U);
    msg.setDestination(27677U);
    msg.setDestinationEntity(226U);
    msg.duration = 27317U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8610618232877475);
    msg.setSource(20056U);
    msg.setSourceEntity(110U);
    msg.setDestination(26172U);
    msg.setDestinationEntity(99U);
    msg.duration = 8284U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6133490567066646);
    msg.setSource(48863U);
    msg.setSourceEntity(177U);
    msg.setDestination(58927U);
    msg.setDestinationEntity(212U);
    msg.enable = 135U;
    msg.mask = 2981965472U;
    msg.scope_ref = 3979832514U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.45952096904733375);
    msg.setSource(52924U);
    msg.setSourceEntity(24U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(229U);
    msg.enable = 40U;
    msg.mask = 2173895721U;
    msg.scope_ref = 4281617704U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.7888201322565203);
    msg.setSource(2004U);
    msg.setSourceEntity(11U);
    msg.setDestination(10363U);
    msg.setDestinationEntity(16U);
    msg.enable = 29U;
    msg.mask = 4213303655U;
    msg.scope_ref = 2795552267U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.8198773564966175);
    msg.setSource(31262U);
    msg.setSourceEntity(155U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(165U);
    msg.medium = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.6997799697162865);
    msg.setSource(8347U);
    msg.setSourceEntity(20U);
    msg.setDestination(16694U);
    msg.setDestinationEntity(160U);
    msg.medium = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.09546135437347958);
    msg.setSource(6630U);
    msg.setSourceEntity(106U);
    msg.setDestination(31303U);
    msg.setDestinationEntity(36U);
    msg.medium = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.81138937321565);
    msg.setSource(31667U);
    msg.setSourceEntity(225U);
    msg.setDestination(12973U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8019329768663261;
    msg.type = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.24248624201099167);
    msg.setSource(10237U);
    msg.setSourceEntity(112U);
    msg.setDestination(42190U);
    msg.setDestinationEntity(12U);
    msg.value = 0.0521086890405148;
    msg.type = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.7475414526183224);
    msg.setSource(36092U);
    msg.setSourceEntity(12U);
    msg.setDestination(61911U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6638881733157492;
    msg.type = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.669172436196115);
    msg.setSource(50990U);
    msg.setSourceEntity(100U);
    msg.setDestination(46459U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.8418966331646354;
    msg.converg = 0.7751938723471212;
    msg.turbulence = 0.11218101460220087;
    msg.possimmon = 132U;
    msg.commmon = 167U;
    msg.convergmon = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.3260181186766419);
    msg.setSource(24598U);
    msg.setSourceEntity(196U);
    msg.setDestination(37470U);
    msg.setDestinationEntity(2U);
    msg.possimerr = 0.659438840798617;
    msg.converg = 0.19038779686841723;
    msg.turbulence = 0.8480194237588865;
    msg.possimmon = 151U;
    msg.commmon = 186U;
    msg.convergmon = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.5437122681482326);
    msg.setSource(47297U);
    msg.setSourceEntity(217U);
    msg.setDestination(33145U);
    msg.setDestinationEntity(164U);
    msg.possimerr = 0.5067651474243816;
    msg.converg = 0.8226913609550042;
    msg.turbulence = 0.6581767119832158;
    msg.possimmon = 131U;
    msg.commmon = 74U;
    msg.convergmon = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.6892406971662984);
    msg.setSource(17087U);
    msg.setSourceEntity(148U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(132U);
    msg.autonomy = 44U;
    msg.mode.assign("IPBOTMCPQYZMGPXBZBEFHYKAZRXTGHRLOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.35379641945425744);
    msg.setSource(55394U);
    msg.setSourceEntity(198U);
    msg.setDestination(52596U);
    msg.setDestinationEntity(161U);
    msg.autonomy = 239U;
    msg.mode.assign("UOGZDXZPRPUPKFJYHMIFXZYQJFAMCQCUPIMLFWRNQSIWBBOOGQEWERTWDXWEVJXUWAYHNRAVJHVXZRVHAGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.2720231580658391);
    msg.setSource(17430U);
    msg.setSourceEntity(12U);
    msg.setDestination(47501U);
    msg.setDestinationEntity(170U);
    msg.autonomy = 245U;
    msg.mode.assign("PTNAYYTAMWHTEQEEYVQDRQFVNUAFPILBUWFNRKCNJTISFEKXZWGBWBZPYXUGVHCAXYVGLSSQENDMKGOMMSOINJHCZVISUNFIHVGJPJUGPIXODTOOQLHZAFDTBXCHEVUIRZWKMWBIHATRECALZEWYJQNPYOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.0888413981959515);
    msg.setSource(26583U);
    msg.setSourceEntity(62U);
    msg.setDestination(22577U);
    msg.setDestinationEntity(208U);
    msg.type = 163U;
    msg.op = 39U;
    msg.possimerr = 0.17349251184319936;
    msg.converg = 0.41708981084206953;
    msg.turbulence = 0.3640968817728618;
    msg.possimmon = 214U;
    msg.commmon = 224U;
    msg.convergmon = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.9375181649722703);
    msg.setSource(25947U);
    msg.setSourceEntity(129U);
    msg.setDestination(60597U);
    msg.setDestinationEntity(44U);
    msg.type = 141U;
    msg.op = 237U;
    msg.possimerr = 0.6093865427266999;
    msg.converg = 0.6844607180930883;
    msg.turbulence = 0.5670860638443097;
    msg.possimmon = 63U;
    msg.commmon = 239U;
    msg.convergmon = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.3406765767678087);
    msg.setSource(57936U);
    msg.setSourceEntity(33U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(210U);
    msg.type = 65U;
    msg.op = 104U;
    msg.possimerr = 0.9160672993504482;
    msg.converg = 0.5468020199706675;
    msg.turbulence = 0.5523726362606752;
    msg.possimmon = 207U;
    msg.commmon = 228U;
    msg.convergmon = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.6203809579782014);
    msg.setSource(47731U);
    msg.setSourceEntity(15U);
    msg.setDestination(38607U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.46817646012185243);
    msg.setSource(56698U);
    msg.setSourceEntity(63U);
    msg.setDestination(60000U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.6557549650639046);
    msg.setSource(1733U);
    msg.setSourceEntity(51U);
    msg.setDestination(9571U);
    msg.setDestinationEntity(134U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.08091762606047015);
    msg.setSource(3984U);
    msg.setSourceEntity(246U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("OVMFRKGIBCDPPYPINVFQFBPSBSREHXMLCBOOVAUWBUTYDAIXHDNXHZEZEAPYNSWXGQJYOQBNASAEYWDRROCIAKUCRJIIVWITJUSSGQZRJYOUANIXBDDLLKOUCLKOGMYRIAGKMGQUCEYJHQDMXMAYFGHNQLPAWLPTDNZWZPOMWGVMHPZKXIBFYFKNF");
    msg.description.assign("NJHGMCRMFSVKKASGLSDETASUZBTAQRRAP");
    msg.vnamespace.assign("GORZTIHVGPWTGRQMZPRGDPJXQPMVKFKINMEXFDFXBTXEZVUCCRKXJEAAYBVEAURDTOSLXRFHAEMLCQMIGHIYQWPJJHZMDIHHHLTZOCSFNSJULVPYGTTVEPLTKPJDNAZGYOSW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JFWIMRJPGETBUYGSARFMUHDYNNXPKKNFQSIBCLSLOCWIFCKRXLEIDWTQQLRRHCJNDNUHQTASZGNRUFDKWETZVAXPMBKYPHGJGNXDYRMQZJISJZQGDPCDANFYKVPLVODWEHVTUUWDOLHAQBZAGONGXFCZYEJOEKSXAVGXYVUDYKYYJHQOKJAELTCQCBIUJ");
    tmp_msg_0.value.assign("RWKUARMHBDMSAQGGGGTVJIFVEPNFATFRN");
    tmp_msg_0.type = 247U;
    tmp_msg_0.access = 196U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SFRBKNWVLTPVAHNMUEBWQMOXKTAPEPQIMRGOFTAJAUYTEVEOIDSANVHTYINKBGXSVKJUCPFEKSQFLMJRQEWMYGKWEICBQFWDPRZBUXYPJDVQIWVUGTRPDFMAMKXVBRKGOXFJCZLJSDFFTHAMOCGMSZCUBZAHLSLLNBIPQIHQAYCLEQYNAXKRYZWITEGCDVBHDYMSJENGUNYHJJTGWJRZYRXQLHOUSCZOFDIZWSULHDVXROKNOCZOLW");
    IMC::PlanGeneration tmp_msg_1;
    tmp_msg_1.cmd = 66U;
    tmp_msg_1.op = 247U;
    tmp_msg_1.plan_id.assign("SSRIVJSEUXTHSNZBRMQZTKGGPDAIKUBFYRDONYMRZWFAQ");
    tmp_msg_1.params.assign("HNOKFVTPEYA");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.909215884935828);
    msg.setSource(29807U);
    msg.setSourceEntity(161U);
    msg.setDestination(52814U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("ARVEBOBVAIZYIVHTLHYVTXJWGTANWLCZPURACODDFFQXYPGDOOHLUWARUSBRWBHJOLXIPXGQDECYGVNVKGPMWAKTLMGMQQCCWTDXYFYIQBNOHHOMXPJW");
    msg.description.assign("JIRWLYAHTGNIUCERPMMFDTVUCHYJFDKMNNLPRJLXJVTCBTIOUBASECRUSIFYFKWFXPQNPYDJIDSMVXWMLLUAXRTJPWKAJASMQFZBFSUOVOSABBSOYCZQPHSGFGJDIZGQWOUTGHTZKQUKATXLNGOEVBQWXHU");
    msg.vnamespace.assign("IUNFCLPKUXZHSHPFIAFUVNKTIYSBGFNVAUEWMNQJHZAVLKJCKWCCASAXIFJZMFKYLKVQRTOBOSXXVRPHRBMGCRXBINOTJBZGTZEGDRW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QNPBTQIYGJZRFIVKLSBLEVHITUERIAHJGRMFCJNGWIRQOZDZQTEDUGXOOOAIUXQCVPZRWXPBCGPBZGSRYQBNFLGRSHNYOZMLXFWBIHDSEVUUWAYQCNVAOLKZHCHMUKVPTKFSSLUN");
    tmp_msg_0.value.assign("JZRSZDGYQZZUCNVPH");
    tmp_msg_0.type = 241U;
    tmp_msg_0.access = 226U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JUTPVPJSOFRNHCVVQKBPGM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JOOYROZUZDXMGQOWBGNILVYQYTTWEBQUDCUKMCNSVCBMMPXCBPDUUTJJOBWKSITFXLSOXMYDFEPZECQKSGJDZMGNRPIQQWZNM");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 53900U;
    tmp_tmp_msg_1_0.lat = 0.039627264667242645;
    tmp_tmp_msg_1_0.lon = 0.5985335692481017;
    tmp_tmp_msg_1_0.z = 0.776494958751291;
    tmp_tmp_msg_1_0.z_units = 213U;
    tmp_tmp_msg_1_0.speed = 0.9846330959099538;
    tmp_tmp_msg_1_0.speed_units = 142U;
    tmp_tmp_msg_1_0.bearing = 0.7743266465943685;
    tmp_tmp_msg_1_0.cross_angle = 0.24378083911834125;
    tmp_tmp_msg_1_0.width = 0.55913285422077;
    tmp_tmp_msg_1_0.length = 0.06993204355247806;
    tmp_tmp_msg_1_0.hstep = 0.7164604843279699;
    tmp_tmp_msg_1_0.coff = 38U;
    tmp_tmp_msg_1_0.alternation = 1U;
    tmp_tmp_msg_1_0.flags = 40U;
    tmp_tmp_msg_1_0.custom.assign("PFQNHKEYGGHJVMUXNEYLLRAATXBDSELNDHFDWACYQTFVTEVSUGSSVTYDFWOGZCXRVMIFIGZTWNAKEKAFXLILMUULGXJPNYWHOVMCOJSOYNXVMHUVWFRTTHSZCX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::IridiumTxStatus tmp_msg_2;
    tmp_msg_2.req_id = 40917U;
    tmp_msg_2.status = 142U;
    tmp_msg_2.text.assign("CRNQGYLFKVLHRIXREVMHGTTSVLRQBUXHXGQRGFALFOLSIDGFNNKODSWJJMDXTWYKFAEUCZNLMDFQWMOKENLJSACZFOCLJMWZVCZATGTBPINWJWXHJCFFZXPGDCRWHVZPYNIRYVDJDEVSZPNVUHOVXBPNBAYJURCHBAYGUQKTUIECSWBSIYOKEOJMPADZXBIN");
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.42001228951473746);
    msg.setSource(42482U);
    msg.setSourceEntity(122U);
    msg.setDestination(26803U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("WLKZWGUMYRENOJJPASQNQTSHJTJSVPAIMUYHPFXBSUHDYEQFPLKJKGWZIOINUZBPAPBZKARBOVLVWQWYXZLXAZBX");
    msg.description.assign("RSEGBNYKHCJVTHUSURKQSWFQAKNHLHUZDVIRAEUYSTILDJTNOXPDXOLLVIKNZXMHFOHUQMTHZVFTOIBREREPFAYGFGALYXFYVMCCBDOAWWUBXDQJBPZNCQFMBZRCASAPDJQMRKQHEZXVEXLWZYWBIHLMGWLJPO");
    msg.vnamespace.assign("RBYUAZMYUWUOUWAW");
    msg.start_man_id.assign("PUCGAUEFRDIVCRCSGFLXNCKJYCKQTBOAYTNUKQROVKXRLBJVCFQXPMAFEMSGFZADBKRZBLQEWPODLFQBTUTMZBIOAONJQCNJVESWHGQAMIUNXYFXVFLCTSPOGEJDYJKPNSNYLGRDHDXJXBHVBGZMHHFINQSWITX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PTOHEKAIHTIHHXBLWWXFHSBXNGGDQKILPQWMQDARPOOCUKSQHFAOFIVDNLVSWNTOVZYRVJCRJCGZACBLZBTNIPNH");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 4060698083U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.8282304110907155;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.8702247695912962;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.5206827248041026;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 94U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.3566143810822541;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.8633591084102343;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.11861473602649475;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 32U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.21356455362733895;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 96U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.4064231326112191;
    tmp_tmp_tmp_msg_0_0_0.flags = 80U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 60375U;
    tmp_tmp_msg_0_0.custom.assign("TLVEMJYHASXGXJXRLYCRTRRPKCVGAPHI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PushEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("VPOEKUIGAGLWDDGHNSBOTQIYXARVUFVZAXBUDLPDFRZOVXQUT");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.8294185508614196);
    msg.setSource(15006U);
    msg.setSourceEntity(199U);
    msg.setDestination(17956U);
    msg.setDestinationEntity(120U);
    msg.maneuver_id.assign("KWSOFCGXCLBSKZWGGRJXZQODKXZZMWWTIOXLNXHFJELJGNSIMWVANHHSRGIIHAFRNUFFQYLEYTVOTSQQUZQCKXPIAUYYZUWBWOFHNXVOZREMWDDDASAMQUBYBLZVUVSBWTCIMPOXNEMQOTKEERNTVBELSRHKEDYPKECCSGRMMPVHIYKBVJDTCYUJPDPKFCLJCQTRYUJPIDFSYW");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 60339U;
    tmp_msg_0.flags = 105U;
    tmp_msg_0.lat = 0.09366566177555802;
    tmp_msg_0.lon = 0.6967958306798262;
    tmp_msg_0.start_z = 0.9100147526423046;
    tmp_msg_0.start_z_units = 130U;
    tmp_msg_0.end_z = 0.1927243664261341;
    tmp_msg_0.end_z_units = 40U;
    tmp_msg_0.radius = 0.5755463079839931;
    tmp_msg_0.speed = 0.6561040814752498;
    tmp_msg_0.speed_units = 134U;
    tmp_msg_0.custom.assign("POUPUSCBDKULEPHHYHRXMLWFFEDGALCIJLIWRJSKGPAHADVQIQHCIWLNVOHTYSWKWWCICUNBABEJKGFZGFOGMEUCKJBJNPIYNYUVVNWCYZYXRFZEDUXFNTOSMPOQBPUYKIYBNKHZSXVXREUAVXQSASMLSESSXFHX");
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 58374U;
    tmp_msg_1.lat = 0.5275449861753085;
    tmp_msg_1.lon = 0.26602051165280305;
    tmp_msg_1.z = 0.928785704778904;
    tmp_msg_1.z_units = 190U;
    tmp_msg_1.speed = 0.6346671749768568;
    tmp_msg_1.speed_units = 114U;
    tmp_msg_1.custom.assign("SVFFVJZLTHQGTPUEELFWTTIOZNQQYKETEGMRTDWJWPUOWODIWQBXJMCDYIMHIGXWUEUCQMVKXDCFWYNXCDNNSLJAQFIGQJDETSHIEUNMLKFYVCSZSWYBGRYABEDMBVMZREZNUPKRXASZOLJPZKCSVCPNMPNGWJOYASI");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.5619387948775868);
    msg.setSource(31311U);
    msg.setSourceEntity(55U);
    msg.setDestination(34482U);
    msg.setDestinationEntity(188U);
    msg.maneuver_id.assign("IUCVXWROXQBYSLPNJNWWSEJOZCTPYJTFYGNWUZBCFEUPYAXJXSGGZQXGHNJMTRQM");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 46175U;
    tmp_msg_0.lat = 0.25178385773158973;
    tmp_msg_0.lon = 0.9939885107727975;
    tmp_msg_0.z = 0.03372343446405368;
    tmp_msg_0.z_units = 112U;
    tmp_msg_0.speed = 0.5195372482348987;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.custom.assign("IUEWMHAUDYXFQYMLNKNJXHVUHVMPUPEXYOOQBLDPRGNMDJGLHYYPTXQPBFJIJJABOTYXJAEKCTDRBLKWQGHOJYRFIESTVARZOQAZBSHHRFEDHWCZPTKI");
    msg.data.set(tmp_msg_0);
    IMC::LogBookControl tmp_msg_1;
    tmp_msg_1.command = 108U;
    tmp_msg_1.htime = 0.7493961344623253;
    IMC::LogBookEntry tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 87U;
    tmp_tmp_msg_1_0.htime = 0.3896551780002383;
    tmp_tmp_msg_1_0.context.assign("XZICISIEWYWVNEQLGLIGVKFSZQHUZSGXOEABYSRJZYOIXTUPUWZSJRKPQAMFOXDYCTPBLDTDRMJWHMXTSELPEDZVHXUSIHNLJRYUD");
    tmp_tmp_msg_1_0.text.assign("AGRKVPDZMYCJYQZXUDRBOCYTXMWTZECFZBZLIRE");
    tmp_msg_1.msg.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblBeacon tmp_msg_2;
    tmp_msg_2.beacon.assign("ACRKHGXFVVQBGUQAGYKYDDKYSPBBVFLKXNMILEWCWJYPWFBAGAEOWDPPTBKFQDTSTRVPAJJUODSUQWPIIOHOIDTNNJTAXUAHUZCRWXFIYZOCNEVHBOGQQGTV");
    tmp_msg_2.lat = 0.580888865300688;
    tmp_msg_2.lon = 0.02230083424588758;
    tmp_msg_2.depth = 0.24017660527389895;
    tmp_msg_2.query_channel = 92U;
    tmp_msg_2.reply_channel = 248U;
    tmp_msg_2.transponder_delay = 10U;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.9174708346269256);
    msg.setSource(35034U);
    msg.setSourceEntity(96U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(90U);
    msg.maneuver_id.assign("WZCLYTLBVDZKBBAYRJLYNEVWOGWDOFOXHBQPOETDSGUPTCXPUTSNUCVJWCHKLQFWYHSFQPYCDUZRMDSSMLNAYKLGUSUBEIONEQTMWXDZJNIVOQSIKYLUZIKRYKSIGOEWFJXBKSTHANVJLMXMZLREBPZEXEBQAMBVEJMNXKAVGXCPDHAFQHRTQHOTMBNODETXDKXZVWRGMPCILGIDC");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 64118U;
    tmp_msg_0.lat = 0.29007178195372385;
    tmp_msg_0.lon = 0.8829299352615677;
    tmp_msg_0.z = 0.9033602523723805;
    tmp_msg_0.z_units = 87U;
    tmp_msg_0.speed = 0.839575352163708;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.bearing = 0.7290727136162058;
    tmp_msg_0.cross_angle = 0.5910920274752387;
    tmp_msg_0.width = 0.6764391441680517;
    tmp_msg_0.length = 0.3779481797030384;
    tmp_msg_0.hstep = 0.5170099152236788;
    tmp_msg_0.coff = 226U;
    tmp_msg_0.alternation = 85U;
    tmp_msg_0.flags = 57U;
    tmp_msg_0.custom.assign("SCUUTDVCAJDUGCYTVEUHOSKHBVIWYLCWBBXOZGDRBNRAMRTKATBESEOPSGQQJTKPUWDWISQSOQEZBOKXUBHPFIXQROOFSWMHFXKAOGGOGIFTKHWAXVYNJCDYYTNNZVFLPEIBJJRJXAVLMLXLDIPVNOEYGZZYCZNXEASZPFCTYYMASLCJDHPUWTVP");
    msg.data.set(tmp_msg_0);
    IMC::IoEvent tmp_msg_1;
    tmp_msg_1.type = 103U;
    tmp_msg_1.error.assign("YYAPNAJRUSAGVKPSDOMUEBYOQWDPFAJQNMRJGDRQWFZMSRSHJIQBCLGSKEHXESDZVOCTDGHILNYXINNZHRQASRVXMTZUIATVZZPXQJPCSUPJRKLYSBCDUYGKVXCMUYDUQIZIYHACJVRNBBLOWXBLGWPIGJEYCFHFTKZWKEVLGMDPJXMVLIWRPMOATWTEGFUBOKDEETVJFCQVBHFWMBHEZWTNCXBFILFOGQXKOKFRAUNLPNHNTLXYWOK");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.6057219440076532);
    msg.setSource(51160U);
    msg.setSourceEntity(88U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("KXQFYFLPUISLDXGUPVMLQRVULLJVNWOLOAXASSKGJGFJJFQCDCGPZQGOVKDVKRDZNADWRDZPMCRELZFMSYIWUAOXBVRIPOTNITJYZMHCUJFMBOJPCSHGQHYFYBOZHECASQFTEIKCQKMDJUSGAPIQYWZIELPWXTRYADZBTBCICIEEKXSPRJRNHHPNOALNNTUTZGWKGHNFXZBLKTBMTVXVUYSEFUSRNHQEBXVQJOGHRYXDUHKAECDNWWYMIVOMMW");
    msg.dest_man.assign("OEWZKATLXVUGCOCJOHBMEQVVGSFFKUSVXLQIBDMERUFRDRHSWTYAWWMBRTKCGQARIEYYKNMQSEIJYMTFMJNASVYYFIHPXLNTLZHQSWQJLPPZGTIGLHNSDPERZNDTBEZDEXDZFRWSBUAPLODNMQICIONQBJGCKWAKKAXUGXJOCVGPYHZOADFPJCHHBSRLMWXJOGZXPCLHSOJJWPUZUVKFQETGEXYQCBVN");
    msg.conditions.assign("KGPKWKVXXJSUSVHPSKHECQPXTZERJSNMYSMCTBWJVESWTUHAHYAQMZNXARGUMKLBRFPHSCNPLVPVIMNIMXWZPGQYBBFWVDZVRIKWGBQAEYGIOKTHXGLSYCYTEQIDJYHJUFSLNOGJJDNGGSAXFNAYBMDUYBXUTNYUUFWHQPQIFAJEMRBVIMOQLDOFEWHDLOQRDUARZNITFFCHAWJEPOWKPQEMVXALRKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.24263940038760834);
    msg.setSource(34901U);
    msg.setSourceEntity(159U);
    msg.setDestination(54654U);
    msg.setDestinationEntity(94U);
    msg.source_man.assign("BAUCKRZTMVXGAEQOHJJFJMHOQHUTDTZCFYMIJFYXCAKMVYTQEXIHWOXFIOGTCNLBNNZPGLRMLQPAWGLBUFQCPKINAVXBGBXNNIDEELWBOWWTRROSKOEJLTXKBBHIHDAFPTKLISPPPZYMKHJDGQVVCFHSVZQJNJUFRPORVBYGZUMCNPYR");
    msg.dest_man.assign("SXNBJJFCDNZOSMXIGZGALPDWTEUAJVUKEOAXQBXQUYNNPXDPEWPHUW");
    msg.conditions.assign("DDIJUBKWTGILGHDEPBRHLHPVXUFXIZEQQNKCCWITGLJSOPOWRUYNJDVWQGIZLPPFLXVSMRAOFPVMDWUYHZXSFBEONZBECSUXSEOMHBFORQQHZSQCNYOSGSMBSJMKWRXNVWJAUHKUEIZRBRCKRYWWBEQPMACFKDUCSAZWOVNGTAVOAYEGXFGAVTKGRFHJCKYJURFEYLTIMTMAVIKMULXDAOBNLHDMCZGILLQYPHTJDNNTQNBYQYJVIKJEPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.09454996843614061);
    msg.setSource(50662U);
    msg.setSourceEntity(103U);
    msg.setDestination(2730U);
    msg.setDestinationEntity(102U);
    msg.source_man.assign("ZGEVUTZEUVRCYHWCNHSVYMSMMQFOAZBFPJXLXDACOHFUYRMANQAIRBKLMOETRNZJZGRJJBBQHNFBGGWLAIWYTARXOVYDSDKKIISDBPJOPHRGXMDYCUGMHJGTUHHQGAKTNUVEDZPVQUNJNCLVZTPCLCSIKZKMLAWMWAXXKZPCXTDQNUXFHTYODWEIOQEKBWJFFEOWGYRDVJALQPWTDPRFOQITFEKMVKOLIVBQILCXSSLYJGWZHBU");
    msg.dest_man.assign("HESMMCCBVBROPWIERRCRWNUSADRBEWOCVFSWANFSDGKMOQJUDSLAIYUSYZGDSLIPJKUMFOJNWFTAANPBDVQIRMDTLKVKLQGPYQRTJXBFMZSHYZNTIHMKDZJHZHUOKXRYNIHTNGDXVXXJOFYOCMUYGCPJRKOSLVOBXEGBLBNEXAGUVPIVZDAQQZWBTYBJNHIPJZKWCLJCQTCSICTAYWFALDYWGUGEVHVEQQXZPTEMEXLROPFLAMHUGNWETHFQU");
    msg.conditions.assign("JTKCQDUPIXDALKVRMIVSPYRDHRYQIYNWPHJBCLUGSXQACALZTFNFNRVRRDFBODTIIKMRMVBOFKZENXCHTOZTZNXCGQJEFFBNLUWSHUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.7867784551477619);
    msg.setSource(61620U);
    msg.setSourceEntity(69U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(204U);
    msg.command = 108U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SPQJMDRZBUTAVWYTJOERRBVUNUOMGOBGCJKDCNOFSUZMCIAKZLNBLRLROIUCQLYDEYBXDAKXRWCLXMQPTEVTLUWOWEVGGIZDVNWEYZJBAAKTSFPJBQZBDFENHYKWQLPSGDUIXJFSNQGJTNXWYQGZLMIHZGXQEKMX");
    tmp_msg_0.description.assign("IZLLLKTAFVQMIZXRUBMHGMBWMZMGAGJWUIATLCJPZDCPWODLSQOHZYHHGUFPZBNDVFOQQOJOZAXFREBBXQVEMUPZAKPLRUUUHPRVKYSXPSLBSGFIODCTNCKODYTYAJZQWLINRWTUFAMKEQH");
    tmp_msg_0.vnamespace.assign("TALHOHDHQEFFTNWJPTFBPANKJAEDSXNRDXPGWHGROXNKLYCHKBIEIPBUSINXYFHXVSQGWBGSXCXEZVFWUQIRHMZFWIZJBDGXFVKTTRQESVDOIQUWOLOEGJFTCCYZYOYKMMQYLNSOZW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XZSTOSHZXNVWZXAKDDZMBYJXZKQLQCHIUXDIGMLUOQEVKERGNPBYGDKPCRGFOVJEJAL");
    tmp_tmp_msg_0_0.value.assign("XSUJSBGILRFIADBBTPNNUYUERBMYEYJYOCTOOKXCYKKWBPBAAWY");
    tmp_tmp_msg_0_0.type = 166U;
    tmp_tmp_msg_0_0.access = 227U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CIASDZVVMGTRWEMHJWOLUGSURNQMGZPBXHAAQKKIXAVHCETLAHYVXGFZIMLOOFFGOJJZIDTCDKJBVSXIYLRNSZEFBEHAFIGSCUTERHUXRWYQPQTOFYLSLWHRGCEUVVSRQKJIQHKCQLNNYWURVXDOWKPQFJACCKNGTYODXIZLLDYASFBUNBKYEIPWWRURYAJDBPKCZPDPNJZFJAJIKP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QOEEHOJCJUMCCFGTZJ");
    tmp_tmp_msg_0_1.dest_man.assign("PUHDSEYRVOTMTQAAVKAUHCWZBUECEYGMFEWZTBVFPOLPXHHWIKOVURMWWXPSUBUGOJDBOJXEAYCX");
    tmp_tmp_msg_0_1.conditions.assign("VLMVSNRQZQHLMSEHDYBZSRTREUYWXKLJCWDDIGLKJJFHQJIMXROGIQKRBTIVUXWNUPKLXGBSPCJMHAFXLFUQNYSCPKAHPHUWWZYODCMBGDYGKCIEOGPMPGQVSFCHMAEFTQKLZPLANNYZATOFYVGVESHIQBRWAUAOIXEJWOORTCNBUVD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::StationKeeping tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.44523190197999996;
    tmp_tmp_msg_0_2.lon = 0.654614143161852;
    tmp_tmp_msg_0_2.z = 0.8865046935313278;
    tmp_tmp_msg_0_2.z_units = 109U;
    tmp_tmp_msg_0_2.radius = 0.944700720987174;
    tmp_tmp_msg_0_2.duration = 32551U;
    tmp_tmp_msg_0_2.speed = 0.5511107230900033;
    tmp_tmp_msg_0_2.speed_units = 188U;
    tmp_tmp_msg_0_2.custom.assign("YVLILASDRFVHBTKLGVYQRXHWGTZSPIVNBNNRDOUISXJUPEECWMHQREMXQDPLLXBRTYZMUPFTRDOTARSWMRAFJHSFOAVZNBDUIYSOVPWFSFHZAZMUDKDPBBLGMMIHYNVEWITVZBQEKEQW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.032126903721963807);
    msg.setSource(27277U);
    msg.setSourceEntity(61U);
    msg.setDestination(31755U);
    msg.setDestinationEntity(220U);
    msg.command = 134U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GMGPUWFLKGGRVOTWHFPGPLJODXJTAMULQFEKTJQOPIAHVRHQPMHTCYZBNPAARLGLXUUDSHINZSECUMOQSDUQRNEFOJZBWRFIXDGHJQBZZFRSTSHJYKZQVKCYEAVJFZASGYITNFQDSOIYYUTIBFWIJDLIXTHAUYEZRQWDZNOKCXOESSPKNWWCRBBWDHLCVVXVLCMWWAXKCKEBMHBPRTMRMKOEEICYUVEVLUGBVQTNJP");
    tmp_msg_0.description.assign("ASXJSEPPXYOGAJTWOEALHWQIJQDXQKSFJDWEFOUSIZCVHJKITYZFMONQWYPFHWOXADNGUTBTVYEFRDYRISXTCEKNFMKOVIXNMIAKPUUQBNZOUYCZDEXILSAYWMCQCEDBUIPYZBVRYR");
    tmp_msg_0.vnamespace.assign("HALJZWDDCSCPZOSNZVUBUHJQPGBBVSGLLAMKFJT");
    tmp_msg_0.start_man_id.assign("MCXGVFEMWWMQELJJSXXLIOHQEMBLCVIQNNMDIVFTDPHSGIJQD");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("VURIBPTTBVQKEXSRKHMQTLUOLBGOASDSLGBEYKJXDRYDUVERAIPYOXYQVMYLVFEUWVSDPSAWLXTCYWQKKYMWGBWAOFYOTZPZCJRTRZYPVBNCOZBJNUNHOKKQEDPJGAPBJJMX");
    tmp_tmp_msg_0_0.dest_man.assign("NQSNLMYLTRLJOQL");
    tmp_tmp_msg_0_0.conditions.assign("AUKQUIWZFBMAXLVXDMHWETEXNBYYDYNJSPQJKNSKNNTLZDESFGQMSQDUYIVELHOVDWANORSBHAVAIGRLPEJCVLCNDBRQSMVZGHPCTXLSBEGZQMGISISRCAIKJJOUPOKZMTYUETQCXARQKCZZUJDUUZPVFMTLXGSBFLGLWACATQTBTMNIKXIDCOHJYFWYPRGDRMJFPBHQLYGWNPVJEUFRIKBX");
    IMC::EstimatedStreamVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.14604069234899186;
    tmp_tmp_tmp_msg_0_0_0.y = 0.16860908528302887;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8436088324351029;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::LinkLevel tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.414599462595474;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Map tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id.assign("OSIEZJDXJEFSOOBHYTULXBBEADNWSDAZFWOMXGFWRFSTRRKGVDHUVCKTZNTMYGWDRYSMPIGIIQSZLXBUFAOKIWPVDCQYMEKWKXOSIWFOVRNSMRUBTJCLQQXIXBN");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.5599732845158306);
    msg.setSource(7752U);
    msg.setSourceEntity(136U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(153U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HLIUHYNVML");
    tmp_msg_0.description.assign("GJUHDXUKBMFZXSRYNQCEDUZMSBQWHXHBPBMDGFHHASQTWOFCBQZWBKLMJBPAIXZOLJIVWJFCZXYWRIMLHSSXGQOEFDWOPNJRTUKMINCTECHVULTCSUIWPDWMJAMALPOSRKCXNWONEDZYFNTEOGIFMRVRDQXLCETZUCFIOYARTUYKDKKIVLXSRYUYVPEECUOPKFATLVJMIKQOYGHLGPGXFVVNYHSBEWLGRHBV");
    tmp_msg_0.vnamespace.assign("SSADKQSVYBWGFEHONBLUUOEHLRJSCRDDZRCYXMASFPUEKVJYHNNXVMBAIKTNKJXXXTHDYFTREIEKNZFJPPLLTIOZNFDZJHEKAORYVQXIKINLJKFNWMJRFBWHGGPJDEVDTQVTQPQTNADCUXOGMVWUMOLRZBSJMAAHGYGFLFTQOAOVSNWCQCZUPBBWHIFULMSOCUGWIJQCOXMSDWWVLECHIZXXYYARQMVKB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PCWQGNIPQHKSGEKBNSZONECWJTQLBL");
    tmp_tmp_msg_0_0.value.assign("DFYSEIXJGQKNJTBUHXANWM");
    tmp_tmp_msg_0_0.type = 136U;
    tmp_tmp_msg_0_0.access = 188U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PHFYQPDTYHTODOTYCXQQFDOMQEHYMFEZELAGLWVAIGEITAAOSXIKSJUTPXUHPIMFCGJRVHPJQEKGZNUDLBSGJRAFHXPGWBCYIXUUYNKXNVSFINPZOJMHLBBJXZYQCULMLGJZRGZCOREPLAJRCEDGPXDOCVCVTTMNPZZBKRFAHLENRWMWZFMOOBUABVAUNDIKEIQMUWNDSFY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("AIJDLNLHMXEBDMKNTSFSCIPWCFSTVJRKOCQKKUTDLDQVHLEWPJZRSKGUNNXXIADGKNEBLQBVBGJOVYWNESLOIBMVOYKTBWJIOPDFXPLMNRQFVHCTEIBMGDAGRBCSVZKQUGELUVJRPVSIPSBU");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9389055102579994;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8418865558623284;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5596822298810741;
    tmp_tmp_tmp_msg_0_1_0.z_units = 24U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.5406678713682448;
    tmp_tmp_tmp_msg_0_1_0.duration = 42784U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9618339484790068;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 203U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DJQKIANUKBUAVQPWOKLRPMPNMCZEMEUUXGPJBOHGFYZVKSOZHLVODHNQYGPXZQOJSAYZKBZVGETIIPIVSFKYWXFHEFYAOIJJWZQYUHNYJYMMXXPTKHOHSCNETLJTTXOFRAPDKBVDRAQGCHWCEEWSGDKGIDHXQFLWWTAFVBUDVQYFWUCWARSTMIZNPILMLLQUUCRRJMXCREVQUSIGBZCWBALS");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Calibration tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.duration = 20288U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::UsblAngles tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target = 56536U;
    tmp_tmp_msg_0_2.bearing = 0.8722453164389635;
    tmp_tmp_msg_0_2.elevation = 0.4744006627523091;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.13466814307585218);
    msg.setSource(50528U);
    msg.setSourceEntity(156U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(113U);
    msg.state = 7U;
    msg.plan_id.assign("MTXLDFNYURSHITFGOWWWBUINPTMDZJUCASBAUP");
    msg.comm_level = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.9824930533944146);
    msg.setSource(15758U);
    msg.setSourceEntity(65U);
    msg.setDestination(18110U);
    msg.setDestinationEntity(194U);
    msg.state = 144U;
    msg.plan_id.assign("HMBDORLDQJWISLKMVLTOSULGCLDDNDPCDBFFMJWTUOSRQAESKNGGJJKPZVEAFAHMCOELOZJPOQMECSXFXIDFYXSJOEGYDTUMQICTPRAQIPHVEYWIBERKUWSIKXLKQTWFUBCTOJNFGUPZZMUVNNTYNH");
    msg.comm_level = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.3797245886298011);
    msg.setSource(36361U);
    msg.setSourceEntity(37U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(60U);
    msg.state = 42U;
    msg.plan_id.assign("DGAPEMCYLOPNULNFCRTZXHDOLSIKSUVMIFNBXRXTFLCAMDYBGIGHGRIHJTOWFPKJMXKKRCVJPDQSMQFQEEWBTAZUDOECXIBFOKXVVLBMRBDNUPUWXVIJHJKHHSZJPRAXWDYAEQUUHYSLDQPTYILVWVUYNTVRXQRGNYJBUGKHOSNOREGTHBNF");
    msg.comm_level = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.5736813288985817);
    msg.setSource(10491U);
    msg.setSourceEntity(199U);
    msg.setDestination(37769U);
    msg.setDestinationEntity(252U);
    msg.type = 54U;
    msg.op = 81U;
    msg.request_id = 33311U;
    msg.plan_id.assign("CRCCINOJGYIJYWDGNLBEBQEQSQYPGGPIWBCAUDWWHEZWLTXAZIBBUSCHOAGWGUOYBNEJZZRGNCUQQPFLPYIVMAROBKCAUBQATDZLMKEHVTSDOSXKLLIBVDJEJMCKMGKLONXTHPYTYPUDHEFMSXTGRHJJIHTRQOMORVVZMRKNRQCTSHVEPHRLWJXTNKYFUMFXXSXWJHDOXAFQZTJVLZIZFFMWZGB");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 184U;
    tmp_msg_0.max_depth = 0.6284055158328619;
    tmp_msg_0.min_altitude = 0.9309933961094368;
    tmp_msg_0.max_altitude = 0.5914148090322409;
    tmp_msg_0.min_speed = 0.43135558804040985;
    tmp_msg_0.max_speed = 0.9901771761155487;
    tmp_msg_0.max_vrate = 0.5404817928650469;
    tmp_msg_0.lat = 0.3627425288053536;
    tmp_msg_0.lon = 0.9791796990762367;
    tmp_msg_0.orientation = 0.7495795019218833;
    tmp_msg_0.width = 0.7516024512347367;
    tmp_msg_0.length = 0.47831826807629285;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PSHPGMOYARXZGXOMMYRDSLTWIRMECCTEYAMGSJPURWFXUFBJLYLQAWHHNBRGJXBTGKDJHCLVCMQETQJRFUZQBQOFEPJHPXWSXDASIKCFGMOGJIUZVVHFOIJIEFGZVHTWXNHEAKWMONDIGOBDKKMBLLSOQDERPLUBPPMVZZRWRDNNWYLFFBDPUINYWTKXQASEJGPCTAOZHSSYKUVJVXINABQDUYCDVOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.8027268589635186);
    msg.setSource(13241U);
    msg.setSourceEntity(27U);
    msg.setDestination(53669U);
    msg.setDestinationEntity(207U);
    msg.type = 231U;
    msg.op = 3U;
    msg.request_id = 63964U;
    msg.plan_id.assign("RXUEFXAGWKFHOJDMNMPDUJZMPAZTTORYIJYDSLTPWOQMQOJQXNOTB");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.5061254195493597;
    tmp_msg_0.lon = 0.674274449149285;
    tmp_msg_0.z = 0.6909636292972338;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.radius = 0.49388475177823354;
    tmp_msg_0.duration = 52247U;
    tmp_msg_0.speed = 0.27793619914869006;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.custom.assign("KDJIPVMWGWDLBWCXOFNQZGOPMHIOEHKMCVMHVURETQTIUZSBQFWTONXJWRZAGDYYXZMCQCDZAORFQPFXOLOIEEUYIRVFZYNNXJIDZGDECXSOJPUNRPULMIWBHFSIKWN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IOZVRFTUNRYTMDSVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.007609200228090307);
    msg.setSource(7054U);
    msg.setSourceEntity(198U);
    msg.setDestination(17238U);
    msg.setDestinationEntity(246U);
    msg.type = 220U;
    msg.op = 252U;
    msg.request_id = 37977U;
    msg.plan_id.assign("RHZXQBHMKRACECNULGUKPGXRYUTCYVPHUDVIJAIYAGADUDISYMSVVNTGURNYPXKHUZUSDITDVEJCFAGZNTWNCPCBEAFVQBSFRWHKSUKFGPHBXPSHSSPYJ");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.32340238557427103;
    tmp_msg_0.reason = 181U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OCNDFKZWXJCAHTVMXEDYHGIJZGPWXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.9694067892170982);
    msg.setSource(13071U);
    msg.setSourceEntity(9U);
    msg.setDestination(31451U);
    msg.setDestinationEntity(71U);
    msg.plan_count = 46639U;
    msg.plan_size = 2397178189U;
    msg.change_time = 0.42589937855732507;
    msg.change_sid = 65515U;
    msg.change_sname.assign("EKJDKTLNQKJYZIJQEZSFOZNQDHIGVSJPZYOXENIAPPSXWLHDCTCRRBBVKORMWMZMOIGBSGDQNWGOCSJNPDAUYUNBTAPNREPPJHLGRMYRHHSGWIVUAFROBTZYQRHJUDGEFSCDMXKMATXCIPBTQIEFUBDDHOTIVUXRNESUAYJFWCZPTVLVXLGWTUOUMWWE");
    const char tmp_msg_0[] = {104, 61, 66, -1, 102, 81, 53, 7, -1, -42, 107, -45, -91, -108, 101, -52, 16, -62, 30, 17, -34, -38, -84, 105, -34, -128, -86, 108, -13, -44, 9, 13, -121, 48, 7, -112, -66, 79, 48, -47, 60, -87, -13, 11, 37, 8, -65, 80, -7, 32, 111, -54, 67, -25, -48, -50, 96, 12, 9, 23, -57, -91, -118, -23, 57, 69, 120, 19, 6, 106, -45, 40, -128, -100, 28, 54, 23, 103, 37, 45, 65, 58, -22, 90, -5, -102, -82, 75, 80, -107, 2, -51, 3, 43, 25, 125, 79, -53, -95, -7, -2, 1, -22, 119, 49, 75, -65, -51, 88, 78, -30, -36, 49, 49, 47, -53, 33, 40, -16, -61, -8, -55, -113, 60, 112, -103, -114, -27, 119, 80, -86, -35, -41, -24, 58, 51, -13, -108, 88, -26, 114, 4, -107, -96, -26, 61, -13, 113, -115, 31, 4, -92, -114, -124, 30, 59, -54, -104, 11, 64, -86, 111, 20, -69, -62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JDZZPIHKHCUXBXMRQISIWBKXDPMFHGOZHESOJABKDUAAMYQHZJDEMAWAQNRFIJVKKTBBVYBSKYUNNGDJQOMGGBZSNGCOCIJFVDCEONFAFZTUHOPLDHUGRRMYEGJIIXZYGTWWLRMTYJBNFFNWPOLRZXYSQBXCNQPGXPSIFFLVSVPAEEMWTLTBPNWQGZYACQOXKLKLYRXTCHUJDSCJRVRPKIUAOWSMRQTYLDLUEHCPFLKUHWE");
    tmp_msg_1.plan_size = 14503U;
    tmp_msg_1.change_time = 0.276368127705128;
    tmp_msg_1.change_sid = 25519U;
    tmp_msg_1.change_sname.assign("DXJMNQGIDLYVFLJKEAYCMEWGTGHLBOUVHICCSWQGPVBIXAPKWVDUOWQNUAXNEDNVJUZFARFGBYHACVRMIRQADOLTOKRBGRTMRUSSZONKBOLPDCNWIIGHVPTMRWZLSFCBZRDJSFXFCJNDECMBCEJACMAKBTYPOH");
    const char tmp_tmp_msg_1_0[] = {-40, 34, 124, 56, -103, -95, -97, -69, 121, 98, -114, 73, -93, 71, -11, 121, 80, -62, 25, 54, 58, -58, 22, -44, -4, -125, 89, 7, 36, -95, -114, -33, 87, -119, 38, 54, -15, -55, 124, -87, -29, -8, -8, -113, -31, 56, -78, -24, 95, 95, -2, 45, 76, 17, 40, -17, -42, 114, -13, 75, 24, -46, 15, 39, -110, -87, -125, 24, 107, 118, -8, 84};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.9732923458490613);
    msg.setSource(28766U);
    msg.setSourceEntity(134U);
    msg.setDestination(13194U);
    msg.setDestinationEntity(83U);
    msg.plan_count = 62506U;
    msg.plan_size = 2833991576U;
    msg.change_time = 0.9649718663333341;
    msg.change_sid = 60978U;
    msg.change_sname.assign("YGANDKTXNIBLMECBPAEEAUVYDKQRCSLNDQYKGFMUQRUCFWYTYXXJEZHOCVZMDGZXXYZBCJDUIHTAKXZTUAVQANMEMUODSKQJMOELPAGRFPYVXULDKESGUQEPOWLBROSWZNCQNICFFLBDEIFPHBJYISZBH");
    const char tmp_msg_0[] = {51, 110, 103, -45, 91, 99, 37, 92, 12, 0, -53, 90, 32, 12, 34, -116, -124, 54, 6, -42, 7, -3, 51, 50, -27, -92, -47, 115, -9, 22, -72, -108, 21, -85, -1, -96, -109, -23, -45, 81, 125, 58, -87, 78, -128, -87, -103, -6, -107, -17, -80, 117, -116, -68, 59, -3, 30, -54, 7, 118, -37, 122, 57, 58, 105, -23, 76, -43, -97, 98, -62, -49, 91, -100, 95, 13, 21, 42, 34, -118, -16, 7, -43, 36, 37, 30, 99, 14, 95, 60, -115, 0, 82, -91, 35, -77, 112, 19, -73, 50, -65, -81, -82, -18, -110, -62, -17, 65, 5, -56, 119, 15, -73, -90, 11, -54, 23, -6, 120, 109, 47, -46, 114, 89, -49, 25, -66, 80, -33, -42, -10, 70, -9, 85, 44, 96, -79, 58, 17, -13, 25, 27, -90, -80, 7, 57, -16, 101, -70, -80, -63, -124, -6, 17, 84, 55, -61, 3, 124, -67, -17, 100, -54, -126, 90, 66, -94, -6, -52, 121, -124, -6, 105, -126, 79, 56, 102, 73, -93, 115, -59, -105, 116, 91, -61, -70, -68, 119, 47, -126, -92, -94, -70, -67, 45, -62, -45, -91, 118, -27, -61, -101, 44, -77, 28, -33, 40, -50, -42, -66, 121, 33, -98, 103, -124, -90, -88, -93, -3};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YKNMGABLMSEFHOFMXDXCXCZGRNLVKAIMINDOGBPTNCHSRKMIQSGMCRTMNRKBCBSTULUFDIPUOSFCPDNPEKYICLLRFRFAWDOIIPKMADELWPFEATQMQOQHIVJAKTFGGYZXYFAQWGLWYJWPSXZYUXJLVPDUIUFPXEKHWLNCVWBEVJOWWDXYMQWBSYHSHIGDHQTRZAZONOTEJTRJYRHSCQTBKZBVUZJDHVVGGAVKENUUBQETPVZAUYESH");
    tmp_msg_1.plan_size = 37054U;
    tmp_msg_1.change_time = 0.2092685160226968;
    tmp_msg_1.change_sid = 35135U;
    tmp_msg_1.change_sname.assign("DIPSPLZGSBXZLVJGXUGHUZPGAKWRVYTINCJTGPMLNLJQIGXPRMOSDUFRNCZVOVTCDLLDKBTSYLAXDMYTUIKNUKHORWFPEIXEVIONGZKDHCMHTXOCJSEKJEBOTGETWBTWHUZLVUMGSBCVRQFSLACMASQUELHJZKHDYJWSQQOYBPAREFACYQDJENYXUWBWRTFBMNHFFIOZZRKAOGYAKSFDCQPQUOBJQVVXEXIWIHFAIMNRMNRPVHBFDWQACYJMNK");
    const char tmp_tmp_msg_1_0[] = {97, -110, 17, -8, -82, 80, -104, 30, 64, 74, -14, 85, -79, -55, 70, -57, 34, -81, -100, 73, 115, 52, -103, 24, -109, -41, -34, -52, 63, 56, -60, -33, -111, -118, -49, -2, -42, 42, -104, 102, 41, -118, 18, -17, -60, 122, 10, -96, 44, -30, 28, 27, 53, 38, 95, -33, -92, -3, -42, 23, 110, 89, -50, 126, 54, -14, 118, 77, -113, -22, 15, -2, 50, 83, -112, 113, -124, -91, 87, -76};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.8564857091030855);
    msg.setSource(34687U);
    msg.setSourceEntity(65U);
    msg.setDestination(28435U);
    msg.setDestinationEntity(155U);
    msg.plan_count = 40739U;
    msg.plan_size = 3717714518U;
    msg.change_time = 0.9448516255666756;
    msg.change_sid = 41311U;
    msg.change_sname.assign("OYRQDSMHTFTOFCPYFAZKNPHRPISEUFPVNKJMNXESWLDBPOAVTSQUHVKIQBIRJHQYUQKBFEOHBDAWYJQIAGXCYVCHKVYTNVCAEW");
    const char tmp_msg_0[] = {-34, -56, 49, -44, 85, 23, 55, -56, -40, 10, -8, 38, 30, -95, -101, -88, -78, -39, 87, 17, 124, 1, 88, -106, -111, 8, -4, 101, -31, -84, -28, -23, -5, 49, -116, 53, 81, 121, -83, 59, -32, -4, -124, 6, -73, -64, -56, 66, 61, -17, -40, 21, -112, 94, -118, -107, -65, -104, -66, 64, 75, 3, -5, 77, 79, 82, 103, 21, 73, -121, -16, 5, 25, -94, 75, 82, 59, -110, 29, 76, -18, -77, 23, 44, 14, -106, -65, -81, 48, 13, -53, -127, 33, 90, -67, -58, -50, 39, 52, -61, -23, 14, 14, -51, -109, 44, -99, -73, -91, 47, -45, 114, -4, -124, 99, 60, 22, -82, -58, 76, 104, 125, -100, -2, -99, 104, 32, -45, 91, -45, -57, 58, -66, -84, 97, 12, -62, -127, 101, -79, 120, 43, -36, -72, -99, 86, 80, -127, 124, -45, 102, -4, 85, -89, 52, 6, 85, -125, 100, -101, -109, 119, 86, -38, 97, 12, -50, 16, 4, 49, -84, -80, 84, -111, 76, 86, 65, -11, 0, 27, -73, -68, 65, -107, -58, 107, -97, 98, 21, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DMQOVITOOYIAGHXNGLDVCYLWHNWSPBSFZDYGYXPVVXDXJLJQZWBZWKAVPZGCSIZEUUFGRSOEWBVEXEDPQYFXMGCXLORMFTCIOZUUQQKNRETAATBNPRQJBCAMSHSCXQJGMBUMVJEMZGTVOANJQKPXEJHINFAZNYYCLMOTKRTLZWRMERBIULOBKSWECYRYHTZBKFBKPSNGUTRFWPCFVUKLOQIHDSRKCQEGVHJDADPUWM");
    tmp_msg_1.plan_size = 29687U;
    tmp_msg_1.change_time = 0.3459119754026986;
    tmp_msg_1.change_sid = 6970U;
    tmp_msg_1.change_sname.assign("SLLWELLRFMJAWSROCBZUDYJKPTPUZOWPKRAEZAGDUWLAJGWQKBVOSQZFTIH");
    const char tmp_tmp_msg_1_0[] = {88, -25, -86, 34, 37, 120, -13, 49, -73, 119, -29, 40, 71, -64, 103, -4, -127, -97, -118, -83, -25, -103, -45, -84, -90, 105, -92, -115, -128, 113, 18, 28, -54, 56, -94, -100, -86, 2, -96, 21, -107, 54, -2, 93, -112, 116, -51, -14, 49, 76, 117, -96, 30, 40, -111, -109, 122, 16, -81, 57, -48, 44, -10, 99, -127, 94, -9, 87, -91, -102, -36, -38, 120, -39, -18, 44, 96, -124, 13, -125, -115, 11, -93, -73, -109, 79, -99, 47, -59, -121, 95, 117, -72, 122, -86, -87, -63, -49, 1, 55, -89, 46, -94, -117, 33, -105, -2, -71, -57, -88, 88, 26, -109, 102, -97, -64, -64, 96, -92, 55, 40, -99, -48, 48, 87, 103, -32, 116, -103, 103, -65, 105, -114, -25, 74, -34, 109, -108, 90, -72, -69, -108, -90, 60, -61, 38, -126, 0, 76, 61, 42, -52, 54, -61, -89, -58, 115, 5, 100, 10, 6, -57, 4, 12, 94, -84};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.31312623378207427);
    msg.setSource(25775U);
    msg.setSourceEntity(7U);
    msg.setDestination(16540U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("YEFDWDISMIYTFBCQGZMBSZMPRHTEQVKBTUBXLGBGPERLMRHLUCNZIBTIKJVZKQAKUJEDTDNSOVWNXZVRVAWKJGDJKTCFOLSJMEUAGDBNNKQYCFDIYZBYYLWCNTAJZHWYHOGJ");
    msg.plan_size = 60422U;
    msg.change_time = 0.6275972558972691;
    msg.change_sid = 27238U;
    msg.change_sname.assign("HPVSIMIUPNOUZHSOGBRIAFDPOTXFHBIMKVTQAMTZLWIAK");
    const char tmp_msg_0[] = {38, 9, -100, 84, -79, -98, 109, 113, -103, 37, 45, 2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.6733807605816808);
    msg.setSource(2087U);
    msg.setSourceEntity(65U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("HPHJAPUSPZXYBCKRUVLBKTGPCISJHBXZMKQROGDUQPEYZXSPVNGLFEXZWSTYEGRUTGSTKLELTDDYEPVRNXWCVJLVAJYPZHVXPGAQMUMXSROMIVFZZDABQDOTXWNEDTETOWVKKLKHXZAYZSBAFQCGALMLNIHRFFFNPSQHULIWNJHBCIFMGBCIIIDEJEUVRMCHAAHBWYQKRUOJXYIILMWQCMNDCBFJGMBQTCUJKSORANEDRFYWFKNYUQOSO");
    msg.plan_size = 39360U;
    msg.change_time = 0.8282067742362769;
    msg.change_sid = 62914U;
    msg.change_sname.assign("RBKQUAMBZXYHYLIFSDVZFDUWPOWWCJIULESELORMZEVJDGWMBGXKVKUQPTOCLJQMHZYGLRWTPRFEMVJWVZGQSUYISMLTZNVKHEQLEBBXYNNVHLOWFDUYULTDWETPUOAJXHSKAJFVGHPXHOAAHQCABAKBNCRLGUFRTIS");
    const char tmp_msg_0[] = {-72, 122, 2, 122, 110, -126, -43, 117, -18, 10, -44, 101, 55, 51, 32, -127, 23, -82, 18, -88, 26, -89, 36, -33, -66, -14, -76, 69, -99, -23, -107, 7, -3, -18, -32, 42, -86, 0, -24, -75, -126, -59, -43, 18, 72, -69, -79, -62, -17, 44, -57, -63, 23, 78, -128, -115, 6, -107, -26, -57, -93, -61, -111, -99, -8, 51, 63, -60, -118, -11, 57, -73, -3, -74, -10, 88, -121, 67, -37, 61, -48, 7, 116, -106, 2, -56, 102, 81, -74, 48, -78, -56, -103, -32, 116, -19, -2, 112, 92, 113, 25, 42, 125, -108, -112, 58, -88, -34, -75, -110, -4, 1, -15, 126, 3, 30, 43};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.34335621083906354);
    msg.setSource(1707U);
    msg.setSourceEntity(232U);
    msg.setDestination(10785U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("SQGFKESWADFHDHIUTIQVPQOEGCXTZBNBJTICBNERHWKBXMTPZEWJRQZAASWBNWULEEGPRIATHBTFIVYZXLJFYFZMQSCZYIDFJDUDZNFMSAQAZVYMNGCVLSCOGRVDDARMVJWGDIGUNGPQVVUWELGCCWTXVBLRYEFKOAYZQME");
    msg.plan_size = 65288U;
    msg.change_time = 0.6661380093571161;
    msg.change_sid = 63635U;
    msg.change_sname.assign("QFXCINVUWGGWKMLGLEZRQZVTQKCXYNJJCQLEPYYILFAPKGWTEJGOSCOYSBHDYAJPXVRPXFURCTHELXADWCUIHOGTXMWBJOSNORXHFLYHFNZYJTRIAJAKGDFSWPHVTMQLSQCAVSTVKWMWQWDZZNBSJGGNFZUI");
    const char tmp_msg_0[] = {26, -106, 102, -119, -53, 70, -97, -121, 28, -89, 25, 99, 79, -92, 91, 109, 47, 50, -16, 110, 47, -69, -72, -62, -48, 0, 1, -93, -127, 119, -35, 3, 56, -84, 107, 99, 24, -65, 12, 17, 62, 46, -20, -37, 4, 111, -1, -57, 65, -2, 34, 50, -98, -54, 41, -18, 15, -127, -47, -6, -10, -103, 85, 40, -109, -123, 100, 61, -50, 91, 84, 65, 77, -83, -4, -31, -10, -103, -74, -8, -102, 45, -59, 54, 13, 72, -8, -122, 7, 103, 38, -122, -105, 49, 3, -115, -22, -48, 46, -59, -114, 86, 33, -77, 27, 71, 122, -64, 84, -96, -118, 105, 25, -88, 42, 29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.6601707715372414);
    msg.setSource(2494U);
    msg.setSourceEntity(188U);
    msg.setDestination(24028U);
    msg.setDestinationEntity(44U);
    msg.type = 51U;
    msg.op = 198U;
    msg.request_id = 14564U;
    msg.plan_id.assign("YUMLKBWSBGDJPWAFAPJKHKIDFYARHLTCYGXQDMQSNBYTFHOVLFHLUUEFPFYSZUMABXJZGBQFEQRVMZCTYBNIZJSYPVWNLTNSKCDNCJRRTBJUDJ");
    msg.flags = 2090U;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.8242072420835167;
    tmp_msg_0.x = 0.835914997738292;
    tmp_msg_0.y = 0.7229417247312172;
    tmp_msg_0.z = 0.541668429097897;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ADSTRZSJKUJLRVHCSIXCOVSZECNUFKDBDTUVJPXCMCOBWRFGODDAEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.3654457098602828);
    msg.setSource(1673U);
    msg.setSourceEntity(174U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(23U);
    msg.type = 144U;
    msg.op = 97U;
    msg.request_id = 10114U;
    msg.plan_id.assign("AHJAGBCKBXDXNYIEEPOWMAKKQMREIOFSWDVSCKIUVXECRBLAXNZLVACYSNVDUSDFPFBNSIZOSGBLBQYBAUMROSHUPYWVIHXCVLYAFBPYPPOFITZEHPRKYPJWBCHIUGVCTRHWEMR");
    msg.flags = 52599U;
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("COFSRWEPVSOKWGLIWJWODATBJXMPXTJHNUPMUFFESSLOMXHQUVAFWZUJDLDFWGCIPNHNAFEKDQOCVIHYWRBGZCWQCOYCCPQOYSQVFANGVSZOSFLGQXEZQHHRTMJMNNJINDYKXGLJRDUHZJELJMOPDZUVBSDWBTEYBVRAPLBRGBEXYZWAAHIKILFUVKIMKCKKENAKMXRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.9456343892948718);
    msg.setSource(59038U);
    msg.setSourceEntity(111U);
    msg.setDestination(4504U);
    msg.setDestinationEntity(200U);
    msg.type = 151U;
    msg.op = 193U;
    msg.request_id = 65254U;
    msg.plan_id.assign("AHZLNPSOFWCIWQRDMHSOGTZMZXVAJRVLDGJPKKUJAHD");
    msg.flags = 6369U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.8485863490591278;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DZVZTOFZPAPNJPHEXINNFSQJMFKHNWSBMDORMYOKFRREWECXXGNPOOZYATMDGCASRIKYIKDVMDVGURWHZPFJJGGLSHLBPTSNUQSMBBJEAAWRLSINMCRLOAYQVRCAJACIKDFYQJGHKCNUBTDELQZMUWSTZKWWSEFTCITMLYQWDZQFDYHLEIUXEUUXOTWHCVVPJUQXFICWJGNBIUXFZAGNBILDPLYMOLPGKZCEBVEOQXYAQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.9401086557741436);
    msg.setSource(3806U);
    msg.setSourceEntity(63U);
    msg.setDestination(27989U);
    msg.setDestinationEntity(238U);
    msg.state = 184U;
    msg.plan_id.assign("XTKENBRWIFGOKEVHWLISQUMJPCCMZGNJGKRGAACNTQLMPGBXAUPHEHHRSMZOAAPXVDYJYCJNBHIXZCDXOJMNGIJBYZCTQPPKYAXPPTQCRTOWLPLG");
    msg.plan_eta = -1584232925;
    msg.plan_progress = 0.2555448414185091;
    msg.man_id.assign("BBIOOMIJEARQHBKSFHGSYMDOWYJVGZUMYUFTZKWWWZRHFMSQJGZUGKNYHAYLBDPLFCREGJSZRDVOHICTDJAEJPRLQMBVXNQQXDNINXOLHEWGCGGKQCNKEJOZUZCOSRIIKTCXWCIHABVHFTKBEVVMNJUXFDZSWQSHKUYTQTXQOPWALLXELPPKAPXZQDMAFJBDPEPTVPBRVCKXTAIS");
    msg.man_type = 21914U;
    msg.man_eta = -40669485;
    msg.last_outcome = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.01469287130968211);
    msg.setSource(23334U);
    msg.setSourceEntity(220U);
    msg.setDestination(47730U);
    msg.setDestinationEntity(40U);
    msg.state = 20U;
    msg.plan_id.assign("TPOZILZNOLVZXMJTXHPICMVGAXKOCBYWORECRKFIYLAJMRKNTQJGMNWPDBPCYALWEWWUYTASEVEGCELXPUFVQBSSFCGVBZBQPFZLZHDNCKIMGSPEQNBDBAXSNPWTHYIIWFXFGKXGMFUEQCCUHDJRPVZFZIUDWTHVIONUGVFBHQGIKWDJOLFTUHYRBDA");
    msg.plan_eta = 1596319528;
    msg.plan_progress = 0.8291519014760335;
    msg.man_id.assign("QFCOOWATEXVMP");
    msg.man_type = 19978U;
    msg.man_eta = 1388928354;
    msg.last_outcome = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.5234514319336745);
    msg.setSource(12433U);
    msg.setSourceEntity(6U);
    msg.setDestination(25800U);
    msg.setDestinationEntity(188U);
    msg.state = 121U;
    msg.plan_id.assign("UYHBGHDNZKLMCMSOHMTTEYNLCQQBAIQHDYLVLWXWWNJIFGWDKEDUZSUFEQMAJWETXFHUJOBHDFFWACXTXULULZGNNKSOLQDGSINYRGSNAUVRUJGZPBTEJBXELVHVAURRB");
    msg.plan_eta = -934453704;
    msg.plan_progress = 0.7320264330837057;
    msg.man_id.assign("GPJDMTZLSMLTOBJEWHZRNQNLUGUKYWNODPGNHEYUQMBWMOGFNQLJGYNIZXIOWLFQHUZCJOGAEDXKIFHWJDXULTTHHBAZFQIMYXKIMQHLCAWYZDHBAWJPSPALXBMKGKCVTUFDTNPESYABWOERKIRRINCHSDUSGUQSBVRABZXG");
    msg.man_type = 61544U;
    msg.man_eta = -223773418;
    msg.last_outcome = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.11596039160395588);
    msg.setSource(15165U);
    msg.setSourceEntity(241U);
    msg.setDestination(20247U);
    msg.setDestinationEntity(119U);
    msg.name.assign("HVKTWMCSLKFILWGIMIYBJTVTGDCGOBVKMSHSNRMZJWWXQAWKDHLLYCTXPOZRCGTUFSGSOHMXZUHOGIKECTNECFAJQRFUFQRLUUHWGSUDIMWJKLARCCAVJZKZBPAQAUQSMJVE");
    msg.value.assign("KUSUOEBGWIRYXQUHYGDUAALFPPSNPLLJZLHUYCNSVSIISVRNRPQWKNWGZVCWDNWOYZQIOEN");
    msg.type = 188U;
    msg.access = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.13622578487428216);
    msg.setSource(3350U);
    msg.setSourceEntity(144U);
    msg.setDestination(60476U);
    msg.setDestinationEntity(192U);
    msg.name.assign("IDYYEIYVDSBNRQPSPCZFEULRLGNKMGEVCCUARWHCCXFTYYTEBERKFUKIOBOAKZRAVNMPFVLUMXPVWVOAGIUDJKSRQZQWJBQKGSHCWIPOUYYMW");
    msg.value.assign("WVUPILOUHHZGWOUMPRVSOKOJWLWPOPCSXSHAFJXUCKEKHNYNFROPLDTVDSLBAQWYQLZMSZLZNDAKRAZSKVVCUYQKBBQBKFZNCSQXDVREZFJBEUGGMEMLIGTNRUAOWINWQLVPOXWMHJHCTODXCWDJIVKXBDRPAZCCJRJJLHIQBNOMTECNTVEYYJGYRQEWYTXAHFLHGSITEIGEXFTYRSIKNMBHAPFJMZXGNKT");
    msg.type = 14U;
    msg.access = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.9749860059083538);
    msg.setSource(17613U);
    msg.setSourceEntity(70U);
    msg.setDestination(2308U);
    msg.setDestinationEntity(34U);
    msg.name.assign("UYVABSQAQMJXAIJXRASPFIQNSKCVWKVDUKECLZZNDHJSQZICBZYSALKMUWNQBQYFJISORTFXPBEXVQJHNHEVMTOBHEMNUFUTJWFLOGTZODCDWPZFRMDIODSYYSXBTGUZYLGAELFNEKDECOOGTTEXHGXWUZAZYVLCOWQLKMOMPTGAWPWXKCJGUCRVVCRBHMTIFRRIXIQEPVGGBU");
    msg.value.assign("LPWPZHRTAPCVDLKTPEWNOCPWPYRNIYGMMOFZJQQEGKGRCXUGTVSMOICBXILIGPYQTHHTHUCOGOQMJXUDASIMCDRBDQHBANMZDIRLBBKDMEHVIXYGSGVYUVSNABF");
    msg.type = 252U;
    msg.access = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.011849558625506296);
    msg.setSource(30982U);
    msg.setSourceEntity(172U);
    msg.setDestination(19333U);
    msg.setDestinationEntity(127U);
    msg.cmd = 163U;
    msg.op = 30U;
    msg.plan_id.assign("IKSXTCPPVEDHCFQSSJPOYXMFPYUXTWZNLFWMTCEDDMQKDLOHVIHMRZFRUOQRROXPMYXNVGJTWCOTMLKOXZIXWXFUZVNSBEKDTHHNXBAQDYFSNPQBUYSJHNZUAVBASALINULVGYJILCHGMRJVKEIPPRJPAFMDJHGYGCMTWCQRTDKUEDABZGBWWLVTFBLQGEKBAPOYNIZOOMZGHULNSCWVUAFOY");
    msg.params.assign("VJWCZOEYAEQERIPGVEBUYRAOCFVTCNPGKIRGHSTHBFLOWHMWCJLUZKMZOSANLQCEGDHBZQUMBEKZNUTXUSDTJMTQBHVQHZHGXAIBOPIJZJLHOKQXNYAVLKWCOHIXDRGYPWSKMINZPYYPOFLCWXDNOCEEPWSDSJSQSWPDXANITVNGMMLIULVFHFYMZRMYPVTRPLVOXKYXBUSUQCUGBRTVDST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.4356730163932919);
    msg.setSource(12203U);
    msg.setSourceEntity(118U);
    msg.setDestination(37687U);
    msg.setDestinationEntity(67U);
    msg.cmd = 230U;
    msg.op = 34U;
    msg.plan_id.assign("CYOORJOSWPHDPLR");
    msg.params.assign("BVSWBZUULTQXVBQXVMGAHVCTSZPKDWQLZIAPEEJSAOJNZAGVJXQLRUKBJTJDAHWBQCIUKBEDZHCEMIMKWDOLLWFSECHXTHNWZODVPSISEVLVKRLOGIBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.8242827863675207);
    msg.setSource(10914U);
    msg.setSourceEntity(75U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(213U);
    msg.cmd = 203U;
    msg.op = 124U;
    msg.plan_id.assign("PIYRYLUPKOJYWZQUZODDOQZHDABHCLXVSFXXZTHMPPARWPTQARHUMYDUEIPMTFPTJEKSXHGNUWCBGNNLETMGZFIQBLCNGAENYFAGDEABAIROQNHRBZSCSQAQXRWWNCOFQOWVJOVLEFBMAWLTITKFYOMWMYGBJSKFZYIIVDDF");
    msg.params.assign("OYCKNWTHLKCQBOSPSHVTAONGXWDLMVKPGYKUQDRZMCLKQPDKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.77858926628622);
    msg.setSource(4094U);
    msg.setSourceEntity(27U);
    msg.setDestination(32408U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("QKSULGYCGMASBRTFHJNJUMAZJBNOHGCMZFMWPSPYJMPSSYFPEHQANRAXWWPDDZFOKVQUTJXKBWWRHVJXZEUTUVCBCOHGEGURXELNAYYLICHRHOBTXMKYFZTGLJYOMNDIVXSITNYLPSOKIXPKPFQAAEHIQRDHDBBHTQYFNUEVMFZTIGGRPKNWKUDARJKFEXLQONLTIQLB");
    msg.op = 130U;
    msg.lat = 0.24175057623817786;
    msg.lon = 0.5305349977003913;
    msg.height = 0.49685825615787726;
    msg.x = 0.08543758128344248;
    msg.y = 0.7757703981646492;
    msg.z = 0.7669415874499294;
    msg.phi = 0.42694429498942454;
    msg.theta = 0.30433200381872383;
    msg.psi = 0.22802635666806548;
    msg.vx = 0.32314874901513246;
    msg.vy = 0.03406438498423803;
    msg.vz = 0.4898756073338071;
    msg.p = 0.2966278986780114;
    msg.q = 0.2259511827755989;
    msg.r = 0.6828863830493037;
    msg.svx = 0.04108077244394037;
    msg.svy = 0.08310432126165668;
    msg.svz = 0.5302742944956637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.3825951321538723);
    msg.setSource(10572U);
    msg.setSourceEntity(197U);
    msg.setDestination(15751U);
    msg.setDestinationEntity(105U);
    msg.group_name.assign("BFDQSMOLMPJQKDCGXXUTJ");
    msg.op = 81U;
    msg.lat = 0.35233794641100935;
    msg.lon = 0.07968015811287787;
    msg.height = 0.4573954848407762;
    msg.x = 0.7997143555522169;
    msg.y = 0.1387836953575644;
    msg.z = 0.7505716508270619;
    msg.phi = 0.7781195642733919;
    msg.theta = 0.2883174996989154;
    msg.psi = 0.054417810627846896;
    msg.vx = 0.5582375081703955;
    msg.vy = 0.2943760890397039;
    msg.vz = 0.9746832234477604;
    msg.p = 0.11090577067691487;
    msg.q = 0.29631175805808174;
    msg.r = 0.7128533014758869;
    msg.svx = 0.8710964629235379;
    msg.svy = 0.901932026552404;
    msg.svz = 0.3454343711064686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.7241491066047284);
    msg.setSource(14925U);
    msg.setSourceEntity(66U);
    msg.setDestination(61172U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("LKVOVTUGJJRSUHYEEREGATPBSBIJDWICKGFMRRBDJRVSFIQLPYNLDIYHHNVOSCSTWAFGBXVLSFJKVAUKBZXHUATJBDPZCUOSKOKQMKAEWUNZLYFQZDILGPGGWMPPFLDUQZVZROCSKXOIFXDDCETTRDAXFPXE");
    msg.op = 34U;
    msg.lat = 0.6586540044115714;
    msg.lon = 0.04518439581498512;
    msg.height = 0.5783823830354224;
    msg.x = 0.18724606391501364;
    msg.y = 0.9439015083883724;
    msg.z = 0.1957428602502288;
    msg.phi = 0.019168958898623134;
    msg.theta = 0.5602906180964756;
    msg.psi = 0.7956104939279203;
    msg.vx = 0.24915063269570636;
    msg.vy = 0.10997457042518821;
    msg.vz = 0.22759573154360868;
    msg.p = 0.8781328810259292;
    msg.q = 0.3777819833889131;
    msg.r = 0.3691861986466757;
    msg.svx = 0.28485018759931;
    msg.svy = 0.2692196338465813;
    msg.svz = 0.47910167927149905;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.15547016943020775);
    msg.setSource(47567U);
    msg.setSourceEntity(74U);
    msg.setDestination(3470U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("ADVODVGUWXOVDRBPCZIBHTVEKHOFYHKGFZJDKDRZOWNYFADITNUSPGETALNOGZZA");
    msg.type = 42U;
    msg.properties = 176U;
    msg.durations.assign("REINURXNJLFTDSNRBUJZVPKXSNJCCGQFLMREVAVTWGGFAMSSFNGCMYOXIZOAISGBYLQKJMEVXCGYNFKNUOKWDIRHBBFKJTGFBZLCEWZHXATAOHRPWHEFSBAQHMVLRIDLDPJMXPJOEMTJIVLAOKVLOUYMPVDWKTDH");
    msg.distances.assign("FXLAVUUHTQMELQBDXRHMJSOEWRJQFXKOVPCFBYHSPCNABOKCNVXQCMVTTITKOYWTHDIGIJXBRHMAGAKAKHKBPAHJQWDEWNWCEBYZVOOKXMVSEDBIEDETOTSLZUNJHVJGIQKGYNHRPARHYOFO");
    msg.actions.assign("CZNGMKROKBCCFQEMVADQEGHMPBIWATKJLUYQAKHTJVZORUGGVADUZSMIJUWPBZDMSYLXDYHWUVJVNFBLDZISYZHYTFMNZGBOLFAFANXCUCJAMBADCNTIPPEXEOHERVWWLTTGSDTOOKGQQPZRMAFNWYODRPWWJOOGJJKBCHYXXNXHWIRVURSTKSIYASIERMDKFRRQPFUQPH");
    msg.fuel.assign("WZMALUHSAOMEPXIXXGIGJWLIKZZKXPESIOIPZQZLCSFMBACIVYEOQNJKTUHXFRCFRBUOVJOPRKOXWXRYGKITKTEBJZVVOBGUAECKZKQQBPSYXNLJDDPCWSYHYZQNPVBTRLFSCHCLWBTNVRFUYUFUIRR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.42726275565471084);
    msg.setSource(57339U);
    msg.setSourceEntity(36U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("PGPMVNMLZMZQPGTSPPYXOEDNIQJIRPMDHVVGUXGUIWAKKQLRSHWXHHE");
    msg.type = 71U;
    msg.properties = 207U;
    msg.durations.assign("DMJFUJTJOYXZQVZTUSXQCDMLGICKKVSXPCISPHRWLXOAHUZBIDWEMRZFRNYCBXOBFAXYIKOCCTANVPTQGOBGNVHTDMYVGSUGSQIBZEEVUHBCHWMLUFRNJPZFZTWXLDQGHVGWPWEGFSZELBBWNVWTUNYLNCBHQPKNPAMEBELWKJKOADIDAYORRIIMQSNUEAZXCPPHIRTFVYRADJFCMJXMZK");
    msg.distances.assign("ACHYTYIARFWAUTLLJQDRGTIHXJLEOXHROELNJMEXAZNDRGDZHJUFBWIYTUCKAKBSYACJAKIYSPXPMTIWQIHPSOWBGREMBBMHKFPLPSCFOLWGWQOFOQJFRNPJOUUTTGZNDYUTBXUDZKOLJQHKPNMWGVKVDPGINMCMSXMFZAQBEDCSNLUVNXHOISQDXXNNJDZVZ");
    msg.actions.assign("POSNNGXSEXRWKULAWAUXMOWBVR");
    msg.fuel.assign("ZJXMRBCFIWASYFDEWVHZNKMMBMXTUFKKVKLUWVKHLOYNOJKCBTAWHAPHOSCHOEFYJDNJOSGUZTIGMQSZHGYQDCMEXRPYOIZKLVHFDXHQXFBZAOLQBXVMJQGRIBRVYNRQMDYTXSUGALGLSBPPUWTNECBFZTCGTJDDFFUMGUPNBLDPRTOZSHYPPXAAUACNAVQZLKHEWIVYJNECACNEZBQULILVFNOWJTKWSJERKEMUXJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.43512126186475863);
    msg.setSource(53825U);
    msg.setSourceEntity(55U);
    msg.setDestination(22110U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("VPFLFCQATQAYLXJJMUPENLHOBRIFWYTJGFCHIWQBCPLENKODFMDKEAGZIXZDDLKMCZCMHSRCVFPOZIKVTOINUOVSYUYBJHUJRNWNPZOGEXKQTHSEZDSIHMUUMBGHHPIQDCEKYUVLXFQTAYVNRMZFALGVWXBGGIMWTXLDLEFDVSBJUD");
    msg.type = 94U;
    msg.properties = 126U;
    msg.durations.assign("BNDAZXNFBUYMQTNMTOIELECIUXDKTMVDKWTHCXPSBSUIHVDUBNCAPMEDP");
    msg.distances.assign("GGUDNZCIOJRRGGJYODPKYDKDSPUAOITTONAOCTCXZYMHSQKVUQJPUIUVNBJAZMMCBXYCBVRTHNKGKWAIDHDKGMRPPHERDSWFZFHKXHEQFXSAXPFNZZISXYYMDQGPKVGFFECQWQESMRMXLUSQNHAWECHJLTJWCEZWMVHYLCHQEOZNLJCXLFDNAXNSOWOLLTIRYMZKBRAOZBVEUOYUJFFTWUBFWPGIRXIITSSUDYBTBBLJKPVBVPVELWQ");
    msg.actions.assign("LZONUXHBGWKIXIC");
    msg.fuel.assign("LFVCRIWEYNQPCYHGNFCHORKOPODGGNORZFFXQQNEKYBSETDSJXSBBNLAFXLDGEYTEFXHHJVIJOXIJBXZUPQZZTAMMKRVLZUTCNGJYVPDYZJFYOQYHJIOCPXSINCUUVNZBMJSUCRTGSCASALUMRYEUAELSNBLRJTGPDPXCEIMTRWSQDIKLOYRZUHIWMZDLXWFDHJGVOTTKWKFDVVKABKNRITIVOECAHABGDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.3956412304402328);
    msg.setSource(21058U);
    msg.setSourceEntity(75U);
    msg.setDestination(13013U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.16915357944831366;
    msg.lon = 0.7310719410784413;
    msg.depth = 0.18652220335384773;
    msg.roll = 0.9458736169152662;
    msg.pitch = 0.2569141176941042;
    msg.yaw = 0.6668828405614932;
    msg.rcp_time = 0.8911293881494582;
    msg.sid.assign("WBWQWSPIHGHBVTOEZVNLBFPKXISGAICTDW");
    msg.s_type = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.786004333506772);
    msg.setSource(3059U);
    msg.setSourceEntity(59U);
    msg.setDestination(63654U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.7299257546306682;
    msg.lon = 0.913233662288795;
    msg.depth = 0.06506560420816931;
    msg.roll = 0.7366008392526151;
    msg.pitch = 0.8090593776866375;
    msg.yaw = 0.602444715367346;
    msg.rcp_time = 0.03950146858199477;
    msg.sid.assign("HVBEJPDRZQWCBLPOSPPSXBXJYXSCLSEVTKBSHDDKZJUDLFRTUCAEJZEOCRRCZJKJ");
    msg.s_type = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.18480852236372225);
    msg.setSource(10752U);
    msg.setSourceEntity(107U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.761516205695808;
    msg.lon = 0.8285231859904331;
    msg.depth = 0.13101882957856714;
    msg.roll = 0.2094818850410355;
    msg.pitch = 0.08584764943330181;
    msg.yaw = 0.8028088204342088;
    msg.rcp_time = 0.25212417705737244;
    msg.sid.assign("MORSIAOVJWXZEARBMDCJCSDIMYAFDVTBIJHKWKDTMMEHORBAPJSAYNHPNJXQOMKHWHRPVXCDBWNQYUWOFJLVZNKOTWQTZONCQUHSPZGWRAYCHUPMLNEFGQFSRICOLFXISAPGXAKWWRDUICDPPFKNRQBTTLMQDUFJVZLVEOIYTJ");
    msg.s_type = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.919927784571758);
    msg.setSource(29028U);
    msg.setSourceEntity(172U);
    msg.setDestination(12838U);
    msg.setDestinationEntity(63U);
    msg.id.assign("LADHUZCSXPSVLULIYTCBJBITYAEZFSORNUEKJACLXFODXTAMQRRTUCVFRJGIHEXYAMFMGIOWIQDMGNDTYFCIPHQKAJZRDSJZUMHKPDRRVNJOICESHCASWAWZYHHPLVPDOPTGATEHKNPZUSDKEBUIYWGEJXJRNE");
    msg.sensor_class.assign("OHMBOIWBJNSYQHVMZNEYRGZIVPLOPTIDATIOCCWSVRHZCVAJEXPZTXLYLCNKBOUGPUESFKUGWJMEKQWVDXORXOWNUCHPPTJBMUVQCXMOELEQYCJTKGQQLDDTSHKDLPYSVTXXIMRBDQKIWFALNBXFDQVBZKZGKFLBYGTMIIGAARJHGRJQWUA");
    msg.lat = 0.9330219187470394;
    msg.lon = 0.11010883353535594;
    msg.alt = 0.855468059542628;
    msg.heading = 0.2925165070660575;
    msg.data.assign("GGBGFFCMFPLXNSAQXNWMXVPZZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.994268159386591);
    msg.setSource(2877U);
    msg.setSourceEntity(137U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(12U);
    msg.id.assign("UQGOTGYHWXAKBXHCMPXZTSXEQVYVEMLNTWWIKMDXTLYZDHOQVEOIKEFDSOPZFUFDVEJPNAGJPRDDRFYIWNBHIVJBFCUUKZILKIJOKJLLQGJWUNQWHUODMOZCLYCKNRBFVJEAMPTGHSRDIATUFGESPHRNBZAJBKLWOLYWXECBGXGUKXJTJIUCAHLNQFQSRMCEGRWBSNHYVYRSQHYXOMNII");
    msg.sensor_class.assign("DYDVONXEDZROXQHFENKSNGIUTLVFEVUUPKYCFIECWFHJGCXZARWOUCRWIUYADXXUZHICXJZWVRMEULQNJSKZFTJPLSOALXYMTHYPDQWMWTCHONPTQAZEUJZBHZQBDVIXOZGTDBVPXJCIWHTAYRASKIDRVBFRRKW");
    msg.lat = 0.7535621499628914;
    msg.lon = 0.5699677480060331;
    msg.alt = 0.5226459363993424;
    msg.heading = 0.9611366286812569;
    msg.data.assign("GLJXSOFXJYECVUPDOTKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.09455697569640809);
    msg.setSource(7330U);
    msg.setSourceEntity(201U);
    msg.setDestination(13123U);
    msg.setDestinationEntity(22U);
    msg.id.assign("QTPCJJOCZFEXRKAVSJGKGRUNQTQUILDNZOIYVGDTPVXEFORZEZAQ");
    msg.sensor_class.assign("KHIJDIRBRAHPNVEMOEEMCBOQEXCMGBPXTIZZMAHBGVDVYKWTRXBCQDHONSKEFOMCLAAZGKPJQZEUWLITIVREFJSNOBDUVFAOUXAFMCFAJGHTJWMMBYRNPFHIXGPSV");
    msg.lat = 0.6269090254317816;
    msg.lon = 0.8422425515066491;
    msg.alt = 0.27018853241776075;
    msg.heading = 0.6038032384687179;
    msg.data.assign("RTJJEYWIMTCKMYRGHURUNEVOBZCMMDJTYRRFJKQJGBUSBLWBZQOVUCOBKHPKZQKCSAAXXFEXQFOOLNNRQWEUMPPOOMRGIETFYDFCVDRSWKICCBBLPUTWHYNHAMDDSVBNQAPOCLLQFXSWJEVTSXSTWZZIGTSEEMBTIQVJVVPIROLKAAGDKHNUPJZQGAXGXDCQIRVDGKPIYFGELAYJUOZNWNIJYELFFTCHXDLHHLWZZMKVXNFWHYUMNPYHDZUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.7088624155799479);
    msg.setSource(9903U);
    msg.setSourceEntity(155U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(6U);
    msg.id.assign("ECEYJRMIISDACNXUPPBWJKFMGFUGDNOTDQEFUOBLKCAVIOQPXJRJNCSBELWNAZMVMWAXZIHCULQBLMGZCXPABZRAZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HOKFIUZJXEQNBLWMTGSJIIYVRLSUYAXQDTIMOSGLEQICGYPSCAOIVKAWUKAWFRUPPUQOEMADNMFNCSHADKZLVZSNWFDWDZCVBXDBZXYWLHSRDFFOHYNRQUELMTRAAHCKYTOZEGWXVRXJGCNDDFLSBVGLNHPOJJSRMFVKHBLPZNPZGBYCNHXEJCPTGEYQUQEQULVRWFMGZIIMHXGFKOJIMBWSYTPEZPBYTIATTJROTRNWVA");
    tmp_msg_0.feature_type = 196U;
    tmp_msg_0.rgb_red = 189U;
    tmp_msg_0.rgb_green = 60U;
    tmp_msg_0.rgb_blue = 197U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8237646430741604;
    tmp_tmp_msg_0_0.lon = 0.21429393460087875;
    tmp_tmp_msg_0_0.alt = 0.14636693471984752;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.7802394544837503);
    msg.setSource(44710U);
    msg.setSourceEntity(138U);
    msg.setDestination(18541U);
    msg.setDestinationEntity(85U);
    msg.id.assign("YDISTNPPUHOXODQFHIRJAZTJENYHVEWCZAWXKOIASCUQFLEBLIUQIGRGVVROSWBKMXJGSERVYQTJWSQYGQMBHZHKUXFZPVULDQCBJZFNZWCTYBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.7855087165387666);
    msg.setSource(18825U);
    msg.setSourceEntity(215U);
    msg.setDestination(65264U);
    msg.setDestinationEntity(181U);
    msg.id.assign("BZMWEERDGBMYOKECFUULJJJKALGUAXPTFVBFUQQXNLZAIWQBBCGQVRUIXQHBKDPFGTQODOLTYFNARWVYASZLEFMERXPHEHMRIZMNSVKDDUZGLSMVOQZNK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WVZPDCRGAOWQXKCQLHOGTIZBMFWIAIWHKQTLKXNNQKWAJHBDI");
    tmp_msg_0.feature_type = 161U;
    tmp_msg_0.rgb_red = 61U;
    tmp_msg_0.rgb_green = 253U;
    tmp_msg_0.rgb_blue = 38U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3815778086939615;
    tmp_tmp_msg_0_0.lon = 0.5087740141554347;
    tmp_tmp_msg_0_0.alt = 0.10703401755497;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.31400917006028184);
    msg.setSource(46771U);
    msg.setSourceEntity(89U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(117U);
    msg.id.assign("EACUWEPZQSOYDOXJBKGOMPJBKXJARHVGUGONGBZSIXSNWMGXDNYJXMWRKDLVTQBOLYPNMUBQCFRMNMRDOEXADSISTBOCQWQCBWVTQAVNPDHACCUUZLWHOWLYXKSHWXTMFZSDXPARGYFEHLIMFHFCTZPQPTNAUKDZOWITFHTRJGVYIFGJBY");
    msg.feature_type = 236U;
    msg.rgb_red = 215U;
    msg.rgb_green = 42U;
    msg.rgb_blue = 112U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.22770654311491512;
    tmp_msg_0.lon = 0.7221700245782073;
    tmp_msg_0.alt = 0.8086262935283315;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.9403234686783725);
    msg.setSource(51006U);
    msg.setSourceEntity(140U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(36U);
    msg.id.assign("VKRTMDRQHNUFBSEGCSESZDDVZTKPCNJRODYDQTHHXOVAETNWGCLWWXGFAHWIXRMFSXUJOJXBYYJWGXGUMNHIPMOYAOEGZABMYLVRIGYDVYWPEABMYFKDLZPQCKQNJBQLFLNOUECCQNJSUZPWWUIIISRVGCUITILSKKNPUQRCMTAFYZSLJJTGXKVYUASAQRFEK");
    msg.feature_type = 62U;
    msg.rgb_red = 69U;
    msg.rgb_green = 152U;
    msg.rgb_blue = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.8622094599984381);
    msg.setSource(27113U);
    msg.setSourceEntity(189U);
    msg.setDestination(48243U);
    msg.setDestinationEntity(40U);
    msg.id.assign("CIJTABRFECOGMAWWAUWQMISJDFADJRVZAVVETGOTMHSTMBLPPXKEGPQXBZACEXDLAPISTNYCDKPHCMYMRXNJGRXOPLGGZVRLNBGZYCBKXUWULQMHHENYHINQNOONIQQKQCKBVEJBWPKJVRPTJGKPTYLEJEXTWHAHIMFBZUUNUFGFJBDFZYQZTTDILSVRIXACUROLHJRKOUPKUEYGXZOWCROISWFHSSDVMDKYSYQFUFOBCLD");
    msg.feature_type = 165U;
    msg.rgb_red = 251U;
    msg.rgb_green = 46U;
    msg.rgb_blue = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.046172910334633444);
    msg.setSource(4042U);
    msg.setSourceEntity(121U);
    msg.setDestination(3246U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.6416094487992754;
    msg.lon = 0.03570773673319905;
    msg.alt = 0.06965786440731292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.11967334629490478);
    msg.setSource(33783U);
    msg.setSourceEntity(229U);
    msg.setDestination(24444U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.2185927566819147;
    msg.lon = 0.7452527685269897;
    msg.alt = 0.0748900561679281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.3661691714355386);
    msg.setSource(12681U);
    msg.setSourceEntity(41U);
    msg.setDestination(9750U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.7993321081141764;
    msg.lon = 0.2556466673550579;
    msg.alt = 0.9967550829548387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.01345936949050186);
    msg.setSource(4763U);
    msg.setSourceEntity(74U);
    msg.setDestination(52043U);
    msg.setDestinationEntity(152U);
    msg.type = 53U;
    msg.id.assign("ZKPLYSIKHUQTYGTLUDSOIMYEKFGRPFXQSOORSUPGJDHGQCCGMJTWCMHDQPWYXAHOUZBQIGKLEXMBLDEQBBDYIGHCLDDAMXDBXWVKKOTFFCSTREJYOXLUCEIWVEVIQMLSKZHLRCHLNCCXRYLGWBMWXRUUZBZMMHNHAFYATHACYAEGWITAYXUNIJZKTWEZVEJOQASAJNSNGOTFNNFZVFBQIRNOKRUVSQPWJPRKVJDVSMXZEDPBBPFRZVOFJJNVP");
    IMC::HighpassControlParcel tmp_msg_0;
    tmp_msg_0.highpass = 0.4374675796751176;
    tmp_msg_0.adot = 0.3932194441009962;
    tmp_msg_0.slope_compensation = 0.5400698285129801;
    tmp_msg_0.slope_compensation_difference = 0.16751469272539243;
    tmp_msg_0.altitude = 0.0932584335383918;
    tmp_msg_0.auto_altitude = 0.09724733344128944;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.5428573757812142);
    msg.setSource(51924U);
    msg.setSourceEntity(104U);
    msg.setDestination(56457U);
    msg.setDestinationEntity(162U);
    msg.type = 187U;
    msg.id.assign("UZNSKAYDZDVOJQPQNECFXAFIDNFHOWSTYKRXYQXNZWBWJUBMUVUGNHRLEVUGKRTLELSAURSAJONAYHDXWQBTTEDBCCKLMCCIQTFODJWGLOVRNTBZLHCQYLGPAKRJMSQKEWSKONFBPPHLDFJOPNYFUDQCFJJTOLPHMV");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.9637027470931172;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.5127052415599945);
    msg.setSource(13113U);
    msg.setSourceEntity(29U);
    msg.setDestination(4816U);
    msg.setDestinationEntity(254U);
    msg.type = 244U;
    msg.id.assign("AEOTNFDYHQSKRXUNLIDQSRTUDCDEDJOADFPZGTPNJGPFWYZPBUVYKXEQEBXDXVHCWOALVCHXXTNGBMQCYJLUBQ");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 77U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.4350776805571954);
    msg.setSource(14500U);
    msg.setSourceEntity(57U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(153U);
    msg.localname.assign("QPPJIXVNHMRZOWJGQHTSGNAOMPDAXMSOQHJWNJMIEONJRXQSJRDUHZITMSZFYMFUGKQKLFQUUCBXRDDXFXKWFWXQIBNZQHLDJSLZLBLUADTBAXOVSWYBHQVPMRPNDTBKYEEWISEITFCKNFRRHYNGVYGUCELOYFJHYPJVZMPSATGBCMZMPEONBCVOCUXWYEVCPKUZDJTSWZIVCIRDOENGKXIWPIAHWHKRGQCVLAALKTAFBYEEUBSGDRTGY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WXLFVWXOQLBTQGZADVXMJENCDIGEIVFUMZWDIIEBFWOPSJPQPBHDBBLCGKOJJYDYAFYNETEEHKZ");
    tmp_msg_0.sys_type = 97U;
    tmp_msg_0.owner = 46288U;
    tmp_msg_0.lat = 0.4289856955462785;
    tmp_msg_0.lon = 0.3966968671163327;
    tmp_msg_0.height = 0.34491641757615243;
    tmp_msg_0.services.assign("YYMTMMNZVIWJTGEOOMKTWVFIDACMIYDPHJWYSEZDUUNRALVPTMSHQCIIESTPTMELIFAEBBZNPQBEGDWHKSRLYRRAYELCFZRZOLVKYFJ");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.6330236961761516);
    msg.setSource(2106U);
    msg.setSourceEntity(103U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(57U);
    msg.localname.assign("BYXDRJJHCKRFFJZTPIURVKKPOLMMASVKYPFQSQEGRWBFVLQROZZQHBIJOUBXPFRNMQSLPNAJWLHGXEUWPBYZQEISKAPEDMBKUUTDKSLMWGLKYXHRSJDCTNHEIRVGEZVNNVGJIXEGNZDUMATIZWMXHAWMUKYTJZPDOYRABWSNXNECZHHFTGDWDCCOXJXOXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.9587399750431531);
    msg.setSource(61560U);
    msg.setSourceEntity(110U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("NPNATLRXAYUYJYWTMRFANQTVSZZGTLTGSKVADJQGSPVBFUWASFKEEZTLBRRGOWFUFGYDBASPXIGCMVYCXHCXMPOZMDJZZHRYEWEFBTUZITOUEFOQNJDYSLHAXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.014886826954159882);
    msg.setSource(19907U);
    msg.setSourceEntity(130U);
    msg.setDestination(2396U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("JQZRKDUQTITJXISNBUOTLKUDNDXHSCMVIE");
    msg.predicate.assign("NSYMFPZTTFE");
    msg.attributes.assign("AOHXOXABYMZXYBAFPCFOHESOIFKJVXKZYQEWMVFYRZCLWAQTAQWYADEVWSIDWRJAGFCNXKOIVBHHKJMPPMWRZRMVNNIPGSQKTJWDVLSLSPSWFILBCGYRDUOMXVRTACKULSSUQMFCHGAXUPLEPLNTGGLITSVHCTZGKBELDEJYSNPIQNUZUUTOIAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.559018847830672);
    msg.setSource(11373U);
    msg.setSourceEntity(10U);
    msg.setDestination(45315U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("UUDZGJUYGCRJQUERFEHCHFGIZOFRZLDFTZPCCOYIHNEJAGILAJUNAUHVORXTTTXIZMBGPJJRTS");
    msg.predicate.assign("MJONRXRPRJXCHDHMRKOOSAGTAYDSWCYACMZJNDEEGERDUCYUUWKILGTBTCGPGCJGNVSIXHTVOUYEIZGQAOQLFJOQCXSUYNSEZXTKBVXLADSENXAHTGTBIPEOHXZLMDWIJDNWQBFPUOWFZILKWNFBPSPYEWTSYFJBATPHJIUYMNLKWDHJEFGVSHVKLKIXBZBRPKUMFKCMAWOULZVRYFMMVLEAGXJITDNUBY");
    msg.attributes.assign("DPIKCLJOGBUVZRIZKVYXHIRFNTXUWWGSXESGNFTTREYFWQKSHFPHSLKQRBOYDBQTJIPSZYGPAAVKBIQJCNTLMQPIYNYMTMJGBMCBWXQKYPKZQRROWVZUUTKEKHZETJBFSAHOAJFMYXERVLMWMJMDYXCUOCCFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.4613546881907684);
    msg.setSource(13316U);
    msg.setSourceEntity(225U);
    msg.setDestination(8588U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("LJQFDNJLYAQFUTZLUOMVLMUEPRFBTJFOXPOGUSDAMVNLJLYSBHHYBPHGVFNDGUAQKHGHDCNQWNVXEZKIERGDMMIIEKOVXRHCSNHCUOBZADBHQAQEWLIKWGMXEOSEWALIPWTWZWVT");
    msg.predicate.assign("WXPCGVIHXKSISRDTSMGNQWMDIWPMPIQIXTJFZJMTJONGKFQXFLHJKWCUTUONTNGYFBMKELXQFTDRDMBRMLVWJIJYYDUVSHQKLLQGWGFALMOYFECYCXKZWOPKHUKBODHULWTSXBUCNYZHLLZTSACGYGRMLUCHEPMCVPPRANBEEOGAYZZDWVHXNZCAYPRRSFPRYDBQFJIEUQIOHBAABQAFXOZVUUAVHNZDVBGRRSDQXOKTEOPZNJTEB");
    msg.attributes.assign("XWGNQDAJLBEOCOKTLGLXQTDHROJDNEHFMUIFXEULSJASNMEZFMSGNEMYGGTZTPNKVOOWYUYTDYQSWRJEFKHGHWXVRSFRVZCCTIJVBZFLVRHLBSUYLCXRQBIVXDBDARYOCPNKUNWHMBUELAJYCIFYQPDSBIJIUXSKZXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.6559355299838615);
    msg.setSource(7929U);
    msg.setSourceEntity(23U);
    msg.setDestination(48563U);
    msg.setDestinationEntity(166U);
    msg.command = 12U;
    msg.goal_id.assign("PMNTOPRNZWTQLGKWTBKSCEUHXGUVPQCIRIEUEUEAELXHQRLPBWHTDAOBAYHHCKYJCEIJABUOCNSHPMYFMTFQZYADQJCGVGJMDRUIVORVFLKZWOJCYHALSKRQSSRSYZAMXNNZLZULFIDXXFZGARDOXGKUBRLNIBXFJPPDDTCQOGFEFDWXXINKMMLWUXKHAVTYJDPCHZRWBPOAEOCTNGWLMYJSV");
    msg.goal_xml.assign("GUXBAZUAOARAOMBJOQPXWXSZJKELGMKJSRXLMHZJHMLNXFRRDYXXJIBQBEZLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.5518392806802753);
    msg.setSource(19018U);
    msg.setSourceEntity(55U);
    msg.setDestination(15846U);
    msg.setDestinationEntity(150U);
    msg.command = 11U;
    msg.goal_id.assign("WQGJUTSTDYLIPXKWSVRWSUOXHPAPKXAAAEMFYJRQVCGHMZIFLVCZNOGTTNJJOVMZLHHBSBICDLOWJNJEHBGDWSTBQVRGECCUCJNI");
    msg.goal_xml.assign("JMEYOJUAXPFODXPRWWQJKAHMNGFHITSUNLKRMMVESTKCQCGEGEEZMNVUPZDFYEGKNAFDTKEWOTFMWFNZQBIYCCBTGVMANYPSQEXRXWJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.9054288665148045);
    msg.setSource(22820U);
    msg.setSourceEntity(152U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(242U);
    msg.command = 215U;
    msg.goal_id.assign("ZYUHHDFQNABHNAOSLTBIXXJWCGLQASZRZAIZFWQFMXJTMYWCRBIKJVQXLTJQGOSSAFNPYWNPHDIMQUTGOFYFYKUQUJDQIKYYMKAUEZZBGWXGCNPKOPTVDLCMPCEOIEWQVHMSNRC");
    msg.goal_xml.assign("OJQFYPAWGQIMULWGSZUMVFHOCFPZBIJRIFYBTAGUHBYEVLHQFWMRBAQHZDOEZJNCYJRNKPEIJUPXSSCCXRYUTSGVQVYZQDOMUZCWOQXJMFCMTEAULWEKSQSYOXEZHBJRQVEKMRXXXDKIZVTYGILTXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.3338739719558247);
    msg.setSource(23050U);
    msg.setSourceEntity(32U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(251U);
    msg.op = 234U;
    msg.goal_id.assign("SKFFAKKGGYPQNINLYRRJZNLVQHFFZQALIYGWADBWTXHPGINGGMTZREDDUKACHYQWPIRMTQCJCQEDOWPVOFPGUBRWDGDOPCVZFMGJTSLMCZNMNJOXRXKXNASZEOWXRNSZBLCMBORUDUHIPSYIHEZPSJYVJWQRSPSQQTUIDWFUAIHBTOVLDWJMOUYJKYFMXOUAVWXNDZCIKBTHHXAMCGCMZAKTESVUVJRUBXLBFNEQOIAETFBJXEKSBKHLTV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UJRCAIWQZADIOWHNIPSBJIVDCQEJODTTCLMEBMXCLDRPRHMCEAFPBZVYNJJOBBGPZTFSVXBAZQHEPPGBWPSMNEFTQLOHYWNZLNYRSNVWGOJADATBRPZISOCXYBSMFYHKDQCTWUYRKCQDIENSOGSEGIKXAROMTTDLOMAFLIWVYNDLFJJIMXPAHUJRSQICHKXYXYNHXGUMUVQOQRLFHVUZGWXFAKELEKLZKGTCEGGKUWUYBVKHFQSVUJZXDU");
    tmp_msg_0.predicate.assign("TNADTZGUYCBSLIUEDQZHLHAKOYPVBXPNWPSXHYOGEFFYMSQFPMULWPDZRATSQCZPBFQAJCDHXRF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.2888539456661724);
    msg.setSource(59548U);
    msg.setSourceEntity(236U);
    msg.setDestination(58887U);
    msg.setDestinationEntity(82U);
    msg.op = 59U;
    msg.goal_id.assign("DAUPHTFRNIVSJLNFUXXBZV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZPASEOHQYETLDDFTGPIWZALMSQK");
    tmp_msg_0.predicate.assign("DUPBTOBETXTYEZ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.9909287380320991);
    msg.setSource(49495U);
    msg.setSourceEntity(178U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(86U);
    msg.op = 33U;
    msg.goal_id.assign("RMZGXQJTXOCLGQQCFYGDRKBJT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GVXCHVVLRPRWKAQIPHFKLGAMMQTBKNCWQXKZDJINZWDPRYEAHYIZOGB");
    tmp_msg_0.predicate.assign("QVMKHWIIANPHDBBQOOESDYJXRQOZVJOXFKOJXBLXWPYLZRBQTYFTCQAMBSZVQTYVJXDKPJKEOEQAESOZCPGTVWJLNDJAYTSJVNEBUELZMIQWRDKGZRCFPRRUPEUOGCFCGUZBCLPKEZSCWVYHLUHYGJZTADXVGSUMZKYIFDRBSXFTEHXMKSHWAQWOALLPHHIRQKFIFURVNSXWNELGTCWIFKUXLNANTMIPH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PIWJYMLTOZYAOKBJPVUMLAESSSTCUXLZQHAEQFXLWJVLRVCOAMFOXNWFOVCGCODURTCKTRRBNHRJWMKPXXJLVGZZBCRKLTWHMHSNXYEQHQMAUYXHXDDZBUISWFRCSBJVYXEHUKDGPGTBWWVEQGEERBXITCLDCBYMQOEKOMLRSAQPETIGUGRHNNFAKSPQJVYFAYODDKSNFIJAPGGYE");
    tmp_tmp_msg_0_0.attr_type = 125U;
    tmp_tmp_msg_0_0.min.assign("RITKGSRXELTSBGQNHUWDHNGFMAQRZXNWGODKJLJTSNMKFBGUNRKCQKSODASEXXOBVVLDWSMAXCVCMHHCHUYJFEZJOUZAMQSRUYLYHIIFBKHTZDJEBSGMOZUTYDNATITRPDQCCJNVYMCHMELAOEEOBSGLRPBBLXDIKOBXWPTVFVZOEHSOXVQPYQJGIYKPZLMZPCTWWVJVXZLHQTBRFIFA");
    tmp_tmp_msg_0_0.max.assign("QWSZSZACRQKWUUGFWBAXFGSLKFELCIGTOXMCUJGMLDLIGLPLWBFTKRMGBRDLKPZYCGGDABNKPNJHBACSPINTQVUABTTXVIAEYMZRCEHEAVXEOUFFOWGZCTTIEXVJFZMFDNXOXXJDIRXQAKJVAMTKSOPURPTHJQJWZEXQLHEDVORHJIPHVKUSVGE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.0742538776226137);
    msg.setSource(50957U);
    msg.setSourceEntity(187U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(158U);
    msg.name.assign("XFIMBMRKXWYNILYNPUKFVNREAJVTQTIYPKAJBUXGAQFEKMQHFZTOAUGXMRJOCYLFUGPGQOIGSPWDCDYTBEOLDJAVTNXVEJFNRKEYCGPOTKSGPJBNWQCZPSQJTHNGDGRMJWNISM");
    msg.attr_type = 119U;
    msg.min.assign("ORKJFJYWRMCVYSOLX");
    msg.max.assign("YFMXZEUKXDCGEDVRJKBNYLRUBGTIRBFAPBGYVJIGLFEVBHLJGICAVXPWXVRMGDEJDHALXMHGRQSRZGVSQKRQFRCOVFYEIXTXWBMOJFNZFOTYOSTILMOXHJFWURDVWPNIWTDSUPKTHLPICHFAKUSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.5437096286334618);
    msg.setSource(2422U);
    msg.setSourceEntity(143U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(58U);
    msg.name.assign("YISQBEDHWOBMAZHKMLZWQKSCWGOHMIDJTUOOVXEJKPJNHRKYHBUAUZJLVZENJHCBGLEWGFXSZOTCCTVILBEPFHZEKQXSYNLSFBRTDGVMUZWLXAROYBNRAXMRZXFOYIIHVCXUXWTFMAAPGYVCNOYQQNSLJVCSTPKSYRUKJYVMRDVXPDBUKAVUJRPJHTPYCOIMMWCFQWNDTCQIZUBNWQIQFWANLTPPEIJBGEGMSIEXA");
    msg.attr_type = 212U;
    msg.min.assign("KADWNJBNQKBDQXCYEFYMIOTTGMVISOTVMCCPXFEGBYIJP");
    msg.max.assign("HJNALPMEJAAZXIHABLYJBQBJMFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.7854911324519634);
    msg.setSource(36215U);
    msg.setSourceEntity(22U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(86U);
    msg.name.assign("IIOODABBGCJKCRTTRFYRQPXGZAHNLHWQNJKWHNSJUNUUKORLCWGTAJDRCYNCNOJSSYQFPPQQJNPJMYUSABZUPMISMANJYWBWFMDQHHGGOBZEWVMZLN");
    msg.attr_type = 125U;
    msg.min.assign("MHDSAMUNOVXWGROABUTCWCEIREDPNXQYFQMAJPTMUDIFGVFLHLBMZZWTMREDQFJRRQQTZYYONCWSFTBBIUZIGHBGUPOEVJXRBHSKNZBVRMUNQECRHWXVLJUKFOXVXVDLLBXPHHPQXOAPLBOSJOADUKGIAEFRPKPQGKJNOJAQMRKASFSEVZSDTYWGHWYIIHLSYVGZWYTIMGZYSDCKELNKDINHKKEJFTBJCAUIVQTCWOJCTXLC");
    msg.max.assign("XTBJDZAHESHBTEXAAFKDBHCCOANVGNZJWXWZLEYZZSIQUOYIRCSKOOGNTFXBKVFXFGEZEWMMLDDFTOYSRAGBQUCIBNHCQSCPLZST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.37122083368019343);
    msg.setSource(52771U);
    msg.setSourceEntity(52U);
    msg.setDestination(2574U);
    msg.setDestinationEntity(189U);
    msg.timeline.assign("GZEHNHBKKENDAPFXVIPJZWRUWSJKRPYCQBAENHLOGYDLMWVVOQEVGYDTEJTEJUQ");
    msg.predicate.assign("QYNPUKILEMPWURVOPHZTZZCFFYSKMZRBBRPBDIIXMGWXPFLJRXYWDXIACLDOCBJDROMGRFJHVTEGUJRQCFZJXFNVHLJVQOHLKUNEBEOUAGDAKHWLVXWPEQBBSYNEMJMGKTCWAIWINSGFQCYMLW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TMLHUAICKWORSKWZMWXAUQGQONVAZPIZJRPPQIMWLDZKNQURXKSLDBHUPCWQVWGEUXPOHGJECVRTGLXCZKHGWCYBIL");
    tmp_msg_0.attr_type = 254U;
    tmp_msg_0.min.assign("UNPWBACWYRAHRDOYLQCHNRCMOSQUZMZHAMBEQPZJVFSOGCMSNIPVWXAVXHEDYDGYYBLEPPHMNNGDKPVVOORTILKMNFGWCNPNRDIXEZFSULCVXVEYGKBJLBOBSMQUQVKAEQZZZOMFXLTDHKFKGJTSWLDTGZXLCFAOORSJRIUZPATFQF");
    tmp_msg_0.max.assign("ZZETHTBJUIOCS");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.8581084477284957);
    msg.setSource(40089U);
    msg.setSourceEntity(62U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("NKKAMFCQAGDHAFYXLVCPRSRGTPXEUVLSOIKMXTOPIGDDCZGSYUCJRIXIMLAZXHFIKAOGBNYB");
    msg.predicate.assign("CJWCVERZFMWAOVKFFYVNFJRWXGTAUVEGIGLCTAIEPGIFMLRZKEZFVSHCAMYPQAMYQKGBINJCPZTCVPXQAVXWEFNUOKYCLLUSBNIABOMSALBSGPXWQMYMTJRHAXYFLTATNYWHTBDORDPRIDISWJDOZSXKRZUHUNWFVYGILRJYCHNMZGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.5310571722052011);
    msg.setSource(51597U);
    msg.setSourceEntity(245U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(243U);
    msg.timeline.assign("BJKCBMQJHXDIXLMFRGFPLIJKQVOIYYFEXRDHQIBIAGUYPVGHYNWALVJRUXHEOKLVARPNKFTFRNNDRDQPPGOTXWGBBNEPZQGTTYZRMWWSSXXDHPEEQZDOGJTIUDADXIYEKGNVSERBCTNUYFBJUNIWOBWOOQEFMLSRLGOMUFVWCSZUJZESCHABA");
    msg.predicate.assign("PDNPZJATXZHGAXTTXFQWRYPETBBEGPGLRDCIGBZGZIVSTVUAUIWSUNKFWUDHMJPNQYYOEZASJEDZTKHVNAQTCJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.04544736766671276);
    msg.setSource(13200U);
    msg.setSourceEntity(241U);
    msg.setDestination(36726U);
    msg.setDestinationEntity(180U);
    msg.reactor.assign("DJSJDRSMFKHGFWRKWAARSOAPBIAFNOQKUBPNJHZZHUYZKSQACQSPBTYSMFTEDEUDXKHPVPYPQVVTIUESYBBYHXRBUZPONEJZTRDMNGFBDICTZMLXYODKPKVXXWSYJIUVWUZOINRCOILWZOVNEBGWECVJCOONGHPXYGQIYMZAVGPLNWLIWIGCETFLUKXVSXRFJNQXFQJVWMHLTATCWMRCGCLDBFYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.19768367059167924);
    msg.setSource(41285U);
    msg.setSourceEntity(26U);
    msg.setDestination(25728U);
    msg.setDestinationEntity(145U);
    msg.reactor.assign("LYISCVYEWUBOFLLWOQTRMDWHKIALVEUDFXTOJDHTFESSW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YHEXUGNGLZAGUALMCVIXCGBQFBITWIYMTSWXXVVMVONFSKKNJBKITRDZNCAEFOCXURSIYOQFTLLWGUOLOBBHHHLSNXSTDKYPBFHASKQGIZDMTJEWQBGJIMMTJPVPQEJRWCABBUWUFUDEMZAVRIDXUREGZVMKCDHDKTBAUIPNZCYZJYOZLGDXALTQPLKAQWKYRSYGNQPHXHLKPEHFJSZZQDCJRFFENFOSVJECDYMPMWPSXJTQARNPCWOW");
    tmp_msg_0.predicate.assign("NLZWMPXUQBUYIKVCLVKKXIETDWBHTRSVETSPYAMHUUOJJVDFSCRCDNMUCNAYRLSNMMRVSWLBDQZPPHPYPGUTYRIBPNKDOOCBGBGEFTIFKIQOWACXLGDLBALIGWGUUNEPZHYBYCQJJQAYZJGNFJHIIKCCUFFMWTADZOJZEOBWVGHJFNRQXSBREWKOMTVAVEZDVFCDQXAL");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.2869110617511612);
    msg.setSource(60450U);
    msg.setSourceEntity(219U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(57U);
    msg.reactor.assign("JTKAAZSYCSTQCKFQBCPVFUIBSVWZBLQFQBRMDPWOIFOKUGCPEUXRAVIERMCAATQHGJVOGSRYJPDUNQYDBAKEIWUPRLRPENNBQTHJEJZIJZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5345323093363016);
    msg.setSource(28218U);
    msg.setSourceEntity(241U);
    msg.setDestination(19506U);
    msg.setDestinationEntity(154U);
    msg.topic.assign("FCXNYMBLAXKSYHRFIIGXWRFHQVRAVQUEUPOBOVRJMIQUMGUROGOCLPCYJPUDZKXODERHXMCEAZDITHZNOJRWWXKYLERPQM");
    msg.data.assign("AUVQUMMOLXEMNSXSVYYBRAUXGJKOFUMVNYHVJBDXDPZOMFUYOGHJFDTDRCKNKANOMARKNRSWQDBCZWLTREKNOIDPWBTUGLPWYCRQLAJRGXUSLZQJPCETBVTPUCMPUTVJLALTGCZDQBSPSGDIZRLIEFXVQFPLE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.8036778251410934);
    msg.setSource(16153U);
    msg.setSourceEntity(223U);
    msg.setDestination(55254U);
    msg.setDestinationEntity(36U);
    msg.topic.assign("NBVXKRSIKBOPKDOSDFXBAKITBHEXMWOSYDWQQZMANLPOZYUMNKJWUNZUPHTELOVGFBBTUPSORGGFBSRXEEGWZVGNQKRAXYUJZERMHEPLUIDUIPJJIWYDTCVWQTFCWTENVDTCXSVPEURYMWACKUYHJZLLUZXIA");
    msg.data.assign("ZKIDKEUVXDRQYPDPLXTJIKUSDIATBGSZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.7860249769590256);
    msg.setSource(44933U);
    msg.setSourceEntity(20U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(142U);
    msg.topic.assign("XLWUBUJNJNITAFYBPDRNCBZQINZPUCJFWVSJGPIJYNAXHIXGTEHYPTYXIKFMUCZIEDAGBAHSFOKKWCXWOLTUQEOLRFWQRRMVHSJSGKVCURUJOQKCAEWQUXYTZLIVWFYGMQSTDPTEVBVWOSMGDSFSRYLVSLMTQFCBBKATPGNBWBZFJAYOEKQTXFLJOKJLHIGKDHEDMOPVMD");
    msg.data.assign("KODPQYIEZNWEKQAXYXGGZLLGWNWYTYERWCBHLBBKUSFPFITOSVLKFJONMTZPZKQKPTDTZBNIDHFDZOUHMCPZHSUTWIYFXZGXIGVBQDBLSZVENVGGDVHRCEQFCFUSJAWVTEDIQNWIQXLWSCPQDSVXFAJBRRGSJPOOJCRUHRUONWGYPMALMFXSIYPTTENEUALRYNQEHVVXESCCMHJZROUBMBJALNUJKMCAHRJDKXFVRKXJCAMGOYLMHIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.7330981070694514);
    msg.setSource(29872U);
    msg.setSourceEntity(230U);
    msg.setDestination(48489U);
    msg.setDestinationEntity(78U);
    msg.frameid = 227U;
    const char tmp_msg_0[] = {37, 13, 67, 8, -35, -7, -90, -109, 72, -100, 42, -98, 92, 13, 70, -41, 116, 85, -86, -24, -80, -49, 84, 23, -92, -19, -44, -44, -14, 33, 120, -83, -26, -83, -49, 107, -81, -89, 111, -75, 115, -101, 124, -58, -53, 124, -53, -76, 81, -50, -37, -104, 10, 111, -104, 59, 89, -33, -88, -112, -56, 89, -7, 50, 83, -84, 6, 25, 87, 92, -42, -7, -1, 5, 51, -37, -4, 59, 101, -104, 92, 38, 24, -128, -67, 42, 99, 19, 42, 19, -82, -7, -105, 2, -108, -111, 83, -110, -89, -11, -8, 80, -41, -106, -24, 115, 33, -77, -23, -24, 107, 63, 115, 58, 74, -52, -125, -107, -98, 72, -94, 59, -108, 6, 46, 124, 2, 70, 88, 44, -27, -77, 123, -70, 101, -83, -34, -127, 68, 94, -33, -37, 63, 106, -61, 35, -63, 68, -4, 71, 93, 77, -51, 15, -83, -111, 109, -89, -119, -73, 33, -46, 57, -5, 75, 120, -49, -16, -77, 126, -6, -43, -89, -30, -70, 59, -63, 59, -75, 70, 120, 19, -10, -90, -89, -98, 105, -47, -48, -44, -101, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.8251934671533045);
    msg.setSource(8969U);
    msg.setSourceEntity(46U);
    msg.setDestination(43721U);
    msg.setDestinationEntity(26U);
    msg.frameid = 63U;
    const char tmp_msg_0[] = {-72, -124, -97, -39, -17, 106, 75, 17, -47, 75, 118, -78, -37, -113, 116, -90, 55, -15, 65, -19, 117, 19, -72, -60, 78, -87, 87, -9, 98, -3, -51, -41, 40, 11, -88, 90, -92, 123, -62, -64, 119, -105, 62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.4885335486966996);
    msg.setSource(3635U);
    msg.setSourceEntity(11U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(27U);
    msg.frameid = 198U;
    const char tmp_msg_0[] = {122, 90, 45, 117, 11, 100, -77, -1, -22, -36, -62, -20, -85, -5, 38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.5322789896107026);
    msg.setSource(24003U);
    msg.setSourceEntity(169U);
    msg.setDestination(33008U);
    msg.setDestinationEntity(81U);
    msg.fps = 10U;
    msg.quality = 19U;
    msg.reps = 176U;
    msg.tsize = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.48071604485927755);
    msg.setSource(43020U);
    msg.setSourceEntity(143U);
    msg.setDestination(44769U);
    msg.setDestinationEntity(8U);
    msg.fps = 188U;
    msg.quality = 135U;
    msg.reps = 150U;
    msg.tsize = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.11949887400257131);
    msg.setSource(34339U);
    msg.setSourceEntity(125U);
    msg.setDestination(33076U);
    msg.setDestinationEntity(254U);
    msg.fps = 202U;
    msg.quality = 170U;
    msg.reps = 65U;
    msg.tsize = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.7473186731646847);
    msg.setSource(7803U);
    msg.setSourceEntity(78U);
    msg.setDestination(55147U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.3429683564877598;
    msg.lon = 0.9276857837900452;
    msg.depth = 212U;
    msg.speed = 0.19814626134489433;
    msg.psi = 0.9419285560629795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.8910198079184665);
    msg.setSource(20316U);
    msg.setSourceEntity(170U);
    msg.setDestination(54065U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.2990909041897145;
    msg.lon = 0.45532678651326663;
    msg.depth = 7U;
    msg.speed = 0.7477301457047572;
    msg.psi = 0.2801093727583538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.8309027511670402);
    msg.setSource(55359U);
    msg.setSourceEntity(20U);
    msg.setDestination(25080U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.9523658076925811;
    msg.lon = 0.847718928768127;
    msg.depth = 3U;
    msg.speed = 0.7569727797241079;
    msg.psi = 0.8618133710363006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.3926889989732917);
    msg.setSource(32541U);
    msg.setSourceEntity(122U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(243U);
    msg.label.assign("WQWZCDUASDGHJDXRGEJYYYXIPMCRVFFALVGSXWSBNKYZBDXFJOUZRCVMHQRKMHATHLOXJUFNHNNWKROTPCFVLTEZJTOGOUYXSKLZIQPTKCSFVQBJCOGIDJQRMW");
    msg.lat = 0.3668354917200639;
    msg.lon = 0.8492936834464009;
    msg.z = 0.6415661155126616;
    msg.z_units = 163U;
    msg.cog = 0.07367886320585171;
    msg.sog = 0.7692545565641752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.44851894930932223);
    msg.setSource(29056U);
    msg.setSourceEntity(20U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(90U);
    msg.label.assign("DYXENSBDOAOGXZYACVCWHLUJFSDGRGTZDVNEDTERHXQTNKEKPWXVZPZACQFLVEYIRHMFZUIHQWMBIUKVPZJMWPPEULFQOCLFUDTRUSMSHFIBPRQMGZLNNJGIXVSWQQUIIITCMBFJWJBDPGXYGNWXRPKHTEJJCFAYVHEAYKCECRKNQUJYLAJBMLIAXJTLBGOOPFYZAEVYHOSUBDTMAFVKOBUKONQGOLZDMYN");
    msg.lat = 0.39833045858650074;
    msg.lon = 0.8749031145088073;
    msg.z = 0.2890863355541682;
    msg.z_units = 60U;
    msg.cog = 0.8840034130120764;
    msg.sog = 0.6736078829974889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.4737996708795714);
    msg.setSource(60760U);
    msg.setSourceEntity(208U);
    msg.setDestination(37507U);
    msg.setDestinationEntity(117U);
    msg.label.assign("ZNVXLICFGOLCEGJKJWCHTVDUVHBQSTBPOCAQQPLATYMQHSUVOMUSLHUKDFFUHWDNHWZEXNLILNPWPLUTQGIIECRTHNOBPU");
    msg.lat = 0.17616594198699476;
    msg.lon = 0.7226127578594356;
    msg.z = 0.793804321157259;
    msg.z_units = 41U;
    msg.cog = 0.6795675463471693;
    msg.sog = 0.5821391411227581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.37769935288891265);
    msg.setSource(39470U);
    msg.setSourceEntity(216U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(237U);
    msg.name.assign("FSWAZBNVSCHMITAUEQYPMTCBEADWTB");
    msg.value.assign("CGTYGRUIAXGBNOGUCHVOLPFKIURLIZZGTHQZAKVFKVDNVIOONBSUWBLDRIXYYTTRSWUKGELMKJPQKNCEQKAIPAIVICWUKABSCEYQTPMCMDHVCJMJBSJSGYNDZNXIPWOLWQENTXRSYYZJQCXKEVEXHZOXSQBNZEEJMMYYRFTXQBVJSDZMHOGPGJEWIJLAXFTYQPMFRHUBLDHWPBXOOMAZWDRDFELFWTSMNRALLACWUFSGQRFBJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.1904621055066359);
    msg.setSource(37042U);
    msg.setSourceEntity(136U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JZGYTHPRTLOAPRBPFOLCMJNUDKWKHXZJIBKTIATGPJZAEAKINVHOLVGDLEHVHMZQUBEVGPJZYXEFUCNQUTZKKCNZVYRUSHWLBLPQGBINVSTAPOXMZYOHJSKKRDSGULMRNZJXMBDQSVKSJDBIKWWFXXEMCYPLNUYMBGIWHWDXQXSYOCFGRFFTFAHDWHVLRNMYCCUST");
    msg.value.assign("WQIJRRMVKADXGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.6661758825409905);
    msg.setSource(24596U);
    msg.setSourceEntity(198U);
    msg.setDestination(48558U);
    msg.setDestinationEntity(227U);
    msg.name.assign("MKEHZZWDQEUAOXLVJBJYQMERBJSRZLJLNGPTSCYKFKPFOZXRADLHFLFSZXKTNRBRVKVVILZGGZWKFABWAZILDDDOXFCMPBOXUDCJJDYRIVSGSUAOMTNUHPDWVECP");
    msg.value.assign("UNATIPSOGYQFEBETDJOGVNIMTLPCJKPSVRZEPUMKODJUJVWVTKJSJQTMULDHOTIPTCAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.3274903861752789);
    msg.setSource(4738U);
    msg.setSourceEntity(43U);
    msg.setDestination(8U);
    msg.setDestinationEntity(7U);
    msg.name.assign("UQSRJCTEGBUWPMGFSGDHAKERAPGPYJNQLQHVYMJUHKKIVRLORKABBRZBYCCCUUYUEOSNISWHRMFGYZFKQSZXBTWPQZDNLHPNDTRGADMPLXRXWXDXITVINZZJDLKMSBOCQHJHQACJSTWEGENSIYMIPHZZMYXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.8732707465914699);
    msg.setSource(62830U);
    msg.setSourceEntity(111U);
    msg.setDestination(20288U);
    msg.setDestinationEntity(71U);
    msg.name.assign("OIUQTTOZGXNMOLCVTXXDOWPARXFZSQLFGCPLIFIMKDPZBJAAGUMAHICKFRBDCYLCWQWUEHUDKNBXZYUNORYWVENPQXZLRMTEAEFYBVMOVZJMIQXERUKVWJXUSMMTWNCFNNISPGDAJCYJPKPUSBRJCLEGTPFCGGWHMFEZGHVOYJYSGZBNSHDOEFXVDSIDVHQBGBIPBRKKSWBMZW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JZTEWPKVPNOHUB");
    tmp_msg_0.value.assign("GYUPVGABYPTDMHHXDIBRPRLDSQYENAZWARENFKRPWJQCZVEUORQCWFRBBYGNOEEDOOIFASIDTIHHZSYCGGTJNNOJTOMHIZXCGXRFEUWKCEJPAYLJWXVQHVXMALOLCLHIFCPTTYKNIYBDMTDHMU");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.773377608765184);
    msg.setSource(45532U);
    msg.setSourceEntity(113U);
    msg.setDestination(10724U);
    msg.setDestinationEntity(169U);
    msg.name.assign("DHRSMEVPIKLQIZBEVEGXHFXLVDRWSHWCDNOZAKSMLEQTZWKZMNZULWHFXVRJPEIZCTNROYJYTHEXPMNUMVBZPYYGFCGXJXVSBPOHIXJBDJIWNOUWJMLBTFQWAATHEMSWGFGLUTEVRQQBJNAKTRIMTFYODUAGAUBBRCRPOGYHKKQAIYKPUPOGQQOGSYTCNBNMVQHWXYNRPZKUJDILXKVFYNCKDOWGBMZJHVSAPSLCLFAFOZCIFEATCISLEJXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.34547880765332717);
    msg.setSource(44591U);
    msg.setSourceEntity(211U);
    msg.setDestination(41659U);
    msg.setDestinationEntity(145U);
    msg.name.assign("IZXUDFNFIHSIVMMA");
    msg.visibility.assign("JTDTCQWRIIZJQXXTDNTJMNLAQSAZCWKDKVAUNDENMIMSGXWJBPOYPOBEUMZGURX");
    msg.scope.assign("YCYCCYOIJXWYXIEQFKDNNMGEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.9842371830282708);
    msg.setSource(60425U);
    msg.setSourceEntity(23U);
    msg.setDestination(60422U);
    msg.setDestinationEntity(65U);
    msg.name.assign("DRDSZRTCXFUXZQLMHRFGWLIRTPYHQBCKIORJEPNAREBSENVKZENGLYFTVZFXUKDSEVLKLZOVPCKIEQNFXDDHPAOMNUTPMQGYFMOAGWHYOKQSHRJJBJUWSRMIBVXLQEDIIBZEXFTPAIWCUJWNJOOOAXCJFNGHGQY");
    msg.visibility.assign("CRCAHWPZVVMTIEMQFIJBUWXEULLRQASNYKPPEQCQNPMVAHSTLUOSLAQPDJDUVRTGWIAUGSZEZPPKOLWSYRTTIXKIHBOEAFZZPNXND");
    msg.scope.assign("CBZFZGLUQWPFZTHOVBWBDNQNYUJXHABEXGNJPSUKLKYYOYKJSNAEMRBJKARSDKGXRLZXTAMQAQUWDCISFSBLTRLYUXFBECXMKEAKEEYFBWGDTFDDCMEUVCHUPDGSSIOCIPMLFLVAKRVGZCVWOYEDRNROCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.5499058383988289);
    msg.setSource(5087U);
    msg.setSourceEntity(252U);
    msg.setDestination(3627U);
    msg.setDestinationEntity(153U);
    msg.name.assign("QGXZUWUVJZBWJKVRHIZGCYRUTPYAIFCCYORONRDRYGEAGNMYHQEHBIIZWJEFIESWNAQCPUKTQMCJQOPDSMMILSGZZVLPBVSPKAEXYJQKQLVWTAGXPGPXFNSXVJTTHPIRUYJRDGCTNWKQHOBIHHZBWPACXDTAYBZCFBMLDRYWNKUHOVZBOSCWFMDAMLYHLJNCLDUQKOSWONSF");
    msg.visibility.assign("YNRJZZRVONJTIQKVLVNDUMJATWUDKNIZYTHWPYQIRJNTKGCZCBEAWEMUXDFAUTCFUEHNQUGMYRPESNBFUCEZOQLPMPDXUROMOFIUJIXHCJXOJKSVDTCJORWBAIKPJZLEVFWWXJEOQFGSBCIZ");
    msg.scope.assign("DROHFJLHBTYOOYPCVZFTLCMQAIVGVFHLIGKPPAWBNXOEKZQSDSQYMQJMTCAOJEBXYLVKXHLHFCCIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.46914014001459103);
    msg.setSource(27465U);
    msg.setSourceEntity(2U);
    msg.setDestination(54167U);
    msg.setDestinationEntity(173U);
    msg.name.assign("EHLXPTXABBVGSXNVRFFFKFQBMUKHFQYDEFTPRTUFGIJZWLWMDZDNIXLAASXULZKHUJVUMWBEQUONJAYVMVAJCLGLPOEVBEERDXJSIZROCLWJWNORPXKTGXNBFTGYAKQWIBLVKJSTKYSEDEHBHRLSGCZDMYQITYTPIVQMHUGHGRIJNYMDHTROROMOCCWQNXHQOYYZOJZUPRKVWSDADNWQZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JBKMCSDUZPOZINMHHAHVFVLLZDSTGYDLPIWUOGKNBRXMGFAXRORRCBGPYIRYJDSXDFTLYNIUZHMQBEJUAROVXHLSEMBMIUKNUEOJUGHRODWCJCUUKKHFWILPKXGJDWZVOC");
    tmp_msg_0.value.assign("ICJMJAMOHNNQMVJBGDWEQZFWMXVYVHWKRHTSJFLFOUBVYMFPMJOIHRDIIGZCYLWLLJXXCFQNRPRCIHAEEGZBKLAKLQWSBPGBCDZMKFRNKPQZNYSG");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.8421778098228593);
    msg.setSource(51315U);
    msg.setSourceEntity(45U);
    msg.setDestination(23474U);
    msg.setDestinationEntity(41U);
    msg.name.assign("GJNOMXSTERCKKDFISBCIPKLVBSLBAILTPYYCQMCYBUUPUGQFUVUDDFKAMYZNTQOCBUAOSZMVBFFQYWTDMPZFQOLXLRPJSLVZQVRGGNGSCYTWKXVGORXDEUUSGVWEDMNKIWMJJDRTANHKXJRSCEFHWLXGTIZDSZHBRAIKENHLOTQOOMOPPWRMXBMJYDNZREKZJQZWGAXPTASVRGHEUHLYIHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.060159232419970676);
    msg.setSource(6775U);
    msg.setSourceEntity(72U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(133U);
    msg.name.assign("GOXHJGRQFFWKQMQBWAEWZLXIEPUZPCPVYAMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.30753911012053414);
    msg.setSource(16239U);
    msg.setSourceEntity(213U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(166U);
    msg.name.assign("OBPFLXHMPWJKPVZLPJGCYPXNODOYESXTMGSEHFDIDZPJHXWOMBKKALVVQUJWVGOZFUETFBVBTJYUWRCNMIJAXVOWPFVRKNLANIWNCQHBAPIMCZBRHPCDZMLBURJHYIKIESTODXUDKSRDKAXHNQPEMMREAYCXNYFUSAEFQQTLFZLQGBZRSGKVTQEKHUOQCZGNJVJREUWOGNASDIYHQTAQONTEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.8405393868307701);
    msg.setSource(39918U);
    msg.setSourceEntity(42U);
    msg.setDestination(4138U);
    msg.setDestinationEntity(224U);
    msg.name.assign("EHSYHRBXBWEHMPVSQYIQGJHHDZBJGKOASXVKOWIVNTRARGZQUMDMSPAGEAEPZWCNJUMUVNFDEZHXCFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.35048696686200487);
    msg.setSource(44945U);
    msg.setSourceEntity(90U);
    msg.setDestination(40530U);
    msg.setDestinationEntity(155U);
    msg.name.assign("NEMGMGKTBVGOUSQFFTWXYRCUXTBVYICHWNMLZOCUVHTDZOPEVLI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.889394330628096);
    msg.setSource(58138U);
    msg.setSourceEntity(244U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(225U);
    msg.timeout = 890006914U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.4156001495748871);
    msg.setSource(55406U);
    msg.setSourceEntity(188U);
    msg.setDestination(10701U);
    msg.setDestinationEntity(183U);
    msg.timeout = 1422778937U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.39728099275175743);
    msg.setSource(30658U);
    msg.setSourceEntity(187U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(118U);
    msg.timeout = 159677188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.4720818447116931);
    msg.setSource(14207U);
    msg.setSourceEntity(184U);
    msg.setDestination(464U);
    msg.setDestinationEntity(190U);
    msg.sessid = 2000731820U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.2387368307301575);
    msg.setSource(4775U);
    msg.setSourceEntity(230U);
    msg.setDestination(34585U);
    msg.setDestinationEntity(139U);
    msg.sessid = 4248486855U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.777109772344131);
    msg.setSource(55050U);
    msg.setSourceEntity(230U);
    msg.setDestination(36005U);
    msg.setDestinationEntity(28U);
    msg.sessid = 3930238753U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.4793118419461101);
    msg.setSource(57094U);
    msg.setSourceEntity(122U);
    msg.setDestination(41058U);
    msg.setDestinationEntity(63U);
    msg.sessid = 2879931560U;
    msg.messages.assign("VKCBNVATCQYKFLMPAMXMPWZBLOKQSMFFOQIHXYTYWGQDUQLOURWXAYJFFXKIIDHPSRVMQDCLDIHAJCUONRHNDAZKLSSJRVIKNCTAKXTDRTGBATDNKPFURYGAMVEFVZESWAWFDBPSWCZNOHIXBYGBGWJHIGNZDBXJPYQBOIJPIHTLKYUENSMFEPUYOICOJVZPTVWUJXMHRBZCGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.40416872240263957);
    msg.setSource(59248U);
    msg.setSourceEntity(193U);
    msg.setDestination(18909U);
    msg.setDestinationEntity(40U);
    msg.sessid = 492830432U;
    msg.messages.assign("VBJHCHULZCOOJLZYPYFJHTXSPPNAXMPURJALNYTIAYNVQEIKSUASFHTXUUFWLMFPLVMAERDYWNPXPDCFDTYPVSZYTABRTCDJNSKXEKQKRVCEEXFNQUGKAOOQGKXEFEIUWVVCUKIXKBYBGWGVWUZSOBDOLSKRRCGRILBGTWTXEWARVLJJBCDGOQTLMYZOICLEJMNBXZMHMDIQZOQSWYBJCZSMIHFDZIGRGQPHSHAFPREHAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.28613143893607673);
    msg.setSource(29733U);
    msg.setSourceEntity(208U);
    msg.setDestination(50841U);
    msg.setDestinationEntity(209U);
    msg.sessid = 773641391U;
    msg.messages.assign("LLVRSKTUWCSZISQMUZLUKCVZKAOGPVNNRJYIHYUFPLJRIOHXYLUXMBDIHDKIVQXVWLDEVEGOEHNKOQRQXJTUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.07229722467835298);
    msg.setSource(27067U);
    msg.setSourceEntity(201U);
    msg.setDestination(4672U);
    msg.setDestinationEntity(164U);
    msg.sessid = 4233768402U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.9602887068209119);
    msg.setSource(48154U);
    msg.setSourceEntity(74U);
    msg.setDestination(57930U);
    msg.setDestinationEntity(69U);
    msg.sessid = 4270865044U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.6999081638329567);
    msg.setSource(46460U);
    msg.setSourceEntity(198U);
    msg.setDestination(46192U);
    msg.setDestinationEntity(180U);
    msg.sessid = 1343282138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.15258119430077954);
    msg.setSource(22102U);
    msg.setSourceEntity(210U);
    msg.setDestination(18684U);
    msg.setDestinationEntity(225U);
    msg.sessid = 3693857692U;
    msg.status = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.5662645660347019);
    msg.setSource(45272U);
    msg.setSourceEntity(204U);
    msg.setDestination(17345U);
    msg.setDestinationEntity(213U);
    msg.sessid = 2368738008U;
    msg.status = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.5858735178335042);
    msg.setSource(9686U);
    msg.setSourceEntity(248U);
    msg.setDestination(29512U);
    msg.setDestinationEntity(62U);
    msg.sessid = 1454896107U;
    msg.status = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.4901174960775454);
    msg.setSource(54242U);
    msg.setSourceEntity(96U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SEZJOMECYUWJOQWIDZQELUTXLWNVZXGOLIQWFCYOANGHECRQJBOLFVLDYBNDGLJIHOAPYPVFXOASPSQKCCZRXHXNGCBUEJSXUKBMFFYMIETUHVICMMRPUNVQTVQUWBABOKSZXADRGWKGQJVJLYTYIXAGSOGADTDMVYRIXEKQKXZFHPCZDPZQBFKABIMFZSRSIWZDNKJARMSNJGBWRHHYTYUUHPEFPTIHTJKEOHDMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.5260667736367123);
    msg.setSource(63394U);
    msg.setSourceEntity(146U);
    msg.setDestination(59744U);
    msg.setDestinationEntity(50U);
    msg.name.assign("HZXNHWJJTMVEDFNHBEJTJVGJKFGNRNXROUZOAIUYHDFAMFEHLNTLXGIYSMKCPPYCQTUWBVNYSZEXNWRAQEKLIUUYGLJFGBUAKWBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.18949719288825595);
    msg.setSource(56080U);
    msg.setSourceEntity(192U);
    msg.setDestination(64133U);
    msg.setDestinationEntity(172U);
    msg.name.assign("IYHPJHFNLNBMKUQDJOXCGVVLLYZKBMSDEZVMJQCSONVUMVPTUDCFSYLUYPMWTAZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.020259931682790833);
    msg.setSource(38120U);
    msg.setSourceEntity(133U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(68U);
    msg.name.assign("SICDNMQAGUNHTCQSXZCKAJISFARJWHMIJIAEURTGZITVGRKLZUMUOYTSXJPXSWBJMKNOASWUGJBQZQKKWZTWQMLANPSBTRHJNUIYAOOGXLYPBDDAICRIEQKNMOEFYBDECOHGKAJFHYGDEBUUHCHUWZWDRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.4014022233642437);
    msg.setSource(33256U);
    msg.setSourceEntity(238U);
    msg.setDestination(35996U);
    msg.setDestinationEntity(96U);
    msg.name.assign("UPMGCJZQLXPHAZOHVEXSGIGGXNHDHMSRDDZXWEMZJBRCTRHIEVQDTNGMWHLSKVBPXHUMEVXFLXUQONSAUUFECOZEMWVANRAOTVOHNYRDSKMPKQCCROQMQFUTKPFXOLIBBRKVWSHNYWSFAXBYKZWKBCDCSTIJMKOBIFGTEQFSKFZBDZGTQAJZCFNNRYGTYJUCONJUERVPGYESPJVWVPUMRWLYHICOPAALDITXFNKJYALD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.013861283377636702);
    msg.setSource(30375U);
    msg.setSourceEntity(38U);
    msg.setDestination(11411U);
    msg.setDestinationEntity(222U);
    msg.name.assign("IEUMSOGAEVWFFOAURHYXWYOGQCEAZLNHGMWMPJUJCXGLYFOCTJLIJHXTTPZXDLISUBOLMSPSQJFKQNPRHMDTWBITINDXRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.17342738447214145);
    msg.setSource(31081U);
    msg.setSourceEntity(106U);
    msg.setDestination(48830U);
    msg.setDestinationEntity(201U);
    msg.type = 103U;
    msg.error.assign("MUAJUNUWARFRWLHGMDFVCCZPIAOIXBNBFSQIHMYECZHLEGTKAYGRDQEISKVUHLOBEXWGDYMVQOFOPFGZKZUOZZDJUFZTPHVURXTALHSTOCQXFYTBSLLJMPNBALXWXRJWNULOGJKYMSEICYUWEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.884685441150329);
    msg.setSource(18269U);
    msg.setSourceEntity(221U);
    msg.setDestination(65072U);
    msg.setDestinationEntity(104U);
    msg.type = 92U;
    msg.error.assign("WMZRTFYTKEWPKQNWCAGQQIORXFHONROOQVDEZZWDOJBXJUQNDFQLNAUSIDIJZONW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.15467314763923956);
    msg.setSource(20109U);
    msg.setSourceEntity(55U);
    msg.setDestination(5664U);
    msg.setDestinationEntity(139U);
    msg.type = 123U;
    msg.error.assign("TRLCFEOUSUYMCKIZYFQQAGQFERZEJDYXPQRHIODTSCMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.5667458106259923);
    msg.setSource(27108U);
    msg.setSourceEntity(180U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(8U);
    msg.seq = 33793U;
    msg.sys_dst.assign("SKGFJSAGTCVXWPDVYQNOZHTLECXLRBHYYCWAGSZPKACJFGTLUIRXQOJZYGORRNKZAIHUQXEKSDSKGNHOJNTOHPAMFRKWIBAPHALJFTIUCINOVCODJMODQBEUUIZVMREBXZPKTGKJQWXVTNMIAOMWYZYMENLPWDGTEHBBTWXFJL");
    msg.flags = 109U;
    const char tmp_msg_0[] = {8, -72, -74, 50, 35, -32, -105, 53, -92, -112, -53, -41, 115, 25, 43, 73, 23, 106, 123, -74, 48, -101, 95, -124, -67, -116, -70, 20, -113, -84, 67, -92, -96, -8, -15, -128, -93, -101, 86, -89, -58, 78, -53, 104, 97, 10, 24, -124, 53, 66, 94, -68, 93, -104, -110, -24, 122, 86, 50, 38, -96, -128, -69, -123, 124, -70, -79, -27, -65, -84, -77, -74, -117, -124, -117, 54, -115, -27, 14, 94, -116, -1, 43, -56, 15, -106, 118, -94, -12, 54, -41, -125, -86, -86, 41, -74, 109, 83, -35, -51, 122, -110, 100, 125, -48, -52, -23, -17, 0, -93, -33, 27, -71, -101, -14, -53, 89, 10, 41, 1, -29, -123, -64, -117, 46, 63, 44, -62, -59, 24, 125, 77, 48, -72, -50, 54, -15, -110, -107, 69, 90, -92, -40, 4, 3, -57, -127, 104, -2, 17, -53, 46, -69, -116, 35, -58, 69, 1, 69, 23, -107, 59, -60, -43, -20, 57, -87, -111, 38, -30, -81, 82, -104, 9, -86, 57, -48, -49, 16, 67, 50, 12, -30, 8, -86, -15, 112, -12, 59, 29, 8, 53, 43, 120, 24, -84, -117, 44, -105, -51, 13, -61, 44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.7276811786135591);
    msg.setSource(47692U);
    msg.setSourceEntity(3U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(175U);
    msg.seq = 29510U;
    msg.sys_dst.assign("HOCMGZPDVVLFQZVLJQBEUKJXXGPRHBMHWSFPGMRBNURIVQIRPVKTKWJBZRNCWJIOPTNEZSHXJPKORZYAPMRTIWBFUWEYSUMRZNNAGDJXYGHLOBLKOEYCDAFEBPTMEQWKUNNXRHVAHCDMYFQTUOCCTCSYIV");
    msg.flags = 101U;
    const char tmp_msg_0[] = {64, 72, -60, 4, 105, -82, 110, 98, 106, -36, -7, 89, 122, -82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.5602083670616946);
    msg.setSource(39909U);
    msg.setSourceEntity(163U);
    msg.setDestination(16231U);
    msg.setDestinationEntity(155U);
    msg.seq = 10938U;
    msg.sys_dst.assign("VWOABHBAJWGGSDSMWIGCJUZXWFLXFENVNCPJKVTMEJLRRFSNUGQUTLYQPRFOKPHQQRGZNMOXIEOHYNIDEFCBYWLHFLDRSVHYLMGOFQPZUEQQJLDFOIBUIZDYVCT");
    msg.flags = 201U;
    const char tmp_msg_0[] = {-65, -46, -20, -56, 41, -19, 2, -68, -103, -62, 36, 76, -3, -37, 30, 22, 98, -64, -51, 5, -64, 120, 18, 71, -35, 107, -7, 24, -87, 4, 1, 94, -30, 109, 109, -34, -122, 95, 88, 1, -80, 42, -18, -128, 87, 43, -54, -17, -7, 96, -100, 52, -120, -90, -9, 9, -31, -57, -53, 44, 59, 2, 3, -11, -48, -78, -31, -104, -82, -75, -9, -28, 121, 103, -91, 85, 105, 11, -26, 107, 20, 46, -60, 81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.6400231043016172);
    msg.setSource(44860U);
    msg.setSourceEntity(131U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(61U);
    msg.sys_src.assign("VQPZIGFKETNLGOHSCRJRFFACEMUGIXSEUIHXUKEGQUCSXBAWFUNCMOYJNQTFYJTAUKTKBTUWLUXJJOZKKTSZCJVRCAQSALEWNGNBBKWIVRTBXRPBIUYVFWPOMOQDZHLPHKXZRSGXODSAEHAFMFCBVKRDIPJMTGHEQYIYMTJWDBWWDATBLEMURLPHZIJOLMZIHPMQCERNOYVQYS");
    msg.sys_dst.assign("YVICXXEJQDHORNVVSMQAEYRLPNBFIGKIGLCQAGCJEWUGZJUIFPZBPGMHPHBPJKAZJAJMVKAULUOFVRSGFDCKBREETNBXSTQXFODJDOOMSWHLUCNDVEDTWTMAQYXCMKYLOBYFNIYKMUNRHYLFCGNJDATVWONNZHIISOQU");
    msg.flags = 102U;
    const char tmp_msg_0[] = {9, 102, 93, 126, -42, 84, -19, 1, -59, 49, -38, 111, 19, 10, 15, 17, 95, -19, 26, 30, -16, -25, -87, 34, -68, -100, -19, -99, 108, -109, -86, 94, 43, 101, 63, 72, -37, -114, 76, -50, -42, 76, -96, -64, -82, 61, -43, 1, -81, 12, 43, -43, 92, 75, -47, 62, -94, -13, -81, 59, -37, -72, 90, 12, 91, 21, -4, -11, 85, 6, -121, 62, 117, -89, -103, 46, 79, 50, 19, 11, -52, 66, 106, -111, 102, -58, -110, -122, -46, -76, -119, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.2754371635311368);
    msg.setSource(33630U);
    msg.setSourceEntity(36U);
    msg.setDestination(60509U);
    msg.setDestinationEntity(205U);
    msg.sys_src.assign("RWVSBAHSCEFEPRLMYAKFGDPCTRGBWEHGNAFNNFCKSPGXLTMWJABQPASMUERVPBMZDCGWSHGSXPJWLIYNSDOOTSFIQMZQRNNXEJOJJBXUKJHLAHPIOOZRDCNXX");
    msg.sys_dst.assign("NCORUSVVBHORHCUILSCZJCIBYBMWQTTPGERIEYIXZUKKDGCLFWNECGOJDCUBQSRPWTGZXEDRPMHJBCZDYNAEBVILUABPKUOAVLPDAKSXTFZSZWZNBPZJIUWKFTBAONKVLXEPYXTDKEVTMNMOWUSSSMMXMTHQLGBNMAYQ");
    msg.flags = 44U;
    const char tmp_msg_0[] = {-100, -18, -47, 72, 103, -51, -77, 88, -51, -106, -33, -32, 115, 120, -53, 16, 62, -50, -98, -89, 62, -24, -19, -39, 18, -104, -10, -94, 0, 54, -30, -92, 1, 103, 92, 73, 45, 95, -76, 124, 73, 20, 109, -51, 24, 38, -115, -78, -43, -119, 102, 57, -81, -67, -35, 17, 120, -72, 94, -56, -21, -65, -67, -66, 118, 39, 103, 18, -92, 53, 99, -16, 85, 53, -81, 33, 67, -31, 41, -107, -27, -47, 88, 101, -62, -17, -92, -127, -104, 85, 73, -93, 124, 119, -35, 123, 4, 13, -46, -105, 96, -81, -105, -47, -69, -79, -127, -114, -55, -58, -43, -28, 121, 69, -12, 96, -2, 120, 21, -99, -37, -62, 68, 34, 91, 107, 119, 25, -13, -51, -51, -90, 56, 126, 41, 54, -81, -90, -17, -19, 43, 123, -111, -50, 17, 111, 17, -91, 76, -1, -57, -90, -79, -31, -53, 2, -117, 118, 93, 87, -117, -6, 109, 72, -45, -87, -107, -116, -29, -69, 46, 66, -113, 51, 78, 53, 10, 26, -2, 100, 30, -127, 71, -128, 46, 84, 32, 112, -124, 59, 19, 80, 57, 90, -89, 0, 110, 68, 88, -125, 109, 46, 78, 115, -21, -30, -20, -35, 42, 92, -35, 103, 73, -6, 29, 34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.010098348175712979);
    msg.setSource(3754U);
    msg.setSourceEntity(222U);
    msg.setDestination(17352U);
    msg.setDestinationEntity(56U);
    msg.sys_src.assign("BMRTVQNGOHYPQJXGXAXVPQQCUSLBFZQZTOFJDMIJXJYWDNOADHRDBERXYXUKHVUSILOSKRURWDWZPYGSWIOTKCNXQHLJZEPUMHQMVSZOLFPIFNWIRCLGTWRABQGWTENUNAIFROSPVJZ");
    msg.sys_dst.assign("OWBYKMFELOXTUKDCJFGZVDOUEHLAIDUH");
    msg.flags = 130U;
    const char tmp_msg_0[] = {20, 97, 18, -94, -20, -9, 82, 115, 11, -84, -93, -47, -105, 91, -118, 108, 46, 1, -77, 61, -72, -88, -123, 89, 101, 103, -34, -5, 117, 64, -124, -106, -85, 57, 88, -74, 98, -51, -2, 41, 50, -9, 126, -64, -25, -68, -88, 103, 115, 102, 11, 62, 36, 13, 100, 45, 83, -68, -7, 66, 68, 96, 24, 25, -120, -5, 9, 89, 0, -90, -123, -124, -69, 106, 40, 51, -12, 108, -53, 42, -39, 73, -55, 111, 25, -99, -72, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.9485821674280975);
    msg.setSource(11920U);
    msg.setSourceEntity(186U);
    msg.setDestination(100U);
    msg.setDestinationEntity(188U);
    msg.seq = 57498U;
    msg.value = 105U;
    msg.error.assign("UFEQVCSRUWZAUQNQLHRKCLJTKICGPLMWMBHVKFGMHUMNZRHEXEEDRANXNVXUVGGYGTTSYXNEFSMGXNJSLWZBMGAPAWNFATXDCZOOBETPBPEMJKLOLPRZMABENKUPIWRQZHOOGJTQZCCVKALDMBSQYYBFHKWXZJSGYVKOUJTUIAEYOQMFSLKINFJSIURHYOAUCRSZDFOVDITIPCFVPCXHYLWJEWCVJDWLWRYQDBTHFQHQPBIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.11885167726664225);
    msg.setSource(26534U);
    msg.setSourceEntity(45U);
    msg.setDestination(17297U);
    msg.setDestinationEntity(72U);
    msg.seq = 995U;
    msg.value = 147U;
    msg.error.assign("DOOZWPWOKCDYQBWSFULATUXPCRPUAJZZBKSYJJBXRSGZITIRNVVXYAPILUBFJQKVXRSQMOKKXHMUQDNVMUKAHXYKNNTEHDEQIFTCSNTKKIJCODGVIXSYNWTAYFGPEQLNSBYBGCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.9117778580259112);
    msg.setSource(15519U);
    msg.setSourceEntity(97U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(57U);
    msg.seq = 32547U;
    msg.value = 42U;
    msg.error.assign("DZVAGFTJQYQXYJOHJRSNRQECEKUODMFTCKWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.6583526907637952);
    msg.setSource(59311U);
    msg.setSourceEntity(142U);
    msg.setDestination(25906U);
    msg.setDestinationEntity(177U);
    msg.seq = 50932U;
    msg.sys.assign("QZXYDQNGHTEFALWFOROMWOUBMYOMFWEQCREOCLFZGXNHYKXHQHVNZCZEZQYUMOJMZGNPZDBBYGPRSTATVUDOFIAVJWGJOFFCQQIR");
    msg.value = 0.09087170808448952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.21141102547038826);
    msg.setSource(22827U);
    msg.setSourceEntity(114U);
    msg.setDestination(51441U);
    msg.setDestinationEntity(133U);
    msg.seq = 16782U;
    msg.sys.assign("VKLYEKRSLGTZKPYYRIMMTBHGIHUEZQAVWWEDDGPKIKJKROQWSJFDKVJABBCQXFXFOLPNMMAWHTHYTQFQCSPOLYLMTSABGEJHYBLDJXNVTULTDWXORECTPZFAEPZOLWVTBGCXARYPJCQWXNNKSLVPROCIFVNVWJEXIBSMSGWCHXCNADEZNGNHFHYCIAMGUUWKZ");
    msg.value = 0.5106706364532652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.15370999872480628);
    msg.setSource(22229U);
    msg.setSourceEntity(209U);
    msg.setDestination(12950U);
    msg.setDestinationEntity(230U);
    msg.seq = 57216U;
    msg.sys.assign("ONVSPYPKWXIYWBUDBYIOQMGYWMGOXWZILFJRPNSJJUTSHHBXKPFSFTKBFPGQWXLBRKFEQJICNEAHYMFDVMDULNUQ");
    msg.value = 0.7058638355372341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.24297236503801434);
    msg.setSource(53940U);
    msg.setSourceEntity(217U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(242U);
    msg.action = 127U;
    msg.longain = 0.0847316048770358;
    msg.latgain = 0.596836257510631;
    msg.bondthick = 1071250735U;
    msg.leadgain = 0.2482879240756688;
    msg.deconflgain = 0.17408570800223722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.5126344178033237);
    msg.setSource(62941U);
    msg.setSourceEntity(219U);
    msg.setDestination(37328U);
    msg.setDestinationEntity(218U);
    msg.action = 148U;
    msg.longain = 0.7680074960605711;
    msg.latgain = 0.5838882983555728;
    msg.bondthick = 311031278U;
    msg.leadgain = 0.6629712164382889;
    msg.deconflgain = 0.1239271523481218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.9887360466362649);
    msg.setSource(49596U);
    msg.setSourceEntity(221U);
    msg.setDestination(18330U);
    msg.setDestinationEntity(115U);
    msg.action = 116U;
    msg.longain = 0.9720526334275156;
    msg.latgain = 0.6124856965598413;
    msg.bondthick = 2154346302U;
    msg.leadgain = 0.969285873947189;
    msg.deconflgain = 0.7133097185080235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.07353358719161485);
    msg.setSource(13296U);
    msg.setSourceEntity(135U);
    msg.setDestination(53493U);
    msg.setDestinationEntity(20U);
    msg.err_mean = 0.310651170911699;
    msg.dist_min_abs = 0.17608580735410184;
    msg.dist_min_mean = 0.1032365507971248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.04031510252873183);
    msg.setSource(59742U);
    msg.setSourceEntity(76U);
    msg.setDestination(16149U);
    msg.setDestinationEntity(28U);
    msg.err_mean = 0.742396451851176;
    msg.dist_min_abs = 0.8434846865573499;
    msg.dist_min_mean = 0.23758357740320446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.4836469677258235);
    msg.setSource(9449U);
    msg.setSourceEntity(215U);
    msg.setDestination(54545U);
    msg.setDestinationEntity(152U);
    msg.err_mean = 0.6866470467684211;
    msg.dist_min_abs = 0.8643006717941166;
    msg.dist_min_mean = 0.5388475760698773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.7749512647767246);
    msg.setSource(7047U);
    msg.setSourceEntity(190U);
    msg.setDestination(2724U);
    msg.setDestinationEntity(165U);
    msg.action = 6U;
    msg.lon_gain = 0.3751444959374748;
    msg.lat_gain = 0.14779578023296236;
    msg.bond_thick = 0.41155077203454005;
    msg.lead_gain = 0.2621692178216002;
    msg.deconfl_gain = 0.2935469539702491;
    msg.accel_switch_gain = 0.3336255089237793;
    msg.safe_dist = 0.16641947421233683;
    msg.deconflict_offset = 0.9668753798406574;
    msg.accel_safe_margin = 0.48131576357720307;
    msg.accel_lim_x = 0.9251468808415384;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.965541752261657);
    msg.setSource(34542U);
    msg.setSourceEntity(194U);
    msg.setDestination(55294U);
    msg.setDestinationEntity(3U);
    msg.action = 58U;
    msg.lon_gain = 0.7555403938086557;
    msg.lat_gain = 0.543883786379535;
    msg.bond_thick = 0.12329537624577569;
    msg.lead_gain = 0.5738372993366364;
    msg.deconfl_gain = 0.22911703323655397;
    msg.accel_switch_gain = 0.11545490357788046;
    msg.safe_dist = 0.0246950933493858;
    msg.deconflict_offset = 0.013111015006303184;
    msg.accel_safe_margin = 0.6510492382529451;
    msg.accel_lim_x = 0.7056014996931183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.4107060295912077);
    msg.setSource(8243U);
    msg.setSourceEntity(191U);
    msg.setDestination(55891U);
    msg.setDestinationEntity(96U);
    msg.action = 228U;
    msg.lon_gain = 0.007467245770078068;
    msg.lat_gain = 0.5097190779871534;
    msg.bond_thick = 0.7327594677006141;
    msg.lead_gain = 0.4573524827135269;
    msg.deconfl_gain = 0.6372258011597985;
    msg.accel_switch_gain = 0.6896415701090164;
    msg.safe_dist = 0.3040385430590289;
    msg.deconflict_offset = 0.42983920283462373;
    msg.accel_safe_margin = 0.759659125373781;
    msg.accel_lim_x = 0.9555306882907525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.7761937333681743);
    msg.setSource(25292U);
    msg.setSourceEntity(253U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(102U);
    msg.type = 220U;
    msg.op = 253U;
    msg.err_mean = 0.9035257644580089;
    msg.dist_min_abs = 0.23682833893075605;
    msg.dist_min_mean = 0.5019535878912512;
    msg.roll_rate_mean = 0.5133342152800661;
    msg.time = 0.09454057454587106;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 94U;
    tmp_msg_0.lon_gain = 0.09819911485067212;
    tmp_msg_0.lat_gain = 0.005818979494447207;
    tmp_msg_0.bond_thick = 0.49866463099515634;
    tmp_msg_0.lead_gain = 0.4900325564919453;
    tmp_msg_0.deconfl_gain = 0.16101911448916395;
    tmp_msg_0.accel_switch_gain = 0.6911183309522256;
    tmp_msg_0.safe_dist = 0.315656510761975;
    tmp_msg_0.deconflict_offset = 0.3432981351670985;
    tmp_msg_0.accel_safe_margin = 0.806529325885517;
    tmp_msg_0.accel_lim_x = 0.8391796131197286;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.18384207435194277);
    msg.setSource(51373U);
    msg.setSourceEntity(107U);
    msg.setDestination(28467U);
    msg.setDestinationEntity(177U);
    msg.type = 216U;
    msg.op = 116U;
    msg.err_mean = 0.899232112407184;
    msg.dist_min_abs = 0.8987052686403618;
    msg.dist_min_mean = 0.3894569391717101;
    msg.roll_rate_mean = 0.2998677231208363;
    msg.time = 0.14749368355344772;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 114U;
    tmp_msg_0.lon_gain = 0.2859595245997416;
    tmp_msg_0.lat_gain = 0.5505932083107781;
    tmp_msg_0.bond_thick = 0.4149590752937773;
    tmp_msg_0.lead_gain = 0.1960917266590647;
    tmp_msg_0.deconfl_gain = 0.43311161393951736;
    tmp_msg_0.accel_switch_gain = 0.40451543960878555;
    tmp_msg_0.safe_dist = 0.9865871560182212;
    tmp_msg_0.deconflict_offset = 0.4133699451530176;
    tmp_msg_0.accel_safe_margin = 0.20810671801880487;
    tmp_msg_0.accel_lim_x = 0.11425282633270728;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.30646047270820287);
    msg.setSource(65310U);
    msg.setSourceEntity(46U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(23U);
    msg.type = 141U;
    msg.op = 205U;
    msg.err_mean = 0.7107475332173844;
    msg.dist_min_abs = 0.4109216360593041;
    msg.dist_min_mean = 0.8195476158094199;
    msg.roll_rate_mean = 0.7015588009157189;
    msg.time = 0.4793508381907481;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 39U;
    tmp_msg_0.lon_gain = 0.35215991683048764;
    tmp_msg_0.lat_gain = 0.49853919601305396;
    tmp_msg_0.bond_thick = 0.468988371247425;
    tmp_msg_0.lead_gain = 0.9338156816850601;
    tmp_msg_0.deconfl_gain = 0.36273154451154255;
    tmp_msg_0.accel_switch_gain = 0.6476034225440824;
    tmp_msg_0.safe_dist = 0.05237347233251766;
    tmp_msg_0.deconflict_offset = 0.11702218732192637;
    tmp_msg_0.accel_safe_margin = 0.23118300477407194;
    tmp_msg_0.accel_lim_x = 0.2805062142418;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.4851610342306587);
    msg.setSource(10034U);
    msg.setSourceEntity(170U);
    msg.setDestination(62530U);
    msg.setDestinationEntity(148U);
    msg.uid = 191U;
    msg.frag_number = 166U;
    msg.num_frags = 39U;
    const char tmp_msg_0[] = {-112, -116, -79, 106, 58, -79, 48, -100, 105, -9, 68, 12, -14, 65, 38, 29, 87, -11, 58, 96, 53, -125, -80, 37, -120, -97, -1, -114, 53, 64, 84, 14, 24, -107, -47, -71, 75, -116, 6, 95, -89, 119, 16, -44, 85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.9100432114222535);
    msg.setSource(36577U);
    msg.setSourceEntity(51U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(13U);
    msg.uid = 106U;
    msg.frag_number = 152U;
    msg.num_frags = 1U;
    const char tmp_msg_0[] = {105, 63, -48, -101, 103, 95, 0, 68, -60, -118, 110, 89, -66, -59, -55, 58, 13, 123, 52, 107, 68, 113, -78, -90, 2, -103, -101, -15, -95, 92, 23, 118, -48, 117, -3, 81, 25, -27, -62, 24, -81, 74, 90, -13, 40, 124, 29, -63, 94, -69, 4, 69, 18, 22, 65, -18, 100, -106, 20, 17, 38, 126, 68, -100, 31, 62, 19, 53, -111, -18, -33, 49, 14, 69, -29, 84, -67, -44, -110, 12, 28, -42, -23, -44, -70, -46, 92, 98, 59, 86, 119, 76, 27, 8, 66, 106, -23, -128, -74, 94, 119, -127, 70, -61, 24, 76, -53, -89, -75, -84, -37, 31, 65, -110, 24, 65, -86, -87, 77, -73, -113, -90, 112, 78, -17, 68, -41, -54, -49, 82, -59, 3, -96, 44, 95, 10, -78, -30, 26, 48, -42, -43, 29, 70, 19, -92, 49, 20, 5, 90, -107, 12, -75, 36, -95, 106, 56, -117, -81, -82, -122, -37, 106, -6, -88, -118, -18, -66, 110, -50, 42, 46, 30, 20, -49, -120, -96, 74, 79, 59, -57, -20, 19, -86, 54, 18, 52, 104, -80, 106, -88, 14, -88, 46, -50, -63, 70, -40, -4, 57, -22, -93, -116, 90, -28, 96, -122, 61, -113, -103, -32, 67, -127, -68, 123, -38, -37, -31, 80, 66, 60, -98, 100, 27, -105, -101, 116, 69, 109, 41, -92, 102, 83, 6, -109, 45, 115, 61, 40, 14, 70, -113, -5, 6, -87, 124, -44, -103, -67, -94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.7563773042218128);
    msg.setSource(35618U);
    msg.setSourceEntity(48U);
    msg.setDestination(59498U);
    msg.setDestinationEntity(39U);
    msg.uid = 222U;
    msg.frag_number = 1U;
    msg.num_frags = 122U;
    const char tmp_msg_0[] = {-14, -2, -126, 73, 60, -118, -33, -57, -78, -44, 43, 100, 117, 119, -39, 50, 117, -11, -37, -125, 32, 113, -46, -63, 27, -51, -66, -68, 85, 54, 108, 9, 117, -102, -6, 122, -106, 2, 77, 37, 8, 23, 22, 9, 35, -70, 6, 107, 115, 23, 45, 28, 90, -28, -103, 36, 22, 29, 52, -79, 84, -119, 46, -25, -2, -91, -35, -116, -91, -33, -57, -32, 106, -50, 61, 108, 122, 11, 8, 28, -73, 72, 1, -18, -81, 61, 74, 69, -107, 94, -47, -102, 69, 77, 26, -20, 91, -1, -1, 3, 96, 13, -58, 111, 87, -2, -113, -99, -45, -82, -54, -44, -21, -115, -83, 44, 40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.9851148839987062);
    msg.setSource(62195U);
    msg.setSourceEntity(110U);
    msg.setDestination(64582U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("EZEACVHTKOMVNCIFBUQAGPDOGJFYCURNRAVDJGZULNRTUFMPCHCMPLZOROJAFHUOKSKASNUJLYMTWXDYRYYDYANSDEGAWPOBVGLSICILLBPDZKRKPXJHBWVIXOMLQIENOCFMVHVXBGWYKOHJTNXRZFCBEPTDELEQC");
    const char tmp_msg_0[] = {9, 53, -18, -55, 68, -94, -40, -69, 57, 125, 125, 85, -100, 122, -121, 17, -12, -118, -3, 10, 70, -33, -14, -29, -85, 107, -81, 122, -7, 28, -33, 106, 31, -16, 66, -26, 11, -79, -34, 90, 91, 9, 81, 27, -113, 60, 22, -99, 61, -4, 109, -3, -75, -69, 58, -41, 64, -35, 98, -114, -69, -128, 23, 70, -25, -63, 21, -18, 7};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.24714989320861436);
    msg.setSource(53190U);
    msg.setSourceEntity(55U);
    msg.setDestination(23951U);
    msg.setDestinationEntity(37U);
    msg.content_type.assign("LDBRTVNGTBONVKWNTKJGYXHSOEWJHPOLTMIRQOKCAIORNUJXJZBXHQYCN");
    const char tmp_msg_0[] = {-70, -74, 78, 20, 11, -24, 57, 70, -19, -9, -69, 72, 96, 100, -28, -35, -90, -70, 123, 112, -108, -65, 18, -7, -102, -124, -2, 79, -25, 11, 124, 124, 46, -25, -76, -95, 77, -125, -94, -76, -112, 51, 29, 112, -104, -47, -52, 57, 62, -54, -68, 49, 80, 103, 118, 15, -44, 76, 97, -19, 6, 61, 111, 105, 56, 70, 18, 117, 119, -35, -95, -105, 91, 36, -110, 119, 20};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.07456934448127894);
    msg.setSource(21980U);
    msg.setSourceEntity(121U);
    msg.setDestination(41461U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("BGMYUQMWCTIEVATPLNKRQDDPHGOZUCJABIYQVGXPPAIJJNUFZRGTFLQVIAKLMJCSBUQMQCTISZHZBZKYSALTGMZYNTKXXNOHFOQNGXHZLDKJNEICJHSORPUBJVTYIOICKARTUFCSVOGHMCSTVUFYZMVMHKOYIQGW");
    const char tmp_msg_0[] = {25, -29, 34, -45, -79, 3, 116, -106, -30, -89, -41, 63, -118, -113, -19, -116, -58, 14, 32, 25, -114, -45, -52, -98, 77, -80, -25, -35, 112, 71, 99, 63, -21, 109, -55, -48, 103, 54, -17, 126, 10, -117, -79, 39, -111, 63, 110, 71, 126, 121, -25, -62, 50, 2, -8, 105, 14, -111, 12, -106, 115, -90, -40, 113, 78, -64, -59, -55, 33, 84, 37, 77, 119, -59, 124, -2, -81, -63, -95, -127, -99, -74, -43, 126, -60, 123, 53, 77, 115, 115, 87, 14, -105, 58, -42, -105, -75, -115, -113, -48, -67, 7, 96, 1, 13, 125, 41, -66, -119, 82, -21, -95, -48, -67, -70, 87, 96, -104, -10, 20, -57, -123, 86, 71, -102, -4, -56, 118, -119, -67, 20, 57, -67, 81, 13, -23, -80, 113, 58, -66, 112, -57, 27, 58, 1, -18, -84, 117, 95, -73, -76, 77, 120, 118, 19, -107, 38, 55, 117, -16, -101, -122, 28, -54, 43, 119, 81, 60, 38, -31, -122, -69, -67, -80, -33, 113, -1, 63, 30, 62, 3, -115, -98, 62, 110, 112, 82, -103, 125, -77, -60, -1, -62, 37, 23, 0, 50, 99, 60, 43, -65, -34, 62, 70, -64, -58, 62, 41};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.8222836705258627);
    msg.setSource(52533U);
    msg.setSourceEntity(226U);
    msg.setDestination(18725U);
    msg.setDestinationEntity(71U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.8952734595564488);
    msg.setSource(28553U);
    msg.setSourceEntity(160U);
    msg.setDestination(2847U);
    msg.setDestinationEntity(115U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.6852426856675236);
    msg.setSource(6714U);
    msg.setSourceEntity(154U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.917099928265365);
    msg.setSource(51943U);
    msg.setSourceEntity(165U);
    msg.setDestination(23385U);
    msg.setDestinationEntity(19U);
    msg.target = 11786U;
    msg.bearing = 0.446219369008648;
    msg.elevation = 0.41140277721288965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.14497962736419634);
    msg.setSource(28727U);
    msg.setSourceEntity(97U);
    msg.setDestination(35970U);
    msg.setDestinationEntity(253U);
    msg.target = 4519U;
    msg.bearing = 0.10101006049842998;
    msg.elevation = 0.41670053131090623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.26064815021911714);
    msg.setSource(411U);
    msg.setSourceEntity(117U);
    msg.setDestination(34850U);
    msg.setDestinationEntity(126U);
    msg.target = 65183U;
    msg.bearing = 0.34709316939718715;
    msg.elevation = 0.12766882102456056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.6532207186504584);
    msg.setSource(63282U);
    msg.setSourceEntity(214U);
    msg.setDestination(22853U);
    msg.setDestinationEntity(20U);
    msg.target = 28879U;
    msg.x = 0.42534608026070575;
    msg.y = 0.43476097828993765;
    msg.z = 0.046407424975007605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.7969486480881672);
    msg.setSource(18208U);
    msg.setSourceEntity(162U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(242U);
    msg.target = 38471U;
    msg.x = 0.244468376029356;
    msg.y = 0.8475684120884398;
    msg.z = 0.9484856691339194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.9944992074849799);
    msg.setSource(15940U);
    msg.setSourceEntity(227U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(38U);
    msg.target = 46554U;
    msg.x = 0.8689674268870083;
    msg.y = 0.6114161897058907;
    msg.z = 0.40751289334925167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.6148310562294698);
    msg.setSource(16745U);
    msg.setSourceEntity(203U);
    msg.setDestination(40299U);
    msg.setDestinationEntity(133U);
    msg.target = 17383U;
    msg.lat = 0.14857943187396216;
    msg.lon = 0.9776819859970823;
    msg.z_units = 202U;
    msg.z = 0.16168814712715018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.7889068445177095);
    msg.setSource(10395U);
    msg.setSourceEntity(252U);
    msg.setDestination(61250U);
    msg.setDestinationEntity(49U);
    msg.target = 4207U;
    msg.lat = 0.45785150924991536;
    msg.lon = 0.16377538237679212;
    msg.z_units = 137U;
    msg.z = 0.6706077495661114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.028091005455575413);
    msg.setSource(6120U);
    msg.setSourceEntity(174U);
    msg.setDestination(7937U);
    msg.setDestinationEntity(7U);
    msg.target = 38047U;
    msg.lat = 0.969676997866081;
    msg.lon = 0.8345028114305334;
    msg.z_units = 6U;
    msg.z = 0.51725751036555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.003445749747089888);
    msg.setSource(63712U);
    msg.setSourceEntity(110U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(196U);
    msg.locale.assign("JZWANIJLEPOQQFKIIYTIDRLITOGRXMQYNHRRGNDBFVQSCMEBNCESKJGXYVEVSLGFSBZLGSUUFXHWAJFEMUQPWPZADCYTFAWUPNLRVGTSTEKNOLBLXATAHIRHOCTPYKSGYJKZQIADVWPKBZMCBXXTSZJFVUIKHKLRTPZYKQOCRLMFBARNMUEMEJONOJDGWIYDRCEBVZZHBJLVWPSMWDQWQAWNPUYJMHXVUHTZFHG");
    const char tmp_msg_0[] = {24, -100, 0, 87, 119, -86, 75, 6, -125, -46, 107, 61, 102, -119, -119, -9, -9, -34, -5, 82, -31, 47, -120, -67, 62, -55, 65, -106, -7, 89, -6, -37, 113, 38, -44, -45, 99, -72, 27, -85, -54, -64, -73, 3, -24, 28, -118, 124, 80, -114, -61, -120, -120, -9, 115, -58, 85, -4, -41, 45, 94, -68, 105, 86, 23, 40, -118, 40, 56, -106, -9, -23, 15, -66, -77, 40, 28, -111, -121, 29, -118, 49, 15};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.13126376647445903);
    msg.setSource(23431U);
    msg.setSourceEntity(134U);
    msg.setDestination(42241U);
    msg.setDestinationEntity(46U);
    msg.locale.assign("VLSJGGZHRDCIMZMYHDBIQZMKLZDETBUOTUZRQVAWIETIAEQOGZVLLFHIDCPEFLGMPEPUNCUBTUOFGOYXHXCCWRFXEJBXYXBPDDRHABOGRIXFJLKOXGPSWKYVPKMFJQGKBSWASBFVPHTGHCBFWSDAZKQIKWCVLAOJNVYGMQLHDTSYMYOEJNEWMYQQHIRLZNCJAJTQRNWHSSNXZUUYPWNOMDSTKAVUCDQVPRMTIABPNIYNLZF");
    const char tmp_msg_0[] = {-128, -22, 121, 13, -66, -27, 20, -128, 6, 86, 26, -82, -107, 44, -52, -59, -46, 62, -82, -16, 79, -75, 82, -113, -30, 79, 86, 4, -2, -61, 35, -2, 101, 121, 18, -69, -1, -1, 37, -85, -68, 45, 111, -55, 66, -119, 117, -71, 112, -49, -102, 31, 45, -87, -73, 126, 11, -112, -116, 110, -69, -110, -50, -40, 72, 46, 68, 114, -71, 77, 106, 39, 41, -82, -85, 54, -62, -76, 25, -73, 87, -43, -91, 67, -86, -39, 50, -127, 72, 1, 54, 108, -97, 126, 97, -37, 98, 6, 69, -24, 103, 12, -40, 43, -120, 36, 47, 93, 32, 0, -92, 23, -33, 122, 0, 123, -40, 38, -24, 115, -119, -7, -12, -55, -127, 22, 106, 124, -1, -78, 54, 32, 80, -29, -96, 107, 5, 10, 108, -72, 19, 11, 61, -19, -84, 36, 33, 121, 86, -66, -61, 40, 70, 122, 123, 73, 113, -32, 81, 2, 16, -120, 26, -94, -103, -73, -52, -70, 116, -93, -108, -41, -19, 34, -110, -90, -5, 38, -97, -114, 46, -30, 107, -44, 70, -88, 48, 61, 124, 21, 107, 67, -28, -44, 9, -61, -29, -18, -3, 50, -88, 63, 62, -74, -85, 17, 46, 82, 47, 85, 91, 76, -52, 77, 52, 74, 32, 118, -77, -9, 56, -107, 41, -108, -68, -128, -31, -41, 88, 62, 3, -30, 126, 49, 57, 97, -123, 57, 106, 119, -46, -107, 65, 38, -61, -117, 55, -92, -116, 109};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.7658388712138522);
    msg.setSource(24615U);
    msg.setSourceEntity(224U);
    msg.setDestination(59988U);
    msg.setDestinationEntity(165U);
    msg.locale.assign("ZEFDEMOELTNHQIQFXHCNOS");
    const char tmp_msg_0[] = {102, 30, 9, 20, -110, -104, 123, -2, -77, -123, -88, 5, -22, -35, -122, -126, 44, -19, 120, 13, 70, -20, 82, -111, 57, -104, 110, 9, 53, -61};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.4197943224096059);
    msg.setSource(5072U);
    msg.setSourceEntity(149U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(131U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.5266994692143782);
    msg.setSource(454U);
    msg.setSourceEntity(10U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(68U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.5514877400039684);
    msg.setSource(48745U);
    msg.setSourceEntity(63U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(0U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.36244613789226543);
    msg.setSource(60296U);
    msg.setSourceEntity(95U);
    msg.setDestination(52016U);
    msg.setDestinationEntity(217U);
    msg.highpass = 0.43398727361179446;
    msg.adot = 0.3077992762892049;
    msg.slope_compensation = 0.8242665564698066;
    msg.slope_compensation_difference = 0.39557125316642305;
    msg.altitude = 0.6007716089950529;
    msg.auto_altitude = 0.2133231522916078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HighpassControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.8440844954107017);
    msg.setSource(54302U);
    msg.setSourceEntity(85U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(59U);
    msg.highpass = 0.02322943381684406;
    msg.adot = 0.1027962245789239;
    msg.slope_compensation = 0.5214545136075098;
    msg.slope_compensation_difference = 0.31569950040946915;
    msg.altitude = 0.3296296041328499;
    msg.auto_altitude = 0.42669169889303604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HighpassControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HighpassControlParcel msg;
    msg.setTimeStamp(0.43401394313721187);
    msg.setSource(5953U);
    msg.setSourceEntity(96U);
    msg.setDestination(1666U);
    msg.setDestinationEntity(196U);
    msg.highpass = 0.3007860447422397;
    msg.adot = 0.9931088448914408;
    msg.slope_compensation = 0.0036892292328831733;
    msg.slope_compensation_difference = 0.8983321006790239;
    msg.altitude = 0.11897646931031447;
    msg.auto_altitude = 0.45085887209118547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HighpassControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconStatus msg;
    msg.setTimeStamp(0.5761171641478018);
    msg.setSource(7494U);
    msg.setSourceEntity(252U);
    msg.setDestination(6593U);
    msg.setDestinationEntity(232U);
    msg.remote_control_allowed = 81U;
    msg.remote_control_enabled = 228U;
    msg.remote_control_active = 116U;
    msg.depth_only_control_enabled = 153U;
    msg.direct_control_enabled = 202U;
    msg.return_to_closest_point_on_line = 232U;
    msg.on_shore_power = 7U;
    msg.latitude = 0.5434046096689514;
    msg.longitude = 0.5752035064310861;
    msg.depth = 0.791346551202627;
    msg.depth_ref = 0.8197081976629114;
    msg.altitude = 0.723054378418785;
    msg.altitude_ref = 0.6003648155047876;
    msg.pitch = 0.9521901563661345;
    msg.roll = 0.7519284435961302;
    msg.rpm = 0.5377857819088394;
    msg.rpm_ref = 0.09618123162413705;
    msg.speed = 0.9085419590278908;
    msg.speed_ref = 0.5136457234971952;
    msg.heading = 0.28651349819343597;
    msg.heading_rate = 0.09803647472890653;
    msg.heading_ref = 0.2392529829353116;
    msg.mission_state = 17U;
    msg.leg = 2898896609798474926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconStatus msg;
    msg.setTimeStamp(0.01864195832752069);
    msg.setSource(18745U);
    msg.setSourceEntity(36U);
    msg.setDestination(43727U);
    msg.setDestinationEntity(163U);
    msg.remote_control_allowed = 144U;
    msg.remote_control_enabled = 11U;
    msg.remote_control_active = 36U;
    msg.depth_only_control_enabled = 44U;
    msg.direct_control_enabled = 217U;
    msg.return_to_closest_point_on_line = 201U;
    msg.on_shore_power = 86U;
    msg.latitude = 0.4497531787269081;
    msg.longitude = 0.4559894618168825;
    msg.depth = 0.9067777670237359;
    msg.depth_ref = 0.9723260811173369;
    msg.altitude = 0.19583878161346502;
    msg.altitude_ref = 0.8202822563739339;
    msg.pitch = 0.781175397463543;
    msg.roll = 0.3362153586927712;
    msg.rpm = 0.783512822137949;
    msg.rpm_ref = 0.6416781407194309;
    msg.speed = 0.7777576910117967;
    msg.speed_ref = 0.3504129348998145;
    msg.heading = 0.545982915013021;
    msg.heading_rate = 0.19059128694834648;
    msg.heading_ref = 0.17927480669905527;
    msg.mission_state = 88U;
    msg.leg = 7610342820009072117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconStatus msg;
    msg.setTimeStamp(0.2193099815917806);
    msg.setSource(28653U);
    msg.setSourceEntity(200U);
    msg.setDestination(18312U);
    msg.setDestinationEntity(122U);
    msg.remote_control_allowed = 25U;
    msg.remote_control_enabled = 1U;
    msg.remote_control_active = 187U;
    msg.depth_only_control_enabled = 133U;
    msg.direct_control_enabled = 12U;
    msg.return_to_closest_point_on_line = 38U;
    msg.on_shore_power = 22U;
    msg.latitude = 0.45651900695282543;
    msg.longitude = 0.2191266441397428;
    msg.depth = 0.7125903536459305;
    msg.depth_ref = 0.7448829673307291;
    msg.altitude = 0.11364831699676414;
    msg.altitude_ref = 0.6791293926941409;
    msg.pitch = 0.13646930545607416;
    msg.roll = 0.8053333882375839;
    msg.rpm = 0.052539621286837646;
    msg.rpm_ref = 0.9086229456885112;
    msg.speed = 0.5828380765543367;
    msg.speed_ref = 0.6374031540847653;
    msg.heading = 0.26806761226420117;
    msg.heading_rate = 0.7096920755934435;
    msg.heading_ref = 0.2178508503530454;
    msg.mission_state = 173U;
    msg.leg = 7192251032692310739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconCommand msg;
    msg.setTimeStamp(0.49345425078227634);
    msg.setSource(26095U);
    msg.setSourceEntity(51U);
    msg.setDestination(26054U);
    msg.setDestinationEntity(156U);
    msg.name.assign("RMYSBDJRNNGIBHCVSPUNYOLCEIWHXXKWKTMOWCJZHIZUNSQFRGOAQMPHJMENZQTWTAWBHYMACAXENYEDDXPKFFBIDGVXYJUWRLLPXDHLQMBVSKPIBUCQSBORWEANGWNEHBTPZFFKTLHGHOQJVZUSVVPLWYKRDSYWOERERCZSXYOCNL");
    msg.arg1 = 0.5501136912588691;
    msg.arg2 = 0.6701172910098986;
    msg.arg3 = 0.47770079536470156;
    msg.arg4 = 0.4791407530930203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconCommand msg;
    msg.setTimeStamp(0.117039633299721);
    msg.setSource(25221U);
    msg.setSourceEntity(46U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(40U);
    msg.name.assign("VVDKGDCHNAQCEZLTDSCEWIVFCDEXXNRNGTSOPJNJCBYEKDQVUASKEWLZLBNQYDRDXBHNSKHDCQGXZEAAKUZGAMGGFKAYHOUYRRIQTWCBXBSEMNUWJLIMURWPTAIMHOPRQCANPP");
    msg.arg1 = 0.485316944738331;
    msg.arg2 = 0.7136254793630034;
    msg.arg3 = 0.49150778016584673;
    msg.arg4 = 0.3658440569003888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconCommand msg;
    msg.setTimeStamp(0.9492674750239753);
    msg.setSource(16864U);
    msg.setSourceEntity(250U);
    msg.setDestination(21450U);
    msg.setDestinationEntity(229U);
    msg.name.assign("QWCOIQWAZNZRFOXXNKJIXQWVBRTBEONIDCQARIOZCEDGKHJMSPYAUKKIGMTRRSVTUEWOESDNOLTCLJNPIPUTZYHKLSCFTWLBODQKDYTUNHTAVALRJMBJHMBEHGNVQMGHCZZZFJWVLSAQAV");
    msg.arg1 = 0.8935345581380147;
    msg.arg2 = 0.5328018824688303;
    msg.arg3 = 0.401044935225103;
    msg.arg4 = 0.8751799812684665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRanges msg;
    msg.setTimeStamp(0.6012235138981392);
    msg.setSource(48878U);
    msg.setSourceEntity(57U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(186U);
    msg.direction = 75U;
    msg.range1 = 0.41230547893726877;
    msg.range2 = 0.3650510280513246;
    msg.range3 = 0.009893173428596524;
    msg.range4 = 0.6154965030176395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRanges #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRanges msg;
    msg.setTimeStamp(0.8872142079162644);
    msg.setSource(6471U);
    msg.setSourceEntity(124U);
    msg.setDestination(15508U);
    msg.setDestinationEntity(188U);
    msg.direction = 225U;
    msg.range1 = 0.644234087580464;
    msg.range2 = 0.3425897686545779;
    msg.range3 = 0.3514737473947447;
    msg.range4 = 0.7815328913940138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRanges #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRanges msg;
    msg.setTimeStamp(0.5977773814567106);
    msg.setSource(24533U);
    msg.setSourceEntity(158U);
    msg.setDestination(44456U);
    msg.setDestinationEntity(103U);
    msg.direction = 119U;
    msg.range1 = 0.7017562398946252;
    msg.range2 = 0.6681150673134066;
    msg.range3 = 0.9374650679378381;
    msg.range4 = 0.403922315046667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRanges #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconMessage msg;
    msg.setTimeStamp(0.07549775461330321);
    msg.setSource(4677U);
    msg.setSourceEntity(229U);
    msg.setDestination(29471U);
    msg.setDestinationEntity(74U);
    msg.msg.assign("BWCAYITTGOFNQOUYLFNDCZHJMIBDJRNXXHNZESZXXVCOXGEIKWTJVCGYYTRFAFPAAPIYQTBOYKDUHEKJCOHFPNSGLIMJVYHTKWZGSFRBGAJQZCETPFLRUOTROUZVJAIWWMFGKR");
    msg.direction = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconMessage msg;
    msg.setTimeStamp(0.4622833178797383);
    msg.setSource(28851U);
    msg.setSourceEntity(235U);
    msg.setDestination(17482U);
    msg.setDestinationEntity(123U);
    msg.msg.assign("QGPFQKTIKOXOLHRYMUYERTQZDVDWDUXSKXIRCLDMQVLVGJRAOVJQIWPYKHLSQILKJUEJNXZAPMYWKLDCUIDVAFLKCNRCWYUGJNZHOKIUJEZ");
    msg.direction = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconMessage msg;
    msg.setTimeStamp(0.697988438712593);
    msg.setSource(40330U);
    msg.setSourceEntity(238U);
    msg.setDestination(60613U);
    msg.setDestinationEntity(101U);
    msg.msg.assign("ZOYMMQTAEMVNYPKKHFTKGMMXNXINHSRYETONLUCBPKSAXRJQYPPLNBEIXWRMTCSURNBFXGLQEZYHVZAGCOQYKHIHYSOWUURRJCBWZRZXFPSYIDBHHSDVFBBADJDICOEVJKKJXDUFWRQNECLNVIXQWTDCNFAQLKISUOXKALGPXEYQEQLZJCAJGD");
    msg.direction = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconControlState msg;
    msg.setTimeStamp(0.4876268145845486);
    msg.setSource(2001U);
    msg.setSourceEntity(223U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(143U);
    msg.state = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconControlState msg;
    msg.setTimeStamp(0.04897177414519904);
    msg.setSource(45681U);
    msg.setSourceEntity(112U);
    msg.setDestination(17234U);
    msg.setDestinationEntity(59U);
    msg.state = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconControlState msg;
    msg.setTimeStamp(0.043688892378748734);
    msg.setSource(27006U);
    msg.setSourceEntity(228U);
    msg.setDestination(1543U);
    msg.setDestinationEntity(164U);
    msg.state = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdotDebug msg;
    msg.setTimeStamp(0.6496983778803308);
    msg.setSource(410U);
    msg.setSourceEntity(144U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(200U);
    msg.dt = 0.4291676882049571;
    msg.k_d = 0.23912853872154038;
    msg.range1 = 0.21334945501802272;
    msg.range2 = 0.22889935464545108;
    msg.range3 = 0.07593205104271394;
    msg.range4 = 0.649201465144609;
    msg.u = 0.6383663222010463;
    msg.v = 0.8630608495531571;
    msg.w = 0.6626505168635328;
    msg.phi = 0.5880702600974901;
    msg.theta = 0.7483566710924348;
    msg.psi = 0.3194685426087551;
    msg.adot = 0.22845079032032856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdotDebug #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdotDebug msg;
    msg.setTimeStamp(0.027608508997390646);
    msg.setSource(24301U);
    msg.setSourceEntity(226U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(29U);
    msg.dt = 0.8461740028129644;
    msg.k_d = 0.40893110046955516;
    msg.range1 = 0.7444831793122562;
    msg.range2 = 0.285623067512894;
    msg.range3 = 0.8406651227724943;
    msg.range4 = 0.4829793455074747;
    msg.u = 0.6313279720431972;
    msg.v = 0.459462369206749;
    msg.w = 0.5138950657854326;
    msg.phi = 0.46729433208136195;
    msg.theta = 0.8485589464511631;
    msg.psi = 0.2897841457492465;
    msg.adot = 0.2423244062876777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdotDebug #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AdotDebug msg;
    msg.setTimeStamp(0.0221011161121335);
    msg.setSource(64070U);
    msg.setSourceEntity(169U);
    msg.setDestination(58082U);
    msg.setDestinationEntity(112U);
    msg.dt = 0.636379105587582;
    msg.k_d = 0.41891762021273304;
    msg.range1 = 0.2419776591781484;
    msg.range2 = 0.5646240476090599;
    msg.range3 = 0.4677483099013038;
    msg.range4 = 0.24341156715561119;
    msg.u = 0.3523004270345015;
    msg.v = 0.24934421606991075;
    msg.w = 0.716774242873305;
    msg.phi = 0.15749854275731168;
    msg.theta = 0.8131311309303488;
    msg.psi = 0.40859360038487913;
    msg.adot = 0.5405267153987454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AdotDebug #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
