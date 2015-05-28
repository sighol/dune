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
// IMC XML MD5: 428f13c4fdea22e19e769a78b6dd23af                            *
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
    msg.setTimeStamp(0.41699751619263936);
    msg.setSource(14640U);
    msg.setSourceEntity(16U);
    msg.setDestination(5000U);
    msg.setDestinationEntity(169U);
    msg.state = 4U;
    msg.flags = 121U;
    msg.description.assign("EKCTXASBVZCVLOIKARHNHYMMKNFOEMVPLJBJUKYCIVBJASWYAJFHQWBYTNDFXHMXEMGIXPSOIPAUGKUXXLEVNSKFCGSAPHQTMRBICTGMGHNZFL");

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
    msg.setTimeStamp(0.7381920034665503);
    msg.setSource(54323U);
    msg.setSourceEntity(151U);
    msg.setDestination(3726U);
    msg.setDestinationEntity(105U);
    msg.state = 118U;
    msg.flags = 81U;
    msg.description.assign("WCNHCOJPWUXXEUFPAIEZTNVRODGWWBUYBBIFKFPUSBIFJKAOHJANLGSYSVTJQUHHFFLOEHLSYMBFNOGVCDYZQTPTRDKXWWLMDBCXPTAVHNIQNGMAFGJVYKAQRTQZTTPWCWPSEYVKEIUCEGXDZEBSLINSRQXDWOZEPUKAHMTOVKRVURVGDS");

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
    msg.setTimeStamp(0.987975843618797);
    msg.setSource(64884U);
    msg.setSourceEntity(215U);
    msg.setDestination(28576U);
    msg.setDestinationEntity(74U);
    msg.state = 245U;
    msg.flags = 86U;
    msg.description.assign("RHOJSPAUMUPUFDP");

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
    msg.setTimeStamp(0.17178143549067493);
    msg.setSource(49723U);
    msg.setSourceEntity(243U);
    msg.setDestination(14740U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.10856683230068565);
    msg.setSource(634U);
    msg.setSourceEntity(55U);
    msg.setDestination(53228U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.4956594770095397);
    msg.setSource(14463U);
    msg.setSourceEntity(232U);
    msg.setDestination(23747U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.9632044364280027);
    msg.setSource(12149U);
    msg.setSourceEntity(223U);
    msg.setDestination(16662U);
    msg.setDestinationEntity(180U);
    msg.id = 1U;
    msg.label.assign("CTZPBWGKCZDLNNXHRROGPZARFPSGLUJFNVWSIFGHJUFKBUEJMFZSMAYXBMHNDVNUXMVCDDGAWJQNJLORNKLJQFTSQLFWDCXIDTREZMVTPAIDAKTSYQMHDDHRKCSIQAATLCUVKILBXYQEOEILBMGAYYZUVLMESBBQJEYPKQHIYZPVROGTVRHEEPNYQINOPSKYWFFUGVCNVYJIEWRFAOBOBKEJGSUQOPTHJWKRBMWUAXLTXSXTXC");
    msg.component.assign("VAMERYWGRJICVEPITIVIUDRNEYSGGOHSWBDMWGCKKHGGKLPYAHIYDNAYFAWQJHLBZEJJMQCNYULQPGXSXLJZMFFKLKRMNMCCPPLEMTHA");
    msg.act_time = 53368U;
    msg.deact_time = 45633U;

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
    msg.setTimeStamp(0.7296534107151068);
    msg.setSource(11705U);
    msg.setSourceEntity(67U);
    msg.setDestination(39506U);
    msg.setDestinationEntity(58U);
    msg.id = 120U;
    msg.label.assign("XUDSLNSHSZWMEMGNUXOTQITNVAXWKDYVIIRVHNYQEAZOILQSHRHPWTKSALKFGNUARJPRDRJYIYCRBBRGSDQREOOSPRDPUXELCLFIHXJWXKWPISWJKGTANVJCPZFBQXXFQSCNZPMBLMYJQETTNMDQICHGJDPGILL");
    msg.component.assign("VJQAFDKVDJQREOPUZRWKQZPCMLXYSXETKAIKJIEZCNFYBUTQZNFBPKCYJMYFWUGETXYFKEKFRTFQVCDLTJWRVGMQOMEPIUPRGWZLOWBOBIYUBIYFXCPOONTAUSCFNHVDZHZSNVACBTKCPVDGLOSMADWUBAQGEWAQWXARVWJS");
    msg.act_time = 896U;
    msg.deact_time = 14826U;

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
    msg.setTimeStamp(0.27992977784258066);
    msg.setSource(20208U);
    msg.setSourceEntity(153U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(205U);
    msg.id = 139U;
    msg.label.assign("UOQHYGZPUFPPPLHFBIEALXWEIJZHCSUVQWKNVKOIUARYJSEBFANDIKYAWLMDKOKIEUNBGIUDQZUASCZJZMWLWRGSOLDBHOJCHSVNHTHMTARMBQAGYZPAYMTXXVDGUSBDDIFQELWLXPKQRHXWVCRCPTBZTCRVOSYJMPLFPVMYTKARINKUFNGJFCFTFRCCAGEEMPXZTOZDNQRXIGGZWNYJUJVQSXHVTIKENYXRC");
    msg.component.assign("YKTBCIEPNGRCIZQXUODHBNNLHAEIFZUPHJULUQABGRMIJKEKVMDJVESWYTQBGOCFGXBNFYXZJFCJQXTQJIPZYAALRKRLCWDXYKWFOAFTKOVOBRGRAHZRUBLCFTYTOJZDNTWKMTLLWOIVIDLLSTBVDQVISQPUQEXPHXCXVNCZQTJEWYKHOZSGJCMMSBPMWSUWUFEUVAEMKNPWFGDDXQMENPHCAHUZGWGFPIRHOKMSDEYSSDPZLGIAJNHY");
    msg.act_time = 21342U;
    msg.deact_time = 53665U;

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
    msg.setTimeStamp(0.9128321194870732);
    msg.setSource(31752U);
    msg.setSourceEntity(127U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(182U);
    msg.id = 230U;

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
    msg.setTimeStamp(0.4048839858326263);
    msg.setSource(9460U);
    msg.setSourceEntity(124U);
    msg.setDestination(58902U);
    msg.setDestinationEntity(214U);
    msg.id = 253U;

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
    msg.setTimeStamp(0.0010178489776372368);
    msg.setSource(32432U);
    msg.setSourceEntity(143U);
    msg.setDestination(17901U);
    msg.setDestinationEntity(196U);
    msg.id = 227U;

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
    msg.setTimeStamp(0.919826030791028);
    msg.setSource(41065U);
    msg.setSourceEntity(170U);
    msg.setDestination(62332U);
    msg.setDestinationEntity(210U);
    msg.op = 11U;
    msg.list.assign("VSQTNRGOVIARBGXUVVGZDNYPYMWCXHEVNMQTQAQFWHNSHFCXLAILRHVVJRKFQOCEEDLYKTOBKYMRXHQVFCTCPPLMHHPC");

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
    msg.setTimeStamp(0.17454034679844233);
    msg.setSource(33664U);
    msg.setSourceEntity(176U);
    msg.setDestination(44861U);
    msg.setDestinationEntity(97U);
    msg.op = 219U;
    msg.list.assign("BSAWAZPGRTKEMOVUZGYZPCFCBWYOWGPTJEUPWQKURXIRCBYDRCT");

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
    msg.setTimeStamp(0.9289023654856061);
    msg.setSource(36727U);
    msg.setSourceEntity(24U);
    msg.setDestination(4701U);
    msg.setDestinationEntity(16U);
    msg.op = 163U;
    msg.list.assign("ZCXCVUKQVIFJZMIRCYRMWQOSQPMHEGBDXIGWULYTYJEPQOQGNDFIXLQWPMSFGJLSXVPVWVPZMRAPHAOXLIPKRVASZSMBLDGBWQSLIHTWUSEFCECNNKTVYNOEKCNHOTXORYBNMXVGHACCTFIDVNLZETUDRUKCKLXABTZURFDSUMTWHSFAQORYNPHJGTANEDXNAWDWIJDMIKYEZOQGEWCXKDYPJB");

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
    msg.setTimeStamp(0.10234905819987294);
    msg.setSource(41677U);
    msg.setSourceEntity(151U);
    msg.setDestination(13169U);
    msg.setDestinationEntity(66U);
    msg.value = 43U;

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
    msg.setTimeStamp(0.18806653976211773);
    msg.setSource(54984U);
    msg.setSourceEntity(180U);
    msg.setDestination(18711U);
    msg.setDestinationEntity(189U);
    msg.value = 38U;

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
    msg.setTimeStamp(0.3680858310814997);
    msg.setSource(62416U);
    msg.setSourceEntity(12U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(81U);
    msg.value = 51U;

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
    msg.setTimeStamp(0.41501955769553733);
    msg.setSource(20036U);
    msg.setSourceEntity(212U);
    msg.setDestination(43861U);
    msg.setDestinationEntity(16U);
    msg.consumer.assign("XZZDQGECFB");
    msg.message_id = 31952U;

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
    msg.setTimeStamp(0.40693015511722197);
    msg.setSource(23541U);
    msg.setSourceEntity(153U);
    msg.setDestination(61283U);
    msg.setDestinationEntity(70U);
    msg.consumer.assign("CSLRRGYXJHXFABXACVPTBHITPWSTUUIWRWNGPBKERLWLYZYUSWDQHIUEOF");
    msg.message_id = 24037U;

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
    msg.setTimeStamp(0.923515638224202);
    msg.setSource(54192U);
    msg.setSourceEntity(125U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(151U);
    msg.consumer.assign("AJONGCMDRNTORSCTBWKYSIFEMZXRWJVTSATRDGJSRGLHJZTVDPKOPPVRWYHHZFEGKGLDDVOMMOKHKUOUSBHGBQBIQMCNJU");
    msg.message_id = 34098U;

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
    msg.setTimeStamp(0.8086373425206462);
    msg.setSource(52201U);
    msg.setSourceEntity(29U);
    msg.setDestination(41791U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.4327076291735872);
    msg.setSource(56819U);
    msg.setSourceEntity(128U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.6263156003824109);
    msg.setSource(11181U);
    msg.setSourceEntity(127U);
    msg.setDestination(55852U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.6263199059405772);
    msg.setSource(18542U);
    msg.setSourceEntity(4U);
    msg.setDestination(12155U);
    msg.setDestinationEntity(231U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.5039677579376441);
    msg.setSource(14457U);
    msg.setSourceEntity(224U);
    msg.setDestination(42899U);
    msg.setDestinationEntity(119U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.3101644289352702);
    msg.setSource(51983U);
    msg.setSourceEntity(233U);
    msg.setDestination(53665U);
    msg.setDestinationEntity(201U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.4197181699140474);
    msg.setSource(56631U);
    msg.setSourceEntity(249U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(245U);
    msg.total_steps = 48U;
    msg.step_number = 7U;
    msg.step.assign("YMJAZTIXJWAMHQGSWVDUBMQARFPWIWKWRGQTAHIZECOJYEUDTDBLRPVOGTCKLSCJACKFOHZVRHFVLCROKODYMBWBUREOSTXCEYTFQKTBNHSYXAUKPZAOFOURFDKMVBNJNLMMEPENXGNXKVJIDHHBWYDQCECGEDQUCPIZJJVFURAEZNPHUYSIAZVUFMMOSY");
    msg.flags = 213U;

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
    msg.setTimeStamp(0.2653804459476684);
    msg.setSource(53359U);
    msg.setSourceEntity(28U);
    msg.setDestination(25388U);
    msg.setDestinationEntity(191U);
    msg.total_steps = 244U;
    msg.step_number = 160U;
    msg.step.assign("SBVAIWOQFEUHCMDHTIIASQXZRQHUYSHPYNEUULQCNJAMXFVXOXVRSHOQXHCKLKYXWGOCVTRDVAUPLPACMVDTGBEABFTPWFKALRZFOPJMIJBGMZCQPIPNMTXEDIDDQZROIJNYMZEXOWNCPELGMGLHDJWWTNTNSIRBGTZYNZEPSBYAYULJLSEGROBYZKJUOOKKGSKHGFXCQWBWWZTLQFRGEAEVFDUVUSHAMKTBQMYCYJ");
    msg.flags = 99U;

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
    msg.setTimeStamp(0.844771202607729);
    msg.setSource(20486U);
    msg.setSourceEntity(253U);
    msg.setDestination(23327U);
    msg.setDestinationEntity(192U);
    msg.total_steps = 46U;
    msg.step_number = 69U;
    msg.step.assign("QUBLSMISHNQRTGGROTALCHYUNS");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.7559471080937621);
    msg.setSource(34461U);
    msg.setSourceEntity(223U);
    msg.setDestination(19395U);
    msg.setDestinationEntity(44U);
    msg.state = 227U;
    msg.error.assign("FJRFVXFNAJCWONEEKMZJMSBWPHTXMDTLHVGMHLGVRJUQLUXCGBGAETTPCHMIJMOHWUIPCQVFOWMTBPNKHDQZGPAJNPKLSKJQEGPIXZSKCIEJRKXAFMEKKVMDDUBUWWGCURJTFCGKITIDLUFRGASOBXZEZULIHQNYWLTEU");

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
    msg.setTimeStamp(0.9168934820206057);
    msg.setSource(16445U);
    msg.setSourceEntity(95U);
    msg.setDestination(31054U);
    msg.setDestinationEntity(134U);
    msg.state = 93U;
    msg.error.assign("ICHDCMOBRITSCROAHDZTUKW");

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
    msg.setTimeStamp(0.4619650186050581);
    msg.setSource(11041U);
    msg.setSourceEntity(141U);
    msg.setDestination(28159U);
    msg.setDestinationEntity(210U);
    msg.state = 55U;
    msg.error.assign("XWODLYCTDIVDHIMTBMQKFLYBRYXWYUJQODTCCBRIOXQOICGQTEJVBXFBEW");

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
    msg.setTimeStamp(0.26091249640530534);
    msg.setSource(9614U);
    msg.setSourceEntity(196U);
    msg.setDestination(26028U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.7052330863698661);
    msg.setSource(60654U);
    msg.setSourceEntity(85U);
    msg.setDestination(31451U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.652941315120665);
    msg.setSource(39350U);
    msg.setSourceEntity(78U);
    msg.setDestination(61193U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.709524547621514);
    msg.setSource(16032U);
    msg.setSourceEntity(146U);
    msg.setDestination(8016U);
    msg.setDestinationEntity(74U);
    msg.op = 145U;
    msg.speed_min = 0.5870441568701538;
    msg.speed_max = 0.6573209999792002;
    msg.long_accel = 0.3902986985814131;
    msg.alt_max_msl = 0.4643689810298416;
    msg.dive_fraction_max = 0.7139843091546982;
    msg.climb_fraction_max = 0.8606283894663265;
    msg.bank_max = 0.563006480876603;
    msg.p_max = 0.41917578188807136;
    msg.pitch_min = 0.3138364592218973;
    msg.pitch_max = 0.7950473351317824;
    msg.q_max = 0.9602955326500386;
    msg.g_min = 0.2566248882656432;
    msg.g_max = 0.5204492611866106;
    msg.g_lat_max = 0.08786064845791663;
    msg.rpm_min = 0.12618347745905945;
    msg.rpm_max = 0.46372147881215997;
    msg.rpm_rate_max = 0.6010519405839541;

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
    msg.setTimeStamp(0.17300215971990662);
    msg.setSource(21998U);
    msg.setSourceEntity(170U);
    msg.setDestination(50200U);
    msg.setDestinationEntity(131U);
    msg.op = 34U;
    msg.speed_min = 0.6994523195386733;
    msg.speed_max = 0.8402874717493759;
    msg.long_accel = 0.6848588771686879;
    msg.alt_max_msl = 0.6861723828843589;
    msg.dive_fraction_max = 0.09529507336087717;
    msg.climb_fraction_max = 0.4532722769228483;
    msg.bank_max = 0.5232821458321132;
    msg.p_max = 0.31780019893225553;
    msg.pitch_min = 0.5265773285840186;
    msg.pitch_max = 0.5127780370973694;
    msg.q_max = 0.9423190884199373;
    msg.g_min = 0.509124791881544;
    msg.g_max = 0.6098646698328655;
    msg.g_lat_max = 0.2769087772501191;
    msg.rpm_min = 0.0450556677073336;
    msg.rpm_max = 0.4159706627834806;
    msg.rpm_rate_max = 0.3318482717335708;

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
    msg.setTimeStamp(0.19747184567043796);
    msg.setSource(51780U);
    msg.setSourceEntity(87U);
    msg.setDestination(50041U);
    msg.setDestinationEntity(230U);
    msg.op = 63U;
    msg.speed_min = 0.9809825794943429;
    msg.speed_max = 0.1887156689891355;
    msg.long_accel = 0.4018904094570991;
    msg.alt_max_msl = 0.11131413434498283;
    msg.dive_fraction_max = 0.10847445252160648;
    msg.climb_fraction_max = 0.7729522435946146;
    msg.bank_max = 0.8191518956103109;
    msg.p_max = 0.06593454940886856;
    msg.pitch_min = 0.3601260302216337;
    msg.pitch_max = 0.15379245510232287;
    msg.q_max = 0.28511295078087684;
    msg.g_min = 0.7446345867408575;
    msg.g_max = 0.8040329051518622;
    msg.g_lat_max = 0.8624622577172091;
    msg.rpm_min = 0.9829268460614158;
    msg.rpm_max = 0.36047433160182074;
    msg.rpm_rate_max = 0.6384168705575242;

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
    msg.setTimeStamp(0.8883983001369845);
    msg.setSource(20675U);
    msg.setSourceEntity(176U);
    msg.setDestination(4296U);
    msg.setDestinationEntity(23U);
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.5097367882312952;
    tmp_msg_0.y = 0.7285579924626806;
    tmp_msg_0.z = 0.7261637532070555;
    tmp_msg_0.k = 0.08484331162994951;
    tmp_msg_0.m = 0.9853265438306008;
    tmp_msg_0.n = 0.2002391060149068;
    tmp_msg_0.flags = 231U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7556275589009003);
    msg.setSource(27590U);
    msg.setSourceEntity(169U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.271611550966566);
    msg.setSource(26391U);
    msg.setSourceEntity(47U);
    msg.setDestination(39395U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.775959412578093);
    msg.setSource(11518U);
    msg.setSourceEntity(235U);
    msg.setDestination(6574U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.48120213804576173;
    msg.lon = 0.6447385940565431;
    msg.height = 0.17508359916082228;
    msg.x = 0.13620890798537366;
    msg.y = 0.20748636495087946;
    msg.z = 0.7708261475350473;
    msg.phi = 0.22988543572751952;
    msg.theta = 0.2532714012318621;
    msg.psi = 0.46531864165122117;
    msg.u = 0.581046015428426;
    msg.v = 0.6006646961458049;
    msg.w = 0.05294572897261596;
    msg.p = 0.6877234413105776;
    msg.q = 0.3425991855470183;
    msg.r = 0.5504543069701201;
    msg.svx = 0.41359316976783334;
    msg.svy = 0.6105358864270788;
    msg.svz = 0.5094597255985599;

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
    msg.setTimeStamp(0.6159057909427089);
    msg.setSource(31836U);
    msg.setSourceEntity(148U);
    msg.setDestination(50082U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.8422230280123628;
    msg.lon = 0.3694703256033579;
    msg.height = 0.8913116533856394;
    msg.x = 0.3876221245031811;
    msg.y = 0.14149666564837882;
    msg.z = 0.8143048248962721;
    msg.phi = 0.6826197947193292;
    msg.theta = 0.8347301564816106;
    msg.psi = 0.08500213456691452;
    msg.u = 0.43474955156236095;
    msg.v = 0.5267174517986013;
    msg.w = 0.7530119830870435;
    msg.p = 0.7959544915544449;
    msg.q = 0.1398741065610205;
    msg.r = 0.9078988247271716;
    msg.svx = 0.4641474745127656;
    msg.svy = 0.8129049259059415;
    msg.svz = 0.4759319700886715;

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
    msg.setTimeStamp(0.9798406563648758);
    msg.setSource(4397U);
    msg.setSourceEntity(187U);
    msg.setDestination(20160U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.4570120959852322;
    msg.lon = 0.7480190102806645;
    msg.height = 0.5661080123978445;
    msg.x = 0.741540652539012;
    msg.y = 0.17234177281300989;
    msg.z = 0.47284732348057246;
    msg.phi = 0.11800045845337737;
    msg.theta = 0.018895640046895035;
    msg.psi = 0.5727875678602462;
    msg.u = 0.061686467372366716;
    msg.v = 0.5744914246356176;
    msg.w = 0.6703498131015839;
    msg.p = 0.1863360084712441;
    msg.q = 0.9143626998985792;
    msg.r = 0.2957900858797259;
    msg.svx = 0.7930974048794551;
    msg.svy = 0.9580054383338568;
    msg.svz = 0.717535594638299;

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
    msg.setTimeStamp(0.12426397857053895);
    msg.setSource(5160U);
    msg.setSourceEntity(154U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(3U);
    msg.op = 19U;
    msg.entities.assign("BGNUQSJMLEUYFVBLRQMSODIPPZLIOSAWWVQGTQVPPJBXCTVBAIVFOJXIPGDWVTCLFQCAAMAUMSTDIOFMSWZTJLZZNSRKZKRTNFBGXZYRCKLECUPIZCOGWOCYMPOXQDKBVHTNWQCBBEOHNGUKUELKUWAVPFJRDYZYEJPLB");

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
    msg.setTimeStamp(0.6735954478641768);
    msg.setSource(44815U);
    msg.setSourceEntity(151U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(128U);
    msg.op = 62U;
    msg.entities.assign("SLRZQFVMJDBPUNXKRFTJXYCNNVERHCOZXHWMYGKJIIPPIMUEEEGSFWIDEFOTWJTAVOAVZTXCLD");

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
    msg.setTimeStamp(0.9923398860666072);
    msg.setSource(39559U);
    msg.setSourceEntity(171U);
    msg.setDestination(56898U);
    msg.setDestinationEntity(32U);
    msg.op = 198U;
    msg.entities.assign("HWMZDXPUXOWRZUCYVCVNRPIFBVKOVNMHVWJEDDWIBYTLYMUCAFCEHYEFLKRQPPLRPKJLJATKEQPTENZSTHDVMMSCRGCSBSZBBHAWZDEJXUNLGATQGUJJJDQISRBSHMKNJMCITLVONUYKHXUKVQCFTOGLXNRIXATCEEZWOAEHOYWUSOSQFPPUAXFBMZFNQOLFSHWDDGB");

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
    msg.setTimeStamp(0.7639758065672435);
    msg.setSource(51389U);
    msg.setSourceEntity(157U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(187U);
    msg.type = 144U;
    msg.speed = 38915U;
    const char tmp_msg_0[] = {93, 18, 37, -122, -63, -9, 69, -72, 22, 55, -104, 114, 63, 49, -69, -118, -57, 57, -38, -99, -126, 55, 116, 16, 0, -66, -98, -110, -54, -18, 55, -76, -30, -105, 60, 29, -64, 78, 97, -61, 40, 54, -112, -113, -127, -36, -53, -62, 121, 112, 90, -38, 79, 72, -87, -117, 18, -74, -126, -103, -91, 63, 61, 36, 108, 113, -55, 91, -95, -34, -20, 95, -64, -60, 123, -52, 125, -69, -63, 65, 67, -12, -70, 111, 69, -37, 15, 47, 54, -117, 51, 3, -76, -60, -17, 92, -21, -62, -105, -30, 56, 24, -44, -100, 75, 71, -30, 120, -95, -87, 5, 58, 35, 42, -48, 38, -91, 20, -52, -99, -58, 49, 28, 12, 48, -82, -42, -49, 120, -74, 102, 62, 26, 110, -109, 111, -49, -55, 1, 51, -69, -95, -29, -48};
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
    msg.setTimeStamp(0.08698370565424673);
    msg.setSource(45150U);
    msg.setSourceEntity(106U);
    msg.setDestination(40871U);
    msg.setDestinationEntity(244U);
    msg.type = 53U;
    msg.speed = 56235U;
    const char tmp_msg_0[] = {42, -13, 4, -28, 121, 4, 91, -114, -121, -11, 95, 9, -6, 94, 124, -32, 71, 56, 10, -125, -46, 4, 120, -65, -79, -52, -116, -60, -23, 86, 117, 43, -24, -121, 90, -121, 73, 26, -32, 8, 60, 68, 97, -8, 85, -33, 29, 51, -60, -76, -94, -22, 46, 89, -30, -119, -8, -49, -49, 119, 105, 104, -49, -74, 7, -18, 15, 88, -66, -38, -128, -124, -48, 70, -72, 69, -80, 87, 113, 123, 30, -77, -34, -88, -10, -80, 84, -92, 101, 115, -44, -45, 72, -110, -126, 106, 30, -117, -23, 107, -51, -68, 58, -8, -36, 92, 34, -116, 39, -99, -46, 121, -44, 24, 104, -18, -57, -118, 29, 43, 90, -41, 52, 1, 34, -121, 118, 1, -59, 86, -39, -16, -67, -103, -75, 42, -125, -91, -88, -2, -94, 59, -17, 41, -7, 94, 41, 6, -29, 78, 93, -25, 28, -28, -18, -108, -49, 58, -15, -114, -25, 93, 91, -58, -12};
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
    msg.setTimeStamp(0.20307153845002957);
    msg.setSource(55006U);
    msg.setSourceEntity(123U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(107U);
    msg.type = 41U;
    msg.speed = 48149U;
    const char tmp_msg_0[] = {115, 31, -42, 15, -115, 91, -75, 76, 108, -118, 117, 95, 38, 56, 64, -101, -112, 76, -32, 23, -9, -54, 117, 45, 14, 63, -32, 83, -108, -77, -105, 103, 45, -52, -11, 126, 19, -23, -127, -2, -82, -116, -51, 40, -45, 31, -60, -55, 2, -67, 41, -31, -53, -127, 81, 108, -68, -37, 123, 52, -90, 66, 53, -6, 8, -96, -93, -68, -7, -106, -81, -10, 82, 61, 12, 46, -72, -13, 38, -87, 14, 67, 47, 77, -46, 86, -123, -9, 39, 51, 90, -104, 74};
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
    msg.setTimeStamp(0.7066791406598636);
    msg.setSource(23806U);
    msg.setSourceEntity(58U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(216U);
    msg.op = 55U;
    msg.tas2acc_pgain = 0.5484218558781053;
    msg.bank2p_pgain = 0.08816229629136829;

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
    msg.setTimeStamp(0.06175713730882748);
    msg.setSource(39817U);
    msg.setSourceEntity(182U);
    msg.setDestination(13898U);
    msg.setDestinationEntity(20U);
    msg.op = 45U;
    msg.tas2acc_pgain = 0.8138473679667689;
    msg.bank2p_pgain = 0.4478423093928129;

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
    msg.setTimeStamp(0.17029560623462736);
    msg.setSource(45549U);
    msg.setSourceEntity(224U);
    msg.setDestination(61068U);
    msg.setDestinationEntity(248U);
    msg.op = 34U;
    msg.tas2acc_pgain = 0.703994182438252;
    msg.bank2p_pgain = 0.5501916554507449;

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
    msg.setTimeStamp(0.5985711795285029);
    msg.setSource(7378U);
    msg.setSourceEntity(53U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(131U);
    msg.available = 277467992U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.9259167738552037);
    msg.setSource(59403U);
    msg.setSourceEntity(128U);
    msg.setDestination(31645U);
    msg.setDestinationEntity(104U);
    msg.available = 895639491U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.07010593138917931);
    msg.setSource(26271U);
    msg.setSourceEntity(130U);
    msg.setDestination(43337U);
    msg.setDestinationEntity(161U);
    msg.available = 1202736215U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.34302353855311984);
    msg.setSource(60356U);
    msg.setSourceEntity(174U);
    msg.setDestination(15165U);
    msg.setDestinationEntity(173U);
    msg.op = 71U;
    msg.snapshot.assign("WUOTGBYMEQHXDCLGIQQFKWPNTCEFXIAGNVXPKMUYEJHAMMLRKGQLMMEHHT");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("XVLMRFYAQCDOMMMDOHLFDNTRDGJYNSQONRSJQOMVIBQBYKCDDPGAOLNXPRLVIAHKQUCCSEPYHSZMQJEYLNCXBLDGALFKFDNSTBKZOEJGKZEQXWLYEAVWNHOWTGDTGKPAQPFCTFNHJCIRABOMPWTIRFULJPHUHZLZGFTJTZSSINYUXWWQRMYHVSEWFYBZZQZBUEKAITJMHGSIAUTIZOIJCVWVYXWCARCXKUSPEVE");
    tmp_msg_0.type = 148U;
    tmp_msg_0.properties = 230U;
    tmp_msg_0.durations.assign("DHYGCPWJDMSXZMIEDHEJLNGBCBGPPACQGAADPYSWWKSXJYKQRLVLHNNBOLAOILQRERUJTVLGRUFEHIDMKNPIIVWXHGAQPGNJZVQOWCVFZQKUCLKBJVIOMKSPEDZQUOCNIHWZNKWNXXGEKWLMETRPQRIUFDXTBOJVNOQDYMWBFJ");
    tmp_msg_0.distances.assign("QMYQRWYNVKAFVCPGDVAUAUMQLGDHEJHASXNJFLDSMBAYZKABJXBMWLUJWCIZYCPWGVLZRQTNEHQSRXOBYTMXZTCEXOFCFDTSSGQKT");
    tmp_msg_0.actions.assign("UFTBAKGECFAMYSEEGVGULIPKCRXNJZPIASVNYNNWIVZWINFXSVHHUQJBVWREXSRWQDMLWMFOODTWRCDJTSCQXFOEYDOXOXYTBQGPTKQJNIDENLOCPYBLCDKEZNI");
    tmp_msg_0.fuel.assign("PYVMDIQFPPPPEAYOQWFSHFMEICRNCBHLMMXDFNELRFJOVAAGUWEQGSTEPUHRHIBNGNWLNTDZHARYHNQKSGVHSKLFSCLAQRYRTAVXOZWTVBDCVUGKTCDWRANFZHMPRBFWNZXMWQENZSLLKZWFKOIKCCUKXUBBVXIJMWKYHAOJLJSSUYYUTJD");
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
    msg.setTimeStamp(0.4357167320492056);
    msg.setSource(54045U);
    msg.setSourceEntity(205U);
    msg.setDestination(46771U);
    msg.setDestinationEntity(174U);
    msg.op = 8U;
    msg.snapshot.assign("QGNMCAOBGFMFARTNLTXTEDICNNNVWDHOXIAVNJWKCBDYIAKZFFZQGUWHKACLOJJTSLRKVLFOWPPPYIXZZSCPQZXYDIELDXZPTLKIREIUVSFXUYZNBCMFBATSDQWBSJLJEPQEYGLMWQIQYU");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2667801115U;
    tmp_msg_0.messages.assign("ZNOTWZZONNASXOYMFCLDLSVRBMLAQADDMXIBZMKRZDQCTNIYSBPFKVFHPERRHDGHVUJFFOOTBBQQOWCHLJOFTXWIVVMVMYIKWUUPFHNCKOUNSGZUCOAIEVAUBMXTDRECWWJGRNKLLGKZTCPCIBRYNQJXXYLJADQTZEGGLKTARDBMJWEMFSPKSSUIBXIGEVHSJXKSPWWYLBYEGXTQFQCSIFNUYEGJDRQZPYRAUALVNDZEJYHHAPUIX");
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
    msg.setTimeStamp(0.5029199045486906);
    msg.setSource(24778U);
    msg.setSourceEntity(14U);
    msg.setDestination(19081U);
    msg.setDestinationEntity(246U);
    msg.op = 86U;
    msg.snapshot.assign("DXIMSBKGITFASNF");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 12835U;
    tmp_msg_0.value = 48U;
    tmp_msg_0.error.assign("ZQGUNESXOOBZFGSTYQWLNQAMPHUPQRHJKRKCBSLACXEZDLPLJNTJMHUNLKKUWIGVIIXFPFCZMHYRWEGENJWJUGCFNQKTTLMSDFTVVXVNRYMRAIITVHE");
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
    msg.setTimeStamp(0.47867802169652907);
    msg.setSource(55274U);
    msg.setSourceEntity(55U);
    msg.setDestination(61825U);
    msg.setDestinationEntity(0U);
    msg.op = 221U;
    msg.name.assign("YZTDCSHZPLGNVHOGCCUWBJNJSWIPLFSXQFSLYKTPZXQOFAYZLMFEAHBJDCSTTGZFQICLEAIPNPSMYSUEDGPKKXDOHFGMRANWLDLSNLBIMZTVUIGNVMVRJDWCRR");

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
    msg.setTimeStamp(0.7616173880575787);
    msg.setSource(14540U);
    msg.setSourceEntity(152U);
    msg.setDestination(4764U);
    msg.setDestinationEntity(209U);
    msg.op = 103U;
    msg.name.assign("OZKISQGAXBJTPWORHJSGGEAFDYSUHQQWBPDGNGNPQFEWFIMNDMSWUUCLKSXBUACPHFFLMQNOUAPHNODVA");

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
    msg.setTimeStamp(0.7214806062902803);
    msg.setSource(50328U);
    msg.setSourceEntity(18U);
    msg.setDestination(9004U);
    msg.setDestinationEntity(115U);
    msg.op = 84U;
    msg.name.assign("LGOVPGGHGKYFUCWNGTDFAGPPYCCNTDZSYZKWXQJSJPFZBVBYRMTQSTJNBOIEHVESYODXNWTPZKSLIPEREKXABSIBWYDITFOANZMRYZELEKMYLRTJTRQQWNBLUFMCJOZIEFPLMOQTMKGCWKMBCWOUBAUJWPJMHUGFVRHVCDSODUOXYOHIAKREAKZGHUIUVXPRMICNIYDNCXUGKVQZSFJZXARWXASLNTLNHCEBUXQHI");

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
    msg.setTimeStamp(0.62855226527857);
    msg.setSource(52703U);
    msg.setSourceEntity(123U);
    msg.setDestination(17298U);
    msg.setDestinationEntity(167U);
    msg.type = 253U;
    msg.htime = 0.37756015952112565;
    msg.context.assign("ZMNPLMJHBQWSTNBONKCDOBIPSRJOOWATMRTGUKPALWPZXKJVSQMKQJDOCNVRXPFOAVJMXLIKNPNICIAWEFEKRYIENMLICZPFEVTYJZHYVSVHDRUCHCQLICURYNHXCWXHKWQBWGUBIRDOAWJVRBFDNAHLHDGRQLPFGTLZEEZYLUGBFGAZEVJFFUGUSSCSEXMAZEAGAOBVUSYGMOMFQBTTUPXPWWKZBD");
    msg.text.assign("HHZTNLINBBJYDRQVYZWROFACLPWJTDEEGMFGBLZGLXKSTQEVGPSLAEYKYWRHFZAFDPHQPBBMTDMTWXVSJNXHXAXUQSORWSJEDUTIASOQPIEGHKTCLQWYBUV");

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
    msg.setTimeStamp(0.7939095057064147);
    msg.setSource(45892U);
    msg.setSourceEntity(157U);
    msg.setDestination(50210U);
    msg.setDestinationEntity(90U);
    msg.type = 45U;
    msg.htime = 0.50664734733326;
    msg.context.assign("QRPDEAEQTLABPDIZVAKTUCJWZZQONGTMXEBTMBRXYDCJRKUZTLCVBIJAWKXAIEIQCWOZDROJYYBGWGRTWEUBYJWVKYSSOXQTGBP");
    msg.text.assign("GYGPZBDJFNAGZTOPPIWRJVDSLMBYESWISPSDIFAYDUQHRDECHKFJWJPLVFFVXZQVDCVIGOHEGO");

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
    msg.setTimeStamp(0.08196661666085558);
    msg.setSource(26012U);
    msg.setSourceEntity(166U);
    msg.setDestination(38102U);
    msg.setDestinationEntity(131U);
    msg.type = 133U;
    msg.htime = 0.3745608840266752;
    msg.context.assign("ORFNEZTBZSUMFIKHSYLWVZNBBNVOJZWRUCYABLLNADANYBEEJMZHMXJOMVALUGRJAEEQBZDQQGUJRCGGIWHODTVTEFGVWOWJURQCXXHPMNPCGHJNBIOHFSVXZRGEFUYTATVCCNSVAXDHFYEOJXOWITAFUIZQQDAKDQEPXZFKRXVLVYHSSBMCGPHLKFTWQRLJWIMMILPRXAPGWSOQNMKYPBYKDDKLIPUBSFXYDSGKDIKM");
    msg.text.assign("IMKASRXEDGFKADPMMIUMWUTDSPNEZHAGOODYZJBJHTZJXLSHDDNUHGUHWPCOVQQWMXRLTCJIHYXTKGKBIAMEEGNRVFP");

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
    msg.setTimeStamp(0.11858828827506629);
    msg.setSource(14234U);
    msg.setSourceEntity(245U);
    msg.setDestination(64894U);
    msg.setDestinationEntity(11U);
    msg.command = 51U;
    msg.htime = 0.1458599703344674;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 137U;
    tmp_msg_0.htime = 0.1781445868046303;
    tmp_msg_0.context.assign("YREQZHUSNJVPVYOAMBANXCLBJOESTVYTRFRXBPPSNKOFTLGOPFMHZLJBKWSZMFDGSMCXCDXTKMLPILKGLUNXESRNIMADWAXQKWLBSEEJ");
    tmp_msg_0.text.assign("GBJTXLKAAMLRPHTUQJGRHMCSBWJPGPYPFHCQDJWVJZNISZTCADHBBCEMKLFPYXWIRYRCQVKSZYKXCNISWQHPOBXUBVLGJODJJVFAVGKESQQKGJMMFWUILR");
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
    msg.setTimeStamp(0.9875783349862441);
    msg.setSource(11117U);
    msg.setSourceEntity(139U);
    msg.setDestination(26454U);
    msg.setDestinationEntity(25U);
    msg.command = 14U;
    msg.htime = 0.8613972140111598;

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
    msg.setTimeStamp(0.8645050250152078);
    msg.setSource(60798U);
    msg.setSourceEntity(196U);
    msg.setDestination(25057U);
    msg.setDestinationEntity(12U);
    msg.command = 240U;
    msg.htime = 0.5013999116209211;

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
    msg.setTimeStamp(0.251961413570718);
    msg.setSource(18357U);
    msg.setSourceEntity(60U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(232U);
    msg.op = 231U;
    msg.file.assign("CKLYXEATOPIFJVBEZLOEAZQER");

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
    msg.setTimeStamp(0.2798397355016834);
    msg.setSource(8484U);
    msg.setSourceEntity(112U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(92U);
    msg.op = 175U;
    msg.file.assign("FFJFUMZBWCFXPOMJXNNCPHUZSTUZPIQXYEXLDPSVYAIFOMMQAYUBNMRKMJXEFMQEJVPUKEJUQJDHTGGCENFNNRDVPW");

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
    msg.setTimeStamp(0.5978774378960816);
    msg.setSource(11514U);
    msg.setSourceEntity(86U);
    msg.setDestination(23646U);
    msg.setDestinationEntity(117U);
    msg.op = 253U;
    msg.file.assign("RBFMPEHVNWRIRTKJKCHOHBZFMXUHYQBUPWMZCJXOOPPTDDVAUCGSPDEOOPKQNTQRSJXDYLLCIQIAXYFNZDAUSNGAVLLJZJVEONFAZIESDIGUGXSQZLJYVIHTFWHKMDQEBJFXYGLIYX");

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
    msg.setTimeStamp(0.5369346788587661);
    msg.setSource(4080U);
    msg.setSourceEntity(89U);
    msg.setDestination(34552U);
    msg.setDestinationEntity(42U);
    msg.op = 185U;
    msg.clock = 0.028626761110638;
    msg.tz = -32;

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
    msg.setTimeStamp(0.5004869576593769);
    msg.setSource(7482U);
    msg.setSourceEntity(85U);
    msg.setDestination(18739U);
    msg.setDestinationEntity(95U);
    msg.op = 109U;
    msg.clock = 0.23761977941809453;
    msg.tz = -7;

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
    msg.setTimeStamp(0.9601314218974139);
    msg.setSource(46666U);
    msg.setSourceEntity(222U);
    msg.setDestination(40792U);
    msg.setDestinationEntity(178U);
    msg.op = 170U;
    msg.clock = 0.8837878049868678;
    msg.tz = 39;

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
    msg.setTimeStamp(0.2980694763748115);
    msg.setSource(30839U);
    msg.setSourceEntity(227U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.4267163763044046);
    msg.setSource(11031U);
    msg.setSourceEntity(44U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.25866394769888024);
    msg.setSource(20212U);
    msg.setSourceEntity(224U);
    msg.setDestination(63755U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.3020503291179166);
    msg.setSource(30404U);
    msg.setSourceEntity(129U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("XKCCQVGNERYEBUMJNETMVGILQIRHZPSLOTJPHLXBYKFUJIJAIOQMBPKZMGBKZHNYDMGFWEFIHJYXUZTOKDSNFXATEUPQCDWOSRFUTBSLRYLEERVMHMUBQFGLNALUALAYK");
    msg.sys_type = 160U;
    msg.owner = 62132U;
    msg.lat = 0.8595346606202713;
    msg.lon = 0.45825454961693035;
    msg.height = 0.7582281371247416;
    msg.services.assign("XDWMOUFJXOHCBJTSFRMXUVJBRQQZMPXPAEMFWUOMKREYIANNGDLHQSVGTFNFNZVLJLVTSCSHUGVXDENSIHBYEDMPBGPHNQRRVOWLJPWIVCLAFYTBSEIJIGLFXIDUOYJWTKIYZPQEOYNPNCDBKALYBWLPKTCACCTDBGQOZYMKWUNKHQTQYPBMRDNSIZPRFGUYKIXTLDAFVBZWAXHUWMCQJSGTXOGZLHAZSUHIESCOKMEKGEXADARZRHFVJUJRK");

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
    msg.setTimeStamp(0.8131288571476458);
    msg.setSource(26028U);
    msg.setSourceEntity(169U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(83U);
    msg.sys_name.assign("GWSMWFDXDLFQSOBQBSNCMQSXWIIERDHXNURCRHUMNMJILCJXUWSPHAKNZAVVBNFKAASEHXJBEBFATPNEGTXZGCTWTQYBCKKCEJOOJWFMVMOUBLXAWCARTVPGRWWFDZXSLDUYZQLPIKNOBTTJMPCGMTIGNNIHZOSUQKZINYRXLGVUYVDOHAMDYPQHKOUWABKZEYDEOOBEVEJJVGK");
    msg.sys_type = 78U;
    msg.owner = 51073U;
    msg.lat = 0.6058153313027138;
    msg.lon = 0.5099828989203655;
    msg.height = 0.6121782431009055;
    msg.services.assign("ZKTFWTXUWAJBXX");

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
    msg.setTimeStamp(0.3944856514863957);
    msg.setSource(25789U);
    msg.setSourceEntity(65U);
    msg.setDestination(9631U);
    msg.setDestinationEntity(141U);
    msg.sys_name.assign("FSFPJQWEOCNVQERFGAOJRJD");
    msg.sys_type = 58U;
    msg.owner = 35886U;
    msg.lat = 0.006234140489992601;
    msg.lon = 0.769391542702238;
    msg.height = 0.5814234848443418;
    msg.services.assign("MXJLDRJZGJANVWYLHWFTDYOSAUGKAIITJDRSALVSRNNOXQKOJERNIYEOKZQEWIWEGQPPSVRMPRTBMHLEDXDGTZZXAGYCUPKRVKBHGMSQSAMCEKZFFKDGHCNFAQXYBXDCKNGUJFTCPXRPH");

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
    msg.setTimeStamp(0.6514813137333527);
    msg.setSource(41817U);
    msg.setSourceEntity(57U);
    msg.setDestination(50683U);
    msg.setDestinationEntity(167U);
    msg.service.assign("MEDPAMEJYKXOIXCQBQJCMEQULHKTRTFWVOPRHJGGDPYFACCKEVNYZEUIZUVJQLWWUYDAISYIOJIOBYNRGMNHIHBFBSFYAJLPSIJCYKXBJWYFXXATBHPKEZXTVXNKAHRRFZHEYHPQAMAFBVOGRKRALOSTGWAKGLCKNIFVNTEWZXCEMZCWDDWIORMTDPQFGQQSSHSVGTTMZWGGVBLRPDFLNNLEQZOULVNLQDOSUDBUMXBVZIMJXUU");
    msg.service_type = 45U;

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
    msg.setTimeStamp(0.4026855299473503);
    msg.setSource(50882U);
    msg.setSourceEntity(238U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(148U);
    msg.service.assign("WEBZSZDSJURBRIDCFQKWLPERKVFTYROZGQRNPAHFCGMWNFDQCLRHWIFQPAGPLUEVTCEBIEOWJMJFPSWTEDXUTAFIAAWMDGKKMOUAKSQOTXHOPGSZNLQFIMJICUJEXLBCUQBCVLXFLJJXXYEGRMDYCZQHSCNYVKKDGXIHAYVWKCBOVMKINHYLKINNQUZHZGINVFTGBUNUAVRHBAYGEXLJHJLMBBPZDTPWRHSPYJZPTDOV");
    msg.service_type = 158U;

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
    msg.setTimeStamp(0.05647298483244456);
    msg.setSource(34358U);
    msg.setSourceEntity(85U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(59U);
    msg.service.assign("EEIHGVLHJPIVOCLLRZBIGRLERQQSYSWNQDNHUISCGTCVXBIQFWYNMKKOHZADFDYYUGXJDYHQQFOJLSATZVGBHBVRAJBPCZEIFKFEILNMJSKGDJATAWNSIMTWJMGFTPMWVWUKCVHGUNTDFZVPYNYLADRSZNCPHDPODZRJSXKMKDROLEOLYPHFQOWJFE");
    msg.service_type = 152U;

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
    msg.setTimeStamp(0.8845694039607963);
    msg.setSource(25479U);
    msg.setSourceEntity(60U);
    msg.setDestination(52949U);
    msg.setDestinationEntity(15U);
    msg.value = 0.8674505163065046;

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
    msg.setTimeStamp(0.9788061035048843);
    msg.setSource(58028U);
    msg.setSourceEntity(38U);
    msg.setDestination(5341U);
    msg.setDestinationEntity(62U);
    msg.value = 0.05570024519089123;

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
    msg.setTimeStamp(0.7698539013540678);
    msg.setSource(11364U);
    msg.setSourceEntity(10U);
    msg.setDestination(40625U);
    msg.setDestinationEntity(19U);
    msg.value = 0.2760879335164955;

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
    msg.setTimeStamp(0.6751858336475053);
    msg.setSource(12359U);
    msg.setSourceEntity(197U);
    msg.setDestination(54139U);
    msg.setDestinationEntity(115U);
    msg.value = 0.015648639968798395;

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
    msg.setTimeStamp(0.019769019794688703);
    msg.setSource(49010U);
    msg.setSourceEntity(67U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5321534095251224;

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
    msg.setTimeStamp(0.6031987260178916);
    msg.setSource(40210U);
    msg.setSourceEntity(237U);
    msg.setDestination(8613U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6350741614253925;

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
    msg.setTimeStamp(0.3947510953917369);
    msg.setSource(32991U);
    msg.setSourceEntity(239U);
    msg.setDestination(7139U);
    msg.setDestinationEntity(112U);
    msg.value = 0.14554916281958685;

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
    msg.setTimeStamp(0.9262133742784917);
    msg.setSource(52228U);
    msg.setSourceEntity(165U);
    msg.setDestination(45655U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8364715348532931;

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
    msg.setTimeStamp(0.6838825283927925);
    msg.setSource(9821U);
    msg.setSourceEntity(237U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9527364081893857;

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
    msg.setTimeStamp(0.805315380902859);
    msg.setSource(51607U);
    msg.setSourceEntity(162U);
    msg.setDestination(63898U);
    msg.setDestinationEntity(242U);
    msg.number.assign("DYZPZQTVEKZSMZGQNCHSIREEAMFSJOGEKYUBJAGHOLBJRUXDLTBXTAIYRUIXXKSFMLUHYFXRWSIGFGEVLFZEMCMBXFOALYIUHVTDFOMNOTWQRTN");
    msg.timeout = 61557U;
    msg.contents.assign("GSPNKIVGFXCQRSKYPUYYLEORWOZASPAIDQFPLMBEODFFXJMHAIEQLYJTAYIBKZXWVTHDJTNOHUXXIHNDMCAHCYJWLVUSWLCLZJEFATNKCSUBRHWHZBCQNDVCJLRDJKPTBMRSZTUWZATGVGRNQEARBDEJGWKKEHITOYUVJFENBDQCBYXESKVFTOVPAPWPQUXZWOOUPKXMFZIIMALEMRDSUIXRFSGCGXLNBUTWBNQQFGK");

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
    msg.setTimeStamp(0.5094322526425499);
    msg.setSource(58961U);
    msg.setSourceEntity(30U);
    msg.setDestination(6098U);
    msg.setDestinationEntity(82U);
    msg.number.assign("JIJZAJUCULHIZSZEGDZQXFCPEYWLPRHEIERHNXUYJGQDIHCKYSKPEQXLPGTIBFIWWNNSWYXXCMSLXLGAFRSTGTPJCNLKCIMHUMOVYDAMNJGVGXOYHPFEVJBTMAVRIJCGFFPHKZFAOBUSBOMOA");
    msg.timeout = 22071U;
    msg.contents.assign("VLJUMKEMGAVHFMHUS");

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
    msg.setTimeStamp(0.674197605950669);
    msg.setSource(34271U);
    msg.setSourceEntity(180U);
    msg.setDestination(21623U);
    msg.setDestinationEntity(22U);
    msg.number.assign("WQPTBSZHXSHLYVVFXWIVSSKVPZKFCLWRRZQLAGYNCDJJAYWGHOTHQYPPHJTYMPOVDDEJITM");
    msg.timeout = 14684U;
    msg.contents.assign("KSUCHFRNBVZDKQUXWVMOYDSOMEAIZLXHDWGLWSAIXENZQTIQQUTVZCZLPFCAUWKZJIMCGYTRNGJVEHMKUGPYQVXRWWPTDH");

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
    msg.setTimeStamp(0.9832388908120037);
    msg.setSource(63017U);
    msg.setSourceEntity(71U);
    msg.setDestination(56237U);
    msg.setDestinationEntity(82U);
    msg.seq = 3498850084U;
    msg.destination.assign("EVWKWOEUOJHYBPBAVTQLXLHVEBXRFYZJBXIFVFYTYNUXEHJRGGTZEUFSCIGXKWIZXRWTMGMSLYDVKGWCQGMLMOQFHQUBUGHSYHJJVPITQNLZXOKSQRZFDIGQNNSZLECUPWKPPCOEWDHVWIPOOCUQTLDCTFXMEIAFPGBJJVNEDCNZTDAEMIASRBTORVSSQHKOHULM");
    msg.timeout = 49390U;
    const char tmp_msg_0[] = {-83, -80, -12, 29, -6, -111, 60, 55, 118, 56, -123, -30, -31, -128, -72, -2, 65, -36, 60, -9, 67, -78, -118, 33, 61, -86, 82, 63, 88, -56, 105, 53, -15, 86, -7, -116, 44, 41, -54, -95, -4, 125, -81, -38, 60, -20, 102, -102, -2, -128, -103, -72, 84, 9, 9, 89, 78, -79, -91, -76, 88, -73, 81, -52, 90, 99, -98, 3, 63, -112, -85, -28, 102, -48, 61, -64, -82, 89, -128, 66, 110, -112, 44, 25, 126, -125, -109, -83, -55, 17, 90, 106, -28, 35, -108, -72, -29, 12, -20, -5, -35, 12, 21, -20, 17, -18, 108, -82, 3, 105, -88, -78, 75, 71, 5, 79, -108, -25, 119, -61, -116, -40, -81, -42, -109, 75, 21, -53, -76, -102, 93, 103, -7, 102, 22, -63, 49, 100, 108, 5, -84, -45, 72, -9, -39, 110, 98, 124, -6, 78, -124, -90, 47, 34, -28, -50, 54, 46, -50, -127, 1, 60, 84, -92, -114, -73, 77, -118, -14, -31, -104, -9, 93, -27, 125, 25, -5, -98, -29, -100, 72, -77, 98, 60, 43, -61, 102, 67, 93, 25, 118, 63, -107, -86, -110, 95, 88, 83, -79, -108, 104, -94, 28, -18};
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
    msg.setTimeStamp(0.47016889182469657);
    msg.setSource(19502U);
    msg.setSourceEntity(188U);
    msg.setDestination(11669U);
    msg.setDestinationEntity(101U);
    msg.seq = 3195268076U;
    msg.destination.assign("KZOHFMDHIPJCKTAQMOGNMIRZFKLGCZLKQUPXBWBSDXWGEAPNNFRXRWLRFCVTRGEIOOLRJKXUWPFOAHOTUBDKEXCNHUFQBECYRZCCHEMKPGDKTZFOTUYAINYVQJGNVGJYHJY");
    msg.timeout = 34777U;
    const char tmp_msg_0[] = {-128, 99, -81, -90, -105, 29, -106, -44, -51, -108, 30, -26, -62, 37, 50, 56, -47, 22, -72, 2, 83, -122, 49, -125, -73, -17, 13, -43, -123, 107, 51, 17, 7, 44, -24, -97, -115, 118, -22, -15, 26, -45, -79, -8, -97, -45, 52, -31, 84, -54, 9, 106, 57, 67, -118, -91, -94, -32};
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
    msg.setTimeStamp(0.9955534237792256);
    msg.setSource(47240U);
    msg.setSourceEntity(26U);
    msg.setDestination(30795U);
    msg.setDestinationEntity(98U);
    msg.seq = 737244081U;
    msg.destination.assign("TPONHBCACEBKQVULZNRYPVLUSWYEEOLLZGDCEJFZCXESSURL");
    msg.timeout = 54846U;
    const char tmp_msg_0[] = {105, 52, -59, 121, -127, -69, -34, 70, 119, 5, 95, 54, -108, -39, -16, -97, 8, -4, 14, 48, 28, -116, 72, -114, -46, -114, -72, 81, 84, -60, 93, 14, -70, 18, -60, -86, 34, 74, -59, -26, -114, -37, 37, -45, -13, -114, -72, -105, 81, -22, 48, -79, 40, 110, -87, -22, 95, -16, -119, -103, 62, -5, -125, -92, 113, 83, 90, 118, 102, -5, -126, 5, 49, 54, 49, 115, 83, -96, -31, 6, 10, 15, -94, -55, 34, 33, 117, -91, 73, 121, 92, -80, 35, 36, -96, 116, 51, -24, -16, 28, 72, 108, -96, 30, 105, -56, -59, -1, 82, 20, -83, 57, -19, 20, -91, 50, 111, 98, 110, -56, 107, -26, -106, -45, 104, -80, 21, 102, -70, -57, 90, -109, 27, -117, -75, 35, -24, -115, 95, 59, 113, -125, 32, 101, 94, 107, 39, 117, 88, -80, -121, 97, 87, 111, -85, 75, 123, 126, -76, 9, 71, 109, 74, 111, -36, 98, -75, -88, 96, -23, 53, -57, 79, 76, 89, -100, 125, 116, 20, 0, -52, 108, -60, -75, -98, -27, -56, 125, -52, 30, 82, -63, 12, 86, 36, -84, 121, 117, -49, 24, -49, 124, 99, 90, -123, 89};
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
    msg.setTimeStamp(0.5281811165367726);
    msg.setSource(20753U);
    msg.setSourceEntity(175U);
    msg.setDestination(45969U);
    msg.setDestinationEntity(208U);
    msg.source.assign("YRLXCYKQOTISBDYKADZPAFJMDBIFTWLNYWDYLVFUSEUOZQWXBDDTVXCUEBUPBUCIBRWDSMYDJXZITTHPJXWHDGWNOZIQVFSVVXGISJSRGNKCMFJMHFNTHMLHTBZFLNUKBRFNSAKKRVGXUKZEYFGRKIOSQOWVXPGCCZAQYJWCBCAGZLADYXRWGIETGUMNVTOVULJPWBHMAVMQNGEELJCLAKNREIMZPHY");
    const char tmp_msg_0[] = {-15, 20, 102, -12, -127, 20, -25, 10, 63, 39, 74, 77, -34, 73, 13, -32, -80, -64, -76, 4, -35, -122, -117, 10, 52, 105, 50, 94, -122, -89, 60, -13, 70, -68, -3, -33, 39, 50, 124, 96, 116, -95, 66, -71, 106, -97, 39, -38, -58, 46, 41, 33, 26, 20, -47, -95, 100, 95, -122, -127, 58, 20, -12, 46, -92, 93, -48, 73, 100, 101, -23, -89, -86, -34, 42, -48, -18, 24, -40, -114, -74, -55, -113, 120, -40, 82, 3, 99, -22, -84, -110, 51, -40, 42, 18, -19, 84, -73, 26, 22, -125, -87, 21, 52, -78, 89, -43, -34, 111, -49, -72, -101, -22, 66, -128, 71, -55, -6, -121, -74, 99, 7};
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
    msg.setTimeStamp(0.28625590627664865);
    msg.setSource(19984U);
    msg.setSourceEntity(205U);
    msg.setDestination(55840U);
    msg.setDestinationEntity(199U);
    msg.source.assign("YXJADWPFDUQXLOESKPJFFOXNTHUNZXVLYGEQOYKJVPZSOIZGVYSJEPRVVGTXRFOJ");
    const char tmp_msg_0[] = {16, -76, 77, -30, 108, 66, 43, 101, 6, 28, -10, 101, -128, 89, -25, -83, 51, -49, -78, 123, 69, -106, -41, 85, 14, -17, -13, -67, 124, 55, -52, -124, 87, 56, -16, -87, -19, 92, 20, -128, -25, -19, -127, -16, 44, 93, -117, -34, -104, 59, 105, 64, 26, -9, -84, 50, -82, -7, 109, 115, 44, -49, -112, 74, -120, -115, -114, 37, -42, -11, 104, 62};
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
    msg.setTimeStamp(0.8474478940134453);
    msg.setSource(48881U);
    msg.setSourceEntity(50U);
    msg.setDestination(32135U);
    msg.setDestinationEntity(66U);
    msg.source.assign("VHJQUVERDINRRTLGOKWKYOZNXXPXAKDRLPSCXWZWLXAYVVTBPMQEKTFAPHISJHPNBFNGGYVDKQZQDNFSQHKOVHLATXOBMVEURPTCSMLDJUNIHGJCBFZSWIEEKYPOEFSBTZCHFRBDVJCUHYHBJAETCYN");
    const char tmp_msg_0[] = {47, -106, -106, 61, 86, 121, 74, 1, -21, -83, 95, 6, 68, -127, 37, -120, -104, 7, 75, 42, -120, -90, 96, 0, -67, -54, 116, 106, -44, -6, 28, 120, -128, -66, 93, -37, 103, 40, -48, 57, 90, 108, -84, -29, 108, 7, -16, 45, -20, -3, -114, 92, 49, -86, 107, -62, 21, -57, -20, -44, 52, -111, 23, 6, -69, -60, -59, 31, 86, 87, -112, 94, -39, -92, 31, -53, 56, 75, 33, -68, -36, 59, -41, 50, -87, -83, 94, 20, -74, -107, -121, 15, -60, 109, -29, 103, -106, -101, -108, -64, -27, -27, 80, 124, -83, 58, 81, 90, -41, -48, -73, -87, -45, 52, 52, -127, -98, 83, -73, -35, 6, -65, -124, 11, -3, 54, -76, 39, 71, 80, 72, -6, -5, 68, -114, -124, -17, -121, 40, -127, 125, -59, -99, 97, 64, -106, 6, 109, -7, -31, -110, 93, -6, 72, 45, 110, -60, -18, 100, 115, -70, -69, 77, -15, -72, -32, 17, -91, -61, 41, 70, -22, -58, -57, -44, -73, -107, 48, -57, 76, 84, 65, 51, -49, 37, 94, -17, 49, 13, -89, 76, -63, -117};
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
    msg.setTimeStamp(0.11748831351182232);
    msg.setSource(52456U);
    msg.setSourceEntity(118U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(153U);
    msg.seq = 304023422U;
    msg.state = 150U;
    msg.error.assign("PCRIGCSBIYTMSI");

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
    msg.setTimeStamp(0.25498436596444574);
    msg.setSource(39836U);
    msg.setSourceEntity(119U);
    msg.setDestination(56301U);
    msg.setDestinationEntity(41U);
    msg.seq = 2268209489U;
    msg.state = 178U;
    msg.error.assign("TLFPIHHBSQPZIKGDCSJECCUYBUMFYKWHWEZUAFGIAYLFPVJQGYBPMJZLMQULXOUXGJBWDXMBRJRCZJNVJWKFKSRTVSMQYQDZOGYNGSLECFIHLMWXHEJZFOOEXTIXKBZQNGOYPPIGAOLFWIEAMOOCNQYUQ");

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
    msg.setTimeStamp(0.39797447741682124);
    msg.setSource(44320U);
    msg.setSourceEntity(119U);
    msg.setDestination(39704U);
    msg.setDestinationEntity(52U);
    msg.seq = 3526887599U;
    msg.state = 225U;
    msg.error.assign("KTNPWKYBYBEJAVTZJBJNSERTUWWXGLFHSQMXQTVXXPAENGSLMBKROGWFOMFAQLXVWKYHKSJCUGNEHKLVZOOXIMZDCYNCZEKBLAHIFEPCQTBUZCKIRODGIPNNYCURQMXUFJEVIMNZYGDYWEVLLTAAFUOGQECYANBPBMRVDLXRWOAWOJCVFQIZDOZMUSWWMRVQHKJSTLSUDJXDHFQRP");

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
    msg.setTimeStamp(0.20315494180475224);
    msg.setSource(23061U);
    msg.setSourceEntity(190U);
    msg.setDestination(5011U);
    msg.setDestinationEntity(196U);
    msg.origin.assign("XTTUBPVXWSNYDMZTDSQGSEFFRMWFQGJISYNDTDEJUJPCHNVDKYEBQLYOLDTLEAZCMNOSQUCRLGNWAICQAHXXBNJWMRBPAQVVDPJFUISKEWVHRQGAPEHRAVEHXGHUMGOGTVTZFTCGQLFMRYEXWNHLLOGALZJIKIPTKBZLYXOZRZJIYDJOBIABEHVSCWPTSUMJKBAKIXCQBMNUPOSURYUANPPQZGRHWJFIEFYZZCXKKRMW");
    msg.text.assign("FEUFSMSGMYCNOXHXSJLAOCTSRQNJWHLIEEUQEPYOBNKIVDIUJBZMRXSPJHOMXPHPVCOMKJHEAVZMAGLPJSKCCLCLFAZAISNRCKKKJZTWDYOATRQORGPCDTDNEEXGFNELLXZVUWBQCTLWDFZEUNBKPULTQYWNJTGDRFXGUZZHVQHXRDAHRWGADPETYIGZBPWIBFNWYHBQMD");

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
    msg.setTimeStamp(0.8380086212680974);
    msg.setSource(26717U);
    msg.setSourceEntity(246U);
    msg.setDestination(41793U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("XKJHIHRLNEAXMBTXEGGVYVCQGDDSNKFTIZLZALMVRODXVZONJHTQAGCPYWQACITUERBBXNYWCTQKLFNDEQZYUDJFUMEXPYVPTOIFJYLBBOFSNGVLPKLXMVWNZKUFDGNSISLB");
    msg.text.assign("EHWWGKCTUWUQMULGTMDYSPIKFXJFJFHPKRANQJTRRXTYVFTGAVGFKAIDLJGZPYYTVBNQFHHDQXNPXQMZFSKNHMBAMOICBDNXUIGOBQOELULXSPGDXSKOR");

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
    msg.setTimeStamp(0.24471284889517642);
    msg.setSource(26773U);
    msg.setSourceEntity(201U);
    msg.setDestination(34582U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("HBDDORZTSGGULFBGMUJAJCWDQJBWPWMIQRGUVKYAOQEEYCYCRZDHFIYOEKXOJAAKFCZIBSQGBVSIXMNNZLNBTJRDVRYWEROKLKTNUMPCMMEGCFFXVXKCOQWZNUYZCPOZAQVALIYRUDRTMIWHTXDVSHQVKNLQVLWUGDNEWGZNGJINTLFRVPJSSSPBBQTWYLOJXARIJXAWBSDODTUXCEHNYVFJLZHPGK");
    msg.text.assign("UEILYDYPXKGNVZQHYJFDOOCNQRSAVFZQVSXTOAORZGBGXKJTKDWINDOWELSPRRQVNEAEGDPJEFCYSINQWVYCHKUJLBFANUTEWXNYEGLGWWIILSJSRSOXGITIRGNRDWIKKHNZSDUPQJZFUCJOVCBALQBHTJHZIPYHSCQZHTBOW");

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
    msg.setTimeStamp(0.4418523766689463);
    msg.setSource(60997U);
    msg.setSourceEntity(27U);
    msg.setDestination(14539U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("EAEGWGPRMZXWXCAYAOYFZYNSNZLJFSMHKNMTGYBEIJCDAHDCWBFEQSMUJDGFDIVAJBTHYUCOTISXIRTUPYUIZSQFRGSVLUYEOGHXMMCGVPKGJJHTZWKIYQDTBIFBLNJP");
    msg.htime = 0.9326137904709808;
    msg.lat = 0.6107714867849076;
    msg.lon = 0.6200718777851627;
    const char tmp_msg_0[] = {-27, -13, -23, 9, 39, -85, -58, -44, 121, 93, 17, 84, -26, 72, 7, -27, -48, -91, -63, 96, 112, -35, 61, 50, 49, 115, 30, 49, 93, -17, -111, -124, 125, 10, 15, -71, 49, -128, -6, -72, 97, -6, -53, 86, 39, 104, 11, -88, -20, -50, 22, -123, -61, 41, 121, -53, 10, 0, -8, -63, -65, -9, -9, 74, -89, 43, 17, -29, 21, 11, 13, 39, 33, -117, -62, 101, -98, 103, -76, 66, -78, 99, -117, -79, -29, -9, -4, 59, -99, 108, -38, -69, 19, -59, -29, -73, -123, -43, 76, -77, -12, -80, -7, 27, 104, 92, -40, 45, -22, 35, -61, -39, 62, -74, 22, -102, -92, 17, 85, -2, -65, -21, -12, -34, 4, -52, -40, 93, -38, 70, 38, 107, 15, 64, 39, -81, 17, 119, -75, -67, 89, -104, 61, -71, 37, 27, 11, -63, -86, 18, -21, 94, -125, -97, -68, -113, -99, -122, -76, -15, 40, -115, 20, 87, 115, 48, 14, -33, 85, 48, 75};
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
    msg.setTimeStamp(0.2635670513866316);
    msg.setSource(12848U);
    msg.setSourceEntity(130U);
    msg.setDestination(16725U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("LGRXAQPBLPAFEAPTFZCVVUZKVAYUDFTZCG");
    msg.htime = 0.8833093342404621;
    msg.lat = 0.38209187118683496;
    msg.lon = 0.1749662716464787;
    const char tmp_msg_0[] = {-86, -89, -69, -1, 0, -99, -15, -24, -117, 4, 126, -5, 37, -31, -54, -70, 80, 113, 24, -46, -105, 18, 56, -113, 18, 8, 49, 29, 47, 22, -80, -24, -69, -43, -75, -55, -49, -79, 106, 122, 13, 104, -120, 15, -70, 104, 61, -55, -80, -73, -29, -56, 73, -14, 126, -81, 65, -67, -5, 120, -120, -117, 48, -109, 39, -24, 103, -108, 31, 75, -117, 10, 79, -57, 80, 15, -23, -56, -84, -20, 53, 66, -104, 73, -57, 61, -41, -107, 56, -116, 19, -28, -112, -94, 7, -34, 110, 112, 114, 105, -101, -97, 89, -23, -98, -121, -119, 0, 7, 26, -29, -10, 117, 55, 115, 10, 32, 86, -28, 83, -74, 0, -103, 76, -127, 107, 61, 71, -36, 47, 97, 61, -86, -64, -48, 120, -100, 113, 90, -50, 120, -78, 78, -9, 73, -8, -3, -8, 80, -35, 123, -28, -120, 75};
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
    msg.setTimeStamp(0.12566581264731036);
    msg.setSource(57620U);
    msg.setSourceEntity(98U);
    msg.setDestination(47327U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("QIGMVRWVBDIKEDDOKSHFLWBSVDFJBUQWYZYTNUPROJBFAYTCFJZEKWGMEJRVGROYNFJTBNQVZNMHSCWVZAXLAZEFOBGEFNEOZWYKSPQJWRUSIQMUXABGQQUNKTXXCLULEKXALSCEPOIHCINRHKYPMOJHBGRHMCLSCPPJFHKDIOIKPOBTGDXUZNJAKGSGXCPNRMBFHACATPLXUVHXFAVCMQTITQTAVMDYYWDSPUWMIZRTSZZUHWDODELYJL");
    msg.htime = 0.1735929016957668;
    msg.lat = 0.2231543297787162;
    msg.lon = 0.6097424448341735;
    const char tmp_msg_0[] = {37, -108, -121, 16, 66, 43, 24, 78, 19, 106, 77, 121, 78, -39, -15, 33, -54, -125, -23, 103, -58, 17, 116, 82, -83, -123, 79, 14, -69, 104, 84, -15, -98, 86, -110, -89, 27, -85, 8, 14, 85, 9, 103, -19, -124, -114, -91, -21, 65, 113, -50, -106, -52, -52, 10, 107, 50, -66, 54, 124, -5, 48, 55, 1, 47, 123, -60, -61};
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
    msg.setTimeStamp(0.6449858185553117);
    msg.setSource(25728U);
    msg.setSourceEntity(71U);
    msg.setDestination(2437U);
    msg.setDestinationEntity(123U);
    msg.req_id = 43200U;
    msg.ttl = 13061U;
    msg.destination.assign("ULADWAQYVONMXUNCXGDNSYHRPPHNPBCGMLABGCUMIFQJOCKBODMUXPWT");
    const char tmp_msg_0[] = {-37, -92, -20, 33, -48, 96, 13, 8, -77, -73, 26, 38, 38, 15, 79, -127, 36, 84, 94, -9, 29, 102, 53, 9, -101, 63, -117, 74, -113, -52, 93, -118, 94, -32, -43, -113, -124, -73, -79, -123, 101, 53, -122, 106, -55, 112, 1, 17, 103, -101, 81, -67, -105, 66, 49, -116, -13, -102, 5, 100, -125, 10, -39, 112, -6, -90, 26, 119, -59, -122, -37, -13, -84, -11, 21, 70, 15, -11, -114, -96, -65, -7, 123, -107, -110, -86, 2, 125, -57, 7, -18, 47, 111, 20, 43, 16, -127, 78, -74, -33, 35, 63, 78, 4, -122, -46, 101, -123, -117, -17, 56, -98, -102, 110, 35, -88, 1, 12, 114, 17, -21, 122, 74, 28, -93, 113, -96, 82, -84, 59, -55, 107, -48, -7, 80, -22, -2, 31, 30, -49, -17, 54, 58, -68, 43, -122, -70, 89, -97, 27, 73, -75, 115, 61, 46, -109, -127, -35, -97, -115, 54, 69, -21, 88, -42, -87, -107, -12, 31, 85, -6, -49, 91, 11, -12, -104, 82, -110, 17, -84, 53, -74, -8, 119, -104, -53, -52, -68, -17, -104, 44, -76, 66, -75, -29, -95, -107, 112, -46, -6, -27, 65, 87, 99, -37, -89, 44, 70, -45, -33, 48, -50, 50, -82, 103, 87, -60, 62, -110, 54, 81, 48, -76, 20, 118, 49, 30, 21, -16, -118, 92, 45, 2, 48};
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
    msg.setTimeStamp(0.06843112326904288);
    msg.setSource(54568U);
    msg.setSourceEntity(22U);
    msg.setDestination(14197U);
    msg.setDestinationEntity(131U);
    msg.req_id = 13601U;
    msg.ttl = 8942U;
    msg.destination.assign("NEYBWHFZULMYFYUPRCPDKHKNFRQJATXMWKQUZVCAHBVXXOWECIAISYEMTAPUGDOGVMLHRPQ");
    const char tmp_msg_0[] = {114, 9, -77, 55, -121, 5, 13, -115, 61, 1, 5, 9, -73, -103, -67, -114, -19, 95, -40, 52, 82, 78, -105, -50, -56, 11, -9, 56, -27, 37, -122, -34, -46, -21, 89, -65, 16, -12, -26, 40, -1, -89, -12, -61, 74, -86, 40, -91, 57, -18, -1, -16, -26, 70, 94, -42, 44, -21, 87, -3, 45, -25, -6, 60, -108, 4, 44, 72, 16, -82, 98, -126, -24, -16, -30, -26, 14, -92, -87, -76, -62, 76, -39, 42, -49, -106, -62, -11, -85, 17, 71};
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
    msg.setTimeStamp(0.6077947129987336);
    msg.setSource(15017U);
    msg.setSourceEntity(178U);
    msg.setDestination(29191U);
    msg.setDestinationEntity(186U);
    msg.req_id = 15652U;
    msg.ttl = 26744U;
    msg.destination.assign("GBGNWGYBUUTQQHOFFYRFJPHWFTTONNDJHYWRCZTLEVQWKDLMDEYASDRLVOURGJXIOPAA");
    const char tmp_msg_0[] = {3, 20, -55, -36, -56, -117, 120, -28, 25, -104, 27};
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
    msg.setTimeStamp(0.7829362762709553);
    msg.setSource(64195U);
    msg.setSourceEntity(156U);
    msg.setDestination(53281U);
    msg.setDestinationEntity(191U);
    msg.req_id = 62630U;
    msg.status = 29U;
    msg.text.assign("YWIEZGRUQFLZWEULSHHQBRJAPRONCBSHBTLURGMLCOKWDOGZFETMMRBOEXZNIMRMNDZEOTNPFISKIISFVDBPHCUZOQRBSTYIHJAWNVKJDDHHVNQAGXBKCVLQEPPGXXYAUTSPYJDUPFLDKTALIQMUDGRFLCVXB");

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
    msg.setTimeStamp(0.6505872166658969);
    msg.setSource(14253U);
    msg.setSourceEntity(188U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(29U);
    msg.req_id = 62066U;
    msg.status = 111U;
    msg.text.assign("WDJICBIRCDVFAFLVNUCWMNXPOYBUEIFEFJWYPNEQZHLKNEXXNYOWSCPUTMCVBLPCNBRERSWGSPPAQAKFCJIZTITWJMUSKJVDERFUHXVHANRIBXFOHKWAMRTLHYKFQTIOLLAUBBHARMQOXFEWTETDNGLQKDVJAHJQGGDXDNXZGKYISFHODWSTMZVQVBZYZJXS");

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
    msg.setTimeStamp(0.9558551560109528);
    msg.setSource(11698U);
    msg.setSourceEntity(91U);
    msg.setDestination(28478U);
    msg.setDestinationEntity(100U);
    msg.req_id = 56105U;
    msg.status = 227U;
    msg.text.assign("IBCRUTZGLVWLXLKUUFSNMMGMPYUCZPGKFJWYGAHGAQEPBMNZBXIYWICKTNUJLXJESBCQRFBFVWMSNNAKEXVSQYJYUHUITVQHEYKYJEPDWXFEVRNESLJAMMXWTULCRO");

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
    msg.setTimeStamp(0.03481099908047913);
    msg.setSource(57330U);
    msg.setSourceEntity(156U);
    msg.setDestination(32683U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("COTYZISPXRVSXMAPMDADTBXVXQEIHBACOSENUNMILZGFKLDPMEQNKGYOYOUPEJICBKPKNZUHEVGQYWSRQZVSCGOKHQLUCMRBIXPDUSLDRMJIRXZFNYJNJEKCETEPOEWGBXCY");
    msg.links = 2773018043U;

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
    msg.setTimeStamp(0.8310843519763844);
    msg.setSource(45371U);
    msg.setSourceEntity(224U);
    msg.setDestination(13367U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("TBYKHNFSLZSLSLDLTIXVKXRFFKQX");
    msg.links = 3512220752U;

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
    msg.setTimeStamp(0.5882664742270658);
    msg.setSource(29972U);
    msg.setSourceEntity(88U);
    msg.setDestination(1260U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("MZYXLROEJVPAXQBCHWBBHISHZIAFONMNOXSLUDERASVF");
    msg.links = 1493552585U;

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
    msg.setTimeStamp(0.9364113637606312);
    msg.setSource(12266U);
    msg.setSourceEntity(44U);
    msg.setDestination(25717U);
    msg.setDestinationEntity(64U);
    msg.groupname.assign("DDDOTPFXTOFYGKKXFPCJGWYYTTFANXBPIRSBCACJIHLSNMYTDKZROLJNZHCHFSXYEVIRXXXEOPCBT");
    msg.action = 171U;
    msg.grouplist.assign("QJFQGRJMFSIRNFLEPSWUINJBBUCRKYPRHYKQWYYTDDXAKJDFCTSGZIBVCAJNHUQUWMCPNXNAUEOXWAHGQOKUBZNOTUFBSNTQYMXXIINAOBDZAMEMBJSZDSGQLJZIVGTFWWHAXGGZPHTYQFLWMDLDSAEPCSPKVZUHAIPTOPLERMECRZG");

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
    msg.setTimeStamp(0.35923112844260074);
    msg.setSource(55105U);
    msg.setSourceEntity(34U);
    msg.setDestination(2U);
    msg.setDestinationEntity(212U);
    msg.groupname.assign("BQMRTWIRQQJVTIYMIKWAQJH");
    msg.action = 97U;
    msg.grouplist.assign("HQRKPZCLRWXHGEGWGDHREWWSMXGDKBQYQLPBWXPVJGLDKZAZSHCYSYOSPQNHWDTKISKIATWTICRZEWFEIEIMGXAISPRYALIRQVVURBOXLORUJUQIZWENPDXMNHXTNFSGVBXCBDMKCVIVSTLLVFMOYZCMBDVAMDPKUAYTILFFELJSKOCGXYJJUNBJACHEHUDQPUTFJQQONACGAEJUTOYKETSB");

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
    msg.setTimeStamp(0.15339314777026636);
    msg.setSource(13593U);
    msg.setSourceEntity(200U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("CPFITNZUOIVWQGUUDSRCLERKSLMROAUQZKSCRQOZMWCEBDGTRVWIYRTGWOXJNSPZHCOVTPWPSGMVVBKOJ");
    msg.action = 87U;
    msg.grouplist.assign("BZMVHMIHVHBJFZXIBDNXHJTIRJZRTTPOW");

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
    msg.setTimeStamp(0.8530680854733056);
    msg.setSource(22992U);
    msg.setSourceEntity(56U);
    msg.setDestination(60665U);
    msg.setDestinationEntity(16U);
    msg.id = 136U;
    msg.range = 0.6812961683958864;

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
    msg.setTimeStamp(0.20061467367147257);
    msg.setSource(55006U);
    msg.setSourceEntity(181U);
    msg.setDestination(45971U);
    msg.setDestinationEntity(70U);
    msg.id = 196U;
    msg.range = 0.22440096557711464;

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
    msg.setTimeStamp(0.4801250656731295);
    msg.setSource(48126U);
    msg.setSourceEntity(77U);
    msg.setDestination(48785U);
    msg.setDestinationEntity(26U);
    msg.id = 190U;
    msg.range = 0.7235737097722982;

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
    msg.setTimeStamp(0.5388426542029374);
    msg.setSource(5134U);
    msg.setSourceEntity(54U);
    msg.setDestination(33492U);
    msg.setDestinationEntity(194U);
    msg.beacon.assign("WMQAAXLJWUBGVMQTUKARXFFRVHXPGSMVZLXLYIFJZZQJTFJPEUOOGEBVWISPE");
    msg.lat = 0.45796951110372264;
    msg.lon = 0.24263141039270908;
    msg.depth = 0.28088666998108436;
    msg.query_channel = 210U;
    msg.reply_channel = 188U;
    msg.transponder_delay = 219U;

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
    msg.setTimeStamp(0.9410044480337305);
    msg.setSource(22096U);
    msg.setSourceEntity(26U);
    msg.setDestination(25634U);
    msg.setDestinationEntity(51U);
    msg.beacon.assign("KLGOSSAPQFFNOJBZWDNCVNTKLMOARCXGDPKPQBMYVIMEUPEDNRAEZXYYCILAJZLN");
    msg.lat = 0.6047301788022473;
    msg.lon = 0.21219122869356766;
    msg.depth = 0.9970602479806676;
    msg.query_channel = 239U;
    msg.reply_channel = 26U;
    msg.transponder_delay = 75U;

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
    msg.setTimeStamp(0.8274659440265941);
    msg.setSource(28460U);
    msg.setSourceEntity(32U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(26U);
    msg.beacon.assign("XRMGUGUKRWYGSWCJWIBQDISNALFQF");
    msg.lat = 0.7955799052391044;
    msg.lon = 0.30628418793213474;
    msg.depth = 0.41948854134370295;
    msg.query_channel = 208U;
    msg.reply_channel = 134U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.04931998840139207);
    msg.setSource(42603U);
    msg.setSourceEntity(33U);
    msg.setDestination(37581U);
    msg.setDestinationEntity(195U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.08424327905130846);
    msg.setSource(10437U);
    msg.setSourceEntity(144U);
    msg.setDestination(48857U);
    msg.setDestinationEntity(101U);
    msg.op = 205U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WPOQLTITLMZBSMJUGKOFWXKXTYVEUIEQPDWDCJNPQKRQZIHMNUUKAAQLVLNJZDTUEOJMTGVSCRWHEL");
    tmp_msg_0.lat = 0.22870222113589433;
    tmp_msg_0.lon = 0.9154152495472105;
    tmp_msg_0.depth = 0.6576520850488105;
    tmp_msg_0.query_channel = 242U;
    tmp_msg_0.reply_channel = 5U;
    tmp_msg_0.transponder_delay = 80U;
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
    msg.setTimeStamp(0.4180321231550149);
    msg.setSource(21534U);
    msg.setSourceEntity(133U);
    msg.setDestination(22422U);
    msg.setDestinationEntity(222U);
    msg.op = 197U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CDIGDNYKVVLUBSMCMGJNJTHSVWQSLTZSFGOUQYEGJDBAIUUZVECK");
    tmp_msg_0.lat = 0.9338734281366775;
    tmp_msg_0.lon = 0.9986886520343679;
    tmp_msg_0.depth = 0.40206660939473093;
    tmp_msg_0.query_channel = 179U;
    tmp_msg_0.reply_channel = 243U;
    tmp_msg_0.transponder_delay = 148U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.30309791734273184);
    msg.setSource(35659U);
    msg.setSourceEntity(3U);
    msg.setDestination(36556U);
    msg.setDestinationEntity(63U);
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.05704020049364866;
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
    msg.setTimeStamp(0.9308418715892777);
    msg.setSource(7910U);
    msg.setSourceEntity(130U);
    msg.setDestination(50616U);
    msg.setDestinationEntity(72U);
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.2239669303841716;
    tmp_msg_0.lon = 0.829320012873651;
    tmp_msg_0.depth = 0.12735556341146037;
    tmp_msg_0.roll = 0.4133493556490121;
    tmp_msg_0.pitch = 0.2912001796196507;
    tmp_msg_0.yaw = 0.4850232958067143;
    tmp_msg_0.rcp_time = 0.995005156979642;
    tmp_msg_0.sid.assign("KIHYNELJHAPQQEFXYVVWAWDZTOMFODZKYSOHTLDVTRYVCDECNABAFKDLPGIWMPHFBZGYVLRBTYDPQQNWZTXJUIOJAESLZEGJZFKNFJJQXDBEAEWLWNJCMNGEVJGVKOCSPHSUUQCPVCCRIWMUCYAXPBWIIXUTKOTZQSVOAXLN");
    tmp_msg_0.s_type = 23U;
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
    msg.setTimeStamp(0.6383591585925917);
    msg.setSource(38673U);
    msg.setSourceEntity(141U);
    msg.setDestination(20690U);
    msg.setDestinationEntity(10U);
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("DMTSSRXALSDPMIFYLSMLOSDDBZDYEHJ");
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
    msg.setTimeStamp(0.4763694766645209);
    msg.setSource(3452U);
    msg.setSourceEntity(176U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(224U);
    msg.op = 43U;
    msg.system.assign("ZNYQDXTZSZJWNTLOWBELWCYOIEATNGHJWKAIKUBTQHVUTMCIREEUMUAQKBPWVAZPKKCHDRKIHUDUKXIGXERCZJMEVPVTZXGGBBRYLNJHDGJQEFVCQGPTBDMIYNAKWOSFDGX");
    msg.range = 0.851549831281707;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 222U;
    tmp_msg_0.lon_gain = 0.3005674072454235;
    tmp_msg_0.lat_gain = 0.3440421610431863;
    tmp_msg_0.bond_thick = 0.9319682770512803;
    tmp_msg_0.lead_gain = 0.326597249449717;
    tmp_msg_0.deconfl_gain = 0.6466143862696911;
    tmp_msg_0.accel_switch_gain = 0.7069153800514588;
    tmp_msg_0.safe_dist = 0.7622856062086186;
    tmp_msg_0.deconflict_offset = 0.9944603770358753;
    tmp_msg_0.accel_safe_margin = 0.9988973893586429;
    tmp_msg_0.accel_lim_x = 0.562454977100505;
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
    msg.setTimeStamp(0.3491830050025364);
    msg.setSource(24262U);
    msg.setSourceEntity(83U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(28U);
    msg.op = 99U;
    msg.system.assign("EUZKSTVCZOVQSKHOWHMHLQPTYRFZDNXGLCZIEUUMJICFNWUMZFPVXXZQBOKVPSUWKYDIITJLVBPOHCDJEQTBINNWPWGMUXGANWFXZPFNDMJDBINCHICEKKHSTACFRGAIRTZSGDFOYSHIYBCYDGSPXTULBJIDEYVREFVBYKMMATWLOHXYUTHUXUBSQVQETKZEAKARCOMBXCPQLORRGAFMVASNJSZAYEFQDA");
    msg.range = 0.8952339863168766;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 251U;
    tmp_msg_0.flags = 75U;
    tmp_msg_0.description.assign("EHYSWDEULTWQZCDPSTYDECTONIYDMKRSBJCBKDVOVYACLBSOIJHFUMOFVHUHCWCQRLXWSIXHEIWBRFEKLWAECSQGWUROUJVSXVZGRABUJAIHHFJCHXDPQZLUSVGKXBXBVMFNTVNXAMOZTSRNKFOPGJKPQKEGXLYJMTNKNKTBMIYIGRQFPFLCQVYPLAYZFNMLEXAQPONRWBZLUWBTZPTUYEGOGMUPDGDFNMHZOREZJXPIAHVDDIYRGWKT");
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
    msg.setTimeStamp(0.3674262508640941);
    msg.setSource(43924U);
    msg.setSourceEntity(39U);
    msg.setDestination(34355U);
    msg.setDestinationEntity(67U);
    msg.op = 109U;
    msg.system.assign("EWOQNMYIHZLTAECRALRODIGXVEXMUWZMVAQKHPTWBWXIANFETELFJITLXDGPQHYHTZPLDVMGPEIYNRMCSCFQWBLFRBKNEVVLKHQUKZJVHUQUVDOUHBIPKTMJRNNYPSDUZVZCJBGVPOWBARWHSLNUSMSJJWUXWOMQESLRNETXFBDOAMIUGYGSQIJQXBGNAZYHFFOTXJOCPFAFVBSIPUCXRROAEXJMHCFGKKGACKYZDN");
    msg.range = 0.9159439393244719;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 177U;
    tmp_msg_0.request_id = 60928U;
    tmp_msg_0.command = 88U;
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 9554U;
    tmp_tmp_msg_0_0.custom.assign("MVQISXBDGFCUZOLAWMBEMZOPPZUPCTOCYQVYEVZRPDCGBYJLDNXWHEBFFRQRMPTGVYNXMMHOASONXLHZARJIYLSYJUEZQVWTLOUGPBADRGJCUUSKVUSEDICRKDVFIWNHVFLWBI");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 24545U;
    tmp_msg_0.info.assign("UMOMWPTYTIEGJMGZACIVMRKQRGUXWHHXXMSOJUXUZMQBSSZHOYKIFUNHCHVCNJXBBUYUFGPNAYKXOECYIFKCGWQAKJZCFQKDOZFVFHGVDKCTPMDXLSNRFLAPPZRVURTJBTPDLLRTJZJRQTYCNQNBYVBONPWQEUWMFHLPZBKHLQHOBTDABENWVW");
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
    msg.setTimeStamp(0.9447263702614812);
    msg.setSource(16742U);
    msg.setSourceEntity(197U);
    msg.setDestination(30490U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.46460882359790057);
    msg.setSource(29468U);
    msg.setSourceEntity(17U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.16852661550065207);
    msg.setSource(29818U);
    msg.setSourceEntity(32U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.8314809024176167);
    msg.setSource(62753U);
    msg.setSourceEntity(58U);
    msg.setDestination(26866U);
    msg.setDestinationEntity(39U);
    msg.list.assign("UUHUOHZPHEOTIPXHDYMZSWPSXZKDTUFSKENCBQDCAXGUIVAJZZJQPYWAOSTNDBIFWRCFKEAOFXNMMYGWMCNTVHLVUPVQJKNLFWLMCERWAZGBAQTRPFMNSGDABXDIHSOTJYIGCNJBWZRKFAOCPEQCNCJLUQPPJSEXYROTYUAGIMRQXSZRAEWOMSKLVKIHYTDSQUHOLXTBDRVJBRLYWKUEDJLXHVRGOFBKVFIZDXNTECLYIPKZNBQ");

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
    msg.setTimeStamp(0.7324610842049282);
    msg.setSource(1830U);
    msg.setSourceEntity(207U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(31U);
    msg.list.assign("XNQLPCIAWLRRNMHAVSWZXYIZXGNDCVFXLOUINUEOBTIPOPLAKYRKKMFWCZPTHUYSHBKQBRSZHUPXWGFDIDTIAVMCLVAEVJTTCHEUDBFYLOVPSXLZAHXKOHCODQLBDGAPFKUCAGDJEDZHEEMATGYHGTGRPOJFIJCCGRLERWXYQKVAUKUZGTN");

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
    msg.setTimeStamp(0.031705624304113056);
    msg.setSource(35331U);
    msg.setSourceEntity(151U);
    msg.setDestination(34607U);
    msg.setDestinationEntity(216U);
    msg.list.assign("HAFHJQVRAJXRORFECEBSBIVYDALTTGUPWWMRRWJUUEGENLFCADGNQOBIISNHYLPPXCRTKRVYZCUCFXFXFSNHKPYFZMTT");

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
    msg.setTimeStamp(0.9981119666208315);
    msg.setSource(7030U);
    msg.setSourceEntity(116U);
    msg.setDestination(35277U);
    msg.setDestinationEntity(88U);
    msg.value = -28888;

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
    msg.setTimeStamp(0.5817043177510258);
    msg.setSource(29230U);
    msg.setSourceEntity(65U);
    msg.setDestination(19000U);
    msg.setDestinationEntity(158U);
    msg.value = -21821;

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
    msg.setTimeStamp(0.8130361124255615);
    msg.setSource(14396U);
    msg.setSourceEntity(182U);
    msg.setDestination(21830U);
    msg.setDestinationEntity(208U);
    msg.value = 16168;

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
    msg.setTimeStamp(0.8473987075666186);
    msg.setSource(54013U);
    msg.setSourceEntity(151U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(253U);
    msg.value = 0.9309844770682242;

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
    msg.setTimeStamp(0.06294191316920428);
    msg.setSource(54765U);
    msg.setSourceEntity(168U);
    msg.setDestination(59147U);
    msg.setDestinationEntity(96U);
    msg.value = 0.47878353413653096;

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
    msg.setTimeStamp(0.11976513691956525);
    msg.setSource(39429U);
    msg.setSourceEntity(112U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5227224547967154;

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
    msg.setTimeStamp(0.4305648702415664);
    msg.setSource(10515U);
    msg.setSourceEntity(135U);
    msg.setDestination(26097U);
    msg.setDestinationEntity(46U);
    msg.value = 0.931832621610421;

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
    msg.setTimeStamp(0.41101925876416767);
    msg.setSource(33U);
    msg.setSourceEntity(66U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(66U);
    msg.value = 0.34107198377513226;

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
    msg.setTimeStamp(0.6094876237685628);
    msg.setSource(2021U);
    msg.setSourceEntity(66U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(38U);
    msg.value = 0.006800393557215956;

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
    msg.setTimeStamp(0.9383546696575316);
    msg.setSource(8856U);
    msg.setSourceEntity(162U);
    msg.setDestination(5328U);
    msg.setDestinationEntity(252U);
    msg.validity = 13538U;
    msg.type = 22U;
    msg.utc_year = 23795U;
    msg.utc_month = 9U;
    msg.utc_day = 172U;
    msg.utc_time = 0.3264216696213659;
    msg.lat = 0.17488539341658582;
    msg.lon = 0.5238098424899529;
    msg.height = 0.11893209409696903;
    msg.satellites = 202U;
    msg.cog = 0.22347713201666375;
    msg.sog = 0.666479128089236;
    msg.hdop = 0.9737223987173397;
    msg.vdop = 0.18756448498151634;
    msg.hacc = 0.32731683257317834;
    msg.vacc = 0.8720226910430124;

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
    msg.setTimeStamp(0.9711305210661683);
    msg.setSource(13343U);
    msg.setSourceEntity(146U);
    msg.setDestination(5679U);
    msg.setDestinationEntity(70U);
    msg.validity = 35813U;
    msg.type = 97U;
    msg.utc_year = 33323U;
    msg.utc_month = 107U;
    msg.utc_day = 116U;
    msg.utc_time = 0.2596253418593434;
    msg.lat = 0.0900893487443365;
    msg.lon = 0.5809167644555351;
    msg.height = 0.9483049399522587;
    msg.satellites = 216U;
    msg.cog = 0.307239875032982;
    msg.sog = 0.7563181065800627;
    msg.hdop = 0.684660936222573;
    msg.vdop = 0.6297643557782171;
    msg.hacc = 0.8407953097656188;
    msg.vacc = 0.20182010316386745;

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
    msg.setTimeStamp(0.7778027520909235);
    msg.setSource(20328U);
    msg.setSourceEntity(152U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(136U);
    msg.validity = 60092U;
    msg.type = 235U;
    msg.utc_year = 47007U;
    msg.utc_month = 145U;
    msg.utc_day = 217U;
    msg.utc_time = 0.6264111380123075;
    msg.lat = 0.8424655466499447;
    msg.lon = 0.04216178734846221;
    msg.height = 0.9249667064571699;
    msg.satellites = 236U;
    msg.cog = 0.6333164287153239;
    msg.sog = 0.402140612093306;
    msg.hdop = 0.3136058840691631;
    msg.vdop = 0.26922450495073047;
    msg.hacc = 0.5227890742740322;
    msg.vacc = 0.5507658572389703;

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
    msg.setTimeStamp(0.23942374736641703);
    msg.setSource(30338U);
    msg.setSourceEntity(64U);
    msg.setDestination(45987U);
    msg.setDestinationEntity(239U);
    msg.time = 0.5411880001903541;
    msg.phi = 0.5739779397611632;
    msg.theta = 0.6611725065832085;
    msg.psi = 0.13886261173088832;
    msg.psi_magnetic = 0.7186259224001722;

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
    msg.setTimeStamp(0.5050854204932167);
    msg.setSource(43383U);
    msg.setSourceEntity(44U);
    msg.setDestination(4806U);
    msg.setDestinationEntity(115U);
    msg.time = 0.2501589346138603;
    msg.phi = 0.5799354694760995;
    msg.theta = 0.8868400724798063;
    msg.psi = 0.8645457709802463;
    msg.psi_magnetic = 0.3454716409143481;

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
    msg.setTimeStamp(0.8678060636988427);
    msg.setSource(42272U);
    msg.setSourceEntity(137U);
    msg.setDestination(17352U);
    msg.setDestinationEntity(62U);
    msg.time = 0.3800352702436046;
    msg.phi = 0.9030486685839992;
    msg.theta = 0.3024246188546641;
    msg.psi = 0.35153172543814715;
    msg.psi_magnetic = 0.6889242115083507;

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
    msg.setTimeStamp(0.8559257917292559);
    msg.setSource(23631U);
    msg.setSourceEntity(116U);
    msg.setDestination(23291U);
    msg.setDestinationEntity(117U);
    msg.time = 0.34777100814680817;
    msg.x = 0.7601238009446919;
    msg.y = 0.7384122467068904;
    msg.z = 0.7298137311764352;
    msg.timestep = 0.9919240020116099;

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
    msg.setTimeStamp(0.14899482173638812);
    msg.setSource(46548U);
    msg.setSourceEntity(208U);
    msg.setDestination(57537U);
    msg.setDestinationEntity(15U);
    msg.time = 0.7829809016997686;
    msg.x = 0.09441264104504621;
    msg.y = 0.6237980763283285;
    msg.z = 0.5218149513828787;
    msg.timestep = 0.449062056809331;

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
    msg.setTimeStamp(0.1159852536292767);
    msg.setSource(1460U);
    msg.setSourceEntity(211U);
    msg.setDestination(35262U);
    msg.setDestinationEntity(121U);
    msg.time = 0.9806215558375115;
    msg.x = 0.035035584374829676;
    msg.y = 0.7319205296479607;
    msg.z = 0.9008503620192689;
    msg.timestep = 0.8566474596256964;

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
    msg.setTimeStamp(0.7872358533918589);
    msg.setSource(57216U);
    msg.setSourceEntity(140U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(60U);
    msg.time = 0.01317938412210884;
    msg.x = 0.98917176306534;
    msg.y = 0.5686086811059018;
    msg.z = 0.1028631354110463;

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
    msg.setTimeStamp(0.08384554289221069);
    msg.setSource(14402U);
    msg.setSourceEntity(25U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(54U);
    msg.time = 0.0032813897025009142;
    msg.x = 0.45722258239491775;
    msg.y = 0.9615277222920595;
    msg.z = 0.6939743708553934;

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
    msg.setTimeStamp(0.853704236396136);
    msg.setSource(5143U);
    msg.setSourceEntity(173U);
    msg.setDestination(5632U);
    msg.setDestinationEntity(199U);
    msg.time = 0.5333164873970391;
    msg.x = 0.3480341721254355;
    msg.y = 0.3808364923160955;
    msg.z = 0.23638352149605857;

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
    msg.setTimeStamp(0.5073902291424461);
    msg.setSource(42155U);
    msg.setSourceEntity(105U);
    msg.setDestination(42107U);
    msg.setDestinationEntity(107U);
    msg.time = 0.24173946309213257;
    msg.x = 0.15382509650637477;
    msg.y = 0.3301298090119952;
    msg.z = 0.37123356520174644;

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
    msg.setTimeStamp(0.5815253297625897);
    msg.setSource(10802U);
    msg.setSourceEntity(7U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(199U);
    msg.time = 0.18657577203778797;
    msg.x = 0.7160960338822122;
    msg.y = 0.7799132197438553;
    msg.z = 0.06515934604164364;

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
    msg.setTimeStamp(0.9372752011572467);
    msg.setSource(41228U);
    msg.setSourceEntity(139U);
    msg.setDestination(50473U);
    msg.setDestinationEntity(45U);
    msg.time = 0.3220647614609078;
    msg.x = 0.1700928342810688;
    msg.y = 0.49438591304855317;
    msg.z = 0.46312629127072413;

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
    msg.setTimeStamp(0.5188137703051724);
    msg.setSource(64343U);
    msg.setSourceEntity(58U);
    msg.setDestination(17377U);
    msg.setDestinationEntity(58U);
    msg.time = 0.9152247191545588;
    msg.x = 0.0816226502621471;
    msg.y = 0.8942450018992246;
    msg.z = 0.7310752318093713;

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
    msg.setTimeStamp(0.27772371062914203);
    msg.setSource(11672U);
    msg.setSourceEntity(193U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(82U);
    msg.time = 0.8727138408685857;
    msg.x = 0.3663053820769777;
    msg.y = 0.14950050339270327;
    msg.z = 0.9069346762553666;

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
    msg.setTimeStamp(0.8612182063486177);
    msg.setSource(1419U);
    msg.setSourceEntity(245U);
    msg.setDestination(63937U);
    msg.setDestinationEntity(181U);
    msg.time = 0.9542894940846302;
    msg.x = 0.9119218491882337;
    msg.y = 0.5317281834722999;
    msg.z = 0.5129776884179629;

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
    msg.setTimeStamp(0.8656286714126102);
    msg.setSource(65395U);
    msg.setSourceEntity(204U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(73U);
    msg.validity = 82U;
    msg.x = 0.8592769132376255;
    msg.y = 0.5350048290523486;
    msg.z = 0.6564106482436051;

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
    msg.setTimeStamp(0.3326127703551365);
    msg.setSource(62372U);
    msg.setSourceEntity(239U);
    msg.setDestination(53588U);
    msg.setDestinationEntity(191U);
    msg.validity = 77U;
    msg.x = 0.0468034838933481;
    msg.y = 0.5053735709733269;
    msg.z = 0.35372377035041824;

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
    msg.setTimeStamp(0.7500985702974214);
    msg.setSource(52185U);
    msg.setSourceEntity(50U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(132U);
    msg.validity = 76U;
    msg.x = 0.9011571924834112;
    msg.y = 0.6801169317767767;
    msg.z = 0.04902542536627985;

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
    msg.setTimeStamp(0.7158624357153762);
    msg.setSource(40169U);
    msg.setSourceEntity(126U);
    msg.setDestination(12200U);
    msg.setDestinationEntity(6U);
    msg.validity = 226U;
    msg.x = 0.8792163564451743;
    msg.y = 0.6374309034142148;
    msg.z = 0.36623308095933194;

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
    msg.setTimeStamp(0.614153616576138);
    msg.setSource(22015U);
    msg.setSourceEntity(194U);
    msg.setDestination(48397U);
    msg.setDestinationEntity(246U);
    msg.validity = 146U;
    msg.x = 0.5760084890878387;
    msg.y = 0.35766694040529035;
    msg.z = 0.6736607021556723;

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
    msg.setTimeStamp(0.44914208140283307);
    msg.setSource(9846U);
    msg.setSourceEntity(210U);
    msg.setDestination(12030U);
    msg.setDestinationEntity(184U);
    msg.validity = 84U;
    msg.x = 0.5846796939486276;
    msg.y = 0.8966197865343142;
    msg.z = 0.3990928405656933;

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
    msg.setTimeStamp(0.03343309187788057);
    msg.setSource(40973U);
    msg.setSourceEntity(129U);
    msg.setDestination(64962U);
    msg.setDestinationEntity(63U);
    msg.time = 0.02450100408394318;
    msg.x = 0.8736264128202377;
    msg.y = 0.4203994813808096;
    msg.z = 0.9977649776240356;

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
    msg.setTimeStamp(0.31017159514037373);
    msg.setSource(23237U);
    msg.setSourceEntity(5U);
    msg.setDestination(15772U);
    msg.setDestinationEntity(186U);
    msg.time = 0.02538577456886637;
    msg.x = 0.7710164502931844;
    msg.y = 0.49057900817075184;
    msg.z = 0.9251185687964406;

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
    msg.setTimeStamp(0.8628379705050304);
    msg.setSource(23550U);
    msg.setSourceEntity(16U);
    msg.setDestination(7096U);
    msg.setDestinationEntity(101U);
    msg.time = 0.9196608542995635;
    msg.x = 0.9636427425431161;
    msg.y = 0.5829163969146289;
    msg.z = 0.056697250283487266;

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
    msg.setTimeStamp(0.5943517737794697);
    msg.setSource(3228U);
    msg.setSourceEntity(165U);
    msg.setDestination(134U);
    msg.setDestinationEntity(111U);
    msg.validity = 1U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.788886618289699;
    tmp_msg_0.y = 0.7405030176736437;
    tmp_msg_0.z = 0.9897922867963986;
    tmp_msg_0.phi = 0.46624587885862234;
    tmp_msg_0.theta = 0.4698433825211985;
    tmp_msg_0.psi = 0.8685866917365065;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5412084385144221;
    tmp_msg_1.beam_height = 0.153827449224321;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.34412785978763416;

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
    msg.setTimeStamp(0.9097188585013588);
    msg.setSource(11274U);
    msg.setSourceEntity(229U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(132U);
    msg.validity = 154U;
    msg.value = 0.8893927119345435;

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
    msg.setTimeStamp(0.8066970692211229);
    msg.setSource(10586U);
    msg.setSourceEntity(53U);
    msg.setDestination(10484U);
    msg.setDestinationEntity(218U);
    msg.validity = 197U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8782509673837344;
    tmp_msg_0.y = 0.44421640594755396;
    tmp_msg_0.z = 0.10585406227093919;
    tmp_msg_0.phi = 0.39496167413547467;
    tmp_msg_0.theta = 0.24354784686596853;
    tmp_msg_0.psi = 0.45901656388941703;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6047095708296248;
    tmp_msg_1.beam_height = 0.24881172403523144;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9483617704219269;

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
    msg.setTimeStamp(0.6251520494630249);
    msg.setSource(56857U);
    msg.setSourceEntity(50U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(132U);
    msg.value = 0.12933916960859093;

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
    msg.setTimeStamp(0.6066360663284247);
    msg.setSource(44705U);
    msg.setSourceEntity(243U);
    msg.setDestination(5736U);
    msg.setDestinationEntity(233U);
    msg.value = 0.28434508668521274;

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
    msg.setTimeStamp(0.7062079911989004);
    msg.setSource(60419U);
    msg.setSourceEntity(225U);
    msg.setDestination(34810U);
    msg.setDestinationEntity(232U);
    msg.value = 0.07766726469769658;

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
    msg.setTimeStamp(0.42663805186740467);
    msg.setSource(60343U);
    msg.setSourceEntity(99U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(176U);
    msg.value = 0.6682987780425691;

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
    msg.setTimeStamp(0.5048190799915899);
    msg.setSource(42997U);
    msg.setSourceEntity(172U);
    msg.setDestination(13476U);
    msg.setDestinationEntity(240U);
    msg.value = 0.3764922248876633;

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
    msg.setTimeStamp(0.37409168319864616);
    msg.setSource(65004U);
    msg.setSourceEntity(221U);
    msg.setDestination(46781U);
    msg.setDestinationEntity(106U);
    msg.value = 0.3319431813056558;

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
    msg.setTimeStamp(0.8508841461931054);
    msg.setSource(57959U);
    msg.setSourceEntity(235U);
    msg.setDestination(51803U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9488771540595033;

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
    msg.setTimeStamp(0.07709976138109964);
    msg.setSource(22559U);
    msg.setSourceEntity(77U);
    msg.setDestination(50242U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8426304205906321;

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
    msg.setTimeStamp(0.12807281003167648);
    msg.setSource(65263U);
    msg.setSourceEntity(121U);
    msg.setDestination(25784U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5324625418145467;

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
    msg.setTimeStamp(0.5337810559657273);
    msg.setSource(33809U);
    msg.setSourceEntity(238U);
    msg.setDestination(32956U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5855951715581998;

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
    msg.setTimeStamp(0.5487135064796723);
    msg.setSource(30624U);
    msg.setSourceEntity(241U);
    msg.setDestination(52690U);
    msg.setDestinationEntity(211U);
    msg.value = 0.11571145381898618;

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
    msg.setTimeStamp(0.26713281228112573);
    msg.setSource(54419U);
    msg.setSourceEntity(250U);
    msg.setDestination(37426U);
    msg.setDestinationEntity(116U);
    msg.value = 0.49450470054575046;

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
    msg.setTimeStamp(0.9652491594475808);
    msg.setSource(5305U);
    msg.setSourceEntity(50U);
    msg.setDestination(18508U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5847078740137347;

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
    msg.setTimeStamp(0.6032086294688667);
    msg.setSource(50042U);
    msg.setSourceEntity(15U);
    msg.setDestination(51450U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8906224298338605;

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
    msg.setTimeStamp(0.8719965245142769);
    msg.setSource(21240U);
    msg.setSourceEntity(5U);
    msg.setDestination(11323U);
    msg.setDestinationEntity(81U);
    msg.value = 0.32303008964359026;

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
    msg.setTimeStamp(0.7852092640478585);
    msg.setSource(43771U);
    msg.setSourceEntity(211U);
    msg.setDestination(917U);
    msg.setDestinationEntity(194U);
    msg.value = 0.8467454323643473;

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
    msg.setTimeStamp(0.6331963538918058);
    msg.setSource(33723U);
    msg.setSourceEntity(176U);
    msg.setDestination(58478U);
    msg.setDestinationEntity(199U);
    msg.value = 0.2684652452819326;

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
    msg.setTimeStamp(0.251083445810132);
    msg.setSource(30271U);
    msg.setSourceEntity(209U);
    msg.setDestination(33734U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9036729042426325;

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
    msg.setTimeStamp(0.2215404497383655);
    msg.setSource(47692U);
    msg.setSourceEntity(245U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(38U);
    msg.value = 0.3253094249075884;

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
    msg.setTimeStamp(0.037033362968233785);
    msg.setSource(62737U);
    msg.setSourceEntity(124U);
    msg.setDestination(58895U);
    msg.setDestinationEntity(224U);
    msg.value = 0.007863893432758728;

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
    msg.setTimeStamp(0.9164157710034472);
    msg.setSource(65155U);
    msg.setSourceEntity(40U);
    msg.setDestination(55874U);
    msg.setDestinationEntity(29U);
    msg.value = 0.5439971322605185;

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
    msg.setTimeStamp(0.21999594996586302);
    msg.setSource(39829U);
    msg.setSourceEntity(63U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(86U);
    msg.value = 0.8463520089236012;

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
    msg.setTimeStamp(0.36320832009559045);
    msg.setSource(48029U);
    msg.setSourceEntity(137U);
    msg.setDestination(28437U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7892664042586262;

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
    msg.setTimeStamp(0.06850003824579431);
    msg.setSource(45416U);
    msg.setSourceEntity(183U);
    msg.setDestination(55642U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9749202916446675;

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
    msg.setTimeStamp(0.5651246099632363);
    msg.setSource(39186U);
    msg.setSourceEntity(198U);
    msg.setDestination(57747U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.9570138206810025;
    msg.speed = 0.36850997746347525;
    msg.turbulence = 0.44436810144356376;

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
    msg.setTimeStamp(0.7801630151051232);
    msg.setSource(21075U);
    msg.setSourceEntity(22U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(212U);
    msg.direction = 0.8503220713990721;
    msg.speed = 0.9326848838629797;
    msg.turbulence = 0.6108950420722925;

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
    msg.setTimeStamp(0.8364407472542295);
    msg.setSource(38045U);
    msg.setSourceEntity(37U);
    msg.setDestination(8994U);
    msg.setDestinationEntity(175U);
    msg.direction = 0.02191087902811073;
    msg.speed = 0.8500391952766638;
    msg.turbulence = 0.7134024911493605;

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
    msg.setTimeStamp(0.3196399345017301);
    msg.setSource(5048U);
    msg.setSourceEntity(114U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(126U);
    msg.value = 0.00846761197034307;

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
    msg.setTimeStamp(0.7356876857396235);
    msg.setSource(32232U);
    msg.setSourceEntity(47U);
    msg.setDestination(18946U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7108467489444366;

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
    msg.setTimeStamp(0.060020995860087245);
    msg.setSource(48204U);
    msg.setSourceEntity(87U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(22U);
    msg.value = 0.19579637027555774;

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
    msg.setTimeStamp(0.3938470703638939);
    msg.setSource(54550U);
    msg.setSourceEntity(64U);
    msg.setDestination(14170U);
    msg.setDestinationEntity(15U);
    msg.value.assign("DWSJAVYNNLSJLISZHPPYNFWOWSRZHLXYITHVXAHAYOCGXNCFJCZCMMYQBUVDYFZMWOAVDUBPEVZOOBBMVULDWLFUDMUNARKEWZENUDPHTS");

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
    msg.setTimeStamp(0.3021106980546203);
    msg.setSource(38443U);
    msg.setSourceEntity(57U);
    msg.setDestination(63164U);
    msg.setDestinationEntity(49U);
    msg.value.assign("TYLDTWGBBSIGRWHOYFMLZFDAJQWQCJFNRTUKKYSNUUOTZNKEQPFOPOWUKPCNZULMDIUTDGGZILJJHMBHXWZBVCVCPVCJZEVRDAHPKNCKRXYBNNHFBGBQJSXELMYBLYPXHOHFVVPURQ");

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
    msg.setTimeStamp(0.3318985888328956);
    msg.setSource(23661U);
    msg.setSourceEntity(211U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(252U);
    msg.value.assign("WJUSBHHZEUAYKGHKACIBLKTMKHCPNDBGUWPMMQXTHSOOIPERVZZLNPCMQZDXELNRCGSYNMFBOCUUMJTIHUBXYWJVEWRHTWFOXYGTEXDSRZKDQSDIFGDVEFDMFSRJDZWCACYRIOAJARLVALSFJJAVMYHQSRGGEUVPXICNYVJVBVLLCBKDNUMZTOPYAHNWSWFWQZUGOSNFHCIPITGTTTEBEBFYKKOAINXXXBKLDWRLJKRN");

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
    msg.setTimeStamp(0.6919448852512348);
    msg.setSource(3128U);
    msg.setSourceEntity(70U);
    msg.setDestination(27799U);
    msg.setDestinationEntity(219U);
    const char tmp_msg_0[] = {111, 93, 37, -38, -79, 18, -109, -111, -67, 123, 95, -92, -100, -96, -20, 87, -49, 20, -37, 14, -41, 81, -44, -75, 87, -33, 37, -40, 124, -25, -38, 90, -28, 24, -5, -114, 53, 108, -56, -42, 51, 42, 3, -102, 39, 17, -78, 26, -51, -56, 12, 32, 52, -82, 86, 120, -121, 98, 106, -41, 51, -48, -111, 16, -93, 125, -82, -63, 66, -36, -90, 122, -70, -122, -112, 113, 116, 40, 13, -110, -12, 83, 58, 16, -62, 124, -40, -89, -14, 5, -27, 1, 87, 112, -73, -78, -47, -100, -106, -99, -80, 118, -74, 108, -44, -79, -88, -25, -2, 101, -24, -102, 122, -108, 23, 68, -29, 0, -24, 74, -57, -85, -93, 42, -48, 102, -68, 56, 102, -84, 78, 103, 9, 94, 69, -106, 120, -41, 30, -82, 59, 99, 104, 19, -21, 114, 48, -74, 110, -76, -56, 66, -87, 94, -48, -80, 111, 114, -62, 99, 104, -22, -30, -83, 60, 19, -58, 91, -12, 54, 9, -20, 9, -84, -29, -34, 2, -19, 40, 103, -95, 112, 53, 64, 35, 51, -60, -112, 23, 69, -68, 35, 63, 87, -64, -124, -57, -59, -69, 88, -20, -6, -41, 42, 92};
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
    msg.setTimeStamp(0.13009188603387034);
    msg.setSource(15480U);
    msg.setSourceEntity(146U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(28U);
    const char tmp_msg_0[] = {-55, -26, 67, 58, -15, -23, -123, -28, -71, -65, 22, -109, -128, 40, 60, 30, 91, -11, 30, -53, -119, -36, -116, 61, -45, -43, 79, 105, 0, -15, 65, -94, 115, 6, -78, 64, 70, -103, 98, 33, -96, 58, 93, 22, -115, -89, 81, 90, 75, 64, -109, -125, 30, -25, -92, -49, 107, -87, 53, -86, -127, -77, -42, -29, 19, 2, -68, 59, 92, 108, -103, -96, -20, 7, -54, -44, -13, 74, -67, -41, 125, 29, -126, 82, 22, -65, 92, 84, 41, 73, -94, 50, 18, 13, -19, 123, 111, 5, -12, -63, 83, -54, -109, -89, -42, 19, 117, -11, -16, -51, -24, 59, -4, 10, 22, 44, 31, 53, -81, 73, -63, 2, 94, -125, 62, -31, 82, -122, -75, 69, 9, -59, -31, 70, 122, -43, 90, 90, 122, 37, 93, -48, -31, 106, -43};
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
    msg.setTimeStamp(0.42892620092964895);
    msg.setSource(31779U);
    msg.setSourceEntity(178U);
    msg.setDestination(49732U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {-118, 24, 58, -82, 44, -35, -74, -84, -109, -10, -53, 23, 22, 26, -101, 2, 6, -11, 37, 76, 119, 84, 72, -117, 6, -19, -59, 74, 87, -26, -61, 119, -61, 20, -86, -8, 7, 125, -46, 112, 86, 65, -72, -106, 20, 42, -104, 7, 66, 20, 60, -111, 66, 35, -30, -127, 84, -92, -48, 126, 25, -48, 117, -120, -9, 14, 93, 31, 103, 41, -111, -61, -93, 34, 104, 75, 111, -15, 43, 71, -41, 71, -27, -27, -85, 35, 33, 60, -47, 114, 60, -49, 121, -117, -86, -124, -3, 32, -101, -105, 21, -13, -105, 0, -95, 85, -20, 114, -74, 65, -113, 100, -3, -90, 86, 51};
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
    msg.setTimeStamp(0.811921002293262);
    msg.setSource(31495U);
    msg.setSourceEntity(240U);
    msg.setDestination(13104U);
    msg.setDestinationEntity(71U);
    msg.type = 248U;
    msg.frequency = 1466271191U;
    msg.min_range = 65162U;
    msg.max_range = 64745U;
    msg.bits_per_point = 137U;
    msg.scale_factor = 0.4568169347436547;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5451066532123131;
    tmp_msg_0.beam_height = 0.3552282982628945;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-69, 82, -126, 10, 15, -81, 61, 6, -57, 52, 106, -58, 81, -105, -124, -101, -9, -11, 112, 123, -23, 106, -79, -72, 5, 93, -34, 60, 126, 45, 10, -78, 55, -85, 47, 34, 108, -67, -87, 123, 93, -102, -90, 80, -97, -77, 90, 100, -73, -6, -116, 97, -68, 3, -41, 98, 79, -47, -93, -36, -11, 59, 62, 75, -64, 15, -25, -66, -40, 15, 53, -38, 111, -113, 21, 86, -24, -116, 77, -88, -37, -92, 43, 5, -112, 14, 29, -111, 63, 48};
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
    msg.setTimeStamp(0.10598552581274445);
    msg.setSource(2447U);
    msg.setSourceEntity(174U);
    msg.setDestination(20662U);
    msg.setDestinationEntity(179U);
    msg.type = 92U;
    msg.frequency = 2627533081U;
    msg.min_range = 27627U;
    msg.max_range = 28266U;
    msg.bits_per_point = 132U;
    msg.scale_factor = 0.31155696597283966;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4632413375705722;
    tmp_msg_0.beam_height = 0.7658971079998345;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {35, -85, -46, -83, -75, -79, 32, -58, -111, -25, 26, -70, -8, -39, -68, -85, -126, 74, 69, -109, -72, 0, -25, 51, -79, -58, -123, -125, -124, -89, 37, -60, -24, -1, 80, 124, 7, 104, -119, 76, 96, -5, 82, -35, 81, 120, 11, 59, 87, 28, 96, -119, 44, 101, 60, -37, 64, -37, -98, -74, 106, 75, -119, -6, 4, -96, 89, 66, 62, 21, 21, 101, 32, -2, -50, -80, 86, -34, 106, -117, 51, 110, 93, 15, -2, -122, 115, 24, -34, -20, -52, -123, -44, 8, -17, 103, 68, -38, 46, -96, -120, 101, -86, 1, 105, -32, -87, -36, -108, 82, 102, -16, 48, -36, 19, 92, -117, -91};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.05209026117715887);
    msg.setSource(12843U);
    msg.setSourceEntity(52U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(183U);
    msg.type = 244U;
    msg.frequency = 735859903U;
    msg.min_range = 14626U;
    msg.max_range = 51540U;
    msg.bits_per_point = 223U;
    msg.scale_factor = 0.45465793256040754;
    const char tmp_msg_0[] = {113, -37, -117, 76, -68, -56, 41, 57, 71, -90, 56, -2, 47, -7, 37, 52, -30, 105, 117, 3, 113, -113, 85, -28, 119, 18, -91, 116, -60, 6, 122, -90, 19, -121, -27, 15, 25, 50, -18, -110, -25, -43, -93, -60, -37, 81, -40, -30, 67, 17, -20, -45, -86, -70, -126, 20, -98, -69, 110, -44, -4, 110, 93, 3, 16, -49, -74, 93, 33, 43, 108, 82, -127, -8, -126, -4, 34, 22, -115, -81, 49, -7, -124, 58, 81, 81, -12, -5, -54, -127, -18, 13, -91, 1, -96, 106, -9, -29, -34, -108, 12, 31, 45, 90, 78, 69, 120, 28, -27, -12, 21, 61, 108, 27, -105, -98, 87, 57, 76, 98, -57, 19, -104, 62, -48, 73, -47, -128, -114, -6, -28, 22, 125, 65, -98, -2, 9, -73, -25, -114, 43, -58, -112, 114, -29, 103, -111, -69, -30, -10, 10, -80, -23, -44, -64, 31, 26, -33, 2, 84, -62, 23, -118, 86, -15, 65, -97, 84, -29, -9, -116, 119, -89, 67, -57, -61, 17, -5, -87, 6, -96, -21, -15, 97, 88, -67, 68, 30, -96, 36, -25, 43, -101, -74, 60, -46, 32, 96, -39, -97, 32, 10, 55, 9, 40, -112, -62, -91, -24, -110, -128, 48, 115, -28, -11, -10, 101, -8, 72, -49, -43, 66, 59, 106, 103, -14, 101, 43, -54, 65, -5, -8, 111};
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
    msg.setTimeStamp(0.8299378954559875);
    msg.setSource(28385U);
    msg.setSourceEntity(147U);
    msg.setDestination(32049U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.3335341018727297);
    msg.setSource(37620U);
    msg.setSourceEntity(112U);
    msg.setDestination(21043U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.09480321588761542);
    msg.setSource(12903U);
    msg.setSourceEntity(37U);
    msg.setDestination(42748U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.2712022884083082);
    msg.setSource(46462U);
    msg.setSourceEntity(3U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(106U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.5288557640847088);
    msg.setSource(46535U);
    msg.setSourceEntity(144U);
    msg.setDestination(39841U);
    msg.setDestinationEntity(157U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.5881335710696323);
    msg.setSource(49120U);
    msg.setSourceEntity(170U);
    msg.setDestination(24796U);
    msg.setDestinationEntity(192U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.7682851677289956);
    msg.setSource(18642U);
    msg.setSourceEntity(53U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(205U);
    msg.value = 0.9035080563704813;
    msg.confidence = 0.7842129193406506;
    msg.opmodes.assign("ZYYMVLQCAFKEKBEOBCAHERLQFBSFMXIQDFQQSDOAGWKIBLAAXYYBGNHALDRIUPZVWWHXATWFJHSUZCQBOWBUXTCDYOPIJMGPSUFMIKEUREJDBNIVMKQBXTXENKZJSTXUWANZWQTPHTQHMULSOVLDPOXRJXMYGZTHBSLRYNKUDGEGREVOPPSOII");

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
    msg.setTimeStamp(0.5732318780047018);
    msg.setSource(18109U);
    msg.setSourceEntity(26U);
    msg.setDestination(62459U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5037255395369238;
    msg.confidence = 0.7689854605714583;
    msg.opmodes.assign("NDMBJBDTQMDHSZTZPTIVWBSNXXPHRHIIXCOPDJAZWUODHMKBLXGLFNVXOFYWBDCFALIRLKVLNANKXRPZFYEFJSMQCKGZHZAPEOCWKULGVCOPCQTWAYYEMJHHQPGYJYEWQRUINMJOIOSIGSFLSEECFZTDYLCAJ");

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
    msg.setTimeStamp(0.3670770681460883);
    msg.setSource(43665U);
    msg.setSourceEntity(35U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(235U);
    msg.value = 0.8240171800830123;
    msg.confidence = 0.023938608846391762;
    msg.opmodes.assign("TTWBMYTZLIBM");

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
    msg.setTimeStamp(0.9361980303329492);
    msg.setSource(64190U);
    msg.setSourceEntity(212U);
    msg.setDestination(10472U);
    msg.setDestinationEntity(104U);
    msg.itow = 3143196650U;
    msg.lat = 0.7657410651779061;
    msg.lon = 0.9952226764298568;
    msg.height_ell = 0.9796227653112455;
    msg.height_sea = 0.07712635766252063;
    msg.hacc = 0.030054192787319245;
    msg.vacc = 0.7792043740384986;
    msg.vel_n = 0.8304531906140005;
    msg.vel_e = 0.38383055552538625;
    msg.vel_d = 0.8117310209370122;
    msg.speed = 0.8531088870411552;
    msg.gspeed = 0.24899265604091447;
    msg.heading = 0.8239854965628978;
    msg.sacc = 0.25557899634142456;
    msg.cacc = 0.8740557711179352;

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
    msg.setTimeStamp(0.15285932452695383);
    msg.setSource(34181U);
    msg.setSourceEntity(217U);
    msg.setDestination(61655U);
    msg.setDestinationEntity(121U);
    msg.itow = 1368290437U;
    msg.lat = 0.417805759542592;
    msg.lon = 0.20374917093337463;
    msg.height_ell = 0.17048201456030265;
    msg.height_sea = 0.4399826405289021;
    msg.hacc = 0.6061166979542157;
    msg.vacc = 0.09605513313875713;
    msg.vel_n = 0.32844260012650706;
    msg.vel_e = 0.5734990858427351;
    msg.vel_d = 0.5291765374030967;
    msg.speed = 0.12563684616846582;
    msg.gspeed = 0.8654026414132533;
    msg.heading = 0.7017690870276645;
    msg.sacc = 0.9201489100240212;
    msg.cacc = 0.3157985826526212;

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
    msg.setTimeStamp(0.10727289656768624);
    msg.setSource(60256U);
    msg.setSourceEntity(150U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(134U);
    msg.itow = 133458517U;
    msg.lat = 0.9324442347455745;
    msg.lon = 0.7563273542643228;
    msg.height_ell = 0.31716414358022216;
    msg.height_sea = 0.8451851203533751;
    msg.hacc = 0.6835185298632729;
    msg.vacc = 0.7154698745026281;
    msg.vel_n = 0.8924164114056885;
    msg.vel_e = 0.6588436863617968;
    msg.vel_d = 0.2964125503759447;
    msg.speed = 0.7045646381626368;
    msg.gspeed = 0.5279327268160081;
    msg.heading = 0.3746921677876487;
    msg.sacc = 0.117927064882271;
    msg.cacc = 0.2014495423197341;

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
    msg.setTimeStamp(0.13107034998214595);
    msg.setSource(35190U);
    msg.setSourceEntity(156U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(76U);
    msg.id = 116U;
    msg.value = 0.7422126803091582;

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
    msg.setTimeStamp(0.7132326998277565);
    msg.setSource(688U);
    msg.setSourceEntity(239U);
    msg.setDestination(60974U);
    msg.setDestinationEntity(205U);
    msg.id = 11U;
    msg.value = 0.40672051560624134;

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
    msg.setTimeStamp(0.480203049453668);
    msg.setSource(54534U);
    msg.setSourceEntity(58U);
    msg.setDestination(3383U);
    msg.setDestinationEntity(200U);
    msg.id = 32U;
    msg.value = 0.7178882151945841;

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
    msg.setTimeStamp(0.6195593395230252);
    msg.setSource(40777U);
    msg.setSourceEntity(10U);
    msg.setDestination(44092U);
    msg.setDestinationEntity(242U);
    msg.x = 0.28256563337498586;
    msg.y = 0.9938298778599283;
    msg.z = 0.34399973215678503;
    msg.phi = 0.4733725129972177;
    msg.theta = 0.3213582649716591;
    msg.psi = 0.7733956357000976;

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
    msg.setTimeStamp(0.7117652371805184);
    msg.setSource(54956U);
    msg.setSourceEntity(136U);
    msg.setDestination(32589U);
    msg.setDestinationEntity(227U);
    msg.x = 0.5198412823582164;
    msg.y = 0.7225787946436203;
    msg.z = 0.7506060950667575;
    msg.phi = 0.6799165114166397;
    msg.theta = 0.29293511606846157;
    msg.psi = 0.20723239885264044;

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
    msg.setTimeStamp(0.37117795992905744);
    msg.setSource(52465U);
    msg.setSourceEntity(75U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(150U);
    msg.x = 0.6268185182430625;
    msg.y = 0.05545885288722374;
    msg.z = 0.8403940690645396;
    msg.phi = 0.8746208257274524;
    msg.theta = 0.7823906423370435;
    msg.psi = 0.6121776838639618;

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
    msg.setTimeStamp(0.9931756526613782);
    msg.setSource(35993U);
    msg.setSourceEntity(37U);
    msg.setDestination(622U);
    msg.setDestinationEntity(127U);
    msg.beam_width = 0.47510742268928574;
    msg.beam_height = 0.655006982961081;

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
    msg.setTimeStamp(0.49061442836009905);
    msg.setSource(18432U);
    msg.setSourceEntity(22U);
    msg.setDestination(18776U);
    msg.setDestinationEntity(113U);
    msg.beam_width = 0.022294130432475745;
    msg.beam_height = 0.28424836497052;

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
    msg.setTimeStamp(0.6271448350505151);
    msg.setSource(35241U);
    msg.setSourceEntity(34U);
    msg.setDestination(42949U);
    msg.setDestinationEntity(188U);
    msg.beam_width = 0.3505356879763306;
    msg.beam_height = 0.640995275896418;

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
    msg.setTimeStamp(0.31202576325643894);
    msg.setSource(46526U);
    msg.setSourceEntity(33U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(158U);
    msg.sane = 58U;

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
    msg.setTimeStamp(0.21878307955737897);
    msg.setSource(39723U);
    msg.setSourceEntity(61U);
    msg.setDestination(7279U);
    msg.setDestinationEntity(195U);
    msg.sane = 21U;

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
    msg.setTimeStamp(0.6887185360901656);
    msg.setSource(46230U);
    msg.setSourceEntity(205U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(130U);
    msg.sane = 136U;

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
    msg.setTimeStamp(0.1609297420824085);
    msg.setSource(28622U);
    msg.setSourceEntity(206U);
    msg.setDestination(24386U);
    msg.setDestinationEntity(119U);
    msg.value = 0.7763914130417463;

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
    msg.setTimeStamp(0.23737324502335633);
    msg.setSource(63603U);
    msg.setSourceEntity(164U);
    msg.setDestination(40384U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8218981695178375;

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
    msg.setTimeStamp(0.7259477289644058);
    msg.setSource(2470U);
    msg.setSourceEntity(225U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(42U);
    msg.value = 0.07791080838451803;

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
    msg.setTimeStamp(0.8039798994363342);
    msg.setSource(44605U);
    msg.setSourceEntity(83U);
    msg.setDestination(21010U);
    msg.setDestinationEntity(94U);
    msg.value = 0.07024074636205024;

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
    msg.setTimeStamp(0.23078353363773108);
    msg.setSource(23806U);
    msg.setSourceEntity(178U);
    msg.setDestination(51274U);
    msg.setDestinationEntity(220U);
    msg.value = 0.30611351150147814;

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
    msg.setTimeStamp(0.16702500597705883);
    msg.setSource(17162U);
    msg.setSourceEntity(195U);
    msg.setDestination(2620U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8808399728035676;

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
    msg.setTimeStamp(0.3415787269011976);
    msg.setSource(45136U);
    msg.setSourceEntity(102U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9441974954298268;

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
    msg.setTimeStamp(0.9549644267650285);
    msg.setSource(57404U);
    msg.setSourceEntity(150U);
    msg.setDestination(9835U);
    msg.setDestinationEntity(1U);
    msg.value = 0.07947073634597024;

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
    msg.setTimeStamp(0.9841757381883917);
    msg.setSource(53973U);
    msg.setSourceEntity(110U);
    msg.setDestination(63114U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9808441805235955;

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
    msg.setTimeStamp(0.34053223085433615);
    msg.setSource(6667U);
    msg.setSourceEntity(144U);
    msg.setDestination(32708U);
    msg.setDestinationEntity(199U);
    msg.value = 0.7902761582236405;

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
    msg.setTimeStamp(0.49443301629624925);
    msg.setSource(45311U);
    msg.setSourceEntity(144U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(123U);
    msg.value = 0.11976022041024492;

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
    msg.setTimeStamp(0.39297139824291594);
    msg.setSource(51883U);
    msg.setSourceEntity(205U);
    msg.setDestination(22296U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5141681564590768;

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
    msg.setTimeStamp(0.9372912053981807);
    msg.setSource(43229U);
    msg.setSourceEntity(131U);
    msg.setDestination(42830U);
    msg.setDestinationEntity(109U);
    msg.id = 204U;
    msg.zoom = 224U;
    msg.action = 41U;

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
    msg.setTimeStamp(0.7113805232525807);
    msg.setSource(6873U);
    msg.setSourceEntity(245U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(163U);
    msg.id = 252U;
    msg.zoom = 224U;
    msg.action = 58U;

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
    msg.setTimeStamp(0.8914227747852838);
    msg.setSource(64632U);
    msg.setSourceEntity(69U);
    msg.setDestination(27956U);
    msg.setDestinationEntity(173U);
    msg.id = 176U;
    msg.zoom = 125U;
    msg.action = 236U;

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
    msg.setTimeStamp(0.46038045524076165);
    msg.setSource(39427U);
    msg.setSourceEntity(187U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(58U);
    msg.id = 4U;
    msg.value = 0.02098557329718842;

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
    msg.setTimeStamp(0.30244428390011635);
    msg.setSource(4416U);
    msg.setSourceEntity(158U);
    msg.setDestination(51629U);
    msg.setDestinationEntity(75U);
    msg.id = 117U;
    msg.value = 0.48585990113717314;

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
    msg.setTimeStamp(0.9525906880291639);
    msg.setSource(57697U);
    msg.setSourceEntity(241U);
    msg.setDestination(32154U);
    msg.setDestinationEntity(228U);
    msg.id = 150U;
    msg.value = 0.3183042876888629;

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
    msg.setTimeStamp(0.007685166436825153);
    msg.setSource(54804U);
    msg.setSourceEntity(233U);
    msg.setDestination(60207U);
    msg.setDestinationEntity(144U);
    msg.id = 232U;
    msg.value = 0.5234684060187548;

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
    msg.setTimeStamp(0.4428919009786445);
    msg.setSource(38505U);
    msg.setSourceEntity(6U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(205U);
    msg.id = 130U;
    msg.value = 0.15217120887269608;

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
    msg.setTimeStamp(0.1780847280252552);
    msg.setSource(12223U);
    msg.setSourceEntity(77U);
    msg.setDestination(5495U);
    msg.setDestinationEntity(114U);
    msg.id = 126U;
    msg.value = 0.9276109465393567;

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
    msg.setTimeStamp(0.9707834355205457);
    msg.setSource(45566U);
    msg.setSourceEntity(215U);
    msg.setDestination(42349U);
    msg.setDestinationEntity(126U);
    msg.id = 227U;
    msg.angle = 0.20668422889795135;

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
    msg.setTimeStamp(0.7052724677881527);
    msg.setSource(65350U);
    msg.setSourceEntity(198U);
    msg.setDestination(28522U);
    msg.setDestinationEntity(238U);
    msg.id = 114U;
    msg.angle = 0.17033078932219659;

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
    msg.setTimeStamp(0.3143500236472522);
    msg.setSource(54857U);
    msg.setSourceEntity(250U);
    msg.setDestination(37236U);
    msg.setDestinationEntity(153U);
    msg.id = 200U;
    msg.angle = 0.055713827261316684;

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
    msg.setTimeStamp(0.12662581791151217);
    msg.setSource(14570U);
    msg.setSourceEntity(17U);
    msg.setDestination(42305U);
    msg.setDestinationEntity(211U);
    msg.op = 250U;
    msg.actions.assign("TCGAUNSQUJYJEIKCXJPIRMLZVYQEPEUKGRQFFAORXDXFIVSLELPCGUNXPSPHDPMUHMTFLHDTJVKXAIDBRVNKKHHZKRQKAYKQASWVDLHYYGAXSWZVNIJMYGTMESNTXKXXGQZIZFSRYFCFWHQTWHJIBPCMGRCIURBPMCZVNWZOBLLYUJTMNZLCQAZOBTVBBGBWDRISMYNTVWGEAQFPUJYO");

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
    msg.setTimeStamp(0.3728178746498648);
    msg.setSource(64062U);
    msg.setSourceEntity(81U);
    msg.setDestination(4732U);
    msg.setDestinationEntity(31U);
    msg.op = 180U;
    msg.actions.assign("WVHWWELJXYMZBURPKRPFAYRURFFIRCBLIJXPDBYEGZKRZGREAJECOXYBFFFGDCX");

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
    msg.setTimeStamp(0.9109927338114993);
    msg.setSource(61969U);
    msg.setSourceEntity(62U);
    msg.setDestination(4039U);
    msg.setDestinationEntity(28U);
    msg.op = 235U;
    msg.actions.assign("RZOBNQTHOIEXHLVQCQALVFZPZMCGTGVYVXUFIOXGUYRGRXBRTRWSPAKCRVKVOOELKKNJLLUBEHDPFNHNTCSFPMQPWHUWHTI");

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
    msg.setTimeStamp(0.26443456491649675);
    msg.setSource(40928U);
    msg.setSourceEntity(40U);
    msg.setDestination(33094U);
    msg.setDestinationEntity(223U);
    msg.actions.assign("JBDJSIZWAKQFWPDIZLJLWAUTLHCZOGQTYRVUXXIVOYIMIPYHRXHCYBABZXSEZQKTIPAKPZLZGCCOROHSQJRQVQLLUVWQPAUGUBSHTBMMCNZFJRUYFXAEKIKCG");

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
    msg.setTimeStamp(0.14438408873483966);
    msg.setSource(24395U);
    msg.setSourceEntity(234U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(203U);
    msg.actions.assign("FBLQOSDUPVCEZSTSPLLJCZUTCWVEYCYRSMAJGADHUNIBZQDNWTJMWEZHWLVMVGJRNTPBNGIHTDXYKQIBZQZXGHCWXRRGNYK");

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
    msg.setTimeStamp(0.7345078494228963);
    msg.setSource(51916U);
    msg.setSourceEntity(244U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(87U);
    msg.actions.assign("UAVXWAXUNMUCSZXPFEUVDRJZLKYHWLBMHDVYCUZIIRAGTOMFHGLAEWONYUQBOYCAWTSZMDNYIUJ");

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
    msg.setTimeStamp(0.5655153693173336);
    msg.setSource(502U);
    msg.setSourceEntity(68U);
    msg.setDestination(37083U);
    msg.setDestinationEntity(0U);
    msg.button = 154U;
    msg.value = 22U;

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
    msg.setTimeStamp(0.5814050192049129);
    msg.setSource(40276U);
    msg.setSourceEntity(145U);
    msg.setDestination(37U);
    msg.setDestinationEntity(188U);
    msg.button = 120U;
    msg.value = 239U;

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
    msg.setTimeStamp(0.9097179637571906);
    msg.setSource(15552U);
    msg.setSourceEntity(67U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(99U);
    msg.button = 84U;
    msg.value = 133U;

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
    msg.setTimeStamp(0.3240854727423187);
    msg.setSource(56012U);
    msg.setSourceEntity(128U);
    msg.setDestination(49859U);
    msg.setDestinationEntity(38U);
    msg.op = 116U;
    msg.text.assign("LEFPYCERLHWSBBPVVXAXMBUYXPNIOIPWVDJQEGUZHGUZRLDBAOMGDYQXKBLVLWOFZPTYRVDKLXLFKRDCZZYIFMBCAEULBMIXOOSIJCAEYJFQMDEVLZHAFVDPTQNUFMYSRXKBMYTWCHGJZSSVOWAUHQJHKFCJHACRDYAWFMUSRQGWJNZOKIWJFIOKMUPNVNAGBHKTGEIGCYSXRDBQRHWLNKXSWINXSJ");

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
    msg.setTimeStamp(0.6450807331710402);
    msg.setSource(26839U);
    msg.setSourceEntity(80U);
    msg.setDestination(40687U);
    msg.setDestinationEntity(7U);
    msg.op = 222U;
    msg.text.assign("NUTEDTYLTKEXIOHCSQWKNZHACFJMPGTZQYPNAWHERWGBDUJUCQWXCOIPMIBSRUERDRAOKKEHHGJQFSGRXMDQPCRFIZFALWVXYFLLFFVXBSIDPXVYTZJHYWKDKKSEAVHCADNCYQGCMYFCBTWLWUAWSUJKNQYOMVXPBVSFZVBJAISGREKQQZVTPZOFRUPHCMDTJVNLOBGNYXGLJVIZMJQAYZODEAHMOOLTU");

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
    msg.setTimeStamp(0.6962870730924218);
    msg.setSource(6997U);
    msg.setSourceEntity(7U);
    msg.setDestination(46305U);
    msg.setDestinationEntity(107U);
    msg.op = 157U;
    msg.text.assign("UPSODPIWDYXFOIBVVUKLGHMVEQHATSFFEJIZZYJQAUOXLNEKJMBKNONPOVGRIWQIZPCH");

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
    msg.setTimeStamp(0.5760878627208186);
    msg.setSource(2504U);
    msg.setSourceEntity(33U);
    msg.setDestination(27985U);
    msg.setDestinationEntity(211U);
    msg.op = 212U;
    msg.time_remain = 0.4193639387916177;
    msg.sched_time = 0.8826222601978694;

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
    msg.setTimeStamp(0.7711338928419623);
    msg.setSource(54756U);
    msg.setSourceEntity(228U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(31U);
    msg.op = 149U;
    msg.time_remain = 0.5865552137711143;
    msg.sched_time = 0.9732473169812536;

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
    msg.setTimeStamp(0.8286288886040568);
    msg.setSource(9915U);
    msg.setSourceEntity(88U);
    msg.setDestination(54776U);
    msg.setDestinationEntity(12U);
    msg.op = 162U;
    msg.time_remain = 0.733559881295786;
    msg.sched_time = 0.9353373878471756;

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
    msg.setTimeStamp(0.31455061150483876);
    msg.setSource(61826U);
    msg.setSourceEntity(59U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(251U);
    msg.name.assign("HSIRCNAXOKKVEYRZHUZZVAKBUPKRNOKTGBSYSQRKBERQMOPYFNEFEKAPJFJVYIMHBMOELJPHTCDWQRQACFKYJDCUSDVOIWNKZEYN");
    msg.op = 126U;
    msg.sched_time = 0.9498929135351333;

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
    msg.setTimeStamp(0.41955577839912506);
    msg.setSource(15905U);
    msg.setSourceEntity(224U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(254U);
    msg.name.assign("SDNDNULXGNJAZVITHTNZRBNHFBCVYZEDYGAIOQMXRXVRIPRJLSJDSQKCVIZGUTZJCMCPWBUKDFAVRJEYFBUAWYYVLXOSTHFBEQHBUZFKAGDHHEFNCSANEWLCROGDBEWQOWXWQOVPPDVQKYPXQTIKMYUVLSLWIGEPBLRXMTLMISWMTDHJHYZCKJFXKMFTJGRMKEJYRANGCMPYHBORDUNU");
    msg.op = 121U;
    msg.sched_time = 0.2988590728891334;

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
    msg.setTimeStamp(0.07881360326550213);
    msg.setSource(20604U);
    msg.setSourceEntity(122U);
    msg.setDestination(54616U);
    msg.setDestinationEntity(193U);
    msg.name.assign("RCNTALMCPIWPNSEWDHLKQMAGTWYZMEOPWBVGKFZOCDBFZFQAKVVOIVIVHGXOIJLLUFTDWOKT");
    msg.op = 214U;
    msg.sched_time = 0.9839579516952077;

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
    msg.setTimeStamp(0.7101833884094727);
    msg.setSource(63108U);
    msg.setSourceEntity(54U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.07796417575809433);
    msg.setSource(48294U);
    msg.setSourceEntity(78U);
    msg.setDestination(46132U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.07092028433622577);
    msg.setSource(60713U);
    msg.setSourceEntity(247U);
    msg.setDestination(39830U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.515791605301868);
    msg.setSource(47274U);
    msg.setSourceEntity(138U);
    msg.setDestination(27592U);
    msg.setDestinationEntity(153U);
    msg.name.assign("RKUUPRDNGULMXOSDFFHMVALCDWGJIDDNGBBESYFMBURDTECBMKHJQQDZWCSYRSYCZGFPVFMQTYEIWPHZZKKLTQULEEWTWUJYUNZMVAVCCRHBZSAEYTLOMPVKQREJPTWPIAULHNQHTVIGXISGIKVRFPCPVQOXKSCNCAFQNIBBWOXAGVQ");
    msg.state = 68U;

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
    msg.setTimeStamp(0.8590821175110126);
    msg.setSource(55353U);
    msg.setSourceEntity(62U);
    msg.setDestination(40938U);
    msg.setDestinationEntity(146U);
    msg.name.assign("NVHKGERTVJ");
    msg.state = 63U;

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
    msg.setTimeStamp(0.5672744493395999);
    msg.setSource(49164U);
    msg.setSourceEntity(127U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(215U);
    msg.name.assign("FBWLXFGIOMDNCBYFPKUTDJNWJHYLFARNAKJCQSRCBLMNEJYOLJQEJMMA");
    msg.state = 204U;

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
    msg.setTimeStamp(0.31786213807222563);
    msg.setSource(44761U);
    msg.setSourceEntity(239U);
    msg.setDestination(4079U);
    msg.setDestinationEntity(186U);
    msg.name.assign("TIAUVFNSVQEVGEYPTSOPBSWIOZBRYRRCOHETUQJZKDNYTDGFXNKDDNFBMLMCJYCRMGXRWKYWGYYFJESIAXNHGQHFAPWMDTVQIWQZWUJIJDFMZKCNUOKVXLFLKISGULVNFGCXJEQIKBZESLYHRZXTMHSWIPIVAVHKEAZTHNBCRAFKTLLQDABEHDGAQGZSBHDUONJJZODLKCESXSORMBUXBVFPWBHMXGUYMPZQIJETCU");
    msg.value = 61U;

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
    msg.setTimeStamp(0.06092117224377469);
    msg.setSource(7861U);
    msg.setSourceEntity(210U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(117U);
    msg.name.assign("DHWOGNNTRMWYVEWLMBOHTFBBLFRZNTSHUSHHQCIJKXQBFXXMBEAYGJCCZFXUXRGABDY");
    msg.value = 248U;

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
    msg.setTimeStamp(0.07149014360767836);
    msg.setSource(40679U);
    msg.setSourceEntity(54U);
    msg.setDestination(13566U);
    msg.setDestinationEntity(104U);
    msg.name.assign("RNCJAIWFCWVHBQAKUDURWRIOTQLNODNGZYIMHYAMHUNRWXNPVIQYFOOXKSICHFLJRWTFHGPHMIETHMGEDJBUDSMEJENNXWGRXTYBTVKKDVOLIZUYPOGEECSYNWRWXPQUYEDHPCQJXSXUFVWSWFSVLBOPKAVJEPEJFNTCABMSKBJSOUKAODRYZHTMCRNFTDTSFZEDZLVQXJGIGHRCKBAQVUAZTQ");
    msg.value = 103U;

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
    msg.setTimeStamp(0.3609829766213699);
    msg.setSource(56206U);
    msg.setSourceEntity(233U);
    msg.setDestination(9857U);
    msg.setDestinationEntity(22U);
    msg.name.assign("TMNZBRPKZYTKNXKLQCFIWENXPERGAITJADPBYCMXRMKEGUUCUCPFQOMLXNJNIXFGFAZOPLZYSWISVMPTUYCPDKVITGDLFELSKJPGRFYSYVIAMLTQDJHHLUYEABNTBYDQBFATMQWHUHZR");

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
    msg.setTimeStamp(0.7520348305784166);
    msg.setSource(50794U);
    msg.setSourceEntity(1U);
    msg.setDestination(4443U);
    msg.setDestinationEntity(226U);
    msg.name.assign("MLWFNXIFIGDAFFBYWSDAMVFJBLPEFMWUPOHIQYJDZRRAUDINCRCRZPIRXURNSZPOVOTDTVCNTSVLZPSKUQYGHMLGRXXLPBVYYALKBKITJKMZBCNGZEIQHLEJXMTKRBOLWMYQVJUOHSIUWATANWMJXYHI");

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
    msg.setTimeStamp(0.27553651649586164);
    msg.setSource(60577U);
    msg.setSourceEntity(56U);
    msg.setDestination(42148U);
    msg.setDestinationEntity(102U);
    msg.name.assign("WFAWYSSNQVXZEVSLAHWVCAMKGLRBOUIABQBOQTZYDYUQPKDUTICXOBUBTRIWVSGYCHLBVANYWJCLRQQOZBKPXZUCMALOIXDJGTBZEIXLEOERQGCOJNPNLSXMWDLTAHUFSWUOQZPFYRLJPJFGGJVGFVUSAVNMPOETGDE");

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
    msg.setTimeStamp(0.9578006270166806);
    msg.setSource(6674U);
    msg.setSourceEntity(69U);
    msg.setDestination(36150U);
    msg.setDestinationEntity(114U);
    msg.name.assign("UCKYSCXKWOTIWDNFFJNCTVVKERZHRDMNLORDUSTDOBMNOZWYULPJTEZJ");
    msg.value = 144U;

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
    msg.setTimeStamp(0.14589991704632144);
    msg.setSource(47488U);
    msg.setSourceEntity(10U);
    msg.setDestination(21U);
    msg.setDestinationEntity(199U);
    msg.name.assign("CMXKLFCZWDVIQPQEAIILAJEWBMYQKLREYLZOKSPRBJGPCKSIYKZUYOYTHTDAMNJPASTYFSYFHGQWCWCOGADLRFKBZVBBAWNIWNUDJLOBOZMUWUL");
    msg.value = 215U;

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
    msg.setTimeStamp(0.9691347401491587);
    msg.setSource(55544U);
    msg.setSourceEntity(44U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(175U);
    msg.name.assign("KXBWGTFZVPSWYMGPURMDHIASIXMOYUQEGFMCTYZZIDQFLOLTPGRMCURQJOEHXKAWQNFWGORHAJFPHBAYNQEODPRLCBKFBTMHKIACXLCHNBFVERAPSXLVENUSHQGUENILBPAMWEFDADCGOAUHSDVSWVXKMQZNGPPQSUSZDCKZAUIQLVKOWTJTJJJOBBVFRXQGHHVLKLJYIMYPXKYWNCUEXTJCKVITZJJF");
    msg.value = 9U;

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
    msg.setTimeStamp(0.613385277818004);
    msg.setSource(23184U);
    msg.setSourceEntity(78U);
    msg.setDestination(9969U);
    msg.setDestinationEntity(164U);
    msg.id = 63U;
    msg.period = 2724984153U;
    msg.duty_cycle = 2055560646U;

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
    msg.setTimeStamp(0.9135250865247544);
    msg.setSource(49215U);
    msg.setSourceEntity(247U);
    msg.setDestination(10320U);
    msg.setDestinationEntity(127U);
    msg.id = 191U;
    msg.period = 2998230856U;
    msg.duty_cycle = 2458444869U;

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
    msg.setTimeStamp(0.24003921887923285);
    msg.setSource(14310U);
    msg.setSourceEntity(226U);
    msg.setDestination(16310U);
    msg.setDestinationEntity(236U);
    msg.id = 152U;
    msg.period = 3613522275U;
    msg.duty_cycle = 2063019007U;

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
    msg.setTimeStamp(0.2636094319461698);
    msg.setSource(39733U);
    msg.setSourceEntity(140U);
    msg.setDestination(59721U);
    msg.setDestinationEntity(29U);
    msg.id = 212U;
    msg.period = 334469158U;
    msg.duty_cycle = 2713348930U;

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
    msg.setTimeStamp(0.267366045469691);
    msg.setSource(43388U);
    msg.setSourceEntity(146U);
    msg.setDestination(23120U);
    msg.setDestinationEntity(16U);
    msg.id = 244U;
    msg.period = 3216126006U;
    msg.duty_cycle = 1198900394U;

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
    msg.setTimeStamp(0.025288251347547086);
    msg.setSource(48770U);
    msg.setSourceEntity(113U);
    msg.setDestination(45244U);
    msg.setDestinationEntity(38U);
    msg.id = 118U;
    msg.period = 2318980390U;
    msg.duty_cycle = 3747854634U;

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
    msg.setTimeStamp(0.07356341689314927);
    msg.setSource(45817U);
    msg.setSourceEntity(77U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.7616552420041836;
    msg.lon = 0.9661903480639715;
    msg.height = 0.48469541165625407;
    msg.x = 0.2409308322014262;
    msg.y = 0.30492206158871027;
    msg.z = 0.5855521109354868;
    msg.phi = 0.8809334534282833;
    msg.theta = 0.8375612586059737;
    msg.psi = 0.8710310630714319;
    msg.u = 0.6590343802869093;
    msg.v = 0.30976646229753224;
    msg.w = 0.7696692147012981;
    msg.vx = 0.9489415814796777;
    msg.vy = 0.27686563994032765;
    msg.vz = 0.08367144962277417;
    msg.p = 0.9874481923725633;
    msg.q = 0.9155571449452784;
    msg.r = 0.2466620132202968;
    msg.depth = 0.28491476487502154;
    msg.alt = 0.7725159195330931;

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
    msg.setTimeStamp(0.19111886076742146);
    msg.setSource(64078U);
    msg.setSourceEntity(82U);
    msg.setDestination(23061U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.6904771718889754;
    msg.lon = 0.20169629112057208;
    msg.height = 0.3560999435697846;
    msg.x = 0.09199260165104917;
    msg.y = 0.03473747393717774;
    msg.z = 0.9875461278178738;
    msg.phi = 0.6811074198875271;
    msg.theta = 0.8597999579620619;
    msg.psi = 0.6926311183585193;
    msg.u = 0.6238127853415021;
    msg.v = 0.6989635624799266;
    msg.w = 0.819674079463223;
    msg.vx = 0.5860141136673284;
    msg.vy = 0.6629970271732154;
    msg.vz = 0.040390596899300135;
    msg.p = 0.43289717459819577;
    msg.q = 0.12221844038001173;
    msg.r = 0.5716824300628631;
    msg.depth = 0.2332061791776372;
    msg.alt = 0.7999204219406022;

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
    msg.setTimeStamp(0.8684981134474066);
    msg.setSource(8752U);
    msg.setSourceEntity(113U);
    msg.setDestination(23681U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.744568809785091;
    msg.lon = 0.44575284172606944;
    msg.height = 0.2456512446552841;
    msg.x = 0.8329362331719593;
    msg.y = 0.2144352186739812;
    msg.z = 0.5594307273745796;
    msg.phi = 0.153999239142116;
    msg.theta = 0.5061112621742913;
    msg.psi = 0.9781052032033581;
    msg.u = 0.3433093556576552;
    msg.v = 0.41609295615617325;
    msg.w = 0.6978994465806813;
    msg.vx = 0.8731185879818494;
    msg.vy = 0.9013933651726551;
    msg.vz = 0.05818510283958911;
    msg.p = 0.25565217735646606;
    msg.q = 0.07317887210940899;
    msg.r = 0.7923419778115454;
    msg.depth = 0.3413669958739628;
    msg.alt = 0.42816465988593433;

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
    msg.setTimeStamp(0.40821818190729164);
    msg.setSource(25626U);
    msg.setSourceEntity(171U);
    msg.setDestination(59071U);
    msg.setDestinationEntity(43U);
    msg.x = 0.34138303320109575;
    msg.y = 0.7495211657601932;
    msg.z = 0.3210894299020911;

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
    msg.setTimeStamp(0.2382655297806815);
    msg.setSource(46399U);
    msg.setSourceEntity(13U);
    msg.setDestination(29163U);
    msg.setDestinationEntity(125U);
    msg.x = 0.7064680800620822;
    msg.y = 0.8497945245053307;
    msg.z = 0.33708844577686825;

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
    msg.setTimeStamp(0.2749665397314637);
    msg.setSource(55767U);
    msg.setSourceEntity(233U);
    msg.setDestination(33748U);
    msg.setDestinationEntity(110U);
    msg.x = 0.38032323064328066;
    msg.y = 0.4221093865555522;
    msg.z = 0.7348388249461788;

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
    msg.setTimeStamp(0.8909353772584697);
    msg.setSource(46721U);
    msg.setSourceEntity(7U);
    msg.setDestination(60297U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9043790188260906;

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
    msg.setTimeStamp(0.24376183530278628);
    msg.setSource(58771U);
    msg.setSourceEntity(58U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(138U);
    msg.value = 0.09991626409392373;

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
    msg.setTimeStamp(0.6672479000018499);
    msg.setSource(46288U);
    msg.setSourceEntity(20U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8973616675495931;

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
    msg.setTimeStamp(0.3915828053378967);
    msg.setSource(25673U);
    msg.setSourceEntity(94U);
    msg.setDestination(55961U);
    msg.setDestinationEntity(38U);
    msg.value = 0.037214772263320595;

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
    msg.setTimeStamp(0.6794114784229925);
    msg.setSource(26403U);
    msg.setSourceEntity(121U);
    msg.setDestination(48799U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6527459539149418;

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
    msg.setTimeStamp(0.012263660699870615);
    msg.setSource(4718U);
    msg.setSourceEntity(172U);
    msg.setDestination(59742U);
    msg.setDestinationEntity(69U);
    msg.value = 0.583181312567168;

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
    msg.setTimeStamp(0.6725143215813424);
    msg.setSource(5166U);
    msg.setSourceEntity(199U);
    msg.setDestination(26723U);
    msg.setDestinationEntity(88U);
    msg.x = 0.9091015084159023;
    msg.y = 0.29455373733420964;
    msg.z = 0.23486221683040487;
    msg.phi = 0.9570762722704771;
    msg.theta = 0.5304406038111846;
    msg.psi = 0.29705228440538234;
    msg.p = 0.9653689103774218;
    msg.q = 0.24015526142815447;
    msg.r = 0.07073248501857166;
    msg.u = 0.5291611799346427;
    msg.v = 0.668234733733846;
    msg.w = 0.2342168261535168;
    msg.bias_psi = 0.4825971059070141;
    msg.bias_r = 0.2706377167167602;

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
    msg.setTimeStamp(0.9615908033128805);
    msg.setSource(35169U);
    msg.setSourceEntity(85U);
    msg.setDestination(14045U);
    msg.setDestinationEntity(69U);
    msg.x = 0.27577337547033365;
    msg.y = 0.9072518427564709;
    msg.z = 0.10341162591345243;
    msg.phi = 0.8804957283569569;
    msg.theta = 0.3273165939744982;
    msg.psi = 0.399387640739561;
    msg.p = 0.39603660275409636;
    msg.q = 0.25354157556626233;
    msg.r = 0.4736428817206433;
    msg.u = 0.10650368171098756;
    msg.v = 0.13308578466929022;
    msg.w = 0.7651171678743957;
    msg.bias_psi = 0.3647378617591478;
    msg.bias_r = 0.10993874993037667;

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
    msg.setTimeStamp(0.28397762574031826);
    msg.setSource(7175U);
    msg.setSourceEntity(127U);
    msg.setDestination(44203U);
    msg.setDestinationEntity(125U);
    msg.x = 0.8743520395760666;
    msg.y = 0.5438834277799741;
    msg.z = 0.9437319237837835;
    msg.phi = 0.1115263714372593;
    msg.theta = 0.2730078639776994;
    msg.psi = 0.5613252374187307;
    msg.p = 0.2628950051814901;
    msg.q = 0.4013941087663121;
    msg.r = 0.5459561764277698;
    msg.u = 0.16107062931664717;
    msg.v = 0.7995479845495228;
    msg.w = 0.351453491547861;
    msg.bias_psi = 0.44743562224855193;
    msg.bias_r = 0.03708017812440434;

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
    msg.setTimeStamp(0.32478194199076826);
    msg.setSource(4886U);
    msg.setSourceEntity(120U);
    msg.setDestination(32811U);
    msg.setDestinationEntity(53U);
    msg.bias_psi = 0.3195747687341587;
    msg.bias_r = 0.009683612945703302;
    msg.cog = 0.24223747274491758;
    msg.cyaw = 0.9186664166178965;
    msg.lbl_rej_level = 0.9494772291250525;
    msg.gps_rej_level = 0.343276490746829;
    msg.custom_x = 0.6940303942500401;
    msg.custom_y = 0.4221180359027753;
    msg.custom_z = 0.02351295210745441;

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
    msg.setTimeStamp(0.6039627995840978);
    msg.setSource(62929U);
    msg.setSourceEntity(223U);
    msg.setDestination(36126U);
    msg.setDestinationEntity(4U);
    msg.bias_psi = 0.5892863793636958;
    msg.bias_r = 0.19857602150568188;
    msg.cog = 0.03977829478093653;
    msg.cyaw = 0.021692129599497956;
    msg.lbl_rej_level = 0.9622524612778244;
    msg.gps_rej_level = 0.22296088111639012;
    msg.custom_x = 0.5869211912965624;
    msg.custom_y = 0.9041721910733511;
    msg.custom_z = 0.1246276822287864;

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
    msg.setTimeStamp(0.9565595217784655);
    msg.setSource(38492U);
    msg.setSourceEntity(184U);
    msg.setDestination(28310U);
    msg.setDestinationEntity(39U);
    msg.bias_psi = 0.7282897342701463;
    msg.bias_r = 0.0899473675242417;
    msg.cog = 0.014337205328091907;
    msg.cyaw = 0.6620993420890134;
    msg.lbl_rej_level = 0.4955360779337168;
    msg.gps_rej_level = 0.526551515785938;
    msg.custom_x = 0.4354799283519136;
    msg.custom_y = 0.9599015096820595;
    msg.custom_z = 0.2603874381339726;

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
    msg.setTimeStamp(0.24874835567259468);
    msg.setSource(25155U);
    msg.setSourceEntity(79U);
    msg.setDestination(49441U);
    msg.setDestinationEntity(41U);
    msg.utc_time = 0.2720296952305383;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.7544510225331768);
    msg.setSource(44976U);
    msg.setSourceEntity(28U);
    msg.setDestination(31797U);
    msg.setDestinationEntity(21U);
    msg.utc_time = 0.599005035224177;
    msg.reason = 230U;

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
    msg.setTimeStamp(0.03517088370661425);
    msg.setSource(63879U);
    msg.setSourceEntity(189U);
    msg.setDestination(37096U);
    msg.setDestinationEntity(102U);
    msg.utc_time = 0.5947413820053548;
    msg.reason = 112U;

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
    msg.setTimeStamp(0.43445172820895606);
    msg.setSource(45783U);
    msg.setSourceEntity(70U);
    msg.setDestination(55045U);
    msg.setDestinationEntity(11U);
    msg.id = 74U;
    msg.range = 0.08972755043042613;
    msg.acceptance = 221U;

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
    msg.setTimeStamp(0.11106650592542977);
    msg.setSource(57722U);
    msg.setSourceEntity(9U);
    msg.setDestination(1473U);
    msg.setDestinationEntity(175U);
    msg.id = 41U;
    msg.range = 0.611533004410397;
    msg.acceptance = 102U;

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
    msg.setTimeStamp(0.016161779225252526);
    msg.setSource(31120U);
    msg.setSourceEntity(221U);
    msg.setDestination(20935U);
    msg.setDestinationEntity(2U);
    msg.id = 25U;
    msg.range = 0.8064798374631234;
    msg.acceptance = 43U;

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
    msg.setTimeStamp(0.07046168674312492);
    msg.setSource(6289U);
    msg.setSourceEntity(115U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(37U);
    msg.type = 128U;
    msg.reason = 225U;
    msg.value = 0.34948554884296623;
    msg.timestep = 0.6469456712339829;

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
    msg.setTimeStamp(0.16303811874523344);
    msg.setSource(58914U);
    msg.setSourceEntity(241U);
    msg.setDestination(37805U);
    msg.setDestinationEntity(95U);
    msg.type = 189U;
    msg.reason = 39U;
    msg.value = 0.6150941706761812;
    msg.timestep = 0.56868038020981;

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
    msg.setTimeStamp(0.9848296210846256);
    msg.setSource(1475U);
    msg.setSourceEntity(200U);
    msg.setDestination(17876U);
    msg.setDestinationEntity(233U);
    msg.type = 43U;
    msg.reason = 101U;
    msg.value = 0.08182216858411895;
    msg.timestep = 0.02323763768281739;

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
    msg.setTimeStamp(0.3778558264667632);
    msg.setSource(24265U);
    msg.setSourceEntity(93U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(180U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PUXAMJMBXJYFGARDTWOYXOLZTGQEQPCCPZUITSNLWWTEDGEVYVZKWPDQKIFREVHTJFUGWGOQOGRBENGLZSGKHDFHSKFCVMBDVLOEQKNJKCVSPQUBEWLNQZPPRAFDKBWRJIVYYOZLFRXUBYHBYQNFOAJAIHBDWMJVZKHSDBZGBWRTLKFJEQLYHPXMUSZJC");
    tmp_msg_0.lat = 0.11573816790745228;
    tmp_msg_0.lon = 0.014483092703092226;
    tmp_msg_0.depth = 0.8631101030464783;
    tmp_msg_0.query_channel = 44U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 190U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6256908932727473;
    msg.y = 0.9411324567093361;
    msg.var_x = 0.6514446369831308;
    msg.var_y = 0.24832770119259273;
    msg.distance = 0.05716581186179093;

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
    msg.setTimeStamp(0.2850671096972812);
    msg.setSource(14287U);
    msg.setSourceEntity(104U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(61U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EXKHSYVXXJKDLHBWIGTORTO");
    tmp_msg_0.lat = 0.4931900001243622;
    tmp_msg_0.lon = 0.8045739566943552;
    tmp_msg_0.depth = 0.6007398524400522;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 16U;
    tmp_msg_0.transponder_delay = 179U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5803708843122592;
    msg.y = 0.6583854039523721;
    msg.var_x = 0.6239077187969301;
    msg.var_y = 0.5632476425531693;
    msg.distance = 0.7057099432431558;

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
    msg.setTimeStamp(0.7622252724967594);
    msg.setSource(55512U);
    msg.setSourceEntity(4U);
    msg.setDestination(19196U);
    msg.setDestinationEntity(209U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TAQZJNBEXQOQZENJSTLZLKDGTXFLOQBNZDBWXSEHRCRCJDRVYFPSZROWNRITKMQIYXDPPYWSHTACBGCLKNHFDFQRKCVOAOYYYJZXHXDVPIFJGHEIZ");
    tmp_msg_0.lat = 0.19350592449751114;
    tmp_msg_0.lon = 0.8896765683343916;
    tmp_msg_0.depth = 0.40201565156144337;
    tmp_msg_0.query_channel = 218U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 19U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.005835580193260137;
    msg.y = 0.9060842595306832;
    msg.var_x = 0.28837421144412956;
    msg.var_y = 0.7055549513155603;
    msg.distance = 0.0767132247756176;

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
    msg.setTimeStamp(0.1995475864672377);
    msg.setSource(17959U);
    msg.setSourceEntity(229U);
    msg.setDestination(26349U);
    msg.setDestinationEntity(232U);
    msg.state = 177U;

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
    msg.setTimeStamp(0.7628200106231456);
    msg.setSource(20175U);
    msg.setSourceEntity(87U);
    msg.setDestination(8513U);
    msg.setDestinationEntity(169U);
    msg.state = 26U;

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
    msg.setTimeStamp(0.17365238702981312);
    msg.setSource(3191U);
    msg.setSourceEntity(219U);
    msg.setDestination(31829U);
    msg.setDestinationEntity(244U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.49465208410394435);
    msg.setSource(25755U);
    msg.setSourceEntity(93U);
    msg.setDestination(63631U);
    msg.setDestinationEntity(109U);
    msg.x = 0.8928667904411758;
    msg.y = 0.0673270740675016;
    msg.z = 0.4763917554399758;

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
    msg.setTimeStamp(0.8546115421113852);
    msg.setSource(4864U);
    msg.setSourceEntity(107U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(152U);
    msg.x = 0.22096000639957825;
    msg.y = 0.06257349890968245;
    msg.z = 0.3531589525977181;

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
    msg.setTimeStamp(0.41281821005865704);
    msg.setSource(59519U);
    msg.setSourceEntity(225U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(94U);
    msg.x = 0.7048212520157726;
    msg.y = 0.7444266284100816;
    msg.z = 0.06361075153410822;

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
    msg.setTimeStamp(0.523512875977061);
    msg.setSource(54672U);
    msg.setSourceEntity(58U);
    msg.setDestination(30225U);
    msg.setDestinationEntity(248U);
    msg.value = 0.85731747918715;

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
    msg.setTimeStamp(0.3038962579394062);
    msg.setSource(23571U);
    msg.setSourceEntity(205U);
    msg.setDestination(4727U);
    msg.setDestinationEntity(29U);
    msg.value = 0.9353191273139378;

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
    msg.setTimeStamp(0.3751615433786275);
    msg.setSource(44519U);
    msg.setSourceEntity(171U);
    msg.setDestination(40396U);
    msg.setDestinationEntity(126U);
    msg.value = 0.402668023584125;

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
    msg.setTimeStamp(0.3386520078255081);
    msg.setSource(60078U);
    msg.setSourceEntity(201U);
    msg.setDestination(10968U);
    msg.setDestinationEntity(25U);
    msg.value = 0.7450994844981237;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.8266387164218819);
    msg.setSource(7343U);
    msg.setSourceEntity(173U);
    msg.setDestination(57163U);
    msg.setDestinationEntity(38U);
    msg.value = 0.2550703790068046;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.704244835348009);
    msg.setSource(61759U);
    msg.setSourceEntity(238U);
    msg.setDestination(11476U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9983078147981931;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.08173065007654057);
    msg.setSource(9267U);
    msg.setSourceEntity(145U);
    msg.setDestination(19444U);
    msg.setDestinationEntity(99U);
    msg.value = 0.20225072902668184;
    msg.speed_units = 235U;

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
    msg.setTimeStamp(0.6839643697665736);
    msg.setSource(35055U);
    msg.setSourceEntity(85U);
    msg.setDestination(17786U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9553538445524227;
    msg.speed_units = 21U;

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
    msg.setTimeStamp(0.6157773230257686);
    msg.setSource(59900U);
    msg.setSourceEntity(124U);
    msg.setDestination(50014U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8099393378986308;
    msg.speed_units = 94U;

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
    msg.setTimeStamp(0.2963763435004173);
    msg.setSource(14914U);
    msg.setSourceEntity(83U);
    msg.setDestination(8369U);
    msg.setDestinationEntity(254U);
    msg.value = 0.14462106331832425;

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
    msg.setTimeStamp(0.8080439397266105);
    msg.setSource(65451U);
    msg.setSourceEntity(123U);
    msg.setDestination(25535U);
    msg.setDestinationEntity(129U);
    msg.value = 0.360075972020488;

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
    msg.setTimeStamp(0.03023256967806154);
    msg.setSource(22084U);
    msg.setSourceEntity(239U);
    msg.setDestination(30712U);
    msg.setDestinationEntity(12U);
    msg.value = 0.31061023120003717;

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
    msg.setTimeStamp(0.9032321413564702);
    msg.setSource(41982U);
    msg.setSourceEntity(178U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(174U);
    msg.value = 0.5134966197701935;

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
    msg.setTimeStamp(0.8954986233836896);
    msg.setSource(14446U);
    msg.setSourceEntity(154U);
    msg.setDestination(44514U);
    msg.setDestinationEntity(50U);
    msg.value = 0.07646896354213262;

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
    msg.setTimeStamp(0.39549815197905247);
    msg.setSource(13806U);
    msg.setSourceEntity(14U);
    msg.setDestination(23104U);
    msg.setDestinationEntity(147U);
    msg.value = 0.6031269578298062;

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
    msg.setTimeStamp(0.45211956375796114);
    msg.setSource(16534U);
    msg.setSourceEntity(112U);
    msg.setDestination(24203U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8536976352525802;

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
    msg.setTimeStamp(0.9586620974530781);
    msg.setSource(2343U);
    msg.setSourceEntity(65U);
    msg.setDestination(42632U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5487161583040853;

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
    msg.setTimeStamp(0.34607849564051296);
    msg.setSource(20893U);
    msg.setSourceEntity(144U);
    msg.setDestination(14023U);
    msg.setDestinationEntity(167U);
    msg.value = 0.21701758364128443;

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
    msg.setTimeStamp(0.9831755804932767);
    msg.setSource(25504U);
    msg.setSourceEntity(82U);
    msg.setDestination(55857U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 2357107641U;
    msg.start_lat = 0.4241413919226664;
    msg.start_lon = 0.5454292710847324;
    msg.start_z = 0.46410258902065193;
    msg.start_z_units = 10U;
    msg.end_lat = 0.21737818608682136;
    msg.end_lon = 0.6874967919274934;
    msg.end_z = 0.5008766686208052;
    msg.end_z_units = 24U;
    msg.speed = 0.033861146397976216;
    msg.speed_units = 184U;
    msg.lradius = 0.6460686828515303;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.49027795162104304);
    msg.setSource(32031U);
    msg.setSourceEntity(37U);
    msg.setDestination(14519U);
    msg.setDestinationEntity(4U);
    msg.path_ref = 902722311U;
    msg.start_lat = 0.5871818223360724;
    msg.start_lon = 0.8738990337797329;
    msg.start_z = 0.20596502810979134;
    msg.start_z_units = 20U;
    msg.end_lat = 0.166723507784868;
    msg.end_lon = 0.30687152881775115;
    msg.end_z = 0.6045386883084004;
    msg.end_z_units = 54U;
    msg.speed = 0.18533525650840754;
    msg.speed_units = 104U;
    msg.lradius = 0.40216493432452205;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.8701277240242982);
    msg.setSource(19345U);
    msg.setSourceEntity(194U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(205U);
    msg.path_ref = 3911843726U;
    msg.start_lat = 0.5157910321601109;
    msg.start_lon = 0.5578955098902794;
    msg.start_z = 0.5693604489261223;
    msg.start_z_units = 9U;
    msg.end_lat = 0.38302823481784454;
    msg.end_lon = 0.29510365919336023;
    msg.end_z = 0.6662097297643939;
    msg.end_z_units = 28U;
    msg.speed = 0.8795287304667176;
    msg.speed_units = 118U;
    msg.lradius = 0.18652918587759226;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.43761337114151266);
    msg.setSource(19198U);
    msg.setSourceEntity(152U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(76U);
    msg.x = 0.36115449838018776;
    msg.y = 0.8008234690657273;
    msg.z = 0.6870112864846541;
    msg.k = 0.7044835364965307;
    msg.m = 0.7514652375876907;
    msg.n = 0.1220120819522501;
    msg.flags = 239U;

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
    msg.setTimeStamp(0.709924759129363);
    msg.setSource(34953U);
    msg.setSourceEntity(49U);
    msg.setDestination(41614U);
    msg.setDestinationEntity(27U);
    msg.x = 0.8979879930972192;
    msg.y = 0.0787821864401751;
    msg.z = 0.3133654343820268;
    msg.k = 0.026102428928565957;
    msg.m = 0.5399383284417737;
    msg.n = 0.41164712984803553;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.8301573927133223);
    msg.setSource(59718U);
    msg.setSourceEntity(147U);
    msg.setDestination(20509U);
    msg.setDestinationEntity(233U);
    msg.x = 0.832693167472004;
    msg.y = 0.12141039520532326;
    msg.z = 0.8691089618595016;
    msg.k = 0.05628094838487718;
    msg.m = 0.44440945192614534;
    msg.n = 0.15864041095822445;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.0776166792284455);
    msg.setSource(5022U);
    msg.setSourceEntity(0U);
    msg.setDestination(11200U);
    msg.setDestinationEntity(254U);
    msg.value = 0.027719800224647706;

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
    msg.setTimeStamp(0.8144429669972076);
    msg.setSource(57600U);
    msg.setSourceEntity(43U);
    msg.setDestination(44338U);
    msg.setDestinationEntity(148U);
    msg.value = 0.11334160482563493;

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
    msg.setTimeStamp(0.9309805535285782);
    msg.setSource(22127U);
    msg.setSourceEntity(35U);
    msg.setDestination(63397U);
    msg.setDestinationEntity(141U);
    msg.value = 0.43161057265078717;

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
    msg.setTimeStamp(0.5315713961493792);
    msg.setSource(32275U);
    msg.setSourceEntity(19U);
    msg.setDestination(9624U);
    msg.setDestinationEntity(109U);
    msg.u = 0.45666850832340866;
    msg.v = 0.2977066566885217;
    msg.w = 0.5048156553740605;
    msg.p = 0.6217296769963009;
    msg.q = 0.4771487757821349;
    msg.r = 0.8622201398753261;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.5683308552612564);
    msg.setSource(20579U);
    msg.setSourceEntity(145U);
    msg.setDestination(11184U);
    msg.setDestinationEntity(49U);
    msg.u = 0.7965377237293002;
    msg.v = 0.6332429211614473;
    msg.w = 0.3580956176993798;
    msg.p = 0.5262037205817862;
    msg.q = 0.3613792715377865;
    msg.r = 0.7243177894068304;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.00822700341125815);
    msg.setSource(26791U);
    msg.setSourceEntity(243U);
    msg.setDestination(10783U);
    msg.setDestinationEntity(179U);
    msg.u = 0.7761144140169871;
    msg.v = 0.906123666950941;
    msg.w = 0.06893581789487391;
    msg.p = 0.14229334275658168;
    msg.q = 0.45441371895600513;
    msg.r = 0.28588201841739025;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.9381632426801514);
    msg.setSource(64140U);
    msg.setSourceEntity(33U);
    msg.setDestination(15546U);
    msg.setDestinationEntity(188U);
    msg.path_ref = 2794644497U;
    msg.start_lat = 0.9932637312056247;
    msg.start_lon = 0.1665000388195177;
    msg.start_z = 0.8944222644414654;
    msg.start_z_units = 58U;
    msg.end_lat = 0.3058066193742479;
    msg.end_lon = 0.4589611523641204;
    msg.end_z = 0.27718963029378296;
    msg.end_z_units = 155U;
    msg.lradius = 0.27281291323156376;
    msg.flags = 220U;
    msg.x = 0.9992770240155534;
    msg.y = 0.8810063831845999;
    msg.z = 0.6515652679793331;
    msg.vx = 0.4795144039172483;
    msg.vy = 0.23953155668460258;
    msg.vz = 0.5266540737474218;
    msg.course_error = 0.003721907405864755;
    msg.eta = 12447U;

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
    msg.setTimeStamp(0.36727035040950384);
    msg.setSource(10946U);
    msg.setSourceEntity(100U);
    msg.setDestination(2102U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 1625728066U;
    msg.start_lat = 0.6328176164979239;
    msg.start_lon = 0.3732291812020184;
    msg.start_z = 0.3724547070369715;
    msg.start_z_units = 149U;
    msg.end_lat = 0.026676547976643872;
    msg.end_lon = 0.8808010009002013;
    msg.end_z = 0.06149162591128887;
    msg.end_z_units = 133U;
    msg.lradius = 0.8704678972228659;
    msg.flags = 178U;
    msg.x = 0.6761993393539273;
    msg.y = 0.16736786452722907;
    msg.z = 0.5290006221267342;
    msg.vx = 0.2819615451754266;
    msg.vy = 0.6310413109701195;
    msg.vz = 0.7975143600504122;
    msg.course_error = 0.841132684036701;
    msg.eta = 15240U;

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
    msg.setTimeStamp(0.5450418701308877);
    msg.setSource(22553U);
    msg.setSourceEntity(202U);
    msg.setDestination(47196U);
    msg.setDestinationEntity(234U);
    msg.path_ref = 2372795549U;
    msg.start_lat = 0.06829651364457767;
    msg.start_lon = 0.48467099073421827;
    msg.start_z = 0.5688349584348874;
    msg.start_z_units = 24U;
    msg.end_lat = 0.7973912675271744;
    msg.end_lon = 0.4123513129465035;
    msg.end_z = 0.09347918362628505;
    msg.end_z_units = 41U;
    msg.lradius = 0.8554998898959927;
    msg.flags = 79U;
    msg.x = 0.035277910948581126;
    msg.y = 0.27375579549771656;
    msg.z = 0.4583763155804529;
    msg.vx = 0.7405683225642629;
    msg.vy = 0.6509415052920883;
    msg.vz = 0.905928679543914;
    msg.course_error = 0.2827923311653947;
    msg.eta = 8585U;

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
    msg.setTimeStamp(0.24578003989300512);
    msg.setSource(56767U);
    msg.setSourceEntity(138U);
    msg.setDestination(35789U);
    msg.setDestinationEntity(161U);
    msg.k = 0.9385951117496187;
    msg.m = 0.2543652182262217;
    msg.n = 0.15501211904505618;

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
    msg.setTimeStamp(0.15532174596667292);
    msg.setSource(49360U);
    msg.setSourceEntity(95U);
    msg.setDestination(20355U);
    msg.setDestinationEntity(12U);
    msg.k = 0.9142613022075008;
    msg.m = 0.9700591029188854;
    msg.n = 0.4545536601493113;

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
    msg.setTimeStamp(0.12836576964894497);
    msg.setSource(19705U);
    msg.setSourceEntity(228U);
    msg.setDestination(44075U);
    msg.setDestinationEntity(20U);
    msg.k = 0.1427623444738314;
    msg.m = 0.531333238172821;
    msg.n = 0.0968295540831755;

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
    msg.setTimeStamp(0.3063067439779231);
    msg.setSource(5949U);
    msg.setSourceEntity(2U);
    msg.setDestination(7761U);
    msg.setDestinationEntity(133U);
    msg.p = 0.18422202762190654;
    msg.i = 0.6998449566692093;
    msg.d = 0.9997717454637681;
    msg.a = 0.760048882855195;

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
    msg.setTimeStamp(0.11218606083171545);
    msg.setSource(14746U);
    msg.setSourceEntity(53U);
    msg.setDestination(2189U);
    msg.setDestinationEntity(152U);
    msg.p = 0.31023414937572247;
    msg.i = 0.642628772900646;
    msg.d = 0.8769598971467207;
    msg.a = 0.31998430303507885;

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
    msg.setTimeStamp(0.9680526664297504);
    msg.setSource(5917U);
    msg.setSourceEntity(191U);
    msg.setDestination(51762U);
    msg.setDestinationEntity(159U);
    msg.p = 0.3258740631282083;
    msg.i = 0.3521179145852886;
    msg.d = 0.9898570887296682;
    msg.a = 0.3303343592092761;

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
    msg.setTimeStamp(0.8040689328234887);
    msg.setSource(50237U);
    msg.setSourceEntity(101U);
    msg.setDestination(13478U);
    msg.setDestinationEntity(148U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.3283230203278674);
    msg.setSource(21733U);
    msg.setSourceEntity(56U);
    msg.setDestination(26958U);
    msg.setDestinationEntity(120U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.4576742249351048);
    msg.setSource(34319U);
    msg.setSourceEntity(229U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(105U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.9355502191015183);
    msg.setSource(47113U);
    msg.setSourceEntity(215U);
    msg.setDestination(54725U);
    msg.setDestinationEntity(177U);
    msg.timeout = 13127U;
    msg.lat = 0.9969292251357974;
    msg.lon = 0.07263661336859562;
    msg.z = 0.9087743538515469;
    msg.z_units = 77U;
    msg.speed = 0.6157461057084199;
    msg.speed_units = 33U;
    msg.roll = 0.762641129388852;
    msg.pitch = 0.1374003261390171;
    msg.yaw = 0.7409364926653631;
    msg.custom.assign("ZCJWGSREWLSKFVZYFRKPIFLSJOIBEHMDWDLEULQFFACVTJGMAYUSGDDSVXXPBGIXYHI");

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
    msg.setTimeStamp(0.12710412977776175);
    msg.setSource(48691U);
    msg.setSourceEntity(161U);
    msg.setDestination(48388U);
    msg.setDestinationEntity(93U);
    msg.timeout = 62749U;
    msg.lat = 0.2555333372890206;
    msg.lon = 0.11128077543921411;
    msg.z = 0.9754590235539367;
    msg.z_units = 163U;
    msg.speed = 0.6762058018904129;
    msg.speed_units = 3U;
    msg.roll = 0.7240367370263584;
    msg.pitch = 0.6647101695711259;
    msg.yaw = 0.0673036089125073;
    msg.custom.assign("TSGDOWHGNOZTFEVVDKIBPWEDKVYMXKJMFUXHOUPLPRGSBEV");

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
    msg.setTimeStamp(0.7197976217294841);
    msg.setSource(52129U);
    msg.setSourceEntity(71U);
    msg.setDestination(12511U);
    msg.setDestinationEntity(229U);
    msg.timeout = 56009U;
    msg.lat = 0.6946115888346471;
    msg.lon = 0.2586435400014465;
    msg.z = 0.20997821491863067;
    msg.z_units = 125U;
    msg.speed = 0.7481422066524988;
    msg.speed_units = 108U;
    msg.roll = 0.11962774362165784;
    msg.pitch = 0.4378154993328146;
    msg.yaw = 0.9657950251137486;
    msg.custom.assign("YPSZHRFNKKTLOKYRZWUTWHDUEF");

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
    msg.setTimeStamp(0.528555152530379);
    msg.setSource(30306U);
    msg.setSourceEntity(155U);
    msg.setDestination(7596U);
    msg.setDestinationEntity(35U);
    msg.timeout = 24356U;
    msg.lat = 0.15665303469465508;
    msg.lon = 0.02715471203788067;
    msg.z = 0.49911320932332237;
    msg.z_units = 131U;
    msg.speed = 0.3479805551042081;
    msg.speed_units = 60U;
    msg.duration = 27956U;
    msg.radius = 0.45045310187935494;
    msg.flags = 127U;
    msg.custom.assign("EATUVLIBURQIVZHSEYSPQDJRBSNQKRMZKLZYEQSFGVGHCOCDRIZSQ");

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
    msg.setTimeStamp(0.9936247194501614);
    msg.setSource(47752U);
    msg.setSourceEntity(133U);
    msg.setDestination(53931U);
    msg.setDestinationEntity(207U);
    msg.timeout = 35519U;
    msg.lat = 0.4396162217978512;
    msg.lon = 0.5626314728632436;
    msg.z = 0.7916372478823712;
    msg.z_units = 49U;
    msg.speed = 0.6754452431313435;
    msg.speed_units = 11U;
    msg.duration = 31463U;
    msg.radius = 0.01228051308761069;
    msg.flags = 146U;
    msg.custom.assign("FDEZLSUDXRHFHRMVBWLUPOJRZLZQJHDXOMCSV");

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
    msg.setTimeStamp(0.6852806570683844);
    msg.setSource(42978U);
    msg.setSourceEntity(106U);
    msg.setDestination(29257U);
    msg.setDestinationEntity(148U);
    msg.timeout = 48940U;
    msg.lat = 0.8590449710262154;
    msg.lon = 0.3006650835923089;
    msg.z = 0.894479164318522;
    msg.z_units = 32U;
    msg.speed = 0.5197592788438161;
    msg.speed_units = 216U;
    msg.duration = 61033U;
    msg.radius = 0.7177555257845774;
    msg.flags = 33U;
    msg.custom.assign("DPDFZJGTQMKENAOYYFBAOTEPZLDWAGFCEUINSNLJZWCXCMYMWIBWQDIYPDEVYCJKZFXSFMUSDHQPFIPNYRVHZIEDSLLSXTQOFBRUBXYRYMAPFQTCBHNBKLGWGHINIUVMWYKMXJMRGMSENQTWVJZDAXAYABBKOCLCUHTRPFHLRJWUZSPLVRUXVCBSULTKXHKTAOEWNGJLNNOZHZQROFOUBX");

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
    msg.setTimeStamp(0.5222175381764174);
    msg.setSource(9672U);
    msg.setSourceEntity(98U);
    msg.setDestination(36060U);
    msg.setDestinationEntity(137U);
    msg.custom.assign("VJRUWMEYLAOCDWWDYJTSXPCAFOFQVOTVPCVLGYNIJLYSBLEXSGQMBDGWJBHPRVJPEYRHNTAAWAEJALOPYPZIIGYCTZFKAILZLR");

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
    msg.setTimeStamp(0.4075960926984936);
    msg.setSource(39688U);
    msg.setSourceEntity(241U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("JHCZLORRLXGUEOJXZSPSIAFWFUKNNXEULHDXZFSZTFXKWFDOYIKUDZWEARKQQMYAMGSWUKOQAGSBHPQCIJEBHUXQISUBWLBLQEQOROAC");

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
    msg.setTimeStamp(0.8708479430405015);
    msg.setSource(60412U);
    msg.setSourceEntity(76U);
    msg.setDestination(51122U);
    msg.setDestinationEntity(88U);
    msg.custom.assign("KLIYJVAGMQBAKDRVWKONVNFOSQDRPLWPJZJKHPUL");

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
    msg.setTimeStamp(0.6046111867119961);
    msg.setSource(30933U);
    msg.setSourceEntity(34U);
    msg.setDestination(56539U);
    msg.setDestinationEntity(19U);
    msg.timeout = 58437U;
    msg.lat = 0.23234814061141695;
    msg.lon = 0.9844513690243957;
    msg.z = 0.46258662382953986;
    msg.z_units = 212U;
    msg.duration = 28127U;
    msg.speed = 0.8294549251036569;
    msg.speed_units = 134U;
    msg.type = 189U;
    msg.radius = 0.43555779012120344;
    msg.length = 0.18135720763694774;
    msg.bearing = 0.32719949120037906;
    msg.direction = 127U;
    msg.custom.assign("DYJZSSZXHCHUOKJYVELZBNBWWFTTCGMRPVLIMUNERGAAUZXROVRYXVKDEIFHWCBRTLRDIHVNJFOXNQBKEJJOYSCGZHZVAAJWFALIHHELNSMENLQTFJIRDCCQTABSPLAMWDJMQYKSWAUQWGPIEYRJNPSMLFVUKIYTKCIPRIQHLPEWOSPAIYLXOKOFXMQN");

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
    msg.setTimeStamp(0.6777895166071563);
    msg.setSource(21526U);
    msg.setSourceEntity(12U);
    msg.setDestination(9320U);
    msg.setDestinationEntity(194U);
    msg.timeout = 23889U;
    msg.lat = 0.08968820476205364;
    msg.lon = 0.06309712072378115;
    msg.z = 0.24692552828042036;
    msg.z_units = 20U;
    msg.duration = 47636U;
    msg.speed = 0.9038399370608038;
    msg.speed_units = 26U;
    msg.type = 135U;
    msg.radius = 0.4124397465221872;
    msg.length = 0.6697220080964525;
    msg.bearing = 0.7640147362923416;
    msg.direction = 29U;
    msg.custom.assign("QRLWJRBHGSVIWXSOCKBNJLDODPWYYWAZFQBXXADATRLPKODIFXKIPHPXZQHIWPQEJJACVZRGGAOUKWTXCZONTTNULSZKTMVXYQDMFQVMTUXIRQCVMEGHDIBQPAFIHFFGDYNDMJAGNVQFIRKCEWSCAZOEMHKTLABNTECPUQJGYMOUKNJZHOVZDNFSSBYEFIUYRKJSYXJN");

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
    msg.setTimeStamp(0.7059210526384161);
    msg.setSource(40694U);
    msg.setSourceEntity(227U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(65U);
    msg.timeout = 50682U;
    msg.lat = 0.5243549713327276;
    msg.lon = 0.8029636675983131;
    msg.z = 0.2985365804927812;
    msg.z_units = 202U;
    msg.duration = 4536U;
    msg.speed = 0.1061952590917783;
    msg.speed_units = 23U;
    msg.type = 121U;
    msg.radius = 0.28211100697894453;
    msg.length = 0.1433419911289221;
    msg.bearing = 0.9516901167372088;
    msg.direction = 85U;
    msg.custom.assign("HFDSQFARFXTYSYKJEZFQREJAFZPUENPRYVWJXUKXRJOWNCOZSLPENUKYFNOFYINLNVDAAOGYURLUWMMLHXBJVPTDZAWFCXBHDONGEFCZMEUCTBBQGDKTOSYASRMGZEDSKHDOPYLHXYNRTTRPIQLBIAWGZARPBCSSFACXHLIPZMAMZTEQCOBWDEQVOVLJTBWMXCGSMPDLKJIJGPDMSUG");

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
    msg.setTimeStamp(0.019169782920902545);
    msg.setSource(31973U);
    msg.setSourceEntity(246U);
    msg.setDestination(37769U);
    msg.setDestinationEntity(219U);
    msg.duration = 63404U;
    msg.custom.assign("QJEGFRPTHFAMTIPOVXUQBFDNONLHZJWKDMPDBFSDTPHYEMH");

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
    msg.setTimeStamp(0.6622930506493241);
    msg.setSource(24013U);
    msg.setSourceEntity(213U);
    msg.setDestination(61017U);
    msg.setDestinationEntity(34U);
    msg.duration = 29260U;
    msg.custom.assign("QUQWBIPBFDSQCFFVXRQVBWCZEAMXSRSNQEPJAUHAUIJXTPIQKGYUJEKGKJHOCUMJVNAOTOCFHCYTGNRIIVXANMONSMTJVWRFEUUZNTBQFUVBCLYWPWDGFRIZOSESMCYKMDDAPDTVAELVXUSYGRJPBKHBYDITTOLLXIIKNYHOMQFBZYQHAWI");

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
    msg.setTimeStamp(0.37215621834332513);
    msg.setSource(56914U);
    msg.setSourceEntity(89U);
    msg.setDestination(38973U);
    msg.setDestinationEntity(114U);
    msg.duration = 47946U;
    msg.custom.assign("FOOJNSPJIAJCUWYURAUCQGMMZAMWOSYEITXESKXPFIIXBFGPZHINJZTXWNEWBMOAVHEZTCTKULNNHXSACJDZYKLEHDLPYQVWOBQSSVFJOGOBPDQDNJXBPFDGQRRZGBWAMAYJ");

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
    msg.setTimeStamp(0.022185508365600293);
    msg.setSource(7487U);
    msg.setSourceEntity(8U);
    msg.setDestination(56271U);
    msg.setDestinationEntity(254U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3576889587U;
    tmp_msg_0.start_lat = 0.0916782919481075;
    tmp_msg_0.start_lon = 0.2544672612022356;
    tmp_msg_0.start_z = 0.1130227097345925;
    tmp_msg_0.start_z_units = 236U;
    tmp_msg_0.end_lat = 0.329264331632806;
    tmp_msg_0.end_lon = 0.7386827452554966;
    tmp_msg_0.end_z = 0.05444038651405425;
    tmp_msg_0.end_z_units = 216U;
    tmp_msg_0.speed = 0.503085011466918;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.lradius = 0.46345151512153415;
    tmp_msg_0.flags = 177U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11710U;
    msg.custom.assign("JCDOXHZFZAYPZTZ");

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
    msg.setTimeStamp(0.6472312236260006);
    msg.setSource(2924U);
    msg.setSourceEntity(208U);
    msg.setDestination(1444U);
    msg.setDestinationEntity(175U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.6189234833392303;
    msg.control.set(tmp_msg_0);
    msg.duration = 2147U;
    msg.custom.assign("UTQUWJXFNTKMZFDZMVSAWRGTSUKPMKYFAXIJPBHICOYAWYGZBDOMFLDAVURNLQSCAQJKSNZWIMQJFQEQPBCFHRIHZNDEOECSZBTXHRBTILVESMEKTIQGWWWYJDBDTGUJRJPITJOFQNYDXTWUAINDYUVWAYJVHIRESHHKOOQDPPFAZGYPCXJOXRZYBPNXEGNFVUKXCVGGLMKAEBDXBCPSBSPGXHLERLZRH");

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
    msg.setTimeStamp(0.4982951761003023);
    msg.setSource(49994U);
    msg.setSourceEntity(184U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(106U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.24006897347804412;
    msg.control.set(tmp_msg_0);
    msg.duration = 40302U;
    msg.custom.assign("YRBUSJFMWPZNNCPULXIWBNMRAURKFDQWAHCELIDTYXDPBQSUGMSSQURPPNMILOHHSFTQAEQDUPBBFNJTZPVIVAOVUAZCMAHQPAPCJHYLBRHFHCXTSZYAXGRYOFBCDOIZEQMQJNWKDKHHQCFWTMGKQVUIXUCHZORTRNTZJNXLGOLCIFZSJBYRJMYDVTYEOLXXZEIRLJBABXN");

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
    msg.setTimeStamp(0.7745694281112837);
    msg.setSource(18040U);
    msg.setSourceEntity(144U);
    msg.setDestination(11850U);
    msg.setDestinationEntity(112U);
    msg.timeout = 29024U;
    msg.lat = 0.49937540829659843;
    msg.lon = 0.9559819210992685;
    msg.z = 0.19273022747842117;
    msg.z_units = 191U;
    msg.speed = 0.5614579316581393;
    msg.speed_units = 177U;
    msg.bearing = 0.20633725557756144;
    msg.cross_angle = 0.5044380191095628;
    msg.width = 0.7398823971470389;
    msg.length = 0.9273802943707065;
    msg.hstep = 0.6647473031243368;
    msg.coff = 84U;
    msg.alternation = 197U;
    msg.flags = 112U;
    msg.custom.assign("QSAJSDTZWZMBIUUBLTFYCEKMJINQLPOJBQZXPOYWAGOJKCXGCKS");

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
    msg.setTimeStamp(0.3842506230503451);
    msg.setSource(12161U);
    msg.setSourceEntity(90U);
    msg.setDestination(65099U);
    msg.setDestinationEntity(0U);
    msg.timeout = 36084U;
    msg.lat = 0.20788059861694952;
    msg.lon = 0.1600439809267925;
    msg.z = 0.2544025699327206;
    msg.z_units = 220U;
    msg.speed = 0.2414415256468888;
    msg.speed_units = 73U;
    msg.bearing = 0.6373035063815953;
    msg.cross_angle = 0.5474690735774207;
    msg.width = 0.11432048374759474;
    msg.length = 0.4378073431081294;
    msg.hstep = 0.759394447620385;
    msg.coff = 208U;
    msg.alternation = 45U;
    msg.flags = 26U;
    msg.custom.assign("GAVYZNFOUYCQPKDYOGFOLSHTYSRZIHYEFSJVKWXOVZVCQFRLXCESULEPGYBWIJZGHOFAOFTURFLAXQSXCVPPXKHDWMQUFKAGTLPCPPNUCTEFOTEOPBLDHMKKNZJBMGTMMVZHIIRKSIN");

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
    msg.setTimeStamp(0.16530693289795773);
    msg.setSource(59543U);
    msg.setSourceEntity(196U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(142U);
    msg.timeout = 5900U;
    msg.lat = 0.38216238905105915;
    msg.lon = 0.9434251169997753;
    msg.z = 0.2171190215403449;
    msg.z_units = 87U;
    msg.speed = 0.10105833525254915;
    msg.speed_units = 222U;
    msg.bearing = 0.116806732011412;
    msg.cross_angle = 0.5441479278858242;
    msg.width = 0.21971556262197645;
    msg.length = 0.6477734299418902;
    msg.hstep = 0.72069119842733;
    msg.coff = 227U;
    msg.alternation = 42U;
    msg.flags = 76U;
    msg.custom.assign("UGMBNKCDBDTGGFETRXJYFUUDCXHZWJLNWWDNGKZZOMMTUCLPQPFWLIVLSPGMSYRBTMHLFWVNDHNPTUKNKWFJQOHEXOHBKEZNDAQPUHOSISCLRMIIRSAFCXVAZTRGBWQGYRUEWQLYACQYOTUNVJMMIYXXVHZIIIGRODENOZEJQJTCQBEAOOIVGXJSDRJZQBSFCKEKEVIGAAAFYFPCBLAHLMUULKDSVBHHZPPDJYQXYXPYARBVJNMVWSWESPTTKC");

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
    msg.setTimeStamp(0.7739130952048763);
    msg.setSource(63815U);
    msg.setSourceEntity(61U);
    msg.setDestination(47376U);
    msg.setDestinationEntity(0U);
    msg.timeout = 47928U;
    msg.lat = 0.7243503112035435;
    msg.lon = 0.17655267409130126;
    msg.z = 0.7625491595910998;
    msg.z_units = 31U;
    msg.speed = 0.7070169890329828;
    msg.speed_units = 194U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5552295781295652;
    tmp_msg_0.y = 0.632341574252671;
    tmp_msg_0.z = 0.185480712616111;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TSLBEUSNMDJBGXWYKBABKTZHYATHTXRRGTMIPQPYXXHLSNLEUMURIFTYGVAIQXGSLKRKMHCGYOPKLTFBMEWNCZDKGSWUQWADVLZDWMLQOEFCOIRWZOXEZTXDJFMFCRXHEFNANKAOKL");

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
    msg.setTimeStamp(0.3016891814410946);
    msg.setSource(50593U);
    msg.setSourceEntity(72U);
    msg.setDestination(41151U);
    msg.setDestinationEntity(62U);
    msg.timeout = 34120U;
    msg.lat = 0.6358412230592037;
    msg.lon = 0.48783234783911655;
    msg.z = 0.5930361321864778;
    msg.z_units = 190U;
    msg.speed = 0.9876771409092769;
    msg.speed_units = 145U;
    msg.custom.assign("WMVKOWWDVJXSUIYNLOFYYXMTGEFBNAIXVYQVZRHEGAEAGMQIXFBHMULEGSCPDSOSYPPLZAZEKJHDVMYYUTEIZMYBPZEIQGDBHZPJFDRWQHPMCRWSFNWZOBDBHWPGOLIRIQLLJTVIDUARSQGFOXJEGHTBJCALNVRJXYKZRASACQWKLIXCMBJKCCAYKKCNFSVWUNXOUDTUFVXNNDTHTJAOMFJEKMTNUUCFPSORTXTQZBLKUGOIVLPGCKH");

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
    msg.setTimeStamp(0.7691219162815661);
    msg.setSource(48385U);
    msg.setSourceEntity(31U);
    msg.setDestination(2869U);
    msg.setDestinationEntity(7U);
    msg.timeout = 60830U;
    msg.lat = 0.06573303164174371;
    msg.lon = 0.07259821267112976;
    msg.z = 0.3627195089060775;
    msg.z_units = 37U;
    msg.speed = 0.7344450971886545;
    msg.speed_units = 118U;
    msg.custom.assign("CXVCMNDQBQDVPZWHNOQJWKEMGOTZUTLELJHEZPNXKQYKFTEYPFIMGWDPSDMDQPUZDBHEDMGOBVVUSKYYLBXDIQCPRXLVJMRWOPOFZTRNBECFQXHAEHBJJMHWXDAGATSNKUTGRGUVXMGKCGTJGLSXXJHRRYSBELYBZNSIJJUPQLXVAJVAMOMSCCYFVQSKZINYUKHFRCFVINAYFNWDIEKIUBFWSTHCNYZCA");

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
    msg.setTimeStamp(0.7658932408678328);
    msg.setSource(3824U);
    msg.setSourceEntity(66U);
    msg.setDestination(7135U);
    msg.setDestinationEntity(251U);
    msg.x = 0.6688956572004424;
    msg.y = 0.9261836239497441;
    msg.z = 0.7266516151953711;

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
    msg.setTimeStamp(0.8755991983558488);
    msg.setSource(11672U);
    msg.setSourceEntity(52U);
    msg.setDestination(26080U);
    msg.setDestinationEntity(124U);
    msg.x = 0.6877935945847118;
    msg.y = 0.02945608954614032;
    msg.z = 0.5203575000621852;

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
    msg.setTimeStamp(0.6758312091661007);
    msg.setSource(53625U);
    msg.setSourceEntity(58U);
    msg.setDestination(52558U);
    msg.setDestinationEntity(191U);
    msg.x = 0.593155270574924;
    msg.y = 0.40454975337721844;
    msg.z = 0.6103870892893308;

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
    msg.setTimeStamp(0.45542042152541373);
    msg.setSource(54526U);
    msg.setSourceEntity(204U);
    msg.setDestination(62568U);
    msg.setDestinationEntity(20U);
    msg.timeout = 11306U;
    msg.lat = 0.7096511137282717;
    msg.lon = 0.048212239916738175;
    msg.z = 0.11463482069822617;
    msg.z_units = 146U;
    msg.amplitude = 0.7149727411881177;
    msg.pitch = 0.11461523271597263;
    msg.speed = 0.2327357701872501;
    msg.speed_units = 155U;
    msg.custom.assign("IGIGEGJKGONUPHWCANSOMFWBIXFMTIREGFDTWHTVFLSACVOVANRDJVPYGWJSEPMVCHZBNZOSGAXIJSZXLVPQMLIYCURYTEWBQLDNWAMGURUIJABZXQNXOKNKPPMOBQTMHZSODYDRRLQIDYWTGCVFCEOBYXZQ");

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
    msg.setTimeStamp(0.20068048071579647);
    msg.setSource(35333U);
    msg.setSourceEntity(31U);
    msg.setDestination(12472U);
    msg.setDestinationEntity(51U);
    msg.timeout = 25494U;
    msg.lat = 0.3901327102785177;
    msg.lon = 0.10560969626135586;
    msg.z = 0.8438181175054804;
    msg.z_units = 245U;
    msg.amplitude = 0.19007673033203853;
    msg.pitch = 0.0005370056140364676;
    msg.speed = 0.535677838925925;
    msg.speed_units = 81U;
    msg.custom.assign("ZRAJJTPWNDUAUEVHNGIBMOJPEMVKKOYGITUUAXRMAIFLICDWSEMRXRNBJQILVHNCNYJKBZFMLEMCYXTNSKKFEHR");

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
    msg.setTimeStamp(0.6093136022074792);
    msg.setSource(44914U);
    msg.setSourceEntity(183U);
    msg.setDestination(45994U);
    msg.setDestinationEntity(37U);
    msg.timeout = 37071U;
    msg.lat = 0.07362811193861674;
    msg.lon = 0.6305533784536862;
    msg.z = 0.6920768538593847;
    msg.z_units = 234U;
    msg.amplitude = 0.06510624230844475;
    msg.pitch = 0.5407106631142092;
    msg.speed = 0.6341370823797079;
    msg.speed_units = 85U;
    msg.custom.assign("ECATMQVAWHOZCQYZCRYLBPBHGFYBSFWDSGKYXCVAPTLBHCCASLMNSOUPLOZEZSTQJISPKTKEEPCLDXPPZLPNLXWRESDKGPTRJMFJFLTOOCCOOUQYBFHWKAGYXUMVMVFTDVDXVDFZIFEKAHANXIUWFMGADJQNMRTWKOXUUQBW");

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
    msg.setTimeStamp(0.2148600407287461);
    msg.setSource(15520U);
    msg.setSourceEntity(161U);
    msg.setDestination(33813U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.173214140411176);
    msg.setSource(37674U);
    msg.setSourceEntity(171U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.9993839372765263);
    msg.setSource(30600U);
    msg.setSourceEntity(224U);
    msg.setDestination(60074U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.7362477952382824);
    msg.setSource(26986U);
    msg.setSourceEntity(87U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.45366595746360894;
    msg.lon = 0.12724272187464314;
    msg.z = 0.3155064782918301;
    msg.z_units = 156U;
    msg.radius = 0.4085278468272433;
    msg.duration = 45110U;
    msg.speed = 0.5503637591364897;
    msg.speed_units = 244U;
    msg.custom.assign("DWWFAQKKBEPFIXBYJSJNVURZVCXDKVTJCDEPKMOTXTIAUWLOVSOYJITNXZCQSNGVNMCIJMFDDEIZKEIHCZXAPXUPSEXNFVTLUOLGQWQZPOQHGJSLHEHVRMUWDZLY");

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
    msg.setTimeStamp(0.3117435639609222);
    msg.setSource(9854U);
    msg.setSourceEntity(153U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.9320182766764472;
    msg.lon = 0.5230842059503914;
    msg.z = 0.7768759794337805;
    msg.z_units = 215U;
    msg.radius = 0.20176695822290136;
    msg.duration = 51739U;
    msg.speed = 0.8249027033980926;
    msg.speed_units = 215U;
    msg.custom.assign("XCUAMZXITYVGURUABVDGNCAWMNMNLXPJJPYWBSTETVPSVSEQOHPLQFDUQOQMMIFTVOLWGWZJLFCKBCOTROODTRYADLBPZORTZFABOFTCUJJKHJYSKXNPERHGEEBXNEGPISLOBZVMSNDJGSIKXJPY");

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
    msg.setTimeStamp(0.9589811534583998);
    msg.setSource(1783U);
    msg.setSourceEntity(119U);
    msg.setDestination(55200U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.08864343334519675;
    msg.lon = 0.42853601558226084;
    msg.z = 0.9991209504815042;
    msg.z_units = 160U;
    msg.radius = 0.5613046559999803;
    msg.duration = 28222U;
    msg.speed = 0.5062891131812832;
    msg.speed_units = 19U;
    msg.custom.assign("HRESXKTSTKTPVUBWSVJXIYRUYUHYGXJLWEUCLJQZKEMMKOEAPZFMIJDBMLRMFFJHWGBNJRLRYCNKDPGIBZAYDOPUSV");

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
    msg.setTimeStamp(0.7828259839710782);
    msg.setSource(21645U);
    msg.setSourceEntity(71U);
    msg.setDestination(41298U);
    msg.setDestinationEntity(179U);
    msg.timeout = 54788U;
    msg.flags = 26U;
    msg.lat = 0.023921876854968716;
    msg.lon = 0.6820951413098835;
    msg.start_z = 0.10789191082266858;
    msg.start_z_units = 249U;
    msg.end_z = 0.537619579363681;
    msg.end_z_units = 95U;
    msg.radius = 0.5285706105758781;
    msg.speed = 0.7880165151033828;
    msg.speed_units = 187U;
    msg.custom.assign("YGMRPFETTXKJHAQUKMWHEXAMOGBQRKASZGNTEDPRSKVCTKLBNDFFCZZRAJOQWZISRFIMZYLDOIIUPFXDDTBNED");

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
    msg.setTimeStamp(0.11857057039233188);
    msg.setSource(29548U);
    msg.setSourceEntity(249U);
    msg.setDestination(48540U);
    msg.setDestinationEntity(147U);
    msg.timeout = 49235U;
    msg.flags = 105U;
    msg.lat = 0.706181419456756;
    msg.lon = 0.5807198808091664;
    msg.start_z = 0.8839054527976211;
    msg.start_z_units = 41U;
    msg.end_z = 0.08020384130355118;
    msg.end_z_units = 57U;
    msg.radius = 0.3634051018016893;
    msg.speed = 0.8332779242598529;
    msg.speed_units = 38U;
    msg.custom.assign("PILGZDPTBHFHUFTBLYRXAYPPQBUZDICPGNLNQXCMFFUXMMXYLQTMGWHJRBUWKPPGGREJAKNSYSPESFGHLWBYTAAGQCQWCZEZDPLCMXQZNIOYHJAETHSUDRSRUCSCJRTMVDZAOKBVALVCDQTKVJQJEVMWEKOWJEWINRLIVIYZIJRDNYODCKE");

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
    msg.setTimeStamp(0.4214384027914043);
    msg.setSource(35735U);
    msg.setSourceEntity(234U);
    msg.setDestination(45085U);
    msg.setDestinationEntity(0U);
    msg.timeout = 23404U;
    msg.flags = 213U;
    msg.lat = 0.6100690239555077;
    msg.lon = 0.002348205379398949;
    msg.start_z = 0.9962705137007469;
    msg.start_z_units = 93U;
    msg.end_z = 0.7137475624239128;
    msg.end_z_units = 179U;
    msg.radius = 0.33539478552567203;
    msg.speed = 0.9648166106313687;
    msg.speed_units = 76U;
    msg.custom.assign("LHWESURGDAETJXXXTISLTVOAFSEWJFXWYDUQDBVTMMXCTMMDXZSWEQEZKGPFRGBQWRIHNQNVXHNZPCHXUSMSMIXKNNRFYVEBQMGBHGNLQLLMZGEPUBIRYGZGBJODN");

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
    msg.setTimeStamp(0.3388658423231744);
    msg.setSource(32129U);
    msg.setSourceEntity(22U);
    msg.setDestination(12058U);
    msg.setDestinationEntity(95U);
    msg.timeout = 46288U;
    msg.lat = 0.8559500201646153;
    msg.lon = 0.3395012001520994;
    msg.z = 0.13123121628581857;
    msg.z_units = 228U;
    msg.speed = 0.7347833339565678;
    msg.speed_units = 157U;
    msg.custom.assign("HVRCDGWUFPIAWXNAOBSXBKXCQKYQCTEOVYCTFJTSWNKCOEEISWIUVPTBSXWSTJRJWHAZQYRNKPJQBUWGADOIPZDBQLYZEATYKOIBFJLJGHOMXROMUBJDBURYKHCTVQQCUUFPQUMFLYYZGNIRSBZCJANXTOGVTGDADFGXDIKHOLUREGZVIFFZMLYHQGPPEWVDLIVHRPZWNSGSERVZJEQFSIR");

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
    msg.setTimeStamp(0.010770986988029807);
    msg.setSource(21654U);
    msg.setSourceEntity(155U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(201U);
    msg.timeout = 54926U;
    msg.lat = 0.364480395725316;
    msg.lon = 0.3947722582434786;
    msg.z = 0.9275651970434113;
    msg.z_units = 235U;
    msg.speed = 0.13970639244862837;
    msg.speed_units = 47U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8220016038596739;
    tmp_msg_0.y = 0.5883630146726094;
    tmp_msg_0.z = 0.9878879435537732;
    tmp_msg_0.t = 0.37647829536127886;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XYYDHJGNBUUVTGBIFJLBFFVRN");

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
    msg.setTimeStamp(0.4876677961919508);
    msg.setSource(13624U);
    msg.setSourceEntity(91U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(22U);
    msg.timeout = 8582U;
    msg.lat = 0.9760560273109639;
    msg.lon = 0.020925254430233076;
    msg.z = 0.5446656519396765;
    msg.z_units = 18U;
    msg.speed = 0.2613911267974418;
    msg.speed_units = 254U;
    msg.custom.assign("IXSXAYJHUBKASLQKKEYXZUJVRPAUEYXAHFYVSEHZDHEZPOMHAMLZOSJMONUFVGLTMGPWQROHQFYGXM");

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
    msg.setTimeStamp(0.30791238973301305);
    msg.setSource(3916U);
    msg.setSourceEntity(157U);
    msg.setDestination(43158U);
    msg.setDestinationEntity(239U);
    msg.x = 0.6854764268653228;
    msg.y = 0.22370136683982622;
    msg.z = 0.25467000165521647;
    msg.t = 0.6191059792037552;

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
    msg.setTimeStamp(0.45109924798139533);
    msg.setSource(59273U);
    msg.setSourceEntity(19U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(65U);
    msg.x = 0.5437029972160758;
    msg.y = 0.53010802588436;
    msg.z = 0.9789695187981102;
    msg.t = 0.5667497753200831;

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
    msg.setTimeStamp(0.13946687063557106);
    msg.setSource(5475U);
    msg.setSourceEntity(30U);
    msg.setDestination(33054U);
    msg.setDestinationEntity(233U);
    msg.x = 0.9592763738215321;
    msg.y = 0.9549428216733201;
    msg.z = 0.5141304572777152;
    msg.t = 0.6358865423346197;

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
    msg.setTimeStamp(0.12653978144089206);
    msg.setSource(33563U);
    msg.setSourceEntity(27U);
    msg.setDestination(12194U);
    msg.setDestinationEntity(212U);
    msg.timeout = 3877U;
    msg.name.assign("VEVKCNEDXOZXHOZVZEIAPXYKGJLPGTWBEMPETBHFGWHLRHCKINCGWVUOQJWHYNXULRUCIXIJXCFQJWZTNFOMEMWAPZQPXLBYPSZRAQMRRNXGPWBLCTHABLMYEQXRSDGIRAYFIUTMTWSCZOXIOZANMJUDMJ");
    msg.custom.assign("UVPBCAAVKQYFVVOKITOUFTBHLWTMYNRZDCHJDKXECXLPQWCSCZVNASOLWRNNXFTTBDARMIPOMORFUJJGIYGUXMVGTAJAMKKGEZPDPSJZBWISCCYTUUINHFX");

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
    msg.setTimeStamp(0.6574800738691675);
    msg.setSource(59639U);
    msg.setSourceEntity(34U);
    msg.setDestination(436U);
    msg.setDestinationEntity(183U);
    msg.timeout = 36053U;
    msg.name.assign("YWEPYBQFAODKHFONARUVCZEZHFKKQKZUWXBSNYUQIGYCLRMAMFNJMWVUNKJKHLIACACUXCCYIMVCPOVIQWXBYDBUTXGWJVDTRVNYGMRRPOTQKJTELIJPDYMEWFPDCLREDZOWMSZDBXSPGJZLOVOHITHREGRBMFEOGPXKZMAJFSJXOJVHDGFHWWULSYHEDIUBOHNZZSQFNMGLHAKIQARCNDSBXSSGATFTXUZRVPVPGCIWTTLJQBQBSL");
    msg.custom.assign("PHGUBKWMYDPDJXVOQLPUTQERBIGCZYIMJRXLTBOCHJHMQTIOSZV");

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
    msg.setTimeStamp(0.05921434696513406);
    msg.setSource(55091U);
    msg.setSourceEntity(100U);
    msg.setDestination(2848U);
    msg.setDestinationEntity(52U);
    msg.timeout = 15117U;
    msg.name.assign("YIUACMDUDAJOIENDBQLXEVWNFGYPJDBPQEZCFXN");
    msg.custom.assign("OIRYEFIBNFPRBDEGYDKUKSIPYZVNTQUVJEZMQLVUNEOEWJKCPCCXWCHDFKGXMVQOQZIOPFYFKTNNACVNTPPZUQJNRVFOYLWFWRLTMYZQZHXSPDJVLSOMHGASLLXDWJGBWEKTGPURDLBXSWUTAYGLVJCMKZRRCA");

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
    msg.setTimeStamp(0.34363185232604954);
    msg.setSource(5342U);
    msg.setSourceEntity(188U);
    msg.setDestination(63900U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.4139147978593577;
    msg.lon = 0.4869352948899911;
    msg.z = 0.8462946792257341;
    msg.z_units = 191U;
    msg.speed = 0.3265118786331306;
    msg.speed_units = 20U;
    msg.start_time = 0.5234923179327283;
    msg.custom.assign("HYGECEZKXLGJVSCXWKNJGULBGXFDABUZQHMSUGIVPALKJ");

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
    msg.setTimeStamp(0.940602517135331);
    msg.setSource(8045U);
    msg.setSourceEntity(4U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.6769174217572916;
    msg.lon = 0.5518505592438926;
    msg.z = 0.9456576246332127;
    msg.z_units = 18U;
    msg.speed = 0.9453156463539121;
    msg.speed_units = 234U;
    msg.start_time = 0.2675661735828787;
    msg.custom.assign("GXTKYSXIIPWPWRCQXHKTDGZKSETYVUUHSVIHTYGJIRNORBDFVZBJHAXWFRENEPHFIUVHUOBIIKNYYVJLOJGVACBALJUCMAXGQPKSCNGADSKKSDCXTRORBZGQTXOYMCFCRFWWHUYJASONKO");

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
    msg.setTimeStamp(0.8406963261233971);
    msg.setSource(49017U);
    msg.setSourceEntity(97U);
    msg.setDestination(61325U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.8825575591810689;
    msg.lon = 0.3785583075905933;
    msg.z = 0.8515871571654512;
    msg.z_units = 76U;
    msg.speed = 0.8568582951456671;
    msg.speed_units = 235U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6410986972731845;
    tmp_msg_0.y = 0.1730227659360155;
    tmp_msg_0.z = 0.881718357436504;
    tmp_msg_0.t = 0.09996143887075448;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.19339927147651492;
    msg.custom.assign("HGWHJEUTTRWZNZXYBEHKGMTOYHBLOCATBRNKRUQRHEEISFADUFNLHVC");

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
    msg.setTimeStamp(0.2773147845377536);
    msg.setSource(57949U);
    msg.setSourceEntity(139U);
    msg.setDestination(6331U);
    msg.setDestinationEntity(67U);
    msg.vid = 32957U;
    msg.off_x = 0.12685500110972958;
    msg.off_y = 0.35802177574975114;
    msg.off_z = 0.40219991956804824;

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
    msg.setTimeStamp(0.01004923628102794);
    msg.setSource(49130U);
    msg.setSourceEntity(17U);
    msg.setDestination(32268U);
    msg.setDestinationEntity(175U);
    msg.vid = 15915U;
    msg.off_x = 0.4878903018005778;
    msg.off_y = 0.9356149151185581;
    msg.off_z = 0.1973475603618262;

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
    msg.setTimeStamp(0.9261593286236722);
    msg.setSource(65104U);
    msg.setSourceEntity(215U);
    msg.setDestination(36814U);
    msg.setDestinationEntity(82U);
    msg.vid = 47282U;
    msg.off_x = 0.4257270228181941;
    msg.off_y = 0.7319105413043798;
    msg.off_z = 0.030637456135614638;

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
    msg.setTimeStamp(0.9561439014330636);
    msg.setSource(5022U);
    msg.setSourceEntity(22U);
    msg.setDestination(26385U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.28427932828148783);
    msg.setSource(38634U);
    msg.setSourceEntity(42U);
    msg.setDestination(43665U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.6214516501020588);
    msg.setSource(7373U);
    msg.setSourceEntity(199U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.10718814374315944);
    msg.setSource(53477U);
    msg.setSourceEntity(157U);
    msg.setDestination(44982U);
    msg.setDestinationEntity(76U);
    msg.mid = 796U;

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
    msg.setTimeStamp(0.4501301798473307);
    msg.setSource(41589U);
    msg.setSourceEntity(14U);
    msg.setDestination(30240U);
    msg.setDestinationEntity(161U);
    msg.mid = 8591U;

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
    msg.setTimeStamp(0.2255281599091864);
    msg.setSource(64353U);
    msg.setSourceEntity(47U);
    msg.setDestination(23021U);
    msg.setDestinationEntity(186U);
    msg.mid = 61842U;

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
    msg.setTimeStamp(0.3979392299508083);
    msg.setSource(2689U);
    msg.setSourceEntity(32U);
    msg.setDestination(48940U);
    msg.setDestinationEntity(130U);
    msg.state = 172U;
    msg.eta = 4989U;
    msg.info.assign("KPQUAYIZRWQJBEKMXWOSGJRZFCBBVDWRJESBMCCNMGURQSGJZTTXCEHJSZLSLXGLCVYTIMHRTSXRHBHPOVWPVGKLQIOIOATONOADTBSYKZWFANFQTANXAVDTRFKYVZDXWEHCEUEYUVKPGJIWNNFPNNUKDATAZLPKDWOHOVNXIJBMPYKADLSCBNBFUUYEMLIHTLGEEYQMZHFCWMUZVXHEHCJFVODYRGIUASDPJJGPQPO");

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
    msg.setTimeStamp(0.12702006764049112);
    msg.setSource(24884U);
    msg.setSourceEntity(137U);
    msg.setDestination(51212U);
    msg.setDestinationEntity(215U);
    msg.state = 242U;
    msg.eta = 27614U;
    msg.info.assign("CISTAVWTRZHFEOMXDONIBCDBSHSACXHRNJZWLNCOGDSACXFMKRFVKWQBOUIPQTRAJPSKJHQMVPJNDEXWXYGHRMTDDHJVUYIEBZZLKMSDWIAMQSUKFLWXTCFZVIHOYUBPJFRKVQQXCPOHMSBXZUGFKADVK");

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
    msg.setTimeStamp(0.717773757907057);
    msg.setSource(18441U);
    msg.setSourceEntity(16U);
    msg.setDestination(44310U);
    msg.setDestinationEntity(170U);
    msg.state = 59U;
    msg.eta = 27055U;
    msg.info.assign("GTLOGNMYRNCFMDEQSFWHNTZAGYRQXTUGANWTVXSWWOEMVJMYHJURUCCBLQABWSQOHPKEJMIZOYYRZXIQE");

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
    msg.setTimeStamp(0.10377826668149792);
    msg.setSource(54890U);
    msg.setSourceEntity(249U);
    msg.setDestination(62723U);
    msg.setDestinationEntity(89U);
    msg.system = 51128U;
    msg.duration = 30534U;
    msg.speed = 0.1770440961844495;
    msg.speed_units = 108U;
    msg.x = 0.6091126137651253;
    msg.y = 0.7977184329177566;
    msg.z = 0.24229105510054494;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.5432876576818859);
    msg.setSource(35974U);
    msg.setSourceEntity(143U);
    msg.setDestination(7817U);
    msg.setDestinationEntity(21U);
    msg.system = 56103U;
    msg.duration = 357U;
    msg.speed = 0.3424092088487838;
    msg.speed_units = 1U;
    msg.x = 0.9821746251629061;
    msg.y = 0.5899380537133124;
    msg.z = 0.2482676602051741;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.13520958591817733);
    msg.setSource(11766U);
    msg.setSourceEntity(83U);
    msg.setDestination(47785U);
    msg.setDestinationEntity(36U);
    msg.system = 42602U;
    msg.duration = 52976U;
    msg.speed = 0.9917808382930337;
    msg.speed_units = 109U;
    msg.x = 0.5529197486574996;
    msg.y = 0.716296165741095;
    msg.z = 0.0977581320793457;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.4087549282246151);
    msg.setSource(55557U);
    msg.setSourceEntity(4U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.6494930503241816;
    msg.lon = 0.38265995882872994;
    msg.speed = 0.5963340030925321;
    msg.speed_units = 238U;
    msg.duration = 33023U;
    msg.sys_a = 14059U;
    msg.sys_b = 22003U;
    msg.move_threshold = 0.863257772064539;

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
    msg.setTimeStamp(0.23271810527746772);
    msg.setSource(14850U);
    msg.setSourceEntity(235U);
    msg.setDestination(12112U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.22247050960594617;
    msg.lon = 0.7141781606732881;
    msg.speed = 0.16868470223708665;
    msg.speed_units = 116U;
    msg.duration = 27979U;
    msg.sys_a = 11531U;
    msg.sys_b = 35443U;
    msg.move_threshold = 0.816014250437281;

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
    msg.setTimeStamp(0.7755588022751543);
    msg.setSource(27455U);
    msg.setSourceEntity(108U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.24949671554151753;
    msg.lon = 0.4008587227580498;
    msg.speed = 0.6734430214028213;
    msg.speed_units = 245U;
    msg.duration = 56127U;
    msg.sys_a = 49780U;
    msg.sys_b = 33562U;
    msg.move_threshold = 0.690075343136933;

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
    msg.setTimeStamp(0.5664915171068677);
    msg.setSource(22079U);
    msg.setSourceEntity(129U);
    msg.setDestination(2676U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.31126859947304475;
    msg.lon = 0.03389159427673727;
    msg.z = 0.21984738435405426;
    msg.z_units = 118U;
    msg.speed = 0.4051308598278305;
    msg.speed_units = 158U;
    msg.custom.assign("SGYLAFBUVPTKBQLFZFYHRNOAPCECDMWTCJJDHVVCEINPAGQIMYSXARBIXXPFNBXISKUKGVXMALHRLLTIVSKVCUYJWROHRJNZGDWENXBTDSEUZQOEEGWXDMLMSHRFGQXYAECYUZGWDJRFLICZWQCHCSLMWPTVJHGPMJGTBWPNIESZVVSOZAQSUOPZMQPJOXROHRBAUEFKKVHQLNOFYXTTAKABTQPCDDTUBEFHDKUZYMKBQWMNIYNOILFD");

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
    msg.setTimeStamp(0.03222819423880219);
    msg.setSource(47555U);
    msg.setSourceEntity(222U);
    msg.setDestination(49191U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.8863339497055518;
    msg.lon = 0.221041272647178;
    msg.z = 0.4363031653624496;
    msg.z_units = 170U;
    msg.speed = 0.8298978662279469;
    msg.speed_units = 102U;
    msg.custom.assign("KTREILAMOUVSMHGZUWJYBBHSFNZNZXGRVGWKAFDAJYOXCJLQPUCKSBDGDDPCRKTFHQWAQAOJLSGHUXKTFNJEWHUPLUUMMQKOIOSZQMOGGWIXTBPFLE");

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
    msg.setTimeStamp(0.9797418564066163);
    msg.setSource(25930U);
    msg.setSourceEntity(105U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.15270882514315098;
    msg.lon = 0.00016887265865606071;
    msg.z = 0.4090501965879705;
    msg.z_units = 16U;
    msg.speed = 0.09257295948759992;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.17764199798384617;
    tmp_msg_0.lon = 0.09297566160100645;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RYBBMGPIAFWEGNLYHDEXJXESAEWVVOJIPKD");

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
    msg.setTimeStamp(0.33070607269714525);
    msg.setSource(13611U);
    msg.setSourceEntity(34U);
    msg.setDestination(11067U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.12455829167284249;
    msg.lon = 0.9861911955774907;

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
    msg.setTimeStamp(0.24216274747270383);
    msg.setSource(64951U);
    msg.setSourceEntity(128U);
    msg.setDestination(43093U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.8923138995905641;
    msg.lon = 0.6006680149113407;

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
    msg.setTimeStamp(0.11395137875448857);
    msg.setSource(50256U);
    msg.setSourceEntity(103U);
    msg.setDestination(53932U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.3737142022942598;
    msg.lon = 0.2445646887693651;

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
    msg.setTimeStamp(0.4697739805245479);
    msg.setSource(30260U);
    msg.setSourceEntity(131U);
    msg.setDestination(7275U);
    msg.setDestinationEntity(142U);
    msg.timeout = 39782U;
    msg.lat = 0.7860716595467336;
    msg.lon = 0.9731847311660349;
    msg.z = 0.9554916858942767;
    msg.z_units = 243U;
    msg.pitch = 0.97477364842145;
    msg.amplitude = 0.2223784681610097;
    msg.duration = 48823U;
    msg.speed = 0.8737859410361087;
    msg.speed_units = 122U;
    msg.radius = 0.1882803126415259;
    msg.direction = 74U;
    msg.custom.assign("FZPWULUVWXURPPZBCZWTKJJTPTTGGZAEIEFJCDKDWIZXVQMLMCENPDWIPRPTXDAUINNYONHDYMTUIXWQBOIGVWTFMOBOIBYLBYJHRNXYORIRBWFOMDYJDQEMTSCWLFGUJMAQNGSRHCSBBKVVCTZJSKSXLHYVQRMKSLJVHEBYNHGENKAMECLYZXLCJQHKEHBVDIAWOUPAFGSUAIOPNKTAZRJGUFEKXFDQPESRQHHSYOLVCAOXCLKFGGRFZQ");

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
    msg.setTimeStamp(0.6769592780357758);
    msg.setSource(41258U);
    msg.setSourceEntity(101U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(132U);
    msg.timeout = 22894U;
    msg.lat = 0.23280431362316367;
    msg.lon = 0.11908660624520329;
    msg.z = 0.4413787041309174;
    msg.z_units = 40U;
    msg.pitch = 0.30859714830821217;
    msg.amplitude = 0.8847619788187886;
    msg.duration = 22048U;
    msg.speed = 0.46678478229031295;
    msg.speed_units = 180U;
    msg.radius = 0.5370608933834051;
    msg.direction = 236U;
    msg.custom.assign("BTUMCZVJTLEZMUHXZHSTRXSVJVUHIOVTDHFPIHNVOBBLMRPCYCONAJRRYWWMLJ");

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
    msg.setTimeStamp(0.21770601038852688);
    msg.setSource(22670U);
    msg.setSourceEntity(101U);
    msg.setDestination(63122U);
    msg.setDestinationEntity(175U);
    msg.timeout = 43164U;
    msg.lat = 0.12704206651542627;
    msg.lon = 0.26537418706658644;
    msg.z = 0.18945185036050238;
    msg.z_units = 47U;
    msg.pitch = 0.5943089004098364;
    msg.amplitude = 0.5336762531135124;
    msg.duration = 60758U;
    msg.speed = 0.2884965169707455;
    msg.speed_units = 102U;
    msg.radius = 0.3367296176099184;
    msg.direction = 204U;
    msg.custom.assign("HURTUIDPDPRYWINFHOLLJMNFZYBZGMJZEMKTAKVLVWCROGRXUKCYQMTJXKRBTSBIXNYCVDHLZQBUKOATXZAYVPCSCTJQHNBDDVVOLGXIFRYWLOEGZBDQSUGKWLLJYUNAMWNMSAEBSGAYLAIIXHCWSESVHWST");

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
    msg.setTimeStamp(0.5382649175893559);
    msg.setSource(61349U);
    msg.setSourceEntity(68U);
    msg.setDestination(36683U);
    msg.setDestinationEntity(162U);
    msg.formation_name.assign("PZWEACWACRXTFANFCTUEKWFH");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15545U;
    tmp_msg_0.off_x = 0.5208428563933711;
    tmp_msg_0.off_y = 0.22810849302449865;
    tmp_msg_0.off_z = 0.9802568202561465;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NUCJUYHVJRWFFWVQKHQDPZVPIZDHOGMPELGVKUXCSUCWETHUOIRLCIJAIFFCRSNXXQNGWMIREGVIYDAMKTHLQZJYJGASXWKYAAROMASMUBFXIRIWXLNLYUGSYRNHQLJOXRIEJYLXZNGK");

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
    msg.setTimeStamp(0.7898450389594215);
    msg.setSource(22398U);
    msg.setSourceEntity(109U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("PUQNRMPMHBOODRZKGQYQRIJTPUXFEBRKSBSFPCDRIWCFDYLPACJTNCZIOQBHNEHURLUQOXAXGXXYGY");
    msg.reference_frame = 184U;
    msg.custom.assign("IYRHMTUYWXCKATKCPLOSSQVEXBYFBBONACGWCVPLAZXZSNBKLQKVRARNSPJBOTZTUGZBDKVDEFITEZQXJQDIWFKWCGGHBPFLPYZNVGBOGCPGQTUIDCECRSGUOJJYMSGBTYQYLFAHRVHXWPRDGHZUHAXXDNXOMRESHNDZLNEIMISW");

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
    msg.setTimeStamp(0.9778981021954378);
    msg.setSource(38601U);
    msg.setSourceEntity(241U);
    msg.setDestination(2048U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("JRYIGGGEWOSDBYMBFDFAXPNEQRFFTIFJWTWPCNDALMEOIQNBZNBFFQCPUPHGIRIDOUXCKLGTYCKWAXDRZEEUSDSDJNBNEZKHPZJTYLYGTFIOJOVWLXYPOETMQAMCHKXAWYZRMMHBRPYFUJHTARLIGPYATBXLKIGVSHHARRNGVXVSOOSSKEPNVZVLCQEDJHVLXNGOMNWWJQVHAUFQZCHKKICQB");
    msg.reference_frame = 56U;
    msg.custom.assign("KKOLATDGCYCJMYDRQGOLGVCHKSIZQMWSILLUMVJSKFTGVHDXXDBLEUUIQRMCWWKDCXWTROAQROPMVPENQLIFJMHHSSVBTEBLKRNGYYTXRTNZNBIPVSEYHXPASIOVOBNFKZTOGJWAPEDSCDRDDBXZRAUCJRNXGGPGKJWFWOFGXABUVLPCIMQHZKNZFJCBMZDOFYTKEFRUNNMZTQJLVJESXHMJAOFPAFPYHZQUIAUBLHPUQIWXZYWSWQUIH");

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
    msg.setTimeStamp(0.4677580222831219);
    msg.setSource(39810U);
    msg.setSourceEntity(53U);
    msg.setDestination(56452U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("HLLGYVURFOZRCFYTLYZPQMSPYDUNLLERHDSUJJVGNJDKCRK");
    msg.formation_name.assign("SLBRVJJHDZYJBZVRJDXIQFDTUIJSKYKTWVYZAZDMQYSUPPWOXIBCKGTWAGLRSFGHQCCYIXQLSEXHBEBTNXFEPCXKZMEHQRAIBJWYOKFJPPNHWYBMIRRUWUGFLTOXJWGVDNVLESLCKMUHBPPHAUFCPDVMMKPGYEVEHYQTEBXTKADSIEVOHSAOLOYHQTFZGNFMFKNRSJWCVNSMZRDMBNPUJIGMCDRNELUTIAZVLAFNWGNOW");
    msg.plan_id.assign("ORSNQRCPHLAH");
    msg.description.assign("RZBKDQMZPBIWCQRXCEONAWZIIKCYOFTOLAWRYWXHKRRGPYHEWDAGAQNFLKJJVRYZHXNOETYVFUTJGSVBGUCNXDVBBBSQEJKSUPMROIOSBQFMXVZFKUEKFYGGFNJCMIDAQDCHLMDPZFLESCVNIVAZEEFYUXDTRPXHMIHVKL");
    msg.leader_speed = 0.44926692237664934;
    msg.leader_bank_lim = 0.6841616493759347;
    msg.pos_sim_err_lim = 0.9511676145136237;
    msg.pos_sim_err_wrn = 0.7104818848885575;
    msg.pos_sim_err_timeout = 42450U;
    msg.converg_max = 0.3743090521837087;
    msg.converg_timeout = 14110U;
    msg.comms_timeout = 10479U;
    msg.turb_lim = 0.8614243648682737;
    msg.custom.assign("NYBKWYCWUWJAXIUSOTAGNAHKJXUTEJQZRNFKXXUOBRAUIBXSLCWAESRJHVDVCVOHHYFWOCSFHPMHWEMZZYKOLXZRKJGQQLOGUTELZPPEQTZPVNRUKFCQTZPIIMBDSFPFCMTDEVQXDNRLYVHYRLVREKYIBABVSAWTAHDFLBTJKZNMBVIFTGWEMD");

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
    msg.setTimeStamp(0.18275589643837387);
    msg.setSource(50917U);
    msg.setSourceEntity(62U);
    msg.setDestination(24850U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("XDKEJFLFZWVUOMZSBVQRXAUGWMVRXEFMUZOOCWDHOZNWFLMBTQDDSXSSRCUIXLTAYBDHCGAFWJTQXTYMHJBMZBAGILYNSEUYBEPWQYULHYPVAEUBPOEAMZGJIZUCXCHWTPNGTLWYVBGNIOOAMRIHHOFASEVKJTCNPOUUMGNBYCKWXVHNIL");
    msg.formation_name.assign("ABHVEDYOJPBCPCHFSKAQUVFHFEMVAMTMUOHWBZCRPEDAEDQBIMEIFNOMXBSNAGQRTPFGSNXIKCVLUZWZUAQKXNHGQPDKDWHLCOIVTTIILJQVPJJSRSNJFCYCKCOBHUABLTSWPXE");
    msg.plan_id.assign("YUMFKKWIUMINNUBMUEHBZPRXCNBBBIXNIODEHIQSYTMADVRSZWZZAGSSALVFBMVKPSEWHWHWHCEJMLXSWFKHZCTVPJJRLAECKVFHLOMVJJRNXIHLUGJKQTQPRZTJUWJFNAN");
    msg.description.assign("SYLKRCTXGYHPUHAXECYKCAISAAQQQMRFXDWRIZWGOVPGRCRVWLLYUUYGCFTQGNVZEMNMFJLDWEQDSNHSWFKBUIEJKOBLUQYAJKHZNHIVXXUVOJRLDTEBMFKHNOWQAPLRWDGLIWNJIXDIKOJ");
    msg.leader_speed = 0.34104792845966103;
    msg.leader_bank_lim = 0.27692427442450385;
    msg.pos_sim_err_lim = 0.034249755396209;
    msg.pos_sim_err_wrn = 0.5477453432703562;
    msg.pos_sim_err_timeout = 27752U;
    msg.converg_max = 0.2360981952243013;
    msg.converg_timeout = 11692U;
    msg.comms_timeout = 5091U;
    msg.turb_lim = 0.2706267579300051;
    msg.custom.assign("AYINMLFNLYDRVVJRHHLOONKSGTCUYXFYGTGREMLHWEGVWWPCLXSSGMSXUPGAOQCSPAXYBSVAKVCBSBEDCEIWQCYOMJBCULHIFUJJZPKZVDQCUDRTDZORXOVRFZAFEUZVTWD");

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
    msg.setTimeStamp(0.8201320460370881);
    msg.setSource(62599U);
    msg.setSourceEntity(181U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("FQIPXUJRRPKDTHIICDE");
    msg.formation_name.assign("LJBECORNCMRSBIWMITTGFQMWDJXZKIGZFHDOLUXMLOEUMYAYUABFSCPHAOSVOEHFD");
    msg.plan_id.assign("XDLEVLFVWMWBMGCAMYKDIFEZHHUSTSSCYNFHEZDOSZCLNENZTBPYVKXEDPLQJRRMJBCFCNOSJPUOPOKBTZNVXEJQFLJOOVYAYRDRDMAUQUTUKBPVKWBUGAWQRBFXXSEZTNAXJHGOXKRCUILYZVZOMBQBTNDKZWWDVQWWRKPSYFPENQFIGZRMIGGESVJXIIQYB");
    msg.description.assign("KPQUTSQJDGUOBFQSBMDBZJYTUHPXCHNAURAODMSYRKTVWRKYVLAXAVTNVIRDZAXEQMUIGEKEVNRMIZUORLFJRFWUPMSWLJYTGOCQRAVZXHIFCSEYSDMQJWSYZNNJWAOKKTSFGBBGQGPXIEHTOOTARMWIMHBNJKDUFVIKZUCCLFGXXYDYDLFPDNNVSUQFECYXCAAZCHD");
    msg.leader_speed = 0.6740388659758138;
    msg.leader_bank_lim = 0.31670161010522546;
    msg.pos_sim_err_lim = 0.026920273436346842;
    msg.pos_sim_err_wrn = 0.1800276962279833;
    msg.pos_sim_err_timeout = 51470U;
    msg.converg_max = 0.6801819953817272;
    msg.converg_timeout = 25873U;
    msg.comms_timeout = 14787U;
    msg.turb_lim = 0.3950967949415408;
    msg.custom.assign("NCMEPAYUGWCTOAVBQRSFBYCVUNKKLXNPGEXZBDNDIHQPBDQZYPZLCANYZWHKEJHOWSTOYKWMZGOHOHNKORKELBGFKJALOIQGTNJSRODPEQIXFUXPYHHFICXHPQQSTJCPRXUPFMVJVKAUWFLUYDMYWACRZPLAKAEXRRRUQLMDEBSSXBEBLGJCGAYM");

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
    msg.setTimeStamp(0.5090830163383742);
    msg.setSource(42990U);
    msg.setSourceEntity(72U);
    msg.setDestination(28867U);
    msg.setDestinationEntity(125U);
    msg.control_src = 7984U;
    msg.control_ent = 79U;
    msg.timeout = 0.9737785635739755;
    msg.loiter_radius = 0.3326148785167581;
    msg.altitude_interval = 0.17411566059735606;

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
    msg.setTimeStamp(0.08976042081199065);
    msg.setSource(55819U);
    msg.setSourceEntity(158U);
    msg.setDestination(40796U);
    msg.setDestinationEntity(179U);
    msg.control_src = 21005U;
    msg.control_ent = 155U;
    msg.timeout = 0.9389182019475548;
    msg.loiter_radius = 0.22989727895646817;
    msg.altitude_interval = 0.7068672165893092;

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
    msg.setTimeStamp(0.245856382944438);
    msg.setSource(49092U);
    msg.setSourceEntity(61U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(221U);
    msg.control_src = 64333U;
    msg.control_ent = 45U;
    msg.timeout = 0.28816511349791385;
    msg.loiter_radius = 0.6231156534586755;
    msg.altitude_interval = 0.04485762978649621;

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
    msg.setTimeStamp(0.046786913278955344);
    msg.setSource(52656U);
    msg.setSourceEntity(53U);
    msg.setDestination(21934U);
    msg.setDestinationEntity(239U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.16345343451202698;
    tmp_msg_0.speed_units = 36U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6418509387963081;
    tmp_msg_1.z_units = 108U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5415456338438488;
    msg.lon = 0.9684772861603259;
    msg.radius = 0.25001423834173664;

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
    msg.setTimeStamp(0.2600356527433997);
    msg.setSource(40614U);
    msg.setSourceEntity(100U);
    msg.setDestination(54804U);
    msg.setDestinationEntity(127U);
    msg.flags = 190U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18740842083431575;
    tmp_msg_0.speed_units = 76U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9941065210682448;
    tmp_msg_1.z_units = 122U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5002920641164557;
    msg.lon = 0.3737754106808624;
    msg.radius = 0.9910090872204378;

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
    msg.setTimeStamp(0.3518938275941882);
    msg.setSource(34245U);
    msg.setSourceEntity(76U);
    msg.setDestination(46307U);
    msg.setDestinationEntity(236U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7587382611869227;
    tmp_msg_0.speed_units = 231U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6159698074260128;
    tmp_msg_1.z_units = 8U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.018099955401739254;
    msg.lon = 0.6570793499711829;
    msg.radius = 0.6423729514358025;

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
    msg.setTimeStamp(0.04131614729282773);
    msg.setSource(6741U);
    msg.setSourceEntity(51U);
    msg.setDestination(31860U);
    msg.setDestinationEntity(201U);
    msg.control_src = 5838U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 92U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9852900274555056;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.20037348767822527;
    tmp_tmp_msg_0_1.z_units = 161U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.39847240165005027;
    tmp_msg_0.lon = 0.9551885767411901;
    tmp_msg_0.radius = 0.43762911304049257;
    msg.reference.set(tmp_msg_0);
    msg.state = 240U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.1444016803343079);
    msg.setSource(26498U);
    msg.setSourceEntity(16U);
    msg.setDestination(48323U);
    msg.setDestinationEntity(98U);
    msg.control_src = 55188U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 248U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4794841869823432;
    tmp_tmp_msg_0_0.speed_units = 152U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.34745152480115116;
    tmp_tmp_msg_0_1.z_units = 83U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9642642784612036;
    tmp_msg_0.lon = 0.21690426434460386;
    tmp_msg_0.radius = 0.06578090634195488;
    msg.reference.set(tmp_msg_0);
    msg.state = 159U;
    msg.proximity = 181U;

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
    msg.setTimeStamp(0.07377900675029925);
    msg.setSource(29334U);
    msg.setSourceEntity(87U);
    msg.setDestination(10850U);
    msg.setDestinationEntity(10U);
    msg.control_src = 47986U;
    msg.control_ent = 166U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 85U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.482668376985279;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8394303494394669;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5548767651218467;
    tmp_msg_0.lon = 0.9308480140811735;
    tmp_msg_0.radius = 0.9339588495323831;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 211U;

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
    msg.setTimeStamp(0.22779608804137474);
    msg.setSource(11674U);
    msg.setSourceEntity(65U);
    msg.setDestination(27803U);
    msg.setDestinationEntity(64U);
    msg.ax_cmd = 0.8738192145689713;
    msg.ay_cmd = 0.8417654713202612;
    msg.az_cmd = 0.8507144291593585;
    msg.ax_des = 0.07765267372614415;
    msg.ay_des = 0.6329068157091919;
    msg.az_des = 0.34734865845967844;
    msg.virt_err_x = 0.08552926746221823;
    msg.virt_err_y = 0.12610357797157734;
    msg.virt_err_z = 0.9623559064486676;
    msg.surf_fdbk_x = 0.6591100338588679;
    msg.surf_fdbk_y = 0.7402058650809232;
    msg.surf_fdbk_z = 0.19362102626523847;
    msg.surf_unkn_x = 0.09189799119737674;
    msg.surf_unkn_y = 0.9236365939290683;
    msg.surf_unkn_z = 0.36874912649873104;
    msg.ss_x = 0.5562356279319568;
    msg.ss_y = 0.05888509117275231;
    msg.ss_z = 0.4348385916330001;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XLVFMAHIOHJXFTXTKZJYPTRQLGZTDTPRWTWYTMKZIKPHRXPFUOUCQEJCAHWZSWKGIBKLCEPNRGJWGQACWAHQYZLLUFKCLVKVYPITAFBXPNESRUBRNGFSUGIQZLFVSISYEDQZDBIFQCJNJFCMPCSIXODXGNZCOPUYAPDEMWZDUGGUEKAVAVXYQRWFTVVTOJHEYBBJQHRYYJNJEOSHMUBB");
    tmp_msg_0.dist = 0.8583053828661822;
    tmp_msg_0.err = 0.4417010005245904;
    tmp_msg_0.ctrl_imp = 0.7969209551367804;
    tmp_msg_0.rel_dir_x = 0.8318413630477619;
    tmp_msg_0.rel_dir_y = 0.2818407211516426;
    tmp_msg_0.rel_dir_z = 0.6582716810175007;
    tmp_msg_0.err_x = 0.7895636824938325;
    tmp_msg_0.err_y = 0.9558755401379826;
    tmp_msg_0.err_z = 0.9824992715984021;
    tmp_msg_0.rf_err_x = 0.6092415732910917;
    tmp_msg_0.rf_err_y = 0.040683795386928345;
    tmp_msg_0.rf_err_z = 0.40938833661252094;
    tmp_msg_0.rf_err_vx = 0.35029223463080505;
    tmp_msg_0.rf_err_vy = 0.03924085274308575;
    tmp_msg_0.rf_err_vz = 0.8986845518136245;
    tmp_msg_0.ss_x = 0.6784495823694998;
    tmp_msg_0.ss_y = 0.6454184074670534;
    tmp_msg_0.ss_z = 0.7495104552178589;
    tmp_msg_0.virt_err_x = 0.4354683845348202;
    tmp_msg_0.virt_err_y = 0.8017608527998307;
    tmp_msg_0.virt_err_z = 0.9309799596019536;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7555904256497221);
    msg.setSource(47510U);
    msg.setSourceEntity(97U);
    msg.setDestination(54255U);
    msg.setDestinationEntity(42U);
    msg.ax_cmd = 0.6365833832274089;
    msg.ay_cmd = 0.4954463782614066;
    msg.az_cmd = 0.12050194209295384;
    msg.ax_des = 0.25893945020320774;
    msg.ay_des = 0.47776515977842904;
    msg.az_des = 0.8052491584722901;
    msg.virt_err_x = 0.17684863572810972;
    msg.virt_err_y = 0.3711822434594165;
    msg.virt_err_z = 0.8455657297551235;
    msg.surf_fdbk_x = 0.8373049371105997;
    msg.surf_fdbk_y = 0.24101527791177912;
    msg.surf_fdbk_z = 0.5433105749705891;
    msg.surf_unkn_x = 0.2648954232630858;
    msg.surf_unkn_y = 0.9428398746816211;
    msg.surf_unkn_z = 0.9358455930785157;
    msg.ss_x = 0.2617524833561986;
    msg.ss_y = 0.3021689730887296;
    msg.ss_z = 0.35235770229428487;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ECBELVWYGBVLMKCOJHYBDZPYNFSVCZWRZKEDZTIUDKQLHQYVBAZFXRYTXMNBUOGNOJKGTXARHLVPWGFTAWUTYCIOUSRNMJPTXMNOCGYGDEDDLSCZNBQYDEYJJBSHNAOKSZGZUMXWJGAILDHRPXWJBSOHCBFPTKVVEUJNPSFHFDZVFRROKLQH");
    tmp_msg_0.dist = 0.7787656803492474;
    tmp_msg_0.err = 0.3820930630848105;
    tmp_msg_0.ctrl_imp = 0.7469031846978961;
    tmp_msg_0.rel_dir_x = 0.8360451467269918;
    tmp_msg_0.rel_dir_y = 0.593509445822552;
    tmp_msg_0.rel_dir_z = 0.4521576349988762;
    tmp_msg_0.err_x = 0.10813747070109536;
    tmp_msg_0.err_y = 0.5580950033329473;
    tmp_msg_0.err_z = 0.8051541891516695;
    tmp_msg_0.rf_err_x = 0.7312765228865107;
    tmp_msg_0.rf_err_y = 0.09813971972386026;
    tmp_msg_0.rf_err_z = 0.8709008025171373;
    tmp_msg_0.rf_err_vx = 0.31467739206098333;
    tmp_msg_0.rf_err_vy = 0.6257153507161206;
    tmp_msg_0.rf_err_vz = 0.4893819390754991;
    tmp_msg_0.ss_x = 0.18015357806862198;
    tmp_msg_0.ss_y = 0.5641521587118644;
    tmp_msg_0.ss_z = 0.054265849545765854;
    tmp_msg_0.virt_err_x = 0.13883885576380395;
    tmp_msg_0.virt_err_y = 0.3681820998129959;
    tmp_msg_0.virt_err_z = 0.4262434444342139;
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
    msg.setTimeStamp(0.5104499677269762);
    msg.setSource(62502U);
    msg.setSourceEntity(37U);
    msg.setDestination(34679U);
    msg.setDestinationEntity(162U);
    msg.ax_cmd = 0.20968941054943602;
    msg.ay_cmd = 0.7087722344795614;
    msg.az_cmd = 0.011630024362391467;
    msg.ax_des = 0.5420188986090206;
    msg.ay_des = 0.5457723232229152;
    msg.az_des = 0.3077929619377465;
    msg.virt_err_x = 0.2817638182103045;
    msg.virt_err_y = 0.23465804302049298;
    msg.virt_err_z = 0.804346408541962;
    msg.surf_fdbk_x = 0.8846276426397545;
    msg.surf_fdbk_y = 0.663874285145866;
    msg.surf_fdbk_z = 0.7051414875368498;
    msg.surf_unkn_x = 0.07911775172211055;
    msg.surf_unkn_y = 0.8915068260010987;
    msg.surf_unkn_z = 0.847492420400155;
    msg.ss_x = 0.11151517573445102;
    msg.ss_y = 0.5979534833361463;
    msg.ss_z = 0.8379497746111713;

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
    msg.setTimeStamp(0.7505360492940543);
    msg.setSource(38082U);
    msg.setSourceEntity(96U);
    msg.setDestination(13165U);
    msg.setDestinationEntity(91U);
    msg.s_id.assign("GNVZURMEFVZCFBEWRIAEJKRTYSEWUIOKFRPOGPWTZSJYKUYSXOFLCWJYVUMMFJTDZRLLCNXMSMHIXPLFJQUPDLHZVVGYCBENNIO");
    msg.dist = 0.44572107364741775;
    msg.err = 0.28264329582950953;
    msg.ctrl_imp = 0.8284049875609195;
    msg.rel_dir_x = 0.9456970911672198;
    msg.rel_dir_y = 0.8533447590429102;
    msg.rel_dir_z = 0.29997784026519614;
    msg.err_x = 0.4523184662426244;
    msg.err_y = 0.3282246335277308;
    msg.err_z = 0.9672956336908914;
    msg.rf_err_x = 0.030812226239544938;
    msg.rf_err_y = 0.09982018898571954;
    msg.rf_err_z = 0.4012800874284653;
    msg.rf_err_vx = 0.6825916660556401;
    msg.rf_err_vy = 0.06836902565726433;
    msg.rf_err_vz = 0.9093140070317801;
    msg.ss_x = 0.5810545296593526;
    msg.ss_y = 0.008255680142693844;
    msg.ss_z = 0.36917522231365496;
    msg.virt_err_x = 0.05986197908868085;
    msg.virt_err_y = 0.1444556348630488;
    msg.virt_err_z = 0.9455562838737923;

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
    msg.setTimeStamp(0.3848053353177078);
    msg.setSource(53674U);
    msg.setSourceEntity(70U);
    msg.setDestination(15292U);
    msg.setDestinationEntity(105U);
    msg.s_id.assign("IQQUUHEIZFYPDQNXZGTPKZVPYMTHDAVOKOIXZYBTPHSUZKEJELFGASGYGXKTPRBVACDORMSTPXUZRJIZGEARCYRLWVMGNDJWETTHPUXAK");
    msg.dist = 0.5716354125542792;
    msg.err = 0.19796056791031358;
    msg.ctrl_imp = 0.6431351494716517;
    msg.rel_dir_x = 0.13238470860310791;
    msg.rel_dir_y = 0.46511416863116595;
    msg.rel_dir_z = 0.41006981306919177;
    msg.err_x = 0.8860396025971417;
    msg.err_y = 0.5329993480240589;
    msg.err_z = 0.09128784347462993;
    msg.rf_err_x = 0.7337399864209984;
    msg.rf_err_y = 0.5588753946877573;
    msg.rf_err_z = 0.0384451667521879;
    msg.rf_err_vx = 0.023039906476552074;
    msg.rf_err_vy = 0.1051208281986824;
    msg.rf_err_vz = 0.2357777721746016;
    msg.ss_x = 0.6195010297359416;
    msg.ss_y = 0.9619548070869367;
    msg.ss_z = 0.18043688379151857;
    msg.virt_err_x = 0.4031838303481121;
    msg.virt_err_y = 0.4609011442299302;
    msg.virt_err_z = 0.27328598307493157;

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
    msg.setTimeStamp(0.7307126004242954);
    msg.setSource(9091U);
    msg.setSourceEntity(110U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(175U);
    msg.s_id.assign("PBIFACYTFJGTNDCDDDWNYENMVGFUXKMLEXPAUZILIWLRJBKVRMOW");
    msg.dist = 0.7636040241598446;
    msg.err = 0.6320754771162592;
    msg.ctrl_imp = 0.7151266625719832;
    msg.rel_dir_x = 0.31142201239925416;
    msg.rel_dir_y = 0.36317206432498395;
    msg.rel_dir_z = 0.7877109876917913;
    msg.err_x = 0.21116951653984528;
    msg.err_y = 0.4095015761733035;
    msg.err_z = 0.7082546583211141;
    msg.rf_err_x = 0.5147296392997286;
    msg.rf_err_y = 0.31037360918196977;
    msg.rf_err_z = 0.7103769933524295;
    msg.rf_err_vx = 0.641065362184581;
    msg.rf_err_vy = 0.7198405294161062;
    msg.rf_err_vz = 0.3026457077756375;
    msg.ss_x = 0.7936741124104044;
    msg.ss_y = 0.57307880319379;
    msg.ss_z = 0.7701511443277895;
    msg.virt_err_x = 0.7168065977788793;
    msg.virt_err_y = 0.491844192696948;
    msg.virt_err_z = 0.938063245297655;

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
    msg.setTimeStamp(0.04758008362436028);
    msg.setSource(38346U);
    msg.setSourceEntity(187U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(35U);
    msg.timeout = 53368U;
    msg.rpm = 0.9692171888629713;
    msg.direction = 191U;
    msg.custom.assign("XUVHTBVNVCQPYYPAVDXZJTVODLOGHTSWRJUQJXCKKPBDRIXCQYDEQRVLBHIYRZBRVYYPPZZEJDGJJGHNSKWBCUFONTSKYFKFQLJMGFPZTEPXSZRXLHGNCMKZWGKYMWUSMOTEQWBAOSYLEIFXBFDKGNXEX");

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
    msg.setTimeStamp(0.09530237057597524);
    msg.setSource(24312U);
    msg.setSourceEntity(239U);
    msg.setDestination(34445U);
    msg.setDestinationEntity(179U);
    msg.timeout = 57692U;
    msg.rpm = 0.272460675635394;
    msg.direction = 133U;
    msg.custom.assign("TSOABVXFSYXQLDTWYRZENDMWUTJLQNPAWQCWBIUCCKLSTHWECFAPNUYPWNSLXF");

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
    msg.setTimeStamp(0.975297476568862);
    msg.setSource(60463U);
    msg.setSourceEntity(201U);
    msg.setDestination(50734U);
    msg.setDestinationEntity(150U);
    msg.timeout = 55243U;
    msg.rpm = 0.014308584745957753;
    msg.direction = 225U;
    msg.custom.assign("CPDNZVJJGRSWEFHQBKLYCQNKAUMTPAVFQFTRCLPQKANIXKSRWEYIZMLJITDYEOLHSFKTDGIMSGGXUXMYUCXDSDUSCXZVRLQVGNHHIEPJPXSUWZWZWORVOJBFTEVOBPGDZHQBPWMGGIWYMJILLWABOYXFUMQMZOQTXVCRINDGEYXUHUPSXPEZHAABBNSJE");

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
    msg.setTimeStamp(0.7233389124042218);
    msg.setSource(42186U);
    msg.setSourceEntity(247U);
    msg.setDestination(7392U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("NXMSDPDTMRCQPSKJTBDNHITSZBHFRYAGQJCFAVUABNTHWYSFFVXJGNGWNSQIQHZUCIFQQKTEPIKKYUCLUOOJPOMIHSLOFMVCBPWFVXGPZIQORYGKWIOMEMETBVQLLNKEDMAROXZGZSZCXHYTDREYUWXSRJJLVXNNVMKDIUUOQPUEEDGHULAXBBAPBSHPTXEABWFRYGCBTHCRVXLVYZGVZZHJQDOMLTAOSWKKJEMFAIIYFRG");
    msg.type = 152U;
    msg.op = 101U;
    msg.group_name.assign("BOMQPHKVLPAHQVWJZVUUBMZNLJQXSNMOHVDMBBPNWFJFXRUW");
    msg.plan_id.assign("KQDWNJAUAKKF");
    msg.description.assign("NRMNAROFLQVFBITRXTQMXYKEFHGHADNCZZBZAQHOBXNUGGRKQAYIPLXVLEFFTXIAUJCKEGKVWXSERAOCAFWNHGMPSMGUTVNBLURJYQZVDSBDDCQCMAPCRQTTWOSOWSPVBEDYIXBZOFDTPDHPFJOBEDAECVSJINUPTLHKN");
    msg.reference_frame = 44U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52273U;
    tmp_msg_0.off_x = 0.2038136905555078;
    tmp_msg_0.off_y = 0.9861938283473156;
    tmp_msg_0.off_z = 0.4792235834163985;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5096952494652517;
    msg.leader_speed_min = 0.9393953330431878;
    msg.leader_speed_max = 0.7487248018073194;
    msg.leader_alt_min = 0.07399061390753736;
    msg.leader_alt_max = 0.7183145199723477;
    msg.pos_sim_err_lim = 0.07974909188640578;
    msg.pos_sim_err_wrn = 0.45031891931586;
    msg.pos_sim_err_timeout = 26352U;
    msg.converg_max = 0.07761053410947327;
    msg.converg_timeout = 4825U;
    msg.comms_timeout = 24942U;
    msg.turb_lim = 0.780864750574279;
    msg.custom.assign("ASOZSHWOJURNPNFCMIJYXGDULEDOICRBJFSLTGGEPIKTHTEHAXXFVEZXBRQSWMBIDSJWXCXHYYBRSNWPQGBPKDSKZWUREOIUARBFSUVXYSCKWIZEIZCTKMNOEZNKAKQYGL");

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
    msg.setTimeStamp(0.4986472804700828);
    msg.setSource(61910U);
    msg.setSourceEntity(198U);
    msg.setDestination(32255U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("MHRRSUNDOVUILDQJIXZFOLXUQKYDQTVAGQRCCMJWLUEJPAVAAIULZUKEDIYOQOV");
    msg.type = 96U;
    msg.op = 23U;
    msg.group_name.assign("KCLXJSCUQXEEHGUTVMIFSSDVMYGVPVMTDRXNYJBLCUBTLAPCGPKLPYDNYQAAOYRHFDPHYQZPLEIKXPQEQHZXKGJJUQGZWKUQDADZSJSUNGXOLTRGHFBZORWGNFRDOSWPLQJCRAWAFOHKSKTCHVEMBWSYOJJZRXKLSABINUFWEJQCYNVFBWCNXLMRVFQNEZEDTHFVOIOWYBBZZIGHNBSIOYUPFTIKURMGMUITAAELMWDWTHNPDXMVXAECBK");
    msg.plan_id.assign("KCGUGBTFXXCLYRDDUIYSUCFENTSEZFWCHHSWHDRFYFEJHBOBPNMYQNZQTVRPXFNLJJZPOVKLDZWAHXCKPSWZWUYRBDZYVARQSAGMTNGVSIIQRJLRXAKUQNWQBZBWDPCOCLDHAFVWKXHPLIUJPRRNTPSJJMQOLOGIXAOJZ");
    msg.description.assign("ZTZQCJBIKWYTTCFCYVCVULMHZBDPSMKXHSXYSED");
    msg.reference_frame = 183U;
    msg.leader_bank_lim = 0.8363913702600994;
    msg.leader_speed_min = 0.5757850156145827;
    msg.leader_speed_max = 0.024646835608056805;
    msg.leader_alt_min = 0.19270395922398553;
    msg.leader_alt_max = 0.17435285013528556;
    msg.pos_sim_err_lim = 0.545974605467591;
    msg.pos_sim_err_wrn = 0.6340878494529066;
    msg.pos_sim_err_timeout = 12791U;
    msg.converg_max = 0.22587392944488904;
    msg.converg_timeout = 20821U;
    msg.comms_timeout = 31457U;
    msg.turb_lim = 0.9683045006083186;
    msg.custom.assign("LIPLUYGTWTQTJIXHVEXHCMUFMHBGBOJUZKESTREUAKVDRLUDESPHKHBNGKYNBFDMZWXJMUFPBVZDBRNPQUKEIDFKLUCAIDWHHFBTOTJRKNMSBZFF");

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
    msg.setTimeStamp(0.8138706508037977);
    msg.setSource(40607U);
    msg.setSourceEntity(68U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("FJEKCAJJGPNNMTNOROXNSFJYDOLZVKTHWKJDPDLNEGQPTTHMDZRXIGUSMFDWEVVGWFSBFINNCMCXCWBWQURPELPCNSRYYWUABSPWHEUKMIFJKOHKXTZMEZVEATXNLRCLSGJQLRNTDVSJGXEHPARJWXXIHCLUURZOOTAWBVUBFAUYKCAAZADWSEDVLHOIQZBGDKOUQMYQHKLRCMMADBQZB");
    msg.type = 13U;
    msg.op = 199U;
    msg.group_name.assign("TUCDHNKJUSMMWNTKBLXSYGUMVHTIOQJWCBDVTNNQBTLBAMWVGQREAQBFSMCBZKAJNQPHIBFRPZPXDTISZELOZRRDVBCZEDYZEFMKRYZXACLKNJHAGANCJJFPJOSSVXDYPQGOXMUFGHUYGCS");
    msg.plan_id.assign("YXUQCQOMYXMLDUROVVMIMZTZTGFEMFKXNPVTVREDVKLCUAPVHKHBBNXRGLOCBQYMOCRSRFYDMGSTGWAYHWSZJHEDAFHDBGKJVSWQFLQXYEIKOLCKYJUAEZOKUKFURTUJLAPDITXWMLFPGZIWHKNRGEQWQECNBYPCEONTBJSFAKTLFGEOZTIRWQXIJ");
    msg.description.assign("GQWPMIYXTCICAWUBMYWPLEIZGQMSEMGMOUMUUERECPBFXOBEORQLKQOICVIFKCINKYWAPI");
    msg.reference_frame = 4U;
    msg.leader_bank_lim = 0.8979756695740242;
    msg.leader_speed_min = 0.07839268035433855;
    msg.leader_speed_max = 0.8543531106217402;
    msg.leader_alt_min = 0.7334840775442644;
    msg.leader_alt_max = 0.2726462555031941;
    msg.pos_sim_err_lim = 0.5607605263720045;
    msg.pos_sim_err_wrn = 0.7761884944203186;
    msg.pos_sim_err_timeout = 34842U;
    msg.converg_max = 0.24588366149669372;
    msg.converg_timeout = 16435U;
    msg.comms_timeout = 27341U;
    msg.turb_lim = 0.7594592059615183;
    msg.custom.assign("TTJHLMSCYFOHOLCDQGDAWTTNIGCLNFDBSMBEKAEQMHPYSWUDIECEDNSJLZXIEUABPERKSYEJEVJXANWPBSIXQAQEGRHMHJLWHZVRWXTKPOBUUIZINGZQVRDOXPNBYTWCMFYUSXHMXGKVKBOSHCFKBAVQXFIYGUUXMTTM");

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
    msg.setTimeStamp(0.3710387618495914);
    msg.setSource(59514U);
    msg.setSourceEntity(132U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(33U);
    msg.op_mode = 205U;
    msg.error_count = 2U;
    msg.error_ents.assign("QDYVEVAOHMOCHDZJHYJUYCGMGFKKVIDSDYGVAAPLTDWNNBXEFAKLPWPINUOYDTKPZOXGKDZRTOQMLZQMONGFMHJXGVQYWZBSFMMGXBLYWUKCQKCVNBILRSELTHNEZUPZKPBSEZJBQIJOUCBXLAWRRJNZJLPXYQRVXIXHSOBESUQDSCGIHSFFBKUGUT");
    msg.maneuver_type = 39880U;
    msg.maneuver_stime = 0.33150070671746634;
    msg.maneuver_eta = 9795U;
    msg.control_loops = 1904736863U;
    msg.flags = 86U;
    msg.last_error.assign("LTNRQGUWSMNAWOZZHDATOSUKUQFVBBFHKZXXOTTBLXYZNCDCEJTZJPRLWXKVGEEDWLCXZCXZJTYIJMRQAEWQVGMMJCDFUEBGJHAEOANDFGYSUSXMRYBJFGPHPOIJDWSIILVISUYIGGDJGTQSMKSJCMGCHDHNOPFURKHOHCPIRPBVIAXCBOKLZNYNAATQOUNYXFFNXWEEIDPYTNPRWCWLFVTAMAPVQYMDISLRQRFHBKPV");
    msg.last_error_time = 0.4191736920188067;

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
    msg.setTimeStamp(0.6128914990203224);
    msg.setSource(41112U);
    msg.setSourceEntity(134U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 42U;
    msg.error_count = 230U;
    msg.error_ents.assign("AMXSGYGCPBFHQRZLSUDPUWVHSONSXYOIYPLJZXMLTIRABBXWVZDWCDYJGPCQGUJREKYGILNJGSQRZKDAAIYFNFVQHNPNTFTXWOWPPOWJXJDHCROOIGTMJAIEMNNMEKTSOLMFYFHVZKJXXENZUDZLPBBOYKAPDXLFHEEAQBTCQVRJCQMBAEBKVRGKFPMBWVOOCCHRZHEUVWLF");
    msg.maneuver_type = 62638U;
    msg.maneuver_stime = 0.38809888083703104;
    msg.maneuver_eta = 44783U;
    msg.control_loops = 166652012U;
    msg.flags = 64U;
    msg.last_error.assign("IVDFDNKEMZNAPIJOEZZZXZIVVNQSDLETUJXUXRIILGMTMCWHAVMWNBQGGCCTNGOCSQBVZETBXCWULYRJBOKTALSKHPMHFREUZHJPYYQRWGPOKQLCL");
    msg.last_error_time = 0.7808618404836988;

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
    msg.setTimeStamp(0.7778914119584726);
    msg.setSource(12383U);
    msg.setSourceEntity(248U);
    msg.setDestination(19626U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 190U;
    msg.error_count = 90U;
    msg.error_ents.assign("QNWIMBWRHQAXVCFDXEGFDHDIESFMQCRNRYKVHUUTQJSIOSEXRUWXHSPNAMQUCCNTSNMXZHOVHTIAFDPHRVTRZEZLPUMIPHXVKNGRWDRPVYVBGSEGLDCCFZWAZADBUUSELJWWMYJTZNNYKOXOTOFDGQHGMBSGWFXJCJPCEMYLIZIETPWJKKKZXYOKVOVIJMNXASOLGPADQMLPOZBQBAFLYGYRWCSFPVJYL");
    msg.maneuver_type = 9815U;
    msg.maneuver_stime = 0.004719968354025217;
    msg.maneuver_eta = 13807U;
    msg.control_loops = 2580507093U;
    msg.flags = 61U;
    msg.last_error.assign("HEIAADWBLIQQGIU");
    msg.last_error_time = 0.4260306474158716;

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
    msg.setTimeStamp(0.663209039050095);
    msg.setSource(63360U);
    msg.setSourceEntity(96U);
    msg.setDestination(4741U);
    msg.setDestinationEntity(157U);
    msg.type = 135U;
    msg.request_id = 61000U;
    msg.command = 5U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9903841307600132;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 35933U;
    tmp_msg_0.custom.assign("VLYPDBUDROHRIMJKCANHJDUJIILMVBKLLYWXOKQZSNMPMILWSBQW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32173U;
    msg.info.assign("IRNSHFREOYMVOQNAVJCDISVBQFGUGYISFAWSIQTTHNIPBMBRWBZMGGDZFHXCGTOYDBAKZJSLQHUVFXTEJOASCREZKPLVEAMPZPJDUXOWXCHXFAOFONYPNKDKQJCOEMAJRLIZSYGFDWNMFJJPAQ");

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
    msg.setTimeStamp(0.1561951350407239);
    msg.setSource(18106U);
    msg.setSourceEntity(77U);
    msg.setDestination(865U);
    msg.setDestinationEntity(176U);
    msg.type = 246U;
    msg.request_id = 55101U;
    msg.command = 162U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("AJHPXUPZVYOSYHVWQZJCTIEESCMLYBEGKHQWXSXVAYCASXETANXMKRPYMFWDZMXEMDUWOIYKTGZAMUNMLPKVOJDFCKOBLGPKDDBDOLITBOVAJQWQAQPZNNVIFYESF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32180U;
    msg.info.assign("MZEJCOEAUPOSRZTESUZGRNTYXBVYZEOVMLGPZHVJDZSQJKHDJTSXVQMEKHPDBCGXGCBIFYQEDTPWAFQSTRNBOCEGQCNZDNRNCMWKFSUXJLAFYYKNTEMRQOXLVWIIENFLQUAHRCVPHBTNLHNFGFJSAWBMDMDKKUQMIOKDJIMFYCGPLZRQAWBSUZVGYWMLRXUYPIXFAVBUWSALJPKUHYNXSOBV");

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
    msg.setTimeStamp(0.29779122905977917);
    msg.setSource(35976U);
    msg.setSourceEntity(160U);
    msg.setDestination(41213U);
    msg.setDestinationEntity(145U);
    msg.type = 67U;
    msg.request_id = 65155U;
    msg.command = 193U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 46114U;
    tmp_msg_0.name.assign("ROZTBUKPMZZWRBWIEVBYVAWDPUOORLJQGMCAMAZDLXJKYBNWLYXLQEBSCFHOV");
    tmp_msg_0.custom.assign("ONLSRRNOKWRJNYDHMISRQPAAWFBPNHVOMPZXYJBJCDKLIUGPDHXEZYEZBDVCCAFMFRVUIYHRLUTJUIKOTKWMNRWFCZNBAENSHSJJYKQLEKTCSDXFIUVYQCMAATMTLLLFVEWUDPWUTOGZQVKZYMSUDIGHXWNFKTKPQFXVATDIXPWIRGBBSXMZOTIRBFNAHUEYLEQPLCEOD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59677U;
    msg.info.assign("MBUKCAWXZWISUTYKUNEKTKXJEGZYJASTMLVJWXZOEYINCUCXJSYYYZGEBFWLAEOISEGFVLDIXPDAPZDQVBATIBMXURCMPCLHTMOFIQNQKHVOZXLORYZBMYQWROMQYSLAUBNNCGSLSQXPNHUBFHSHFQBWQJIHGGTAPDFFRBKOFKHQTCTNAJRCLPPMVPHRVYRJIPEUXUTDEAMGJJDVJHQNZSOEOTAVVCKW");

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
    msg.setTimeStamp(0.6414948914222027);
    msg.setSource(13109U);
    msg.setSourceEntity(223U);
    msg.setDestination(8833U);
    msg.setDestinationEntity(139U);
    msg.command = 198U;
    msg.entities.assign("DRHGOCLYUYSXPSNSYBZCNKEJHRFAMIBJBCCPIWSS");

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
    msg.setTimeStamp(0.3051198118381707);
    msg.setSource(54332U);
    msg.setSourceEntity(209U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(210U);
    msg.command = 70U;
    msg.entities.assign("MBBJZQGMICQLJDOYRUWTWGHVPNNNXGQVYDBHRGRDWUKQVUBAJAAONFFUZPGLTYKRTCFPAHBFWSMLEHERYWAVBVYBPSCGTCVCAFUNYLNKMNSTZVOFAFFVSQILLHOMIUOXMCXZLJEXMCSUOUBXTTSMWPTXWHDPCDRQNIVAPSJVAIMZKMTUDLGXSLNUTIYPCRYRPXDNHDXKGHEZXWOEEJGQIQDAKFWHBQJOSYRGJJKOZEZKPQZISBIJDEOZEY");

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
    msg.setTimeStamp(0.8473786365227222);
    msg.setSource(20521U);
    msg.setSourceEntity(79U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(87U);
    msg.command = 5U;
    msg.entities.assign("TEADGLGJYCQYYZNVFGRLKXZRINIKKUPOQASWIMUYXGJQQXZGFRFTSVSLMQMCIPTDFWZUQUZDHYRDVSTOLOCKOHNXCRBZCSGUCNUVJKMWEYRVFFVTKZNPNLEZACIDYLEPPBHDBWECSXAMNVZPIALDBXFXFNJJPEYPSTTIUACDOQEWBKONXEQRWJRFTNELFXEHPHVWIARKAIBMXHPOWLYGQCIBBMWY");

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
    msg.setTimeStamp(0.24577830794300803);
    msg.setSource(4515U);
    msg.setSourceEntity(241U);
    msg.setDestination(14456U);
    msg.setDestinationEntity(42U);
    msg.mcount = 235U;
    msg.mnames.assign("EORRHBNBFLXIDLMRRHJWQZTVMJOADBLMJMRUDSAQJYITIPUFHIMSCTXSLGJUOZDEUYWWYESKFCPYVVQXMLFUZAAKJZEALEMUXQKCQJDGAXZSGHQAWIVHYYXKTYRRMBOIJWSUSGCNPKBFCFNXOVGODNMOBRBETOWDVXBGRCUBQZDDTLJEFIKOIQUOPVLGWHVNWKZNHHNHADPUIEASGCZPTKPAVCZBV");
    msg.ecount = 106U;
    msg.enames.assign("BRDIVIBRSIAFEJJKDOEYTCOVREOAXUDPZTMNBMDXSUJVNMUZOCGTRXNJIDZTUQFAFKVEJELQPYPYFEPMWEVGNCNELKXOVQYCZYC");
    msg.ccount = 80U;
    msg.cnames.assign("FUMGCIRCBFOIFUGQADMJKYNHIUDMTEOREPRYXSFXLNTTSBZTMFHHOWYVWZSBXPQOBQVFMGQYGAHXGXRAQKLZLDECOFSIHFWIUWEARTTEDNBHZWVZURZNJHVFG");
    msg.last_error.assign("XUWODDWNINQWTRPOIWJRWGLCNQBEUEJNYJIVGOQCJQLLXMZFHGCDSIIOAJKJDVITDDRKFDYRSFYHXFOLUBBZUNMFZTUTXKHHABWMBPRFQRDSM");
    msg.last_error_time = 0.3463154164787592;

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
    msg.setTimeStamp(0.03298948628612297);
    msg.setSource(39769U);
    msg.setSourceEntity(42U);
    msg.setDestination(1292U);
    msg.setDestinationEntity(122U);
    msg.mcount = 31U;
    msg.mnames.assign("PIMWRAJBDSTOCCHLIAGMYETWYZLFLPHOKGSNCVANCFBDAQUXIOKTJVQVUXGRRBRPNGHBYMZTQNNVRQIUOIWGNVFMAUQLQSGCEZBFUXATVHPBTJLPYZBYNRJVSSOEWFFLCJJEBKTMSPLZYPKSYJDQHGWZCNEXEXIXIDTPMRULVADUYWKNQEIEMKUDM");
    msg.ecount = 184U;
    msg.enames.assign("AJHNWBQAPMVASMJQVSNTSTRCYEYSOSFVWADZGDKZOPIUKGPLPVJDYAUFYIFKZXNPMTZDNOXIUBBERJCLEGFCCOJEHZKVHPXSKRLOQELKEFICQCAZTBLMLPWPJYMRRMGXGPTUDPAYXDNACXDU");
    msg.ccount = 33U;
    msg.cnames.assign("JPKNNOSJZYXKKDINJYRSTEPVYQRQVBUTXQHHZTCKDKDWICZMSZYPNFZCUTBRRIZCRNWXAJNPGRMBFSDZHYLQZLCNIDMLWKTEVQWSHFNUBSCMVCTHAVOLVFMAJKUNOMLYXWIYDGEFOGXEHOHRABCWITAJXIBXTFPLTPCUDEPGUWFTVKKVQAGRSUGARIYSFQELZDAIQHAJBFDXLGXUEMGKUAOZLDJPCOU");
    msg.last_error.assign("RFPHBWICRQAYVWHCAMXSOPEYTSGXOGFNLDTFBNNDROPWDBGGMMWJCBITYKMFDUWAEOFTQYEHISTOAPCVIGIUTCFQCRSXJUQJKZIZNMOLXEKNZQKPZEZOXRUAAWXNWJRVMVMSXINTE");
    msg.last_error_time = 0.9922996770936325;

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
    msg.setTimeStamp(0.9642533488203028);
    msg.setSource(26576U);
    msg.setSourceEntity(228U);
    msg.setDestination(5521U);
    msg.setDestinationEntity(78U);
    msg.mcount = 29U;
    msg.mnames.assign("FDDWJTHJWCEFSZBOTQXJNLYLHLIQGWJGDUYMUTYIZGSEGPIJNKMATTLAMOISNPZCPFVBOFMQUDIDACRUHYYNVXVBEKDUARQLVGBKUYYZZMYHXZHHTSOTPKXAFXDWAWRGYVLCYTLHVCNBEQNGNKJFIROMECSWNAPCXVQOATUBONTAKREFR");
    msg.ecount = 163U;
    msg.enames.assign("XGTYCPLLFFOWUTXWQQEJGETHVWNZTIFPTLJYAGQWZOAOOJBRRTVPEFQEYJODXHJXRHSXOPBKCCSPWJACSVNGBXKYYSAINLROZUTQFFDQIRKEBYIIURVSDAXJWHCOYDHHRJVBLKYZNCKGZJ");
    msg.ccount = 157U;
    msg.cnames.assign("PDAYUPOQOBKQUZXEXPTSTQZOUOTRGSLZMMRJJWBMNUDIYDOVGWMFYJBYJGNFTUATQLOQLVNNOJOWTABYCABGYCAXLJPHCSRRKDHXVKOUANSITGWQVNRCKZEKSMXHIFEDSXNGRIVHZEILARVKUBTSWBWZLELJSCMFHDPCYFJMULYBHQTUIHYDOVIGXDQCPYHLJNFSAELZCERPWKAXVSCBPFHPCIF");
    msg.last_error.assign("YIBCJSOYPPHGEFRXLRWENNYCEZ");
    msg.last_error_time = 0.641148658365248;

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
    msg.setTimeStamp(0.6939654635500024);
    msg.setSource(16285U);
    msg.setSourceEntity(79U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(139U);
    msg.mask = 179U;
    msg.max_depth = 0.2494134984537476;
    msg.min_altitude = 0.9454266473926786;
    msg.max_altitude = 0.9794629519045883;
    msg.min_speed = 0.9145545129140659;
    msg.max_speed = 0.5587597760845593;
    msg.max_vrate = 0.056256102105973094;
    msg.lat = 0.2162742401507015;
    msg.lon = 0.5443855868268819;
    msg.orientation = 0.13056599621448395;
    msg.width = 0.5005877032345525;
    msg.length = 0.4239041732675839;

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
    msg.setTimeStamp(0.7097271844231585);
    msg.setSource(37179U);
    msg.setSourceEntity(31U);
    msg.setDestination(9269U);
    msg.setDestinationEntity(137U);
    msg.mask = 13U;
    msg.max_depth = 0.6587806730668652;
    msg.min_altitude = 0.8759927490264147;
    msg.max_altitude = 0.9921441698784755;
    msg.min_speed = 0.31928891808287085;
    msg.max_speed = 0.7981919204807082;
    msg.max_vrate = 0.8579383255214857;
    msg.lat = 0.4828265985638611;
    msg.lon = 0.11026269387268384;
    msg.orientation = 0.5343610441130797;
    msg.width = 0.010989114272242473;
    msg.length = 0.30682989474184896;

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
    msg.setTimeStamp(0.8337819710185197);
    msg.setSource(8441U);
    msg.setSourceEntity(159U);
    msg.setDestination(24997U);
    msg.setDestinationEntity(80U);
    msg.mask = 71U;
    msg.max_depth = 0.2738470297677622;
    msg.min_altitude = 0.28296342466471935;
    msg.max_altitude = 0.3679117290481946;
    msg.min_speed = 0.08831460672471692;
    msg.max_speed = 0.3303832290915981;
    msg.max_vrate = 0.09392274167680359;
    msg.lat = 0.5106884687391654;
    msg.lon = 0.5419652819252233;
    msg.orientation = 0.4191790827152643;
    msg.width = 0.26077847650560504;
    msg.length = 0.9312394229675518;

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
    msg.setTimeStamp(0.17267058185934858);
    msg.setSource(61719U);
    msg.setSourceEntity(121U);
    msg.setDestination(31827U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.4088601440847154);
    msg.setSource(36498U);
    msg.setSourceEntity(178U);
    msg.setDestination(51903U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.5944892841832305);
    msg.setSource(29858U);
    msg.setSourceEntity(19U);
    msg.setDestination(61407U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.3804878726092321);
    msg.setSource(61325U);
    msg.setSourceEntity(173U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(165U);
    msg.duration = 21576U;

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
    msg.setTimeStamp(0.8664209329155639);
    msg.setSource(16406U);
    msg.setSourceEntity(55U);
    msg.setDestination(29939U);
    msg.setDestinationEntity(115U);
    msg.duration = 43913U;

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
    msg.setTimeStamp(0.9071783625026103);
    msg.setSource(44530U);
    msg.setSourceEntity(186U);
    msg.setDestination(28072U);
    msg.setDestinationEntity(31U);
    msg.duration = 20491U;

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
    msg.setTimeStamp(0.7706081473735897);
    msg.setSource(59476U);
    msg.setSourceEntity(43U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(161U);
    msg.enable = 189U;
    msg.mask = 3957920970U;
    msg.scope_ref = 472347351U;

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
    msg.setTimeStamp(0.84973201266052);
    msg.setSource(16878U);
    msg.setSourceEntity(247U);
    msg.setDestination(7519U);
    msg.setDestinationEntity(80U);
    msg.enable = 183U;
    msg.mask = 195649050U;
    msg.scope_ref = 1312334545U;

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
    msg.setTimeStamp(0.6470014154025178);
    msg.setSource(25516U);
    msg.setSourceEntity(206U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(237U);
    msg.enable = 249U;
    msg.mask = 3916606467U;
    msg.scope_ref = 4023251592U;

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
    msg.setTimeStamp(0.006583596748308551);
    msg.setSource(5254U);
    msg.setSourceEntity(8U);
    msg.setDestination(52298U);
    msg.setDestinationEntity(97U);
    msg.medium = 75U;

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
    msg.setTimeStamp(0.1272150758026367);
    msg.setSource(47620U);
    msg.setSourceEntity(36U);
    msg.setDestination(22701U);
    msg.setDestinationEntity(92U);
    msg.medium = 12U;

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
    msg.setTimeStamp(0.675486114020146);
    msg.setSource(34832U);
    msg.setSourceEntity(160U);
    msg.setDestination(21013U);
    msg.setDestinationEntity(80U);
    msg.medium = 30U;

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
    msg.setTimeStamp(0.49491719848521964);
    msg.setSource(65229U);
    msg.setSourceEntity(79U);
    msg.setDestination(45405U);
    msg.setDestinationEntity(28U);
    msg.value = 0.09231861510993333;
    msg.type = 101U;

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
    msg.setTimeStamp(0.0741839038402603);
    msg.setSource(51358U);
    msg.setSourceEntity(5U);
    msg.setDestination(22935U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6296219355638824;
    msg.type = 78U;

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
    msg.setTimeStamp(0.43200680001855307);
    msg.setSource(63685U);
    msg.setSourceEntity(140U);
    msg.setDestination(6646U);
    msg.setDestinationEntity(199U);
    msg.value = 0.544277328882373;
    msg.type = 6U;

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
    msg.setTimeStamp(0.6546370556609039);
    msg.setSource(18373U);
    msg.setSourceEntity(200U);
    msg.setDestination(40560U);
    msg.setDestinationEntity(43U);
    msg.possimerr = 0.4668220425157834;
    msg.converg = 0.2922403105724637;
    msg.turbulence = 0.7078850922954436;
    msg.possimmon = 201U;
    msg.commmon = 7U;
    msg.convergmon = 61U;

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
    msg.setTimeStamp(0.9102472427645317);
    msg.setSource(58753U);
    msg.setSourceEntity(118U);
    msg.setDestination(18558U);
    msg.setDestinationEntity(184U);
    msg.possimerr = 0.7546925499097831;
    msg.converg = 0.49060083522839293;
    msg.turbulence = 0.6246246035871986;
    msg.possimmon = 54U;
    msg.commmon = 84U;
    msg.convergmon = 190U;

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
    msg.setTimeStamp(0.6124450888690589);
    msg.setSource(45094U);
    msg.setSourceEntity(30U);
    msg.setDestination(7830U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.9217741372957289;
    msg.converg = 0.8805718976089686;
    msg.turbulence = 0.8655184653604624;
    msg.possimmon = 173U;
    msg.commmon = 108U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.7262708287360284);
    msg.setSource(61115U);
    msg.setSourceEntity(118U);
    msg.setDestination(22289U);
    msg.setDestinationEntity(85U);
    msg.autonomy = 29U;
    msg.mode.assign("GKPYNEMOTWTQXXCOPQZNCXPSXVYMBULTEZBCFYGSXHPORQSZUAEDFVMIHDVRTYFGKGZIFEISCMKVCNYXLJMUCHNSIEZFLDPTMKHPHBWXVBQCSRKIGSBADGTRXMJNTMIJGAOVIUTLDSOZPRDNTQKYUAZLWDPDQYYIZNJWYFPIJXORKDEWYWNLWJWUNJJHOLWQVBIRFREQKEVJLRAHCCAQBFZX");

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
    msg.setTimeStamp(0.5626149325408486);
    msg.setSource(808U);
    msg.setSourceEntity(46U);
    msg.setDestination(22270U);
    msg.setDestinationEntity(69U);
    msg.autonomy = 168U;
    msg.mode.assign("ABYQGXTUORHJWVZCENOWGGVJMDFRSNBVXMKQTTDXRYRVXVARJSTYUUDZKVKRXZAWXIFCLLWNNKJWLMQXCBQNEBVLBLDUEUXCYQVGKOZSZHZGJRTKFHMTRBJKYHDGQYFMRKISVUDZEAHGCZJJWLSAPQITFPFHCFFKDNNREHXBCHSYPTJWINPQYP");

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
    msg.setTimeStamp(0.09470942962596274);
    msg.setSource(36447U);
    msg.setSourceEntity(58U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 17U;
    msg.mode.assign("KWTCGHTEKAJURPGATPBWESVXAAVFHUZGFZCKLVZNHGSWNFBJCXFURTLHZYVYYDRSQXAKJHOFURGKTSLIBLYVCNMBASDWMSNABJHRFOIELOQGPINYFBFQUWYROEDVIFUOECFMCJDWNZJEVSEPBGYYBXJGGMUHKDMPQPZJKTOYWRQXXDLQJUDUXIIWRVDMAWECGIPMMDRNTNIXPLZLMAVQHZIQXCCLOQMRZSOOJDTETHBYPXVSKKWBNHL");

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
    msg.setTimeStamp(0.1910907174420533);
    msg.setSource(51603U);
    msg.setSourceEntity(39U);
    msg.setDestination(61653U);
    msg.setDestinationEntity(168U);
    msg.type = 64U;
    msg.op = 104U;
    msg.possimerr = 0.5958093472941338;
    msg.converg = 0.5722835797640377;
    msg.turbulence = 0.7921983299715358;
    msg.possimmon = 11U;
    msg.commmon = 197U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.2400891502996505);
    msg.setSource(36715U);
    msg.setSourceEntity(228U);
    msg.setDestination(31302U);
    msg.setDestinationEntity(234U);
    msg.type = 188U;
    msg.op = 69U;
    msg.possimerr = 0.8693224576694245;
    msg.converg = 0.06056699899594664;
    msg.turbulence = 0.19755123437727884;
    msg.possimmon = 125U;
    msg.commmon = 164U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.454694098180349);
    msg.setSource(32311U);
    msg.setSourceEntity(33U);
    msg.setDestination(44515U);
    msg.setDestinationEntity(32U);
    msg.type = 103U;
    msg.op = 131U;
    msg.possimerr = 0.9712796645044404;
    msg.converg = 0.597108523415664;
    msg.turbulence = 0.2766586238964862;
    msg.possimmon = 145U;
    msg.commmon = 142U;
    msg.convergmon = 34U;

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
    msg.setTimeStamp(0.04966671289542668);
    msg.setSource(46480U);
    msg.setSourceEntity(254U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.87859254602681);
    msg.setSource(11574U);
    msg.setSourceEntity(207U);
    msg.setDestination(4051U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.3596566267813942);
    msg.setSource(47259U);
    msg.setSourceEntity(77U);
    msg.setDestination(34937U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.8858162063829554);
    msg.setSource(14636U);
    msg.setSourceEntity(138U);
    msg.setDestination(47337U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("CSUMWTEVLFRKTRRUEMBLMJKHYIERSSOBPKHFXBHUCMYASKNTNCIWOPQXZNOJWWDGTAZZIUBQVAMIQPFNLGXRIHICLUNGVSLEZGXZNIAYMHAWNOWKFKZGZJGZBRSEQDLYVAFDPPPJNUHILTOTBDFMKMXJFPYNTVJAEVXRCCSDYYJDQPOHJRWXKEUGCLW");
    msg.description.assign("ZNGSBMIFYVFCIUPBXCDJDQEWFVBSHFUZXYVGJTCQPYOOTPTUDINGZSDUJIVWWVWITYZFGMQYMHVHBLGCRXEQTGKAFKWHRYFJYKDPRTACEZXGYEKECLXKNSLUUYXFJEQHBGSIQWWLDLEFRRBTTONONZSZNUHGLTLQRDAE");
    msg.vnamespace.assign("NQOMIZCENIYJGOFJKGPBKUWQFRGYGUOVADDVOWWKKZXLGOPBUDEMSSMAOUQWPICNHOQNLYXOMRTUTDXLETIEEAXDPBWLQRVQLEAXREJHASQYQNUSDNRBCUIZHMBYFKWCCXGJSTRTAFVZIRMGCVZHQAEMDRFUZZYDJIZTSNLDHLXFSSFPPYMUSHPGJAVJLKRYUZKOCVLSBJXJQICNWWMHBDIFFVYNTKV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KMPUFMLHFWJVWAVYXPHMXUBNPXAXPJDRTVDPBIGGIHVINWIOYWTEQAXNZQHONTLSGCQJGCDKLRSIXHKJC");
    tmp_msg_0.value.assign("IBABUPEMMDZFBLFPUWLOCVSRDALEYXUKMQBGVQEKFMZKHZUBPZXQQAAGNTUGRSIIEJKNOPHPZASJHSLCQYNTBTKBQARGBIVJMIWWUDVETXLHYSJHRXMOUQFLDIYMFCFHDJRPYLELEYWZYC");
    tmp_msg_0.type = 171U;
    tmp_msg_0.access = 77U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HUFBEDZPTKSNO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WWIEDUJXUZJICJJWATETZAORBKJZYDVFVKCSRUDBZMDYDFOSWTRODXFRQEPCJCFKSIGLBLNSFTSTPMLFHMACCXNSBWLGFIUQRXYAQONHMTIYEIGKSPHVKGKVBTLHLXIRQJFORVQTYPPDPMNOWKIQXTQYQDZMTCBPBYZVGWRPAGHMWADOGXZ");
    IMC::Dislodge tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 24948U;
    tmp_tmp_msg_1_0.rpm = 0.5683459317505559;
    tmp_tmp_msg_1_0.direction = 134U;
    tmp_tmp_msg_1_0.custom.assign("FBOZQMZKEJPVYLAOFHNRNRFIWTBLKYWNCZQGDNAKBCYFSPCNDQSQXJCKJNWGLAUTBBKAPYAULYSTEYENZIDVREWMHNUROKYHCJYWDDPTIMOZBTWAJTPWAEBTKAEIKUXYINOROVQZTUDZJVIAGCSWKSQIXZBFD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::IridiumMsgTx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.req_id = 19486U;
    tmp_tmp_msg_1_1.ttl = 49520U;
    tmp_tmp_msg_1_1.destination.assign("UHUENVPLJLOYYBDGWBKDYAXQYPVKBOOJMHKSPDFVKITDQJHTXDWMKSABGACAHWLAPEPFOKSPWMYXZVGSYZZCMFXMFWRYMRIRBQCLSXGZVIUAHYKGUUROTAJZJENEMJFNIXHJWYWBSFQOBCEZEOGCQRPLVMEVLMNNHZRGJOGSIXZMDXAWLJDNRHOBOTWZGPGQJTTVBCIRQSU");
    const char tmp_tmp_tmp_msg_1_1_0[] = {86, 89, -48, -69, 5, 15, 76, -83, -80, 62, 108, -72, -125, -26, -22, -89, -52, -3, 50, -125, 5};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::StationKeeping tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.8857158684090325;
    tmp_tmp_msg_1_2.lon = 0.6695089346638868;
    tmp_tmp_msg_1_2.z = 0.78429094960281;
    tmp_tmp_msg_1_2.z_units = 202U;
    tmp_tmp_msg_1_2.radius = 0.09610799129004555;
    tmp_tmp_msg_1_2.duration = 5193U;
    tmp_tmp_msg_1_2.speed = 0.7790980988970605;
    tmp_tmp_msg_1_2.speed_units = 112U;
    tmp_tmp_msg_1_2.custom.assign("HVIYRIKEAWXJRMYQFTPRYK");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SHGKYCVZZKAAEILDJHVKCUQEMISS");
    tmp_msg_2.dest_man.assign("MLLEJWUELIXDDRWVYAODPKXNPEMKXVMJFFXJASZGUBVYDQCKLBCUFARPEIXHTINXGGMQSPPTWZOZBPNYTQTBNYAOUHRMVXUNRLFSYVELTFADKMOIAHRKKIOYDBVQECBBZNYXTRNGTHSATQ");
    tmp_msg_2.conditions.assign("RIDHRJSKJS");
    msg.transitions.push_back(tmp_msg_2);
    IMC::NavigationUncertainty tmp_msg_3;
    tmp_msg_3.x = 0.8295615579458112;
    tmp_msg_3.y = 0.1271879184176139;
    tmp_msg_3.z = 0.44170156164134167;
    tmp_msg_3.phi = 0.8153347624243436;
    tmp_msg_3.theta = 0.6346399422076139;
    tmp_msg_3.psi = 0.6759648320760437;
    tmp_msg_3.p = 0.5479020212576986;
    tmp_msg_3.q = 0.03314884349117664;
    tmp_msg_3.r = 0.5984730574241516;
    tmp_msg_3.u = 0.5393314400704042;
    tmp_msg_3.v = 0.9084329658609382;
    tmp_msg_3.w = 0.11332734411954837;
    tmp_msg_3.bias_psi = 0.851258775230629;
    tmp_msg_3.bias_r = 0.17921777675146044;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.6297612649738239);
    msg.setSource(57062U);
    msg.setSourceEntity(222U);
    msg.setDestination(2289U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("CQPKRHONGCHYQYXAGZCPKVALKEWUPLFCVMGJBXYXTKRBSUWPWJZGDUGESMGOAJDMNDDLRPHLRTNYDIYMVNFSJWNKOSIFJKVNRBUFTDTAFJIHEIVLLVUWCUOBGTPXLXARNYKUDPOOPSQMTCXXHTOMZEFWNSBSZFQZQKA");
    msg.description.assign("BEMQCQLIEYIFQCGUWPSOBCVDUBYHYWDAYSFWXHTJWXPSOWPNDYTMHAPH");
    msg.vnamespace.assign("IQKSFUZYTUQHLUWCFYWWKHXETOL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AQXGRXWCTCDFSSKHBEXVNTJSCAOXRTGMOXRMMEINIZLQMUTMMRVFTUZOYBIKLCLTMQEOVSFYTCNRFTOASYVHPUXSXPWBQDOEWXFKWAMZGZSITIHOIBDUUZYXRUGWHHZEBICSIPJANBYAVQNELCLLFWDHHROYAGDFWUUUTGEK");
    tmp_msg_0.value.assign("JMFEAZDTOJUHXALHZCLBSTBDMDEJMQOAINWEJCKHVRWASNUCFQTETDYDUROVKGMYAUDMPNQWFKRAIQFLNALWEKLDCEJRMFGYXNVLPUZQTWJFEBQRIZIVPGJFYNWHRVYENIIXHPOPKPIYVKGKPQXTOZCTPCZQOSXCDYSGXDUZWBZSBKMFYHWHYKBBEOGBGMGNRFPAIMRUIIBGSXUJOZSHNLPOUFTVALJQDAXTVNYHHMUECSZQLSRVWL");
    tmp_msg_0.type = 88U;
    tmp_msg_0.access = 44U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UGFOHXMXCSXNTFMVRTXZHCKLWEYVXVSLYGJGRF");
    IMC::ButtonEvent tmp_msg_1;
    tmp_msg_1.button = 36U;
    tmp_msg_1.value = 197U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.2913949586101582);
    msg.setSource(44523U);
    msg.setSourceEntity(25U);
    msg.setDestination(15901U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("OKMHJKDSFNFBLTXFPQAIKFHPNYHWIEBUJUZSSGEYDMYLGVVEIHXQCOKTZUOJLVNNRAEFRVXBKXQYCLTMBLSHORUTDVQPOJXJYMMJWGTPCPCLONJIVKRDUOIVWQREBCPWMSOIYZHFMQFDZQBVBXWLEOWASNWGTLVZKOVKNFAGDCNRJQCWNUZSEJERABBYKCESFDWCMPDELGZIMMGTCFDZGGUAHANUZLIXIRY");
    msg.description.assign("BUEQLDXKTGVJURBSGZHUKLUBDHXNPJEIHWIYAEVPYBFQPKDQLLKITUNOEWEBRQXJRLLBQDEGASAFAPJCJDXNMYGVATKVOBWCTOSNIXCAKODWJHMGMAWPZNTEOJNTHOXRZIYQTUZASDROTPGYFYESWKSVMKYOCELCMKUJITFJVCVGDXRZNYAXZAPLJGHQUOIFHDMSISNFWQZHCGMCPLFQVUYLTEVFRXRZRWIWGUCFZYKPCXHNDNQVMFOPSZIHBM");
    msg.vnamespace.assign("FGNZMYLRYQASHCDZIUZUTEQOVYGRPOEJPFSUXZFASSPCJJJBYFCLVKQPPWWTVNVDYHBAKNHCNTKUNRUWGSOEQUERJPTLGTIDQLMIHBAKD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CAILFSLFXBZARBLLCHHVHGTCMDXZYEFNGZXDYVQUYTJXBKJZDRMIIBANQAZSBJUBFJNZWUJEQXGOWDIKHWVKPWRUHRDWHAPKUDVAXMPSIPDEYCEQLGSQQONMRFAJAMVN");
    tmp_msg_0.value.assign("NQVRJHNVFQTSPUZDSSHTQFDXWQARTWOPZDBRMJFIERPHQUFWHENSMQIJVYTDWODMPRZWDDGV");
    tmp_msg_0.type = 172U;
    tmp_msg_0.access = 200U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZBHZENTXSTTYPYHDANOUSWLDQVMYWSEKPVNNUZVUYDUEWNCKWIDBFRSEXONBBIAXGYBSGVQEJJQWGHUZPTMEQKZQFLOGNMVQFWHJAJRRYFLDPTGMEDXPYZHXRXFIIIMSNOIKAAPXOESLULPWJNDHOPJJKHWHCYLIOIMZXBALJMSLVRXKRCFVSGBCRCAEAZ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("UGKYKBZHXIQPRNMNBBADYQLLR");
    tmp_msg_1.dest_man.assign("IVAOUDXJZJYYQQEKKIIIHLICGKBACHCYLPDGYDAORBCATASKUVJFRSPWLSYAWNMARTHFECOCXDUNNBWPTDUHM");
    tmp_msg_1.conditions.assign("MZDKKMTUCLDAIZFUIHIJNOZUKYERKQHORZLGYOAVJOEEEKXOWBUXBNSDGVVMNBOPWJLJLQXVZDQWEPZWOCMNCHGWFEXLFJCANPGPFKYEQCUCFJMYCWDZHXJPTQYTTLXANQLPQHVLEXMGMCL");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AutopilotMode tmp_msg_2;
    tmp_msg_2.autonomy = 217U;
    tmp_msg_2.mode.assign("GVXCQSMOFMZDJAKYDAMACRHEVYXRKCFEZDIIRTFRFCGMOGBYBDNZSAVONTAWXXOLHXNGYHECLJTJNPIJTBEPMESYYTDEHVULWICDIYSTVMIRNPLGPFOIOWLKBQGHZTJQSJIWPUUUYLUXGEJQFVBOJMSRNASUHMNMRCRENXZU");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PopUp tmp_msg_3;
    tmp_msg_3.timeout = 63795U;
    tmp_msg_3.lat = 0.04990456545044719;
    tmp_msg_3.lon = 0.7939987452168299;
    tmp_msg_3.z = 0.7799143553368518;
    tmp_msg_3.z_units = 250U;
    tmp_msg_3.speed = 0.2696195050241753;
    tmp_msg_3.speed_units = 40U;
    tmp_msg_3.duration = 11626U;
    tmp_msg_3.radius = 0.691051216631508;
    tmp_msg_3.flags = 70U;
    tmp_msg_3.custom.assign("IKLMSZTTEKTJHVWVXOYLCOUIEHXSLGOWUZGRAPFLQARUDXJOSMHPONFAYWEHYJGXZFDPQCFIAPTHBEGUVIVCPBYCLSNGZXHYJNOWYITPAMCPAUNZNKHKBMEEOBDXUW");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.9064917827459505);
    msg.setSource(56574U);
    msg.setSourceEntity(179U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(93U);
    msg.maneuver_id.assign("JAXGWDTDIHFEPKEBITCPGKCBISUNURDIYLIYCXAOOCQZOLAKZSXFOJEERSUTHMDWSLWHESJRLYMGQXPQRFJRBLYSJCEWKBILRRXKYXANACBQKRDQOHDPVAZPJIMMNZVLAVHQBDZOEBKCWIBLZSEUVPUPFJFNVUFVTXAMQEHWLYADNTE");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 385U;
    tmp_msg_0.name.assign("WGCREQLADFWIZGCBEOOHZKBWHYYQYEGZOQYHVZWNRKXCFGZBVXSMDRERLCGVFCCDVNOJHFUIYJUBVPRDMUUGDSIVDAQCYLVTKRLESSNIVPLATHLWOPQSSQIDLZPIVLXRKXZHB");
    tmp_msg_0.custom.assign("TJRNSZGLJHEAFKAXWZQUNLUISCMNVWIJMLABJKVSFFZJNER");
    msg.data.set(tmp_msg_0);
    IMC::GpsNavData tmp_msg_1;
    tmp_msg_1.itow = 2011064728U;
    tmp_msg_1.lat = 0.6016571658743871;
    tmp_msg_1.lon = 0.24575204908310966;
    tmp_msg_1.height_ell = 0.28927695257144237;
    tmp_msg_1.height_sea = 0.08120869337147718;
    tmp_msg_1.hacc = 0.836078875790772;
    tmp_msg_1.vacc = 0.7764453264052037;
    tmp_msg_1.vel_n = 0.010896725132046536;
    tmp_msg_1.vel_e = 0.24762296974154274;
    tmp_msg_1.vel_d = 0.4451191501385543;
    tmp_msg_1.speed = 0.9656368238487174;
    tmp_msg_1.gspeed = 0.3964438493507739;
    tmp_msg_1.heading = 0.3930537393907475;
    tmp_msg_1.sacc = 0.9739733077647026;
    tmp_msg_1.cacc = 0.18963578858375063;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredPitch tmp_msg_2;
    tmp_msg_2.value = 0.6763884618121536;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6410616559053302);
    msg.setSource(62912U);
    msg.setSourceEntity(231U);
    msg.setDestination(32623U);
    msg.setDestinationEntity(172U);
    msg.maneuver_id.assign("VHICIGCXHNIFZLUSNJTREEYKLCTJGSANCGJZEVZCGKFYPLCBJVADXCMHIYADXBYQKHBIMTYIWNNZAYKFMRFTWKKQCABMXTJTETNVPQRHOGJRNMIDPVLPYRYBHUQJVEQP");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 21725U;
    tmp_msg_0.lat = 0.1895464689124553;
    tmp_msg_0.lon = 0.7603129956599914;
    tmp_msg_0.z = 0.9225657482755578;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.speed = 0.9419594791935086;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.duration = 23307U;
    tmp_msg_0.radius = 0.7934809527539954;
    tmp_msg_0.flags = 253U;
    tmp_msg_0.custom.assign("YBKSRNMJICTFDOXYSZMTLJQPWQVOYFWDUBTUPQEFABTEGGKBFIVPLAIRSOEVMEHNDGPFEFPYZMNOEHZSYNWHUAEWQNDBYVXQNRVCRNJLNASLGUQSXLSXNJKZINWXZBWAJAYZHVDWRRXYRMHTIZATLSEELOJKBIGHBKJQGMRCTJHIRDPOFUOOHJDIUMSAXVCKMKTBOTWZDR");
    msg.data.set(tmp_msg_0);
    IMC::ReconStatus tmp_msg_1;
    tmp_msg_1.remote_control_allowed = 127U;
    tmp_msg_1.remote_control_enabled = 70U;
    tmp_msg_1.remote_control_active = 46U;
    tmp_msg_1.depth_only_control_enabled = 79U;
    tmp_msg_1.direct_control_enabled = 50U;
    tmp_msg_1.return_to_closest_point_on_line = 147U;
    tmp_msg_1.on_shore_power = 218U;
    tmp_msg_1.latitude = 0.6291339787555014;
    tmp_msg_1.longitude = 0.4780943205277033;
    tmp_msg_1.depth = 0.6382409342277294;
    tmp_msg_1.depth_ref = 0.40473856258619145;
    tmp_msg_1.altitude = 0.9275902168936693;
    tmp_msg_1.altitude_ref = 0.6086290476445683;
    tmp_msg_1.pitch = 0.8972478286487203;
    tmp_msg_1.roll = 0.8067766071541299;
    tmp_msg_1.rpm = 0.6754508280311344;
    tmp_msg_1.rpm_ref = 0.4084488397418008;
    tmp_msg_1.speed = 0.9119756742157965;
    tmp_msg_1.speed_ref = 0.13818667493787617;
    tmp_msg_1.heading = 0.904326131915308;
    tmp_msg_1.heading_rate = 0.03778478792766837;
    tmp_msg_1.heading_ref = 0.750301994533761;
    tmp_msg_1.mission_state = 148U;
    tmp_msg_1.leg = -1834189368963848767;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9360564628379959);
    msg.setSource(45957U);
    msg.setSourceEntity(72U);
    msg.setDestination(3841U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("JJATBVROTPBUQLLUNHRNPIRUTHJZXHHRSVXTWRAVCMNQEWEAEKNDLDEDRENVJTWYDYXKAIXWSPWZQMJPBVJNYQKZYVBMLZDAMIEKXUUXYZKQAHLAZLPECKQFOAGMGUGMSBTWHOMGSFUYVZGYFPUE");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6268912142740359;
    tmp_msg_0.lon = 0.38160614532663173;
    tmp_msg_0.speed = 0.47154001926248357;
    tmp_msg_0.speed_units = 111U;
    tmp_msg_0.duration = 2756U;
    tmp_msg_0.sys_a = 24808U;
    tmp_msg_0.sys_b = 48864U;
    tmp_msg_0.move_threshold = 0.20710745795558272;
    msg.data.set(tmp_msg_0);
    IMC::PWM tmp_msg_1;
    tmp_msg_1.id = 16U;
    tmp_msg_1.period = 735157337U;
    tmp_msg_1.duty_cycle = 2327850242U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.635751963052495);
    msg.setSource(35803U);
    msg.setSourceEntity(0U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(235U);
    msg.source_man.assign("NBVJXKAVBIINQZANCLGOAPLTGIUTDRDKKPH");
    msg.dest_man.assign("IBOTALUIGZDVEKVRHKNNJLXHQXTLYRQZQQXRJWNHNTADFFFIIHLRTVOMWAXYPAYZGFJMFXEERBYCDXZJLRJPVUCUFWOEWPQRKSCAIDKNRTUYJYWENVSHJWNNNICTSGOMVQTJWPEAUWBBIHQFUSAPPCLYSUFISCZGOZGHBQJEXGLLVJFBKKMMNYSDZKDAPSKKHXQEOUGDSIH");
    msg.conditions.assign("CACSNVKHQFLBIQPPOHDGCSLEXZJMTGZTKXNSPPSHQDNRYOYMZBPYKHJGPICTDTIRBRNFXRYKJAXUFEVHFFJTRABDGJYWUIIQIHFYONZLUX");

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
    msg.setTimeStamp(0.47408827931261943);
    msg.setSource(25519U);
    msg.setSourceEntity(210U);
    msg.setDestination(29288U);
    msg.setDestinationEntity(9U);
    msg.source_man.assign("COKJLJJPSBIHZWKQYFQWLCBQFNXGNJSUIHTDFEOROZGSKLCAEPBWTZNTKQRRZFXITEBDDCSGZLGXZBQVEAVJFMYAOWMLXAVQYHNTH");
    msg.dest_man.assign("AURBEHWMIZKWTQPFIOHJJVIRGNSHLZANOTSRCYHUELUGOOBVBDRSJNFPGQJKOHSRJVGYUZOVNNRDUZFDRHXDVKHPQUDDVRECKQQCEMLNPJNXSOAWCCGFJUGSPLXNKATWYMWWECXBOFKAIAKPHSTYOLMG");
    msg.conditions.assign("WWUAYTNKMEKPGSDXPQQNMYJOPBMVRRXKEBHXASDZGYXJGQDIHUZWAYEVNGDPFWVMUBDX");

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
    msg.setTimeStamp(0.2523904944808053);
    msg.setSource(34155U);
    msg.setSourceEntity(190U);
    msg.setDestination(7663U);
    msg.setDestinationEntity(124U);
    msg.source_man.assign("OGFUNXXRARDBOLNBOEFVDMCDSFMVTXGPMYPYCOZEKLYZKUKHATDMWXSXTRQCZMNIUTBVEBBSSKYJAGLVSIJMKNTBIIRFPQJJLZSGPTVUAHFETVRACQGNZOWLDMSHGDDYPLCAZUTUQCIPSWLPVLWXAABKOUQOHSWFZNWEBUCOIJYHXFEDZJYKOHBXTXGEFZRHQIDARWJCZTHMCNNPRWWIGQAHFUQJIDORMLBNPM");
    msg.dest_man.assign("MEUXJONDVGGJPGRXSRGAZTUYGOOTKRFBLUJVVJGIEHWQZEQTWZFHHENPLDPDSAZXTHZWYCUZTKMXYAMSMCSFFFDZCCKDFERIPBJPYHSMREJIOJFUUDCLQKPZLIUAOWNXBWRWFFBSWIQUQKTKMQBVINLAXVOQLMKOYIOGGVNEEKQMMFJNRPAXAKCNWHNDSVDWBJNTVCHYCYHIHVYBPTQLTVQYUYTA");
    msg.conditions.assign("QBJQWDHFLJQBIVERRKWLFOAGJJSVUBMQUKHAOJPXMWQZCMXRAZBRYHRWEPHBFZJIPYXLVORSSDNWJCVKTYUKICSPCLFKYIMEMLEXEDXQBZVCNTVLOAWMZAIZVEVSAGBM");
    IMC::GetOperationalLimits tmp_msg_0;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7976901387171802);
    msg.setSource(62030U);
    msg.setSourceEntity(41U);
    msg.setDestination(63301U);
    msg.setDestinationEntity(147U);
    msg.command = 32U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWQHJJCGVAHSGLNIFUXRJZCXZBYJQVRYQARVNQGYFDBMRVYNADBKDXCWXUMHABDPHZEOZKHEGLFIVIINALGCKIDJZGPMYIEEANEVYRLXCMBRUGUKZWJFPSTQIQXKUEHGQVNMXTWNPZAAYMFCQSOMLSWTSRUEVDUWPEGCXYNOOPTNULDATKDHUZTXOFXPKLFBEJFNJOWMJKO");
    tmp_msg_0.description.assign("OCRZWLDVAHHVFNXDOVXSOBNNWETIXSRSRWBEWUZSTSIGRODUFQMCZESQEVJZIXMMQIFHUGIAYRAAQBTTWMULHQOPRQWKCJENMIBXGCQUJWJNLYHGFZQEMWAJEVVGBZJVIXSAUFTPVGCNQSFLJCNZUOLLUQWKCLYBRKKKXTBFEUYYTXPXYNCDJPUPHYKGAKBPLLTRBDVCRZNPYAGPKDHRDMOZEEFVPYODHSJJDIFKAXZTLHMKGDOIMG");
    tmp_msg_0.vnamespace.assign("OEJRAHLIEUWCRQIFLBRPMMHZQCCFJBPJUNGBFNGHMCBCZLDZSYTHUMSKWFASNDOPGXJQYVKGJEAKEURSSFKDZPKTMYWUBIERBQLTTEARIVSWBCWJMPZUSILYPNRNGZXOOCPXOGKLBWDGVANVALIAXYIUHZDEHRVJHMCDOJFHFKEYCLQKYQEKPKIYBGTRXNXNLXTWSCWAWXFVNRLJXQZHZGGDSMZYPIVVQO");
    tmp_msg_0.start_man_id.assign("BDGORQAVNRBXMVMVTKLFVZJYVJWNGTUGUXZDUWSGDTSSKBWSCILKUVMSBIYFYNEMLXAPRIHVQQTDNGIKOYXTPXEWEK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("XOMIZXBARVEYTQIBUJFFYUJKHGAHFSIDXGOOTKSZNDNLXUXQDNETOYRTVQCLHRLOJRMWSUQHDRJPZNZJVAXHUWVZBMNCYPNVLLCIQQGDYOUVNAAFFOU");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 23030U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.47194231353679095;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7022934328556096;
    tmp_tmp_tmp_msg_0_0_0.z = 0.1409619451919285;
    tmp_tmp_tmp_msg_0_0_0.z_units = 26U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.1304491730080899;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 88U;
    tmp_tmp_tmp_msg_0_0_0.duration = 35509U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.9375567732588564;
    tmp_tmp_tmp_msg_0_0_0.flags = 18U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VLOCIROKXSHECOGSUIAVSQPIWCYCAWSRCVAIHLEWGXRWNBVZFDMBVTQMYCFLZSFFKGGJRNIXJBEFWDJKEPJUGPOKWWTJHAFMXAHXJXTQMSEQLXFDXDAUOKABPZZCSDHLHXMPMCZQGTLGPDEVRPOZOTNNMGUUQHKPZFVURTYSQCYEEDKNVIHFBAYNJBZUXYMGLMUET");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SaveEntityParameters tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("MOYWCKWUDSCFXOHFXPFLQRDDPAEDZBBHZKMAQWGCCQUEREXPNQSIMHJZRSWCZITONYTXOMLYVPONEJPKLJNGSYMZTASXHTLGPHKGLVTYQKWQSNRPNXWAVLOHEELPMLGBIRJXFFBBKSORTOYVJDMWZBQYOVZDFSERLFMZVIZCFRNUEOUJADBLNJQ");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ManeuverControlState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.state = 106U;
    tmp_tmp_tmp_msg_0_0_2.eta = 391U;
    tmp_tmp_tmp_msg_0_0_2.info.assign("EHAZTHKIVWHMXEYKEVTCNUKRDQGSLXXIEALYEUYBOOYURFTOFMMPQGKFZEUOIBTJGJQQMTSEJXDGZMBYIFXGNSYDCVIHXQTUDNWJWCNAPZRDSSBSJJYDHURTBPAHTUKGKSAVVZUTPOXCWABWOTNVDMKCPVNUIAGHHRCKRZOBZKPQNYIBLSLDAQHEPVXBFPNLGJNOOLPQUCMWFD");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 233U;
    tmp_tmp_msg_0_1.op = 56U;
    tmp_tmp_msg_0_1.request_id = 10034U;
    tmp_tmp_msg_0_1.plan_id.assign("MYIILDOJBUJPCOGKNEEVTQHYOXMQTRABOFYDSILYHXSXXFUZMAUXQAAGSJMYFQRTJNIIENFMKPZGLJTWPLYDBZEXCSGBHDDFZSTVSUKBENFCBKFTUQWJBOVAPHPLCIYHWDNKWPAMRMRQDVI");
    tmp_tmp_msg_0_1.flags = 43542U;
    IMC::AlignmentState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.state = 138U;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.info.assign("UCWTQRTCDNVUMEHXZYQBGVHZJQCNTAGMOJVUWFBMDTGZMRZFITHLIUODDXESZAJRHHYNFOQHJEHVPIEDWLOAUUZHDIQROGRMYFETQRXXRDP");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5444271755011612);
    msg.setSource(44424U);
    msg.setSourceEntity(120U);
    msg.setDestination(26096U);
    msg.setDestinationEntity(106U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FGVQVGBFWGQTMLNIQTCFYDUUZINKFTWADPTNUPITZXEMIOXUVPWUKYGYUMMTAPAPSJTLCUHQSJCAUKWNQHTRPYPLFNQEDHWXSYSOXFJXENVTILGWOEMACBGVNJOCMJDRPFXEBBWVMZBGLG");
    tmp_msg_0.description.assign("DPZWGBMMVNRTVMIKQCCSLOQIVNDLAFYTFJYLMBJDMCWSOHYNDCPQYTBXONXDHPICLIEJWRMKNJRSJZEHUOGLABKGFPTJZIMSNTGTQQNNJOVWKXRQPHLAZCPRPKEVLAVLWZVAQKDRSZXAKAERRSMATFJUPPCCOWSDUQBUOBKODIGQEYSFNWGQSJXBUEZRVAOGTUOFGDRCYIMFEUHUHHUFTYZWYFIYCZXXHBPHJEYXLLFIWEVEDGBIKMH");
    tmp_msg_0.vnamespace.assign("TXYOITUMFZMJDHNAM");
    tmp_msg_0.start_man_id.assign("EWBWZHTVGROAEFNNWTYHYKAIKGQSFNQURKIKRCUXVLKVCEJOFZPTDHGPYWPWQFYMMSFXNCYRTYAIJOLVBVBFFBVAKCYUKXOJYFIWCMVRZUWDXSRMLHGUKUQVQGMXYEPOAWIPBC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PSUCCWDLWGJCWZLHHWNFSLQUQJGVEHRLIFUYSXNVTVIYAZGXCEYDHYSEVJDQGSDSPKMCTKBMFOBPXJEIMENOCFQUFTNKCPAVREKOGZZTH");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 57790U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8427788758790827;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.24782734350660185;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6800344257651976;
    tmp_tmp_tmp_msg_0_0_0.z_units = 115U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6137213061009971;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 233U;
    tmp_tmp_tmp_msg_0_0_0.duration = 49085U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.3960266628580148;
    tmp_tmp_tmp_msg_0_0_0.flags = 86U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UXEXLNZXRRZVBGMIENPQCWHIRKDIAECWGWHOLQSXYBROSZZEBTKEELAUYGQLFVBYLXKODPWRHEPUWNRCNYFZSPPSYJALYPZAHANJGJUYQZWELFKDIPREMVBVCOMKJVGTH");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MsgList tmp_tmp_tmp_msg_0_0_1;
    IMC::FollowTrajectory tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.timeout = 34123U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.8293530557244249;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.8009640918405271;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.679205562231999;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 0U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.9397639567386302;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 228U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.x = 0.8980498003338766;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.y = 0.06659450751287332;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.z = 0.32014739816249727;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.t = 0.9407094317097109;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.points.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("MNJWWQYMUCUMYA");
    tmp_tmp_tmp_msg_0_0_1.msgs.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::IridiumMsgRx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.origin.assign("ILPNMWOBUTMLJBBIMVRLIRNMEKLPUAYBQQAZQEFYENYJPD");
    tmp_tmp_msg_0_1.htime = 0.5537874439288233;
    tmp_tmp_msg_0_1.lat = 0.9773478637831257;
    tmp_tmp_msg_0_1.lon = 0.2616459438208537;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-62, 57, 4, 97, 39, -62, -110, -123, -126, -2, -109, -52, -2, -4, 79, 4, 94, 97, 85, 68, 103, -13, 10, -43, -125, 23, -102, -111, -70, 98, 71, -126, -46, 106, -53, 85, 8, 14, -107, 6, -116, -73, -35, 83, -99, 8, -114, -93, -102, -99, -29, 63, 62, 119, 63, 107, 26, 11, -91, 38, -51, -46, -122, -91, 11, 35, 30, -106, 53, 44, 92, 28, 111, 94, -30, 59, 92, 67, -34, 9, -4, -59, -66, -81, 53, 93, 3, 40, -106, -83, -59, 115, -88, -29, 71, -65, -91, 48, 115, 51, -105, 93, -15, -37, 32, 26, 36, -2, 4, 90, -68, -109, -39, -103, 37, -36, -6, 24, -47, 7, 13, 34, -61, -107, 56, -106, 101, -29, 55, -91, 62, 69, 70, 8, 73, 72, 2, 82, -80, 60, 9, 75, 103, -64, 30, -51, 3, -108, 15, -96, 13, 0, -96, 82, 46, 1, 87, -11, -34, 20, 72, -64, 126, -111, -110, 4, 0, -2, 110, -58, 74, -57, 67, -78, 72, 93, -5, -22, 49, -78, -19, 58, 119, -31, -37, -93, -43, 18, 34, -105, -123, -19, 35, 113, -4, -101, -116, 66, -97, 54, 44, -123, 13, -1, -31, -87, 3, 4, 8, 12, -13, -106, -21, -24, -95, 29, -125, 107, 26, -85, -31, 24, -91, -91, 81, -44, -46, -57, 86, 112, 101, 40, 106, 87, -33, -25, -8, 5, -82, -70, 112, 67, -33, 112, 46};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.3724742704718247);
    msg.setSource(43676U);
    msg.setSourceEntity(179U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(246U);
    msg.command = 155U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XVEGASHYGOCKVYQAJZOEUPNMBTLOQDAPYBXHZPZKDVQMHTOJEVIPMXKGORPKNEMDDCLTUMJZGOTXOVGKKMNWFDVFLTKXTUAFEFZLXIOJWEMYSCRUSFLRWQRAHLSVGNJAQEJFNFMIETRNTKCICCSNVJCSYWPBPGLBPFQDQIYRITSHOWSFQMBIZNKCUWVF");
    tmp_msg_0.description.assign("VVWTXRFWDWYIVSBSURISWPHEOJRRYCSUHIUOBKWFUNUVNZOSPKNTTBCGBLDPQIJGLRXIBTOOQBLBCMDYBHESTQOVJCJRMDYBENXQRAGMNWKKAEKGVHJMHZJWXUICCXVMCLIMUPTKSHNIOBFEVZNFXIFXJEPVANOLCODZQYGVMMFMSGXSAEZLQHENWATPZRGXFTFDYKGTPRWLHQJUXQYMYUQAALHZYYDF");
    tmp_msg_0.vnamespace.assign("PMQUJTLHOEEKGQAWSYIKLCBVOZUNDMCDFWUKXOETTPCTLHBDFXSCVQMWSRGUWVQTVPIQYEJJDKKOTLCVPZNSMRGUGDIHYLOXADAERRHIUGTRTLAROGXNFNBRVPHVUAFKZFDNEJWSANLQGXYMORPYKMYJXLBEAIEHDPQIDJVCSWGYMFYGQFMKNDWRYLOTIKVBZNVIFLIACCKMBOASAHUJYHQFBWZJOTBSHPHNIZXZEXZFCZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SZKUNEPRMRNCOTI");
    tmp_tmp_msg_0_0.value.assign("CEOYLDISCZRXXSOBQUSBXVLRFLJVTGYFLQJDAAMJBYNIWZVJEOYMDFXLLZEXGEEWTBRKVBUIZWUTXDAHYNIKUASVUNQVPZLOXIKWBTLMMWJPJBVUPPDRQMDHHRPAHVFOPQGWGGCYQHZMGWGZTKFUCOKNOYMJPKCOCIISWXIENARVCFREQKZTNQAFCSJLHSZMNHJVAUKTGRYABG");
    tmp_tmp_msg_0_0.type = 38U;
    tmp_tmp_msg_0_0.access = 5U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MZWDGRSPFTNJDRZQXPIQFVUELODDNXFSXXUGJTSDG");
    IMC::SetThrusterActuation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 218U;
    tmp_tmp_msg_0_1.value = 0.21893108809485828;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6417264150512113);
    msg.setSource(53479U);
    msg.setSourceEntity(245U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(108U);
    msg.state = 232U;
    msg.plan_id.assign("QHDVQABOBNUYGTWLGLCDQMVXDYLIRRBMEOGKQNYLHZHQAVYFKWOQZWPXPYEATDVSFFBUANTXNNZNALGWKCWAXAIJWHGRNZOJGKBXRTXLFIFYSJGXJCSIFNLHVKEYIIMSHURIDMPEATMSEDCYMIHNJFKXCUCKBSCBIAUERWZPSHPQOECRZOVUEVGRNAJOPOLOMDTJYITEH");
    msg.comm_level = 6U;

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
    msg.setTimeStamp(0.9126206686644293);
    msg.setSource(9292U);
    msg.setSourceEntity(114U);
    msg.setDestination(21795U);
    msg.setDestinationEntity(21U);
    msg.state = 73U;
    msg.plan_id.assign("QZPKHNBZMHFJAPHBEOAJRGRLMXEIQXJFMCJZUDYRIFUPIANLCHOFWDRUPCJXYTWKSSLCZIYHQIQCAUGBMGSJNJNERDHZTKWXBFRBIRLPVWPYVZTHAZKXJROOIDXEAKVMQGDBSBVNWZ");
    msg.comm_level = 236U;

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
    msg.setTimeStamp(0.9456908966699744);
    msg.setSource(63153U);
    msg.setSourceEntity(98U);
    msg.setDestination(48206U);
    msg.setDestinationEntity(196U);
    msg.state = 51U;
    msg.plan_id.assign("YAURAFYCOBFSXXGEEJIBDMTGNUPWJKMJNXZRKABVGRQXUOLXMDAQDBHHBJQYPZCLIU");
    msg.comm_level = 12U;

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
    msg.setTimeStamp(0.6915670815016614);
    msg.setSource(30101U);
    msg.setSourceEntity(136U);
    msg.setDestination(23995U);
    msg.setDestinationEntity(127U);
    msg.type = 37U;
    msg.op = 74U;
    msg.request_id = 6684U;
    msg.plan_id.assign("OBPQGXHUMFFDMUSTXGCSUCBOYWTLTFKMVYEPRLBLRWWJPWAALPVGQQSXUKBPCTEOXAISGYGANBDNVAZUMMUQDHFVOPDTCWRPHOGRVMJHJRBTVEZYIZJGYBUFNKOWKIZUIRRIHKEEDOHTAZIQOTCSZYZLCVRPNE");
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 195U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("USCPRDBCJZWZPSR");

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
    msg.setTimeStamp(0.21935144705616105);
    msg.setSource(28270U);
    msg.setSourceEntity(11U);
    msg.setDestination(34934U);
    msg.setDestinationEntity(81U);
    msg.type = 11U;
    msg.op = 149U;
    msg.request_id = 38160U;
    msg.plan_id.assign("JRODGPYOTAEBESWWHNAJSQYKUMECBFUIYQRWIRZPBIILIVXIHVJHLLXVCQSUCMPEZGXAWKTKEKAGXZHKHSDRINRSBOMCKBXGPZBDXTNOYPQHFBNNJAKHJMTTCUTJLSUVZYAMDVMYXSWWLDRFZMFJYIAJALODGFRZEOTTHSVDQCWCLEQNWM");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 241U;
    const char tmp_tmp_msg_0_0[] = {-117, 28, 91, 110, 71, 71, -19, 119, 45, 86, 37, -91, -12, -21, 86, -96, -123, 74, 108, -97, -12, -57, -98, -103, 16, -127, 18, -96, 71, -9, -59, 22, -77, 70, -49, 56, -83, -93, -35, 31, -59, -98, -53, -52, -100, -45, -42, -46, 124, -98, 55, 98, 60, 29, 32, -22, 36, 26, -4, 19, -88, 57, 23, 59, -52, -56, -67, 110, -25, -43, -20, -126, 90, -63, 75, -128, 86, -111, -45, 25, -26, -48, -4, -30, -110, 69, 63, 15, 33, -58, -96, -48, -41, 101, -99, -69, 126, -2, -39, -120, -51, -29, 2, -46, 19, 58, 91, 123, 51, -87, -103, 58, 65, 42, -3, 16, -11, -50, -77, 48, -44, 3, -25, -66, 115, -65, 121, 19, -83, -17, 75, -26, -39, 28, 13, 125, 109, 57, -2, 42, 79, 11, -63, -83, -38, -30, 24, -16, 85, -53, -8, -28, -12, 75, -20, 69, -104, 66, -31, -60, 28, -53, -81, -14, -38, -45, -30, 23, 109, -29, 59, 54, -2, -88, 101, -4, 48, 37, -34, -45, 95, 67, 10, 33, 103, -116, -18, 23, 0, -111, 104, -117, 36, 54, 109, -17, -13, 51, 5, -102, 2, 110, -125, 67};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DZQQGCFUPDJOBDTBTRWVMISGMASWFDVYWXXHKGNFDXOCTYMXZOIHSSSVLVFRUMYHLXBCRKACOPOGKRKJJAQURPSLXXEYJDERAGLKHYEPVUADPNAYSLFQASGNKBDYMNTWZNFAJSJCNLTIRKHHOLEWTQIKWEMZFGYETCIXHZTBQVWNTNQUHXVLCZKAOCIDAJIZEVZMOJQFMMEECUYNIPNJRUWGOYJWGPLUBLBRPIZFKMEXHQ");

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
    msg.setTimeStamp(0.1450836262857017);
    msg.setSource(55991U);
    msg.setSourceEntity(122U);
    msg.setDestination(31842U);
    msg.setDestinationEntity(241U);
    msg.type = 190U;
    msg.op = 239U;
    msg.request_id = 50678U;
    msg.plan_id.assign("TWZVNMUCQZGCFYUBEBLOYDNOXMHIUWLTYCPORZLRRKJQGKOSAFZFIHEBVENGRVIKFE");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 30377U;
    tmp_msg_0.x = 0.11938483063305227;
    tmp_msg_0.y = 0.744696219222202;
    tmp_msg_0.z = 0.6399479231935029;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OGMNBBYBZWAYOXRDFABTTPSJNMSJQUQRUCDCFSJSOZCWDVHOZAEQPLVTIZHCGYJGIAGBXEVY");

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
    msg.setTimeStamp(0.35361251153377804);
    msg.setSource(8508U);
    msg.setSourceEntity(168U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(204U);
    msg.plan_count = 40930U;
    msg.plan_size = 181702217U;
    msg.change_time = 0.46191324165904313;
    msg.change_sid = 27916U;
    msg.change_sname.assign("EEFPASURYAGYNJLCTNYRGMBMTLADVSZKEHFSCVVWQFGRIIUJCDGUTFTOYEATSYWLOAINNXULCYALHDGIDOEWXDKGJPQKEXOBZKNVHXWABJTNQHVUKZKEPCCBYUIPTXVGZHRAZPLBCMOIJDHQQKSJHTRZQPYQMXJOPOOCKXDHWIYWQSRLUNIWSICFTWVNFLUVYIBHFAZQFDMFZVHSPUDXCNLMM");
    const char tmp_msg_0[] = {16, -110, 95, 67, 93, 68, -92, 61, -61, 79, 60, 86, -32, -106, 49, -52, 120, -51, -77, -7, 22, 41, 81, 36, 29, -66, -39, 67, 55, -65, 75, -42, -20, 10, -67, 87, 118, -125, -30, 97, -38, 42, -122, -99, 17, -96, -108, 10, 79, 46, -127, -17, 107, 73, -17, -37, 21, 115, -83, -28, 46, 82, 113, -67, -59, -24, 95, -31, 84, -9, -103, -33, -6, -14, 32, 121, -53, 10, 101, -80, -52, 57, 58, 107, 4, 81, -53};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DXERWXCCNVQJOKNPGVKPIIBZOFTBDVEJYEPOTLQUQUSZCKPLFKGHRZUVOREQKEYLMMLYDAANLJHFNOXVBWEYDRBUMGMZLYWGOVZLN");
    tmp_msg_1.plan_size = 23623U;
    tmp_msg_1.change_time = 0.029598052111598272;
    tmp_msg_1.change_sid = 44743U;
    tmp_msg_1.change_sname.assign("MMSVPIJBCRVZLEUAFBLYZGXAKENWG");
    const char tmp_tmp_msg_1_0[] = {54, -104, 5, 78, 109, 11, -58, -49, -49, -59, -41, -105, -94, -100, 45, 84, -1, -59, -22, -90, -98, -18, 119, -120, -113, 39, 84, -57, -68, 125, -68, 81, 74, -20, -116, -127, -103, -29, 71, 117, -96, -121, -35, -86, 16, 104, 52, 29, 119, -30, -50, 14, -30, 24, 91, 115, 77, 47, -101, 63, -77, 82, 64, -88, 26, 68, -59, -73, 32, -94, 108, 60, 108, 87, -108, -76, 91, -69, -82, 125, 60, 113, -10, 78, 13, -47, 34, -34, -3, 101, -25, -10, -68, 24, 38, -97, -82, 3, 77, 29, -3, 1, 117, 8, -33, 99, 77, 54, -21, 32, 44, 34, -43, -37, -35, -113, 112, 102, 28, -76, 125, 17, 107, -55, -96, 112, 102, 126, -118};
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
    msg.setTimeStamp(0.7567212896634063);
    msg.setSource(1166U);
    msg.setSourceEntity(33U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 5982U;
    msg.plan_size = 344141864U;
    msg.change_time = 0.9820522967601347;
    msg.change_sid = 34107U;
    msg.change_sname.assign("NELDNTMUXJYIWEACKLAHBOGTYYDRDJGZAWZTCPJXEFUPXTWKVAHGKNHNTJKBCIUHDVGFOSQKXFPGUDEWPSMOLISJQNVVZNESBCIKRLFAQTKNNUPUXWDHHWBBRJADSOOUSZ");
    const char tmp_msg_0[] = {1, 30, 73, -54, -8, -83, 51, 5, -106, 114, -48, -32, -21, -123, 87, -96, 113, 70, 65, -108, 23, 50, 81, -78, 106, 90, -21, -69, 119, -22, 115, 50, -123, -47, -102, 104, -126, -64, -86, -42, -4, -81, -77, 39, 43, 90, 3, 0, 48, -30, 0, 44, 96, -94, -62, 98, -71, -11, -45, 11, 22, 20, -51, -10, -107, 98, 40, 80, 122, -96, 11, 82, 88, 8, -121, 94, -108, 43, -106, 69, -7, -87, -101, -122, 53, -63, 125, -115, 101, 40, 49, 118, -121, -96, 83, -110, -25, -65, 40, 125, 18, -120, 31, -121, -115, -48, 58, 59, 111, 37, 25, -117, 90, 78, 62, -50, -2, 89, 74, 67, 65, 100, 21, 112, 1, -40, 38, -106, -107, 46, -36, -76, 36, -36, 62, 68, 122, -86, 115, 6, -90, 60, 100, -16, -109, 16, -113, -6, -7, 107, -13, -10, -26, 82, 66, -48, 30, 38, 64, -39, 39, 2, -68, -44, -47, -36, 56, 14, -45};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UXFTDHFRHJMHNXNURWKUKWGLETESDCDQNLKURHBSLJACKLGRYWQGQNBRDFITSCCYIANSGDVHPVEVBQITIWTPLFBWOEOMV");
    tmp_msg_1.plan_size = 46893U;
    tmp_msg_1.change_time = 0.9882033579373848;
    tmp_msg_1.change_sid = 52641U;
    tmp_msg_1.change_sname.assign("KCTZBBXZONOHSXDCGIMOOYVUARUVBUWSHHFQDMJEDRMLDWMGPOEPFGYTASQJLUOFXPNYKUYRQVQFYLTCIYDWQJCJZVEUJOCKEMHKWVZCHIGYEBMNMRKSELMBKTCE");
    const char tmp_tmp_msg_1_0[] = {105, 69, -87, -47, 65, 22, -105, -91, -39, -85, 106, 104, -86, -104, -56, -33, 117, 44, 44, -18, 28, -22, -51, -5, -91, -37, -29, -27, -104, -91, 67, 48, 79, -17, -85, 113, -111, 10, 63, -27, -108, -95, 107, -49, -1, -51, -53, 109, 59, 49, -128, -92, -56, -73, -45, -109, -53, 8, -30, 59, -68, -67, 24, 107, -67, 126, 61, 115, -60, 55, 102, -106, -86, 32, -22, -40, 38, 36, -117, -21, -34, 117, -76, 53, -56, 124, -37, 46, 69, 22, -62, -83, -121, 24, 30, -78, -36, 72, -17, 66, -21, 106, -56, 95, -36, -113, 71, -65, 93, -46, 121, -90, -108, 6, -107, -61, -44, -43, 95, 12, 13, -45, 112, -128, -65, -21, -1, -119, 92, 111, 5, 0, 98, 110, -23, 113, 108, 71, 89, 11, -29, 117, 17, 104, -95, 64, 3};
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
    msg.setTimeStamp(0.21391341077171422);
    msg.setSource(34145U);
    msg.setSourceEntity(136U);
    msg.setDestination(20010U);
    msg.setDestinationEntity(207U);
    msg.plan_count = 21874U;
    msg.plan_size = 487817548U;
    msg.change_time = 0.873065692619728;
    msg.change_sid = 47140U;
    msg.change_sname.assign("ULDSYVPQYVSMWJMNESVKYYQANSVFTBAWQSLXCXKARZKFGBFTQBOPKVLTXFTLRSRSZCOIMGBR");
    const char tmp_msg_0[] = {-10, 117, -19, 99, 0, 109, 74, -62, -39, 69, 87, 11, 21, 33, 85, 36, 121, 9, -115, -5, 65, -64, -43, -21, -74, 72, 24, -29, 99, 66, -25, -9, -58, -20, -19, 36, 58, 28, 71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.37267317463332317);
    msg.setSource(62761U);
    msg.setSourceEntity(132U);
    msg.setDestination(24520U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("RVYXERCSRZRFEDXSCOVPXANVIASECRQIJRKWLZWDMOQMZINBPLHSHJWVGIYKVSOGHNLPQKBGJNJFIPTGNUZAEKLLXYYYPYXHRICJZMBFREEAQDGEFVUSSOZFFQTOPGHVDAKHSBUZUGGCWBDYIMBMQUKUHRJSTWFTXEOQJCLTPILFQNHNWTHDAKFWPXAOYTCXXVZNZCPUDBZKTNTELEUWMDDGBLMIUSGYNYBRUWMQFPJMHKOAVOLXTIJAA");
    msg.plan_size = 24151U;
    msg.change_time = 0.583195665553941;
    msg.change_sid = 27788U;
    msg.change_sname.assign("OQLBGOYDSPURQXHPQKIVEWBHLOFRSWFKFPXXFKRQAWGZUVGTHNJICDREPSIMUWNNBLLMTHXCJHDQXAEIVTJHAPSLKJMDLYWZZFSOTNCXFVSLQDVBLISRHMEAYPMRUTAENFYRNKZYYYBWTGUWSDHPNAPYOKRPEQPLGUJIVZOTXZOMACBAVCZEBVJ");
    const char tmp_msg_0[] = {-22, -85, -38, -116, 16, 92, -77, 114, -51, 57, -82, 39, 52, -103, 117, 43, -53, 67, 102, 90, -23, 13, -67, 98, -46, -78, 79, 97, -41, -90, 97, -113, -32, -71, -50, 76, 66, -55, 71, 73, -104, 37, -10, 115, -21, -81, -19, 52, -30, 87, -60, 55, -41, -7, -37, 83, -33, -27, 46, -5, 21, 92, -45, 111, 96, -71, -6, -88, -95, -77, -60, 89, 49, 100, -21, 105, 54, -42, -15, -8, 90, 72, -45, 23, 110, -29, -72, 117, 40, 120, 110, -30, -18, 85, 40, -45, 9, 116, 8, 17, 125, -79, -15, 90, 64, -89, -26, -4, 46, 58, 92, -18, 3, 29, 50, -113, 56, -28, -41, 116, -89, 79, 66, -13, -95, -53, -105, -19, -101, -68, 83, -121, -88, 113, -84, 78, -60, 41, -7, -69, -99, 37, -42, -65, 116, -88, -5, 55, -49, -25, -11, -34, 114, 88, -35, -4, -104, 108, -98, 75, 38, 77, 118, -22, -90, -40, -127, 110, 74, -21, 72, -65, -124, -87, 44, 36, -119, -119, 59, -7, -51, 26, -103, 110, 28, -11, 10, -103, 84, 86, -104, -101, 53, -94, -10, 57, -62, -127, -83, -54, 100, 59, 31, -64, -123, -108, -60, -17, -78, 98, 109, 21, 16, 21, 94, 107, -12, 76, 112, 21, -9, -72, 103, -56, 119, 65, 119, -97, -15, -61, -7, -59, -33, 10, -42, 93, -48, -53, -47, -92, -121, 56, 42, 51, 95, -1, 84, -104};
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
    msg.setTimeStamp(0.7128576673420386);
    msg.setSource(5356U);
    msg.setSourceEntity(136U);
    msg.setDestination(13074U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("OHILMUYTFWWDQEFXFQKFPUYOSNRFOPLYOVCZDRMLGFPPAVDQPTVEYCIIDGKKLOWTGJEHJWKKOTZZCPAITVQMWEJKXSVJHCAMUBGVWJPAFYLZZRNHCDQLQYUTRQQGLLAPGUVKKKMNSBJEFGFNMIUCQBXOPSRWDOXQRZMHAOTHSKIWSHBIVEWASSDMYANZLBARJCIURBYJDTXGEIXCEVMEMFNZSNZHBGXPDXXRCAHTYNHZBNCBJOL");
    msg.plan_size = 25006U;
    msg.change_time = 0.3519165486958723;
    msg.change_sid = 56769U;
    msg.change_sname.assign("BLQLRWAEJAUDMWUXSDLUCNQCEFVONPMINJWVBPYZAYMXXRBXEJBGIKHBIZSUDTPTTDBOZGHINRCWBCPSCKMCQTOQKHAEKQZNFLIODANSUZOGDHUZJWJHNOGQVPWJTDLMGN");
    const char tmp_msg_0[] = {-79, -121, 100, -11, -30, 16, -112, 112, 35, 33, -43, -45, 49, -3, 24, -119, -41, 83, 41, -54, 103, 41, 86, -109, -10, 51, -81, -57, 23, 22, 39, -23, 6, -108, -68, -99, 45, 63, -120, 110, 67, 7, 6, 75, 58, 1, 112, 35, 113, -48, -84, -25, 108, -32, 29, -60, 70, 120, 25, -86, -75, 17, 50, -30, 33, -64, -77, -9, 38, -54, 79, 26, -1, -98, -64, -29, -47, -38, -13, 62, -104, -18, 1, 51, -31, -3, 65, -50, -67, 76, 114, 60, -95, -50, -10, -78, -123, -82, 124, -128, 104, -13, 20, 10, 3, -51, 62, 63, -38, -79, -64, -122, 9, 62, 56, 106, -72, 48, -67, -13, -114, 57, -34, -77, 47, -6, -16, -122, -78, 39, 90, 97, 70, -53, 77, 113, 39, -123, -27, -61, 64, 46, 117, 20, 103, 80, -82, -73, 100, -107, 36, 51, -70, -54, 102, 53, -42, 68, -4, -78, -109, -113, 118, -114, 30, -88, -101, 98, 48, -31, 9, 26, 76, -48, 104, 12, -32, 4, -94, -98, -76, -128, 62, 72, -45, -109, -6, -2, 102, -91, 90, 57, 126, -83, 57, -79, -102, 4, -111, -81, 54, -17, 97, 33, 11, -43, 114, -126, 86, -21, 110, -123, -41, -33, 0, -95, -112, 45, 4, 43, -118, -44, -61, -15, 30};
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
    msg.setTimeStamp(0.17141381230400998);
    msg.setSource(54956U);
    msg.setSourceEntity(0U);
    msg.setDestination(19245U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("SFEGZTGTDMJZDHSCYZNUCVLIPXH");
    msg.plan_size = 51802U;
    msg.change_time = 0.6153312051912366;
    msg.change_sid = 54823U;
    msg.change_sname.assign("EQUTQQMWRPDHXCBIFHKCNDGXHSJECCU");
    const char tmp_msg_0[] = {0, 65, 12, 105, -56, -103, -119, 43, 111, -27, 108, -58, -113, 2, -116, -71, -42, 23, -61, 41, -84, -79, -53, -62, -85, -95, 123, 72, 7, 98, -15, 18, 56, 119, 90, -24, -28, -122, 12, 3, 68, -121, 25, 120, -52, -70, 103, 30, -125, -13, -110, 38, 94, -62, 122, -33, -42, -67, -54, 26, 91, -58, 34, -110, 72, 80, 98, -28, 123, 75, -10, -7, 123, 102, 83, 44, 102, -23, 123, 3, -78, -38, 47, 6, 36, -79, -35, 88, 122, 36, -80, -78, 24, 22, -10, 89, 15, -54, 42, 94, -80, 41, 35, -25, 94, -60, 1, -52, 8, -105, 108, 62, 72, -73, -71, 8, -52, -111, -98, -65, 50, 40, -29, -9, -51, -70, -19, 95, 89, 34, 39, 39, 15, 88, 78, -27, 108, -32, 35, 95, -22, 93, 3, 5, -51, -104, -2, 125, 111, 98, -12, 77, 52, 75, -76, -28, 13, -123, 91, 118, -18, 48, 82, -116, -111, -120, 67, 45, -116, 7, -21, 35, 10, -47, 124, -16, 69, -104, 1, 71, 104, -8, 60, -74, -69, 93, -39, -49, -72, 106, -75, 69, 26, -74};
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
    msg.setTimeStamp(0.17578987471151863);
    msg.setSource(37093U);
    msg.setSourceEntity(84U);
    msg.setDestination(32905U);
    msg.setDestinationEntity(66U);
    msg.type = 168U;
    msg.op = 198U;
    msg.request_id = 44045U;
    msg.plan_id.assign("GLOMZNVRJFNVUJTBSXJCYETWVAAHGWKXAZEDUUWWNBRPPTTVFRMTPJQBRODMSZUYGZBWOKAUILTFEMKQJXNCGDUDSNVLEPYECGZQXVIGJTONSCHJLFELLOSLBSRCKCWPLGPJDRTBYHEZWPSZARPHHBPYOGHXXVRJFZWXIALFUKHOVLOTBMIXOCCHOIUFVGUIYSFQMKAMNEKIDTCNI");
    msg.flags = 32446U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HNLVFJENYERTMKVFZGAJDTUWCURZFPHFKXAPDKOJLTCMRCZWHODMEHYPFYYHBTVDJCZVJBXWJKSWTSGMZSRLYVUSLUETNRZWGCCWUIYLBIPSFQRGHTKZDJIKLUPCQCHZINSLSYMQBVXUBWOOMRNGEPEEGCUYEE");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 47591U;
    tmp_tmp_msg_0_0.lat = 0.8370440456491842;
    tmp_tmp_msg_0_0.lon = 0.09629603335428805;
    tmp_tmp_msg_0_0.z = 0.6814905577614218;
    tmp_tmp_msg_0_0.z_units = 194U;
    tmp_tmp_msg_0_0.speed = 0.875811646109669;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_tmp_msg_0_0.duration = 13455U;
    tmp_tmp_msg_0_0.radius = 0.7921024257405562;
    tmp_tmp_msg_0_0.flags = 168U;
    tmp_tmp_msg_0_0.custom.assign("PKFGHDPBSRJEENTOWVOPFUIOPZMFSZTTEYPHDHIIFHKJDPWPZKFBMQMCHFLWJCGLNIZSLAYPRAAMWQQBRQJDLEVLVXXXSOZOIRIDRECYMUUTBUVTAHAYLFANNRCDKCXUKBDJQPUFEZISYJTXSVGWYTU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QRZFYBFDIUUEAXCECXVCJAVYVGXISBOUTLULSKBEPZTCSNBPFWMLJQWJZWNDBNZSSXLHHDUSMLBTXQNQLAIGRRIMQTHWJOERFHUROEWRM");

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
    msg.setTimeStamp(0.8888376790176703);
    msg.setSource(16085U);
    msg.setSourceEntity(185U);
    msg.setDestination(36668U);
    msg.setDestinationEntity(138U);
    msg.type = 54U;
    msg.op = 22U;
    msg.request_id = 23266U;
    msg.plan_id.assign("ZOMRQCZBECZUEXLTXNBTRYALIOPYWARSNVVXZUWBEKEVCQJQROLPWVWOCMNQSULZJGYPKBUIPWIEVKXOYPAKBITQ");
    msg.flags = 14585U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 84U;
    tmp_msg_0.tas2acc_pgain = 0.24641893259232084;
    tmp_msg_0.bank2p_pgain = 0.023023103076568407;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VKIPHAEWQCKKCDQMJEHTDVXEEFCEIKGKSZJQTRHHSJUBRQVAROOFFBNDTBLIFBJWEFXUDSVCFTIMZSLFGBZJATCZGFECXFOVRXKWZPMMBATUWNXHXLBHYQHIMGSUMJEWNQVYWZTNVSPSUAKDCIODJGXPSKZAGQXYZKRDZNIHUPRYAGOCSFYVPGYPDYJVLEWMPHLWRUARTNYPJLZUGKODWWH");

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
    msg.setTimeStamp(0.8716510245261814);
    msg.setSource(57347U);
    msg.setSourceEntity(190U);
    msg.setDestination(5120U);
    msg.setDestinationEntity(148U);
    msg.type = 224U;
    msg.op = 63U;
    msg.request_id = 41902U;
    msg.plan_id.assign("EFHTHTGZTHLZOCXUAGHODJSMPOFJXZUDWYUXJSVOMZLURIXBNTWYCUGWQJNKOEEYKBLDCMEHELLOVPRTUALWMYUCWYTLDEBYMFBSTCBXGPYPZIIQMLKSDXHJKRPVHIZCRWRMJQYFSEQIZFHEAAJRVUTDBSCLI");
    msg.flags = 9780U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 130U;
    tmp_msg_0.speed_min = 0.5023956529772441;
    tmp_msg_0.speed_max = 0.525103130273425;
    tmp_msg_0.long_accel = 0.005793785487410941;
    tmp_msg_0.alt_max_msl = 0.05360670615279817;
    tmp_msg_0.dive_fraction_max = 0.11516488787071544;
    tmp_msg_0.climb_fraction_max = 0.6671891649171503;
    tmp_msg_0.bank_max = 0.4594931880069343;
    tmp_msg_0.p_max = 0.7288686651864128;
    tmp_msg_0.pitch_min = 0.0828982768564851;
    tmp_msg_0.pitch_max = 0.13562144853126534;
    tmp_msg_0.q_max = 0.09174984190979674;
    tmp_msg_0.g_min = 0.4043583314870367;
    tmp_msg_0.g_max = 0.1516165110935942;
    tmp_msg_0.g_lat_max = 0.731167298750353;
    tmp_msg_0.rpm_min = 0.7325390556899208;
    tmp_msg_0.rpm_max = 0.1397385614588882;
    tmp_msg_0.rpm_rate_max = 0.19090703111490448;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RDEOJMYPCVSTGVLZHYQLAZWSNFZTPCYLZFVOMXYCPPVLLYNQHZMQTKKDKYJDTCOTFMAMQUUJBTXFAKPQFOJWIGBPKRABXEWSFXBUMHKKBKCHDEVYEFSDHDZHGIJGNXCSNYYHIATUCDPQILHNJWHQRMISL");

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
    msg.setTimeStamp(0.6065540762785331);
    msg.setSource(14844U);
    msg.setSourceEntity(97U);
    msg.setDestination(15280U);
    msg.setDestinationEntity(236U);
    msg.state = 5U;
    msg.plan_id.assign("TURPBFHCGOZYFKLSJZOXPQNADCWZCAJTKIMUQYVTKMKIHMGCWEWTTMFQOHEXEORVQZBURDBPXRWVBEBFDNEKOBYZPPQVPJUQHAJDDQETGWOIHSWMEDHSSUOFFFNILJPCMSWICMI");
    msg.plan_eta = -663045681;
    msg.plan_progress = 0.5469404672802466;
    msg.man_id.assign("BJMCYLYLAHUIHSIESAYPDAKCOXMYSHILJALEWEJKUKCAMNWGQXNOQCDRVJKZGGVTUAXCAFFBIRUEZQYTHQMPKVTTSACCULZQPGKSFXZGFOPDVBIEBNIRWOPDURLQHGYTLLKYDDRSXTGDVIYJKNBPXOQXZMT");
    msg.man_type = 43070U;
    msg.man_eta = 1880649954;
    msg.last_outcome = 171U;

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
    msg.setTimeStamp(0.22679210969619723);
    msg.setSource(7074U);
    msg.setSourceEntity(226U);
    msg.setDestination(20263U);
    msg.setDestinationEntity(104U);
    msg.state = 135U;
    msg.plan_id.assign("KFKCJRRWMXGHYBBYEXBSIUAZPVREDFPEOCZJVNQWKKTHHVUKBMHSLASYMMQXYVXLUQNPZTMLEPPJZDYJNFBFQATWDPCGAHWDPWFFKNQWNSULEJPDRRQZIPXRMYVTKIXTKFNUMGNZETTOYLINHWCNWGQMTRUAJUILBBIMEARVCVZZOVAOG");
    msg.plan_eta = -1858112878;
    msg.plan_progress = 0.9623304411482081;
    msg.man_id.assign("QKAERAGMLDJIVPXBTOQHQHAGPDWYIMSTNSGNCRWQAYHNIBVMOOHJLCTMJXCZXEAXLNKQHDETWIDIMCEOEGKVVINPAJDYMLLMYBKYETWHOQPDYAGNURJXLBXUFHCOEPYLZHSGFEZRXPYQGBDUYQVCGDTNFEBJOWWWJGKQOLTSBEMZZRKPZHSIITCSMVQRVPHKADVRZGFBAPSFJUOXATKWUKOJXYDSLJUC");
    msg.man_type = 26753U;
    msg.man_eta = -147427561;
    msg.last_outcome = 84U;

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
    msg.setTimeStamp(0.14624337574134882);
    msg.setSource(9886U);
    msg.setSourceEntity(84U);
    msg.setDestination(12090U);
    msg.setDestinationEntity(251U);
    msg.state = 232U;
    msg.plan_id.assign("SORBVFXLAQAZXYDYXHYMMSLUPOYPPGCGAZIMRQKKLENGPUTPZYPQNYOQJKMCDKAEHWMBNHJCNRETOQIXDJKMAUMYTDRBNFXYSGRRVHTGLOQZWVMJQIOSEFHONJANUDVTGKFPUBQXZJNVQFDSGDLLWXUCZPCAFEURCGDOJR");
    msg.plan_eta = 739196508;
    msg.plan_progress = 0.9757292352398396;
    msg.man_id.assign("OQDPUBUSWYOQCLZDHNCWDIHRWLCQCZVBMGKMDDYSPIMXOEAZUNBPGJIAZNBMGJNTIHELEALZUBOIDMIAAMMTRJBRZPKMAOIXGSZLEQNTNCKMWFJXSSNXKLUSKECYWTWSFJXJOROVGVVWDEPPJXHTQJLKTIAHHGFYGCBLCHEUPYCRRQETATURSDSAAYSPPOEIJWFGVHZRFZDYZCXFLFHXVBGBJNDVVTUL");
    msg.man_type = 64373U;
    msg.man_eta = -697456143;
    msg.last_outcome = 170U;

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
    msg.setTimeStamp(0.7194452049575214);
    msg.setSource(18974U);
    msg.setSourceEntity(162U);
    msg.setDestination(15508U);
    msg.setDestinationEntity(12U);
    msg.name.assign("VEGUMPUOBREBZBLNDDYIXHZYVKCYRIKTMPAIHTWHMZZKMGJFRLUZOWSXQGHPSBPITCXG");
    msg.value.assign("CIKZUPUSKKODUOOMLBXVGVFYRZTGIPWEILTTSGZDZDEXLQATSFKVAXMPWORFLJXGTVWHNZIUUVYCJPTJUDPELJVEYNMGBRWNLFQHMJHICCOBDYPEWYNSZLODKODRXEVOVBANAWOXXLJSRQSEYRFPPAQVCHGQWCIHQHQBGXQFEAUBKBKMYBIJWVKFNFKMFCHSNTDZUDIBZYLCMNTPIRZSYBNUJ");
    msg.type = 94U;
    msg.access = 108U;

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
    msg.setTimeStamp(0.08510890237203128);
    msg.setSource(57805U);
    msg.setSourceEntity(110U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(222U);
    msg.name.assign("PBAALUZCJIOFMQKMWEMOOHGNVSCKAYSRAAMOSJIFQLNIULSFGPKIDFEJIHKPKJZURVQKEKNGREONYCAANIBHNDAQLCLTDLVZLVXWHXXCPDYDWVNFJYRUFPVDRGCMBDBYTUEQIBPXTHJJJBXPHPZQAIYEXLKRCCNTGSSQJKDXSBWNWMKEHWUTYFQ");
    msg.value.assign("WZYBYEDCHAC");
    msg.type = 85U;
    msg.access = 238U;

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
    msg.setTimeStamp(0.41918248080229326);
    msg.setSource(36772U);
    msg.setSourceEntity(55U);
    msg.setDestination(38130U);
    msg.setDestinationEntity(201U);
    msg.name.assign("RVAORNLTXLSDETFEPVYYDJHMWNNXTSHFHTYYHOCLXGJXRHNOQDVBG");
    msg.value.assign("VBXRMSBXGEXWTGEEUHOMRVUZWLEUKCIMFOLMFITYEJSDSZRCEEKFNAKYVKWNMANUBOZ");
    msg.type = 149U;
    msg.access = 68U;

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
    msg.setTimeStamp(0.13412047495366852);
    msg.setSource(8716U);
    msg.setSourceEntity(7U);
    msg.setDestination(2412U);
    msg.setDestinationEntity(173U);
    msg.cmd = 38U;
    msg.op = 201U;
    msg.plan_id.assign("ASSCLTSRUG");
    msg.params.assign("JLHCYTZLHVMDYVRBGMPAAXTCOGUTTFJKIDEMQCRNKUXWBZDKJNLZIRVBRUZFYIVBKTGPVHJYMOBDFK");

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
    msg.setTimeStamp(0.6634430206454898);
    msg.setSource(9556U);
    msg.setSourceEntity(159U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(14U);
    msg.cmd = 245U;
    msg.op = 242U;
    msg.plan_id.assign("VJOFAWAUCJVYUWPKRTIYAWBTMXSOIOKGNLEXDZWWEFNNAHAXBSPGILJEFRWTZHSABMKSTIIBNJGQTYVV");
    msg.params.assign("MNLFZGEYGJCHJBWWFEFWAWLTDOSZSIARQCXYKLGMYSNAVEUKVTBNERKTQGNKTINARDRYUPDEGFRTKIPJWZOI");

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
    msg.setTimeStamp(0.8384562353584148);
    msg.setSource(967U);
    msg.setSourceEntity(84U);
    msg.setDestination(42747U);
    msg.setDestinationEntity(158U);
    msg.cmd = 179U;
    msg.op = 180U;
    msg.plan_id.assign("BRVGQTEUYJPVZDVHLMMGFFBZOPCFATGQWBPEPQUXMQZGTHDCULRXDTMYMFLFIAECROTDPJIBYMYETYBXXQSHLQJFXU");
    msg.params.assign("BXNUKPEPDRUKYZGQYDVPMBPSIECULOOXHVXQBQWNFASNYEZYOCGHSFBJZWMBJBJKCAKNUWEYXMZYBKICWXPPDLXRUIIZTFXVFCQTLSAHOJCJRPQZCDXVEKQAYNGERDYUZLENKMLSDHCPHTJGMLYIVKOWGHKIFQQXMNLIWAJWFCTBQMFFVWSQOWRPVPMTAVDTUVSNGBJZKARHSEUOVJLRTRHSMLYRNIWLDU");

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
    msg.setTimeStamp(0.5227210029346125);
    msg.setSource(41743U);
    msg.setSourceEntity(220U);
    msg.setDestination(25198U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("LFJFKNYGCESMNGPSLIWTNHUGCJBWOVMHEZPCRKMWQHOZAUKZVMJIQYUCAWNEVSDRPZUCCJHFSRMJENGBFEFIVQZQJMUXWWNGGBTKLLR");
    msg.op = 166U;
    msg.lat = 0.31549027010010966;
    msg.lon = 0.7945608767432197;
    msg.height = 0.08643302431767119;
    msg.x = 0.7635928118830183;
    msg.y = 0.16945986102476795;
    msg.z = 0.27275225553268156;
    msg.phi = 0.4134138647176706;
    msg.theta = 0.5582011604223518;
    msg.psi = 0.318249791882369;
    msg.vx = 0.4186866876697187;
    msg.vy = 0.24941308799186113;
    msg.vz = 0.384148736375846;
    msg.p = 0.4012071365588986;
    msg.q = 0.6953057419945726;
    msg.r = 0.687165863698932;
    msg.svx = 0.03252062330698757;
    msg.svy = 0.15262747039156077;
    msg.svz = 0.35987862184926245;

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
    msg.setTimeStamp(0.9603712185707419);
    msg.setSource(13278U);
    msg.setSourceEntity(36U);
    msg.setDestination(18713U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("PCHKIJEVXBDQFSKPSTNBTUXWHGTOYMKZTPNWXUOVIULWMFZFYSRYNZBPJFCQGJOAVNUVWYBCMGDLPDEULBYERAFFPFLMCCKHIILCEQNQRJJLTZVYABVGPVCNDNVQDZRWGFZHMQUXFTJGWDANJKTZKJNQBKWAXOYYDJEIHRRVTHUPEBQSEUISC");
    msg.op = 65U;
    msg.lat = 0.7513805072872013;
    msg.lon = 0.2891900600514773;
    msg.height = 0.678622419562884;
    msg.x = 0.04666044754045218;
    msg.y = 0.7033803827416529;
    msg.z = 0.3498398767372788;
    msg.phi = 0.46133459305737035;
    msg.theta = 0.37291446213764134;
    msg.psi = 0.49436137068789365;
    msg.vx = 0.9999003768577409;
    msg.vy = 0.4225106347991363;
    msg.vz = 0.34516554556595436;
    msg.p = 0.9072254688960639;
    msg.q = 0.4405106285030239;
    msg.r = 0.12197179539305236;
    msg.svx = 0.7406467565366754;
    msg.svy = 0.9973898495074774;
    msg.svz = 0.7407787919707902;

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
    msg.setTimeStamp(0.2458371682891638);
    msg.setSource(38719U);
    msg.setSourceEntity(183U);
    msg.setDestination(15410U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("VZYWULGICYTKRJXNUKHIGBELCWSEKKDQQGSJBQLIZXMIEFJGTQNYVZXCZHYLGRTGRBYQFWPMOJPJJNXPOHRTRVWGFUOPNPPVOUAVAKOAXJZAWRJOVKQUCLBNSWIBMISDZEOCLFRVRUSTANVICCHZNXHQGLVDJDODGQSCQXEHZNPOEIAKMWHULSFTRMOUPTYXHBAYLBFKYKD");
    msg.op = 39U;
    msg.lat = 0.19535631755818605;
    msg.lon = 0.2101687833854805;
    msg.height = 0.10425302097066247;
    msg.x = 0.09405843562537763;
    msg.y = 0.3093083444086989;
    msg.z = 0.04930662371440131;
    msg.phi = 0.1969936328838785;
    msg.theta = 0.6475677793477408;
    msg.psi = 0.5162584347496608;
    msg.vx = 0.46335877071424336;
    msg.vy = 0.8850619199349363;
    msg.vz = 0.6358289929449802;
    msg.p = 0.5321075582146872;
    msg.q = 0.34320479972032536;
    msg.r = 0.2358211512023507;
    msg.svx = 0.14608064828148348;
    msg.svy = 0.6512899630611381;
    msg.svz = 0.2880309276023084;

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
    msg.setTimeStamp(0.5739907724635647);
    msg.setSource(43129U);
    msg.setSourceEntity(142U);
    msg.setDestination(9028U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("HEYLQMREVIECFPBCJBSJCWHGIIZFONENURAPWNQECQADLMAXMHYKRSLLGVKSOBUVCAZVTSYNCZTSBXQPXKQRYPTGWFPDQRXWNEJBXSZDZORTYHFUUDSUYIIHTIEDIWLPMDHFYVXQDTIDLPXGGNKUAIMGBN");
    msg.type = 219U;
    msg.properties = 138U;
    msg.durations.assign("GPIGWSPZNLEGDTADZIZKVBHWOFLYYLGWVYEDVINAAQSRTISOBSXWRJACLEIRMHZAHZRPBVSUTIMNIPQOFSMEVHCLLRWQRHJMZBXBCWHJQBKJDRBAPQUYBKZKTGNNONTAJXQDCFWNYRIQXARSILVFDEKKTUFCMZFXYAVJXVKZWUJMRUIHNPUTOLLGGOYFNSFDYKEGHXMJKJWTXYUOHAVDFUU");
    msg.distances.assign("YPISKGPLNHEPNUMIRKAEOHXTXZFKCTFRAJABCSZIZETFRODOOGIBKOTGFHZNQFDYRVTLNKPLYAMNQEXAHSBQPJOVCSDJHVIFBZXWMXQUKFPMSBWZROKMKBLKHJTWUXIUJZQYCGGUFYBAZNHCBEXHUPLIEJWDKGWRERDWSDBYMNDYIVWSAUAJRQDYATIRPQNQUCCCHGVOCDMFZEXYEQMOHRJULLJNADSVZQOYBP");
    msg.actions.assign("GZWMJOBSXZBHAFDFUPWTBAAWBUJWZHBLDNTPOZOMTAVACHNTZIIIVLIRAOUFTJVNNOKRJMMXQHMCSUKQ");
    msg.fuel.assign("KZZUYYGBWNGGSFQFKLSRKXSFLDDCGHQVBCJJNWUJWMIOPYVFTT");

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
    msg.setTimeStamp(0.27775208981539823);
    msg.setSource(19311U);
    msg.setSourceEntity(194U);
    msg.setDestination(7678U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("UWZNBEQOMANLFASRMEJNOSLDWUODRWJKADYDFXYGIWIZSVSGMQXTQFGNVQQPKHJJG");
    msg.type = 6U;
    msg.properties = 30U;
    msg.durations.assign("QRCDAWYTYGBKKDHUSRAABJWRGWHTPDDTJWKQDNVLKFSPVYPCCMMIFEXYLCMMUKBPQNEIOXFUUYNTUPIFEVLXIPHZBDJTCNSEPOKWSFDCHGXZAYJFBSSWUROEZJWHSYAJLORYWGCCNEPMJHVVNAIMCGGVLTCBLFBORTLGLZIIKRXAXP");
    msg.distances.assign("LOTBKQLPALXNVADJBOJSLVEETHISXQZZBJFUIRKIHDUQYMOHKVPCGTLXIXDS");
    msg.actions.assign("KWWAKRXDUMETTEPLNOZRNANTDERFMFKPAEDONWJQPPDIHVMJIVWRQKEGQLWZZCHPTYPQNPCNMOSBCQQZKZOLB");
    msg.fuel.assign("EYZAWAJUZEJFSTXZCKLPZTHIMRZRSNHUQZVQRDQZDQJHNEYXNRCKPYUTSAPADKBOWDONLFUSTXKXUG");

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
    msg.setTimeStamp(0.9487290017584755);
    msg.setSource(43757U);
    msg.setSourceEntity(135U);
    msg.setDestination(36931U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("PNJYFONCYXHMAVQGEPYSHXFQZGCCCPLIKUJLAWQRMJUDHYSFFUWARTUFIVEYIHJATISQKLTJUSMNEEOMWTOKVGJXSLQLQLEBNLDFWSKYIUAVABZABKDVFPRDCK");
    msg.type = 167U;
    msg.properties = 210U;
    msg.durations.assign("QBYKKPNOLJQSEZLVGMKLMQMOYXXKNLHGFXZRNRNSETMOSRXVTVTISZKBFZBBEVQZLXSNAUQIMMOAGSCGADKAFERULNACRCUWQXBFQEXVSOXJZUIQZCLTGEPTPFLDECAHUYZWWDCDWIPOZIMYPDURKDRBSGYUDQWKYKCDFTCPFHUXMHYHBNGSOJFTNECZOEUCTJVFQLUIHPONVIAGDVHYJFPGIDS");
    msg.distances.assign("LWPRIZNYRXQBASQCZATNFLOAXDBTZKS");
    msg.actions.assign("SRCIXLHUDVVVXXPAPTLRGKKURQMTMWUHHYPPSCIVCXGHFPZAABBDFLWXBIQDNUWJJDRZEEHBSTUBFOHDNUKDVOVPZGICAKKPNNLBYPFCOSVXWTRMCSQWGTYQULAWDWJYXJOLWNEKRFNMLANJWISTQUBQAGFYKLEREJSIBSAMMQIGEKDSTZCKOWZCIKGIEXHLZCHYOSVOFRFPOBGTVFFQOBYTXZGMYIP");
    msg.fuel.assign("OORDURTUIBXTQWZQUOUPGPJLPFOMYMIGNCKEESEQQILXSGXCZBYTGJSFFVVSTJQQYMSYHFEKKASBXATMNDSOGNWLIITDBVJUWWDPBBHRNHCJUILHCLSMRHGCWORGJIUEUJARFF");

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
    msg.setTimeStamp(0.5598498273396303);
    msg.setSource(58438U);
    msg.setSourceEntity(165U);
    msg.setDestination(16896U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.32556053488787706;
    msg.lon = 0.287552429556983;
    msg.depth = 0.921354194153737;
    msg.roll = 0.10620598474184662;
    msg.pitch = 0.5815421370029689;
    msg.yaw = 0.6092576487230055;
    msg.rcp_time = 0.12288377319719601;
    msg.sid.assign("AXANRIWLJXOBFZVGJUPWXADYPPDXAMGBFTJOGGKMAIQKHIHEAUHLZHVKHBWKTBWNMVZQCKFJQHCWYMCSYPBLYIZYECGEOQRDDVNILRLJWLFLHGPWCQSYZXMYGGRWVBMUDZRTSEOIADUAXKNERTTBWKXNLOQIURIFZWCDQXZOPLAUPJDNZTBFFYMSTSMATDSPENZUVOEXICQKCYVGJNSTUUYPRVRPJCS");
    msg.s_type = 214U;

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
    msg.setTimeStamp(0.058934639420183954);
    msg.setSource(65162U);
    msg.setSourceEntity(71U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.6483244416251531;
    msg.lon = 0.476787192154434;
    msg.depth = 0.7537397702941495;
    msg.roll = 0.12996614782530702;
    msg.pitch = 0.14563823304526735;
    msg.yaw = 0.22610593544415625;
    msg.rcp_time = 0.9846932313145621;
    msg.sid.assign("NDOKFVUETYKIWCZZIQWQZIYWDUBBTFEXVOBXIKHPGENXCWFZWEKEJFYGHDAAY");
    msg.s_type = 61U;

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
    msg.setTimeStamp(0.09767232663348191);
    msg.setSource(61695U);
    msg.setSourceEntity(241U);
    msg.setDestination(29168U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.1242752644311943;
    msg.lon = 0.773344948340305;
    msg.depth = 0.033747707307433594;
    msg.roll = 0.38142363988338124;
    msg.pitch = 0.9163672311377175;
    msg.yaw = 0.10896861125727864;
    msg.rcp_time = 0.38200657280083206;
    msg.sid.assign("UDRAIQDQLDCTYREHWWUSWZPLBNBUJTXYODPHJSDTIZCNVJXPEZKSGGYUATAATJFRCVUMOIMKKIEFJMYPIHPTKLWNLTKVRCKUFRZZDUTOSXYBACLOCKAXQQNUXUZWFEQMBXFRBEBAROYROGEBOFML");
    msg.s_type = 58U;

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
    msg.setTimeStamp(0.6701256701638774);
    msg.setSource(21162U);
    msg.setSourceEntity(62U);
    msg.setDestination(51035U);
    msg.setDestinationEntity(112U);
    msg.id.assign("SPNCYNFFYUBALNBEQPMXQRECPWZYOLEJRZCZMOATTGZTFOOIXSYLBFNVQVLPLGZABAKQIDWKGUGUTQVQJZKNRMVWDHBHHRUXHUSOJEXYKMIHYEGOHKAKYGKOPZIHHDC");
    msg.sensor_class.assign("DPGQTEXDEDKRHAGCHJFLMZNFSROMRJNRCSXMCYTJPIHMKNWIIIJSKE");
    msg.lat = 0.600218422320656;
    msg.lon = 0.7565199583163273;
    msg.alt = 0.41802161296866736;
    msg.heading = 0.3486031345924261;
    msg.data.assign("XWVAEEGPPXZDLVMOLOCDXREHTMUHAXHLYHFNOOWFQINTTJZSJYGROFHVMKLRUNXYQHERCPSIJQBUODMIRNLWKLOHHBPLXFZGTIXJWAUFSCBTZPVEMTWAMQABYRZWTRACZKYSSMUCUQNWQVZEJCGBYFQLIXPSNYBDVXAJCGMEUIZFRPKZETSPWRVJHTVDNYODMYEOBF");

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
    msg.setTimeStamp(0.9654744017804224);
    msg.setSource(51242U);
    msg.setSourceEntity(188U);
    msg.setDestination(12281U);
    msg.setDestinationEntity(190U);
    msg.id.assign("HIWCIBUWUHTJCKRLKYFDDVCIJXZERLIPVDTVBYQAZCSDALFPMQTTCXGJDMLYIRHXBTUGYSDRSYEOKSGIBOWWPYTWNQHLZCWUGNHEFUAFBUXZZEPMAHGKKWOCELTJDSLDBVSWGPQQHAZOEPFTWNNLRRVPJSGBGOJVFVMNXSUZYRAUNOEENJPXQOKYRMRQRYVMNQOEGQZBNNTHKKKFYLEAXFUJTWLBJUZVSMKCZDAQXBMOCJSHXDFGPAICPM");
    msg.sensor_class.assign("AFILCNQUBYDUNHZPGWCYKECRHNTJLXMVLRXMWYOQKFCFTNZUQXBNFIOSSRVPOKPEHVGCARZOVL");
    msg.lat = 0.664628469840594;
    msg.lon = 0.6492235540377709;
    msg.alt = 0.5857643903737928;
    msg.heading = 0.5136016614104926;
    msg.data.assign("CDBDWKGIOQUAOHMZSXNOVSTPJFLRUVZESKHMDRYOKZDBIWFUNVBMMJFYHXNEYXBZAGZRDZAUUYWFPNGRGHXPVFTAYAEQIWVPTMJKRQPEVGYICGDYFEKXSWHRBLP");

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
    msg.setTimeStamp(0.617590086577502);
    msg.setSource(11443U);
    msg.setSourceEntity(121U);
    msg.setDestination(52213U);
    msg.setDestinationEntity(22U);
    msg.id.assign("WXOZAVPTBOSBHIHURGPEYYNSNBZCPTJQKVPYCOCWXKGHLZGURGACSVJENFUJFLDEDAKILMUBILPABEXZIQKNIANMKZJRCYYNQJNQJCIMFAAKCONXFHSSSOPFPFQIJROFDJSREZFUDPLJQUTCT");
    msg.sensor_class.assign("LOKRVSSPBBQYUUNWXLIUCXVVFZLZQFKBCWXFMQTCLWAANJCKJZOEPPVPHYIGLLXXKIBXHJJBGHVNJUEPRGZDSKHUW");
    msg.lat = 0.8209183682616975;
    msg.lon = 0.6672926605733999;
    msg.alt = 0.6685519427338101;
    msg.heading = 0.26366338399007827;
    msg.data.assign("YVHGEJFWHAZBAIBRHEGUCKKSIWGTHPVCOIWROTIBYIQZCHGOLAZUILXMNXPSRELFOVCPQSHRCITKWNYDNMFMWRGQFERRMUJKGLMSBWCUFQSOFDYJRVZZQTXXPXAKTBDKWULZQHNDCSNDXLOZWVVJBELTBIGLPKAVLCWPNTSJEGUTYHJOOWDEQTZAPDXXAMBCAEUHNYASMPFNMFUATSZPNGBEXRK");

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
    msg.setTimeStamp(0.10287809601557318);
    msg.setSource(51191U);
    msg.setSourceEntity(47U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(118U);
    msg.id.assign("RNGWFFUXCTZJYEJSJOGMLIDREEASKNDPOENHCSZEFQFZTVSGOHZDYVOHHKGHJJYBABQMFSZHJPSDQAWUVERXWHACVSQQSVRPONPYTBLQSOTPIVKNEPUEXJDHCVRWKYOAMBZQKYBIPGUCFQWPQRWUGWATRDUAVYGVNDXXLIDZBCLUIMVFLDRLAPURSMGDHGLBCZLFONBZPMIUNINLJWZIFBKXKQXWOEXAMGYNKT");

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
    msg.setTimeStamp(0.04700650403928397);
    msg.setSource(22485U);
    msg.setSourceEntity(160U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(214U);
    msg.id.assign("FTDBPVZWHFOOBOMJIDCLUVSXUCTQIZGQXWJCOUAANPQDOARWSQLYBFKRROMWWNRYRTSXRGZTYQMHPULZFHNRXLCCYIVRAQOSIJNTQAMCKGZHFXMXMD");

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
    msg.setTimeStamp(0.8920891154795045);
    msg.setSource(42414U);
    msg.setSourceEntity(71U);
    msg.setDestination(15952U);
    msg.setDestinationEntity(109U);
    msg.id.assign("YJLROHBJVSMNJPANYDMDMJGECB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XNLXSLRGJTBDSYYEXQXHASOBNDVBWACUHZPBGKFQQDJDJTAXHGUMJGAUZGOLQPLJCXTWPXTDLIRZIPHQSFRRRPMTHRKDVEQQMQYNDHOUVREZKXPMMUMUMYSCJTLHWJBWNXGIRCNGKWUOKHTLUTIDFEONFXVEZHSKBEMIEZWPACEBHVJVKZVLFWWIBAKGCKIUQFBRAMNUASJWNVDSGOAOLJSPZYVGSPYZDEFYYITOIYKONFMVTCFAYCPLIWQB");
    tmp_msg_0.feature_type = 94U;
    tmp_msg_0.rgb_red = 74U;
    tmp_msg_0.rgb_green = 18U;
    tmp_msg_0.rgb_blue = 223U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4696858979837968;
    tmp_tmp_msg_0_0.lon = 0.03234357694868706;
    tmp_tmp_msg_0_0.alt = 0.32828738895711496;
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
    msg.setTimeStamp(0.15246500644880623);
    msg.setSource(59677U);
    msg.setSourceEntity(216U);
    msg.setDestination(22695U);
    msg.setDestinationEntity(198U);
    msg.id.assign("CJLYLDOZDYASNPMBVYUTOVBITLHCWGNGYEXKZHKGSHPDEUGWNBLCMUVILZFMFKNBWPJYFXXSOWXLFHWISUTJBHCCDJORFNVAGXRBKXRQEPXHIEPTYUUQFBNAMKYVMPTZADTLYAZORMGKTQRNSWINEMAHCOREPVEFDSASJWEIWSVOQYPUTKFZTLBRUGMAALPZISBIUGUGFNVRCWRQZENHQAZCJTZ");
    msg.feature_type = 222U;
    msg.rgb_red = 172U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 10U;

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
    msg.setTimeStamp(0.2127614476158065);
    msg.setSource(6853U);
    msg.setSourceEntity(206U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(218U);
    msg.id.assign("CTWNMERSTNXBRSP");
    msg.feature_type = 103U;
    msg.rgb_red = 88U;
    msg.rgb_green = 165U;
    msg.rgb_blue = 199U;

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
    msg.setTimeStamp(0.2148071407747162);
    msg.setSource(32499U);
    msg.setSourceEntity(170U);
    msg.setDestination(45631U);
    msg.setDestinationEntity(184U);
    msg.id.assign("VHXNOAEQRLXORLXNCHUWXLOYBPHGSLRSJZQBKIZFCAMGEWMRAECWGUXYTAWTHHLDQABICVPTHACSDTAKZNOGLFJRLIXUKVWNVZYCOXEJQGZKUIFULFYSNQGQCK");
    msg.feature_type = 118U;
    msg.rgb_red = 155U;
    msg.rgb_green = 76U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.5804688518684957);
    msg.setSource(55887U);
    msg.setSourceEntity(203U);
    msg.setDestination(60075U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.027710994297326597;
    msg.lon = 0.6896859012063739;
    msg.alt = 0.5828260566764595;

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
    msg.setTimeStamp(0.6174379307257014);
    msg.setSource(7435U);
    msg.setSourceEntity(50U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.055830927445917;
    msg.lon = 0.44402045372322485;
    msg.alt = 0.7383718597140168;

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
    msg.setTimeStamp(0.19864377133135513);
    msg.setSource(58876U);
    msg.setSourceEntity(6U);
    msg.setDestination(27219U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.6123273642344218;
    msg.lon = 0.07075583287985554;
    msg.alt = 0.6698655374526169;

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
    msg.setTimeStamp(0.13892942072205794);
    msg.setSource(7496U);
    msg.setSourceEntity(85U);
    msg.setDestination(60058U);
    msg.setDestinationEntity(31U);
    msg.type = 75U;
    msg.id.assign("HHWGKXLXPRFSTFZXYXIAQEUEJMNOGFNRVDVRWMWFGUFLBEYZMYAFHZSBQ");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3735251454U;
    tmp_msg_0.start_lat = 0.37734596488839744;
    tmp_msg_0.start_lon = 0.18153890235954095;
    tmp_msg_0.start_z = 0.4365154688667561;
    tmp_msg_0.start_z_units = 248U;
    tmp_msg_0.end_lat = 0.6862805973876952;
    tmp_msg_0.end_lon = 0.4682931834393964;
    tmp_msg_0.end_z = 0.9132198275590812;
    tmp_msg_0.end_z_units = 99U;
    tmp_msg_0.speed = 0.887151252211789;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.lradius = 0.5214227313622104;
    tmp_msg_0.flags = 231U;
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
    msg.setTimeStamp(0.20844432890737552);
    msg.setSource(11047U);
    msg.setSourceEntity(209U);
    msg.setDestination(45946U);
    msg.setDestinationEntity(242U);
    msg.type = 116U;
    msg.id.assign("ENOWPXHNDONKCDRAYCQLICZDUBYGJHPLVTIEBKVZHIPSIHTWWHLYXDHJBZKTSAHSQAJXGTMYNFOGELSIJTLWORQITSIVQFK");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 31U;
    tmp_msg_0.plan_id.assign("EMAFWHBCWBMZUPBJRRGHSBXKVGVFDX");
    tmp_msg_0.plan_eta = -1732665893;
    tmp_msg_0.plan_progress = 0.0969502501320646;
    tmp_msg_0.man_id.assign("ZOFLCFVDEEXJVHGDWQOBBPPBNHOAALYQVXQGXSSTAQCGIJWIDVPHQATGDVZYNZGKWEQXZKPDWAUQNWSAVTLRHWYBDAPTROGOSPCHAYJDSKKZRXTXMEYMLFRENJNAWFTMFFKCTPFCIFHUZOGXHSKNXFVULYIMGHTZDXVIBJJCURJYSVOUUJKEHIJTNPCBULLOYYEBPVZRHLBKCPJKIXLTCYUSWIKNERQMEWSQEUMBR");
    tmp_msg_0.man_type = 1405U;
    tmp_msg_0.man_eta = 1556833919;
    tmp_msg_0.last_outcome = 34U;
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
    msg.setTimeStamp(0.05342468748384532);
    msg.setSource(40940U);
    msg.setSourceEntity(45U);
    msg.setDestination(64075U);
    msg.setDestinationEntity(39U);
    msg.type = 126U;
    msg.id.assign("XINXSYVADRMGJUJZKOIRHFLEAMQYXQJQHKMCOTHONOXLZOIDONPPVCFJWBNVBDFSEDOYJFWGOCPBIBMWTUQKXQAGMPCTTLHINAEMKWLGCHQQSBJFZSQUDDEFJZCBXWEE");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.8632990798235676;
    tmp_msg_0.lon = 0.13622743443340513;
    tmp_msg_0.z = 0.6034808162565004;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.radius = 0.3906930135709019;
    tmp_msg_0.duration = 25132U;
    tmp_msg_0.speed = 0.46801658297147375;
    tmp_msg_0.speed_units = 25U;
    tmp_msg_0.custom.assign("VSONCDQAMJXBANLZHGWTHIXTILSRQWTIWUJT");
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
    msg.setTimeStamp(0.19665869173773443);
    msg.setSource(24201U);
    msg.setSourceEntity(126U);
    msg.setDestination(1731U);
    msg.setDestinationEntity(170U);
    msg.localname.assign("HVCEZGQMFVVJYNYQHLRXKNHZRDRMCRGWDAZUOFJOTNPHWAECEGVLAPMCYSOJXZASGNERSLNKGBZYPKBXHFZOEOABPCMIQEUDTDTWRTJQOVQPWBIKJFOSUCXHXRKUQMOXHPDEGVFVTBSAMRLUCQUXWLXUNJAGDJYCIGQKXBXZNEYGWEWAUPYNHKZIMTN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UTXWXMABXRHMGUMOVXLLKGRRSHIKDYZLWPSBKPNTUUJCDOSEJNHDZYZBXKOQQMTBDMDMRKWSXBVKZJONXQQUHQREETPNALKFYWSCSLXAJHNIWBGQ");
    tmp_msg_0.sys_type = 157U;
    tmp_msg_0.owner = 17983U;
    tmp_msg_0.lat = 0.9150414855962988;
    tmp_msg_0.lon = 0.2602663340745156;
    tmp_msg_0.height = 0.5025245750414024;
    tmp_msg_0.services.assign("USOUHUFWJFZQJGKWAFDCNRAQTICHTVSWRLBFSBLBJZFZBDASYKUITQVZYGCNBETZVVPS");
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
    msg.setTimeStamp(0.11073920269106186);
    msg.setSource(7636U);
    msg.setSourceEntity(188U);
    msg.setDestination(39450U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("YFIHUBSVVLNZMWCINRUBVLDQCQVGAHNAWXKAKGBQUUNPOLEDVFOHLLTRVLTGUZXJTRLEHJAPIDLACQQGROEEAOKIDPTBPDXMCJKPMJFUAHHFAKNFJVLPQYBKWYIIXFMBIHYBWTUSKKUBIJ");

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
    msg.setTimeStamp(0.01884905617584698);
    msg.setSource(20882U);
    msg.setSourceEntity(158U);
    msg.setDestination(25281U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("YGESUBRFQKXTWMXLFLWVZDIIXFIEFRMBAGONHVYGTPWMRCJLYSVFWUFVSGPNTH");

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
    msg.setTimeStamp(0.31239213112715225);
    msg.setSource(7324U);
    msg.setSourceEntity(109U);
    msg.setDestination(469U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("FMJOOEDFKCRMQVTUZBELLDJPIUOHSLSPVZZRKKYQPUDSPKKBUVUCFKTCKLVENNTDFTJSZHLOGBRCCHCLRHHFREZFIJQXYAAMOGMFBGFDSLQQNEGYOXPIBNRIUEQGAWLBJGOREZDIPHHRAVAWJRDNYFT");
    msg.predicate.assign("ZEVYXQTEIRGPNZMCHESUTOQVKPBIDZFAEUUAPIYZYGGZOSZWRMGJPXVLWSFMJZHVCUAWFXWBHDZQGBKPOWIZOBCDADFJISRKJHKEUBBAUICKLDJEFGMNVUQDVUGLNGBTJJMWRRMYANECPQRIQWVZVLXKLSRQBYITSWPN");
    msg.attributes.assign("AZDGVBIFCUKUYRTAIFGQLVCEMAXKYMFNKCPZPETBTGSHUMMYHWBJVTLBXTWEBRQUTADHOEPOGNEVGOQFENDLMXSONPRXBAIDSWMLRKKWPOWCCLQXLISAQZINVWIPKWQGXGGDXTYVGZLIZNCB");

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
    msg.setTimeStamp(0.8396764737168118);
    msg.setSource(44556U);
    msg.setSourceEntity(176U);
    msg.setDestination(44416U);
    msg.setDestinationEntity(12U);
    msg.timeline.assign("ZUVWKJCMXBTJTYCZSXSSLPBMERMOUNFYKPADFXMWAQAXFVCKLHZZOKYQNAHGMPQAGBQCRPHOVBEJLOIXSOMRNJHSIXRDTEFZBEZOSVNUTHZDLINDFEKN");
    msg.predicate.assign("MSZQKKXCOBYFNRDSDFHYVFMLSJHLNSVYGQMTURDARVXDEGPUEHALDLLUBMNHIFHEJKKVJLKPSZAUZKAZNJIVWRWFJCOOQQBWXVYMASGIMTQKHETTCIWSWUFTGPUIAIDCSJTVDTWCKCCHPZOYALOOQKGHXTGHPZYVEYHNQOMIATYUTLGWBNWKVOSFUPFMRZQQDMNC");
    msg.attributes.assign("VIXXMSHSZAOEQCGFPSUENQINWXSZCONWFHGBJKNIGKUTOEUZUPJGIWZPSCTAXVRGMHGBVEBNWKFXEIYDBTOTZPCMRJLZJGXDPRYULNLZYPAKYQQFUYPRZRHM");

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
    msg.setTimeStamp(0.5452863673536316);
    msg.setSource(25654U);
    msg.setSourceEntity(131U);
    msg.setDestination(43558U);
    msg.setDestinationEntity(204U);
    msg.timeline.assign("WONUFSKVABPYQMSZDZAJNBPCXHMBVOXZJSVGYBGWCTFQPLJLVMAIAHCPZOCOESOJXYELYFWQSPLVDDYGGAWEIXZRTDKWBKTRNKQFPPHUHUNRNQIARXOFNMB");
    msg.predicate.assign("QKNCQXYVELWLGBCENKOKUAUVROHOKDPAMIPEEGFTITCFYZURDLDILAKMMKNBOEFS");
    msg.attributes.assign("RWAMHQUBKEPDGXTHVSBQBQPJVMCWGHEVGWTIYGBVUYCAGAFJXMUNSLNBEQFKVCROZYFHFBLAZMEEXQINDIOWWBRGPQFEFTXQJDVLXMVZMSMMILUTZOTAILPEO");

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
    msg.setTimeStamp(0.09569809067610713);
    msg.setSource(11610U);
    msg.setSourceEntity(199U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(140U);
    msg.command = 28U;
    msg.goal_id.assign("GJXSHQUWXHEREYCJRAWSVWYAKGZVPJOZVEKTYNSGHJHBKITAKETUNWIFLQVPSSPYTYZPRQCNVLAFTPTKDXGLDUCQLXNDGOHONIMYETLDBUDNRRALRSTFNJKJGUDIQXFOBNLVKQLBVAJURTQYOOQM");
    msg.goal_xml.assign("ZBXYHDFKKZJHIYQHTENWIWCKNLSHYEWAZMRROBDJNDSEQOKFTILUAXNOPWINUVPPBZVYFAORPUEFRIVLUBEFQXGVQNMHOJSTNCGSXUOJWTEDEAYGTAGMLSDAHAMYDBZNRMDVFCXCTCEGLRZNUSIGDWYAWIJMCBLLKQLGCWTMKBJYMIAEBGKQZZSSQDIKT");

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
    msg.setTimeStamp(0.837515750249489);
    msg.setSource(59980U);
    msg.setSourceEntity(240U);
    msg.setDestination(10956U);
    msg.setDestinationEntity(86U);
    msg.command = 6U;
    msg.goal_id.assign("LZCJZWYIGMVSY");
    msg.goal_xml.assign("AJFYNZTKGCFJWBJLSHZUJBNEZFIOEGZEYKVYNAQIHMDLJNTGWKQQCIVASZQHCSTSGUTCKGWOTKKQIFNNEPYTRISYVOOLMRMXEIDLJFOJJSFHBIYUNLL");

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
    msg.setTimeStamp(0.7651039561963332);
    msg.setSource(16755U);
    msg.setSourceEntity(47U);
    msg.setDestination(48351U);
    msg.setDestinationEntity(129U);
    msg.command = 148U;
    msg.goal_id.assign("XGSAVMOPZOHTMYVPJRVTURYLJBELMVUXCWWBRCKZXLSISVUGIXAAEDPGNJGKLUFIYMNLVCFTNWQOQMJWUZVUGJOMUNIKPDSBMTFJRDBUARAXODBZWIRTODXVATAKWPBZAHWDQFBMXQYZSZKHXZHPRFDPSGBLEVMJKNRYYZMGRCSKIFISGQEHNJQPSFQWNWYYTWPFSNLHFEGACOHLQEUEAYCI");
    msg.goal_xml.assign("KYASFPVWCNMMOIRUXXIHFYREQPFSTTSWHYIOVKGRXRMNQUMTJZZCIQLEGXKVHQAJRCYQKBOGVMNRHBJIFOKLNDRNEFMTIRGPMUHOTLMMIZOGOGJHDSGLXANIIZYUBJEFHIWJPENDYRGXQZYHDCMLKXVGLWXAZDSDPBTHCWDUTQAECAALESGBNDWBVFOTUYUVNLDLAQBKXTVLUJQZKBBTWQRP");

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
    msg.setTimeStamp(0.5733816120263412);
    msg.setSource(26451U);
    msg.setSourceEntity(113U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(173U);
    msg.op = 43U;
    msg.goal_id.assign("TSZIYOMZNMWMRRUPALOUCJFCPYOHTUBTRIYZOXWWGLELJLKOGETUACNNFMNBMTIWXCFVWDZCYDHMACRSUKKWPHONQOUQKHXDIQEYDBRWESZTVITEADPRHHZMKSXDPGELNPNFOQZHCLGXCAUAQGDAZVTSAMVJSYFKLKSITFXVBIFLAINDVGZEQPPASUMJDBFJSYKGIUQJWYBJGRPCHCZYRDLXVNQLRMBTXGBQFVEBQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FDBHCTCGDVVRQKHXNOJMCUFTJTJGVTHOYIIZLSLRRLSGUGZEBDWFAKKTUOFFTVOXQYMZPBNUPIWXANGYNYEFSMWHAICBIFUZEZLQRUEGVDPICQOPMCGOHGDFRMCXJIOBBNYEQDZIXSYPEBREACYJQRDPUNTGKTXGSLZZTOMPWULSEWKJAUWZJ");
    tmp_msg_0.predicate.assign("IKQZNZLGQBCJZRSKEYNXXAOKJBFZQGWBFWADGCEVZVDYBYRUNYOTYHCYGHXJNCLRQYYLXQPBLASVTQZIPWPBJQCPICCDTXOLZEHLSMXMQHS");
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
    msg.setTimeStamp(0.7890513135876408);
    msg.setSource(64628U);
    msg.setSourceEntity(183U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(211U);
    msg.op = 134U;
    msg.goal_id.assign("WAPTOVUZZDRSGBVYWNHVRLXRTECNUYUTZTKSFW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XGVDGSWFJJOGSLBAHSHDSBJKEHMQNRUXOHWRLUFEAUPPKNVMCZCDFVGAXBTJXZFFLOKMMFEESZWYQDNRHPHGSIPQYOCYYVYDEDAIQYEXB");
    tmp_msg_0.predicate.assign("WAEFWJVUAFSXZHHXSHZLNCSOKWUJZYTFOWRNLKYSQAAQFGUPKADRLJSKNARBYVNEIXZIFWNEHWLGUDTEZZRQMPYYGSMVKENVCJYCVFFNTIGRCOKNBKMLCTSGHFLXHWROJKVMGKTDUBYOTOKSIVUNSHJPQZBYEIQP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AKVIGKGIPREODSWWVCTENQNDUJCRGTELOPJRNYIYZRXDFMHHLVEJEZGOOPVZUDHMUBWOITJXSOBEHWACHLKKGKNWFVFOAGXGFV");
    tmp_tmp_msg_0_0.attr_type = 218U;
    tmp_tmp_msg_0_0.min.assign("BKTXRVQVNQIAMEDWLNJCDCDKGMFHGCJABDPQLZWGKDWSHRPIIZSUXZYGQKUUYOSHIZROFPCYZXDSCOLPMUYQMIVFBNHWGDIOAPRWTMWNEOKLWLYETZUAPIMTRKMYDEEHTGHMOFEVADEVLQOILKNBSTTYBWJHQSUUJYXFJNPTQCEHFTLAVEZEPHLPXDAOQPCWNZJOKBRSXLVGSXUNUCYBJIRSCVSMBFGJTJRC");
    tmp_tmp_msg_0_0.max.assign("QRTFLTNHQBGWEOQIADUFNGEEFAJRBQFUOSZDFSNYMZLKNPGXDQEZPPHSSGPMOLHJNKPQNEUMWITCBJJVEQFBWWKOMPOSLOKJKMVDVEQPKZETTKKUHJAZFVMGLBCZFTSXCJSVHPLISFMUXRRNDAZHNACYRWOXATMSCMZNDVIYPWXUHWYWTCOGYXAZBLUYWGVJIEKRLALDBVIZEMHI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.32095820065766634);
    msg.setSource(34170U);
    msg.setSourceEntity(248U);
    msg.setDestination(3613U);
    msg.setDestinationEntity(13U);
    msg.op = 242U;
    msg.goal_id.assign("MQJGWCRPISRSPRMBYRXRGQJUKHKADTIZGUEZZHQYHVTTLZCKLEXHTTPFNZMWDIJJXBEJKTTRNUHEMYMBMAPQRKOULPKOWWPZWUXNAXIFIJHSLJDGVWITNIZMCRSABVYSLSLMFWAIYVQTUBJFXBCKFUAFESHIOVEZUDB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RTZKSJNQATQBGELMAXPVBXNZYPQMGRLMODBBIWUAKUNFBAADKFHTZNTHPVAYOODTJFNKCVXGZUPYDOEEZJBNTGJAIRULVRZCSYJPAUVQFWFLCYHHBMRYKHAWDFWISEXIIYNILPRLRPCGZJZMPYFQGVUI");
    tmp_msg_0.predicate.assign("RXSIPJLOEMGWJRUBZIQEYQORDNIKCOFCMTTQXBNKVTTQWYTWERCVPPBZROKGGLZOHAGNAFVGRLNTWXSHHCLXEGYCQXPRSGCSIOLSRDQIYHEBAPJKFSHCSVJINLSYUFKKJBRLCWDQDVFBNIONGYTLEYFPEZTDDXUWXMYTBZUKWFWCQYHMAOKHXMAQUMZGBJAPUHIFMXBXTFBVOMUUJMEDAFS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TQCAJZDPPRABYLOQKFQHZRDBJOJSSZTXBMZVELIDJHKWFTWCNVHHPIEFECRCRZDFOHVAXYIXFDLOUWBFMZZTNQDGMKWCUVCLUIUUOOAXBRADENSJFOXVVYMWOELYWKPUKD");
    tmp_tmp_msg_0_0.attr_type = 226U;
    tmp_tmp_msg_0_0.min.assign("NZOPZLLWIAXQOKCIFHESHGNCMUQEFVAXFULUQRWMTVNXGPYIHTEHGKKEZHZBIMZSBCKQNKYYDXGFVWXMDYRZSDJUMEFQMOEULREFAIFNJVTXCCUPBBPXBJOIKVAKSLLDVWQWPWT");
    tmp_tmp_msg_0_0.max.assign("WIFTYWKCVDTZCGTABOMYHIOBKUUJJMYPDFVRYQYQWWSFURHYOVYWANBMGCYPKBGHXXBSUCGPKSZPSRONQULXQMHEQFXFNCRMSJAJKIIWCFNHMLQXODCTWHSEZNBXTOJZFPVKCELSEUSLLURCIIXPDZQVOBPUNZFTOJJDOHJFWDRCUEGYVIQFXVSB");
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
    msg.setTimeStamp(0.8381694806221247);
    msg.setSource(54005U);
    msg.setSourceEntity(246U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(164U);
    msg.name.assign("MWFVXLGHKIYXHBNWWUMFSHQQBEANJMUVINKQKJHZZFJKRAWYXWXDESDRDONFMOAEHLKLIDRPTGQQPJDFPRTRWNKRCLYLASTMTJEPVMCHRSAUPDIXQVQBMOEXSKQPWGLUPGBLONJXKZWOYVCZCZTCJCGTGYSFJEZHNGCFEGQDAMHIAYOUBEVVYBCX");
    msg.attr_type = 80U;
    msg.min.assign("KGCPDDWTVSVHTNAXONDONSBLDFDKZOLNGCCUVLRHVZIMSHWSBMCYYYAVJBTESHKCCIYWCEEYHTGMMNQKFZUKUJMWUZRYWWMVIBPFGKGTQXEURCDXBSCGYEXEKBDXBQVOHJOEFWLJEPXUHWSZFUACZYJJLRZVMRONQDKKYANQPQSALRL");
    msg.max.assign("XQOSOFDGFLSNCQAKCBSBFJCKUANZNSWYBWRBCYWZOVHSYYUPDMPEHKBPCJWFAKVKMTIOCOLP");

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
    msg.setTimeStamp(0.702755367066348);
    msg.setSource(17107U);
    msg.setSourceEntity(159U);
    msg.setDestination(43740U);
    msg.setDestinationEntity(11U);
    msg.name.assign("MVKSDORYADQLKVDKRNHQBWGUATGLWYLQVKDDNIIIKRXIOZPSIFSTPTTREMMBFVHMDIZBVTXKEKONPMKUTAGELHMEYEHNREXOYIUCMBWACIEZPQABRSXCLPQSOKWJEAWEDZNCAOECGLGGYGWHZYFGVFSMRBTJVTSXHJFHNDJKGZHPCSOFNVYSFIMHYUXPQXJFFFUVQJNAHLRUYWBLUZQLPYJIVJN");
    msg.attr_type = 19U;
    msg.min.assign("LPRLOGVQJYWGNCDH");
    msg.max.assign("WIELEASBJSVTZXPQBJMVDNXQBDHAOGPZWRASCOOEMBWNRAIEVKVOZUNKIDPUGLTJSMLRFXQCOXCEQFHEDQKKCUYKVRLNBQWPIAXT");

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
    msg.setTimeStamp(0.316773871656596);
    msg.setSource(26589U);
    msg.setSourceEntity(154U);
    msg.setDestination(63195U);
    msg.setDestinationEntity(55U);
    msg.name.assign("VFFUYKLURZCTHXEDRUTUWNFPODYTTKKVPXATKIIXSCPXJOIZSAXQCFRJYGLNLVMXWPDEGHELOBGKEYMBZRSWBDNJGQNLTVBBQGNHNCJAJYDALBVNXDMIUZMMHBJXCUFWOKOCAGJFYVOICELWFTOOPQNVPQYWHVJCSIKOKESMQZMFXSMIQHSAPHDQUZPZMLRRJRURRFYIKSWGLGERGABFNZEZD");
    msg.attr_type = 30U;
    msg.min.assign("KQYITXDBEEJRBRVOVDEEOA");
    msg.max.assign("LOHUBNDKCGJKXTNJXITOHHQVPTRJOISEGMJACRZAGFXMEVLPQMGCUOEWSIUARWVPIGDUZOIKZLSCHGADPAWZWWSBQKMPLZYQACWNTTBACWXQXDBUPITBREEAKBRYHVBHWUZXQQNEFCPJKFYVNMYDYUBLXMOMJQCNOFUVELJYVBFAZGKSKDDSHTRFPSZIFNKJFSHVMZDDMGOVENBUTCRYTXULOQGAIKSYYZQWSRMTNIEXFVRYHJRGXID");

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
    msg.setTimeStamp(0.5722427230417821);
    msg.setSource(52875U);
    msg.setSourceEntity(218U);
    msg.setDestination(65181U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("AKOFCJWMOPLFCQDETBUWJZPGLOEEDMAQZQHKRXLMWJWYPRNFAMZCHWEFTHZDSRFWJXFQRIUJVNKT");
    msg.predicate.assign("ILRPNKJRHWDKYJUJIPOFHGAIUCJOZAZSX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QPDAJCBSLKEPYZRSQBGNVQXDKLOJRHWAPLSUWODFTFLSWBAOUGZBWFLKATTICPBEQXSNHONAHZOBAHNTGCTMIGDXULTIILRUHUWRFHYMVSYPFWQYRJGYVZJWXJZBIHMVXGMUEYFNQEJQJDLPKVWDNVJZHMKBKEBSZZ");
    tmp_msg_0.attr_type = 140U;
    tmp_msg_0.min.assign("AKZLSRVSRMACQWHHYNQFPYPRCZGGTQIGKICNMPOBGDMEUXPZIVDVRHUVMBGUHIYUXIOCEKRABFECPYQKBFXILXLEQJPABJUEWJZQVIYCDLXPUNLVWLUQXVOURBUDASINJZDSGWROTZVWSZJOQFPOKNDECDBTBJXGLNDYNYCAWSRBETVYNMUO");
    tmp_msg_0.max.assign("LRJHSZZJXHDDZWFRCTUQOKXBMKRMHJZVXDHLLYOVMYYMIKIZTNJVQGZKYWKYFLITCYHOLMZNQFPPLNVSUXHANWZPPGJGURSPOVGNAWAOYQBFDGAHCTXPDFQWTLLAWQSGSJCTPHRYSWAJFCCMYBNRCGCUXCAWXKSBSEMUSBVETUUVPEBHEWIIBGOJUDALEQZAQIOQ");
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
    msg.setTimeStamp(0.9742445159701952);
    msg.setSource(12984U);
    msg.setSourceEntity(169U);
    msg.setDestination(12412U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("CXWHSINHZC");
    msg.predicate.assign("HSAQBCFLHDHKOFKNYBAXAEPILRPPNJQWCXSSVXZNXRPPUAWAGIXCTHDXGHMWGTERFQLEAIJSSLFQK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HGOTGBJSPYNHLALLCEQJPKXEQQLHOOVXMTGALTOYDIAACZEFXQINRKJHBYEUOJDIZPQNHCANTVVRPZSYFIQVUMVPPDLJGKLBFCPMPZECCKSZURIIWDXV");
    tmp_msg_0.attr_type = 147U;
    tmp_msg_0.min.assign("DTFWWMPKBCUWLQBGEFMXKUGSRJRROOBYXDSNDMXTCOEDSEHFFYMPCZVIHDGOW");
    tmp_msg_0.max.assign("PXJIHETUAPOBRXKNNSYWALWGBSHZBNMPITCDOWGMHNMIRJZMMXUGFTSXTQVPFQYLVHJUYQONIJARGVKCPJQGAZKMCVYRECDPPKNWQSQFEBAPKEOXRZICYLQSIBZDYJFURMNUZLSZGALOXDMUEYRMVXYTCDWNUOBSPWBTDBGJUIAOLWQUHXFCAEQWVZDNDAWQEREZCTVMRTLXKHYLAKLKTROJESLOXEBDFUGJOFWCCT");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0023425116145356917);
    msg.setSource(283U);
    msg.setSourceEntity(50U);
    msg.setDestination(57372U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("UTICRTSMWGKFDWVSEBIXJUQPBXPQNGTAVPVCUWCZMBUXKAZ");
    msg.predicate.assign("JSFTGQDHMNBRKKXQCTKRCJPLDEHNQCFCCXTUBBYALJNVIHRIXKOIKA");

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
    msg.setTimeStamp(0.7467068010903165);
    msg.setSource(31341U);
    msg.setSourceEntity(89U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(230U);
    msg.reactor.assign("RRIEJBFGGFPTHTMATJHEKMBPJPMNDHQYSWQHBVQOBEVSWDYQFYNZXJBDVNAGBOLGCSJPNTF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("URBTOEBRQYOTAIOHWQATEVBYSPHDSLZISJMDVYFHZMHYRLXSCOKOPJRUIRYAVMEUFTWTIGQDNFIEYZDUCLNDCIZKKJTSKORJGICUQAUGXXQAEJJVZGEXZKXQBMMYLMLWEFUHDVADODNJCVSTYFTORDLHIRVWBZPXHHNVJBOISQHGWVCACRMZNLCGYFPCWMGBBHW");
    tmp_msg_0.predicate.assign("MSOXLIGFQFCJEAGNQOTFNPZSLZUHSJNWZMUPLWXPZOSZIKWYVRFJDOANVJQSUPTQDTGNYSHAIXYRWTMYIQMKINSETJONHZAGEMMKXGWVVHDFCYACIXBFABFCYUCIKMFETSAPXPVAZHPMRROCDBGXQNJEUVANUCORODIHXFRBJDRLDKUPQDDYFVWWZTKZSJWEBAHEGBBXYEMKHHBQULRV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HBNIBNNEAPPQRPCNVRHETKUFVPREYQQPJQCAHNIQMBTJIVXHSHDBKWGKOFYLYBVLACXVPTSSUMCTRGBWDLLNRYXXYXYAOSIDJWCOFNXXHFUQBUJEQUPHETRCFZBFEKLRWZDVUTPCUPMHYEYJAGALTZGOJPDZCEHSQAKTSMLIMIIRWLJZRTFGJMJFQONAVLZEFWGGDGAIUOVKYVSUYGKDXFAUSMBODMDGOZMWIKZNWKL");
    tmp_tmp_msg_0_0.attr_type = 82U;
    tmp_tmp_msg_0_0.min.assign("UZWLVMXBVYYPCDSNFCMUAZBEADEMDIXLEJOLOGMJXAGUHATFPVNWCDYVHFXKGUCIQDJRYHQUVSEPOUTHGQHKFIZMRNZWXSPWDAKYLOCLYLOAJECBJALSTGDCHWKLQOMTURJVNTKPZBYCLFFVYHJMAAPBMKGZJYOCNCWRYXBBERIGOXZBEPRLUFIRUQSTSPFNZNSQIIAPHFSHDPQESQRTGINIJGZVVDUXQNTIFSWRKTKJVZWWBETGMDWEMXBQHN");
    tmp_tmp_msg_0_0.max.assign("BTDUBJTAVLHPKEIDHCLFBSEZWWXEMPNYYNXCHZJQQESHYLDXUFPAFVLBEQLFCTOOMPNGJWFZXTAVWRQDFCVOUJZVRIYTX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.18620241822151173);
    msg.setSource(44423U);
    msg.setSourceEntity(38U);
    msg.setDestination(35981U);
    msg.setDestinationEntity(94U);
    msg.reactor.assign("TJSCORAYJDZQQTRHBUQFVWNNWGMBTWIBXLVYJXLVRVIZMPQVGEAYSKFVEBOUOWPCLEKJCGCSAWSCFUYDNPIYZSZDDHHLEMPMLHVXOLQRUCKZYMWXHJJUVDBIOWFXFSBJOHJXTCZGXLUTPPDQDFZK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("THCAFLBEWJCJTFPNFSDYXEMPAXKAYIYYDNRMVAVZPZIWAOOPZNHDYGABTYXNHLCVJEZWUQIUQJCRJJZDQREGMVCFGVLGEWTOWJTFYWUOBUIDYUIEMIZLAHFBABTOBSYLOKLQQCSVPVTAKPBJPOGUXUHCCXMYEKDLWMSQTGKFDDMSSSNNIGIFGNZJHKZMDKHMFPBIHWQURTXNKURJBHIDLRBOWZTRNOCESUXECFMQKLOLVGAGSPZRQRSR");
    tmp_msg_0.predicate.assign("AYMCTXYFASNYYV");
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
    msg.setTimeStamp(0.7935951713047127);
    msg.setSource(55359U);
    msg.setSourceEntity(173U);
    msg.setDestination(11346U);
    msg.setDestinationEntity(138U);
    msg.reactor.assign("GYHHMWZCOJKMBFKTTMLRJAOXTPZBCUFNCMFFEZDBRLCLCEPPBMGXSSYNJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZELBTZCXIUMZSHJBIIUGYHICFCUMMJPYRTCANVKFEBTLMUIYALDZPGSWJEAEIHPYARHGVTCCACPVUQFCGSEUGXEQMYWSSJEFBSFXHBQOVLNALNRXQXRDNNTADQNDAVP");
    tmp_msg_0.predicate.assign("QMBYEBLZKHFCACNELXSMDVUZTPHGYCOJBGFBDINBHGZIPRKVJTPOYCNXKSOGPJGZBRZROUFOXXWI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XHPBMPZGJOYPUPEYRNPSAULDLGAIQSEDKCKBOWJQLIMUCIIFKYBWLAZRMNUEVSHEQJBXZYMRVKBWUSASXTPGZUQKHZCTNDVWDICVMYNRYFLMTRFEHNTOZSWBORXJJECHTRTHTQMWD");
    tmp_tmp_msg_0_0.attr_type = 13U;
    tmp_tmp_msg_0_0.min.assign("VXIUUBZBKTGHNCNAWDBJRCAMHJOGJVSVSQWTTVSKIWCYGMQTEXZJMPGNKMDKYCJIVWXOIWWGSE");
    tmp_tmp_msg_0_0.max.assign("YERWCVQEYLUHCSMZPMBJKWBFGEILLZWWONCGDZOKPJAPDPEQXSHVJIQASNGXXKMAWEGMZNZAUELKADDWHRFIPZRQZRGTHNSWVADOFTKICOGJKURMLYCXVKBGZOGWDOJXZAIYDNWMOBSJSYAENQBHSMSJPQHXXSLCJYCXVNTBLHPTUBVILTQTZLYRIFPEBFOQTIPYRJAYTEGEPRFANYOMUGDULVCUFHXVJKIMNFHBBDQXRTVFUDKUH");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2572366797136185);
    msg.setSource(38873U);
    msg.setSourceEntity(156U);
    msg.setDestination(65109U);
    msg.setDestinationEntity(229U);
    msg.topic.assign("GGRYFFPAQJLYENFYHVUQFPTRUONAXOSGXRTDDWYKFNJMHLWVRJGBJIHTEYHIZTWZXMVVWFCLBONJQHQQXDIYBIAMHIQEWLFRCMCAEODKBVLUKS");
    msg.data.assign("IZBNBTMSFJELWYGYCHNHFIIFTTBUHLZGVLCOJTBGDLBMSSRVKCYCGZOYQSRDDAUDGXKIOXHHFBZQTRVHVQXCNAMVAARXKPMUXCIEIJKUFOEQJYDNRPILNTTVCWISEPAEJGAWDHVQVJLUKUXQGENDTQUYOFQLJGLZQYXXQKSWBEKEPGPNRVZGRPJSABLOXOJFLRCMYRHKFDBFOUZFBWPW");

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
    msg.setTimeStamp(0.5923711326765464);
    msg.setSource(61975U);
    msg.setSourceEntity(216U);
    msg.setDestination(47808U);
    msg.setDestinationEntity(133U);
    msg.topic.assign("ZXZNDWMMAZPCNFJTRDMGNELFKOXBHZYYUKNZWJLTDXGFGCJLUDFGNIOKQSEMPXITAQXJWAHLHLQHKOUCAHOCEIPXHXAIVFPIRBLESSEGPEQAZGOITMODRPCHDVIEOGRQNCSUMURPUDOYFWQBZ");
    msg.data.assign("REMYFLFVUMBEXGFYCWYMODMIUCAHF");

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
    msg.setTimeStamp(0.7948054444154892);
    msg.setSource(30772U);
    msg.setSourceEntity(73U);
    msg.setDestination(46259U);
    msg.setDestinationEntity(212U);
    msg.topic.assign("JZNFDQNUECVYPUTIHJOSTUFBCSEJQWAWBNEPIFEZGCUUHBCYRBDMZUQHSASJYLMOHATSDRVOLAKKSTOVTWEBQNQJLEWKJVPIMRU");
    msg.data.assign("UNNCYRUEXKBSWXLBPFINBMBNYWZJEOILYJVOUDMVPNEU");

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
    msg.setTimeStamp(0.37842411654793917);
    msg.setSource(41661U);
    msg.setSourceEntity(9U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(127U);
    msg.frameid = 93U;
    const char tmp_msg_0[] = {-62, 98, -47, 30, -43, -23, -40, -121, -56, -48, 117, -126, 90, 0, 10, -38, -108, 96, -4, 94, 123, 20, 87, 108, -81, -3, 4, -100, -117, -16, 44, -78, -117, 48, -15, 69, 119, 12, 85, 112, -106, 0, -50, 21, 15, 15, -112, 104, 69, 112, 43, -96, -9, -114, -92, -39, -49, 39, 64, 119, -97, 40, 94, -118, -64, 19, -76, 114, 86, 93, 92, -101, 8, 57, 27, 79, 87, -63, 87, -125, -94, 24, 33, 115, -51, -100, -36, -127, -115, 95, -92, -128, -44, -38, 52, 53, -97, -52, 8, 100, 26, -10, -92, -7, 16, 109, 110, -9, -7, -98, -82, -34, -66, 98, 94, 39, -105, 75, 14, 96, 46, -102, -19, 10, 77, 49, 88, 95, 85, 40, 86, 77, -94, -32, 48, 71, 49, 44, -21, -108, -25, 110, -30, 73, -49, 68, 105, -48, 53, 47, -42, 71};
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
    msg.setTimeStamp(0.8599211579374327);
    msg.setSource(40919U);
    msg.setSourceEntity(19U);
    msg.setDestination(23928U);
    msg.setDestinationEntity(209U);
    msg.frameid = 202U;
    const char tmp_msg_0[] = {115, 113, -110, -121, -31, -38, 122, -36, -123, -5, 47, -75, 23, -101, 61, -43};
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
    msg.setTimeStamp(0.3855698170365386);
    msg.setSource(1273U);
    msg.setSourceEntity(13U);
    msg.setDestination(17967U);
    msg.setDestinationEntity(53U);
    msg.frameid = 119U;
    const char tmp_msg_0[] = {-20, 0, 20, -126, 95, 65, 16, -105, -108, -23, -86, 7, -118, -5, 117, -65, -106, -85, 93, 67, 89, 49, 73, -116, 65, 86, 12, 58, 0, 103};
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
    msg.setTimeStamp(0.7319116994991983);
    msg.setSource(34640U);
    msg.setSourceEntity(94U);
    msg.setDestination(65325U);
    msg.setDestinationEntity(154U);
    msg.fps = 186U;
    msg.quality = 184U;
    msg.reps = 225U;
    msg.tsize = 205U;

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
    msg.setTimeStamp(0.9057085640391648);
    msg.setSource(51217U);
    msg.setSourceEntity(251U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(105U);
    msg.fps = 47U;
    msg.quality = 13U;
    msg.reps = 166U;
    msg.tsize = 197U;

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
    msg.setTimeStamp(0.24677755140704305);
    msg.setSource(41569U);
    msg.setSourceEntity(87U);
    msg.setDestination(15822U);
    msg.setDestinationEntity(51U);
    msg.fps = 120U;
    msg.quality = 229U;
    msg.reps = 41U;
    msg.tsize = 170U;

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
    msg.setTimeStamp(0.6576615153039088);
    msg.setSource(14912U);
    msg.setSourceEntity(122U);
    msg.setDestination(17239U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.6105192326553817;
    msg.lon = 0.6007329644129381;
    msg.depth = 83U;
    msg.speed = 0.2708626660691543;
    msg.psi = 0.33250779997375723;

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
    msg.setTimeStamp(0.9109410512582989);
    msg.setSource(7456U);
    msg.setSourceEntity(136U);
    msg.setDestination(8347U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.5711522083662989;
    msg.lon = 0.1353905886405099;
    msg.depth = 130U;
    msg.speed = 0.7076418700647268;
    msg.psi = 0.4916838219008153;

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
    msg.setTimeStamp(0.3902779475461482);
    msg.setSource(38496U);
    msg.setSourceEntity(154U);
    msg.setDestination(13258U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.35194606231940306;
    msg.lon = 0.19526769373134822;
    msg.depth = 71U;
    msg.speed = 0.951165051898677;
    msg.psi = 0.7611931436137557;

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
    msg.setTimeStamp(0.515228713696934);
    msg.setSource(30214U);
    msg.setSourceEntity(228U);
    msg.setDestination(40859U);
    msg.setDestinationEntity(21U);
    msg.label.assign("ZZWTLNNQRRFKQSWWBKNJMFENLIRFYFVQHKUIIMGXKAITYDRBOIXXTRXXSBYUUDLVGDPMQONKVZNVQCVTJXHSVQPQHEHXDQDWUOL");
    msg.lat = 0.039003464933974;
    msg.lon = 0.5555553427987626;
    msg.z = 0.6613490099868332;
    msg.z_units = 182U;
    msg.cog = 0.7359661752397573;
    msg.sog = 0.6398268120164806;

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
    msg.setTimeStamp(0.30225956013414834);
    msg.setSource(39138U);
    msg.setSourceEntity(146U);
    msg.setDestination(47481U);
    msg.setDestinationEntity(78U);
    msg.label.assign("BUGYGSAXYJJZHQQLDANZTFNQBLBRSDXP");
    msg.lat = 0.5037961506365809;
    msg.lon = 0.8674576912618976;
    msg.z = 0.21451374132316547;
    msg.z_units = 171U;
    msg.cog = 0.5393286614536901;
    msg.sog = 0.4988062270116487;

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
    msg.setTimeStamp(0.5245385220233774);
    msg.setSource(49748U);
    msg.setSourceEntity(154U);
    msg.setDestination(53888U);
    msg.setDestinationEntity(221U);
    msg.label.assign("CLKNXZUJJQJSWRKDEZQTOOAOYZGUHQQPVNCGTAPSHZWIRTAPROAREVWKAEFFDEQVAYQVPOHYLIHSFEKPNKJSSWSXWILCAUOULUKXTPWDPYPODLLVWBYASTNQDUKIIXJZHRMFGYQCHFMBSJXLTSTNQWLEFMIRMHBBPBFCKVOWYBXNMYRDMNJMBNDEJUISYCNTZVICZWEZVRGMFHKBDIGTEJXVFHNLZUUXF");
    msg.lat = 0.424195322675055;
    msg.lon = 0.6572800255556581;
    msg.z = 0.7178974818330205;
    msg.z_units = 26U;
    msg.cog = 0.03717964651962602;
    msg.sog = 0.6532391735410411;

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
    msg.setTimeStamp(0.5052328890148478);
    msg.setSource(42717U);
    msg.setSourceEntity(49U);
    msg.setDestination(32339U);
    msg.setDestinationEntity(249U);
    msg.name.assign("GYFDIKDNXKCLFLARUYVPXRKONHZYRTOWVBCMIIPTCZXKZJMXTBBLXNBIBKMFPOMGKGMDHNKGQYAAEAHDVOUAHLGWJNCNTNFHPYYQKWJSDJCTQKRRRRDEVISVFEHMFYQFQWBUSLLPTWQD");
    msg.value.assign("RJXPZLZCOIEWNMSXVHTSYCGJDNPGMOZQFLNKOUKCERSRZRHCVJEDVXQZENXPAMPGTBOKBDPXGVWVJSJDFEMJCATSLMUFIXVWIGYVOHUMTPUYAHBEQGDXBYBGWUYABMDGPAKRFTEIWNTLRMQEVWDGADYRXZS");

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
    msg.setTimeStamp(0.2606176586905802);
    msg.setSource(31145U);
    msg.setSourceEntity(222U);
    msg.setDestination(9630U);
    msg.setDestinationEntity(224U);
    msg.name.assign("RWPZDNBEETWTOTLMCXL");
    msg.value.assign("JGALCRPOAFBFCTRDVVSXEJNRDKUZSATSDJUISJAYHOBRSOCXYUWDKWMQYPFWE");

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
    msg.setTimeStamp(0.3067846690731636);
    msg.setSource(698U);
    msg.setSourceEntity(156U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(50U);
    msg.name.assign("SABXRJKWRJNWOPKZMTJEDCBNGILIXSCNPABOQFILVDITZPPIOQKTMJGGCOWHVASXWHNKHOTOELVYESCSLVYLMNDUEMZHAMQLVSZQTMXYNUEIC");
    msg.value.assign("VZRRMCXKVXSFCOYTZMTSTWHNIDKFORDSYLMFNRNKZTJBLOIRGKEYELTNYMGMXXUVARSOKQZOWKFHXBYDVQQPQWWNXDEDSANVGDTLUIAAEGPFOMYROKXTDDZQBBJIHYDHTVFBUGCHPCSXWRE");

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
    msg.setTimeStamp(0.3200325045786824);
    msg.setSource(54300U);
    msg.setSourceEntity(149U);
    msg.setDestination(6083U);
    msg.setDestinationEntity(58U);
    msg.name.assign("OSCXIWLSXZEMRQPFXVCSZAEKCTCVVALXHGHIRCQZYZIWBSDBTNEPBYRAJFQHTNDQSWIEWSMUQXYACGETGAPMJDQOMKFJPWANZHLVGROTGOYWFKVZGQLOLHMVRNU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AZAXVWQYRUTWRIMOLUPSCWOZYMBEQGSBMALLFJEPXRQQVNCUAZXSTONNPITVYEIHECSADTOGRCKMQGNDNGGWIGYFVIBWBAHWUJRWJSMTKUCVFJ");
    tmp_msg_0.value.assign("JHHJQXLTOGNRCVIHBEIMAGOTRMQAYRUPVSIXYLKZQLFEVLSUDJETDJPWGXVFXQYCMKFXBVMRTVNCWEINPFXSEXPMMYHLMVXFGCKQYVDEPBARURKSDOUWBFLDNHSMWJBRPTDQUJOFXOPAGKNGGVIOSNFDHDSZLHCBKOSQA");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.006919311293650865);
    msg.setSource(54570U);
    msg.setSourceEntity(248U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(175U);
    msg.name.assign("NWZDXARSDMIZHDJGIAXBUJARJKOOXXMCMCHKHTDGHPTQYDJXVUAZWIONOHGLGQGY");

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
    msg.setTimeStamp(0.4348992650696313);
    msg.setSource(25293U);
    msg.setSourceEntity(208U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(109U);
    msg.name.assign("MWQDYLZKSPICCCZXJPDUEBXVQWACZXOPTQTEMMZUMFRDPCDVNZVJKKTYNXGGVDRAAFGKVWSRUNOWFAJVQWRWBJJUBRLIOCOPEWARDVEIKNKPTHXCGAOQKGHSJEHMDUOWIDKNKKTTUQSFBYVCZHUZXMFXEYXJYGIGQYIJAINMLLMSOFHXJFGOYSNNHYQEHUWLPZOBADNRBWLUOTTPFCBIEGEBSMRLXHMPRIB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SEZFGVJMAIWLOOCVYSXIRJTYLNPBUFUCTNIHBJCGYADKPYPWSMPBOOVXJTNDAEWARZYMAQEKSXCHGTNVWSDRPFWWNSLBJIHJUQUEOMKMZD");
    tmp_msg_0.value.assign("FAIMOTBDBMKCVKAYTLTUQZZQEDHYOKYHHXJEUICMMHXUSGVSSKPCINYSTRNAQIECWCETYKVGKSKEUMNOQZPGDZDQWFPSVBINCYEQBCJVZUVOEMWZAYBVSOPNEXTBWCGRRHTDWXJIJYVBALNXNZHZGXYRICFAYZDJMDMLOUQLFXDERCLWRPMLUAGWRAOPSSIKGLFGOVFQAJQFBORSZTDLTILHRRJKWOWAU");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.19953878451076967);
    msg.setSource(17335U);
    msg.setSourceEntity(38U);
    msg.setDestination(5129U);
    msg.setDestinationEntity(254U);
    msg.name.assign("KSXIGSUFSOJHAEVKFHZFHDTOTKRNBWWRECUJBDLIXFAMDLCSNSMCAVZLPUTYSMQPATUUXYUPELKRGCNQHHXYXKICCKTAFNWIUWHOSDBGERYZEMNLLZIJCDGDQIYHFZELKXRPBTSEVCMZKVCRJHKOHLIBGZDPOQMAHFZIT");
    msg.visibility.assign("COAFAYEZETGYRHVBGLVDFJCHINKFVXEHRRWSKJBBJNTIUWPLNUDMXFDAVOMDLYPLZUFZQ");
    msg.scope.assign("YASEJMKRHJMPDYAVOZZCQWFBGJQEDHTJOBWMYDDPJDXZUZQOZBCFDREGBSAVGWVXFWWSFMYRSHHTOQXHMGXAGCUQLCZYZBCPNCGBITIATKCSSXKEQLPCRDJHQHUEIPQDGXKRBVYHFMNSWXZUGVELNAVSUMNOTPKBVFONEKRPZWFXELKLFUULTDCZEOLGRLMKNRYYAIIVFLTAINJNNLITKJYHUPWIQOIVMHTJW");

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
    msg.setTimeStamp(0.5401952193437011);
    msg.setSource(2219U);
    msg.setSourceEntity(86U);
    msg.setDestination(60363U);
    msg.setDestinationEntity(24U);
    msg.name.assign("KFGBJZHCTUJFUYQOMNPYAJQHQLGZOVCZOOMTIFRKHQKOMBGDEWMZBBRLVTLFAPTWZIJJZGCORCBACEZGCFKCHO");
    msg.visibility.assign("EXTQHLWHOEFVTXUYSXTQDKVOGFVJHINOYGNNSZDECPGAUFXTZTLXCRBOCMKWCPTPJSFVPVGARMQBAYRRLTLIKHTCLAFOZZJYWKPEHSFGHNENRQOENFQWWCPDQMBM");
    msg.scope.assign("OJEZHLQMKBCWLCLMOKXOKZFOUPRBPHQLSHSMFDKSUKRRYHXAGNUNOQZFGGPILTDCLVBXFWZARIMWQJJTSXGUERDPWNKDEZBEVLKTMJEIBCGYLMQGNMHPYBVODDQDRDVPFBAZXCXOJSWMKERANEJYKAYCQVQGWWJRSTAJQXTTCUVHXIEANX");

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
    msg.setTimeStamp(0.7563759176380472);
    msg.setSource(62047U);
    msg.setSourceEntity(119U);
    msg.setDestination(20441U);
    msg.setDestinationEntity(87U);
    msg.name.assign("DOCKORRNRXGSLMQBLDTMEBIVYCGWXLTSIVHUAXTXQDBPCCQTKGKFQENBLAGRBXMOVGYYVYWCPCTIPIOGZHLPDSGOXQWPHFUATIUBZAKARVUKAVIKIHNHBVFXQYLJCHYEZGOQPAXZCJRZUXSKYQWIIZMYDWSDRTRENQJMNOFHUFGUJZPZVLFTUZLUTMFFMEZW");
    msg.visibility.assign("FWABNTPOROPTYJHPGVJAFONGLUYBTKYGQIPZVDKSMRULWXKSHLSBAUVIMIWAZFZCFQKZIJTGZOPXBXSHGDSIVXCZKCFJYGYTJNCBUUCDUIJKBFUMEEULJCQYILOERNQYCVBLYRNGXTSELODVMBVQGQFRPEBFMNMPDHFNRPKHQZBAOTARHDVNMEJRTF");
    msg.scope.assign("POEWWNCFJDVCPMYZDELWXSLQFHSLPWVFHJDSDQTTGKGUZHUZQYKNISAEFVMSEVZZLVOJXHDWUJRRQXBJYOMRDWFGUUTBLLJUAGBGYEDPCAEKBNVXEHNROKOCIHATYQTHOUVIWRHJ");

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
    msg.setTimeStamp(0.4990458037763523);
    msg.setSource(21663U);
    msg.setSourceEntity(62U);
    msg.setDestination(12187U);
    msg.setDestinationEntity(118U);
    msg.name.assign("VZGMKGWBKBCNWXANMLOMHRDSXQWVASWZUJCJKVMILUQIZAAYYMTQKEPZAYFZDQSCNHPVGZRIKUYERVKLGTLGEKOFCFSFQNYPRLSYEQUBSNOLFVYVCGDZEJTIMDMFKWRMQDXGDTSVUBAUXHXNMHFEDLCDUHNHWWPCYRITQEXYDBPCJRPPOJTHIXKSUBUZJBBWFKCXWHPAT");

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
    msg.setTimeStamp(0.10945375279329272);
    msg.setSource(20913U);
    msg.setSourceEntity(83U);
    msg.setDestination(19323U);
    msg.setDestinationEntity(67U);
    msg.name.assign("TETVZJTXWGJAONZKPGXRHDHDLBUROLBYDWAHPLBWNKDWTLCLMBWHKNSPZRZFBQOAJLTZFQVLKIJUGDWVUXRSUSDCORUKOEHOQCPEVYBSLXATSUJPWMLBHRIKJUSKYMFIRGHPWPYLMEYQEVZYDQQJCUZEJIESVNMWHOQXSWABSJARNGPFMNMRFAXQBGCPATEGYXGCMTDEFOOCXDYETNKDFGPXUGCVICFIOFZQKQHVITZVUFINYMHAVCM");

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
    msg.setTimeStamp(0.45009319860305474);
    msg.setSource(19187U);
    msg.setSourceEntity(197U);
    msg.setDestination(64391U);
    msg.setDestinationEntity(97U);
    msg.name.assign("XIZFPXBMDIQJHUBCGCYLQRLQLTGWLPEWRLWYMUQVEJLZEVVRETXDUAKJEYXEGKMOSFTASOVWGSNUZST");

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
    msg.setTimeStamp(0.6046789208366892);
    msg.setSource(54993U);
    msg.setSourceEntity(52U);
    msg.setDestination(7477U);
    msg.setDestinationEntity(211U);
    msg.name.assign("VBPXNTHKTGQLFLJFSDP");

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
    msg.setTimeStamp(0.26114551753405013);
    msg.setSource(21872U);
    msg.setSourceEntity(99U);
    msg.setDestination(45869U);
    msg.setDestinationEntity(91U);
    msg.name.assign("OIRXFUIBEHMMCODEDFYOHQLTMGNOPDQIJVQYBYGOLBDTIXUKBUXMPHEIURXRCTICRTGGWKQFRDBHXWUHQZIKVDMKIQIOSBJKNXGYAPRZANEGZZMRUWGTZWSKUAWCPSMMUECRXJJSPQNVYSAGBLTMZKFUUYYQCJSJAPALMLJHADEWNTVOPZANSWCLYPXCJWSBGWPETXFDWHBNSVXJRCVKNASHLLTFFFQHZTHOKKECLIFYBDFPGLZOVVONYER");

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
    msg.setTimeStamp(0.9341172475562334);
    msg.setSource(15447U);
    msg.setSourceEntity(222U);
    msg.setDestination(7649U);
    msg.setDestinationEntity(20U);
    msg.name.assign("GYZHFECAJFVBCVSDLUYAJXKUZYFTPEKLHXOKYODA");

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
    msg.setTimeStamp(0.9387510334984467);
    msg.setSource(61711U);
    msg.setSourceEntity(83U);
    msg.setDestination(4619U);
    msg.setDestinationEntity(252U);
    msg.timeout = 1170897159U;

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
    msg.setTimeStamp(0.6321891449427469);
    msg.setSource(28320U);
    msg.setSourceEntity(197U);
    msg.setDestination(28844U);
    msg.setDestinationEntity(11U);
    msg.timeout = 2037145864U;

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
    msg.setTimeStamp(0.06033878223111766);
    msg.setSource(1913U);
    msg.setSourceEntity(203U);
    msg.setDestination(36959U);
    msg.setDestinationEntity(48U);
    msg.timeout = 168066802U;

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
    msg.setTimeStamp(0.25411096355676255);
    msg.setSource(54029U);
    msg.setSourceEntity(135U);
    msg.setDestination(6872U);
    msg.setDestinationEntity(152U);
    msg.sessid = 243223228U;

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
    msg.setTimeStamp(0.9113866917796272);
    msg.setSource(43576U);
    msg.setSourceEntity(25U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(89U);
    msg.sessid = 2358174153U;

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
    msg.setTimeStamp(0.11392342245966713);
    msg.setSource(15982U);
    msg.setSourceEntity(64U);
    msg.setDestination(19981U);
    msg.setDestinationEntity(69U);
    msg.sessid = 37331416U;

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
    msg.setTimeStamp(0.9126826021152101);
    msg.setSource(39920U);
    msg.setSourceEntity(68U);
    msg.setDestination(53448U);
    msg.setDestinationEntity(91U);
    msg.sessid = 636854384U;
    msg.messages.assign("PIENREDDNUVZTYBFSPPAKKWIOGWESMKUKP");

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
    msg.setTimeStamp(0.4197710701412817);
    msg.setSource(41669U);
    msg.setSourceEntity(134U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(240U);
    msg.sessid = 925700597U;
    msg.messages.assign("NIHMMLLZJFXZPJEVNFIUYXPBWSYCCIRCOOUDQC");

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
    msg.setTimeStamp(0.7510577805179796);
    msg.setSource(37441U);
    msg.setSourceEntity(196U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(22U);
    msg.sessid = 3883184291U;
    msg.messages.assign("REJLUFXMYBFATHACBYPXJZZJOTGZNYQFGTGQALJLLUGTMDLYUAOZCVZDDHGMMEDTNIFFVHFRSIQCGSYSINBQRYOPUTOBXDCIGDJNEAKLESBPPGSZCHXFEXWIKBAVDQASADMCVRJPKIRUKZPRIXTMUWMZNLCAIWFUFWARWZVKXYFHHPWXGOBWVQOVOVIKMWRKMNBSLY");

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
    msg.setTimeStamp(0.6249823193890776);
    msg.setSource(33836U);
    msg.setSourceEntity(65U);
    msg.setDestination(22115U);
    msg.setDestinationEntity(236U);
    msg.sessid = 1318415030U;

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
    msg.setTimeStamp(0.5598097856230227);
    msg.setSource(48973U);
    msg.setSourceEntity(216U);
    msg.setDestination(60695U);
    msg.setDestinationEntity(186U);
    msg.sessid = 848490419U;

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
    msg.setTimeStamp(0.8484592644734735);
    msg.setSource(30257U);
    msg.setSourceEntity(108U);
    msg.setDestination(39586U);
    msg.setDestinationEntity(135U);
    msg.sessid = 1737214053U;

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
    msg.setTimeStamp(0.877065486018009);
    msg.setSource(22661U);
    msg.setSourceEntity(156U);
    msg.setDestination(29057U);
    msg.setDestinationEntity(4U);
    msg.sessid = 3427389316U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.35255033175270345);
    msg.setSource(7102U);
    msg.setSourceEntity(39U);
    msg.setDestination(10199U);
    msg.setDestinationEntity(94U);
    msg.sessid = 2065973999U;
    msg.status = 155U;

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
    msg.setTimeStamp(0.6254652044281755);
    msg.setSource(51250U);
    msg.setSourceEntity(177U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1194685286U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.11192413949715485);
    msg.setSource(2564U);
    msg.setSourceEntity(92U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(153U);
    msg.name.assign("RNHXGJVVNFUDFGTREUXBLPXNOETWBBFSQCWQGWSCCTHPQIKPAKBXQQYTQHDRAEEWVNDXESRFYMXZMKMHSOZKHIUSCIZVETOOQMKTPRCGKIWDJBIBIJRZUYGMWZQKJVLYADMONHABODLJDEJJGTYXCVUBISGAYNOKV");

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
    msg.setTimeStamp(0.5716667874916268);
    msg.setSource(61004U);
    msg.setSourceEntity(37U);
    msg.setDestination(37628U);
    msg.setDestinationEntity(187U);
    msg.name.assign("YGUPQWIWDGDITGGTAFMLWARQQIYZEBXMEWIWIOTBLSDUSFEQYFGXXPIJGZFIOFLZABQPNDYUK");

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
    msg.setTimeStamp(0.469485788576127);
    msg.setSource(24719U);
    msg.setSourceEntity(114U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(80U);
    msg.name.assign("OEVXULUZURBXYGNHTBMTIBJQGQWCBAOFCWKDTSRAMLTVLEXIMGEQELGJLELDRNHGHNWUAMFDTMBDXKJVCBTVHJT");

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
    msg.setTimeStamp(0.8400054570570189);
    msg.setSource(13303U);
    msg.setSourceEntity(155U);
    msg.setDestination(26098U);
    msg.setDestinationEntity(18U);
    msg.name.assign("DDMEYFHYUALNUXWKMQXKYUWPCOVGNSUNNVYPWILWMQHBMKTLBRULEEBHZQZYUDCSVGSD");

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
    msg.setTimeStamp(0.23317035222214022);
    msg.setSource(53385U);
    msg.setSourceEntity(129U);
    msg.setDestination(35162U);
    msg.setDestinationEntity(4U);
    msg.name.assign("LBZYTSZALNLFYMINDV");

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
    msg.setTimeStamp(0.3961874133742035);
    msg.setSource(9581U);
    msg.setSourceEntity(105U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(41U);
    msg.name.assign("WEPLXYXSMGCNEDRTGWBFLQGSATOCCDMXIUCEJKVSHOYBYEDUXXQPZNPNHRWLGLVXTKHUYANALOZISCCZHABSQFYLWESAZFHEWQVIUDJVCVJSLEJMRNTZKOMOJUJLODZVGTMURBNTFZWLYFKQAKAKSNWTBHSQPCJQOYFUPJXRPLCWGIUBENBAGVMX");

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
    msg.setTimeStamp(0.86288253635912);
    msg.setSource(53218U);
    msg.setSourceEntity(207U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(222U);
    msg.type = 178U;
    msg.error.assign("MTBVIDERGZWXQIPJPEUBLTAHMZDIDNFTGLODRLHMYNJFHUVPKOAGURQLPDTJXKHRHSZHPHL");

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
    msg.setTimeStamp(0.2508917979532935);
    msg.setSource(39263U);
    msg.setSourceEntity(231U);
    msg.setDestination(23362U);
    msg.setDestinationEntity(59U);
    msg.type = 210U;
    msg.error.assign("WNXVEJSSKQLSPWKOEXHDNFFTPSKVVAPAIZEKMFSSQ");

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
    msg.setTimeStamp(0.4737037458764002);
    msg.setSource(14848U);
    msg.setSourceEntity(33U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(33U);
    msg.type = 11U;
    msg.error.assign("PSFEGINPQKEIRKSVVRVMKEMYUVXHDWIDETNEOFOBPYSBYAROHHNFHVSCGZJEWACXMUQMFSFBQROEXIQJMUVXRZXDVJPPAOBRJCYLTQIVFPGYQNYCLHKZTUIBGNUSCKUEWCONDTAPJWTXATXJAWYCFLZMULDZYZGNKGKZOGJASZCIQOOTQHPITTEVUMSNLWBLZDFDIGHWYRBAZMFHKBGCTUYPKQONWNHMBRX");

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
    msg.setTimeStamp(0.10226216431585033);
    msg.setSource(64229U);
    msg.setSourceEntity(151U);
    msg.setDestination(50615U);
    msg.setDestinationEntity(163U);
    msg.seq = 19461U;
    msg.sys_dst.assign("LENQLAEWPSWILVWRZMMCXWLYMYIOJOOBXLJDPEPOYBXSDEKGDYNSPKUORUJIQIGZWQQIHOUKYQYMQBXUFGD");
    msg.flags = 246U;
    const char tmp_msg_0[] = {-118, 9, -17, 41, 67, 62, 47, 92, -95, -42, 38, -55, -42, -76, 80, -105, -19, -121, -58, -83, 76, 16, 99, 118, -103, -15, 7, -55, 10, 104, 48, 46, 123, -51, -72, -107, 85, -16, -127, 41, -15, -110, -124, 60, 38, 5, 85, -87, -110, -112, 42, 25, -94, 68, -4, 56, -67, -100, -85, 104, -31, 48, -23, 42, 64, 39, -5, 14, -110, 125, 35, 16, 61, -50, 41, -81, 12, -95, 55, 75, 43, 40, -88, 124, 102, 124, 17, 4, 124, 115, -72, -13, -45, -97, -30, -16, 76, 29, 65, -55, 5, 7, -113, 68, -34, 104, -124, 72, -13, 63, -10, 22, -41, -121, -65, 37, -42, 28, 39, -104, 66, 10, 67, -48, -40, -78, 20, -37, -99, 1, -45, -18, -84, 74, -84, -78, -54, -95, -73, 53, 9, 91, 30, -125, -23, -56, 91, -53, 113, -120, -5, 9, -54, 88, -84, 118, -13, -101, 80, 57, 72, 100, -77, 34, 81, 72, 98, -35, -94, 53, -59, -85, 13, -118, 72, 48, 24, -35, 25, -70, -37, 33, 48, 83, -110, 43, 77, -77, 30, 82, -114, -39, -107, 81, 111, 39, -4, -120, -113, -114, 108, 90, -4, -85, -109, -50, 94, -39, 76, -102, 63, -115, 70, -71, -24, -105, -114, -107, -16, 48};
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
    msg.setTimeStamp(0.9887333010410075);
    msg.setSource(55558U);
    msg.setSourceEntity(132U);
    msg.setDestination(52669U);
    msg.setDestinationEntity(253U);
    msg.seq = 48124U;
    msg.sys_dst.assign("PTOAZOCYSCINFVJWSSJKEAIYMYBGMIEBQGHXTUKBZBPDJCTTVGMNURLTDVNBQMSCUTLEEJMPMROUHYSLNCGOYZKRKFQUTIZWLVFXSMWWNDPWBQXROQDXPYPUVGWCLFNAGZGVSQOKICQOAIZXAVEMEUQXNNAROYQXBHDBSRSGHCLRJFHDRHQZUWBEVJKUEVWJMCKAJLARKUZPKHLLEHGXFXFPIDODMFXTJHZATWI");
    msg.flags = 74U;
    const char tmp_msg_0[] = {44, -58, -124, -95, 44, -4, -120, 9, -49, 12, -91, 121, 37, -97, -87, -3, -110, 5, -38, 43, -73, -37, 121, -52, 50, -100, -31, -48, -99, -15, -119, -53, 49, -39, -31, 47, 33, -36, -117, -42, 123, -45, 125, 31, -43, -108, 76, 15, 5, -57, -92, 52, 103, 59, -62, -85, -8, 92, 30, 104, 117, 55, 82, 118, 48, -83, -6, 46, -122, 36, -15, 1, 7, -114, 103, -108, -67, 110, -85, -37, -91, -24, 116, 21, 121, 61, -99, -111, -99, 54, -96, 101, -17, 1, -52, -2, 65, -46, -10, 54, 93, -32, -92, -32, 6, 35, -127, -52, -26, -54, 88, 29, -72, 118, 59, 111, -33, -118, -58, 115, -25, 53, 111, 100, -8, 95, -101, -72, 70, -18, -55, -115, 7, 124, 58, -101, -50, 71, 105, -76, -28, -8, -29, -23, -9, -6, -6, -55, 102, 86, 60, -16, -57, -53, -11, -14, 121, 98, -22, -53, 42, 75, 61, 32, -33, 13, -35, 91, -116};
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
    msg.setTimeStamp(0.7612282719661229);
    msg.setSource(13651U);
    msg.setSourceEntity(92U);
    msg.setDestination(44280U);
    msg.setDestinationEntity(43U);
    msg.seq = 2854U;
    msg.sys_dst.assign("JKMHJFLTIGFCIXDNSUCVBNFBDSJRAMXOVLGFUTDTQZYBPGXMWNMIHJEERTSGNMCFWZNESTYULTDRFYGVVNVWNPUJPEJZHIDVOLZXSKYAUZXIGLWOZYQKHDXBGKRIASWVBQRUOIBJQQHFCPCCACSIKLADYFQNJMWVUJLRPPETFYHQZLYNUKCUSVXQVOHTUHMOPIORRSEZXWXXHZFKCPDBHYZKLI");
    msg.flags = 246U;
    const char tmp_msg_0[] = {-5, 95, -12, -6, 20, -41, 66, 113, 26, 82, -44, -56, -47, -77, -85, 106, -44, -95, -62, -48, 71};
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
    msg.setTimeStamp(0.12149723828269343);
    msg.setSource(33459U);
    msg.setSourceEntity(138U);
    msg.setDestination(12007U);
    msg.setDestinationEntity(135U);
    msg.sys_src.assign("RMUXBBOQROCDGFDABLDACDDOQVHXZGZIEYFJGPWFCBNEMTUVSPYUYUZCRYDS");
    msg.sys_dst.assign("NIJBXXBVOYUMVBBLKUQUPBSJXTLIAAIEICOTYTIHXMMKPCNEIMNGWJFMCJGQBGSVDYHCJPHTAZENQYEWERYKKZCZHUGNUWFSIEOKSFDYJXRQHWDFFNFIT");
    msg.flags = 68U;
    const char tmp_msg_0[] = {-114, 61, -120, -108, 101, -34, 31, 99, 93, -72, -9, -96, -30, 114, 96, -75, 53, -15, -81, 51, -111, 109, 91, 72, -65, 85, 56, -35, 27, 11, -9, -28, -8, -33, -84, 25, 110, 30, 69, 124, -43, 10, -5, -65, -81, 91, -79, -42, 111, -90, -126, -80, -79, 31, -13, -93, -62, 43, -60, -74, -68, 45, -55, 115, 103, 94, 97, -37, 122, -24, 120, 126, 63, -9, -76, -116, 51, -92, -13, 88, -60, -74, -49, -110, 7, -60, -112, -61, -22, 118, -124, 58, 62, -8, 41, -117, 20, 20, 24, -12, 60, 93, 40, 71, 124, -52, -110, -2, -97, 10, -95, 107, -68, -28, 10, -46, 77, -81, -7, 36, -29, 77, -45, 102, -94, -90, -122, -58, 81, 77, -124, 5, -69, -97, -26, -51, -104, 125, 115, 19, 111, -79, -63, 2, 67, 100, -67, -102, -118, -29, -103, 31, 0, -71, -95, 62, -12, 69, -18, -8, -115, -62, -51, -30, 109, 43, 62, -116, -118, -31, -117, 86, -16, -84, -8, -89, -108, -115, -121, 84, -66, -78, -3, 83, -77, 25, -75, -100, 57, -91, 2};
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
    msg.setTimeStamp(0.18293023309920875);
    msg.setSource(59642U);
    msg.setSourceEntity(84U);
    msg.setDestination(51990U);
    msg.setDestinationEntity(62U);
    msg.sys_src.assign("IOZWUWJTTFBJCJDQHBSAIREPYRGRPEZTFALVXYJZSUFFXWPIBGOHNDKPYNGUFV");
    msg.sys_dst.assign("WLTRZXKYJVFDZILLIHCWWNZCZGKJNAEUOGUXEAMAHNPHLCCFPJQCVSNEQWBGZRLGOFVHJRTFRHESWSIDGMKWQOZSTAXPFLXADWROXDQJQNWHYMMUTMLHUWTDGBTRUZJFCQOOYACKVVKRBFNZAHEBPKOQOSMAIIGZGXTUIBSKVAVCJPPYJKZPEOGKN");
    msg.flags = 126U;
    const char tmp_msg_0[] = {92, 63, -73, 63, -9, -58, -122, 1, 50, -98, 87, -12, 33, -43, 58, 121, -6, 122, -16, 24, -32, 108, -16, 11, -108, -107, 108, -39, -19, 56, -63, -49, -112, -128, -34, -32, -28, -60, -53, -73, 25, 12, -78, 84, 45, -122, 92, -12, 90, 52, -14, -40, -53, -35, 20, 31, 27, -81, 115, 102, -110, -27, 50, 125, -89, -19, 115, -37};
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
    msg.setTimeStamp(0.411605538724774);
    msg.setSource(14033U);
    msg.setSourceEntity(161U);
    msg.setDestination(41918U);
    msg.setDestinationEntity(252U);
    msg.sys_src.assign("FCVNVFGFKXVOQHTKNMAECIGJJQQOUALUWUPGAIAYVEITCKRJRLOZAYYWBCILKWEAFRPQIVDMZFXKQSZNTBMRDEDQKXZRIUSQKBHWLJQSLDSDYMZHKMLWAVKAUWFLHABDVGPCJSMHNDYT");
    msg.sys_dst.assign("BZENPXCWHZMGJLCUIXHMRAFSEEWBVEBTIXMJWMPDUUTJRVRYBHILZXOTGOLFCZRAJYTGOTGVNFSXQSVGLYOAMWEQRFBELN");
    msg.flags = 139U;
    const char tmp_msg_0[] = {55, -64, -40, -12, -79, -117, 8, 75, -122, 100, 43, -87, -91, 96, 43, 98, -106, 71, 44, -11, -32, -54, 19, 119, -117};
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
    msg.setTimeStamp(0.1552618388269027);
    msg.setSource(22612U);
    msg.setSourceEntity(84U);
    msg.setDestination(60338U);
    msg.setDestinationEntity(210U);
    msg.seq = 55201U;
    msg.value = 107U;
    msg.error.assign("TIWDRNHPWYERXDDOCBMQOENHJHEFZUINYZJCFMLQPYAQTFKYPWXKBJIUYLDGDEANKOJEASNNWEPPUYYBSVXPVZSEQJHSJADZZVOAECGBPVIMTMOYZXKQHDLCSCRVYURBJMWWEAXOWXWRUYOXUNASDOILRXFIHQQGAUTFWAHPBGCVGLLKNSBM");

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
    msg.setTimeStamp(0.6752499492706401);
    msg.setSource(2049U);
    msg.setSourceEntity(177U);
    msg.setDestination(42205U);
    msg.setDestinationEntity(204U);
    msg.seq = 5971U;
    msg.value = 113U;
    msg.error.assign("RUMPUXAEUQRBERXHKVNQSOKKKZMJWPAMWHYCZYUEQRWYGTVXUFNTQOYTUKHJJDXLENXCJEVRDFSCXHCLJVMEMNZLJWDBXOBPWPOJCTZGKSARBFDPVPKYNQBINEFQCIFCLASHMNKTRNKOJXGTMMUAZDTYZWTOVQJKZAHAYLLROOSLAGDRMAWGGFIZTGDQIYXEA");

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
    msg.setTimeStamp(0.5987918935336994);
    msg.setSource(14759U);
    msg.setSourceEntity(25U);
    msg.setDestination(8356U);
    msg.setDestinationEntity(107U);
    msg.seq = 34091U;
    msg.value = 107U;
    msg.error.assign("XTTNZNDSLQUCVZGXQHAPBELXOFKYPJEMUVJTHEQUDVUUPBKVLPAHARBTZLYAJNOICIWMHFACDCNRTXFENFKSPLEWUPCOJLWOTGEQNNCWHZKSPWPSSWQXQNKBCTDGRVSRWROAJJAEAFRMJTE");

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
    msg.setTimeStamp(0.9263488187040144);
    msg.setSource(53723U);
    msg.setSourceEntity(48U);
    msg.setDestination(10046U);
    msg.setDestinationEntity(215U);
    msg.seq = 14210U;
    msg.sys.assign("UXGLLSFJJCDXVUSFQUHQHUPXHFMHDSBRDKXPEAOAGYUIHNWOYYAABLKLWTZBETNPLRXAQQGTPCBFOAVOJXKCNFHSQCJOGSOECCZXYGGETS");
    msg.value = 0.9443221957059378;

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
    msg.setTimeStamp(0.45000275034322434);
    msg.setSource(12328U);
    msg.setSourceEntity(20U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(58U);
    msg.seq = 41908U;
    msg.sys.assign("URDUZJWWWENCANELLUFUFKJNXKHMUATHLEXJCYRVLRETURMPZMLGSZDOMSXXRJVBAQQRP");
    msg.value = 0.3318655518919771;

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
    msg.setTimeStamp(0.21680110239701855);
    msg.setSource(53085U);
    msg.setSourceEntity(33U);
    msg.setDestination(33940U);
    msg.setDestinationEntity(192U);
    msg.seq = 4278U;
    msg.sys.assign("NVABQOQJCRIUDFYFAQRT");
    msg.value = 0.6325833090200984;

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
    msg.setTimeStamp(0.7444693155147563);
    msg.setSource(45747U);
    msg.setSourceEntity(128U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(158U);
    msg.action = 149U;
    msg.longain = 0.6618210061865696;
    msg.latgain = 0.690886738988527;
    msg.bondthick = 3879145121U;
    msg.leadgain = 0.1943402254881177;
    msg.deconflgain = 0.5012048225588484;

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
    msg.setTimeStamp(0.44997894310711606);
    msg.setSource(19375U);
    msg.setSourceEntity(43U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(85U);
    msg.action = 157U;
    msg.longain = 0.5497343315238719;
    msg.latgain = 0.9797988349650846;
    msg.bondthick = 2009363999U;
    msg.leadgain = 0.12869725335365778;
    msg.deconflgain = 0.8779579234407565;

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
    msg.setTimeStamp(0.4407682150885798);
    msg.setSource(25618U);
    msg.setSourceEntity(168U);
    msg.setDestination(61866U);
    msg.setDestinationEntity(199U);
    msg.action = 107U;
    msg.longain = 0.32945742570041603;
    msg.latgain = 0.94657304681175;
    msg.bondthick = 3233600160U;
    msg.leadgain = 0.6404505659469971;
    msg.deconflgain = 0.890552064920821;

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
    msg.setTimeStamp(0.5374896760894352);
    msg.setSource(51524U);
    msg.setSourceEntity(198U);
    msg.setDestination(2309U);
    msg.setDestinationEntity(14U);
    msg.err_mean = 0.7625226772974788;
    msg.dist_min_abs = 0.8351431805013856;
    msg.dist_min_mean = 0.6646487555275671;

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
    msg.setTimeStamp(0.9136558024260142);
    msg.setSource(47314U);
    msg.setSourceEntity(151U);
    msg.setDestination(38309U);
    msg.setDestinationEntity(96U);
    msg.err_mean = 0.28011357442591456;
    msg.dist_min_abs = 0.8602843868739684;
    msg.dist_min_mean = 0.4942613733637131;

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
    msg.setTimeStamp(0.7070682836126028);
    msg.setSource(29030U);
    msg.setSourceEntity(149U);
    msg.setDestination(23302U);
    msg.setDestinationEntity(150U);
    msg.err_mean = 0.784651519715489;
    msg.dist_min_abs = 0.2764924374036216;
    msg.dist_min_mean = 0.4341941544912522;

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
    msg.setTimeStamp(0.01989043895312459);
    msg.setSource(3497U);
    msg.setSourceEntity(156U);
    msg.setDestination(5224U);
    msg.setDestinationEntity(90U);
    msg.action = 230U;
    msg.lon_gain = 0.8710042328188744;
    msg.lat_gain = 0.2979015597162067;
    msg.bond_thick = 0.9201593011525925;
    msg.lead_gain = 0.2079670367147548;
    msg.deconfl_gain = 0.6072518846719847;
    msg.accel_switch_gain = 0.8198073944942709;
    msg.safe_dist = 0.8169689782377516;
    msg.deconflict_offset = 0.6537070174840792;
    msg.accel_safe_margin = 0.95316919760267;
    msg.accel_lim_x = 0.10513838478586013;

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
    msg.setTimeStamp(0.8712823805609522);
    msg.setSource(40988U);
    msg.setSourceEntity(73U);
    msg.setDestination(48531U);
    msg.setDestinationEntity(182U);
    msg.action = 115U;
    msg.lon_gain = 0.04168418246216721;
    msg.lat_gain = 0.33514020309211323;
    msg.bond_thick = 0.7212629125143495;
    msg.lead_gain = 0.5782709299449673;
    msg.deconfl_gain = 0.48399848208147367;
    msg.accel_switch_gain = 0.3973644353361855;
    msg.safe_dist = 0.3872609115340977;
    msg.deconflict_offset = 0.736384582234944;
    msg.accel_safe_margin = 0.31013289679408085;
    msg.accel_lim_x = 0.04430605099874996;

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
    msg.setTimeStamp(0.5338763592110295);
    msg.setSource(51386U);
    msg.setSourceEntity(46U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(136U);
    msg.action = 140U;
    msg.lon_gain = 0.7475292631651519;
    msg.lat_gain = 0.47455305244114077;
    msg.bond_thick = 0.8367809735056743;
    msg.lead_gain = 0.6961930626685814;
    msg.deconfl_gain = 0.43520271685839473;
    msg.accel_switch_gain = 0.3418186138239473;
    msg.safe_dist = 0.36106914999524253;
    msg.deconflict_offset = 0.6669289620127289;
    msg.accel_safe_margin = 0.9786088366769866;
    msg.accel_lim_x = 0.20113341865080137;

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
    msg.setTimeStamp(0.9542227471809689);
    msg.setSource(9294U);
    msg.setSourceEntity(250U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(222U);
    msg.type = 244U;
    msg.op = 69U;
    msg.err_mean = 0.5747306241378057;
    msg.dist_min_abs = 0.11340599945937868;
    msg.dist_min_mean = 0.18342078473622192;
    msg.roll_rate_mean = 0.007985607009120987;
    msg.time = 0.7846929122217633;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 39U;
    tmp_msg_0.lon_gain = 0.7276672075643456;
    tmp_msg_0.lat_gain = 0.5470605365730175;
    tmp_msg_0.bond_thick = 0.7620290810666793;
    tmp_msg_0.lead_gain = 0.15310822949729264;
    tmp_msg_0.deconfl_gain = 0.04038366448332187;
    tmp_msg_0.accel_switch_gain = 0.9967117283290442;
    tmp_msg_0.safe_dist = 0.06677379682805429;
    tmp_msg_0.deconflict_offset = 0.2958543089715687;
    tmp_msg_0.accel_safe_margin = 0.050772279671804754;
    tmp_msg_0.accel_lim_x = 0.42200898467050907;
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
    msg.setTimeStamp(0.6489660287445743);
    msg.setSource(34257U);
    msg.setSourceEntity(106U);
    msg.setDestination(43296U);
    msg.setDestinationEntity(176U);
    msg.type = 93U;
    msg.op = 60U;
    msg.err_mean = 0.4843240905588967;
    msg.dist_min_abs = 0.549015684923092;
    msg.dist_min_mean = 0.3312300863778457;
    msg.roll_rate_mean = 0.5831387199560994;
    msg.time = 0.34411832236246387;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 209U;
    tmp_msg_0.lon_gain = 0.47207518932908243;
    tmp_msg_0.lat_gain = 0.09047702081066644;
    tmp_msg_0.bond_thick = 0.3940651482877665;
    tmp_msg_0.lead_gain = 0.7944249910525762;
    tmp_msg_0.deconfl_gain = 0.3088231512885874;
    tmp_msg_0.accel_switch_gain = 0.278895748306379;
    tmp_msg_0.safe_dist = 0.038304831330328803;
    tmp_msg_0.deconflict_offset = 0.48937410425645467;
    tmp_msg_0.accel_safe_margin = 0.15577962499245357;
    tmp_msg_0.accel_lim_x = 0.597305266278615;
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
    msg.setTimeStamp(0.4634832884252441);
    msg.setSource(63049U);
    msg.setSourceEntity(59U);
    msg.setDestination(58951U);
    msg.setDestinationEntity(223U);
    msg.type = 150U;
    msg.op = 30U;
    msg.err_mean = 0.8649425747156845;
    msg.dist_min_abs = 0.47988873083460026;
    msg.dist_min_mean = 0.3941776508837631;
    msg.roll_rate_mean = 0.16553814375027498;
    msg.time = 0.5513737879246956;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 152U;
    tmp_msg_0.lon_gain = 0.18736872757877854;
    tmp_msg_0.lat_gain = 0.6291246241859093;
    tmp_msg_0.bond_thick = 0.6940832576303685;
    tmp_msg_0.lead_gain = 0.8862501698918366;
    tmp_msg_0.deconfl_gain = 0.09669425946419485;
    tmp_msg_0.accel_switch_gain = 0.23519506736708773;
    tmp_msg_0.safe_dist = 0.2704127547293531;
    tmp_msg_0.deconflict_offset = 0.8132543110108184;
    tmp_msg_0.accel_safe_margin = 0.32254341550663834;
    tmp_msg_0.accel_lim_x = 0.7687099720414177;
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
    msg.setTimeStamp(0.5876748385755438);
    msg.setSource(42599U);
    msg.setSourceEntity(41U);
    msg.setDestination(28918U);
    msg.setDestinationEntity(24U);
    msg.uid = 42U;
    msg.frag_number = 34U;
    msg.num_frags = 27U;
    const char tmp_msg_0[] = {99, 25, -6, -92, -17, 66, 27, 36, 122, -110, 120, 103, -39, -49, -98, 54, 104, 121, -56, 82, 34, 35, -21, 17, 126, -45, 35, 12, 110, -4, -114, 85, 75, 125, -63, 47, 106, 63, 97, 57, 107, 91, 38, -88, 94, 125, -63, 97, 32, -71, -53, 100, -71, 9, -43, 84, 31, 60, 25, -46, 30, -79, 89, -76, -1, -54, 92, 102, -110, -59, 25, 101, -15, -115, 99, 33, 78, -39, 13, -36, -116, -83, -59, 54, 78, -40, -77, -23, 79, 21, 112, -75, -47, 108, 7, -53, -44, 109, -28, 112, -22, -107, 101, 112, 80, 71, -101, -56, -10, -35, 26, 36, 123, -14, 51, 57, 125, 36, -101, 3, -1, 82, -74, 54, -60, 93, -20, -114, 114, 28, -98, 40, 73, 58, -71, 67, -72, 42, -124, 118, 120, 101, -65, 108, 61, 66, -57, 79, -23, -84, 62, 89, -2, -112, 122, -109, -17, -14, 4, -80, 55, 113, 3, -44, -4, -21, 68, -43, -104, -66, -43, 54, 26, 28, -72, -49, 16, 51, 103, 97, -23, 21, 49, -41, 123, 17, -7, -127, -49, 19, 38, 12, -75, -19, -55, 84, -50, 25, 16, -43, 97, 79, 31, -80, -41, 100, -84, 54, 54, 59, -104, 50, 103, 8, 56, 60, -123, -79, -82, 15, -89, 28, 65, 82, 101, 37};
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
    msg.setTimeStamp(0.18064579870683506);
    msg.setSource(64439U);
    msg.setSourceEntity(54U);
    msg.setDestination(20100U);
    msg.setDestinationEntity(129U);
    msg.uid = 79U;
    msg.frag_number = 225U;
    msg.num_frags = 174U;
    const char tmp_msg_0[] = {85, 96, 24, 7, 15, 74, 18, -56, -11, 92, 103, -99, 40, -78, 14, -92, -47};
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
    msg.setTimeStamp(0.5621743011291965);
    msg.setSource(4834U);
    msg.setSourceEntity(250U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(152U);
    msg.uid = 187U;
    msg.frag_number = 190U;
    msg.num_frags = 121U;
    const char tmp_msg_0[] = {116, 24, -120, 124, 10, 89, 78, -46, -22, 84, 22, -9, 35, -66, 94, -46, -12, -86, 84, 107, 63, 84, -84, -77, 43, 67, -114, -32, -7, 30, -121, -124, -26, 43, 74, 7, -113, -53, -72, 40, 55, -1, 4, -35, 50, 6, 10, 16, -95, 76, -110, -44, 105, -34, -14, 61, -112, -86, -76, -114, 25, -12, 107, 113, 12, 36, 13, 32, 25, -127, 14, -8, 76, 37, -61, 37, 44, -40, -120, 8, 8, 104, 67, -73, 64, -114, -18, -33, -122, -1, 52, 0, -64, 1, -44, 26, 124, -82, -63, 16, -37, -127, 48, 94, -127, 99, 66, -31, -109, -58, 56, -127, -125, -123, -29, 21, 7, -109, -92, -49, -63, 124, -43, 123, -110, -47, -32, 6, -106, 51, -88, -99, 76, 93, -78, 111, 116, 73, 37, 121, -61, 123, -83, -15};
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
    msg.setTimeStamp(0.22635364411954184);
    msg.setSource(42113U);
    msg.setSourceEntity(127U);
    msg.setDestination(39554U);
    msg.setDestinationEntity(105U);
    msg.content_type.assign("JGGNRDSPJKIAVAVWHTITJBHHXCSBZOJODWJWUEAMLDREMLIHITPDJVJDNXSYMWPMOEOIQXW");
    const char tmp_msg_0[] = {106, 29, 112, -61, 45, -1, 32, 102, 40, -73, -109, 49, -69, 49, -59, 51, -78, 58, 48, -36, -87, 10, -5, -51, 53, -50, -8, -56, -53, 53, 123, 117, -31, 4, 26, 21, -26, 80, 120, -75, -105, 86, 52, 73, -84, 37, -102, 14, -8, 27, 103, 125, -48, -108, -3, 38, 58, 19, -74, -68, 52, -43, -103, -127, -91, 126, -58, 97, 11, -87, -119, -73, 113, -62, -8, 80, -54, 49, -122, -74, 8, 59, 71, -48, -68, 60, -110, 56, 1, 26, 27, -8, -77, -104, -87, -104, -56, -106, 123, 124, -118, 40, -66, 116, 35, -107, -95, -37, -61, -76, 49, -83, 84, -104, -108, -115, 109, -17, 98, -11, -62, -103, -7, -9, -126, -67, -126, 71, 68, -12, 32, 11, -9, 56, 36, -118, 10, 26, 111, 13, -66, 36};
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
    msg.setTimeStamp(0.1177154353034634);
    msg.setSource(63349U);
    msg.setSourceEntity(98U);
    msg.setDestination(50787U);
    msg.setDestinationEntity(64U);
    msg.content_type.assign("ASUQZXWYRCTYSPEGUKTPIDZOAVOBHMFLJFBFXVSHGBSDNNPXHGUTWNUCKHWIIZBMUWRIEVUAEGEMFHVUROEGZBNTLPAVTQRRRZPOSEJRZYXSCFPGLYLTXKAYLRVGBAYXJABIGNJHKWHCCHNQJETYBTDTKUMDEXINZTNIMDJNOGWDCYQXPCBDSQUPLUOAWJYRQKFYICOQZMSJPSHFLPJQMIKDJAWOQCKOFOCLXLXWRKZQZVBFHSFIEMMANVVGE");
    const char tmp_msg_0[] = {38, -57, -57, -62, 27, -124, -127, 105, -118, 68, 32, 52, 82, 106, -104, 112, 49, -73, 107, -107, -13, -56, -46, 22, -103, -63, 59, -122, -32, 43, -13, -6, 81, -29, 82, -110, -17, 83, -16, 109, -56, -98, 67, 39, -45, 109, -124, -4, 50, -119, 10, -4, 109, 11, 115, -8, 89, 121, 121, -27, -65, -65, 93, -18, 84, 5, -81, 124, 101, -60, 89, -111, -5, 75, 43, -3, 63, 47, -3, -2, -121, 22, 24, 66, 33, -119, -60, -110, 10, -21, 118, 75, -108, -5, -87, 97, 20, 6, -16, -29, 102, -126, 79, -28, 74, -83, -74, 94, 112, 34, -105, -115, 41, -118, -21, 78, 58, -52, 11, 113, 56, 9, -81, 117, 63, 33, 25, 69, -69, -43, 103, 84, -97, 42, -117, 121, -126, -5, -6, 24, 86, -62, 20, 98, 23, -67, 59, -41, -71, 86, 102, 19, 17, 19, 67, 111, 72, -70, -60, -117, -88, -120, 9, 28, -120, 69, 63, -58, 40, 55, -105, 7};
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
    msg.setTimeStamp(0.3002707486276174);
    msg.setSource(39019U);
    msg.setSourceEntity(87U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(77U);
    msg.content_type.assign("MECWDYDLNOTCKIXOKVKNNBZUMRRTXFNOQIZZBUQRWYXDRAKROVPAOPRWYTMFZJFSACAUIIWAVSUVKSIOAYVTSNEERXGACGHSDQTOLQCLFHLUXKEJFTCHCKBLDMEIHZNDNLGWXEZLZBVBISZMXZPQHKBMVWPFFEGFJCAUGYYOWQGTBKDMPIXEAGSCVHUROYGPXMD");
    const char tmp_msg_0[] = {76, 39, 111, -100, 73, 89, -57, 19, -47, -14, 93, -33, 20, -88, -126, -109, 60, -73, -125, 39, 117, -27, 51, -3, 42, -36, 102, -39, 88, 62, 91, 107, -88, 9, -110, -22, 98, 34, -92, -19, -51, -118, -116, -19, -28, 115, -48, -94, 57, -5, -6, 117, -43, -96, 59, -62, -88, 14, 121, -101, -123, -103, 33, 106, 14, 62, 17, 105, -30, -126, 125, -97, 98, -34, 84, 30, -42, -44, 64, -58, 59, -82, -74, 105, -117, 38, -8, -116, -121, -6, 123, 111, -21, 49, 62, -52, -29, 30, -124, -49, 68, 120, -119, -3, -76, 115, -92, 18, 125, 92, 4, 25, -103, -43, -76, -85, -90, 39, 67, 45, 102, -21, 94, 83, -5, 39, -101, 51, 56, 81, -122, 89, -27, -103, 54, 124, 21, -49, 113, 24, -76, 117, -41, 53, -108, 45, 95, 23, 43, -52, -80, 120, 17, 120, -19, -103, 62, -46, -108, -93, -9, 108, 105, -95, -83, 64, -119, 63, 123, 88, 73, 119, 107, -30, -92, 124, 126, -126, 98, -20, -87, -71, -117, 120, 45, 126, 98, -81, -53, 59, 57, -73, 98, -112, -8, -106, -78, 120, 95, -64, 101, 18, 108, 58, -65, 12, -98, 26};
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
    msg.setTimeStamp(0.40137506111309496);
    msg.setSource(1987U);
    msg.setSourceEntity(57U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.9361696832153508);
    msg.setSource(48700U);
    msg.setSourceEntity(173U);
    msg.setDestination(37397U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.15517452427845768);
    msg.setSource(17506U);
    msg.setSourceEntity(85U);
    msg.setDestination(55941U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.680600161648246);
    msg.setSource(52850U);
    msg.setSourceEntity(252U);
    msg.setDestination(60541U);
    msg.setDestinationEntity(142U);
    msg.target = 51548U;
    msg.bearing = 0.9047919083877035;
    msg.elevation = 0.8672639620953716;

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
    msg.setTimeStamp(0.53987509182715);
    msg.setSource(7493U);
    msg.setSourceEntity(105U);
    msg.setDestination(45185U);
    msg.setDestinationEntity(194U);
    msg.target = 4525U;
    msg.bearing = 0.39801972022907106;
    msg.elevation = 0.7672356371929814;

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
    msg.setTimeStamp(0.33264339628693795);
    msg.setSource(12300U);
    msg.setSourceEntity(135U);
    msg.setDestination(47563U);
    msg.setDestinationEntity(22U);
    msg.target = 7748U;
    msg.bearing = 0.04270959862379797;
    msg.elevation = 0.8075210778578651;

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
    msg.setTimeStamp(0.816612415692705);
    msg.setSource(10547U);
    msg.setSourceEntity(226U);
    msg.setDestination(42484U);
    msg.setDestinationEntity(87U);
    msg.target = 64070U;
    msg.x = 0.1678792436339036;
    msg.y = 0.08780968128327071;
    msg.z = 0.9226448667885562;

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
    msg.setTimeStamp(0.7271800698363845);
    msg.setSource(21671U);
    msg.setSourceEntity(86U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(188U);
    msg.target = 65312U;
    msg.x = 0.13686245707255906;
    msg.y = 0.27289945308104757;
    msg.z = 0.1614783770668421;

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
    msg.setTimeStamp(0.12277042008826045);
    msg.setSource(28642U);
    msg.setSourceEntity(1U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(249U);
    msg.target = 38699U;
    msg.x = 0.7030012947724857;
    msg.y = 0.4055615354826596;
    msg.z = 0.9714687457506568;

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
    msg.setTimeStamp(0.209343070342217);
    msg.setSource(53019U);
    msg.setSourceEntity(211U);
    msg.setDestination(31426U);
    msg.setDestinationEntity(39U);
    msg.target = 31045U;
    msg.lat = 0.3117573932620845;
    msg.lon = 0.13764787910656706;
    msg.z_units = 193U;
    msg.z = 0.14495404044197657;

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
    msg.setTimeStamp(0.20808594440743056);
    msg.setSource(38552U);
    msg.setSourceEntity(58U);
    msg.setDestination(54138U);
    msg.setDestinationEntity(196U);
    msg.target = 47066U;
    msg.lat = 0.07359732203480751;
    msg.lon = 0.8165402095437839;
    msg.z_units = 121U;
    msg.z = 0.5457394933898269;

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
    msg.setTimeStamp(0.853526589262134);
    msg.setSource(3204U);
    msg.setSourceEntity(244U);
    msg.setDestination(44235U);
    msg.setDestinationEntity(93U);
    msg.target = 11267U;
    msg.lat = 0.7623412346883982;
    msg.lon = 0.8907680125440407;
    msg.z_units = 131U;
    msg.z = 0.3320137715644167;

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
    msg.setTimeStamp(0.7735208810516881);
    msg.setSource(62795U);
    msg.setSourceEntity(8U);
    msg.setDestination(31174U);
    msg.setDestinationEntity(192U);
    msg.locale.assign("YRZJQUTFWIIWSBMLUNXHUBOFHSDSWXGPLALHBLGRHJZAPCBSCJWDFJVMGEZXGITIUAPRTCEDEOPOOKYHANBQCLGTOFARFPLJNCTLADZKJNYQUITQMOBEKKVYZRKOTYE");
    const char tmp_msg_0[] = {-112, -8, -66, 95, 117, 79, -108, 31, 64, 48, 51, 111, -72, 56, 92, 71, -38, 13, 62, -89, -75, 11, -86, -30, -54, 42, -5, -115, -51, -42, -128, 117, 14, -17, 27, 107, 57, -41, 52, 67, 124, -108, -69, -84, -30, 4, 2, 121, 72, -61, -126, 85, -70, 26, -83, 89, 1, 2, -81, 42, 87, 63, -70, -35, 35, -24, -72, -79, -13, 34, 110, -66, 103, -77, -69, -127, 84, -31, -20, 126, -107, -18, 60, -4};
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
    msg.setTimeStamp(0.34111921587329064);
    msg.setSource(37798U);
    msg.setSourceEntity(37U);
    msg.setDestination(59168U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("XZOIQKPFIHRRBLCKCBLWOWYOQVQFAPQUJSQVKXOHQIBYCDECRGVFRFHKUVNZDDMLTKKMZKZOALPHPAIXBRDUASLINVQJTWEMCOMNXYEPYUSEOEINJYPFBAWFITTXUGNZZFMTJGUJDFINGMAWXQGMET");
    const char tmp_msg_0[] = {-48, -94, 68, 99, -6, -127, -88, 120, 5, 21, 105, -32, 20, 11, 34, -112, -111, 114, -26, 95, 89, -61, 34, -59, 110, 86, 56, 64, 123, 63, 14, -75, -68, -113, 49, -84, -84, -27, -13, 102, 48, 34, 86, 18, -11, -75, 94, 114, -95, 81, -67, 114, 101, 103, -55, 33, -97, 54, -98, 59, 45, -92, 29, -46, -12, -118, 79, 69, -13, 62, -97, 6, -62, -42, -70, -123, 26, 87, 102, 111, 31, -79, 124, -18, 120, 119, -73, -93, -71, -55, -97, 102, 94, 55, 30, 64, 33, -10, 109, 114, 25, -57, -34, 61, 29, 70, 39, -115, -69, -111, -30, 125, -61, 101, 62, -26, -66, 111, 14, 90, 41, 10, -79, -80, 68, -67, -112, -46, 121, 95, -79, -20, 112, -102, 23, -7, -31};
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
    msg.setTimeStamp(0.26461702278191424);
    msg.setSource(18383U);
    msg.setSourceEntity(240U);
    msg.setDestination(56513U);
    msg.setDestinationEntity(125U);
    msg.locale.assign("GDDOLOVKMZCUSLNGNIAXRSZGGMDUUZBEDTBJJYPUURSRHCPWCCXAKQGFNKCPWYATBKEHPLHXIFVNYZIQTEXLAGMICWYBZNVUKQXRUYXVJHHXTSVFQSOTIDMIYIGLVJALRBIEEBNJQJMVMFWQXHBUMMNAWDR");
    const char tmp_msg_0[] = {93, 9, 23, 8, -107, 74, -7, -11, 44, -15, 123, -85, -44, -45, 75, 10, 44, 48, -46, -74, 89, 69, 109, 73, -99, 104, -111, -49, -54, 61, 81, 53, -120, 56, 123, 102, 38, 87, 120, -56, 50, 69, 47, 76, -111, -61, -110, -74, -63, -95, -101, -62, 91, 7, -98, -79, -86, -110, -82, 52, -52, 61, 2, 91, -16, 46, 24, -107, -77, 102, -1, 4, 56, 53, 76, 45, 78, -8, -46, 125, -18, -111, 60, -20, -128, 14, -44, 41, -41, 118, -118, 63, 3, -75, -33, -120, 106, 39, 94, -90, 118, -62, 64, 80, 66, 65, -13, -68, -36, -87, 37, 119, 82, 114, 39, -56, -17, 63, 100, -120, 13, 36, 82};
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
    msg.setTimeStamp(0.8129614534558969);
    msg.setSource(24594U);
    msg.setSourceEntity(210U);
    msg.setDestination(59222U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.938185992674318);
    msg.setSource(3198U);
    msg.setSourceEntity(224U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.25639573020932016);
    msg.setSource(53524U);
    msg.setSourceEntity(18U);
    msg.setDestination(23271U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.6616944839018761);
    msg.setSource(16130U);
    msg.setSourceEntity(100U);
    msg.setDestination(29656U);
    msg.setDestinationEntity(98U);
    msg.highpass = 0.9339885108539355;
    msg.adot = 0.05632445800898689;
    msg.slope_compensation = 0.32878144189550074;
    msg.slope_compensation_difference = 0.04049034981577948;
    msg.altitude = 0.258559239055117;
    msg.auto_altitude = 0.49357082085749504;

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
    msg.setTimeStamp(0.1727672466669995);
    msg.setSource(8931U);
    msg.setSourceEntity(209U);
    msg.setDestination(47090U);
    msg.setDestinationEntity(165U);
    msg.highpass = 0.4152387125257663;
    msg.adot = 0.12526965087905484;
    msg.slope_compensation = 0.7020173720863618;
    msg.slope_compensation_difference = 0.6146511373757694;
    msg.altitude = 0.6595538044191404;
    msg.auto_altitude = 0.6807669941037455;

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
    msg.setTimeStamp(0.8681265736297908);
    msg.setSource(17914U);
    msg.setSourceEntity(30U);
    msg.setDestination(20223U);
    msg.setDestinationEntity(168U);
    msg.highpass = 0.4745255574249505;
    msg.adot = 0.9803070026917355;
    msg.slope_compensation = 0.7914365563950155;
    msg.slope_compensation_difference = 0.16265478452720195;
    msg.altitude = 0.7533326279036664;
    msg.auto_altitude = 0.8531669115028624;

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
    msg.setTimeStamp(0.7355145865701951);
    msg.setSource(39674U);
    msg.setSourceEntity(54U);
    msg.setDestination(51038U);
    msg.setDestinationEntity(85U);
    msg.remote_control_allowed = 67U;
    msg.remote_control_enabled = 150U;
    msg.remote_control_active = 201U;
    msg.depth_only_control_enabled = 9U;
    msg.direct_control_enabled = 156U;
    msg.return_to_closest_point_on_line = 10U;
    msg.on_shore_power = 70U;
    msg.latitude = 0.05893043551454391;
    msg.longitude = 0.3557351405794229;
    msg.depth = 0.24561807992146023;
    msg.depth_ref = 0.7831172603318606;
    msg.altitude = 0.3088739958441731;
    msg.altitude_ref = 0.12586151297264447;
    msg.pitch = 0.9953206641119738;
    msg.roll = 0.3253075596138679;
    msg.rpm = 0.8087727079211471;
    msg.rpm_ref = 0.8894973271640833;
    msg.speed = 0.3695234033072834;
    msg.speed_ref = 0.23585486642428688;
    msg.heading = 0.580461829019778;
    msg.heading_rate = 0.3459924483323137;
    msg.heading_ref = 0.9338890947546881;
    msg.mission_state = 97U;
    msg.leg = 421539691489062756;

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
    msg.setTimeStamp(0.5241927679474755);
    msg.setSource(29468U);
    msg.setSourceEntity(254U);
    msg.setDestination(21960U);
    msg.setDestinationEntity(211U);
    msg.remote_control_allowed = 71U;
    msg.remote_control_enabled = 159U;
    msg.remote_control_active = 147U;
    msg.depth_only_control_enabled = 119U;
    msg.direct_control_enabled = 142U;
    msg.return_to_closest_point_on_line = 243U;
    msg.on_shore_power = 0U;
    msg.latitude = 0.4000863695313479;
    msg.longitude = 0.9810462278368636;
    msg.depth = 0.37427416754595555;
    msg.depth_ref = 0.8590079773455084;
    msg.altitude = 0.9844874125248196;
    msg.altitude_ref = 0.43554840249483473;
    msg.pitch = 0.49317591878043954;
    msg.roll = 0.7226793375172123;
    msg.rpm = 0.8822032382519053;
    msg.rpm_ref = 0.6920308144425303;
    msg.speed = 0.7594538320669313;
    msg.speed_ref = 0.9172934836163069;
    msg.heading = 0.4526048153037393;
    msg.heading_rate = 0.5446134689926819;
    msg.heading_ref = 0.4603235997652191;
    msg.mission_state = 48U;
    msg.leg = -4126928393181987174;

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
    msg.setTimeStamp(0.4758375252574947);
    msg.setSource(43458U);
    msg.setSourceEntity(150U);
    msg.setDestination(6518U);
    msg.setDestinationEntity(12U);
    msg.remote_control_allowed = 51U;
    msg.remote_control_enabled = 178U;
    msg.remote_control_active = 190U;
    msg.depth_only_control_enabled = 165U;
    msg.direct_control_enabled = 33U;
    msg.return_to_closest_point_on_line = 200U;
    msg.on_shore_power = 71U;
    msg.latitude = 0.8419796623245928;
    msg.longitude = 0.7446488404926149;
    msg.depth = 0.6602588536555233;
    msg.depth_ref = 0.07838193367631574;
    msg.altitude = 0.45904812876597567;
    msg.altitude_ref = 0.25039960534047956;
    msg.pitch = 0.6495141135929189;
    msg.roll = 0.9609449222516405;
    msg.rpm = 0.4944886519289652;
    msg.rpm_ref = 0.12605564044255946;
    msg.speed = 0.9436491993797562;
    msg.speed_ref = 0.4451970451660807;
    msg.heading = 0.3118641942923389;
    msg.heading_rate = 0.6110315034957003;
    msg.heading_ref = 0.5192487309584454;
    msg.mission_state = 207U;
    msg.leg = 8149787514767701043;

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
    msg.setTimeStamp(0.42409304311960605);
    msg.setSource(15422U);
    msg.setSourceEntity(94U);
    msg.setDestination(63158U);
    msg.setDestinationEntity(17U);
    msg.name.assign("CEDVLGBDWQAUBDTNNYCRIJWBEPWXVYRAEEZIILGHRQTAIFBZHMKLGSRKJYUBASOKENGYTTQHTUCQEPWIDQ");
    msg.arg1 = 0.009415602917326793;
    msg.arg2 = 0.5264648806656702;
    msg.arg3 = 0.7238427733655017;
    msg.arg4 = 0.26029109424429653;

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
    msg.setTimeStamp(0.6536672991666725);
    msg.setSource(27595U);
    msg.setSourceEntity(241U);
    msg.setDestination(17365U);
    msg.setDestinationEntity(203U);
    msg.name.assign("AZYRUKZNPIHQHUGJYETWBKEODMZUOOCAGJVRWXIHCMUXWKAIRVTMBPPHFAWNRLXEHCKENNIYRISJASDSPTIQYXQXDVSHEMIBGCUMOT");
    msg.arg1 = 0.13281683588408644;
    msg.arg2 = 0.6352689804578605;
    msg.arg3 = 0.9367337430749737;
    msg.arg4 = 0.9719620192174613;

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
    msg.setTimeStamp(0.8504534066070558);
    msg.setSource(64620U);
    msg.setSourceEntity(79U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(223U);
    msg.name.assign("QTQRUPIRBXGFIERMI");
    msg.arg1 = 0.06109136184787023;
    msg.arg2 = 0.9940643319092554;
    msg.arg3 = 0.5702295301408116;
    msg.arg4 = 0.07511379071761648;

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
    msg.setTimeStamp(0.22583979485239514);
    msg.setSource(25291U);
    msg.setSourceEntity(79U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(33U);
    msg.direction = 236U;
    msg.range1 = 0.005098625493215492;
    msg.range2 = 0.6694187430723706;
    msg.range3 = 0.8163225312124788;
    msg.range4 = 0.6068877803762378;

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
    msg.setTimeStamp(0.750249998348842);
    msg.setSource(44536U);
    msg.setSourceEntity(223U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(21U);
    msg.direction = 174U;
    msg.range1 = 0.778592905815455;
    msg.range2 = 0.1944794839108268;
    msg.range3 = 0.9056186934019318;
    msg.range4 = 0.2579339610415964;

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
    msg.setTimeStamp(0.499695476759469);
    msg.setSource(41437U);
    msg.setSourceEntity(111U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(116U);
    msg.direction = 161U;
    msg.range1 = 0.8320652043441202;
    msg.range2 = 0.32197438903318154;
    msg.range3 = 0.7282984598255234;
    msg.range4 = 0.12602839025158674;

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
    msg.setTimeStamp(0.32868916732361264);
    msg.setSource(350U);
    msg.setSourceEntity(154U);
    msg.setDestination(27117U);
    msg.setDestinationEntity(205U);
    msg.msg.assign("QQRUPGHVLTCQWHCSAWUSAWXCEQLYVCZETYHTXNUSOXBVUIJGGZGDDCDOYKNAGURJFCIQCVOTVWNLIWQCIORSFIQKDZHKZXLZBKMUUVERZIKOZQTBJCAAMUJYMBFQPAIIHQNWMLUNFTXNPJOBDVDONJKRELNSEXFSRSPYLTRDWZFEJGMTGDBLPSSNYJAKFMYEMKUMPMHEWXDZHAGWHSB");
    msg.direction = 135U;

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
    msg.setTimeStamp(0.1832106990112714);
    msg.setSource(14665U);
    msg.setSourceEntity(100U);
    msg.setDestination(38341U);
    msg.setDestinationEntity(200U);
    msg.msg.assign("WKKXWIUYQCUUSQGDMVLTOUKQGNVXCMIHTZUFIDM");
    msg.direction = 231U;

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
    msg.setTimeStamp(0.33367329123808176);
    msg.setSource(53944U);
    msg.setSourceEntity(51U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(217U);
    msg.msg.assign("EQWQNGSAZNBBHPVRGHREDTBKLNSJJPIVZIHIZYJ");
    msg.direction = 119U;

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
    msg.setTimeStamp(0.03441385037284295);
    msg.setSource(17196U);
    msg.setSourceEntity(85U);
    msg.setDestination(36402U);
    msg.setDestinationEntity(4U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.3123558493179922);
    msg.setSource(19452U);
    msg.setSourceEntity(148U);
    msg.setDestination(13208U);
    msg.setDestinationEntity(100U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.834599254872497);
    msg.setSource(21563U);
    msg.setSourceEntity(96U);
    msg.setDestination(53139U);
    msg.setDestinationEntity(151U);
    msg.state = 208U;

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
    msg.setTimeStamp(0.549524511811763);
    msg.setSource(54029U);
    msg.setSourceEntity(55U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(225U);
    msg.dt = 0.8258878264408627;
    msg.k_d = 0.30693339703945677;
    msg.range1 = 0.009225094693808167;
    msg.range2 = 0.2395219636483531;
    msg.range3 = 0.08520843264607691;
    msg.range4 = 0.9316712609242431;
    msg.u = 0.6262601089416677;
    msg.v = 0.2294145404808936;
    msg.w = 0.5294707941141397;
    msg.phi = 0.7217051408116677;
    msg.theta = 0.5755947595655381;
    msg.psi = 0.9637058475515758;
    msg.adot = 0.5143940644797086;

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
    msg.setTimeStamp(0.2573235200382795);
    msg.setSource(65346U);
    msg.setSourceEntity(41U);
    msg.setDestination(64082U);
    msg.setDestinationEntity(100U);
    msg.dt = 0.13775595345583702;
    msg.k_d = 0.6113292554202472;
    msg.range1 = 0.06980708949752412;
    msg.range2 = 0.17378983913785906;
    msg.range3 = 0.7969333488189573;
    msg.range4 = 0.3867640754498467;
    msg.u = 0.7559535395874267;
    msg.v = 0.8163938427480432;
    msg.w = 0.8036997412461115;
    msg.phi = 0.957415823358837;
    msg.theta = 0.6097820193689613;
    msg.psi = 0.4462527443215165;
    msg.adot = 0.09852019984518856;

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
    msg.setTimeStamp(0.7536903840688585);
    msg.setSource(60823U);
    msg.setSourceEntity(39U);
    msg.setDestination(32158U);
    msg.setDestinationEntity(122U);
    msg.dt = 0.4576352199155087;
    msg.k_d = 0.21929671608771706;
    msg.range1 = 0.4244244599828433;
    msg.range2 = 0.20552402259041402;
    msg.range3 = 0.29575513752019267;
    msg.range4 = 0.5835226532932025;
    msg.u = 0.6414183570784129;
    msg.v = 0.6413929805269034;
    msg.w = 0.1684659737136639;
    msg.phi = 0.7894796741070804;
    msg.theta = 0.10822549521330882;
    msg.psi = 0.48912036427268657;
    msg.adot = 0.5884215940037277;

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

  {
    IMC::SimulatedTime msg;
    msg.setTimeStamp(0.15638865674040114);
    msg.setSource(21317U);
    msg.setSourceEntity(18U);
    msg.setDestination(41304U);
    msg.setDestinationEntity(154U);
    msg.htime = 0.19149979279829166;
    msg.dt = 0.26337109691831606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedTime #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedTime msg;
    msg.setTimeStamp(0.8214152724921377);
    msg.setSource(351U);
    msg.setSourceEntity(66U);
    msg.setDestination(62968U);
    msg.setDestinationEntity(3U);
    msg.htime = 0.9988149483976474;
    msg.dt = 0.6923792089107531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedTime #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedTime msg;
    msg.setTimeStamp(0.030424646004705735);
    msg.setSource(34184U);
    msg.setSourceEntity(85U);
    msg.setDestination(46419U);
    msg.setDestinationEntity(66U);
    msg.htime = 0.793921694673187;
    msg.dt = 0.5327502156574266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedTime #2", msg == *msg_d);
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
