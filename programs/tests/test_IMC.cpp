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
// IMC XML MD5: c3528fa857ce5aff6aac284a0596293e                            *
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
    msg.setTimeStamp(0.5788798480261571);
    msg.setSource(10559U);
    msg.setSourceEntity(68U);
    msg.setDestination(42453U);
    msg.setDestinationEntity(60U);
    msg.state = 158U;
    msg.flags = 200U;
    msg.description.assign("WKQJRDHTPKCTDSZEXFSXTXBNMGCXG");

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
    msg.setTimeStamp(0.9449470358219848);
    msg.setSource(6993U);
    msg.setSourceEntity(113U);
    msg.setDestination(62944U);
    msg.setDestinationEntity(25U);
    msg.state = 105U;
    msg.flags = 6U;
    msg.description.assign("XROPKUGAQTSVYVCPKDHZKZRRIHHQMCXQTGCVYWCFYRLQJNWIMXBKHEJYASGYSLIIJTGOSWIATOJTHQCUSKNVNPCOUEYMMZOKOCARUWDFWJWHABQGFTEKOPNXJKMZCLEJBMXKPMQEDFVRODANHFTACFF");

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
    msg.setTimeStamp(0.8137567472647939);
    msg.setSource(43311U);
    msg.setSourceEntity(87U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(225U);
    msg.state = 248U;
    msg.flags = 94U;
    msg.description.assign("MJMBGIWEMHLYPEBCHFRAJBDNDNKUYLKGVLETOZVHFKARNLPSHJYTSCJCXAVPPFQXHLLURQXIYDZAAUFWDRSWWWXXCRQUIJIISEUVOCFVHYTEDPUHMVAEUKWISOTNBMGGTBPHJZ");

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
    msg.setTimeStamp(0.1808747254466163);
    msg.setSource(42467U);
    msg.setSourceEntity(24U);
    msg.setDestination(40471U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.3459368333944258);
    msg.setSource(12193U);
    msg.setSourceEntity(227U);
    msg.setDestination(62698U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.9281465141658787);
    msg.setSource(7095U);
    msg.setSourceEntity(230U);
    msg.setDestination(51773U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.8173343861885735);
    msg.setSource(5674U);
    msg.setSourceEntity(19U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(236U);
    msg.id = 103U;
    msg.label.assign("UMWYFJLDCVNRSBFZHUPOHQMJIQDRDVJIUDZTFGBOBAAXIMVSJLEZEGLWSRSXUCSOENHRPTPOFYCODKXLNDEKIUHWMPFNDCHAYRAQTGXLKWCSNVXOFPBORVHXJICLSKTNQZOTOYLFABIYVPGCRMRHZNXFWIBHGXYHZJAPKJAEDGNIGBPFIZZEESHXTCWNBJLSMEZTJMDQSKRMUKBTCW");
    msg.component.assign("EEGPLWYQNXDHAYCBUOMVFHIQPOVFQLLNZGMBUVEJISINKWHTDTZEXGQJLFIRDJATYIWIARMFFNRFPBVZLEMHTDVDVXXRKDCJVSRL");
    msg.act_time = 48065U;
    msg.deact_time = 36396U;

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
    msg.setTimeStamp(0.889976102219052);
    msg.setSource(3932U);
    msg.setSourceEntity(11U);
    msg.setDestination(1251U);
    msg.setDestinationEntity(73U);
    msg.id = 104U;
    msg.label.assign("AWXLNVEWNHGHAGSSQRFTZRRDFIVLLBRMUWQDEZSHKRSTAQAZBTECCVBXENBXPVBYSJIQCGYKXPDKIZSCSDRHBSMWLMPPJTBVPO");
    msg.component.assign("RPRTNQLTGZNCPEZDJAAJSUNLOKVBEXVLBWGSTIGJBHWKUZBXVGFTSXQJCSGGOMFXTKSVSYOIDJMDAQOIWNK");
    msg.act_time = 13766U;
    msg.deact_time = 51639U;

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
    msg.setTimeStamp(0.10397707584532567);
    msg.setSource(19710U);
    msg.setSourceEntity(3U);
    msg.setDestination(4870U);
    msg.setDestinationEntity(3U);
    msg.id = 4U;
    msg.label.assign("CFGNDKYMGFOCSEADAOWXHAAMWPLGWRDLVAOGSIVULXCBBCXXAIVRPYWXFGKBOYUMILHKCVZHMKJQENOPKFLPVSXDIVWTVLELGKMPJOUYBNRUTWMRFZIYSKCZHQYMDRSHVJJJFBARODBLSXBMSIDLNNFDG");
    msg.component.assign("CVMUBEFOKDUGZAXGKYZKIRCKOIFLWCPNRRRDOTEWCPSUFTGBZXSDDJMVTKNNOVTQXBSYHXBFYJEBNLXOGIXGHNUABRMWXDHSVPJPHJFBQOYDEP");
    msg.act_time = 10325U;
    msg.deact_time = 51229U;

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
    msg.setTimeStamp(0.44067447487375255);
    msg.setSource(50700U);
    msg.setSourceEntity(165U);
    msg.setDestination(46127U);
    msg.setDestinationEntity(217U);
    msg.id = 198U;

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
    msg.setTimeStamp(0.4453112887601345);
    msg.setSource(53470U);
    msg.setSourceEntity(224U);
    msg.setDestination(53219U);
    msg.setDestinationEntity(0U);
    msg.id = 113U;

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
    msg.setTimeStamp(0.44441845122968526);
    msg.setSource(15014U);
    msg.setSourceEntity(51U);
    msg.setDestination(56676U);
    msg.setDestinationEntity(116U);
    msg.id = 163U;

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
    msg.setTimeStamp(0.26334234039791704);
    msg.setSource(25042U);
    msg.setSourceEntity(59U);
    msg.setDestination(49641U);
    msg.setDestinationEntity(181U);
    msg.op = 15U;
    msg.list.assign("FABEWGUDQVHFFIWSAWRXQIGXYISZBVDUWAOYZDDBOAPIHWVTMTLZUFKJYHELLXNPLXKDRCWPKDLNTXSWCRRZPSWORVYSBTAZCZHNZYMQHFMQNTMECJFNSECEMPOHLRRFCIOSLDXKTEURTGUVQMDGJHAHJPYNEJXBKIMODJNWDXAVSATGMGPIBKJYSZBKKOATCCEKBVULFNIJGQYPZQCGOUVNPNOGHQREZMVGULLFYPJAKXQUUBFXBMRIHI");

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
    msg.setTimeStamp(0.8039466934953123);
    msg.setSource(57299U);
    msg.setSourceEntity(27U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(224U);
    msg.op = 12U;
    msg.list.assign("HMBVEOIMGLBTNVYOGXAIGADUJDMDRJLXZPXCSHLNOZSZBYRFFHZTDIXGXPRKTMJIVWTIIOXODOYJVCKVMBCAKNAFVCPTGUCLTTSEKFZRBGESSEPKYIDHLPUGUWCQKCBKOAXOSQHADR");

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
    msg.setTimeStamp(0.765382627138217);
    msg.setSource(11983U);
    msg.setSourceEntity(57U);
    msg.setDestination(7530U);
    msg.setDestinationEntity(163U);
    msg.op = 40U;
    msg.list.assign("JQVOQAEANPBOCRHQMHKZZFNSLBIBBFUNTRTUTXMXMTGUVOPDTWRWBDCOZDNELBXJI");

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
    msg.setTimeStamp(0.8498834739637748);
    msg.setSource(16068U);
    msg.setSourceEntity(95U);
    msg.setDestination(41080U);
    msg.setDestinationEntity(145U);
    msg.value = 182U;

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
    msg.setTimeStamp(0.22217995057258888);
    msg.setSource(4576U);
    msg.setSourceEntity(32U);
    msg.setDestination(22001U);
    msg.setDestinationEntity(145U);
    msg.value = 99U;

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
    msg.setTimeStamp(0.4742104498576858);
    msg.setSource(15075U);
    msg.setSourceEntity(9U);
    msg.setDestination(6421U);
    msg.setDestinationEntity(234U);
    msg.value = 239U;

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
    msg.setTimeStamp(0.26557366913475877);
    msg.setSource(3681U);
    msg.setSourceEntity(240U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("CLRVWXIXEUEOOZHSLVTKCYCBIRNGPQMEZEWGQEDSHKOHKWTIOTIXTAJYUQFVKXXFAOVYOSJIHSYASCMFTAEZDHAPCNPZUPLUCZRDTFNBSUZJLGVKFCJAUBWDBXFKZVKRZZORDOQEOICWXFJWVRJFBDMBOCPVINGLILJHQELMPVLEYHDSUL");
    msg.message_id = 635U;

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
    msg.setTimeStamp(0.3601474154988368);
    msg.setSource(4104U);
    msg.setSourceEntity(248U);
    msg.setDestination(17095U);
    msg.setDestinationEntity(80U);
    msg.consumer.assign("LBXPZIOAWXNYQUIVBCTSFCTUXNNGFKNISOWUHEQGRDMALGUDTGQGNSWEKNJSHBAVNZGJALDIFFVKPRGDQJCHYEELODYEFFQPBRUEDHJCKBMISBMXVARMVKSEWLBJBMUUIJSQITTKXKHUFMYMXEKHOEWPFCLYRZPMHNGYBXZALLOIBHXQCIRWWDYXOJKAVULD");
    msg.message_id = 27354U;

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
    msg.setTimeStamp(0.621844862308875);
    msg.setSource(32893U);
    msg.setSourceEntity(98U);
    msg.setDestination(24827U);
    msg.setDestinationEntity(32U);
    msg.consumer.assign("JIOBSJRVUXGYVLTHBXHEULYROPVCJPNQGVHSKDYCUKHWCOZLSJMOZLEJCEQXLTMEGYDOWZDQGYVNZZVZJNLRKATEWKUZVGWIEGNTQFFHDJRBYIXAAGSFFM");
    msg.message_id = 39788U;

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
    msg.setTimeStamp(0.05811951339461863);
    msg.setSource(44655U);
    msg.setSourceEntity(14U);
    msg.setDestination(99U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.632152405643539);
    msg.setSource(38274U);
    msg.setSourceEntity(62U);
    msg.setDestination(20311U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.09655580067674097);
    msg.setSource(27101U);
    msg.setSourceEntity(115U);
    msg.setDestination(33443U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.5874728454066545);
    msg.setSource(63299U);
    msg.setSourceEntity(139U);
    msg.setDestination(7937U);
    msg.setDestinationEntity(49U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.14344323813135307);
    msg.setSource(18565U);
    msg.setSourceEntity(67U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(54U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.1098029798223148);
    msg.setSource(13987U);
    msg.setSourceEntity(235U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(176U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.022189161133689073);
    msg.setSource(1767U);
    msg.setSourceEntity(157U);
    msg.setDestination(41165U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 181U;
    msg.step_number = 3U;
    msg.step.assign("RKFVNSQHHWAMCULGQOPUQGUDBWRNBEOFETKQXJGTKMSHTXCAEALWBKSFCMHIZTCLVGNMLIEFVNZYDPLNGJKWWIWUQUSAAITDRVPXYOYABKKM");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.017279896190681487);
    msg.setSource(53298U);
    msg.setSourceEntity(20U);
    msg.setDestination(40012U);
    msg.setDestinationEntity(74U);
    msg.total_steps = 123U;
    msg.step_number = 77U;
    msg.step.assign("ORZZTYJSYKBFBSNSKURURBXEMJXWFEYCHGDSHNCHWOBCGTNEGABLWTJTBOKZTAPDPONIWAVRKFSAXDLIWUVXAHQMWCBIG");
    msg.flags = 126U;

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
    msg.setTimeStamp(0.06116348609156863);
    msg.setSource(60625U);
    msg.setSourceEntity(182U);
    msg.setDestination(28344U);
    msg.setDestinationEntity(136U);
    msg.total_steps = 100U;
    msg.step_number = 61U;
    msg.step.assign("RPIAKENRLQOFVAMYXQUORVMLOATCGRKVVWZYFFHVBOBOKJDRXQHWDISJHXRBTUDVYKXBJMMJWFPUSCLACPJTZHFUANQQLMDYWQLHNTZSCKFNEGIENYWVNKUWKSOILDGEOPORFDFBVLOCVGWZUUXTEPQYRUKIIGZPYILUBINPLMHIRVMZXSSYWSJJBCZUSPTEFWQQLDBGRYFEGHEQWTTNTCJGGKNHSAAOYDM");
    msg.flags = 143U;

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
    msg.setTimeStamp(0.32008052289603994);
    msg.setSource(64491U);
    msg.setSourceEntity(57U);
    msg.setDestination(50086U);
    msg.setDestinationEntity(113U);
    msg.state = 14U;
    msg.error.assign("PXWCUVKJABXHITBADYZAJJYELTUIUGCGMGFFOLZFYKEGEHVQOOZZVFMOMLOUKIGKCIOLXZYETETAGCYBNHQSVJUFRWCKBBQPSIQWCDIZYYYAPXYYTFPHADPJVGMBZCONWARLHDBMIXTRASTQNXBZQMUWDVFHXGDHHPWPNKSTSKVRMQPCHOVLPRKTKUODRFLXWNXCWLRELRUSVMNLWXDVZUEJBISEKJJSGAIOATEQBNUJZ");

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
    msg.setTimeStamp(0.610340096949096);
    msg.setSource(43341U);
    msg.setSourceEntity(248U);
    msg.setDestination(58396U);
    msg.setDestinationEntity(73U);
    msg.state = 199U;
    msg.error.assign("RJAXQDLVZOHPNUGFSQPNTHVCRWIALWRTBGENHNDTNSQHEUBFUZWDQCVFAXUCBZTRQSTKZ");

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
    msg.setTimeStamp(0.8040910560926131);
    msg.setSource(57496U);
    msg.setSourceEntity(12U);
    msg.setDestination(9775U);
    msg.setDestinationEntity(232U);
    msg.state = 36U;
    msg.error.assign("AYTOHRUNKUAPZGINZDQSBLFGDQZKIWFWQNEVSCBMEDXGAARNLWBKTFMAXYBTXMJIZBPYZPGGQORXUYGBLTOSGLJDIKQJHOQVHYLXQGTUYIWKVVDECUISFLPNFOOJAZHSQVMERUNNICUZURHMJFJASVQFZUSCBKVWMDFRYYXJBEKSPA");

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
    msg.setTimeStamp(0.5735768732889517);
    msg.setSource(15887U);
    msg.setSourceEntity(124U);
    msg.setDestination(56204U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.4829117633988548);
    msg.setSource(33936U);
    msg.setSourceEntity(37U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.6230073830404466);
    msg.setSource(20534U);
    msg.setSourceEntity(119U);
    msg.setDestination(61810U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.958479999284495);
    msg.setSource(59064U);
    msg.setSourceEntity(152U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(196U);
    msg.op = 91U;
    msg.speed_min = 0.46780003118256475;
    msg.speed_max = 0.9287892896692915;
    msg.long_accel = 0.9986274742921007;
    msg.alt_max_msl = 0.3735678900956062;
    msg.dive_fraction_max = 0.7765803573039334;
    msg.climb_fraction_max = 0.49206900009798105;
    msg.bank_max = 0.366295910430539;
    msg.p_max = 0.20346183566583187;
    msg.pitch_min = 0.5728412307303203;
    msg.pitch_max = 0.6840578369202044;
    msg.q_max = 0.5918338680975037;
    msg.g_min = 0.4221987639943564;
    msg.g_max = 0.691244427326243;
    msg.g_lat_max = 0.5697870378761549;
    msg.rpm_min = 0.2644683518629929;
    msg.rpm_max = 0.4934081946198662;
    msg.rpm_rate_max = 0.4010998183944945;

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
    msg.setTimeStamp(0.8569644769836104);
    msg.setSource(64463U);
    msg.setSourceEntity(180U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(95U);
    msg.op = 193U;
    msg.speed_min = 0.09538176988983749;
    msg.speed_max = 0.2562067723802285;
    msg.long_accel = 0.6317413157723356;
    msg.alt_max_msl = 0.8343833448468208;
    msg.dive_fraction_max = 0.7486112246205694;
    msg.climb_fraction_max = 0.7594458777454627;
    msg.bank_max = 0.3798874950391694;
    msg.p_max = 0.6978490272230032;
    msg.pitch_min = 0.20833830878155912;
    msg.pitch_max = 0.588460566437467;
    msg.q_max = 0.7798686525388188;
    msg.g_min = 0.9140859315710012;
    msg.g_max = 0.9928592409846224;
    msg.g_lat_max = 0.12360913432727416;
    msg.rpm_min = 0.6991739246130894;
    msg.rpm_max = 0.9721592139191588;
    msg.rpm_rate_max = 0.8975710493545571;

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
    msg.setTimeStamp(0.9909257116104432);
    msg.setSource(26389U);
    msg.setSourceEntity(77U);
    msg.setDestination(4311U);
    msg.setDestinationEntity(115U);
    msg.op = 30U;
    msg.speed_min = 0.6040256136213277;
    msg.speed_max = 0.35100904264342414;
    msg.long_accel = 0.8751928491124821;
    msg.alt_max_msl = 0.3496590917243979;
    msg.dive_fraction_max = 0.4509974351102072;
    msg.climb_fraction_max = 0.11039888508591633;
    msg.bank_max = 0.35572091268418116;
    msg.p_max = 0.15194145304361983;
    msg.pitch_min = 0.1995178815273344;
    msg.pitch_max = 0.9547522968812677;
    msg.q_max = 0.11065613187380707;
    msg.g_min = 0.03322212410940484;
    msg.g_max = 0.17069843474205015;
    msg.g_lat_max = 0.9035895290282571;
    msg.rpm_min = 0.22143208399651282;
    msg.rpm_max = 0.7897891371463717;
    msg.rpm_rate_max = 0.9569312940985849;

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
    msg.setTimeStamp(0.4673232818036557);
    msg.setSource(8554U);
    msg.setSourceEntity(119U);
    msg.setDestination(12941U);
    msg.setDestinationEntity(2U);
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 106U;
    tmp_msg_0.speed_min = 0.013686346713636444;
    tmp_msg_0.speed_max = 0.5737600075927861;
    tmp_msg_0.long_accel = 0.6971779771440981;
    tmp_msg_0.alt_max_msl = 0.6237596466711495;
    tmp_msg_0.dive_fraction_max = 0.6499405037341673;
    tmp_msg_0.climb_fraction_max = 0.7505316468401142;
    tmp_msg_0.bank_max = 0.2727818995818597;
    tmp_msg_0.p_max = 0.08067497120281442;
    tmp_msg_0.pitch_min = 0.17267318049743396;
    tmp_msg_0.pitch_max = 0.2683037326837696;
    tmp_msg_0.q_max = 0.590145125554322;
    tmp_msg_0.g_min = 0.3427669721964476;
    tmp_msg_0.g_max = 0.6539964600198177;
    tmp_msg_0.g_lat_max = 0.7534062606839687;
    tmp_msg_0.rpm_min = 0.4196104830261457;
    tmp_msg_0.rpm_max = 0.12015722681132479;
    tmp_msg_0.rpm_rate_max = 0.8797132890970352;
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
    msg.setTimeStamp(0.00700033208479689);
    msg.setSource(52580U);
    msg.setSourceEntity(91U);
    msg.setDestination(59744U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.6195073762527131);
    msg.setSource(30373U);
    msg.setSourceEntity(217U);
    msg.setDestination(19923U);
    msg.setDestinationEntity(126U);
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.6650390438072982);
    msg.setSource(43875U);
    msg.setSourceEntity(213U);
    msg.setDestination(26321U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.511966673646943;
    msg.lon = 0.2319748287427078;
    msg.height = 0.2938367467003796;
    msg.x = 0.42838702520319094;
    msg.y = 0.3392153143335913;
    msg.z = 0.21349695767458077;
    msg.phi = 0.4983604167510053;
    msg.theta = 0.7968938641097013;
    msg.psi = 0.30089561152243094;
    msg.u = 0.27935281677923085;
    msg.v = 0.92560462826864;
    msg.w = 0.9608506724870176;
    msg.p = 0.8158262891469884;
    msg.q = 0.9056004265271143;
    msg.r = 0.7694192074760092;
    msg.svx = 0.11741972935218137;
    msg.svy = 0.34875990710215543;
    msg.svz = 0.9848941736451183;

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
    msg.setTimeStamp(0.16826983549578223);
    msg.setSource(23367U);
    msg.setSourceEntity(72U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.9512223090842032;
    msg.lon = 0.20952249593485395;
    msg.height = 0.6942241908017508;
    msg.x = 0.8239046690653522;
    msg.y = 0.6447978780490056;
    msg.z = 0.7344686549793972;
    msg.phi = 0.9851489921526098;
    msg.theta = 0.5113214040026498;
    msg.psi = 0.49567405991805835;
    msg.u = 0.2407957621532294;
    msg.v = 0.10867049321924493;
    msg.w = 0.10270393621157714;
    msg.p = 0.9794572176390342;
    msg.q = 0.22324626757033683;
    msg.r = 0.43540813197988026;
    msg.svx = 0.8632881540701308;
    msg.svy = 0.4410473292816327;
    msg.svz = 0.2500884165602818;

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
    msg.setTimeStamp(0.3996130258123577);
    msg.setSource(42972U);
    msg.setSourceEntity(240U);
    msg.setDestination(45040U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.4436699553609543;
    msg.lon = 0.1266211236007565;
    msg.height = 0.46634671101483527;
    msg.x = 0.6381747054277535;
    msg.y = 0.44734196583700747;
    msg.z = 0.7118949223319864;
    msg.phi = 0.9499376134264825;
    msg.theta = 0.7028690474932583;
    msg.psi = 0.6486003102419395;
    msg.u = 0.5984050992059972;
    msg.v = 0.7034639348915975;
    msg.w = 0.8503937643163787;
    msg.p = 0.20204467877309873;
    msg.q = 0.5966818844684626;
    msg.r = 0.5702357716907195;
    msg.svx = 0.5857259656007385;
    msg.svy = 0.1681369684744618;
    msg.svz = 0.6456288781615304;

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
    msg.setTimeStamp(0.5016759500268452);
    msg.setSource(34816U);
    msg.setSourceEntity(128U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(28U);
    msg.op = 249U;
    msg.entities.assign("FJONWQMEHIYQVARRZSVMVPFTKMZXFFDAKHXRJWTEEUXSZMBOGTYSYLPHHCLHPTAIRBHHUQAOUIZPNNSETUPZIPUKVHYVCQEBRXQHCJITVMPZGGWQPNYDFOGMRSJZ");

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
    msg.setTimeStamp(0.7486981082073413);
    msg.setSource(62846U);
    msg.setSourceEntity(107U);
    msg.setDestination(35177U);
    msg.setDestinationEntity(122U);
    msg.op = 251U;
    msg.entities.assign("PXIIHGXSKKVWJBMPPFJOMXFIHFFAYZYDKNQBYGLWLBEOHJJVXBMRPHICLZEANLQZIAPZYZNBOBIZARNDSVTXPGEWAHSCV");

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
    msg.setTimeStamp(0.966874594087137);
    msg.setSource(46708U);
    msg.setSourceEntity(178U);
    msg.setDestination(52962U);
    msg.setDestinationEntity(151U);
    msg.op = 33U;
    msg.entities.assign("SICRJZNYRWXEAGFNKWTHURKROQVTCUIJAREENURCULODSYLMDWZEJWLQOLXVLWOTHTOMTMNMHGLUGICXGBHSMARZGFAXQEVPKYLFUWXEVLSNCRZDSEEAFBKKZGNTZJZNQMDBUDBUDC");

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
    msg.setTimeStamp(0.41467814738353026);
    msg.setSource(60795U);
    msg.setSourceEntity(161U);
    msg.setDestination(9950U);
    msg.setDestinationEntity(29U);
    msg.type = 47U;
    msg.speed = 3216U;
    const char tmp_msg_0[] = {-49, -15, -6, -42, -75, -9, 10, -33, -98, -110, 108, -17, 86, 87, -94, 79, 61, 10, 23, -15, -13, 126, 60, 74, 54, -126, 60, -45, -119, 125, 62, -30, -42, 88, 15, -3, 119, -20, -70, 37, 25, -62, -66, -32, 67, 79, 58, -67, 110, 35, 48, 16, -5, 3, 2, -111, -64, -110, -88, 45, -126, 60, 52, -5, 123, -75, 76, 113, 80, 125, 89, 15, -2, -92, 4, -125, 76, -79, -28, 110, 37, -61, -116, 11, -15, -17, -105, -9};
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
    msg.setTimeStamp(0.8688849678779306);
    msg.setSource(18741U);
    msg.setSourceEntity(30U);
    msg.setDestination(63370U);
    msg.setDestinationEntity(79U);
    msg.type = 80U;
    msg.speed = 23694U;
    const char tmp_msg_0[] = {-106, -120, 87, 36, 35, 49, -20, -121, -107, -123, -49, 49, 46, 114, 113, 95, -55, -35, -97, 30, 5, 77, -41, 99, -97, -67, -117, -59, -121, -41, -85, -113, -75, 40, 41, -63, -56, 60, -13, 86, -62, -48, -77, -25, -70, 104, -115, -73, -61, -74, -72, 102, 35, -28, -7, -121, 21, 71, -115, 34, -119, 6, -128, -85, -19, -60, 18, 83, -77, -6, 61, -118, 43, -39, -71, -118, 89, -75, -23, -33, 78, 20, -45, -115, -5, 89, -9, 77, 5, -76, 45, 80, -94, 94, 18, -117, -106, -41, 48, -27, -115, -9, -105, 1, 95, -108, 87, -85, 20, -108, -46};
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
    msg.setTimeStamp(0.3754856804285688);
    msg.setSource(35679U);
    msg.setSourceEntity(241U);
    msg.setDestination(6156U);
    msg.setDestinationEntity(31U);
    msg.type = 70U;
    msg.speed = 35579U;
    const char tmp_msg_0[] = {-10, 101, -90, 55, -71, 41, -28, -19, -89, -14, 64, 19, -97, 2, 48, -27, -122, -113, -25, -78, -22, -28, -128, -80, -113, 35, -76, -40, 62, 70, -93, -35, -108, -91, -86, 108, -121, -23, 49, 27, -28, -92, 21, -72, -98, 17, 96, 104, 42, 51, 53, -72, -60, 2, 48, -47, -121, 20, 126, -107, 22, -53, -73, 57, -5, 49, -22, 34, -105, -103, 54, -45, -114, 99, 10, 15, -22, -28, 115, 43, 8, 73, 74, 32, -4, 64, -10, -40, -11, -60, 99, -16, -19, 117, -99, 96, 113, 61, 66, -72, 74, 10, -47, 80, 40, -79, -2, -102, -72, 8, -49, 91, -56, 5, -74, 20, 118, 99, -78, 82, -3, -96, -113, -77, 36, 38, 116, 30, -118, 121, -52, -89, -65, -40, 108, -34, -127, -4, -90, 118, -100, -13, 33, 32, 55, -128, -53, -65, 87, 49, -39, 115, -124, 54, -49, -114, -18, -12, -27, 19, -70, -10, 80, -121, 5, 35, -93, -73, 50, -84, -48, -128, 119, -88, -57, 91, -110, -17, 42, -125, 26, -127, 53, 36, -97, 7, -105, 81, -19, 24, 111, 44, -24, 86, -57, 47, -116, -110, 97, 8, 65};
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
    msg.setTimeStamp(0.9282898291371032);
    msg.setSource(23583U);
    msg.setSourceEntity(149U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(231U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.5889303503476997;
    msg.bank2p_pgain = 0.23178315230616586;

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
    msg.setTimeStamp(0.48430378926342554);
    msg.setSource(4650U);
    msg.setSourceEntity(240U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(8U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.5110070086045;
    msg.bank2p_pgain = 0.5474998441237687;

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
    msg.setTimeStamp(0.8016970049379774);
    msg.setSource(5307U);
    msg.setSourceEntity(100U);
    msg.setDestination(59267U);
    msg.setDestinationEntity(121U);
    msg.op = 187U;
    msg.tas2acc_pgain = 0.7082891249846814;
    msg.bank2p_pgain = 0.7168021856760411;

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
    msg.setTimeStamp(0.9266772406478503);
    msg.setSource(38117U);
    msg.setSourceEntity(225U);
    msg.setDestination(16253U);
    msg.setDestinationEntity(25U);
    msg.available = 645980138U;
    msg.value = 169U;

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
    msg.setTimeStamp(0.7535617025902559);
    msg.setSource(7879U);
    msg.setSourceEntity(168U);
    msg.setDestination(3946U);
    msg.setDestinationEntity(117U);
    msg.available = 524601884U;
    msg.value = 185U;

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
    msg.setTimeStamp(0.9417597566680523);
    msg.setSource(47361U);
    msg.setSourceEntity(56U);
    msg.setDestination(12358U);
    msg.setDestinationEntity(246U);
    msg.available = 1804317038U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.9379811251542167);
    msg.setSource(40149U);
    msg.setSourceEntity(180U);
    msg.setDestination(34498U);
    msg.setDestinationEntity(78U);
    msg.op = 207U;
    msg.snapshot.assign("NQKDMPTQTRWKWLSSEWABZKRVGPBZIRXVQMLCENQAGSBLENVGVPBJLXPDXCQJBKJETNICGDUHFRIQXXOOUUFCZHKAWXJUUZAXCWPIIDSEOCWHDXTKTBFBERZWOZ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7658759180994879;
    tmp_msg_0.lon = 0.5324516857809891;
    tmp_msg_0.z = 0.9465691015901875;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.speed = 0.036466280549159014;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.custom.assign("ZOHUAMEHOAIGRAPXBKLTRJTEOZYWILTQPKGFMWVKIRCXKNDOAVQSLYBXPIKPCBQFHLGF");
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
    msg.setTimeStamp(0.9078602494094266);
    msg.setSource(17292U);
    msg.setSourceEntity(53U);
    msg.setDestination(21199U);
    msg.setDestinationEntity(153U);
    msg.op = 107U;
    msg.snapshot.assign("PXRIBANWSZMOUMZMURRCBCBTWWVNEWIKRANPODFSJTEVGLOSEAYJQUIIAERLYCTYZLKNVVJXFDHGZVYFPQCHTJLXWDJRAGHJZPKHQHWBKZEPMHFGGMXKWCUEXGPLBHAE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OCDQWUKWIHJJSYRSUBSOYPUFILAHXIMDMLJHVJFXBRKUDTQWNRDEPQYGORFEYEXKPXGMVMEXQIINKXSLWSWZNXCTTNOTRZDSNAMPZXEFAZQVRHAPCZVQFYHJMGOKJAKZRHZKIUJSBDFWNETMIHGCGBZOVDYRQUDQTQLCPGBOIWVASFWMAHNLJLUHGBEETLWSRNDBCUGJMDTOYPEFCYVTKPLJXNGHOTAAQPULYGIRCBFIVYEOBKCXAN");
    tmp_msg_0.attr_type = 104U;
    tmp_msg_0.min.assign("JUBPGUSMCWOHVBURFCKNFQNFJLRIWHAVPQSDPJCEQUNCYGCPKZHDSQBBNZRDOPYTOWBHAZSRAEBEYKLPRRHMVITMOAZJCYOATGZVIJTSDNSYUFGLCGVQFTITZSPXVUMGOHJFLMPRPXCQDAZKGKMFWIEVLUYZLRBOMDSTREDDYAJHJBVKZYAPK");
    tmp_msg_0.max.assign("VDESMDWBFBWPSPCOOMXDGVATRFLYKADJCSRLJHUMIBWFVHNSNMOPUXTHFMZATWKBPIAGNTBWZAFCKFPOMKTSTVPBGIWCJULGVXSNYQHJPLVQIBXGLUGVLTYERIFECNZCCKXUEPIDZRWD");
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
    msg.setTimeStamp(0.9978957978143724);
    msg.setSource(24539U);
    msg.setSourceEntity(113U);
    msg.setDestination(32864U);
    msg.setDestinationEntity(130U);
    msg.op = 173U;
    msg.snapshot.assign("VFLOHFPNJHKBFYURLNMKAIOQOVAWVIKDGUDZASCZEFHZAMQKYWPDSIWQLFWVBQUEMHOXPDNIUQCTDKSRIUZNAGYVDZLEGXBMYATHVCLMCJOSLTVENMWFPNPSAKTSUBUGIYHJNLKBEFJOLGBGMKZDQ");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 140U;
    tmp_msg_0.frequency = 2260956840U;
    tmp_msg_0.min_range = 61521U;
    tmp_msg_0.max_range = 55908U;
    tmp_msg_0.bits_per_point = 201U;
    tmp_msg_0.scale_factor = 0.35809030115669427;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.2162756684304703;
    tmp_tmp_msg_0_0.beam_height = 0.38039500976706775;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-102, 42, -8, 31, 66, -33, -88, -50, 10, 50, 41, -93, -67, -51, 58, 40, -126, -111, -47, -56, -44, -106, -64, -114, 44, 85, -41, -56};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.16777595319373717);
    msg.setSource(63593U);
    msg.setSourceEntity(25U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(226U);
    msg.op = 125U;
    msg.name.assign("YPELOKBIMZQAXHDCPWABWMDPLBJNVGTMVWZQJFNAGBVKRCQUWTCQWXQOCJKMUSFGOVLDLJXHZYTFGTONTFMIAFNHCHEYU");

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
    msg.setTimeStamp(0.9128172579385158);
    msg.setSource(59360U);
    msg.setSourceEntity(208U);
    msg.setDestination(50486U);
    msg.setDestinationEntity(98U);
    msg.op = 118U;
    msg.name.assign("VEMZXOCQXHAVRGSJDEBDIWGTAUXQGYEZADHMSTUWLXSASENESZZHZHJVZRDWQUSBVHYKLXFXAQCDNETTUURMGCJZJBEGIFPDCIIXIGONINWFUODAWTJULZNDJYBJMLULNYGXFYSQDHFLVOWBKKUURNYMPZVMSQQTIHVMWPEVCIKBMSGPRFPAHXYFRYBYVDBPZOONQNPKJCXJJQKGFKPFGTSRPOQNRCLCBHTATAWO");

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
    msg.setTimeStamp(0.40152268087650556);
    msg.setSource(15830U);
    msg.setSourceEntity(63U);
    msg.setDestination(61953U);
    msg.setDestinationEntity(47U);
    msg.op = 149U;
    msg.name.assign("PFWXRQTZYFDUETGZLNIDXKINTWGZKOCHBFJMNYQMLDUXFYVNVZEPQVEBSQTVOBBTSCORUHYYTDMG");

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
    msg.setTimeStamp(0.21325416760614002);
    msg.setSource(18725U);
    msg.setSourceEntity(209U);
    msg.setDestination(62141U);
    msg.setDestinationEntity(155U);
    msg.type = 84U;
    msg.htime = 0.26607333826260704;
    msg.context.assign("GUJGEHDBSGDZRGDKDPZAUWNIODHDRIUHSCLVRFQMUTIUQDHEFABYESVYRKGWFNDYFSOUAOWLSJQEBKTYTZEFYEEQPYACTOOVKQCMCYKNRMVLPELFNYTPNOHMJJOQEFMJCGXBKAKEWQIZTPJLXHXVBTPCWYVGNHKCIFXVJHAX");
    msg.text.assign("UGTADHMCHPJSZKTPFAJYCJFDOLZSOEOGZXEAJDOQZGAHREHHPZBNKGXAYHFUQAENWSXWECBPDBOILPLLZBVQZYFWTWFWQJVLKISSYIASNEMQECBPXMTQRJMBNUMBSQRCJOIQJNUAYUFYHYIVWHGDRXKKRUWNGEOLIMRBBXVCPQRYYVKHVKFTUSMXMVVTIIFZZCXKDDYLOQNWDGMVJTGXPEUCWCPDIWOEFK");

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
    msg.setTimeStamp(0.6049266741688372);
    msg.setSource(49103U);
    msg.setSourceEntity(226U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(84U);
    msg.type = 128U;
    msg.htime = 0.6397252391662318;
    msg.context.assign("KVAVHNNVOLIYWWCNXTKJDRYHPIVBJGKJGXPZEHWRSSAMLKQ");
    msg.text.assign("HJBAIGVWXDFLLEFCGTEDINZHPHBMKQGPYADTQOABVQAPGNVMFSULHDUXKBNXOJKEZYNCWOBPTECMWFHMKBMADFMQDDIBVZUNSIIRFEUUJGTCWPEYLTMUTZYMQHRSYELWRIYZOQAGEAVKODSEZSOWZKXRXIRXJPWTKKYMTJUYZQOZCYULRHXLZRCFTANUFGKQCDBSSRWWFXG");

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
    msg.setTimeStamp(0.37074072681972536);
    msg.setSource(45860U);
    msg.setSourceEntity(93U);
    msg.setDestination(48631U);
    msg.setDestinationEntity(240U);
    msg.type = 33U;
    msg.htime = 0.9611588934935399;
    msg.context.assign("UNYOKPOTKGQSFZVKTIYODXNDSSNMAQBGELMPFBHBOALAPWYYKPFDEEQDRGAQQAJQYRTVLEIEVZCDWBXILCYVDLHTXMQAHREZIQMLRJMHBYPFSKOFU");
    msg.text.assign("VPLZLOBQCLGVXGVSAXUOSQRKQDLODCFXOYLUAWGPKMDOGHRBUBGPHAIORZVIWVYCVBVDYMBZYAFNYSQSCXCRJGLXTOJTJPRSJBBCUFQJYKOZKKTYMNMNPQRYEIFDIIHTHTZEQUEWWNDLRIJH");

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
    msg.setTimeStamp(0.7581329794063157);
    msg.setSource(60146U);
    msg.setSourceEntity(173U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(171U);
    msg.command = 92U;
    msg.htime = 0.436394147711081;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 142U;
    tmp_msg_0.htime = 0.805920713516415;
    tmp_msg_0.context.assign("OOELGGLCDGZWTABFPFJPWPYSFDYXCUQNTCXDJYCZLGHIZIWQRVVVFXQQWWEIYMRIKZVONADLCAOVAXCDKZPGGUJCMJHHNYAIQWIWSHAKAJYFBTUUNFSTMROVXMGERBJDBDKTLNSK");
    tmp_msg_0.text.assign("MADRFOSTXUNONPIBXWQKSHUBNHXKRWIWLDJWCVHZARAFOLGIWIJHGDNNEFTFWEDKSHJGBPQJYMEJPOZOJINSUYUAUPEVPTVZVQMVKTCCSRCMZSMGYFEFLXLAZRAZDPULZCYJERQFBHSIP");
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
    msg.setTimeStamp(0.5834350582282944);
    msg.setSource(32994U);
    msg.setSourceEntity(12U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(239U);
    msg.command = 118U;
    msg.htime = 0.7724524536246592;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 82U;
    tmp_msg_0.htime = 0.7361375631075029;
    tmp_msg_0.context.assign("CHIHAUVDHTDVJIXVNQRHPPZJDWYZHYFSZNRMCNAKKQMFBORSUCGTYKTYUJCGYTXEZIKCPVDQREDIPZEROLMQWRRQBOUXXWMGLOAVNMMTLJQVZUMANPLEGNAGCIDCFGO");
    tmp_msg_0.text.assign("UAEHBYBTKVZAYBCNQ");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.46180336887926143);
    msg.setSource(55188U);
    msg.setSourceEntity(8U);
    msg.setDestination(37693U);
    msg.setDestinationEntity(112U);
    msg.command = 67U;
    msg.htime = 0.3683555234320478;

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
    msg.setTimeStamp(0.46590929450775065);
    msg.setSource(38854U);
    msg.setSourceEntity(200U);
    msg.setDestination(57225U);
    msg.setDestinationEntity(21U);
    msg.op = 2U;
    msg.file.assign("XEOGWYENATIDJSTMQIRKRSOUHKWCMXRBVRZWQFWBPIGVFMZPYBELIOMUKCWHZMXRITZWPHPBHXBULCGJFNXQKOEWPQBDUMNKPVRKFXBTUDRNSONSBKZAGPIJFDWYSEAGEQH");

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
    msg.setTimeStamp(0.2968209290788214);
    msg.setSource(14020U);
    msg.setSourceEntity(180U);
    msg.setDestination(17146U);
    msg.setDestinationEntity(237U);
    msg.op = 133U;
    msg.file.assign("FLLRRLOZKDBKWMVUDFPRPJYRRBTJJXIICMITZRWVZCTDVRNLDNLBLZTFHPGOWOAGPIOHVXQDWMFWPQIVZKRCQWVKASEQBSYYMNQKKCUFEXMAEJABGXDVVCASBFJVSDPQIUDMCYUNZUHIATTGCBHJ");

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
    msg.setTimeStamp(0.40336744866026863);
    msg.setSource(48844U);
    msg.setSourceEntity(28U);
    msg.setDestination(54182U);
    msg.setDestinationEntity(12U);
    msg.op = 128U;
    msg.file.assign("RSFCNXWBCANFYHHD");

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
    msg.setTimeStamp(0.09019661954876024);
    msg.setSource(16421U);
    msg.setSourceEntity(198U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(65U);
    msg.op = 251U;
    msg.clock = 0.5116557201556443;
    msg.tz = 31;

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
    msg.setTimeStamp(0.6589117416074315);
    msg.setSource(11977U);
    msg.setSourceEntity(151U);
    msg.setDestination(28230U);
    msg.setDestinationEntity(215U);
    msg.op = 201U;
    msg.clock = 0.39057125477627286;
    msg.tz = 15;

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
    msg.setTimeStamp(0.8548480223000086);
    msg.setSource(43166U);
    msg.setSourceEntity(99U);
    msg.setDestination(29818U);
    msg.setDestinationEntity(54U);
    msg.op = 20U;
    msg.clock = 0.3185333227690662;
    msg.tz = -23;

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
    msg.setTimeStamp(0.775813643476406);
    msg.setSource(17173U);
    msg.setSourceEntity(254U);
    msg.setDestination(40458U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.6470271941852379);
    msg.setSource(55567U);
    msg.setSourceEntity(51U);
    msg.setDestination(12483U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.2759166155330801);
    msg.setSource(17844U);
    msg.setSourceEntity(122U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.7275212158835265);
    msg.setSource(45811U);
    msg.setSourceEntity(17U);
    msg.setDestination(9905U);
    msg.setDestinationEntity(100U);
    msg.sys_name.assign("ILCNKHLNJO");
    msg.sys_type = 11U;
    msg.owner = 55004U;
    msg.lat = 0.48093133636198404;
    msg.lon = 0.03160335866028041;
    msg.height = 0.0824165230183238;
    msg.services.assign("HVMKBNTFAVWWXCMNQFGYWSQXJIUSDMANUZGXCLBNAEHJDCWLYKTPDUKTVCTZUMRPKDLFPKTOIVYIZUCDLERZQZFPGMPZDMIOKGBJGJYGYNZJUEGDKQHEXEIZHNYIMDMFFBYQXDEQTIJJNABMPELHWRTACQAFTVRUFXWCXOVVIOQRSPWPGLHXNBJQRVCPKSUTYAEHYZHICJTVFXNHRJCSOKWGOSUOGEABVRWBWRYOKIALSLPRBMX");

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
    msg.setTimeStamp(0.154045516743599);
    msg.setSource(47860U);
    msg.setSourceEntity(82U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(190U);
    msg.sys_name.assign("PLVHHZZXEERSAEOHXHBUMZGGEMDMYVVOGETRKNUZNLYBRFLNAJZOXHIUVEPKINFVDSZCXWDWKGQLJPFBQXNAAWJQATRCTCWTAEGBARBUMDRWVPLDPMPIDRQINRMPBNMCHSZVLOLWEKJJJSQLFMGUOSIACQTEUUVZSGVAVHUMRGDYNTSFTACOKOURWSKDXNDMTPCBDYQFWCIBHQUKXXILILHFFXGPJGPXOIWNZQIHYKCQOBBJFKJY");
    msg.sys_type = 23U;
    msg.owner = 61841U;
    msg.lat = 0.7340775975949076;
    msg.lon = 0.41682900910102105;
    msg.height = 0.6075797610399376;
    msg.services.assign("VBMNQUOBHAPGFVZPMFEKJDNOPSNKSVIWYTHYMTKLVQLOYXRCBAZAFFWQBUHRCWTYAFWUSUCHKAPBNGUPEDDLTIEMGIDXNFVIFKHZGKAPYIRLLDWTTNMQMEQPGMDOECYBSQXVODOISXRGJMRUNJBYRGVZJWVFUOCHJOXBSXONIQLCWZ");

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
    msg.setTimeStamp(0.5132330159488672);
    msg.setSource(21642U);
    msg.setSourceEntity(79U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(220U);
    msg.sys_name.assign("CGXBAZPSCINWWWHRHJYWZQIBRVLHEBMHNGYIJCDILEAJBTBKANQYWPJFZRCJWUFDTHVGDCPTDKSYYHIXLOYXPHESGPEIZSCNUNAVTILEQ");
    msg.sys_type = 150U;
    msg.owner = 14270U;
    msg.lat = 0.22596355516389977;
    msg.lon = 0.5745067200581219;
    msg.height = 0.4048813920239712;
    msg.services.assign("LXXZJLASATWNPAFEPIQRFYWBQZYGPUHFSSPPKBTXZSXZEIODNGCACOREJAPIYGNCZAOPGBJRYXYLYXUKEHERQJWJXNVVTTPBUNHRVFDJFGIKHKYUODNCKNJCWKVJPVASGRFJVNHOCEVVMTFIULKLMBDZRHQZRIESGGMENVRPUMQBBMTILTGXDHYWNHHCSLADBOGBWU");

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
    msg.setTimeStamp(0.8149122519020948);
    msg.setSource(16635U);
    msg.setSourceEntity(242U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(183U);
    msg.service.assign("VEKYVBBCOFIZGISUSPJZHVOXZWRLFDNDRBAKIJLWABVWPWHQULTAFTSGXXXGMEFASPFDRHANXEXVNNGUMJCTAJLOADNHCQSUWIORCALJQJOPMSHBMDDDKKBP");
    msg.service_type = 204U;

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
    msg.setTimeStamp(0.07128712643257074);
    msg.setSource(52410U);
    msg.setSourceEntity(51U);
    msg.setDestination(17802U);
    msg.setDestinationEntity(155U);
    msg.service.assign("AOZQGWWPUXPNVIBNVBXQMZZJLETTUFTVXCOCYVCBATFSMNRMQAIRMZGUOHLWRCYKBASAFUYZJOCVELXYYRDPHFWPFGAHBXDEOZMEOIEZSJYSXSNXTLOANVRMWCREFKINKAHBHLFKTSD");
    msg.service_type = 111U;

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
    msg.setTimeStamp(0.46496579979650443);
    msg.setSource(58165U);
    msg.setSourceEntity(160U);
    msg.setDestination(46354U);
    msg.setDestinationEntity(90U);
    msg.service.assign("DFUTBLFAEWFUJGPDSWSOABTXOWJTFKXVTABCWCMNWTZYLLFNTEUIFQQKSOUOSHPLVJBUXQADVNCTVZGIZARRMQQSTACYGDBYAVOMRXFZPDQJCYYPLDQLMUVEOGKWHJWKJNMIG");
    msg.service_type = 186U;

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
    msg.setTimeStamp(0.8315688364774809);
    msg.setSource(39458U);
    msg.setSourceEntity(49U);
    msg.setDestination(55320U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8067623134066517;

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
    msg.setTimeStamp(0.61659100675318);
    msg.setSource(3722U);
    msg.setSourceEntity(200U);
    msg.setDestination(13633U);
    msg.setDestinationEntity(191U);
    msg.value = 0.20325548205984956;

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
    msg.setTimeStamp(0.6328697032304055);
    msg.setSource(6719U);
    msg.setSourceEntity(113U);
    msg.setDestination(32309U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9608045703180745;

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
    msg.setTimeStamp(0.6841620804262516);
    msg.setSource(57283U);
    msg.setSourceEntity(146U);
    msg.setDestination(38049U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6960741866678392;

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
    msg.setTimeStamp(0.9584661070223159);
    msg.setSource(15173U);
    msg.setSourceEntity(166U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(160U);
    msg.value = 0.1816205557901981;

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
    msg.setTimeStamp(0.8131338111515938);
    msg.setSource(62902U);
    msg.setSourceEntity(201U);
    msg.setDestination(55545U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8163762914012916;

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
    msg.setTimeStamp(0.1627410898306778);
    msg.setSource(53804U);
    msg.setSourceEntity(30U);
    msg.setDestination(20310U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5570718993447381;

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
    msg.setTimeStamp(0.8517806604312359);
    msg.setSource(18459U);
    msg.setSourceEntity(28U);
    msg.setDestination(59118U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5927506335311338;

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
    msg.setTimeStamp(0.0384040307239224);
    msg.setSource(29708U);
    msg.setSourceEntity(1U);
    msg.setDestination(44071U);
    msg.setDestinationEntity(51U);
    msg.value = 0.3779514308018229;

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
    msg.setTimeStamp(0.9347050273310028);
    msg.setSource(42063U);
    msg.setSourceEntity(58U);
    msg.setDestination(13072U);
    msg.setDestinationEntity(195U);
    msg.number.assign("ESINCUAOMXHOFBCDTJWYLJETNOFMQJOVPURYSWLPPHMAYIOPJZQZZEGDEAABGPKFZXDTSWSKLHLOCCFCDDTVEWDXCTTHGBQMVNSKIBSZZLVYJKGARXUBZIUQEFRVHRMUT");
    msg.timeout = 48822U;
    msg.contents.assign("FOMLXUNOJPGFFTNNOBYRHXKBVDFTKYDEPZNRTSXRYPWFLGZWGKNLXHJQXEBQZSIICTRPEBGAKZDMUPOLSIVAGKZDVIKQDOLCUUNSMERARJVLFBDXRZHFZUHHZWWUHLYOPLOOVAIUSCEJLTEYMI");

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
    msg.setTimeStamp(0.4412616908921697);
    msg.setSource(2021U);
    msg.setSourceEntity(168U);
    msg.setDestination(53627U);
    msg.setDestinationEntity(186U);
    msg.number.assign("LGGFOQGMSQHDMROVEQTDKQJGMRVGFJAHECOTVPCLXNAUXKHDAMOPFYSNSTNXDBGYTRRSXBHHXKJNDAWUYMIUBCWOHUSDEDLOTEQDCJXMJOEQBYBYLAYTFZEFPCNQQXPFVYJKWZMCRZRPTQIWUAMHSVWXTIRIEFIFNGOUXJWYVZHBWRPCMVLPIT");
    msg.timeout = 5328U;
    msg.contents.assign("TYCFKLPAPMKDSBCYGVDWNDFVCZYQFGEBZTFURJEWOSQZKLRVOGHMMSLAALJSTBJTGBAANEGDHBHSMPFIIBTHCC");

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
    msg.setTimeStamp(0.8437488387830131);
    msg.setSource(34964U);
    msg.setSourceEntity(59U);
    msg.setDestination(1384U);
    msg.setDestinationEntity(14U);
    msg.number.assign("SMQEVVFPUGZVCPQDLPSOPIFBNXFCEQZTHUDCCWWKKJWYSBMLSUZVNFPXDGJKQUHIXGLSAEWLQBOEZICGAIMAFFWMVOZXDUBVUMOHNWGLYOWPAYDEHMYTNEZTTAGZBTIRAC");
    msg.timeout = 17588U;
    msg.contents.assign("UJWLSGWMFHPOOXFHMSWDNCWTOIRYRQARSGCFLLBANXNZGZPCTKVZYVFVHMGWYJESTLPHNGXETNRRKYJREADCZYMRQQXAFQBHEKPONZOYZEKEDYKDHNDWGWIHXVZVJBQLTVJCBRKMYBVPWFXACCKTNIRSBUSPPLGVDIKDGJHNTZBSSKZLFIAJOTECHIIIUSVJBBPOYNQIQUVPXCMUMAKQEITZROTUDAXDBLXAU");

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
    msg.setTimeStamp(0.8559055739008452);
    msg.setSource(22792U);
    msg.setSourceEntity(229U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(158U);
    msg.seq = 3864257434U;
    msg.destination.assign("LUEZJNYACBCINKPDYTVTAAGFPHTGSOSWRYBJDVGEJZUJPHPVIUDVTGHHKARTONXCLACRSLAPRDTNPROMDYFLWNISLQWCZMHEWAWBMSSZGQBHXMOZTDKUIIEOYUWBGOQFFYEESXUUXYVQFMMVFEUQLNFQORSSQOPKUXYCTGBZMADYWTTOFVGB");
    msg.timeout = 12132U;
    const char tmp_msg_0[] = {-8, -50, 69, 107, 91, -51, -123, -69, 16, 20, 125, 93, 46, 0, -76, -64, -62, -111, 0, -9, 75, -123, 80, -49, -109, 1, -51, 120, -16, 115, -104, 113, 87, 62, -79, 33, -32, -25, 43, 90, -10, -86, -9, -2, 22, 82, 98, 60, -46, 9, -74, -123, -117, -9, 30, -68, 49, -123, 0, -10, -62, 14, 8, 119, -75, 66, -13, 95, 87, 45, -122, 81, -32, -38, -17, 25, -60, 104, 22, -57, 121, -81, 125, -60, -82, -126, 18, -19, -18, 32, 104, 112, 26, -5, 98, -23, 97, 115, 23, 125, 8, -83, -94, 107, -69, 80, -33, 4};
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
    msg.setTimeStamp(0.8308101521310975);
    msg.setSource(18779U);
    msg.setSourceEntity(110U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(53U);
    msg.seq = 3988543547U;
    msg.destination.assign("HSQZOQLLTPGISEOKWGUGFDEUFMWJSZEQVYKZVDQDURBUUXRZXVSVSHUZRVDCLUCMWTLXTFWDOEBLOLAAONXNWBLAQAMNEIYSJNRCKVOXJBRMWNSHYEDXDSRAHRADBPCZUTPUMZCBETFJBQJTTWMGIVCF");
    msg.timeout = 23015U;
    const char tmp_msg_0[] = {68, 110, 36, 17, -79, -28, 51, 95, 21, 113, 42, -123, -79, -97, 13, -62, -62, 97, 99, -89, 61, 46, -122, 3, -126, -103, -45, 67, -28, -127, -55, 86, -122, -25, -65, -45, 71, 70, 118, -127, 103, 92, 61, 69, 123, -63, 60, -80, 97, -37, -47, -6, -61, -99, 58, 21, -77, -110, -47, -60, 77, 46, -24, -122, -111, 70, -44, -51, -98, 32, 40, -113, 11, -3, 61, 113, -42, 110, 49, -22, 15, 30, 113, -120, -62, -18, 35, 95, -110, -38, 77, 50, -25, -80, 21, -66, -47, 101, 70, 70, -46, -23, -85, 82, 17, -6, 58, -31, -100, -56, 117, 26, 20, 106, -28, -46, 92, 64, -7, -126, 13, -123, -83, 119, 64, -85, 28, -56, -87, 99, -21, -41, 48, -79, -71, 119, 111, -124, 31, 116, -62, 45, -115, 3, -22, 23, 14, 119, 35, 32, -121, 42, -70, -122, -63, 115, -36, 91, -125, -77, -34, -57, -12, -101, 89, 93, -123, 119, -18, 75, 102, 105, -54, 75, -88, -48, -20, -69, -115, 87, -119, -65, -66, -23, 96, -49, 81, -63, 79, -75, -124, -88, -33, 28, 12, 14, 55, -16, 87, 11, -5, 114, 67, 29, -118, 72, -78, -17, 102, 98, -126, -126, -4, 105, -4, 52, -61, -31, -124, -47, -44, -91, 124, -38, 118, -92, 16, 14, -115, 2, -123, -90, -29, 64, 56, -66, 1, 45, -5, -121, -100, -51, 8, 67};
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
    msg.setTimeStamp(0.3067573808868589);
    msg.setSource(1909U);
    msg.setSourceEntity(130U);
    msg.setDestination(9896U);
    msg.setDestinationEntity(235U);
    msg.seq = 308061951U;
    msg.destination.assign("BQKHXMLISYFLKZZCHQYPOERWBJHVIRPUKSFGGRNMI");
    msg.timeout = 22916U;
    const char tmp_msg_0[] = {-20, 95, 41, 24, -81, -6, 38, -72, -68, 103, 115, 88, -106, -38, -58, 55, -89, 92, 21, 53, 122, 46, -117, -35, 77, -73, -91, -23, 5, -103, -40, 7, -11, 34, 113, 114, 41, 61, 10, 113, -53, -20, 110, 23, -106, -24, 103, 37, -3, 1, 39, 22, -71, -82, -76, 108, -13, 85, -41, -35, 69, 32, 105, -24, -55, -49, 66, -96, -88, 47, 59, -109, 68, 122, 87, 73, 4, -29, -43, 39, 81, -23, 83, -91, 60, -81, 123, 90, -7, 83, -19, -86, -89, 89, -5, -109, 88, 99, 24, -37, -36, 12, 12, 70, 76, -50, -94, -109, 111, 88, 94, -118, 46, 1, 58, 99, -42, -58, 111, -51, -13, 24, 38, 21, -23, -57, 25, -91, 86, 68, -26, -101, -23, 4, 122, -82, -76, 36, -71, 91, 23, -116, -56, 33, -18, 106, -43, 19, -108, -84, 55, 112, -123, -10, 125, -18, -61, -119, -65, 9, -65, -33, 83, -29, -99, -122, 61, -59, 121, -74, 58, -70, 37, -100, -28, 2, -48, -27, 25, -115, -44, -45, -32, -128, -120, -23, -75, 45, -124, -119, -117, -124, -41, 52, 38, 42, -56, 101, -115, 79, 3, -6, -92, 44, -74, 123, 63, -22, 55, -19, 109, -32, -125, -119, 23, 118, 37, -92, -74, 81, -76, 96, 64};
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
    msg.setTimeStamp(0.6408486687725778);
    msg.setSource(53757U);
    msg.setSourceEntity(43U);
    msg.setDestination(7361U);
    msg.setDestinationEntity(240U);
    msg.source.assign("ORTIQOBEYFFWSKTCCJKEIGTXPSUSKJJUEPAMUFMDUQDQMAJAVSRLAWDTFXPJBOTRKXEPCQHCHLHQQUURYWND");
    const char tmp_msg_0[] = {-63, 96, 94, 29, 117, 84, 31, 39, 108, 81, 85, 114, 64, 12, 77, -81, -55, -29, 63, -73, 93, -118, -22, -31, 101, 80, 30, 111, 108, 76, -105, -48, -68, -65, -63, 3, 38, -104, 117, -49, 40, -77, -14, -85, -43, -74, 87, 16, -62, -54, 27, 98, -119, 39, -14, -55, 74, 24, 66, 101, -59, 61, 72, 59, -59, -39, -26, 11, -127, -18, 76, 122, 12, -127, -53, 74, -70, 83, -25, 33, 105, -123, 108, -78, -14, 75, -36, 24, 10, 116, -87, -113, 2, -120, 120, -73, -32, -115, 115, 3, -11, 58, -24, -105, -118, 14, 99, -109, -9, -37, 115, -64, -67, 83, 121, 71, -49, -99, -109, 111, -104, -32, -59, 97, 95, 122, -102, 40, 122, 34, -84, -90, 97, 105, 17, 2, -37, -42, 111, -34, 20, -63, -78, 33, -122, 103, 112, 56, -106, -71, -73, -72, 25, 54, 74, 5, -117, -8};
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
    msg.setTimeStamp(0.5010152555281434);
    msg.setSource(5573U);
    msg.setSourceEntity(201U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(39U);
    msg.source.assign("HMSSMEBDBTOHTCORUCNALKYQCWQGTVIWFUVJTVISQCAFBRSYLKJPFTGBXGVXFFODEVVZQQAHFDILOTZVLEAJLQCWRKJCEOFPZBVMQLHLMWKIMYMKDSUZNXHUJQRCVPARMIEPVRYFPZEUZNPYNRSTGBKGOOXHKQNCPKW");
    const char tmp_msg_0[] = {76, 44, -51, -8, 53, 85, 72, -50, 87, 31, 40, 22, 57, 5, -67, 88, 20, 88, -85, -109, 42, 15, 87, 45, -19, 60, -36, 21, 126, 110, 0, -102, 103, 61, -5, 28, -95, -57, 86, -3, 81, -94, -109, 114, 96, 86, 55, -127, 21, -113, 103, -14, 41, 95, 91, -76, 81, -125, 114, 54, 18, -46, 119, 96, 26, -47, -84, -98, -54, 88, -34, -66, -119, -85, 94, -81, -93, 112, 100, -128, 106, -88, 92, 36, 91, -68, -2, -69, -16, -34, -13, -75, -41, -65, 78, 79, -3, 19, -32, 44, -18, 26, 104, -106, -128, 80, -102, -104, 65, 82, -89, 117, 81, -39, 107, -26, -105, -83, -100, -43, 94, 123, 63, -35, 29, -20, -77, 50, -127, -26, 0, -12, 41, -66, -24, -43, 52, -23, -60, 112, 77, -90, 84, -18};
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
    msg.setTimeStamp(0.5008882570887675);
    msg.setSource(27604U);
    msg.setSourceEntity(53U);
    msg.setDestination(30612U);
    msg.setDestinationEntity(61U);
    msg.source.assign("LXBDAICKZCQSPZYIIGUFVHYEEOWWDGAGVDCVAYMQRBBMKHCYAIDFJPHNCYBCJURYHUVEMLQPJXHSLOIUUTXSMXBMW");
    const char tmp_msg_0[] = {5, 61, 83, 12, 84, -103, -12, 41, 124, -34, -94, -68, 11, 72, -43, -89, -15, -9, 31, -105, -71, 81, -54, -14, -63, 9, -19, 51, -27, 76, -123, 36, -53, -126, -45, -13, 56, -83, 75, 67, 78, 60, 22, 110, 120, -95, 121, -84, -48, -49, 10, -82, 91, 23, -48, 4, 104, -14, -82, 42, -64, -82, -77, 111, -46, -63, 121, -83, 94, -89, -111, 113, -68, -35, 70, -43, 45, -7, -98, 42, 114, 14, 98, -121, -100, -115, -67, -111, 99, -43, -77, 123, -60, -102, -112, 34, 85, -75, -3, -68, -46, -13, 110, -5, 79, -52, 7, 84, -2, 112, 118, 19, -21, 62, -86, 118, 90, 16, 13, -21, 31, 107, -28, -60, 114, 11, -61, 5, 36, -49, 61, -118, 26, -103, -4, 12, 0, -41, -47, -5, 27, 78, -76, -28, -72, 115, 65, 28, 33, -63, -1, -9, 98, -113, 108, 125, 42, 90, 69, 33, 56, 102, -108, -14, 99, 50, -36, 11, -14, 117, -55, -45, 112, 24, -20, 117, -74, 83, -48, -15, 102, -68, 113, -89, 84, 101, 90, -63, 44, -98, -76, 99, 102, -47, 117, -66, -84, 50, 109, 76, -25, -91, 44, -75, 101, -118, -98, 31, -51, -118, -35, -50, -10, 3, 29, -51, -87, 107, 37, -50, 3, 89, 103, -56, -72, 0, -53, 56, 6};
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
    msg.setTimeStamp(0.4647017880827231);
    msg.setSource(32456U);
    msg.setSourceEntity(43U);
    msg.setDestination(29046U);
    msg.setDestinationEntity(60U);
    msg.seq = 2755959950U;
    msg.state = 247U;
    msg.error.assign("FUZOGQHFKFWSDIQWDPRZPMELTCHAMWHWTOSZRUTSXJXSDJXEULXAOZDOZEWSSKMKMXWWNBOYONUTKERUEALZHDQNCPHDGYHIAGTTUBDEKEIPMBMDJOLEAYBVFGAZESONXNPNJFGJMFPFRMIAVYBEDFYATQUHCLPWDIGVKRIIQKXVYNCJCLGZJRRCZVTQNPYIQXQAYJGRLKCBBIJYUXVAKCHQUCCLSQZFNVWPUYSOVBHRNVBGWTMMTFPHSRG");

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
    msg.setTimeStamp(0.060791346332409235);
    msg.setSource(31701U);
    msg.setSourceEntity(237U);
    msg.setDestination(23281U);
    msg.setDestinationEntity(201U);
    msg.seq = 1336335832U;
    msg.state = 237U;
    msg.error.assign("XHTLVJJYWBUZBNGAHKDFHFMUFBPKOYALUKMJMBHIETUSQWVWEMXRJSZQKSUY");

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
    msg.setTimeStamp(0.21709719100801272);
    msg.setSource(54689U);
    msg.setSourceEntity(142U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(36U);
    msg.seq = 4291829840U;
    msg.state = 224U;
    msg.error.assign("AFEGAJANDDUDKYDKHXMZIQBAIUOMJWFGNAPPFJIIBEDBNVZBELSMUTRFNIOQYSJGYPGPGDRTSYCQTZSXQVZMMSMCHOUINRZUOKECWHOUWHOCDQXIVN");

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
    msg.setTimeStamp(0.9157426333850256);
    msg.setSource(18430U);
    msg.setSourceEntity(29U);
    msg.setDestination(30593U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("ZYVWUYLZTGQIZHZGCDSKBQYCCORAHXBWDTGFJTZVKJLEYEKANIRIQGAUKZPQSXEGSWGZDHNXVENUGT");
    msg.text.assign("JRXLOCMTBXYZJRYKMHGFBHWMKZIPLIHDHVJVGLCXSAKTKELEIUNBDLDPGPDYA");

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
    msg.setTimeStamp(0.7529962904697323);
    msg.setSource(47554U);
    msg.setSourceEntity(180U);
    msg.setDestination(44663U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("AZWJKZMLJOBYBHERGUESLIPMTEHNEJQTYRSRMPNASQEMKOXOEHEFOGZIBTAOGVBTGYAFJSAPIGCPBSGKSUMQZVZJTMFSKFXNACLXLCHVJLPGYTNYSUOJHFKWHUIKZMDOFWAFNPDUXUJROAITVXERZNCCDXRKXIFEORPJQVBTYHUPRCWZRNLVZWYAZLVCBXYBXDUWL");
    msg.text.assign("TRAVTIYUULRLTXVFOZEWFZSLQHGQSAGMSSYCCENMLWUKKIZLEGOGXGODTJYBIPJNBZXYTHHKAPQCZVPDKVMJYLZZOJHGGACTTHXNSYAFODQQKAAAPTDFECBWIBQGLRKCOSJXJNIXVDBQMEYBOPAFXPFCLIRGOQHTUAOQBFDBB");

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
    msg.setTimeStamp(0.4418896161954846);
    msg.setSource(54251U);
    msg.setSourceEntity(2U);
    msg.setDestination(55543U);
    msg.setDestinationEntity(169U);
    msg.origin.assign("GERTPRRMKETEZSCQXYESBQWQHMWFNEGVFIJTDTSFXIWHDTWFZOKEOCHJHJGADNVXULLCHORUCGEXVPSOJMYEUBNZZILCWGIRBXAAWWYVBADFZKTSXWFNQRJYSAKMGBMJXVNPASARSPLWLTIYRQXFLOGUUVIZFMKBPLFVCBODTNNTIYSAZBOKZAZG");
    msg.text.assign("LYDESDTXIHANMUAYCQJUBGRECTMZDVFALRBMGRQQSUKYJTPGKKCRHBVMMNJPQPFGSTCGMBNMYHLZRCMBSXXESCTYBYFGJRHKHRONNVIDXITKLFVUAUDOZEWIFCJRATUIOFKXAZJWECQKFDGXLNIVQHQXZZWIAPWPBBWGOGWLXHXKQQTZIBRTUZWVOVWCNYSMFQDVCPFP");

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
    msg.setTimeStamp(0.8134592679293268);
    msg.setSource(41515U);
    msg.setSourceEntity(150U);
    msg.setDestination(26433U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("HXPPMSTNMCYKCNUEXCCZRRQEGMFKQVPVBHIIXAAMUMZLLWCJDPSJBUBNOHXYWWRKPQUTAWXDRWNEGGCTWLYHYZVTFZILBWIEXJPDATIZHKVRQDGSYYRBFLKCNWZNYIQXOPGKETJMLGDBLDJAEVSUWBKBRYELHOPHIXOTZSOQXKOJTMHDGFSFOSAJBOOLSTNQHVKFXSDUHCLQUKGVIFVEAPDZUBSYUFCMORIJGQ");
    msg.htime = 0.9750437986282992;
    msg.lat = 0.9843262930379965;
    msg.lon = 0.949197050657878;
    const char tmp_msg_0[] = {108, -72, -63, 113, 126, -98, 89, 47, -106, -49, 68, -128, 54, -25, -109, 13, -46, -111, 75, -100, 78};
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
    msg.setTimeStamp(0.2599351215874858);
    msg.setSource(13104U);
    msg.setSourceEntity(116U);
    msg.setDestination(25132U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("PQUSMTSJHNMSUAVVQKUUVVRXSTKWNZCFBKRASIBYXRSFEMGDNIEMXSMWSFIZEVFVTDEMWEVWYMNKNOUIUIHYZDHARJWGAWJIBJBHAGUHBDENEYXGOOQDKAPKXWUJRRHBXWBBPOCINJVCLXFYTZPFIYB");
    msg.htime = 0.9038992980720736;
    msg.lat = 0.4688620933555594;
    msg.lon = 0.2727542353203065;
    const char tmp_msg_0[] = {-59, 101, 84, 99, -49, 7, -116, -35, 77, 50, -72, 55, -43, -30, 46, -61, 39, -14, 16, -41, 32, -12, -120, 91, 82, -86, 26, -42, -116, 89, 51, 48, -18, -17, 110, 124, 10, -100, -125, -41, -19, -75, 22, -116, -56, 1, -58, -51, 23, 69, 61, -65, 100, -87, 82, -96, 80, -33, 107, 91, 61, -7, -107, 126, 8, -45, -32, 39, -78, -87, 120, -5, -108, -70, 7, 21, 72, 23, 119, -97, -96, -112, -66, -116, -86, -120, -52, -80, -23, -27, -28, 94, 114, -87, 73, -97, 120, 40, -101, -23, 15, -20, -9, 74, 6, -89, -19, 1, -119, 95, 114, 74, 113, -83, 27, -45, -16, 91, -83, 90, -54, -11, 25, -122, -34, 16, -99, -21, 20, 108, 53, -99, -92, -16, 38, -65, 15, 38, 60, 3, 110, 70, 104, -22, 125, 44, -105, -60, -53, -24, -80, -71, 114, -90, 78, -79, -44, 41, 87, 78, -88, -119, 106, -111, -104, 124, 106, 4, -96, 88, -88, -11, 123, 17, 32, 109, 16, -118, -61, -84, -41, 61, -113, 114, -72, 3, -55, 77, -58, 86, -49, -116, -101, 37, -46, 24, 52, 49, -44, 32, 67};
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
    msg.setTimeStamp(0.8589228737452387);
    msg.setSource(7720U);
    msg.setSourceEntity(237U);
    msg.setDestination(65139U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("GGBFIBWQEJULXXPOYKTBCOBZHPKRSHW");
    msg.htime = 0.3455117401337593;
    msg.lat = 0.2922667261115657;
    msg.lon = 0.7368991172060491;
    const char tmp_msg_0[] = {-67, 7, 50, 28, -46, 73, 113, 120, -26, -54, -27, 86, 34, 97, 93, -86, -122, -72, 77, 51, 4, 10, -31, -105, 87, 32, -33, -122, -34, -127, 122, 2, -79, -67, 22, 91, 106, -29, -37, -111, 0, 0, 47, -72, -64, 103, -43, 74, -40, -95, -81, 86, 4, 41, 75, -71, -108, -125, 42, -118, -127, 108, -119, -46, -6, 21, 89, -51, 123, 70, 123, -75, 50, 41, -22, 83, 51, 71, -22, 96, -58, -119, -122, -101, -14, -50, -101, -108, 22, 102, -10, 112, -25, 111, -28, 101, -39, -38, -125, -4, -76, 86, 116, -104, 17, 27, 6, 42, -66, -27, -117, 29, 78, -37, 104, 27, -84, 74, 45, 42, 53, -107, 77, 112, 10, -31, 16, 89, 19, -49, 104, -80, -6, -84, 16, -32, -5, -91, -108, 76, 41, 9, -71, -110, -50, 49, 76, 24, 94, -61, 116, -86, -109, 107};
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
    msg.setTimeStamp(0.8966720528163733);
    msg.setSource(9047U);
    msg.setSourceEntity(30U);
    msg.setDestination(55204U);
    msg.setDestinationEntity(46U);
    msg.req_id = 12918U;
    msg.ttl = 4600U;
    msg.destination.assign("WTZIQSKILPBRHFTKAXAGDWCFCZOYIITHDHKBMWOBFYEUKNEPDMWVPAXLGSVYNEQOVNGFOBRQIFZHVVZDRMTHOSLCSCPZWHOJYODCBRJNQDDUBYPRRMIEMZSQMQARGFKCUAMEGFOLTZGHSQAMETBHIUXGJYVPFCJJNUIDLTN");
    const char tmp_msg_0[] = {105, -87, 69, -21, 54, -27, -106, -46, -118, -13, -18, -19, 1, -118, -15, -116, 92, 62, 21, -120, 15, 13, -25, 124, -128, -94, 8, 62, -13, -27, -3, 109, 94, -17, 13, 121, 40, 64, 10, 80, 89, -86, 60, 39, 14, -95, 70, -113, -39, -68, 1, 87, -91, -25, 126, -126, -117, -61, -57, 34, 48, 3, -85, -36, -79, -72, 117, -90, 48, -11, 78, -64, 87, 49, -71, 58, 58, 111, 110, -62, 60, 82};
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
    msg.setTimeStamp(0.7962536892240799);
    msg.setSource(57669U);
    msg.setSourceEntity(148U);
    msg.setDestination(61517U);
    msg.setDestinationEntity(229U);
    msg.req_id = 48056U;
    msg.ttl = 10192U;
    msg.destination.assign("WKIJXFZMVCQJDROQLOWTJSZLYTBTWBDDQNRYTMDSXLHKHSPSDDHPGPO");
    const char tmp_msg_0[] = {31, -74, -118, 5, -117, 86, 16, -70, -4, 61, -99, 65, -34, 42, 103, 85, -16, -78, -21, -124, 83, -50, 84, 73, 58, -35, -57, -34, 96, 115, -61, 104, 36, 119, -122, 120, 98, 69, -8, -4};
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
    msg.setTimeStamp(0.1557961869355905);
    msg.setSource(48721U);
    msg.setSourceEntity(80U);
    msg.setDestination(61835U);
    msg.setDestinationEntity(165U);
    msg.req_id = 18274U;
    msg.ttl = 36962U;
    msg.destination.assign("ZWEPUQWYSKPLQXIHTNJMJNUTGSTJNCWWDTCBYZZFYECTHWDRBNXTXGCVMFMFLBYPQBEAKNGDIIMSRMCYYDGDSBKGAQHIVKKMXMOQZKKVRYFLANI");
    const char tmp_msg_0[] = {-40, -58, 52, -12, 78, -31, -77, 92, -60, -34, -110, 124, -67, 83, 48, -54, 38, 86, -117, -56, 37, 60, 36, -5, -83, 47, 25, 23, 104, 66, 48, 100, -84, -21, -21, 22, 82, 28, 8, -102, 23, -112, -111, -56, -64, 65, -66, 18, 40, -47, -120, 94, -44, -43, 49, 76, 42, -101, -44, -70, 102, -76, 3, 103, -91, -123, -64, -123, 2, 7, -96, -108, 83, 87, -9, 122, -82, -127, -54, 93, 100, 75, 67, -126, -127, -74, -102, -106, -41, -101, -37, 35, -83, 38, -109, -83, -57, 21, -60, 121, -59, -87, -20, -43, 92, 58, -29, 28, 96, 68, -94, -72, -7, -14, -13, 7, -21, 66, -50, 32, 84, -121, -81, 80, 33, 103, 91, 4, -38, 74, 34, 116, -8, 25, -60, 108, 1, 113, -7, 58, -26, -35, -19, 29, -19, -106, -96, -65, -122, 43, 17, -123, 33, 102};
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
    msg.setTimeStamp(0.39909823335138983);
    msg.setSource(50325U);
    msg.setSourceEntity(90U);
    msg.setDestination(53540U);
    msg.setDestinationEntity(84U);
    msg.req_id = 51330U;
    msg.status = 11U;
    msg.text.assign("QIXCESZGAYJTVJPKOVNEKRNGDBMNVILEKVCZBVORMDQKVJOJFRNWPHXHFLYCWTZCBLUEBNBWHSUPLKFVORSHKIRYPZAOQNGMRSPOXNGZEWYFQVSDUJCAYZFAZBEQGNCFDDQAHZF");

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
    msg.setTimeStamp(0.6717159792361161);
    msg.setSource(43652U);
    msg.setSourceEntity(226U);
    msg.setDestination(47806U);
    msg.setDestinationEntity(7U);
    msg.req_id = 16112U;
    msg.status = 126U;
    msg.text.assign("KZWOHZAMNGHPIHLMWDIDBRDWDSYJCKQTLFNKFXXGJNEDWBKJAGSVTOCQLBYJKCCAHJHXOZBWZVWOEUSSSSQETYWPEISYFNZRXPOTUPPILCSRDKMOUWV");

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
    msg.setTimeStamp(0.8531424914998521);
    msg.setSource(6320U);
    msg.setSourceEntity(14U);
    msg.setDestination(55549U);
    msg.setDestinationEntity(207U);
    msg.req_id = 2825U;
    msg.status = 236U;
    msg.text.assign("BGJJUTGYIFCZSZVXPINTUADPVSULEWDLFVSKQAKDDVVMQILCRZMEQPDZGURYFXAUZFIYRNSUEFMKYPNWPAYMJSNXKRFELYBCFXDQOCVEBOIWLCYSKBKWQBBJRKPYNTVXWFWMQZFHWUEEZRWTXSOAEMIHTSNXGRNOKJGQHWLICDJNCCKDNPTVHTLJDMJZOXLRJ");

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
    msg.setTimeStamp(0.1372200648235269);
    msg.setSource(49771U);
    msg.setSourceEntity(94U);
    msg.setDestination(58277U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("DULQROWMGLEUTQYBLAXNBYMUMYWSWEJZBPRPGNLGXSBGEDCVKAWQKCGNVYBVTSXAWAPJJURRTNSSREI");
    msg.links = 2420727337U;

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
    msg.setTimeStamp(0.8358927437096197);
    msg.setSource(64906U);
    msg.setSourceEntity(84U);
    msg.setDestination(11359U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("DXIWOFRSESPQBFAXSTEVAUITGMHCUPOVHUOUUWKDFJLCCUGRJRVJLBZAGIYKQGFVJKGQWECVKJXIYTRISHWOKLOQYNMXJBXAPSOHLHNDYHIGTWSWFXRMKXMSPQPPBCBNQJFFYTWLTMRVDSFVMXAZKEQSUIURCBPZSECFBHJOTZICLEKPHDDZANZNWYZYJQJWMNADDRNBVNELVALYHPNEQGZDEVLWXROIKEROCTOBHGNXTAGDB");
    msg.links = 2354838233U;

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
    msg.setTimeStamp(0.5637440100984542);
    msg.setSource(58673U);
    msg.setSourceEntity(63U);
    msg.setDestination(45585U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("RYJXRXKDOFABHHXKTSYPFMGJBRTTVHZVIGAOTYOAOLKBJSIWCREPTEFKWNMBHHUQUMHWMHJEWPJETZUYLIGHXWZDTOABJUPNXPSCRNCCZGIQCKWISNQEYMVVQGKGLYSVDDQUOJLIMQPZAMMEDLHWUPVAZCSICQEUFRPVCTCFRQSDFYXUFXGENYEVTJKJBNHNLSDWXLBYAMZULJNCDOZFULBBSOGAVFOSKZKEGLXIVOITDR");
    msg.links = 1256580478U;

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
    msg.setTimeStamp(0.2699523949952851);
    msg.setSource(43461U);
    msg.setSourceEntity(177U);
    msg.setDestination(1455U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("ZQQYUSBEFKXEVUNRZYLKUYXQSAFMKMAQGPPKXYUX");
    msg.action = 176U;
    msg.grouplist.assign("ISATPYRTSLCIKUYJRNGXZIVPQDJUGYV");

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
    msg.setTimeStamp(0.2833933080259802);
    msg.setSource(52478U);
    msg.setSourceEntity(117U);
    msg.setDestination(14210U);
    msg.setDestinationEntity(153U);
    msg.groupname.assign("TLSXDIIDNLVEUYCUNVGXPFOXFOIFPQJIXWGHKOFKUPBKSENWZEHFNSDQIBAGTKPYXBPJJRIQIVCWYRDWZYBMRHZCACDTRUDHHMJVWYUCHRQSWSZPQLJLNPUXZKIAVYNYQQGKKARNMAVMHYVEJBWUZTRHTTCFQBNKIEVHXLCUQZRJKGXQJDNNHGGOTOEMPXYOBRSTLMSFMIDMBSCEROTCEPVLGGMMUUBOZDFVCYAZWDSPATSLZLFFEOWJGXWJB");
    msg.action = 8U;
    msg.grouplist.assign("VFDETIOKLUILYENIJDUWAFVRVRPJUJRMBHZUAMFXQXVWLKHXPYTEXKSHGMTERQHSBPIPQLSSTGJUBDHJJMOCCCZZBBWKSCDDJ");

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
    msg.setTimeStamp(0.4961255330427019);
    msg.setSource(17910U);
    msg.setSourceEntity(58U);
    msg.setDestination(47182U);
    msg.setDestinationEntity(225U);
    msg.groupname.assign("PMCYONLNPTYGAQSLAQGIECMCNCMHWTDNHSASVWPHYOZJOCCFCNGMPRHVIRLAIBDQWJQPGPUMLDSUQRPAOVTKWUBSOEZZEZKNUFJSHS");
    msg.action = 7U;
    msg.grouplist.assign("LTQDNYCPWYBSVLWGMIMNHFIZBBPCUKMGFPOSTTZGIFXPXHTQHWLSXARAOKDBCKWDGKHEJRCQWZBPOXKYNRZFYMYTWCWQXHVEJYGBFDUHGLWAUQWUBPSTTAJMRBOEXVAFGNUTPMRRJFANBGSDDMREZDHOPMHSVCKRKJEVVSAXGOIMVFKCXECUOTDILVLOXINIWAQZAUJVHQSVIKNMNLFKYFZCZQDCZQRR");

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
    msg.setTimeStamp(0.06823186077587995);
    msg.setSource(43792U);
    msg.setSourceEntity(145U);
    msg.setDestination(23951U);
    msg.setDestinationEntity(230U);
    msg.id = 252U;
    msg.range = 0.5041858900564724;

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
    msg.setTimeStamp(0.5078436887042657);
    msg.setSource(36147U);
    msg.setSourceEntity(204U);
    msg.setDestination(43604U);
    msg.setDestinationEntity(109U);
    msg.id = 9U;
    msg.range = 0.5115956066205928;

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
    msg.setTimeStamp(0.9223534275313803);
    msg.setSource(42020U);
    msg.setSourceEntity(238U);
    msg.setDestination(26345U);
    msg.setDestinationEntity(31U);
    msg.id = 251U;
    msg.range = 0.8487966214989577;

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
    msg.setTimeStamp(0.9342922614541186);
    msg.setSource(26115U);
    msg.setSourceEntity(116U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(104U);
    msg.beacon.assign("FZODHSIWYBPFKTXJPTAXWDEKTYVPFBIUNCZYGRYRSIOERCMAHBDZEWNQLNCGHGUGXUICWFKBQJLKJVXYTDTMTPSFDQZMMKGQVIATVRJIYUWXXPAGAPBSCFNUACSJBOXTKFNLASORPMEJBOHEZKEDCHHXXSLJNVZQPBN");
    msg.lat = 0.22302371498626783;
    msg.lon = 0.9530973559617721;
    msg.depth = 0.5271954038599509;
    msg.query_channel = 173U;
    msg.reply_channel = 4U;
    msg.transponder_delay = 10U;

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
    msg.setTimeStamp(0.6771574944452591);
    msg.setSource(45555U);
    msg.setSourceEntity(9U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(71U);
    msg.beacon.assign("VNNEFQKUHPOLPNQIHEWXLPKYJIXVSMSDIWKSNRACNQJFRTSXZCRZMIZUGPERVGLYIACTRIHEHBHTLKOUCPJHQNWODGLNYSJEACQQVOBAGRDFPZBKFCYMELBUHADVFXOBW");
    msg.lat = 0.5040772439435762;
    msg.lon = 0.500044912117056;
    msg.depth = 0.5990287362142017;
    msg.query_channel = 125U;
    msg.reply_channel = 102U;
    msg.transponder_delay = 22U;

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
    msg.setTimeStamp(0.70424179678141);
    msg.setSource(19652U);
    msg.setSourceEntity(37U);
    msg.setDestination(62153U);
    msg.setDestinationEntity(76U);
    msg.beacon.assign("HCMPGBKVEIWZRTHKRUDEYTFIRNMCDQKTOPCOBTYLZTSXUBJWKOJKATSDAONDYUIEOBOSRLNVPSQZQHREEYCTHIIBONIUFXSMCLIBMHLGFVGFMVDSVZKQAXWPRDYKGINJFODPBIURAXSYKYPHLGGQFJGAAWZPZESNMZHRWWAZIKPEMVQUWTYXRDZNGBCHKLLTENHVQJDCXYCCVQYJULMXSWOGXFDULFBGXWFQXFAMPASEBEMLVPTZROHCJ");
    msg.lat = 0.3425569980665977;
    msg.lon = 0.9981822833206637;
    msg.depth = 0.8452660256235923;
    msg.query_channel = 146U;
    msg.reply_channel = 204U;
    msg.transponder_delay = 158U;

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
    msg.setTimeStamp(0.3931171913625119);
    msg.setSource(41756U);
    msg.setSourceEntity(18U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(55U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.43854753682060266);
    msg.setSource(15679U);
    msg.setSourceEntity(114U);
    msg.setDestination(39830U);
    msg.setDestinationEntity(37U);
    msg.op = 28U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RSPNQOJEYVMTYSMYNHSDNPLSL");
    tmp_msg_0.lat = 0.2823569359296866;
    tmp_msg_0.lon = 0.6511204957253298;
    tmp_msg_0.depth = 0.6455333863818892;
    tmp_msg_0.query_channel = 78U;
    tmp_msg_0.reply_channel = 178U;
    tmp_msg_0.transponder_delay = 24U;
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
    msg.setTimeStamp(0.514186866200339);
    msg.setSource(223U);
    msg.setSourceEntity(157U);
    msg.setDestination(44415U);
    msg.setDestinationEntity(108U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.5167596135193261);
    msg.setSource(17467U);
    msg.setSourceEntity(64U);
    msg.setDestination(50753U);
    msg.setDestinationEntity(22U);
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 88U;
    tmp_msg_0.max_depth = 0.03791451789524902;
    tmp_msg_0.min_altitude = 0.3916005785810692;
    tmp_msg_0.max_altitude = 0.3111041916201568;
    tmp_msg_0.min_speed = 0.5275487608186461;
    tmp_msg_0.max_speed = 0.8440876864391307;
    tmp_msg_0.max_vrate = 0.4709204836974922;
    tmp_msg_0.lat = 0.6895004055099789;
    tmp_msg_0.lon = 0.06555351837933121;
    tmp_msg_0.orientation = 0.541363831041585;
    tmp_msg_0.width = 0.6146275117805869;
    tmp_msg_0.length = 0.42911551027585204;
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
    msg.setTimeStamp(0.22828026630363596);
    msg.setSource(56370U);
    msg.setSourceEntity(97U);
    msg.setDestination(9816U);
    msg.setDestinationEntity(64U);
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 207U;
    tmp_msg_0.period = 2144725862U;
    tmp_msg_0.duty_cycle = 4078625062U;
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
    msg.setTimeStamp(0.8043947242270577);
    msg.setSource(31953U);
    msg.setSourceEntity(92U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(209U);
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 27U;
    tmp_msg_0.actions.assign("HNLXWJRHPLAQOPRZIGHWYCHZVMYUXUMBDEJ");
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
    msg.setTimeStamp(0.0687126279530097);
    msg.setSource(56131U);
    msg.setSourceEntity(47U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(236U);
    msg.op = 203U;
    msg.system.assign("LMKCLWPFUAINVAKIUIDASCMOQUERKLSBBNUXQVHVOVOFBHIXZOYIZGPSWOIJJSANMZQNRTDTEGTADHIHVEYDRGRWOJZCNZGYWOWEKENBFQMTPLPMHSLEPFDXXDKYLWPTSTOYJUXOXYMMLQSBBAFFWPFJLBZYQSWXZDCELRVCCCUXAAGHVGIQSTJAVIMSHUZXUCPRN");
    msg.range = 0.6599276106299126;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 212U;
    tmp_msg_0.plan_id.assign("RKOTHMJTUIUHFLVWHFUJOXLYARECPIEAOWIFIJEUSUMCAZZRNNFBDFRVZBQUPHWXNKGSGDPNIKAPGNMTJEJVDKPIZDZHILWWBBKSLBPEEOPJYMMJCJYGMBAGVFPQGTYYRGVXOMNWSLLEKLDNTMDHTVQPBILXNYAQZJEISMUCORFMSXZXBWJCDHXOLZQVNAADCEKKKWVQRSQTDBSVVEZGXNXYSAKGTODYRQPRFAYYCQOTOUHR");
    tmp_msg_0.plan_eta = 910092807;
    tmp_msg_0.plan_progress = 0.5764539951235381;
    tmp_msg_0.man_id.assign("LEXMVTYCITICETIPYCUUHJBDJHCHPEJSKZWMJQRUJOLYRIOMEMNIVLQTFAGBKCSRIGXJZSAWIURTXDOOPMVWNCNJUYKHWGTVFZSKFOSXKKVBASXS");
    tmp_msg_0.man_type = 54422U;
    tmp_msg_0.man_eta = -751805400;
    tmp_msg_0.last_outcome = 147U;
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
    msg.setTimeStamp(0.4443277327657488);
    msg.setSource(2588U);
    msg.setSourceEntity(162U);
    msg.setDestination(40272U);
    msg.setDestinationEntity(75U);
    msg.op = 12U;
    msg.system.assign("LAXSUAMBIJRAGNFBTSEUEBRLV");
    msg.range = 0.08846135913269393;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("QXTWACOMHCHSBKVLBAYGMMBZTOCOSKFQDKFEGAVPXJNTNNODFRXSGEFULJLSVQJEUKPLJJSSBXLLGOUDPDVTJRPJEZASYBPXHZWLRHXORPNVGCTGYFSJTCCKHWBVNBYFKIXMQI");
    tmp_msg_0.plan_size = 64819U;
    tmp_msg_0.change_time = 0.7231136261073279;
    tmp_msg_0.change_sid = 12752U;
    tmp_msg_0.change_sname.assign("XJUDSTDPMZRHNNUXWURKTOGQMULCJJTCTDEKIREFTDLJGROWSDQXYYAIWFNNVJDZLSXAVJTXYQMFNZFIPKLVREPXDLHLXOGWDHWMBMUCQENSRGPVZFEYARSZEBYAHUBKGSBHTTKNYCVWSWWYLUJXZOICPYNIVYFBIFOZQQOARWIPIKHOAEPJCJANPVCCSFIHQCERAPURZXTFJKLYKEGNZAHBGBCUKQIDOUGABVMEDZMLXQWSB");
    const char tmp_tmp_msg_0_0[] = {-9, 10, 76, -101, -59, 44, 34, 56, -101, 52, -40, -30, 50, -75, -51, -29, -120, -109, -56, 23, 112, 45, 62, -26, -31, 111, -122, 7, 51, -23, 32, -7, -57, -38, 53, -108, 59, -41, 125, 13, 66, 38, 94, 75, -100, 14, 10, -37, 116, -101, -49, -43, 113, 68, -6, 79, 120, 76, -93, 90, -105, -73, -100, -79, 8, -31, 42, 55, 65, 123, 49, 71, -16, -86, 22, -109, 76, -66, -42, 57, -58, -81, -31, 25, 43, -19, -65, 50, -37, -30, 111, 118, -87, -116, -75, -9, -71, -108, -114, 80, 75, -97, -105, -72, -109, -62, -24, 69, 115, 98, 19, 123, -48, -71, -75, 49, 74, 72, 114, -122, 56, 43, -46, -14, 57, -111, -14, 50, 93, 79, -120, -55, -124, -67, 55, 13, 11, -3, -50, 110, 49, -111, 72, -115, 2, 41, -57, 46, 14};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.49979056511609277);
    msg.setSource(46362U);
    msg.setSourceEntity(184U);
    msg.setDestination(38960U);
    msg.setDestinationEntity(98U);
    msg.op = 29U;
    msg.system.assign("TOVTSTQNPGJLDYWCFIKBXUNYRUGXWOKZHWTIRMSXZARMEBHAAZMNAYXEUMMBPRNYKQYGBAZHIXCSQWUQAPJCLPEBVNRIFNJIFMVAHLPSLMAMJDVHCRNUQCLWHFOMSIWAOKJJUDWQPLKJDVQCHXTCPKNYGGXBNQFHLDVETWPUKAEZSZQBQF");
    msg.range = 0.729348993549038;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("IWZOJFCESYCLLWMVOKKEASPBBIDUDZUNABWVFZDYNEHVWBAVEUVMUQVSIDJYKIZOEKRUEHCWAHPATFTGYBMAQUSYJSPCRFKYMHIDKPFCHNCXRRSSZOMTGR");
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
    msg.setTimeStamp(0.11388120318172246);
    msg.setSource(56136U);
    msg.setSourceEntity(36U);
    msg.setDestination(64659U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.4954302444824732);
    msg.setSource(4946U);
    msg.setSourceEntity(44U);
    msg.setDestination(5673U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.8930037555857622);
    msg.setSource(16508U);
    msg.setSourceEntity(52U);
    msg.setDestination(56995U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.31676215707996935);
    msg.setSource(35303U);
    msg.setSourceEntity(29U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(5U);
    msg.list.assign("UFCPURDUSNBWLQCYEAJOZZEUKYOGEEYQHRQOBATFXMJAIZADXLBGLQTTESTDAKINGFDVPXUXMTNZMPXUJGXWFVXLZRVHZNIEUYSHOKRTBAHGMKWPHESOQKTNCNTIFDTLYXJDKMJWMQPSEVLRN");

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
    msg.setTimeStamp(0.778520591226275);
    msg.setSource(38169U);
    msg.setSourceEntity(229U);
    msg.setDestination(16006U);
    msg.setDestinationEntity(132U);
    msg.list.assign("KPKGZMKFAWUIGAORSVCECFPRLPSDUWVSCEBKLAMZERRLNLXFJHWFBQNMXFMSYIMXZBEDOTNDTNHGPSMWMFKNIGFLQJOVJPHAROAXAIYSMYHVSKUWJGNHVTVXYRSCGHBEABTPBIGNQQWJQLXJZDZRYNSWXTIRTGBEOUGUQOCKPFJAHCROZDKXZJL");

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
    msg.setTimeStamp(0.5734218164918573);
    msg.setSource(9432U);
    msg.setSourceEntity(232U);
    msg.setDestination(10012U);
    msg.setDestinationEntity(207U);
    msg.list.assign("IMBRFVTXRLTPIJFQTUDTYGVTNAZHPGWLLHXSIOHCCZAGOSCRYFJMBQIKMHHWOZBWMDTIQQNPYBBOGJCBRJZGOUDNFGDKVKYINHDYDFGUCSHCVLQNCDXKYITSSOJWLGURJLFLSQLOWSXXMZPOAZHNAYUYMRTMKBNJXAXHKZVCIEPEVETPVJ");

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
    msg.setTimeStamp(0.049408103550383164);
    msg.setSource(9248U);
    msg.setSourceEntity(16U);
    msg.setDestination(17827U);
    msg.setDestinationEntity(148U);
    msg.value = -14337;

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
    msg.setTimeStamp(0.2563573775345068);
    msg.setSource(47795U);
    msg.setSourceEntity(49U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(27U);
    msg.value = -12055;

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
    msg.setTimeStamp(0.7741031507219515);
    msg.setSource(36250U);
    msg.setSourceEntity(224U);
    msg.setDestination(16975U);
    msg.setDestinationEntity(160U);
    msg.value = 14861;

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
    msg.setTimeStamp(0.2656343287644082);
    msg.setSource(24068U);
    msg.setSourceEntity(45U);
    msg.setDestination(53019U);
    msg.setDestinationEntity(195U);
    msg.value = 0.6616118881768042;

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
    msg.setTimeStamp(0.6710533591465865);
    msg.setSource(46094U);
    msg.setSourceEntity(113U);
    msg.setDestination(37765U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5579251221695376;

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
    msg.setTimeStamp(0.05885763129229293);
    msg.setSource(16925U);
    msg.setSourceEntity(56U);
    msg.setDestination(4720U);
    msg.setDestinationEntity(191U);
    msg.value = 0.8751171238336197;

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
    msg.setTimeStamp(0.18093141062347218);
    msg.setSource(64267U);
    msg.setSourceEntity(64U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(79U);
    msg.value = 0.18931280010023954;

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
    msg.setTimeStamp(0.6317211930219977);
    msg.setSource(58995U);
    msg.setSourceEntity(181U);
    msg.setDestination(19827U);
    msg.setDestinationEntity(172U);
    msg.value = 0.174004020943343;

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
    msg.setTimeStamp(0.239059612183377);
    msg.setSource(47162U);
    msg.setSourceEntity(163U);
    msg.setDestination(36699U);
    msg.setDestinationEntity(201U);
    msg.value = 0.9314357228236764;

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
    msg.setTimeStamp(0.061150474108563224);
    msg.setSource(51544U);
    msg.setSourceEntity(60U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(98U);
    msg.validity = 43478U;
    msg.type = 210U;
    msg.utc_year = 15108U;
    msg.utc_month = 187U;
    msg.utc_day = 192U;
    msg.utc_time = 0.7872968352351966;
    msg.lat = 0.999857661406162;
    msg.lon = 0.9871958322513703;
    msg.height = 0.9132332179845688;
    msg.satellites = 249U;
    msg.cog = 0.3166532702581908;
    msg.sog = 0.16776097801882806;
    msg.hdop = 0.6755110402713893;
    msg.vdop = 0.8736835571730718;
    msg.hacc = 0.5675158485271767;
    msg.vacc = 0.16055576323991694;

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
    msg.setTimeStamp(0.23240709914618618);
    msg.setSource(34353U);
    msg.setSourceEntity(83U);
    msg.setDestination(36143U);
    msg.setDestinationEntity(46U);
    msg.validity = 6455U;
    msg.type = 83U;
    msg.utc_year = 1193U;
    msg.utc_month = 16U;
    msg.utc_day = 21U;
    msg.utc_time = 0.2440388030022077;
    msg.lat = 0.2014058509914226;
    msg.lon = 0.2768472667968541;
    msg.height = 0.5404378294518889;
    msg.satellites = 26U;
    msg.cog = 0.7246602269141621;
    msg.sog = 0.4278896260085806;
    msg.hdop = 0.40188746271249876;
    msg.vdop = 0.7025289254711534;
    msg.hacc = 0.21934627785797867;
    msg.vacc = 0.7550092303906941;

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
    msg.setTimeStamp(0.4300112927295061);
    msg.setSource(12573U);
    msg.setSourceEntity(171U);
    msg.setDestination(36720U);
    msg.setDestinationEntity(91U);
    msg.validity = 59651U;
    msg.type = 201U;
    msg.utc_year = 20337U;
    msg.utc_month = 38U;
    msg.utc_day = 12U;
    msg.utc_time = 0.19354182466529823;
    msg.lat = 0.6401947186145159;
    msg.lon = 0.333373246303473;
    msg.height = 0.9463504536438653;
    msg.satellites = 34U;
    msg.cog = 0.14696642572567098;
    msg.sog = 0.5743565365767027;
    msg.hdop = 0.785281293047131;
    msg.vdop = 0.8564218662720523;
    msg.hacc = 0.013174420987034918;
    msg.vacc = 0.25142485832442774;

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
    msg.setTimeStamp(0.853351460274481);
    msg.setSource(61864U);
    msg.setSourceEntity(195U);
    msg.setDestination(40927U);
    msg.setDestinationEntity(226U);
    msg.time = 0.21252369179388997;
    msg.phi = 0.5722041316729531;
    msg.theta = 0.7833246912020374;
    msg.psi = 0.876361941545022;
    msg.psi_magnetic = 0.7695659372700728;

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
    msg.setTimeStamp(0.30453151810714696);
    msg.setSource(56859U);
    msg.setSourceEntity(39U);
    msg.setDestination(65102U);
    msg.setDestinationEntity(53U);
    msg.time = 0.12369620721761554;
    msg.phi = 0.17807888290636165;
    msg.theta = 0.06050419900420145;
    msg.psi = 0.3864231749826261;
    msg.psi_magnetic = 0.2777064161935847;

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
    msg.setTimeStamp(0.8141242176898795);
    msg.setSource(46619U);
    msg.setSourceEntity(6U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(246U);
    msg.time = 0.8697012760524521;
    msg.phi = 0.45830900621808024;
    msg.theta = 0.3948811784995796;
    msg.psi = 0.7387630915771476;
    msg.psi_magnetic = 0.3993775921349202;

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
    msg.setTimeStamp(0.9053349612916702);
    msg.setSource(36458U);
    msg.setSourceEntity(251U);
    msg.setDestination(39898U);
    msg.setDestinationEntity(168U);
    msg.time = 0.38995789753543175;
    msg.x = 0.7017661858480263;
    msg.y = 0.9441228190565212;
    msg.z = 0.519738132420779;
    msg.timestep = 0.8351297550549961;

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
    msg.setTimeStamp(0.5518087070815559);
    msg.setSource(59306U);
    msg.setSourceEntity(209U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(141U);
    msg.time = 0.41782052964559635;
    msg.x = 0.34977788694821466;
    msg.y = 0.1577460374176589;
    msg.z = 0.6999003896150492;
    msg.timestep = 0.8615395559488956;

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
    msg.setTimeStamp(0.8629830510257265);
    msg.setSource(19370U);
    msg.setSourceEntity(164U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(242U);
    msg.time = 0.053661593954194675;
    msg.x = 0.9446288844861611;
    msg.y = 0.05442756136215021;
    msg.z = 0.049439943611396364;
    msg.timestep = 0.7133893076501878;

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
    msg.setTimeStamp(0.935915022783578);
    msg.setSource(37599U);
    msg.setSourceEntity(181U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(56U);
    msg.time = 0.22421428302069502;
    msg.x = 0.46647469468218106;
    msg.y = 0.3004766476206444;
    msg.z = 0.4220608965748903;

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
    msg.setTimeStamp(0.3050503715542936);
    msg.setSource(10358U);
    msg.setSourceEntity(161U);
    msg.setDestination(51853U);
    msg.setDestinationEntity(4U);
    msg.time = 0.8562514068318036;
    msg.x = 0.6670417453936497;
    msg.y = 0.23693864615052562;
    msg.z = 0.4122922272988879;

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
    msg.setTimeStamp(0.07360537384165455);
    msg.setSource(65138U);
    msg.setSourceEntity(92U);
    msg.setDestination(2747U);
    msg.setDestinationEntity(202U);
    msg.time = 0.39678460912470825;
    msg.x = 0.6963758401487216;
    msg.y = 0.17686602696952203;
    msg.z = 0.46357265996297836;

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
    msg.setTimeStamp(0.5848428240621086);
    msg.setSource(50068U);
    msg.setSourceEntity(117U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(216U);
    msg.time = 0.716219073524994;
    msg.x = 0.8798478527227233;
    msg.y = 0.7465919607225217;
    msg.z = 0.8031409861846474;

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
    msg.setTimeStamp(0.7165647421086034);
    msg.setSource(13215U);
    msg.setSourceEntity(64U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(119U);
    msg.time = 0.6361731370668579;
    msg.x = 0.80138527380823;
    msg.y = 0.03445122903505515;
    msg.z = 0.7371219207958614;

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
    msg.setTimeStamp(0.020349666940859046);
    msg.setSource(17075U);
    msg.setSourceEntity(125U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(154U);
    msg.time = 0.3567286138636885;
    msg.x = 0.23574905891773879;
    msg.y = 0.4919886047759129;
    msg.z = 0.997020108783511;

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
    msg.setTimeStamp(0.216102883731361);
    msg.setSource(59431U);
    msg.setSourceEntity(223U);
    msg.setDestination(52729U);
    msg.setDestinationEntity(237U);
    msg.time = 0.04829269662431457;
    msg.x = 0.2804908304595376;
    msg.y = 0.04258617857498981;
    msg.z = 0.2391489318651857;

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
    msg.setTimeStamp(0.6558809726579415);
    msg.setSource(35918U);
    msg.setSourceEntity(48U);
    msg.setDestination(39054U);
    msg.setDestinationEntity(244U);
    msg.time = 0.6142056046918108;
    msg.x = 0.15601501710926535;
    msg.y = 0.5631010037157345;
    msg.z = 0.054370313324946795;

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
    msg.setTimeStamp(0.3002453069919576);
    msg.setSource(40724U);
    msg.setSourceEntity(188U);
    msg.setDestination(22564U);
    msg.setDestinationEntity(249U);
    msg.time = 0.0008400216645385594;
    msg.x = 0.6988729306145336;
    msg.y = 0.9991010366004253;
    msg.z = 0.27664017125736795;

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
    msg.setTimeStamp(0.11564118244290877);
    msg.setSource(52573U);
    msg.setSourceEntity(149U);
    msg.setDestination(55599U);
    msg.setDestinationEntity(194U);
    msg.validity = 211U;
    msg.x = 0.868710493225505;
    msg.y = 0.6812685830799504;
    msg.z = 0.7823330800525236;

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
    msg.setTimeStamp(0.9827937093060763);
    msg.setSource(40147U);
    msg.setSourceEntity(170U);
    msg.setDestination(51054U);
    msg.setDestinationEntity(131U);
    msg.validity = 207U;
    msg.x = 0.37999028609935825;
    msg.y = 0.4756473061706429;
    msg.z = 0.023340545674396473;

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
    msg.setTimeStamp(0.6844478815058717);
    msg.setSource(4209U);
    msg.setSourceEntity(99U);
    msg.setDestination(6374U);
    msg.setDestinationEntity(144U);
    msg.validity = 249U;
    msg.x = 0.16151600924312082;
    msg.y = 0.6875566072313554;
    msg.z = 0.07276596402562252;

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
    msg.setTimeStamp(0.533275409461517);
    msg.setSource(14473U);
    msg.setSourceEntity(236U);
    msg.setDestination(47773U);
    msg.setDestinationEntity(157U);
    msg.validity = 21U;
    msg.x = 0.5705261705791406;
    msg.y = 0.9283797700821173;
    msg.z = 0.4310280017011925;

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
    msg.setTimeStamp(0.20319040748597028);
    msg.setSource(1482U);
    msg.setSourceEntity(14U);
    msg.setDestination(27799U);
    msg.setDestinationEntity(143U);
    msg.validity = 179U;
    msg.x = 0.4701428248936026;
    msg.y = 0.9009500701594477;
    msg.z = 0.47911815554395476;

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
    msg.setTimeStamp(0.10365765445875219);
    msg.setSource(39505U);
    msg.setSourceEntity(197U);
    msg.setDestination(4860U);
    msg.setDestinationEntity(63U);
    msg.validity = 11U;
    msg.x = 0.9064160604013677;
    msg.y = 0.6402228103373818;
    msg.z = 0.24535217784773877;

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
    msg.setTimeStamp(0.7135263592128562);
    msg.setSource(1217U);
    msg.setSourceEntity(222U);
    msg.setDestination(54661U);
    msg.setDestinationEntity(103U);
    msg.time = 0.7144692565432071;
    msg.x = 0.7557190054208037;
    msg.y = 0.35256507995967745;
    msg.z = 0.16277513145324107;

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
    msg.setTimeStamp(0.06278696369975911);
    msg.setSource(56541U);
    msg.setSourceEntity(190U);
    msg.setDestination(22749U);
    msg.setDestinationEntity(229U);
    msg.time = 0.15877520137635104;
    msg.x = 0.4786477645841697;
    msg.y = 0.07579646028543774;
    msg.z = 0.5465123573992586;

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
    msg.setTimeStamp(0.007915256116844294);
    msg.setSource(9445U);
    msg.setSourceEntity(26U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(179U);
    msg.time = 0.4091575831027785;
    msg.x = 0.3588801058117246;
    msg.y = 0.7855097472959792;
    msg.z = 0.9838782083161516;

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
    msg.setTimeStamp(0.09658526283152757);
    msg.setSource(12681U);
    msg.setSourceEntity(199U);
    msg.setDestination(37672U);
    msg.setDestinationEntity(126U);
    msg.validity = 160U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8259494058218972;
    tmp_msg_0.y = 0.6033422995550544;
    tmp_msg_0.z = 0.8186317588366394;
    tmp_msg_0.phi = 0.13310371679277644;
    tmp_msg_0.theta = 0.5804759373583849;
    tmp_msg_0.psi = 0.941737147390125;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.37715401112720914;
    tmp_msg_1.beam_height = 0.6540701258446286;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3418201939282539;

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
    msg.setTimeStamp(0.3415599798165484);
    msg.setSource(25445U);
    msg.setSourceEntity(144U);
    msg.setDestination(65329U);
    msg.setDestinationEntity(115U);
    msg.validity = 189U;
    msg.value = 0.47218693538069323;

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
    msg.setTimeStamp(0.29408741093535495);
    msg.setSource(33423U);
    msg.setSourceEntity(84U);
    msg.setDestination(44261U);
    msg.setDestinationEntity(145U);
    msg.validity = 234U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9221644985646119;
    tmp_msg_0.y = 0.6205175336671609;
    tmp_msg_0.z = 0.451734045755225;
    tmp_msg_0.phi = 0.22403638683023674;
    tmp_msg_0.theta = 0.7840238628792554;
    tmp_msg_0.psi = 0.9931151530962443;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.882168732453914;
    tmp_msg_1.beam_height = 0.16596059002045427;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6083419210984573;

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
    msg.setTimeStamp(0.9483938967589626);
    msg.setSource(12771U);
    msg.setSourceEntity(28U);
    msg.setDestination(44942U);
    msg.setDestinationEntity(189U);
    msg.value = 0.19289344033026612;

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
    msg.setTimeStamp(0.6394376376522458);
    msg.setSource(55438U);
    msg.setSourceEntity(120U);
    msg.setDestination(4786U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0805407106802759;

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
    msg.setTimeStamp(0.5726946284597049);
    msg.setSource(40843U);
    msg.setSourceEntity(192U);
    msg.setDestination(2654U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8327102616946988;

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
    msg.setTimeStamp(0.4379112033546504);
    msg.setSource(17201U);
    msg.setSourceEntity(139U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(19U);
    msg.value = 0.1660767440086306;

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
    msg.setTimeStamp(0.7763033710830616);
    msg.setSource(32562U);
    msg.setSourceEntity(119U);
    msg.setDestination(64364U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6491468391773916;

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
    msg.setTimeStamp(0.43680541835623776);
    msg.setSource(55400U);
    msg.setSourceEntity(26U);
    msg.setDestination(23706U);
    msg.setDestinationEntity(7U);
    msg.value = 0.025278057349943928;

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
    msg.setTimeStamp(0.11759563839502019);
    msg.setSource(34845U);
    msg.setSourceEntity(17U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(156U);
    msg.value = 0.27627635214431445;

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
    msg.setTimeStamp(0.672691679486119);
    msg.setSource(21420U);
    msg.setSourceEntity(189U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(228U);
    msg.value = 0.09550324367664242;

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
    msg.setTimeStamp(0.36838247198793206);
    msg.setSource(31285U);
    msg.setSourceEntity(243U);
    msg.setDestination(9664U);
    msg.setDestinationEntity(11U);
    msg.value = 0.40558149010539024;

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
    msg.setTimeStamp(0.40950648263813727);
    msg.setSource(18681U);
    msg.setSourceEntity(19U);
    msg.setDestination(5869U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9171950509746194;

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
    msg.setTimeStamp(0.8854376096959303);
    msg.setSource(33942U);
    msg.setSourceEntity(7U);
    msg.setDestination(38106U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6990411923739782;

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
    msg.setTimeStamp(0.9226683974399803);
    msg.setSource(50733U);
    msg.setSourceEntity(61U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(168U);
    msg.value = 0.48765686203582503;

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
    msg.setTimeStamp(0.5274554073446394);
    msg.setSource(41409U);
    msg.setSourceEntity(231U);
    msg.setDestination(54448U);
    msg.setDestinationEntity(83U);
    msg.value = 0.5997337710012756;

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
    msg.setTimeStamp(0.2429261281066617);
    msg.setSource(19268U);
    msg.setSourceEntity(245U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(206U);
    msg.value = 0.445844830896058;

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
    msg.setTimeStamp(0.7497066343804873);
    msg.setSource(21143U);
    msg.setSourceEntity(66U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5835508818240658;

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
    msg.setTimeStamp(0.03836836973861568);
    msg.setSource(32197U);
    msg.setSourceEntity(176U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(53U);
    msg.value = 0.06848709300445222;

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
    msg.setTimeStamp(0.5451021000703707);
    msg.setSource(10039U);
    msg.setSourceEntity(234U);
    msg.setDestination(37219U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5654589997932116;

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
    msg.setTimeStamp(0.32414070237383386);
    msg.setSource(362U);
    msg.setSourceEntity(180U);
    msg.setDestination(33728U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8757220570342947;

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
    msg.setTimeStamp(0.3597785888079218);
    msg.setSource(37490U);
    msg.setSourceEntity(8U);
    msg.setDestination(49361U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5905090138744429;

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
    msg.setTimeStamp(0.947060140404669);
    msg.setSource(4161U);
    msg.setSourceEntity(182U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(8U);
    msg.value = 0.25271554353566017;

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
    msg.setTimeStamp(0.8231404830974097);
    msg.setSource(49670U);
    msg.setSourceEntity(235U);
    msg.setDestination(41414U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8267252802523604;

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
    msg.setTimeStamp(0.8360540442077523);
    msg.setSource(28971U);
    msg.setSourceEntity(33U);
    msg.setDestination(8763U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6483719826588199;

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
    msg.setTimeStamp(0.41676071155772676);
    msg.setSource(45943U);
    msg.setSourceEntity(234U);
    msg.setDestination(36414U);
    msg.setDestinationEntity(105U);
    msg.value = 0.2748397659089086;

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
    msg.setTimeStamp(0.08896971085992134);
    msg.setSource(64541U);
    msg.setSourceEntity(225U);
    msg.setDestination(48054U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9724710930904968;

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
    msg.setTimeStamp(0.13925963085883009);
    msg.setSource(50121U);
    msg.setSourceEntity(172U);
    msg.setDestination(45524U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.45722287915525994;
    msg.speed = 0.669117288472371;
    msg.turbulence = 0.3030839449623084;

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
    msg.setTimeStamp(0.32562658977869774);
    msg.setSource(2059U);
    msg.setSourceEntity(103U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(119U);
    msg.direction = 0.12445642167575521;
    msg.speed = 0.21289541929499933;
    msg.turbulence = 0.9355433105724912;

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
    msg.setTimeStamp(0.7946328331561472);
    msg.setSource(25391U);
    msg.setSourceEntity(127U);
    msg.setDestination(60694U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.637371049529071;
    msg.speed = 0.6722876445914537;
    msg.turbulence = 0.06340376971558037;

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
    msg.setTimeStamp(0.8266756652549432);
    msg.setSource(36396U);
    msg.setSourceEntity(127U);
    msg.setDestination(51953U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5345939388141956;

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
    msg.setTimeStamp(0.8475255556554221);
    msg.setSource(58535U);
    msg.setSourceEntity(5U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(54U);
    msg.value = 0.37655583457011854;

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
    msg.setTimeStamp(0.9112002617147665);
    msg.setSource(36926U);
    msg.setSourceEntity(152U);
    msg.setDestination(54444U);
    msg.setDestinationEntity(109U);
    msg.value = 0.001747993245587165;

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
    msg.setTimeStamp(0.6753158724388705);
    msg.setSource(11071U);
    msg.setSourceEntity(219U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(220U);
    msg.value.assign("FPHNDDKMQBIHILAEAYLEFTZJQMIKSRPXKXGEYSAPGVPKDQTLTBUJHTWTSLHAWHCFYXZZXONBIBCYFRLUFNGSBVSDRYXDKTKOOZWXICBTEEIVLOYKRDUJRMPWNAVQRCFDMIALCXZIUCTCMWSQEUQNRPVZGAMAJN");

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
    msg.setTimeStamp(0.1256314626410311);
    msg.setSource(43481U);
    msg.setSourceEntity(162U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(52U);
    msg.value.assign("GPKJVOMNWLFSXJQXDUUKFXWBTTNEGIHZXQIJCBZJRAOZFTEQERJTKDDFJULLYAGNOIWTEPOFOHRDUKNBAIUDAGISPPQBYWFXRMSMHUMMRSY");

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
    msg.setTimeStamp(0.2231308062453905);
    msg.setSource(51977U);
    msg.setSourceEntity(223U);
    msg.setDestination(21740U);
    msg.setDestinationEntity(20U);
    msg.value.assign("BLLFPOQOTQQDFPHSJNXJDSNBAPPMALLCUKTONEMLQZUVYZPXWNHTRXVKUXNHAXIRODITNUGVTDLBLLTNDWVYYYRASASGFYHKHQAIKGFHMYBDGEZHVECCJCCFMVWXTDQVWGGLLWEKKDRZOPJPOTEI");

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
    msg.setTimeStamp(0.24469976532036064);
    msg.setSource(25991U);
    msg.setSourceEntity(221U);
    msg.setDestination(26229U);
    msg.setDestinationEntity(12U);
    const char tmp_msg_0[] = {-8, 48, 105, 38, -77, -106, 48, -83, 110, 43, -1, -114, 23, -45, 12, 41, 82, 19, -57, -8, -41, -63, 92, 38, 108, 51, -23, 33, -111, 9, -9, -127, -5};
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
    msg.setTimeStamp(0.6499782729343594);
    msg.setSource(48951U);
    msg.setSourceEntity(15U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(207U);
    const char tmp_msg_0[] = {77, -1, 126, -85, -82, -20, 51, -115, 35, 8, -80, 57, -119, -121, -56, 119, 44, 43, 25, 14, -104, 111, 111, 65, 71, 70, 87, 15, -92, 34, 25, -116, 58, 10, 107, 66, -88, -16, 57, 53, 70, -66, 126, -34, 26, -63, -5, -74, 80, 33, -21, -2, 85, -62, -106, 22, 52, 30, 11, -80, -126, -45, -9, -53, 125, 114, -25, 6, 126, -125, 34, 32, 69, 114, 87, -79, -69, -32, 30, -21, -75, 86, -85, -95, 25, -1, 51, -57, -29, -90, 86, -40, -123, -110, 20, 99, 103, -33, -59, 95, 114, -12, -37, 62, 51, -30, -39, -22, 98, -6, -43, -17, -71, -18, -29, 54, 80, -30, 54, -104, -116, 27, -111, -22, -123, -80, 10, 44, -67, -103, 22, 68, -2, -88, -17, -80, -16, -41, 13, -109, 31, -20, 38, -72, 117, 88, -6, -41, -93, 4, -127, 44, -94, 59, 72, -84, 68, 101, 52, -5, 48, -74, -25, 56, -72, 50, 81, 71, -75, 82, 35, -57, 124, -11, 118, -111, -66, -6, 41, 44, 124, 105, 98, -71, -77, 33, -111, 10, -12, -32, -22, 22, 53, -121, -55, -110, 79, -39, 86, -73, 11, 61, 9, 124, -76};
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
    msg.setTimeStamp(0.26427768071321645);
    msg.setSource(50212U);
    msg.setSourceEntity(176U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(181U);
    const char tmp_msg_0[] = {72, -48, 80, -65, -69, 75, -80, 62, -15, -104, -62, -104, -87, -66, -68, 56, 1};
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
    msg.setTimeStamp(0.9378214753059596);
    msg.setSource(30050U);
    msg.setSourceEntity(14U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(195U);
    msg.type = 64U;
    msg.frequency = 152930668U;
    msg.min_range = 33984U;
    msg.max_range = 31093U;
    msg.bits_per_point = 244U;
    msg.scale_factor = 0.5425318565909628;
    const char tmp_msg_0[] = {-118, -64, -90, 114, -99, -16, -18, -81, -45, -1, 107, -57, 101, -62, 2, 75, -12, 110, 14, -33, 93, -3, 66, 114, 19, -67, 94, -51, -115, -78, 7, 27, -102, 100, -109, -44, -58, -123, -97, -46, -96, 33, 45, 7, -116, 66, -13, -19, -59, 109, 92, -13, -40, -39, 27, 116, 21, -73, -95, 28, -53, -48, 69, -15, 118, -54, -12, -14, 98, -39, 90, -24, 19, -80, -22, -81, 93, 20, -125, -24, -6, 70, 60, 82, -68, 82, -20, -41, -19, 12, 22, -47, 83, -71, 95, -45, 10, -64, -30, 60, 18, 72, 14, 24, 16, -88, -34, 64, -124, 71, -101, 32, 19, 16, -4, 22, 11, -15, -69, -18, 91, 9, -47, -114, 70, -100, 77, -40, 117, -112, 29, 52, 107, 125, -71, -87, 16, -37, -10, -123, -41, -105, 64, -49, -73, 18, 55, 9, 61, -16, 56, -117, 60, -5, -9, -36, -98, 65, 66, 121, -54, -26, 26, 18, -80, 7, 86, -65, 124, 90, -22, 103, -128, 104, 79, 118, -79, -79, 75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.00261569765461922);
    msg.setSource(42803U);
    msg.setSourceEntity(175U);
    msg.setDestination(54917U);
    msg.setDestinationEntity(8U);
    msg.type = 194U;
    msg.frequency = 2753630309U;
    msg.min_range = 17573U;
    msg.max_range = 53846U;
    msg.bits_per_point = 211U;
    msg.scale_factor = 0.24116891494962822;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.42820132498053565;
    tmp_msg_0.beam_height = 0.7430407684244935;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-124, 1, 99, 100, -66, -29, 76, 85, 68, 100, 106, 23, -100, 6, -50, 84, -24, 42, 59, 2, -58, 107, 69, 46, -109, -13, -62, 104, 107, -54, 26, 48, 122, 19, -62, 30, -9, -40, -31, 123, -4, -79, 59, -83, 51, -3, 124, 115, 88, -94, -15, -22, -35, -25, 120, -120, 9, 15, -104, 98, 72, 113, -42, 11, -72, 12, -26, -110, 74, 27, 93, -37};
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
    msg.setTimeStamp(0.3533526982195193);
    msg.setSource(41644U);
    msg.setSourceEntity(11U);
    msg.setDestination(41269U);
    msg.setDestinationEntity(230U);
    msg.type = 55U;
    msg.frequency = 113322859U;
    msg.min_range = 57788U;
    msg.max_range = 45743U;
    msg.bits_per_point = 108U;
    msg.scale_factor = 0.8482677606219907;
    const char tmp_msg_0[] = {-69, -102, -36, 13, -100, -111, -24, -33, -87, -45, -107, 51, 113, 9, -70, 101, 61, 39, 81, 100, -87, 74, -83, -99, 23, 3, -105, -19, -92, 114, 89, 40, -31, 53, -6, 107, -122, -25, -77, -93, -85, 108, -45, 57, -122};
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
    msg.setTimeStamp(0.6096114459699362);
    msg.setSource(63364U);
    msg.setSourceEntity(53U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.6024944074926846);
    msg.setSource(17596U);
    msg.setSourceEntity(24U);
    msg.setDestination(50676U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.8202229933524418);
    msg.setSource(23865U);
    msg.setSourceEntity(96U);
    msg.setDestination(26036U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.09339493109255104);
    msg.setSource(58515U);
    msg.setSourceEntity(152U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(131U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.20546051642648444);
    msg.setSource(26064U);
    msg.setSourceEntity(98U);
    msg.setDestination(18514U);
    msg.setDestinationEntity(144U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.9669880846999519);
    msg.setSource(5049U);
    msg.setSourceEntity(0U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(165U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.1263287527878103);
    msg.setSource(19243U);
    msg.setSourceEntity(207U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(250U);
    msg.value = 0.04656056140546416;
    msg.confidence = 0.021978932381178873;
    msg.opmodes.assign("GYNIQQMWJNWBOIICOAINJSPHFLBABRWPOGQGYOLFZYGCVOUABQZPBZODYUEDMEYVTHTHCTM");

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
    msg.setTimeStamp(0.9651891462701622);
    msg.setSource(58259U);
    msg.setSourceEntity(122U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6700374837857012;
    msg.confidence = 0.23913844121408012;
    msg.opmodes.assign("RPXVXCEBENTBQEIDHTHZTRDDHEMIBNYOFPBTEQUYJNQGZWYBCYFBSJUVVAHMLIURBCRDJSFKALWCWNZLLFKXLJGINOSKKKXZGPSVYIACTYSWNXNJTPTYYFNXKVQAKFQRFPMNFOWLOJRHQDGDWATZJVWOOMPHXBULCORMDPZQRBBUCJUKZSNEIWVSCFOXQTIUVVROTLZMGAUQUMSAKPYGYDGCJGHHA");

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
    msg.setTimeStamp(0.30529209214517583);
    msg.setSource(32260U);
    msg.setSourceEntity(78U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7317667042064131;
    msg.confidence = 0.8865299040762366;
    msg.opmodes.assign("EROQAJZJYLNRFDBBCACFJWWZIVVVY");

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
    msg.setTimeStamp(0.5330232651764975);
    msg.setSource(50441U);
    msg.setSourceEntity(86U);
    msg.setDestination(55029U);
    msg.setDestinationEntity(124U);
    msg.itow = 3205949161U;
    msg.lat = 0.8486191913952766;
    msg.lon = 0.10133568669369108;
    msg.height_ell = 0.5311865035504527;
    msg.height_sea = 0.19688009550647756;
    msg.hacc = 0.5272445203569484;
    msg.vacc = 0.4086411428622979;
    msg.vel_n = 0.43223714347143616;
    msg.vel_e = 0.7703121370899435;
    msg.vel_d = 0.5094574878278344;
    msg.speed = 0.4644809793537652;
    msg.gspeed = 0.9858587134364344;
    msg.heading = 0.13924213777143724;
    msg.sacc = 0.5779913116919932;
    msg.cacc = 0.9049128681213501;

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
    msg.setTimeStamp(0.3538655702839745);
    msg.setSource(5101U);
    msg.setSourceEntity(33U);
    msg.setDestination(52819U);
    msg.setDestinationEntity(80U);
    msg.itow = 2933950368U;
    msg.lat = 0.8117401727674614;
    msg.lon = 0.7996161092068176;
    msg.height_ell = 0.19341723959524404;
    msg.height_sea = 0.4783897761651912;
    msg.hacc = 0.48347080009610943;
    msg.vacc = 0.5438405136872242;
    msg.vel_n = 0.2594719597596651;
    msg.vel_e = 0.4451468161041878;
    msg.vel_d = 0.639706263177922;
    msg.speed = 0.08766833632307869;
    msg.gspeed = 0.31593599550093054;
    msg.heading = 0.2684181425179164;
    msg.sacc = 0.18358474933120905;
    msg.cacc = 0.20913245460984276;

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
    msg.setTimeStamp(0.880413791876902);
    msg.setSource(53214U);
    msg.setSourceEntity(127U);
    msg.setDestination(18362U);
    msg.setDestinationEntity(57U);
    msg.itow = 473566617U;
    msg.lat = 0.6126769523990956;
    msg.lon = 0.9138478655934611;
    msg.height_ell = 0.6005028929848355;
    msg.height_sea = 0.8249843346807587;
    msg.hacc = 0.7687800415547524;
    msg.vacc = 0.2835938161647912;
    msg.vel_n = 0.6075195274921816;
    msg.vel_e = 0.14957269389879524;
    msg.vel_d = 0.9024884778401348;
    msg.speed = 0.852416149338021;
    msg.gspeed = 0.3293947925208599;
    msg.heading = 0.6126830481000883;
    msg.sacc = 0.7377037373404197;
    msg.cacc = 0.8997103673593335;

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
    msg.setTimeStamp(0.6113653422203899);
    msg.setSource(55792U);
    msg.setSourceEntity(34U);
    msg.setDestination(43380U);
    msg.setDestinationEntity(186U);
    msg.id = 247U;
    msg.value = 0.2636978021902143;

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
    msg.setTimeStamp(0.007454947990313543);
    msg.setSource(17439U);
    msg.setSourceEntity(42U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(112U);
    msg.id = 219U;
    msg.value = 0.7979849208537955;

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
    msg.setTimeStamp(0.15697074355862606);
    msg.setSource(53230U);
    msg.setSourceEntity(162U);
    msg.setDestination(57039U);
    msg.setDestinationEntity(3U);
    msg.id = 185U;
    msg.value = 0.03959972228256459;

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
    msg.setTimeStamp(0.13525877077009818);
    msg.setSource(56274U);
    msg.setSourceEntity(236U);
    msg.setDestination(36741U);
    msg.setDestinationEntity(100U);
    msg.x = 0.614541716831849;
    msg.y = 0.9241077372459255;
    msg.z = 0.5509077742331274;
    msg.phi = 0.5052496889123097;
    msg.theta = 0.8393256867100085;
    msg.psi = 0.4222185084964788;

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
    msg.setTimeStamp(0.58072437931247);
    msg.setSource(10007U);
    msg.setSourceEntity(5U);
    msg.setDestination(20648U);
    msg.setDestinationEntity(168U);
    msg.x = 0.8177244051153547;
    msg.y = 0.498078923942485;
    msg.z = 0.24512759392892836;
    msg.phi = 0.8245339230893828;
    msg.theta = 0.9469514103014398;
    msg.psi = 0.42570293630331113;

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
    msg.setTimeStamp(0.8067203974182021);
    msg.setSource(58720U);
    msg.setSourceEntity(72U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(120U);
    msg.x = 0.9779797203401447;
    msg.y = 0.8538155880834963;
    msg.z = 0.8414460327889313;
    msg.phi = 0.6607856849853426;
    msg.theta = 0.9390066619593544;
    msg.psi = 0.4373543318865385;

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
    msg.setTimeStamp(0.06470009448960923);
    msg.setSource(19500U);
    msg.setSourceEntity(138U);
    msg.setDestination(43003U);
    msg.setDestinationEntity(59U);
    msg.beam_width = 0.46349521466074706;
    msg.beam_height = 0.9798287147891981;

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
    msg.setTimeStamp(0.6688536092996771);
    msg.setSource(1116U);
    msg.setSourceEntity(25U);
    msg.setDestination(24066U);
    msg.setDestinationEntity(236U);
    msg.beam_width = 0.20622901706707242;
    msg.beam_height = 0.9896889878852814;

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
    msg.setTimeStamp(0.8277011504718644);
    msg.setSource(22492U);
    msg.setSourceEntity(20U);
    msg.setDestination(39098U);
    msg.setDestinationEntity(133U);
    msg.beam_width = 0.5455229693710987;
    msg.beam_height = 0.3865102885464392;

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
    msg.setTimeStamp(0.3731158784054063);
    msg.setSource(39972U);
    msg.setSourceEntity(12U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(6U);
    msg.sane = 231U;

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
    msg.setTimeStamp(0.2923494860729058);
    msg.setSource(48575U);
    msg.setSourceEntity(139U);
    msg.setDestination(31753U);
    msg.setDestinationEntity(252U);
    msg.sane = 93U;

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
    msg.setTimeStamp(0.1716201477173005);
    msg.setSource(13652U);
    msg.setSourceEntity(180U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(253U);
    msg.sane = 14U;

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
    msg.setTimeStamp(0.4169614412528777);
    msg.setSource(31099U);
    msg.setSourceEntity(75U);
    msg.setDestination(20704U);
    msg.setDestinationEntity(228U);
    msg.value = 0.13144293482752645;

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
    msg.setTimeStamp(0.40847485182619236);
    msg.setSource(8779U);
    msg.setSourceEntity(148U);
    msg.setDestination(42725U);
    msg.setDestinationEntity(47U);
    msg.value = 0.5689658207474911;

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
    msg.setTimeStamp(0.08167499355673813);
    msg.setSource(10321U);
    msg.setSourceEntity(153U);
    msg.setDestination(2183U);
    msg.setDestinationEntity(133U);
    msg.value = 0.6468786233488278;

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
    msg.setTimeStamp(0.7181473905567288);
    msg.setSource(17208U);
    msg.setSourceEntity(93U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(16U);
    msg.value = 0.5098370458522395;

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
    msg.setTimeStamp(0.6641020747168664);
    msg.setSource(3897U);
    msg.setSourceEntity(187U);
    msg.setDestination(8430U);
    msg.setDestinationEntity(39U);
    msg.value = 0.6538605881312759;

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
    msg.setTimeStamp(0.8496005344820254);
    msg.setSource(18026U);
    msg.setSourceEntity(193U);
    msg.setDestination(45700U);
    msg.setDestinationEntity(1U);
    msg.value = 0.4231385477455054;

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
    msg.setTimeStamp(0.2880930224094602);
    msg.setSource(19790U);
    msg.setSourceEntity(95U);
    msg.setDestination(6162U);
    msg.setDestinationEntity(110U);
    msg.value = 0.4996863847487899;

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
    msg.setTimeStamp(0.9785160876065037);
    msg.setSource(11096U);
    msg.setSourceEntity(171U);
    msg.setDestination(35445U);
    msg.setDestinationEntity(185U);
    msg.value = 0.24149635231352307;

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
    msg.setTimeStamp(0.26509622030521673);
    msg.setSource(21137U);
    msg.setSourceEntity(128U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(171U);
    msg.value = 0.04530230555181769;

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
    msg.setTimeStamp(0.5507416056006331);
    msg.setSource(24985U);
    msg.setSourceEntity(58U);
    msg.setDestination(45020U);
    msg.setDestinationEntity(34U);
    msg.value = 0.028688727944236492;

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
    msg.setTimeStamp(0.8620179856866158);
    msg.setSource(45051U);
    msg.setSourceEntity(159U);
    msg.setDestination(31223U);
    msg.setDestinationEntity(69U);
    msg.value = 0.4059821685075433;

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
    msg.setTimeStamp(0.7469824577949266);
    msg.setSource(17406U);
    msg.setSourceEntity(150U);
    msg.setDestination(36772U);
    msg.setDestinationEntity(97U);
    msg.value = 0.20696027288474006;

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
    msg.setTimeStamp(0.12568751263863176);
    msg.setSource(59865U);
    msg.setSourceEntity(87U);
    msg.setDestination(46990U);
    msg.setDestinationEntity(35U);
    msg.id = 35U;
    msg.zoom = 46U;
    msg.action = 124U;

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
    msg.setTimeStamp(0.5147837204744264);
    msg.setSource(46941U);
    msg.setSourceEntity(105U);
    msg.setDestination(60007U);
    msg.setDestinationEntity(30U);
    msg.id = 27U;
    msg.zoom = 230U;
    msg.action = 49U;

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
    msg.setTimeStamp(0.6310985174824266);
    msg.setSource(63837U);
    msg.setSourceEntity(54U);
    msg.setDestination(37474U);
    msg.setDestinationEntity(241U);
    msg.id = 3U;
    msg.zoom = 96U;
    msg.action = 216U;

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
    msg.setTimeStamp(0.450846736207938);
    msg.setSource(34384U);
    msg.setSourceEntity(242U);
    msg.setDestination(61555U);
    msg.setDestinationEntity(91U);
    msg.id = 12U;
    msg.value = 0.7113882641089905;

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
    msg.setTimeStamp(0.6579962394621522);
    msg.setSource(26313U);
    msg.setSourceEntity(1U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(96U);
    msg.id = 228U;
    msg.value = 0.4843915472221577;

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
    msg.setTimeStamp(0.37668545525455543);
    msg.setSource(8958U);
    msg.setSourceEntity(0U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(175U);
    msg.id = 76U;
    msg.value = 0.07105749534507622;

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
    msg.setTimeStamp(0.4404030793803776);
    msg.setSource(64722U);
    msg.setSourceEntity(201U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(97U);
    msg.id = 85U;
    msg.value = 0.5424367603874714;

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
    msg.setTimeStamp(0.8187481153663713);
    msg.setSource(40624U);
    msg.setSourceEntity(194U);
    msg.setDestination(25964U);
    msg.setDestinationEntity(241U);
    msg.id = 119U;
    msg.value = 0.7727901591652883;

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
    msg.setTimeStamp(0.5330716124688185);
    msg.setSource(29164U);
    msg.setSourceEntity(115U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(51U);
    msg.id = 83U;
    msg.value = 0.3904956322432226;

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
    msg.setTimeStamp(0.6812685326201694);
    msg.setSource(21139U);
    msg.setSourceEntity(236U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(244U);
    msg.id = 25U;
    msg.angle = 0.4501217352299328;

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
    msg.setTimeStamp(0.49412081047585377);
    msg.setSource(9552U);
    msg.setSourceEntity(83U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(216U);
    msg.id = 0U;
    msg.angle = 0.5868735631112281;

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
    msg.setTimeStamp(0.3642286434752219);
    msg.setSource(54181U);
    msg.setSourceEntity(149U);
    msg.setDestination(37900U);
    msg.setDestinationEntity(135U);
    msg.id = 109U;
    msg.angle = 0.5392879440958781;

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
    msg.setTimeStamp(0.7120515245655036);
    msg.setSource(21222U);
    msg.setSourceEntity(40U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(17U);
    msg.op = 235U;
    msg.actions.assign("ROQORDMALHMOBACKCXFJJWSRSMXJLSOVFMXBGWERWZEPVVKNGLVMKBFZWTLVQJAMTQXPGAKDUUAUHEYDAXVLCSYKGMPSIAPLTNNCUZLEBKUDDWTLQZAECCJYXTTBJEFRIIQHBU");

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
    msg.setTimeStamp(0.5914777541284327);
    msg.setSource(42859U);
    msg.setSourceEntity(144U);
    msg.setDestination(25946U);
    msg.setDestinationEntity(122U);
    msg.op = 252U;
    msg.actions.assign("NGXUZKXDDUCEPMPFZGIMEMGTIBMGMLYJJTOEEQAYRAVSIDGEFOUYLKQIMMPXQVHWZNYCWUNFOSYNGA");

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
    msg.setTimeStamp(0.45254565872427965);
    msg.setSource(39151U);
    msg.setSourceEntity(179U);
    msg.setDestination(62308U);
    msg.setDestinationEntity(58U);
    msg.op = 10U;
    msg.actions.assign("UCMALVVTUHLJCHWXQXMMICTAWGAOBINBDVYOYFJZUIYSAYDAZMWENELTGAELFSBUPJTEBDAENUPTNAUEGSPMLQJCOSHEVEMMAMNKXMVNMVGVZJNFYUYNRGQSXGVICWLSFKRTGRKKPNKJWBEWVJTHIGUPZRWOXWHCAQBZ");

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
    msg.setTimeStamp(0.023561007793234223);
    msg.setSource(1921U);
    msg.setSourceEntity(229U);
    msg.setDestination(46847U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("GTWHZPCIROOFNKJFLHSQGHNVKCNEXYOITBUZRLGDQFBJDYVGJDBXAOAYGXJVPOUYMPZKPZARXWMWCUPUSMHNXSWAVSMFIE");

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
    msg.setTimeStamp(0.6857784332285186);
    msg.setSource(50606U);
    msg.setSourceEntity(204U);
    msg.setDestination(5408U);
    msg.setDestinationEntity(150U);
    msg.actions.assign("KFQGLNZINMARNWBCPPRUPOMLHPHNIMBNYHNUEXBPGZZBCDVRQOACGNUMPHLOHSDPKOVYRKEYXNWLLDEBJCQOXSXIKKZCSWJSQKZLFZTZLUAWTNTOGMVURYEFGHBJITKVEMWWWTCVRKIFZGAYFJSELAQJZAVO");

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
    msg.setTimeStamp(0.24659242459313047);
    msg.setSource(18499U);
    msg.setSourceEntity(211U);
    msg.setDestination(7979U);
    msg.setDestinationEntity(64U);
    msg.actions.assign("MGBZVZIPIXLYPJNQACMVQPKALIUKTRBVMNCRMHULJGKYFPRFOTYLGPCMOASAHEUWTNMKVSFOONGLOGPSRNKQBNWUEXEWUMERFLDAXETOEXFZWGAAIIUMSHCIJPFBFXHVLOYUAZRPOSQWJCESAYWDTFZKVSHUYGTYDXIDQWRBQHWRXZBLTRXAJJFDKZCTENBTCMNJDJULBILCCCSHYSIBQDBWXHOYXOZDHFZJEQQ");

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
    msg.setTimeStamp(0.9889335370570266);
    msg.setSource(7797U);
    msg.setSourceEntity(168U);
    msg.setDestination(14387U);
    msg.setDestinationEntity(8U);
    msg.button = 52U;
    msg.value = 207U;

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
    msg.setTimeStamp(0.014508519610468285);
    msg.setSource(58516U);
    msg.setSourceEntity(224U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(215U);
    msg.button = 113U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.7930614265552973);
    msg.setSource(48632U);
    msg.setSourceEntity(24U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(65U);
    msg.button = 228U;
    msg.value = 33U;

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
    msg.setTimeStamp(0.9913020448953042);
    msg.setSource(15952U);
    msg.setSourceEntity(59U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(150U);
    msg.op = 153U;
    msg.text.assign("GXHIOHGSCOVWVZUZOP");

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
    msg.setTimeStamp(0.3393583117728248);
    msg.setSource(43497U);
    msg.setSourceEntity(156U);
    msg.setDestination(52515U);
    msg.setDestinationEntity(253U);
    msg.op = 170U;
    msg.text.assign("RAFDMLMAZPDVVUXGHJLAIAZHATPPZGMDUTHJRKLUVEVBQXNQYCOFDOTBSLGVVYFOBYNRUZQTRGASLYKCMWTQJGONSESDPWTFYFLVDKSQCMIAZXPOFOIXSSXKYMIECPEHSGARPBAWMJQYKCNJTMJQXBEUAVUJDHREULDTVEFWIJYGMOCZKUQHXYPGSBWZCDWXWBIINXDEINJGIROXQULTWWFZBHCOW");

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
    msg.setTimeStamp(0.5729903340819169);
    msg.setSource(11912U);
    msg.setSourceEntity(154U);
    msg.setDestination(1830U);
    msg.setDestinationEntity(195U);
    msg.op = 129U;
    msg.text.assign("ZULHLGJLVSIAWIGPHEZVGYUPXDFVSMUJSNRMYHZYJENWLAQWKCITYHNUBXQGSWADNFHCJXSZJTFSDFNVFTMXVECSMHDEZXLRIXJNYJLRQBOAJIGTJAEWKQMFICTRKLXPOUTDVVZPNUIXBHRKMZERGBPYDHUQQWCLUOFGNCPMCMZRNGKRXSOPQDLINEEQHSYCWELBYVZAKOOGORATYWKCFD");

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
    msg.setTimeStamp(0.18214700301519549);
    msg.setSource(60579U);
    msg.setSourceEntity(101U);
    msg.setDestination(64872U);
    msg.setDestinationEntity(112U);
    msg.op = 153U;
    msg.time_remain = 0.6477515129842892;
    msg.sched_time = 0.8659748027282966;

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
    msg.setTimeStamp(0.21472814932767448);
    msg.setSource(6381U);
    msg.setSourceEntity(187U);
    msg.setDestination(65003U);
    msg.setDestinationEntity(239U);
    msg.op = 10U;
    msg.time_remain = 0.6320389053181292;
    msg.sched_time = 0.8028277385418101;

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
    msg.setTimeStamp(0.9966336620542898);
    msg.setSource(1935U);
    msg.setSourceEntity(105U);
    msg.setDestination(1452U);
    msg.setDestinationEntity(142U);
    msg.op = 189U;
    msg.time_remain = 0.5306423126748303;
    msg.sched_time = 0.6998824715611704;

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
    msg.setTimeStamp(0.4695080218772161);
    msg.setSource(17153U);
    msg.setSourceEntity(33U);
    msg.setDestination(22544U);
    msg.setDestinationEntity(16U);
    msg.name.assign("VGNNSBHATPANSZMHVJUVNJLXKQTKTXYBQYFZZUYDWMIZQEYOWPPXNCQGWUTJAHPLRVHMWVALSDURENFTYFTJVTAIOUNUWWKSVFQYGUFMGTTMRELEDYXHPM");
    msg.op = 224U;
    msg.sched_time = 0.6367634425915709;

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
    msg.setTimeStamp(0.34666737623695587);
    msg.setSource(27240U);
    msg.setSourceEntity(152U);
    msg.setDestination(12056U);
    msg.setDestinationEntity(162U);
    msg.name.assign("SWEVNHSDQZYTWKTCGMXVGMMUXNUDMBPBFHMSAYYZAOBMQYKFJEFCONTQOCCGNGYVCMPSHRFOOQFGJBXJBWLUPYVQDDLEYVKGCYOIHVDFZWPANRBURKSLRJUIGY");
    msg.op = 210U;
    msg.sched_time = 0.567397579515844;

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
    msg.setTimeStamp(0.8718042545292913);
    msg.setSource(36931U);
    msg.setSourceEntity(166U);
    msg.setDestination(17757U);
    msg.setDestinationEntity(171U);
    msg.name.assign("IKCYORWXAJFTCPZVHHKSJCHXGMCLILOZZMJUEGIRKOAXQFAUGLCHRIYORFUUVQXTYMWIZLMCSNDSAVNHEZQYUCQSAKELFTAURPKOPEHFMJBGWJXAMKXVKMDFTNRNSDLTYAJTYIDOWBJGQMOMHIHSDKKWOSNQVNNBF");
    msg.op = 242U;
    msg.sched_time = 0.7529942821202045;

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
    msg.setTimeStamp(0.3463603714029736);
    msg.setSource(36829U);
    msg.setSourceEntity(93U);
    msg.setDestination(56114U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.9665995243575438);
    msg.setSource(44021U);
    msg.setSourceEntity(154U);
    msg.setDestination(47468U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.27680743615402337);
    msg.setSource(48832U);
    msg.setSourceEntity(148U);
    msg.setDestination(23625U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.769914524127353);
    msg.setSource(15224U);
    msg.setSourceEntity(154U);
    msg.setDestination(16998U);
    msg.setDestinationEntity(60U);
    msg.name.assign("RDNKENYVNRNZHKLVGJNJ");
    msg.state = 147U;

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
    msg.setTimeStamp(0.5228855804790681);
    msg.setSource(61061U);
    msg.setSourceEntity(234U);
    msg.setDestination(41895U);
    msg.setDestinationEntity(244U);
    msg.name.assign("JRXRGZMSVYBXJPPIUEUDTPSVADDMKRMKWHIYGOVZFAGEFYBNKRXHUUKIGCGHLMJLMXCXAWXEZZOPDGTRPSQIHUPQCXQTHRKPILSODMTQLNCCGMBXZZDVGHVONLRBYNSLMLGBDCJA");
    msg.state = 102U;

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
    msg.setTimeStamp(0.27079717687658134);
    msg.setSource(1435U);
    msg.setSourceEntity(206U);
    msg.setDestination(44103U);
    msg.setDestinationEntity(129U);
    msg.name.assign("SIAHRYOYDTJAERUKBKDZFEITBJL");
    msg.state = 122U;

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
    msg.setTimeStamp(0.9173558602012175);
    msg.setSource(14464U);
    msg.setSourceEntity(229U);
    msg.setDestination(18594U);
    msg.setDestinationEntity(135U);
    msg.name.assign("ZRHUSJXAJKHJSRLBIBQKDGNLEHMEJPCFICUHYNRPDKNZJTFTOBMAVSSWFRPVTQXNY");
    msg.value = 237U;

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
    msg.setTimeStamp(0.18268754681937882);
    msg.setSource(65380U);
    msg.setSourceEntity(77U);
    msg.setDestination(32824U);
    msg.setDestinationEntity(130U);
    msg.name.assign("PWMHHNENXOYSRTOUBXLQSZRON");
    msg.value = 157U;

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
    msg.setTimeStamp(0.8667767105797916);
    msg.setSource(56010U);
    msg.setSourceEntity(75U);
    msg.setDestination(2061U);
    msg.setDestinationEntity(115U);
    msg.name.assign("WNYFTQJHJKWUNNQMGMFNDTAPLHSNSXNZLRFMGQEJVEDOYTKDMTRRILHPYFVWLWVZYFLTPOKCWFHUPCAHLFPPKFWQRIGNX");
    msg.value = 170U;

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
    msg.setTimeStamp(0.7678539315904326);
    msg.setSource(6328U);
    msg.setSourceEntity(59U);
    msg.setDestination(8213U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JXOPETAHUBZFOQYVDCVOCBQMGRMICBTARUFGLHDMTVKEPBFUUWPSVXIIMGZDVUKLHGZPWFGLJTVTMIADZDBDSNPYWHZKKJOWJNTKZQHFTIGRQQLRYIHAPWYAMSFNJ");

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
    msg.setTimeStamp(0.11878908009533717);
    msg.setSource(54158U);
    msg.setSourceEntity(179U);
    msg.setDestination(51802U);
    msg.setDestinationEntity(119U);
    msg.name.assign("UYNIMXLZBCRKMKRTOWMTZJFVXTASKPJHKOHPGSHUMFTPRVWFYEQETBRKIXPBWLZHHSXILLAWNDUZVIKAYAXUQOVYM");

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
    msg.setTimeStamp(0.2450316245352504);
    msg.setSource(60787U);
    msg.setSourceEntity(231U);
    msg.setDestination(31194U);
    msg.setDestinationEntity(71U);
    msg.name.assign("ILUAAIDYRBPRUYFQCOFTLGQBHJJNLKLQWXPSQWJYPWNUMDFZRCMZEHDAPEHKBMEQGHXNZPYWXWIHAVPKIHFTKUUCMLGVFUUZYKAYVGCGKQODJUUOEVDRBWMRYXXKBIPPOAOTEBNCSNRVJBJII");

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
    msg.setTimeStamp(0.18679925387875418);
    msg.setSource(64991U);
    msg.setSourceEntity(244U);
    msg.setDestination(21939U);
    msg.setDestinationEntity(224U);
    msg.name.assign("PISVTREOOOOUCLDPMWETHPYZYOXYYPTUGTFBGVJNIVVHFBCZFXQMODMJQAAKXFFRGRHNADCUSZGMBRBIDUNACWJDQLKLEXJDEJLIHCEAESIEGPOHTTZOKVIQUJBNYWEFYSCRVZUSRQUWVSKHAKTBFQHAQRBFBYACKMRGITYXMIZWPKSXNVXGRPOHQUINIJ");
    msg.value = 212U;

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
    msg.setTimeStamp(0.7239447268052903);
    msg.setSource(58279U);
    msg.setSourceEntity(11U);
    msg.setDestination(23079U);
    msg.setDestinationEntity(144U);
    msg.name.assign("EDNHONBLNMMFFBJPVIPARKBWQQZWOFVSLGJDAYGOVOXBRDSPMDZGQWUSKIEMGACAZVCCKWRHBYEQXLDYNSWDZQBOMVAZKLKXPFEUFLKRIEHPOZUFVPNMTFDTBITOECAUIRYVHDEIMILFEAXLCWCRMJSLCOCJKBFUJUTWTDVXZTPUGERWHQYKHGJLTGK");
    msg.value = 111U;

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
    msg.setTimeStamp(0.8085519842543477);
    msg.setSource(16172U);
    msg.setSourceEntity(231U);
    msg.setDestination(55159U);
    msg.setDestinationEntity(42U);
    msg.name.assign("UESFQVHCDFXEMWVVLKXTMBWTWGXOBYFZTLMNETAAIOVRPGPSESEPVCDBRSJCDKPNYHUZDSQNYYJSCRBHPSDAORGJCXKLFUZOMVKAJLHYZXXQDIWGPJYGKTYFQZBJCMRMHRGTLCJKMKPIGBFQXZPUUCRFO");
    msg.value = 152U;

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
    msg.setTimeStamp(0.3135087926886204);
    msg.setSource(629U);
    msg.setSourceEntity(24U);
    msg.setDestination(64655U);
    msg.setDestinationEntity(181U);
    msg.id = 54U;
    msg.period = 1260528719U;
    msg.duty_cycle = 647841278U;

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
    msg.setTimeStamp(0.4621011221348357);
    msg.setSource(3120U);
    msg.setSourceEntity(93U);
    msg.setDestination(31818U);
    msg.setDestinationEntity(193U);
    msg.id = 161U;
    msg.period = 3583263285U;
    msg.duty_cycle = 1132545570U;

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
    msg.setTimeStamp(0.9939168342772231);
    msg.setSource(28172U);
    msg.setSourceEntity(33U);
    msg.setDestination(15498U);
    msg.setDestinationEntity(91U);
    msg.id = 16U;
    msg.period = 4010484190U;
    msg.duty_cycle = 3893842897U;

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
    msg.setTimeStamp(0.3540643331495049);
    msg.setSource(64355U);
    msg.setSourceEntity(215U);
    msg.setDestination(43311U);
    msg.setDestinationEntity(145U);
    msg.id = 83U;
    msg.period = 2849727128U;
    msg.duty_cycle = 3243734118U;

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
    msg.setTimeStamp(0.9100737912796105);
    msg.setSource(43062U);
    msg.setSourceEntity(90U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(116U);
    msg.id = 167U;
    msg.period = 2148716624U;
    msg.duty_cycle = 2480864261U;

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
    msg.setTimeStamp(0.4602194563351448);
    msg.setSource(31491U);
    msg.setSourceEntity(29U);
    msg.setDestination(23959U);
    msg.setDestinationEntity(45U);
    msg.id = 76U;
    msg.period = 1756727385U;
    msg.duty_cycle = 3134832446U;

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
    msg.setTimeStamp(0.7148338079382209);
    msg.setSource(8167U);
    msg.setSourceEntity(101U);
    msg.setDestination(35463U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.7062896342068924;
    msg.lon = 0.5269161522556357;
    msg.height = 0.8275709044088768;
    msg.x = 0.3846847755344638;
    msg.y = 0.40995770472183846;
    msg.z = 0.37141009258658686;
    msg.phi = 0.32848018121344746;
    msg.theta = 0.7133666683463826;
    msg.psi = 0.9592986840790931;
    msg.u = 0.739619735397735;
    msg.v = 0.09682720199015471;
    msg.w = 0.4876328895042531;
    msg.vx = 0.17529096477044526;
    msg.vy = 0.6874969400007456;
    msg.vz = 0.7295418141404522;
    msg.p = 0.49111171626705985;
    msg.q = 0.7769701894795545;
    msg.r = 0.8794188003647911;
    msg.depth = 0.9851025898294364;
    msg.alt = 0.12037678418621733;

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
    msg.setTimeStamp(0.8480241632907888);
    msg.setSource(38219U);
    msg.setSourceEntity(125U);
    msg.setDestination(4777U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.7692494087893252;
    msg.lon = 0.30236369012167486;
    msg.height = 0.974700406375013;
    msg.x = 0.2537349692615408;
    msg.y = 0.7759169946772148;
    msg.z = 0.5721613943488967;
    msg.phi = 0.060812296810470734;
    msg.theta = 0.7000527692500974;
    msg.psi = 0.16086149058096977;
    msg.u = 0.5717101599363718;
    msg.v = 0.730681715400709;
    msg.w = 0.009020111931844599;
    msg.vx = 0.8781726579555781;
    msg.vy = 0.9411383286414243;
    msg.vz = 0.2683746278539576;
    msg.p = 0.7257095932787359;
    msg.q = 0.3223481194819977;
    msg.r = 0.4431791005338914;
    msg.depth = 0.4246454699083144;
    msg.alt = 0.45872524308515417;

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
    msg.setTimeStamp(0.1819928009690014);
    msg.setSource(53050U);
    msg.setSourceEntity(9U);
    msg.setDestination(52580U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.08149127399658307;
    msg.lon = 0.8312862397442276;
    msg.height = 0.02845094048592367;
    msg.x = 0.8696565847599347;
    msg.y = 0.4176838066425028;
    msg.z = 0.3410071494734743;
    msg.phi = 0.8828568203559238;
    msg.theta = 0.7925307681481403;
    msg.psi = 0.2958145820676257;
    msg.u = 0.6608933710688759;
    msg.v = 0.5888319864035443;
    msg.w = 0.5546739590090741;
    msg.vx = 0.18714111493150898;
    msg.vy = 0.9962928155912513;
    msg.vz = 0.6761524228168502;
    msg.p = 0.9701391293208425;
    msg.q = 0.9081297719144453;
    msg.r = 0.013199092579454952;
    msg.depth = 0.029094636391232553;
    msg.alt = 0.4984652914373183;

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
    msg.setTimeStamp(0.8505853513388403);
    msg.setSource(14179U);
    msg.setSourceEntity(231U);
    msg.setDestination(53683U);
    msg.setDestinationEntity(148U);
    msg.x = 0.55905527555499;
    msg.y = 0.5013329431771302;
    msg.z = 0.994217975867847;

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
    msg.setTimeStamp(0.9640955645502978);
    msg.setSource(37584U);
    msg.setSourceEntity(143U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(103U);
    msg.x = 0.512752500695131;
    msg.y = 0.9893778841433086;
    msg.z = 0.8425469271429193;

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
    msg.setTimeStamp(0.5222235797195787);
    msg.setSource(3450U);
    msg.setSourceEntity(193U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(18U);
    msg.x = 0.5311208301620453;
    msg.y = 0.4084985302019538;
    msg.z = 0.8282292944229221;

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
    msg.setTimeStamp(0.1860622143182331);
    msg.setSource(4645U);
    msg.setSourceEntity(211U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(165U);
    msg.value = 0.36720312887496775;

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
    msg.setTimeStamp(0.01617477689736735);
    msg.setSource(13970U);
    msg.setSourceEntity(84U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(57U);
    msg.value = 0.5008691418418915;

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
    msg.setTimeStamp(0.750118801793627);
    msg.setSource(47863U);
    msg.setSourceEntity(160U);
    msg.setDestination(35647U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6485749268709626;

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
    msg.setTimeStamp(0.8126315157363201);
    msg.setSource(19511U);
    msg.setSourceEntity(113U);
    msg.setDestination(19283U);
    msg.setDestinationEntity(25U);
    msg.value = 0.4490100429714019;

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
    msg.setTimeStamp(0.8951240155654514);
    msg.setSource(13982U);
    msg.setSourceEntity(92U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5378783162112917;

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
    msg.setTimeStamp(0.5093936404861735);
    msg.setSource(10921U);
    msg.setSourceEntity(79U);
    msg.setDestination(59466U);
    msg.setDestinationEntity(111U);
    msg.value = 0.666218138117356;

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
    msg.setTimeStamp(0.2617631819394194);
    msg.setSource(59519U);
    msg.setSourceEntity(22U);
    msg.setDestination(17127U);
    msg.setDestinationEntity(148U);
    msg.x = 0.31975317249694546;
    msg.y = 0.29061345364820845;
    msg.z = 0.43607165691760674;
    msg.phi = 0.6833775794428261;
    msg.theta = 0.6377422540941409;
    msg.psi = 0.45915922725829883;
    msg.p = 0.014687600376411036;
    msg.q = 0.9963004734908144;
    msg.r = 0.6091507011154692;
    msg.u = 0.14368996153530866;
    msg.v = 0.13430460034836045;
    msg.w = 0.4920545668525894;
    msg.bias_psi = 0.2588671602644489;
    msg.bias_r = 0.3109594627455905;

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
    msg.setTimeStamp(0.11483891123307055);
    msg.setSource(20615U);
    msg.setSourceEntity(107U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(218U);
    msg.x = 0.7485456075830552;
    msg.y = 0.2574143506942739;
    msg.z = 0.4235455106777053;
    msg.phi = 0.8626547573015917;
    msg.theta = 0.5242011390735655;
    msg.psi = 0.22772939693271754;
    msg.p = 0.7707854159430896;
    msg.q = 0.7107226929743554;
    msg.r = 0.17358218550071625;
    msg.u = 0.857494391223304;
    msg.v = 0.40539471890177237;
    msg.w = 0.5772161620968904;
    msg.bias_psi = 0.8067716863752168;
    msg.bias_r = 0.31739923121761215;

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
    msg.setTimeStamp(0.48573472213705715);
    msg.setSource(61357U);
    msg.setSourceEntity(166U);
    msg.setDestination(24227U);
    msg.setDestinationEntity(62U);
    msg.x = 0.2553124974036173;
    msg.y = 0.2862808213263295;
    msg.z = 0.3534251762250823;
    msg.phi = 0.3957480454286235;
    msg.theta = 0.05806608300412719;
    msg.psi = 0.022450603251667367;
    msg.p = 0.7920813867991637;
    msg.q = 0.48354752864592554;
    msg.r = 0.48477721836788434;
    msg.u = 0.4908531345751297;
    msg.v = 0.16639047922956463;
    msg.w = 0.9837011773597627;
    msg.bias_psi = 0.06601831101202549;
    msg.bias_r = 0.3124318555716388;

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
    msg.setTimeStamp(0.2442391710708819);
    msg.setSource(57481U);
    msg.setSourceEntity(140U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(216U);
    msg.bias_psi = 0.8954858230747496;
    msg.bias_r = 0.4084211461101491;
    msg.cog = 0.541765001590304;
    msg.cyaw = 0.020417485296843174;
    msg.lbl_rej_level = 0.3857998410416922;
    msg.gps_rej_level = 0.6966034928524185;
    msg.custom_x = 0.21566254371146976;
    msg.custom_y = 0.9995589343779907;
    msg.custom_z = 0.2749299435475032;

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
    msg.setTimeStamp(0.6685958200802061);
    msg.setSource(1547U);
    msg.setSourceEntity(253U);
    msg.setDestination(38038U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.09548254587012195;
    msg.bias_r = 0.42500747769928704;
    msg.cog = 0.7839889858740933;
    msg.cyaw = 0.2775147554383969;
    msg.lbl_rej_level = 0.26437931409240145;
    msg.gps_rej_level = 0.30093903876713535;
    msg.custom_x = 0.847154785557902;
    msg.custom_y = 0.5290000084108586;
    msg.custom_z = 0.5935563735286342;

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
    msg.setTimeStamp(0.8251546592251003);
    msg.setSource(3067U);
    msg.setSourceEntity(119U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(169U);
    msg.bias_psi = 0.7785745695785738;
    msg.bias_r = 0.39513559021442635;
    msg.cog = 0.8238749379678708;
    msg.cyaw = 0.2752699393808419;
    msg.lbl_rej_level = 0.9831522765829911;
    msg.gps_rej_level = 0.2980989506484236;
    msg.custom_x = 0.06317811580020616;
    msg.custom_y = 0.32478821861702745;
    msg.custom_z = 0.01771252513380117;

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
    msg.setTimeStamp(0.8444819827294552);
    msg.setSource(59035U);
    msg.setSourceEntity(187U);
    msg.setDestination(37510U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.0583376675285473;
    msg.reason = 45U;

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
    msg.setTimeStamp(0.4737497755252601);
    msg.setSource(20715U);
    msg.setSourceEntity(206U);
    msg.setDestination(49446U);
    msg.setDestinationEntity(123U);
    msg.utc_time = 0.16117670921114635;
    msg.reason = 207U;

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
    msg.setTimeStamp(0.30957410600198987);
    msg.setSource(62377U);
    msg.setSourceEntity(252U);
    msg.setDestination(42514U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.14211902931254017;
    msg.reason = 2U;

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
    msg.setTimeStamp(0.23495471917665012);
    msg.setSource(29485U);
    msg.setSourceEntity(45U);
    msg.setDestination(37085U);
    msg.setDestinationEntity(123U);
    msg.id = 62U;
    msg.range = 0.21603153047961665;
    msg.acceptance = 27U;

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
    msg.setTimeStamp(0.08687645570737224);
    msg.setSource(53925U);
    msg.setSourceEntity(197U);
    msg.setDestination(33750U);
    msg.setDestinationEntity(23U);
    msg.id = 122U;
    msg.range = 0.6957867295283703;
    msg.acceptance = 190U;

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
    msg.setTimeStamp(0.969024473172663);
    msg.setSource(56252U);
    msg.setSourceEntity(211U);
    msg.setDestination(37994U);
    msg.setDestinationEntity(152U);
    msg.id = 4U;
    msg.range = 0.5019735075803115;
    msg.acceptance = 197U;

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
    msg.setTimeStamp(0.2917933015672479);
    msg.setSource(11747U);
    msg.setSourceEntity(243U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(5U);
    msg.type = 230U;
    msg.reason = 236U;
    msg.value = 0.826736531124981;
    msg.timestep = 0.6575033644769468;

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
    msg.setTimeStamp(0.10133425968214371);
    msg.setSource(26021U);
    msg.setSourceEntity(221U);
    msg.setDestination(40355U);
    msg.setDestinationEntity(230U);
    msg.type = 227U;
    msg.reason = 147U;
    msg.value = 0.45693649475832765;
    msg.timestep = 0.5340517640100332;

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
    msg.setTimeStamp(0.36974758455086254);
    msg.setSource(26893U);
    msg.setSourceEntity(29U);
    msg.setDestination(13229U);
    msg.setDestinationEntity(127U);
    msg.type = 38U;
    msg.reason = 41U;
    msg.value = 0.8935015265632421;
    msg.timestep = 0.5151230412652287;

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
    msg.setTimeStamp(0.7438141904136278);
    msg.setSource(22537U);
    msg.setSourceEntity(104U);
    msg.setDestination(29487U);
    msg.setDestinationEntity(154U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BDHTPOGVCPLDTUXLNRJTFZGBLZSBOZIWWXHEHFAEXNWNUVCRLPICHIEWCNRLUPSCAPWQSBELFDCRPRRIGYODHSCPCLHYBELZJLUWDQVOZZNQVVKJXSAVIEKERQSPGQJLEUZAYGXNKJYBUVAMFXXOSXATZZJJDHM");
    tmp_msg_0.lat = 0.5544741010132911;
    tmp_msg_0.lon = 0.5436955941746862;
    tmp_msg_0.depth = 0.402432825478916;
    tmp_msg_0.query_channel = 82U;
    tmp_msg_0.reply_channel = 4U;
    tmp_msg_0.transponder_delay = 248U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.17815144762100898;
    msg.y = 0.43982692967088577;
    msg.var_x = 0.06684711776685759;
    msg.var_y = 0.5860794540635299;
    msg.distance = 0.33243778110585875;

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
    msg.setTimeStamp(0.8507088526972795);
    msg.setSource(43548U);
    msg.setSourceEntity(61U);
    msg.setDestination(25939U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BECMRDAEXEHXPABVOHRGHUVUTZDJFNLBVEMIXIQWLJUGNBMGRRPNQWFXRANUWOQSKYUGHFJKJHHTILYCNIIDXUOTEPXQ");
    tmp_msg_0.lat = 0.8147350495866189;
    tmp_msg_0.lon = 0.8456380156146399;
    tmp_msg_0.depth = 0.5221320667233668;
    tmp_msg_0.query_channel = 116U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 108U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3083952359346632;
    msg.y = 0.46213150189876295;
    msg.var_x = 0.7134424504151413;
    msg.var_y = 0.2764303601875865;
    msg.distance = 0.013450854051080707;

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
    msg.setTimeStamp(0.613000939572844);
    msg.setSource(34829U);
    msg.setSourceEntity(92U);
    msg.setDestination(39754U);
    msg.setDestinationEntity(159U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TMKCTGWUOVFCTFHBGRSNDZURPYUWMNIVQPBENDSSZGMGRATKGCFNGYODELCLQEKKIHWLZHESGBAFRXSARKNYWXFSEASPPCSCIRYVDMFICGJEUEEYGUWMQDTPBXOPIMXEMLKMXUZNKDQRBUADQBYUDHLCJHQVKYTHETWIBWJRQTHKONCLUFQAOXVHXFFVZUZPIDYBZJWSZAXJZJNPMOGBABILTYYOIWFHXVZOQCIL");
    tmp_msg_0.lat = 0.5804064525362932;
    tmp_msg_0.lon = 0.7765281597486576;
    tmp_msg_0.depth = 0.22586078464559955;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 173U;
    tmp_msg_0.transponder_delay = 82U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5824839228446578;
    msg.y = 0.9984384613571204;
    msg.var_x = 0.5812683747960475;
    msg.var_y = 0.8189924344254397;
    msg.distance = 0.030310511005271712;

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
    msg.setTimeStamp(0.25437929919032976);
    msg.setSource(19684U);
    msg.setSourceEntity(206U);
    msg.setDestination(38332U);
    msg.setDestinationEntity(150U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.9964238470409166);
    msg.setSource(49251U);
    msg.setSourceEntity(98U);
    msg.setDestination(46442U);
    msg.setDestinationEntity(239U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.28816697246092127);
    msg.setSource(26538U);
    msg.setSourceEntity(37U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(219U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.42165103859245834);
    msg.setSource(45637U);
    msg.setSourceEntity(59U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(178U);
    msg.x = 0.7504795718869189;
    msg.y = 0.02723226874986784;
    msg.z = 0.5008169118924469;

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
    msg.setTimeStamp(0.08577451571348826);
    msg.setSource(55685U);
    msg.setSourceEntity(0U);
    msg.setDestination(52914U);
    msg.setDestinationEntity(105U);
    msg.x = 0.6846547395143259;
    msg.y = 0.9860972129585628;
    msg.z = 0.96150234098959;

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
    msg.setTimeStamp(0.49884408847547135);
    msg.setSource(34152U);
    msg.setSourceEntity(180U);
    msg.setDestination(20069U);
    msg.setDestinationEntity(131U);
    msg.x = 0.08225200580747871;
    msg.y = 0.8397129198578118;
    msg.z = 0.8776599643373926;

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
    msg.setTimeStamp(0.5865287760589171);
    msg.setSource(30639U);
    msg.setSourceEntity(112U);
    msg.setDestination(41774U);
    msg.setDestinationEntity(10U);
    msg.value = 0.25108729279445563;

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
    msg.setTimeStamp(0.23983847714848394);
    msg.setSource(48904U);
    msg.setSourceEntity(169U);
    msg.setDestination(32326U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8555874841811568;

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
    msg.setTimeStamp(0.9792328515694386);
    msg.setSource(8994U);
    msg.setSourceEntity(210U);
    msg.setDestination(30135U);
    msg.setDestinationEntity(37U);
    msg.value = 0.9273575208618966;

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
    msg.setTimeStamp(0.11702770980121124);
    msg.setSource(2307U);
    msg.setSourceEntity(204U);
    msg.setDestination(55873U);
    msg.setDestinationEntity(128U);
    msg.value = 0.5579054405291543;
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
    msg.setTimeStamp(0.6625743442484654);
    msg.setSource(58224U);
    msg.setSourceEntity(20U);
    msg.setDestination(38291U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8608594664276973;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.1354224079072558);
    msg.setSource(31613U);
    msg.setSourceEntity(77U);
    msg.setDestination(19001U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7596789776644528;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.11564171160122394);
    msg.setSource(26279U);
    msg.setSourceEntity(172U);
    msg.setDestination(25638U);
    msg.setDestinationEntity(140U);
    msg.value = 0.251435084398293;
    msg.speed_units = 48U;

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
    msg.setTimeStamp(0.12489291094371635);
    msg.setSource(13803U);
    msg.setSourceEntity(26U);
    msg.setDestination(65496U);
    msg.setDestinationEntity(92U);
    msg.value = 0.0188411696621843;
    msg.speed_units = 43U;

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
    msg.setTimeStamp(0.7602421334295811);
    msg.setSource(13321U);
    msg.setSourceEntity(33U);
    msg.setDestination(17579U);
    msg.setDestinationEntity(161U);
    msg.value = 0.1861717093749602;
    msg.speed_units = 69U;

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
    msg.setTimeStamp(0.23539120300674143);
    msg.setSource(17669U);
    msg.setSourceEntity(215U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8561425508797639;

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
    msg.setTimeStamp(0.07177344815578313);
    msg.setSource(33128U);
    msg.setSourceEntity(240U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5059551831907481;

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
    msg.setTimeStamp(0.13673443765680593);
    msg.setSource(37085U);
    msg.setSourceEntity(208U);
    msg.setDestination(49360U);
    msg.setDestinationEntity(236U);
    msg.value = 0.29171438700114993;

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
    msg.setTimeStamp(0.16777903539234962);
    msg.setSource(36092U);
    msg.setSourceEntity(241U);
    msg.setDestination(4268U);
    msg.setDestinationEntity(127U);
    msg.value = 0.7037916701028641;

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
    msg.setTimeStamp(0.5463091577016522);
    msg.setSource(7554U);
    msg.setSourceEntity(92U);
    msg.setDestination(50713U);
    msg.setDestinationEntity(205U);
    msg.value = 0.3839028719243519;

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
    msg.setTimeStamp(0.20830958022163593);
    msg.setSource(40793U);
    msg.setSourceEntity(126U);
    msg.setDestination(38051U);
    msg.setDestinationEntity(82U);
    msg.value = 0.28154941730836125;

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
    msg.setTimeStamp(0.69502746282759);
    msg.setSource(9897U);
    msg.setSourceEntity(181U);
    msg.setDestination(26514U);
    msg.setDestinationEntity(251U);
    msg.value = 0.29802527555070824;

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
    msg.setTimeStamp(0.14586146548836798);
    msg.setSource(16435U);
    msg.setSourceEntity(121U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(134U);
    msg.value = 0.1768984790074587;

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
    msg.setTimeStamp(0.31011844666547017);
    msg.setSource(20675U);
    msg.setSourceEntity(106U);
    msg.setDestination(34641U);
    msg.setDestinationEntity(114U);
    msg.value = 0.6837599448367875;

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
    msg.setTimeStamp(0.1532351561643005);
    msg.setSource(22215U);
    msg.setSourceEntity(34U);
    msg.setDestination(34871U);
    msg.setDestinationEntity(187U);
    msg.path_ref = 2998579611U;
    msg.start_lat = 0.7217764359637031;
    msg.start_lon = 0.12369100283062051;
    msg.start_z = 0.3001594440739408;
    msg.start_z_units = 126U;
    msg.end_lat = 0.16909902736645732;
    msg.end_lon = 0.6967776712539491;
    msg.end_z = 0.5758164752209002;
    msg.end_z_units = 102U;
    msg.speed = 0.06253072255729042;
    msg.speed_units = 167U;
    msg.lradius = 0.2879658563710199;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.8424942226571848);
    msg.setSource(31447U);
    msg.setSourceEntity(220U);
    msg.setDestination(12453U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 3889585714U;
    msg.start_lat = 0.2974229672578268;
    msg.start_lon = 0.245749770735886;
    msg.start_z = 0.3121057033755609;
    msg.start_z_units = 27U;
    msg.end_lat = 0.23442905731368635;
    msg.end_lon = 0.8554440824927779;
    msg.end_z = 0.6621053866147174;
    msg.end_z_units = 159U;
    msg.speed = 0.9198981894596057;
    msg.speed_units = 188U;
    msg.lradius = 0.6702006603476388;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.7004124267976596);
    msg.setSource(51775U);
    msg.setSourceEntity(56U);
    msg.setDestination(46249U);
    msg.setDestinationEntity(247U);
    msg.path_ref = 2736505806U;
    msg.start_lat = 0.5009625327377206;
    msg.start_lon = 0.058824856635696476;
    msg.start_z = 0.29133248146623814;
    msg.start_z_units = 63U;
    msg.end_lat = 0.4867729363382812;
    msg.end_lon = 0.43890484262365825;
    msg.end_z = 0.5527815468592292;
    msg.end_z_units = 170U;
    msg.speed = 0.5460002678802967;
    msg.speed_units = 9U;
    msg.lradius = 0.8305683523866326;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.16329692278823094);
    msg.setSource(6924U);
    msg.setSourceEntity(237U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(178U);
    msg.x = 0.5437293406528272;
    msg.y = 0.20292045435170825;
    msg.z = 0.726441138889457;
    msg.k = 0.9710920609425444;
    msg.m = 0.5583184437509535;
    msg.n = 0.1339663134596103;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.5324595112637254);
    msg.setSource(56588U);
    msg.setSourceEntity(107U);
    msg.setDestination(61703U);
    msg.setDestinationEntity(242U);
    msg.x = 0.6425584256525542;
    msg.y = 0.26277765734770586;
    msg.z = 0.8998183636957213;
    msg.k = 0.36146432821213104;
    msg.m = 0.015466616683742385;
    msg.n = 0.9682455514838029;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.8216443092516248);
    msg.setSource(60980U);
    msg.setSourceEntity(196U);
    msg.setDestination(4636U);
    msg.setDestinationEntity(58U);
    msg.x = 0.326994710394063;
    msg.y = 0.49602237369736646;
    msg.z = 0.8964830510290833;
    msg.k = 0.3629675180151839;
    msg.m = 0.003022223345113595;
    msg.n = 0.07868891436613856;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.9650554279174538);
    msg.setSource(35240U);
    msg.setSourceEntity(20U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(88U);
    msg.value = 0.6379041175411875;

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
    msg.setTimeStamp(0.6432281262614266);
    msg.setSource(54352U);
    msg.setSourceEntity(157U);
    msg.setDestination(7456U);
    msg.setDestinationEntity(129U);
    msg.value = 0.14430022030214917;

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
    msg.setTimeStamp(0.8009951340762733);
    msg.setSource(8313U);
    msg.setSourceEntity(92U);
    msg.setDestination(22640U);
    msg.setDestinationEntity(72U);
    msg.value = 0.4145566706561209;

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
    msg.setTimeStamp(0.21604099303525537);
    msg.setSource(30796U);
    msg.setSourceEntity(226U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(219U);
    msg.u = 0.942934161433646;
    msg.v = 0.7882152774350639;
    msg.w = 0.12205157160492064;
    msg.p = 0.21979200912709462;
    msg.q = 0.8599218020829393;
    msg.r = 0.7148231601279239;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.1207196210662832);
    msg.setSource(62920U);
    msg.setSourceEntity(23U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(54U);
    msg.u = 0.3672379130891368;
    msg.v = 0.5673177666651935;
    msg.w = 0.3658408869261933;
    msg.p = 0.015968687780952395;
    msg.q = 0.8700071089146691;
    msg.r = 0.11306410015739388;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.5137227266169432);
    msg.setSource(4347U);
    msg.setSourceEntity(45U);
    msg.setDestination(51678U);
    msg.setDestinationEntity(61U);
    msg.u = 0.7773423305423156;
    msg.v = 0.015410819050215796;
    msg.w = 0.10835985546953597;
    msg.p = 0.19074394190922417;
    msg.q = 0.8539045821995184;
    msg.r = 0.4451062010597663;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.3291902404969318);
    msg.setSource(37920U);
    msg.setSourceEntity(175U);
    msg.setDestination(28284U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 726674513U;
    msg.start_lat = 0.19160504868451989;
    msg.start_lon = 0.15236181527631787;
    msg.start_z = 0.6682968800597333;
    msg.start_z_units = 68U;
    msg.end_lat = 0.14899432451000094;
    msg.end_lon = 0.7526866422117363;
    msg.end_z = 0.5891818098283698;
    msg.end_z_units = 52U;
    msg.lradius = 0.41845657809250314;
    msg.flags = 118U;
    msg.x = 0.24275565749919148;
    msg.y = 0.1896464847800141;
    msg.z = 0.11249122848518012;
    msg.vx = 0.37576557124924226;
    msg.vy = 0.47045557268076743;
    msg.vz = 0.34764106467865763;
    msg.course_error = 0.051878441262078856;
    msg.eta = 780U;

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
    msg.setTimeStamp(0.23706469438417366);
    msg.setSource(39262U);
    msg.setSourceEntity(123U);
    msg.setDestination(51250U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 2152712323U;
    msg.start_lat = 0.8519079622383313;
    msg.start_lon = 0.7489413208969378;
    msg.start_z = 0.7225195578129232;
    msg.start_z_units = 216U;
    msg.end_lat = 0.11685430566519384;
    msg.end_lon = 0.8991887867225509;
    msg.end_z = 0.14166534078980186;
    msg.end_z_units = 46U;
    msg.lradius = 0.8821562412083168;
    msg.flags = 148U;
    msg.x = 0.0587413158541058;
    msg.y = 0.18705173370201955;
    msg.z = 0.658199091784011;
    msg.vx = 0.5020969020568311;
    msg.vy = 0.03264744458126434;
    msg.vz = 0.18568747186182177;
    msg.course_error = 0.4141633862217555;
    msg.eta = 53254U;

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
    msg.setTimeStamp(0.2726712665016936);
    msg.setSource(47123U);
    msg.setSourceEntity(172U);
    msg.setDestination(10861U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 2884379862U;
    msg.start_lat = 0.7724982890002163;
    msg.start_lon = 0.2553075328824973;
    msg.start_z = 0.24134428558454957;
    msg.start_z_units = 31U;
    msg.end_lat = 0.14719141891193588;
    msg.end_lon = 0.712284223234315;
    msg.end_z = 0.5594300433712914;
    msg.end_z_units = 100U;
    msg.lradius = 0.6909517345548022;
    msg.flags = 154U;
    msg.x = 0.7908670063113574;
    msg.y = 0.528703327487156;
    msg.z = 0.02356393612327823;
    msg.vx = 0.3009872991995549;
    msg.vy = 0.6936076876011688;
    msg.vz = 0.76209760636378;
    msg.course_error = 0.09860530875101592;
    msg.eta = 6629U;

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
    msg.setTimeStamp(0.20885453101327311);
    msg.setSource(5306U);
    msg.setSourceEntity(81U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(105U);
    msg.k = 0.5241598374236619;
    msg.m = 0.8532794230817228;
    msg.n = 0.9628502403513224;

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
    msg.setTimeStamp(0.27072732843032166);
    msg.setSource(41459U);
    msg.setSourceEntity(73U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(211U);
    msg.k = 0.33430650349604574;
    msg.m = 0.1442324280448587;
    msg.n = 0.46062693594009674;

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
    msg.setTimeStamp(0.46299741526394234);
    msg.setSource(50666U);
    msg.setSourceEntity(165U);
    msg.setDestination(44913U);
    msg.setDestinationEntity(97U);
    msg.k = 0.7152258120883116;
    msg.m = 0.9511939448043125;
    msg.n = 0.5022702847828063;

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
    msg.setTimeStamp(0.08072866568321391);
    msg.setSource(12547U);
    msg.setSourceEntity(10U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(151U);
    msg.p = 0.15864058132294212;
    msg.i = 0.8022387882705451;
    msg.d = 0.7674873540434878;
    msg.a = 0.703744872883811;

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
    msg.setTimeStamp(0.16559203647313092);
    msg.setSource(41627U);
    msg.setSourceEntity(181U);
    msg.setDestination(30989U);
    msg.setDestinationEntity(179U);
    msg.p = 0.5672431709048487;
    msg.i = 0.006277274111564868;
    msg.d = 0.8836441299661426;
    msg.a = 0.1870033297658137;

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
    msg.setTimeStamp(0.26882900616037697);
    msg.setSource(29729U);
    msg.setSourceEntity(220U);
    msg.setDestination(11006U);
    msg.setDestinationEntity(72U);
    msg.p = 0.28412421839492596;
    msg.i = 0.06935615857183508;
    msg.d = 0.8738621680115055;
    msg.a = 0.891127431418472;

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
    msg.setTimeStamp(0.1600889792088379);
    msg.setSource(45629U);
    msg.setSourceEntity(246U);
    msg.setDestination(36931U);
    msg.setDestinationEntity(64U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.6137218448600179);
    msg.setSource(846U);
    msg.setSourceEntity(129U);
    msg.setDestination(55153U);
    msg.setDestinationEntity(178U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.6413631350707221);
    msg.setSource(19675U);
    msg.setSourceEntity(65U);
    msg.setDestination(26536U);
    msg.setDestinationEntity(157U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.13138598230976817);
    msg.setSource(42587U);
    msg.setSourceEntity(174U);
    msg.setDestination(46213U);
    msg.setDestinationEntity(248U);
    msg.timeout = 42230U;
    msg.lat = 0.25839278468989557;
    msg.lon = 0.05009118670470514;
    msg.z = 0.672973613662219;
    msg.z_units = 56U;
    msg.speed = 0.01242063011594674;
    msg.speed_units = 89U;
    msg.roll = 0.6105424605292245;
    msg.pitch = 0.9486718206958868;
    msg.yaw = 0.653270386011988;
    msg.custom.assign("VMWIAXOJSXDFGTTMYTGOWWKTRUVDLOELKZWNHSNZELRTORTNZUNNHMCDJCHFJXRPKGVHVURTQDCSV");

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
    msg.setTimeStamp(0.10838340691949933);
    msg.setSource(52893U);
    msg.setSourceEntity(86U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(109U);
    msg.timeout = 36049U;
    msg.lat = 0.6585937418538368;
    msg.lon = 0.531431009293689;
    msg.z = 0.5895026235055201;
    msg.z_units = 17U;
    msg.speed = 0.714612856402564;
    msg.speed_units = 48U;
    msg.roll = 0.16285417803588498;
    msg.pitch = 0.7712160717741814;
    msg.yaw = 0.5839826216022427;
    msg.custom.assign("VMITBTMAPXCNFCVHRHZVXHWIMOXLFZRCYFRIPIWJGFSYZCMTUUKZSIBPQFJDUMGBVSY");

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
    msg.setTimeStamp(0.5808739014344437);
    msg.setSource(13889U);
    msg.setSourceEntity(183U);
    msg.setDestination(60954U);
    msg.setDestinationEntity(113U);
    msg.timeout = 11587U;
    msg.lat = 0.4200416625370911;
    msg.lon = 0.8394106594251902;
    msg.z = 0.9789819046403655;
    msg.z_units = 57U;
    msg.speed = 0.7032768003579846;
    msg.speed_units = 71U;
    msg.roll = 0.44770717537456794;
    msg.pitch = 0.9146878584144742;
    msg.yaw = 0.19425408691869028;
    msg.custom.assign("VBIJKXCDOBYRCBYHDHZOSFRKEJTGPCJWFMUIRNPTEKPNMFBQTSLDDKHSDNSCZFMWVVQTKQWYEDQAYTCUBYHWQPYQQPSVICIBMTHJRWULYMJXQZMPPNEHFZGGYGHNJUVTEPXWUOOSRTJGOFALLRBIOVXOHRIAXDKJHDMZLBWKCLXXENHFKDNQOCEJAEPRIGGLGDSUUSEMWBITBXAYNGFSQFRKVUZZWVEAAJYILUALAM");

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
    msg.setTimeStamp(0.9993446081353636);
    msg.setSource(49287U);
    msg.setSourceEntity(155U);
    msg.setDestination(62905U);
    msg.setDestinationEntity(175U);
    msg.timeout = 6898U;
    msg.lat = 0.5863040945893994;
    msg.lon = 0.30667953744514787;
    msg.z = 0.20607539306689382;
    msg.z_units = 23U;
    msg.speed = 0.15131970742023626;
    msg.speed_units = 27U;
    msg.duration = 52555U;
    msg.radius = 0.7065770865798502;
    msg.flags = 176U;
    msg.custom.assign("PKMYHWZTOBQABRNFPBQTGNBJBGEQJMTIAIHMWSCWXDRBDZYFOZHCRNJOPGXWXYOTOHVBDXZYSVVDFA");

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
    msg.setTimeStamp(0.46275237411071524);
    msg.setSource(20032U);
    msg.setSourceEntity(242U);
    msg.setDestination(51109U);
    msg.setDestinationEntity(107U);
    msg.timeout = 29215U;
    msg.lat = 0.5934977117077186;
    msg.lon = 0.03354424370902043;
    msg.z = 0.5004814805648372;
    msg.z_units = 178U;
    msg.speed = 0.011508520166561786;
    msg.speed_units = 144U;
    msg.duration = 9562U;
    msg.radius = 0.08484324955935185;
    msg.flags = 135U;
    msg.custom.assign("MPEMQRQNYLOYYOFTJXCPTWVTWZFKHTVKMPIRZRVUBGADJYEKRSDUIIXZXNHGEFELHDUWRYCBTRPLHVOPUNSRHPMCWMZCUYKIVDUZNGWTQVBVBUOAXUTJPTTKXAIVNODCCQSYKOAGBLYAFBLSICOYXFIMSEUHBJWXKDPALSDAZSGBCRRIQAIFJWELTIZLMXQMBHB");

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
    msg.setTimeStamp(0.023896210820919306);
    msg.setSource(49431U);
    msg.setSourceEntity(85U);
    msg.setDestination(2860U);
    msg.setDestinationEntity(219U);
    msg.timeout = 52499U;
    msg.lat = 0.979852285245527;
    msg.lon = 0.7326536767943875;
    msg.z = 0.7038891999204369;
    msg.z_units = 162U;
    msg.speed = 0.7408706085246034;
    msg.speed_units = 123U;
    msg.duration = 64920U;
    msg.radius = 0.7611232057155616;
    msg.flags = 154U;
    msg.custom.assign("GVGIPRDGFTZKAGARJCUTKWTKJOEQDIWWSQSBVDPUVABFVRKXUPUOOFDWENXSTRYCKZQIMXZNVEIXNKUTRBXNMSVBHSFLLPKLCENSOEDWCHPWDYKBIYPNAPJKYEFMWAGZWVGGIQYWZYTGUNRDOUXQJHMALLCMUTIYBCFKGOBNHDXSXLAMJTJVRZIPLQEVDDBOQMEYATABGJNFCWXHRMJYOSZRHLQPMRHSIO");

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
    msg.setTimeStamp(0.012317854891460867);
    msg.setSource(27227U);
    msg.setSourceEntity(193U);
    msg.setDestination(39182U);
    msg.setDestinationEntity(165U);
    msg.custom.assign("NHAQRXXQWDHOKRFMOIDKTXBNPEHBQMXASGNNBJXSSUVWZUCGHWOFLKHEBCFWSJLCPXKJQOAYLFDJLVJSMIUKYTMOTPEREDNIMUGVKQWZEKBFNHYCNHITUHXIAFZCOFSMIJEZTIRYMMALZFOLBHGACVEDXCPUPKROOTVNZRPVQKPPCLZPSRVUTEGQAJWJGYEQTLTGBSNXLIMATDVI");

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
    msg.setTimeStamp(0.11595018138931523);
    msg.setSource(11514U);
    msg.setSourceEntity(49U);
    msg.setDestination(48585U);
    msg.setDestinationEntity(127U);
    msg.custom.assign("RBBKBYTZQKEZESKHFUETVHKIWTAWWTNVQEFWVHLAOWGJZQIOXRYCUMUNPNOXMYCYMSHLCSMXEZUGBDKPFPTYTXCGQRLTWXONMPHRSROACVFAKQPQRVLDHMIHIJKGUDSFXSVITOUEJEQASHBFKDOPKKAIQYSCJEXLAFDTRDSPVIYRJQXGNBYQLGEMMMZUTGVHUAPJWCFBNBNVPNLCGGBBARIOIWJENDC");

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
    msg.setTimeStamp(0.65202580392534);
    msg.setSource(39425U);
    msg.setSourceEntity(124U);
    msg.setDestination(62784U);
    msg.setDestinationEntity(83U);
    msg.custom.assign("PLCXRBEKDJVCFXIBUEISUOJFKWAKBAUGYHUOAYHJHQUMGFTMZSIBDEVZOHVQUPOMJLLONGNDVADQJLFWRGUWGPFNCEJBTOPJWKLPQBXSUZPOHXDRYAFFFQZIEBNCULZYSFOHVIQBIEPLCAEWXCPNLSHVVVXZZBAPRB");

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
    msg.setTimeStamp(0.643773493848195);
    msg.setSource(46763U);
    msg.setSourceEntity(114U);
    msg.setDestination(49543U);
    msg.setDestinationEntity(192U);
    msg.timeout = 18346U;
    msg.lat = 0.3923580661952306;
    msg.lon = 0.97719812512432;
    msg.z = 0.8886631679400666;
    msg.z_units = 184U;
    msg.duration = 12066U;
    msg.speed = 0.10672146595766074;
    msg.speed_units = 120U;
    msg.type = 191U;
    msg.radius = 0.20869605548373005;
    msg.length = 0.5967432679294631;
    msg.bearing = 0.3569848945447577;
    msg.direction = 93U;
    msg.custom.assign("LHTJRRMDCBWYWJGDCGG");

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
    msg.setTimeStamp(0.2037345028078602);
    msg.setSource(54499U);
    msg.setSourceEntity(250U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(190U);
    msg.timeout = 46951U;
    msg.lat = 0.8564828015001564;
    msg.lon = 0.24402817973902224;
    msg.z = 0.32717827029292257;
    msg.z_units = 35U;
    msg.duration = 54792U;
    msg.speed = 0.4754707561010625;
    msg.speed_units = 3U;
    msg.type = 56U;
    msg.radius = 0.4773538013516798;
    msg.length = 0.027769487973929197;
    msg.bearing = 0.22707114201140188;
    msg.direction = 179U;
    msg.custom.assign("TEECDHJZZUINTOFPOMRJFSCVGLUNJWUYRNMEPEHSOLJYYEBLTDIACWQUKYCYZILHKSJDGVYJHNZVFDTLMQSHRLRPGNXMHV");

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
    msg.setTimeStamp(0.16442000083424257);
    msg.setSource(50088U);
    msg.setSourceEntity(39U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(177U);
    msg.timeout = 12600U;
    msg.lat = 0.2572979039604578;
    msg.lon = 0.8067815385900958;
    msg.z = 0.6250844473698762;
    msg.z_units = 157U;
    msg.duration = 51102U;
    msg.speed = 0.6165602658154626;
    msg.speed_units = 132U;
    msg.type = 165U;
    msg.radius = 0.8501480935914018;
    msg.length = 0.7851289265192241;
    msg.bearing = 0.29144900089818637;
    msg.direction = 55U;
    msg.custom.assign("QVGQMNRNYMFLAZBBBDWABBDXFESPKPCYIJXHPLSDIJXIWUCLFJSZNXZTZFOAKONGGIRPNGSWPHFOLOTTJMKDCHWZRCHKSOVBOYYZUZJDCGQGTOWAMSCZUKYNEEBPZAQPURRTVYJOXLCXHWQTGAPTPEHVHXHUXTIUKISERYJTCRVSEIDSQADANLKMWUJXDVRMWPLEYEONO");

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
    msg.setTimeStamp(0.4801729577277971);
    msg.setSource(26407U);
    msg.setSourceEntity(31U);
    msg.setDestination(62616U);
    msg.setDestinationEntity(246U);
    msg.duration = 24533U;
    msg.custom.assign("CLFAOTJSAJWSKGYHMBAUMYHGHLOCBPCBUNVYVYUMRRJRPMZXVUIXJFOXTEJIBSOHNAWZLRFTHBPDHDBGERSXCGMVWGZTRRWMMWBDVGPCHKOFLEEXBTGQQIQLPNXXZRBPNQYYQCKXYTOLETEWRZRADCJWDGFTUDIEUMLSWZKEY");

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
    msg.setTimeStamp(0.6439767067368186);
    msg.setSource(11639U);
    msg.setSourceEntity(78U);
    msg.setDestination(34067U);
    msg.setDestinationEntity(116U);
    msg.duration = 59330U;
    msg.custom.assign("FBCNQOSTDZXMGSPJTRJGUECJEJQWEXCCBVPHMNNIPCALBVEUZLRIULIJFBSYRRSMZGUAWIVUUZVOUJEFVNOYHDNOKMYPIWGCBZDVPSPQILBBOIYWGZVGDWUSDFHFXRLMGHSLOLFMHTXROYFMXFIJERYAKMWKFHFROYTKYSVJAWQWCULUXICJDDDTKNEPXAACYKHAHBHWKQNCLLEQKGEITRPTQBWNNQZEQAAXXAGOZXJQNOYTTDVPSRMZTBG");

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
    msg.setTimeStamp(0.2606647082851269);
    msg.setSource(57804U);
    msg.setSourceEntity(110U);
    msg.setDestination(512U);
    msg.setDestinationEntity(192U);
    msg.duration = 55906U;
    msg.custom.assign("EFVKPQUDNXZCDOYULKNHIHJZQYFWKPZDWGDAETIGMIPTOMKGHUJCLMWQISBLRCRNXVSVITUXFLOAHKLKDUYZGMEGDHDGNYJESXVCRCNYTEKIQEWSFWWSAOBIFALAUFMTYMSXCGBLROPMJRQKRPGFDSORIQPBPBAWFAPCKQXYINJDXHZRCLMCZBNQYQQDGHPHIRSJG");

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
    msg.setTimeStamp(0.139482626225941);
    msg.setSource(47040U);
    msg.setSourceEntity(17U);
    msg.setDestination(61347U);
    msg.setDestinationEntity(178U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.4631053141027267;
    msg.control.set(tmp_msg_0);
    msg.duration = 36891U;
    msg.custom.assign("LJNKOKAVGFFAVDGBLMWCHSVNJLPDQYACCIAFTIUWKOIKDAS");

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
    msg.setTimeStamp(0.8773595786671147);
    msg.setSource(11078U);
    msg.setSourceEntity(86U);
    msg.setDestination(27766U);
    msg.setDestinationEntity(74U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3814785093U;
    tmp_msg_0.start_lat = 0.15139008474237903;
    tmp_msg_0.start_lon = 0.42687145593116926;
    tmp_msg_0.start_z = 0.5682305667553345;
    tmp_msg_0.start_z_units = 14U;
    tmp_msg_0.end_lat = 0.5067213788970568;
    tmp_msg_0.end_lon = 0.7951664855539327;
    tmp_msg_0.end_z = 0.069944731489742;
    tmp_msg_0.end_z_units = 140U;
    tmp_msg_0.speed = 0.08036199098400121;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.lradius = 0.32740004392832145;
    tmp_msg_0.flags = 202U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60066U;
    msg.custom.assign("RUFYFCCMPYSBOFDPKJOTCQHTZBYDOXVVCLRJDLONTSWPXYIJJNTAYPCBIWNISFTCSCFDAAUBLTWELUQGQMEFGSIFIPBGE");

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
    msg.setTimeStamp(0.9293072291343267);
    msg.setSource(30516U);
    msg.setSourceEntity(71U);
    msg.setDestination(2249U);
    msg.setDestinationEntity(167U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8898712582199109;
    tmp_msg_0.speed_units = 44U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12858U;
    msg.custom.assign("ZCCIWSFYWZIQRLUBSQEMBWDFLZJMTVOSUAEARDRVFKHKOAXDTTNTFDUCGNSQBPVAWJVNKNJASNESZJEXLZPDCVCOFTMLCEWJBVNQRCOJIIKZYPUXAWQXIQGERCXZDDUGZDXAPQQHYKNHPNLVJZBODGKSNRZVKIXXAHESUYKPMSLFEVIPBUTWOOYGTLXGUDIMRIJHUFYLROLHYEYEHFFVNM");

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
    msg.setTimeStamp(0.7138910776410596);
    msg.setSource(15046U);
    msg.setSourceEntity(220U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(242U);
    msg.timeout = 53254U;
    msg.lat = 0.6264831782124479;
    msg.lon = 0.9334437354716792;
    msg.z = 0.038668586644673764;
    msg.z_units = 102U;
    msg.speed = 0.5922907518500657;
    msg.speed_units = 167U;
    msg.bearing = 0.39005350950663475;
    msg.cross_angle = 0.2383124803055745;
    msg.width = 0.20120749137447658;
    msg.length = 0.6549961170478744;
    msg.hstep = 0.6978905632775083;
    msg.coff = 39U;
    msg.alternation = 125U;
    msg.flags = 223U;
    msg.custom.assign("VAWGBWTANQPTEMITOQMXFWQFWKBAGEVHZKVMNWBUVAZMFJJVPSTOLGPRJBVREPGURTOMAHCSCLRHZYCCJCZQYLDEQTEBFCGAPMFIQXHDPLAOGVYUUINMIPDLFRMOFXUYCHYRPWKQEOZZQLEJAGMYIDCNRUXQDYGBWYKCROONKZIIKBUVHHSXKDINKRWXOWLVFYKXMDDADOVBLBTXBHUSYZLKTZDSFSFISUNJ");

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
    msg.setTimeStamp(0.4747121233479502);
    msg.setSource(14361U);
    msg.setSourceEntity(88U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(45U);
    msg.timeout = 57331U;
    msg.lat = 0.47391031254872584;
    msg.lon = 0.32590376287895406;
    msg.z = 0.3762272794909518;
    msg.z_units = 150U;
    msg.speed = 0.5874846099331609;
    msg.speed_units = 108U;
    msg.bearing = 0.8639185088940375;
    msg.cross_angle = 0.14845598766717505;
    msg.width = 0.26287182410165544;
    msg.length = 0.3113791022627176;
    msg.hstep = 0.40576657420827267;
    msg.coff = 22U;
    msg.alternation = 210U;
    msg.flags = 140U;
    msg.custom.assign("ATVUCJBKIDXARUTMGWOJBSGDYQWIVUNPNAPXVESPIJQPQFXDDQFFGXDCXJCFEFBCSXLHTEZWLQHGPUNAUKCVZIBORIOJRZXDQNIZBWJEXJUMWMSCBFQYONSHWCKQBMRKHYLBVTLMCAGTFELZGQLMYWUAVMGRAANYNQS");

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
    msg.setTimeStamp(0.8819108404982992);
    msg.setSource(64139U);
    msg.setSourceEntity(209U);
    msg.setDestination(18036U);
    msg.setDestinationEntity(189U);
    msg.timeout = 60240U;
    msg.lat = 0.8711649474433109;
    msg.lon = 0.5956182143685222;
    msg.z = 0.7574995914461293;
    msg.z_units = 112U;
    msg.speed = 0.024758040012165528;
    msg.speed_units = 97U;
    msg.bearing = 0.9997645151305763;
    msg.cross_angle = 0.7658930157416544;
    msg.width = 0.965417831385015;
    msg.length = 0.5044998482271036;
    msg.hstep = 0.05934557626857606;
    msg.coff = 145U;
    msg.alternation = 158U;
    msg.flags = 198U;
    msg.custom.assign("TAAYFJVLGUWJSYNAZUJPVHDJKXTUKMTDWDMKPSLNMRFCWEBCXBIFGJDQCQERBXZHSCIKMGUYFYUFOJBEOFOPRPQCRPJAZAOSCEGKTSWSBCOLHJRSRPOEUVLDLOHXNTJIDZYVPBAXHTAVVGFIWTHEDXNYQWUNKGYXEPCZKMEGLKMEBKPBQFOUJRMNWLNQEVTWZULNKRZAXNBWBIXGDPCGVIVGTDLDAYZNZ");

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
    msg.setTimeStamp(0.8637524884821032);
    msg.setSource(14898U);
    msg.setSourceEntity(183U);
    msg.setDestination(63283U);
    msg.setDestinationEntity(224U);
    msg.timeout = 7569U;
    msg.lat = 0.6826797382779459;
    msg.lon = 0.40202721623559967;
    msg.z = 0.12318210111719496;
    msg.z_units = 15U;
    msg.speed = 0.7107957441933133;
    msg.speed_units = 138U;
    msg.custom.assign("YETLDMRGVGVUZAVH");

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
    msg.setTimeStamp(0.11856089930140601);
    msg.setSource(41868U);
    msg.setSourceEntity(174U);
    msg.setDestination(56691U);
    msg.setDestinationEntity(113U);
    msg.timeout = 4267U;
    msg.lat = 0.779529894029253;
    msg.lon = 0.6264150322442587;
    msg.z = 0.579936656026678;
    msg.z_units = 82U;
    msg.speed = 0.277948556428703;
    msg.speed_units = 163U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.04763625816822681;
    tmp_msg_0.y = 0.9737439144345287;
    tmp_msg_0.z = 0.5919766986080045;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LTMXPDANZMGGOMVPKFRQWOYCKLHAFVCJRDWGKOAFUYPWASOIOXTRB");

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
    msg.setTimeStamp(0.35314592893395824);
    msg.setSource(53497U);
    msg.setSourceEntity(164U);
    msg.setDestination(10159U);
    msg.setDestinationEntity(38U);
    msg.timeout = 24099U;
    msg.lat = 0.778346351519813;
    msg.lon = 0.5932522022936684;
    msg.z = 0.21452240082823326;
    msg.z_units = 110U;
    msg.speed = 0.970963922856452;
    msg.speed_units = 174U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4032492858892426;
    tmp_msg_0.y = 0.5090065084183774;
    tmp_msg_0.z = 0.3895676228475151;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VKYDXJACQMLTDTQVRDHGMVMYBRBMNLTOFVYCRPEHRHQPYSFNHUMJMAFRKQVXQGILSFIENUJ");

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
    msg.setTimeStamp(0.9684368347275528);
    msg.setSource(36145U);
    msg.setSourceEntity(180U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(157U);
    msg.x = 0.7532255371196618;
    msg.y = 0.8591741463864175;
    msg.z = 0.4926272695495001;

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
    msg.setTimeStamp(0.7802456509919005);
    msg.setSource(57509U);
    msg.setSourceEntity(229U);
    msg.setDestination(49441U);
    msg.setDestinationEntity(166U);
    msg.x = 0.11572768396083333;
    msg.y = 0.41612402861751074;
    msg.z = 0.5802342023885293;

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
    msg.setTimeStamp(0.32418023026081966);
    msg.setSource(55664U);
    msg.setSourceEntity(42U);
    msg.setDestination(4401U);
    msg.setDestinationEntity(171U);
    msg.x = 0.13055449194535518;
    msg.y = 0.5244006423946946;
    msg.z = 0.3338769551807038;

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
    msg.setTimeStamp(0.24658965464085347);
    msg.setSource(18200U);
    msg.setSourceEntity(36U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(186U);
    msg.timeout = 13856U;
    msg.lat = 0.7796854393000627;
    msg.lon = 0.5775445934208138;
    msg.z = 0.7449491554726033;
    msg.z_units = 123U;
    msg.amplitude = 0.9069436463024176;
    msg.pitch = 0.8107841558405946;
    msg.speed = 0.97105687290593;
    msg.speed_units = 212U;
    msg.custom.assign("VQQMWSAPFYJVJUECFXKHSSXRZOZAZWWAUEFYLBVPJORTCXQCDAIYQWPNYWLMUIMPUKNKLJLSSJZXTGDVGBHQXGDVFGIHDTNLPDKMUELDOXKYFBITNGJHZCNYZARUQQWSRNHBWXZUSQPB");

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
    msg.setTimeStamp(0.4254722321710096);
    msg.setSource(30784U);
    msg.setSourceEntity(6U);
    msg.setDestination(39777U);
    msg.setDestinationEntity(27U);
    msg.timeout = 16121U;
    msg.lat = 0.11292499982573045;
    msg.lon = 0.6305152510069644;
    msg.z = 0.44833773722624415;
    msg.z_units = 48U;
    msg.amplitude = 0.1799894491673273;
    msg.pitch = 0.6025231381067055;
    msg.speed = 0.33935914705216563;
    msg.speed_units = 206U;
    msg.custom.assign("PEFHQVCGAVPGHDUFDNQRUORALZRZDXNOMBOHDVGWBVGXVAAXEQCHOPUYBNNLCEQYQDWOHIYKWMUGRXWYSYKULGANHTFICJTJGUFVEEMFMLJHFTTZREPZMWPOLKCDAPRSEIYWQIINEZSNBKLDYUJIRNCVXFPGFQBTZSDQCYEKLHOVXXRJIYBQXZBFKUOAHKMS");

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
    msg.setTimeStamp(0.09598201062357092);
    msg.setSource(792U);
    msg.setSourceEntity(78U);
    msg.setDestination(3052U);
    msg.setDestinationEntity(210U);
    msg.timeout = 7909U;
    msg.lat = 0.44897533221708685;
    msg.lon = 0.08690257802831658;
    msg.z = 0.10794280352126118;
    msg.z_units = 88U;
    msg.amplitude = 0.790818847033583;
    msg.pitch = 0.17621552931828033;
    msg.speed = 0.7940073909735463;
    msg.speed_units = 10U;
    msg.custom.assign("KUXYVATENGXECDWYNFYZKREWFKNBPWNAGJMXOLRJHOQPMIJKDQIISAHUGVLVVYNXWLCNRVBANMFSEUMDIIHRODZUEAFOUBINUYDVQUTQUTYGWKIPQCKWZZAKLJQZFHLJISAXIJZAUS");

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
    msg.setTimeStamp(0.47301006583693006);
    msg.setSource(19737U);
    msg.setSourceEntity(154U);
    msg.setDestination(22931U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.3362557260382393);
    msg.setSource(33842U);
    msg.setSourceEntity(231U);
    msg.setDestination(34739U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.04954785032578868);
    msg.setSource(56811U);
    msg.setSourceEntity(128U);
    msg.setDestination(50672U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.17783643268726168);
    msg.setSource(60200U);
    msg.setSourceEntity(72U);
    msg.setDestination(38743U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.8389772530041547;
    msg.lon = 0.15582813081279856;
    msg.z = 0.32458824146117693;
    msg.z_units = 193U;
    msg.radius = 0.4592632329341031;
    msg.duration = 51886U;
    msg.speed = 0.12389327469697375;
    msg.speed_units = 235U;
    msg.custom.assign("MESIETYZVYGHNLYSHOEPVUGIZOB");

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
    msg.setTimeStamp(0.5622118465509337);
    msg.setSource(44894U);
    msg.setSourceEntity(199U);
    msg.setDestination(51537U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.517943878218364;
    msg.lon = 0.7115119688082249;
    msg.z = 0.7264798611635269;
    msg.z_units = 14U;
    msg.radius = 0.1420585933784151;
    msg.duration = 53105U;
    msg.speed = 0.05751394148534761;
    msg.speed_units = 176U;
    msg.custom.assign("YONYSKTNETXZASMKCMBBU");

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
    msg.setTimeStamp(0.38881949843595676);
    msg.setSource(18601U);
    msg.setSourceEntity(97U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.05415463006001364;
    msg.lon = 0.7624574676042891;
    msg.z = 0.2893363772931383;
    msg.z_units = 84U;
    msg.radius = 0.2256398151220962;
    msg.duration = 65311U;
    msg.speed = 0.44889992345794294;
    msg.speed_units = 99U;
    msg.custom.assign("CMABLROSZUEGRGYKNDIITTJAPKCPRJEWGGKCYPVAHSBOECPJWQQVHULMJGKBAYZLUUUJLAZYSBGKPLRAVZNQTFXOTYAOMFWBQKGBFERIOYOIJBSSYBXZRTQZHCXTAVHHBZQOMVDAHPCJNCCXIMFUUVTDSVPEQKYWAQGSIMIWZEIBINWEUCMGJ");

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
    msg.setTimeStamp(0.5878593095073632);
    msg.setSource(57528U);
    msg.setSourceEntity(133U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(1U);
    msg.timeout = 18443U;
    msg.flags = 34U;
    msg.lat = 0.011655557591419452;
    msg.lon = 0.5227434557856595;
    msg.start_z = 0.3372281628321643;
    msg.start_z_units = 234U;
    msg.end_z = 0.29190497742568666;
    msg.end_z_units = 163U;
    msg.radius = 0.7783801375272966;
    msg.speed = 0.797760526171233;
    msg.speed_units = 227U;
    msg.custom.assign("MPTMGHOYLLYKUIIHZUUANNCKWGQCEAFOXUILMCROKJOGCQUBOHVEMBWKAPQEBOJREAHAPKLFYCPLOJRLMSJXLYPVPIDOIJZDLEKUGWZFSDSYSQX");

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
    msg.setTimeStamp(0.6012207807551868);
    msg.setSource(56710U);
    msg.setSourceEntity(181U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(247U);
    msg.timeout = 42642U;
    msg.flags = 86U;
    msg.lat = 0.04248819589023689;
    msg.lon = 0.6558341972608114;
    msg.start_z = 0.31608344265430954;
    msg.start_z_units = 136U;
    msg.end_z = 0.11227358318937375;
    msg.end_z_units = 233U;
    msg.radius = 0.32107605146398777;
    msg.speed = 0.39328136649324397;
    msg.speed_units = 46U;
    msg.custom.assign("QJXJCBTXNHUZNLZMVEPWPUYEVPKQKHTHKZRWOJITWDREPEALYWYEAWKLKJEWIZELQVVCGUIHORBUKTGRNEFRIZADUFUSGUDDONZTBQIJSPNJBTOSXRGRPSSFZDYCCIHLYTIS");

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
    msg.setTimeStamp(0.08644611519847045);
    msg.setSource(2976U);
    msg.setSourceEntity(38U);
    msg.setDestination(60897U);
    msg.setDestinationEntity(127U);
    msg.timeout = 62421U;
    msg.flags = 128U;
    msg.lat = 0.4038104629507582;
    msg.lon = 0.07269032209418969;
    msg.start_z = 0.7842736961519226;
    msg.start_z_units = 211U;
    msg.end_z = 0.09107522558763714;
    msg.end_z_units = 56U;
    msg.radius = 0.5166748294378483;
    msg.speed = 0.6782077391661113;
    msg.speed_units = 239U;
    msg.custom.assign("TAHDBWFOENACDMBDEONILOBGTNFJUXQJDPHYNDARTRZUKKNPIQQYLEGQXFGRTYZLMSRWWUBYGZWUFQIZHRBXWLTCPFZKIQTDOIAZPZAMLBVTOCJOVOLPTZCSAIVHUHNWFMJGKSZMNBYVJJOJUHISQGBADCWUSMKOSIVRXXAKJHKBVCABLDPEEZXNYGUYWEIVUJPFKHRPXRSQGSNLYGDXQCACWYKIWMSNE");

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
    msg.setTimeStamp(0.03960734928357079);
    msg.setSource(63983U);
    msg.setSourceEntity(156U);
    msg.setDestination(41197U);
    msg.setDestinationEntity(175U);
    msg.timeout = 2318U;
    msg.lat = 0.9006062479505221;
    msg.lon = 0.6421234711590349;
    msg.z = 0.6517926811859026;
    msg.z_units = 217U;
    msg.speed = 0.08585378928018705;
    msg.speed_units = 166U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.45121028659150497;
    tmp_msg_0.y = 0.34394755976433433;
    tmp_msg_0.z = 0.7826946650951601;
    tmp_msg_0.t = 0.3850019605663576;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BNEGUIYVXKSGYELCRUIZGYHNUVDEHIABBPSFPRMTXFIUTJVEFPTMYNHDXDMCTVBLMNGMRVMZSOEUSIABLLDZWZWPWIWEGGCMLOJNOSZICAFPKILAMNHYMUAXSPCOAOFBUTFYEJYTHZPWXQQVNHDKYRLUBBOIGGAHWEXFCJLWKBJDQPSRFVDEWQQTCSHTXPXDLFRMHQKR");

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
    msg.setTimeStamp(0.35020047183138203);
    msg.setSource(13415U);
    msg.setSourceEntity(125U);
    msg.setDestination(47574U);
    msg.setDestinationEntity(106U);
    msg.timeout = 10425U;
    msg.lat = 0.4106946932693193;
    msg.lon = 0.9921139704415641;
    msg.z = 0.1666662659314867;
    msg.z_units = 149U;
    msg.speed = 0.5287324145910518;
    msg.speed_units = 136U;
    msg.custom.assign("GLUKMCGSUHTFAGQZRHVMTHGOJCYVUSOWLJHCUBEYDRUYIPTBKFSSNDQDTIMZOPASKXZIFFUXSABDWAZBXMOGXVRYBTTNNHQTZECTECPIEOTJRZVHGLPVFBBQMCELQYSCJVGXRWWANJMEPWNYQMJTNPYXRSWLKWDKUXKYZFKNALAAHNRLOPWAJBRDOFIRQGEOYLOJFPZJNEGIQECK");

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
    msg.setTimeStamp(0.6701057394192333);
    msg.setSource(35908U);
    msg.setSourceEntity(97U);
    msg.setDestination(4507U);
    msg.setDestinationEntity(118U);
    msg.timeout = 59120U;
    msg.lat = 0.9479051273270741;
    msg.lon = 0.6794271716201348;
    msg.z = 0.9195051941785135;
    msg.z_units = 213U;
    msg.speed = 0.39563292619099755;
    msg.speed_units = 67U;
    msg.custom.assign("NIZVFQROJXYQRUTSFSLHOMJCLSXELVICEBFBXQQADBVGOVWASVYTEMJOSKKWCWJNXRBQS");

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
    msg.setTimeStamp(0.32027220940605183);
    msg.setSource(18660U);
    msg.setSourceEntity(227U);
    msg.setDestination(37919U);
    msg.setDestinationEntity(189U);
    msg.x = 0.5236468382031981;
    msg.y = 0.801165368994757;
    msg.z = 0.2765322030332028;
    msg.t = 0.1489277857385346;

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
    msg.setTimeStamp(0.6153724330989078);
    msg.setSource(16502U);
    msg.setSourceEntity(151U);
    msg.setDestination(39551U);
    msg.setDestinationEntity(247U);
    msg.x = 0.30489925658034134;
    msg.y = 0.7403194953591764;
    msg.z = 0.5438236025655135;
    msg.t = 0.353877762976064;

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
    msg.setTimeStamp(0.056777051787967325);
    msg.setSource(57008U);
    msg.setSourceEntity(8U);
    msg.setDestination(14667U);
    msg.setDestinationEntity(250U);
    msg.x = 0.5048973202432886;
    msg.y = 0.35094466704359006;
    msg.z = 0.16019458950513865;
    msg.t = 0.4660513153075281;

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
    msg.setTimeStamp(0.13091702466738198);
    msg.setSource(1575U);
    msg.setSourceEntity(216U);
    msg.setDestination(51738U);
    msg.setDestinationEntity(168U);
    msg.timeout = 47568U;
    msg.name.assign("XQDDAVQNUYWRFDRGMCSONRDWNKQRTUOSZHMAOKLNVMPIJKBXDVHLIXSLHMIXPKEEFAEG");
    msg.custom.assign("YREJUOECEKXUSFSVKZZJLUHIGRHJXIAXACLCWGQHNVOBUGYTAAJFQRGPYNHPNPCMTOSGCUEZOXWXGNYTCDANCTUDWRLZXBWGJLGBLKPTITSMEKDHEJNTRMVMSIYQZVLFZWQZSWQVJFWCPLBUFU");

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
    msg.setTimeStamp(0.9226955722380477);
    msg.setSource(29293U);
    msg.setSourceEntity(99U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(24U);
    msg.timeout = 10802U;
    msg.name.assign("TUBEHVIYDCIJWOIBGTHJKPGFVAQJUJHQVBALSLHH");
    msg.custom.assign("TPEODIUASGQVGUJMLDGGTEJYMZNDOEXONXJQWPHEHIWWSBKQSRDZHJFCKYBQUABTP");

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
    msg.setTimeStamp(0.4898113832580857);
    msg.setSource(47548U);
    msg.setSourceEntity(160U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(35U);
    msg.timeout = 9425U;
    msg.name.assign("PWHAAWHDQLHUEDPGMFQIBCOFRYMJXOYNNMRL");
    msg.custom.assign("LMPWUFTCTFZFHPIRCKDHPEQMVDGZCJFLKOKOXSJHZVOEZNWLEIBOFGMVVITORPNYZA");

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
    msg.setTimeStamp(0.5031657668265338);
    msg.setSource(9269U);
    msg.setSourceEntity(1U);
    msg.setDestination(3225U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.52289188408304;
    msg.lon = 0.4890216686803347;
    msg.z = 0.07099244420011563;
    msg.z_units = 37U;
    msg.speed = 0.991353190903761;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5604097356562626;
    tmp_msg_0.y = 0.3204194784927057;
    tmp_msg_0.z = 0.16543126129219698;
    tmp_msg_0.t = 0.26930044946776366;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6911400653809181;
    msg.custom.assign("RNGEIWNCISJXDSWOWULKEVOXIYCLJERVOVZH");

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
    msg.setTimeStamp(0.471723731096945);
    msg.setSource(63129U);
    msg.setSourceEntity(74U);
    msg.setDestination(3623U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.07154636018152372;
    msg.lon = 0.5398366935472244;
    msg.z = 0.09038275521628913;
    msg.z_units = 117U;
    msg.speed = 0.39274170763276695;
    msg.speed_units = 172U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.27059061621788705;
    tmp_msg_0.y = 0.7199534236986878;
    tmp_msg_0.z = 0.9002427579407618;
    tmp_msg_0.t = 0.5926924286745369;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12094U;
    tmp_msg_1.off_x = 0.17170001842427718;
    tmp_msg_1.off_y = 0.27515781844126674;
    tmp_msg_1.off_z = 0.9481627764129855;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.50171331558046;
    msg.custom.assign("VPUBCFQQASKCCYDHMLSWRWTAKMCPSRNLVMDGRIDXFGQTSJVNOIJBYBKHBVGNVMAJTMALNMICQRGEZLCTDISROPNRYAEACYQBPDWHXZBKLEICGADOYRGEXXUBIIPFUKZVYEYLJGKWVQILKMP");

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
    msg.setTimeStamp(0.9906941761519572);
    msg.setSource(62595U);
    msg.setSourceEntity(115U);
    msg.setDestination(26775U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.9327947082487124;
    msg.lon = 0.0603340331346055;
    msg.z = 0.07875767038010029;
    msg.z_units = 160U;
    msg.speed = 0.5277363011042381;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9086070863188614;
    tmp_msg_0.y = 0.11801827847838309;
    tmp_msg_0.z = 0.14421533587177227;
    tmp_msg_0.t = 0.6972180512372349;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8732361406729565;
    msg.custom.assign("MVUFTPRPHGIUJSCZENIDQLOFOTCZPMDLUOTWGUHEQJTQCIMDBRUWPTAUKCBHJFIKPMSHEXIDRDTXUWEZQBSQGOCNZUOKVAYXZXJWBVBQOABJFIBSEHKDQNYEKOICGJFXYDKUBSSRRYGCGYFKVPPMZRVWAMBKENWWFRAFNZPIAQALEGQENPAHXOGDEJYVXTLSZMMLHVVARBLXTLYMLDDZVXIFYJMHACQRSLNSTNVJWWKKXHNSUYFZJIPGWOTYOH");

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
    msg.setTimeStamp(0.3087866568714923);
    msg.setSource(27389U);
    msg.setSourceEntity(162U);
    msg.setDestination(42634U);
    msg.setDestinationEntity(192U);
    msg.vid = 65112U;
    msg.off_x = 0.629987169048197;
    msg.off_y = 0.2766286602184913;
    msg.off_z = 0.5318637096896337;

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
    msg.setTimeStamp(0.3154550987915762);
    msg.setSource(12528U);
    msg.setSourceEntity(249U);
    msg.setDestination(28686U);
    msg.setDestinationEntity(7U);
    msg.vid = 9598U;
    msg.off_x = 0.4692643042129263;
    msg.off_y = 0.5152953212307977;
    msg.off_z = 0.742151980557281;

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
    msg.setTimeStamp(0.48420372265559797);
    msg.setSource(22361U);
    msg.setSourceEntity(71U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(11U);
    msg.vid = 750U;
    msg.off_x = 0.18086383467098632;
    msg.off_y = 0.7873146614794889;
    msg.off_z = 0.021797124687232383;

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
    msg.setTimeStamp(0.2411833609069568);
    msg.setSource(59488U);
    msg.setSourceEntity(110U);
    msg.setDestination(37051U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.017623410209562707);
    msg.setSource(36386U);
    msg.setSourceEntity(78U);
    msg.setDestination(6703U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.4108105162911001);
    msg.setSource(39860U);
    msg.setSourceEntity(214U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.7656875228979807);
    msg.setSource(54898U);
    msg.setSourceEntity(133U);
    msg.setDestination(23808U);
    msg.setDestinationEntity(250U);
    msg.mid = 3477U;

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
    msg.setTimeStamp(0.849277236850845);
    msg.setSource(49598U);
    msg.setSourceEntity(67U);
    msg.setDestination(28584U);
    msg.setDestinationEntity(125U);
    msg.mid = 33989U;

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
    msg.setTimeStamp(0.6488589236890031);
    msg.setSource(43641U);
    msg.setSourceEntity(225U);
    msg.setDestination(10130U);
    msg.setDestinationEntity(2U);
    msg.mid = 57407U;

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
    msg.setTimeStamp(0.559642948660657);
    msg.setSource(39983U);
    msg.setSourceEntity(208U);
    msg.setDestination(29845U);
    msg.setDestinationEntity(238U);
    msg.state = 42U;
    msg.eta = 47516U;
    msg.info.assign("EGKISHTVTANKIDRESBFBYFWCXNEOOIIHSDQLJZDOFNAQDXFKPXXCVFWSGHLYIJGXPJRHTTDMBPWVUFEZM");

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
    msg.setTimeStamp(0.9370602387470893);
    msg.setSource(13592U);
    msg.setSourceEntity(254U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(129U);
    msg.state = 207U;
    msg.eta = 55952U;
    msg.info.assign("DFWJSWNBXWZLDWRISGFYDGYHPRSCCCELTSIJPVPFMWCKPLHYPQVIMSYPZCJDFXGEXAJCOAJYHLOWEQIZBDNDQBMRGALUZDWWKCBNJNGEFHAQQIAKLTEMECUKHXTATERTJI");

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
    msg.setTimeStamp(0.7549389720355935);
    msg.setSource(5049U);
    msg.setSourceEntity(235U);
    msg.setDestination(59523U);
    msg.setDestinationEntity(80U);
    msg.state = 179U;
    msg.eta = 811U;
    msg.info.assign("LKZZZUQBTGQVFLBWVIOJPRCXFDVIWQEIMEJYFBSZVRGSQPOOWMUMANHEASJBVQQRDKXCHTPDUJAT");

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
    msg.setTimeStamp(0.11358717345987313);
    msg.setSource(31747U);
    msg.setSourceEntity(149U);
    msg.setDestination(56318U);
    msg.setDestinationEntity(226U);
    msg.system = 51565U;
    msg.duration = 41380U;
    msg.speed = 0.3138817158516065;
    msg.speed_units = 86U;
    msg.x = 0.5654654721901804;
    msg.y = 0.8154258695802311;
    msg.z = 0.794269947558187;
    msg.z_units = 110U;

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
    msg.setTimeStamp(0.9951463378958054);
    msg.setSource(26712U);
    msg.setSourceEntity(150U);
    msg.setDestination(33236U);
    msg.setDestinationEntity(214U);
    msg.system = 29535U;
    msg.duration = 584U;
    msg.speed = 0.24441596085744355;
    msg.speed_units = 96U;
    msg.x = 0.5400634584922296;
    msg.y = 0.5874194133872712;
    msg.z = 0.2669173042178019;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.9260253885125773);
    msg.setSource(46226U);
    msg.setSourceEntity(131U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(11U);
    msg.system = 10790U;
    msg.duration = 21201U;
    msg.speed = 0.6962561571885068;
    msg.speed_units = 145U;
    msg.x = 0.4078648587242859;
    msg.y = 0.5929933672696092;
    msg.z = 0.565753956750391;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.9533925042904624);
    msg.setSource(25857U);
    msg.setSourceEntity(207U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.9611466112662505;
    msg.lon = 0.5209995109757021;
    msg.speed = 0.034021060610730625;
    msg.speed_units = 209U;
    msg.duration = 18470U;
    msg.sys_a = 31306U;
    msg.sys_b = 26172U;
    msg.move_threshold = 0.6191772943391651;

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
    msg.setTimeStamp(0.31323276500707986);
    msg.setSource(3124U);
    msg.setSourceEntity(24U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.8704802775439298;
    msg.lon = 0.9517189470922277;
    msg.speed = 0.5303723632301279;
    msg.speed_units = 97U;
    msg.duration = 53260U;
    msg.sys_a = 42356U;
    msg.sys_b = 26845U;
    msg.move_threshold = 0.40244808539303634;

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
    msg.setTimeStamp(0.2871948342718309);
    msg.setSource(5003U);
    msg.setSourceEntity(19U);
    msg.setDestination(31880U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.680502887111331;
    msg.lon = 0.15793864799428448;
    msg.speed = 0.25631235455832035;
    msg.speed_units = 159U;
    msg.duration = 33400U;
    msg.sys_a = 19441U;
    msg.sys_b = 64177U;
    msg.move_threshold = 0.37123169999957784;

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
    msg.setTimeStamp(0.8909216837147187);
    msg.setSource(1499U);
    msg.setSourceEntity(217U);
    msg.setDestination(31152U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.30859988247864745;
    msg.lon = 0.14633834719098493;
    msg.z = 0.544604761886281;
    msg.z_units = 3U;
    msg.speed = 0.32951660268372696;
    msg.speed_units = 90U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.21603994521374648;
    tmp_msg_0.lon = 0.3456797503605539;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FMUKJAMKCLHBZXBYVRVXZBPOQNAQWGRBEDFKRBJZUYFDVTGIXSGEEWLRYFZKAWPXIMTHSMUTNSNJOWIDWTWIHGCDUVQEMAPQPXQVAYHKBFLGHZWFMCIPTIYPAPUSGIFGDFGBUTWYESKSQNKIOKMXFUYLNNXRHCJYFJVSKDXOERAMLRATGEEKQQOQURMLHSZBXBDCUJPDDONCCLJROHRASVIEPUHEQNCIYMVOZZBNT");

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
    msg.setTimeStamp(0.7768980517003445);
    msg.setSource(58806U);
    msg.setSourceEntity(9U);
    msg.setDestination(6833U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.5756804868721984;
    msg.lon = 0.9303462905553772;
    msg.z = 0.18247819469313808;
    msg.z_units = 234U;
    msg.speed = 0.7192538151351873;
    msg.speed_units = 181U;
    msg.custom.assign("AYZXZQZALHQWCVSMHTGEPDGHOCLMUDCBRQNQOFRPOJOVEKERTJZMMMGGPKMCIWTYCEIILEUXLWVIBIZDMMAQPFHECLYDFNSWRTOSUNJASHZJKZBGJGKAVGUIJPNOBQCODOSRJSFYLXSQRBCYPZBBMUDVCKXHYYIQLINXFYEGORWEGLGKSPWZZKTFJJPAXTRFRIDABWUTHKDQSKFRUYTOBTKU");

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
    msg.setTimeStamp(0.20953968164355197);
    msg.setSource(71U);
    msg.setSourceEntity(162U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.9320050888055084;
    msg.lon = 0.19069847021025998;
    msg.z = 0.7312806077770786;
    msg.z_units = 247U;
    msg.speed = 0.28800307525074564;
    msg.speed_units = 124U;
    msg.custom.assign("CADROTKGIBCZCSVKOAQBPNDNSETOBPJEWHMJUUHNIIELQEOBDKYUNZSKTHPYQMGNVWSOXWVFFYOLDGYXLGVTAGRVCHL");

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
    msg.setTimeStamp(0.8495375257070418);
    msg.setSource(19091U);
    msg.setSourceEntity(187U);
    msg.setDestination(45116U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.9813141140343257;
    msg.lon = 0.3938825845315038;

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
    msg.setTimeStamp(0.15982346997635088);
    msg.setSource(63374U);
    msg.setSourceEntity(109U);
    msg.setDestination(3686U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.8244261546893319;
    msg.lon = 0.09256219349557715;

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
    msg.setTimeStamp(0.6012079177763886);
    msg.setSource(33663U);
    msg.setSourceEntity(179U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.038177795394085945;
    msg.lon = 0.6958813827046392;

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
    msg.setTimeStamp(0.12567856569945524);
    msg.setSource(53410U);
    msg.setSourceEntity(49U);
    msg.setDestination(5974U);
    msg.setDestinationEntity(50U);
    msg.timeout = 42602U;
    msg.lat = 0.4189556212921616;
    msg.lon = 0.7738017032476923;
    msg.z = 0.24578215084021326;
    msg.z_units = 85U;
    msg.pitch = 0.47790957092473385;
    msg.amplitude = 0.0007780231493845768;
    msg.duration = 12648U;
    msg.speed = 0.45667509501300463;
    msg.speed_units = 160U;
    msg.radius = 0.4009777773382759;
    msg.direction = 4U;
    msg.custom.assign("CNVMYKKXPHGRVNFRJGSNDWUFKTJBBTBLYYACNVFWSHDADCFDJFMIZSDWUFDMYETOLTQYJRKVETTUPFQJRSMZUARSVIZOOQJTWONPUNSNWWKTUHKPHXALLJIEGQBGLMYITSHADLOZWJMXCRGPFAWSVEEXYZMBCAGEVZZBLOYIWEXPKTRGBZYLSMFCOLEGYXUHEPI");

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
    msg.setTimeStamp(0.6547162722254312);
    msg.setSource(47173U);
    msg.setSourceEntity(113U);
    msg.setDestination(32601U);
    msg.setDestinationEntity(198U);
    msg.timeout = 20712U;
    msg.lat = 0.268130188776057;
    msg.lon = 0.4839355774263632;
    msg.z = 0.4923542940287581;
    msg.z_units = 174U;
    msg.pitch = 0.7469305570378274;
    msg.amplitude = 0.3812513681185793;
    msg.duration = 56755U;
    msg.speed = 0.5213775089411664;
    msg.speed_units = 27U;
    msg.radius = 0.4033645448596095;
    msg.direction = 88U;
    msg.custom.assign("BUKGCXRMBUZDEEQWBWOPTLQ");

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
    msg.setTimeStamp(0.03525507256497107);
    msg.setSource(18454U);
    msg.setSourceEntity(92U);
    msg.setDestination(49215U);
    msg.setDestinationEntity(88U);
    msg.timeout = 35814U;
    msg.lat = 0.04497711438129259;
    msg.lon = 0.3011889137141952;
    msg.z = 0.36585994768698904;
    msg.z_units = 70U;
    msg.pitch = 0.896639854398725;
    msg.amplitude = 0.02736792841738722;
    msg.duration = 55921U;
    msg.speed = 0.18321238876096146;
    msg.speed_units = 195U;
    msg.radius = 0.827110453511695;
    msg.direction = 212U;
    msg.custom.assign("ZMZSSJWWOPNAVQURQFIJVYJPFLIDROOILXBIDAXQXNUBRNJZKDCEGHTDNZCTWGSXUWOVHWTKLDKHXJGAECCHVZERQLFIQYIHPGVNHCPBKQMWZUNVMUMTKRPQMYOYCXZCERGTKDYVWMNRLGSFVSNSTDGDWIYLAOHIVEIAOMJPAPEKISAKBJBGTXNFUGLFHOAFJKRFYLSSZFRMWHBXXQUTZOUMEQTQBBLFCCG");

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
    msg.setTimeStamp(0.1525540616493658);
    msg.setSource(32367U);
    msg.setSourceEntity(231U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(254U);
    msg.formation_name.assign("OLBPPAFJOPMUCETBCLUAINQYJQFFNSOCJWWTZCKMLOFYXXKGMRFFUJHASPZYABJPUAJOCZZDREXXVKMZVKFIPCSYDGBGKRWQTHAMVESUPLEHAXXGWNJDXYQXRNNVOBTBHRRSRIUKGGQOEYSVIITLRPTCUNJBECVTWQNTMYDEWVIXQBHBFTVZKQZF");
    msg.reference_frame = 185U;
    msg.custom.assign("PEEKCTGFZWQCMUHJLYLKATVOBYCQVZRUAOMRCXBAGYIPJBTBUIEMCRJTEBJRGPSFVLUVWKZFW");

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
    msg.setTimeStamp(0.3815398075031551);
    msg.setSource(63458U);
    msg.setSourceEntity(73U);
    msg.setDestination(29647U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("XUVBRPVZTVBXJZSGTEVKUROBAPURMQFGLOFSMNTQHXIWXDLSBLXYVJWAKUKTEIMFNOHL");
    msg.reference_frame = 126U;
    msg.custom.assign("KWTNUQMKQNNDKABASPCBVKRLQLOLXEOYGFXDRTVALGRCGBHSVVGNJQMIAVSCPCJIBLWOIUJKLIWVFADQZAWDYFNUKMNJZUGHPJYQCLWDFBNQAXGHCEMOHORESNVJPERSFPVMWTXQTMYBWWWIGPRXLEGMYLMXCUQSHTJYZGSPDTHDNTRHTVABDZYOEMIUBIJXLRCIJTUBUIAURFNFJYFXHSZGFMAIZTHZ");

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
    msg.setTimeStamp(0.17468145623540587);
    msg.setSource(16896U);
    msg.setSourceEntity(158U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(120U);
    msg.formation_name.assign("FUCYYTMBPTBAMVRICYUWOGZXUOAFAPXXWHLPQXKFVXMRJHF");
    msg.reference_frame = 214U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 794U;
    tmp_msg_0.off_x = 0.44843822731391547;
    tmp_msg_0.off_y = 0.6533124877809858;
    tmp_msg_0.off_z = 0.8583708635578433;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BOBAKKPARLORRYQUCPGKRMCVOKDIZKGZKQGZSKSZQYHMTVBPFCHWEVCQORTUVGBAUBQLFTAVRXHNMVABF");

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
    msg.setTimeStamp(0.7762698967014234);
    msg.setSource(57413U);
    msg.setSourceEntity(164U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("BEJKMDWPCMSSDOFFBXJYLATYUXPYFRWMDQGJONCVYBSFKHZZHFFWSUBQFAOOFNYEZVJTZKSOYQTNUPRLCHYXGLMWUGSEGHJMKIPSPGAJUNAKANICQAOKSMLIQUBCBWIRXIUPO");
    msg.formation_name.assign("XVMTTJCEUDIVGFPOTWXKGGPDPFCEPDSKASRZJJVKTINNJPWLCGHGLFC");
    msg.plan_id.assign("PLZXCSQBKGOEAMONHJFNHGVKVMRJVOT");
    msg.description.assign("AXHRYRAHANAVFSHRLRKKVMTDJQBLFPNQVXZOQLLMUEWGEZBGOBM");
    msg.leader_speed = 0.6299506857351778;
    msg.leader_bank_lim = 0.29004315474541775;
    msg.pos_sim_err_lim = 0.5700698538315845;
    msg.pos_sim_err_wrn = 0.2558899867233462;
    msg.pos_sim_err_timeout = 18301U;
    msg.converg_max = 0.8281144881116764;
    msg.converg_timeout = 33002U;
    msg.comms_timeout = 16715U;
    msg.turb_lim = 0.12893133987847416;
    msg.custom.assign("NGBONPRKQJEKXXJLEOWCSKDFUNBOUJYGWFRZYUYGBPSURFPMLIJZSYWMVTHUBNJEHYMXCMENQQKAIFQGUQZBAKDOVICPLTQAXDKPLPEZOLZLJSOIMWVUCMEURZOZMOYXWPAILXKNRFUKIDLDYWLHWGHBFJXDWEMJORVHXIYGICTNPBAVDMXFAVZDHJIRBGXYRSZEYNFCFQVSCQRTTSJSLVGIAKEGCWODAEKBTDAABTGQHN");

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
    msg.setTimeStamp(0.41360050681996974);
    msg.setSource(64938U);
    msg.setSourceEntity(1U);
    msg.setDestination(4039U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("WGXEHAJCYAEJQUAUS");
    msg.formation_name.assign("INOGGKXWUGAXTQJBLYKAJYXEBPRPGOFJFTTYERZJFXUBLKHLHCVMODWRPQKUVAGVLDCPSRFEJNZYXSWVEXJCHDXKESTUUTHHBHFBCVQRLADCONWQUFDAMDTWIBEQYSQYNIUIFXOJOIGZTTENJVPLHCDMPWFHSGXMCTNLKUYAVIUTNZRPEABCIRKZJNZQRZIDBSYHDKMQZSWOCZQKZEMDJMFPOGOCLVGMGFRWQVAKSOPISUHYLBBSYE");
    msg.plan_id.assign("ZIMUTPBNOQJSDTWXQZUXIUAXLEOSCBOZKQKSNFCCHLOJNIEFSFMKQIUSUJXYGQHVYWZHNHUXEZTVCLRRNIUTIZRGNWEIINVLFZCPETTDADAQSTTKAVEXZRUBYDOMOGBYYDRGPYKOMJIMAYYRPNVRKVGYBD");
    msg.description.assign("QHBJLOSUBHIWEYECJDMGBSNHBWTQUGJOVDFAUMRYZHSXUQIVZCVYIGZALKZEZFXTNNHGMJDXKLLDZMQEQCWQAHTPNHFIRYVHIYLPTXBEAOXYCOVKGFCXRURPFOLWMNCUGCBRTDJWBEVNAGKCAJOQFQTKVPDCKVBW");
    msg.leader_speed = 0.46811869629732683;
    msg.leader_bank_lim = 0.8515790872173494;
    msg.pos_sim_err_lim = 0.8335857731936285;
    msg.pos_sim_err_wrn = 0.15061476443896238;
    msg.pos_sim_err_timeout = 16929U;
    msg.converg_max = 0.8410831211779402;
    msg.converg_timeout = 44819U;
    msg.comms_timeout = 39157U;
    msg.turb_lim = 0.9398335087584222;
    msg.custom.assign("NLDNDBBDRCIQOIJQEZVBVAUWVBGMYERWXBGSNQFIAYIIEYNHQWKGGNNSREFWQJURXWEFTJQOZAKWUYBEKLVZQMCZMRUWANJ");

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
    msg.setTimeStamp(0.3229197574379735);
    msg.setSource(38724U);
    msg.setSourceEntity(87U);
    msg.setDestination(15622U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("ZRZUKXMFJJKKHYDOVPHWXVCRGNRSTJYPFJQAAMKFWEQNPOEGDLITGFUTUIJEMZAZBXSBBBFRKOAKICSCUW");
    msg.formation_name.assign("YKFRMISKCIWDXUUCTWFSQZVNLIJJAQKIVQPGKEARHIRKSVWBENYNVSZPIDLBRZKVENGHHLLNIJDAEGRMROZJZZFMHUMXHOWHPXTSROTLF");
    msg.plan_id.assign("GFNDPGBZLUGOFUKNOSISGZOFZJBDPTUJHHEUQINGFWKZOJMOAJXMFTZRMGTZGPRBINDWEKHYIMLFESGKAIVGDOYCNCOYPCTJJIESTNQHIKEMUEXLWUWLKAWYFCCRYYCCLHHZEDCDQYUNMJVIBACIQVOVXTVVWJWFARXVBKDQUVQYWT");
    msg.description.assign("NCGXTNAYQBMJ");
    msg.leader_speed = 0.46792554863304225;
    msg.leader_bank_lim = 0.21092271709258004;
    msg.pos_sim_err_lim = 0.5498289496918624;
    msg.pos_sim_err_wrn = 0.39386055508020956;
    msg.pos_sim_err_timeout = 54097U;
    msg.converg_max = 0.4161181943071186;
    msg.converg_timeout = 14982U;
    msg.comms_timeout = 62499U;
    msg.turb_lim = 0.6439156155509306;
    msg.custom.assign("DGLNUILDGFRWAYTTTYAKTITSEJERNXPJISNAPMMXCN");

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
    msg.setTimeStamp(0.2086090354083162);
    msg.setSource(42231U);
    msg.setSourceEntity(230U);
    msg.setDestination(16373U);
    msg.setDestinationEntity(116U);
    msg.control_src = 47528U;
    msg.control_ent = 180U;
    msg.timeout = 0.7259882888840059;
    msg.loiter_radius = 0.39698662998298206;
    msg.altitude_interval = 0.7922658172010483;

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
    msg.setTimeStamp(0.15745427616714613);
    msg.setSource(22274U);
    msg.setSourceEntity(220U);
    msg.setDestination(62760U);
    msg.setDestinationEntity(190U);
    msg.control_src = 12045U;
    msg.control_ent = 171U;
    msg.timeout = 0.24919949064588165;
    msg.loiter_radius = 0.3659007224634431;
    msg.altitude_interval = 0.04155889162173343;

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
    msg.setTimeStamp(0.0907244320471764);
    msg.setSource(37342U);
    msg.setSourceEntity(149U);
    msg.setDestination(8489U);
    msg.setDestinationEntity(28U);
    msg.control_src = 24749U;
    msg.control_ent = 96U;
    msg.timeout = 0.23246439069265612;
    msg.loiter_radius = 0.21116622632600535;
    msg.altitude_interval = 0.8780893817105369;

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
    msg.setTimeStamp(0.12475530114675515);
    msg.setSource(16760U);
    msg.setSourceEntity(239U);
    msg.setDestination(8403U);
    msg.setDestinationEntity(238U);
    msg.flags = 201U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.26043552350927035;
    tmp_msg_0.speed_units = 99U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8399890482639072;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5685783700533847;
    msg.lon = 0.3731860505418212;
    msg.radius = 0.8572061841383735;

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
    msg.setTimeStamp(0.08634033357940807);
    msg.setSource(30596U);
    msg.setSourceEntity(226U);
    msg.setDestination(56446U);
    msg.setDestinationEntity(202U);
    msg.flags = 23U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.33730719634362594;
    tmp_msg_0.speed_units = 169U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.15399896549813397;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9997949877974043;
    msg.lon = 0.12831700063128038;
    msg.radius = 0.8231919462656339;

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
    msg.setTimeStamp(0.12766266899437706);
    msg.setSource(3242U);
    msg.setSourceEntity(206U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(194U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7943171701661743;
    tmp_msg_0.speed_units = 180U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7232181844027343;
    tmp_msg_1.z_units = 136U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43459547139460697;
    msg.lon = 0.6043236505026349;
    msg.radius = 0.5573357205332797;

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
    msg.setTimeStamp(0.06435885725462365);
    msg.setSource(27669U);
    msg.setSourceEntity(155U);
    msg.setDestination(60067U);
    msg.setDestinationEntity(89U);
    msg.control_src = 40383U;
    msg.control_ent = 19U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 164U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7952838934652494;
    tmp_tmp_msg_0_0.speed_units = 130U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.984589279972668;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.517302008851392;
    tmp_msg_0.lon = 0.9306804679030386;
    tmp_msg_0.radius = 0.8389655444763745;
    msg.reference.set(tmp_msg_0);
    msg.state = 98U;
    msg.proximity = 252U;

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
    msg.setTimeStamp(0.2594625954310339);
    msg.setSource(48504U);
    msg.setSourceEntity(238U);
    msg.setDestination(23528U);
    msg.setDestinationEntity(147U);
    msg.control_src = 28206U;
    msg.control_ent = 26U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 146U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2812996443711393;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8332992180808667;
    tmp_tmp_msg_0_1.z_units = 141U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6460155453398141;
    tmp_msg_0.lon = 0.9385248855741413;
    tmp_msg_0.radius = 0.5897083446406822;
    msg.reference.set(tmp_msg_0);
    msg.state = 216U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.9454376773748978);
    msg.setSource(58939U);
    msg.setSourceEntity(245U);
    msg.setDestination(55036U);
    msg.setDestinationEntity(62U);
    msg.control_src = 15091U;
    msg.control_ent = 15U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 62U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9275600834078513;
    tmp_tmp_msg_0_0.speed_units = 173U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6164569922963508;
    tmp_tmp_msg_0_1.z_units = 125U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4335957502454598;
    tmp_msg_0.lon = 0.9829889881241525;
    tmp_msg_0.radius = 0.19984092679491994;
    msg.reference.set(tmp_msg_0);
    msg.state = 62U;
    msg.proximity = 175U;

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
    msg.setTimeStamp(0.5903860094516712);
    msg.setSource(43066U);
    msg.setSourceEntity(83U);
    msg.setDestination(62611U);
    msg.setDestinationEntity(227U);
    msg.ax_cmd = 0.6439065768529509;
    msg.ay_cmd = 0.7191343058159421;
    msg.az_cmd = 0.8446562321370849;
    msg.ax_des = 0.9638359506022202;
    msg.ay_des = 0.812196406618601;
    msg.az_des = 0.1073125432661145;
    msg.virt_err_x = 0.41795804145011184;
    msg.virt_err_y = 0.7018304122344353;
    msg.virt_err_z = 0.02103785439856387;
    msg.surf_fdbk_x = 0.14736186246401894;
    msg.surf_fdbk_y = 0.5979070761510096;
    msg.surf_fdbk_z = 0.0687639741461955;
    msg.surf_unkn_x = 0.8097169111349147;
    msg.surf_unkn_y = 0.09757676871167842;
    msg.surf_unkn_z = 0.14673256724186756;
    msg.ss_x = 0.08579625262215729;
    msg.ss_y = 0.3663454007373663;
    msg.ss_z = 0.9242547500750725;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RYDPEHKOKJKDAECLUHYINQGAQLCTNUSNARRPDWUIZXQTTSZVLKAMZEEVSOCAUBSHFMYFDXVMMVMPPYHFHTWDCGSZTVTLFSNVEPPYHYHWQQHWFGCBEFNHIZSEDOBMMMJJNBJFKKEJKBRRDWPBGUGDYQXKWJOZXZCIQKYIXRUTIOGWNZOWILARSNXPOLOAYURXWLKNJXLIYFWDQJBSMETQBVLXJEOQZVGGUAFGBC");
    tmp_msg_0.dist = 0.6650556210590972;
    tmp_msg_0.err = 0.8489584452150076;
    tmp_msg_0.ctrl_imp = 0.5431396405995863;
    tmp_msg_0.rel_dir_x = 0.17247558245387506;
    tmp_msg_0.rel_dir_y = 0.10744884041086777;
    tmp_msg_0.rel_dir_z = 0.8885190377637817;
    tmp_msg_0.err_x = 0.40630970290596335;
    tmp_msg_0.err_y = 0.7057424283426647;
    tmp_msg_0.err_z = 0.7715210267435104;
    tmp_msg_0.rf_err_x = 0.5680016258175108;
    tmp_msg_0.rf_err_y = 0.4453801059143917;
    tmp_msg_0.rf_err_z = 0.9800267561723954;
    tmp_msg_0.rf_err_vx = 0.9601894018309438;
    tmp_msg_0.rf_err_vy = 0.1332913622134776;
    tmp_msg_0.rf_err_vz = 0.8155533373500923;
    tmp_msg_0.ss_x = 0.8021221648078809;
    tmp_msg_0.ss_y = 0.332271009313188;
    tmp_msg_0.ss_z = 0.3263390007896533;
    tmp_msg_0.virt_err_x = 0.30727841341931483;
    tmp_msg_0.virt_err_y = 0.8177686788645089;
    tmp_msg_0.virt_err_z = 0.5875045025719862;
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
    msg.setTimeStamp(0.5435483640392257);
    msg.setSource(49722U);
    msg.setSourceEntity(194U);
    msg.setDestination(17509U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.9094013821815781;
    msg.ay_cmd = 0.059488551178225046;
    msg.az_cmd = 0.6524405760012405;
    msg.ax_des = 0.5907515229561778;
    msg.ay_des = 0.590184431950283;
    msg.az_des = 0.4265787356140627;
    msg.virt_err_x = 0.5058707796375871;
    msg.virt_err_y = 0.9873474492718394;
    msg.virt_err_z = 0.9608060056345942;
    msg.surf_fdbk_x = 0.6197601818731009;
    msg.surf_fdbk_y = 0.958729464878264;
    msg.surf_fdbk_z = 0.11264630219111427;
    msg.surf_unkn_x = 0.8474844329306774;
    msg.surf_unkn_y = 0.201974640726592;
    msg.surf_unkn_z = 0.28442356523405443;
    msg.ss_x = 0.39927502203215437;
    msg.ss_y = 0.8752218130388727;
    msg.ss_z = 0.2965254907173137;

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
    msg.setTimeStamp(0.9818316080630051);
    msg.setSource(46709U);
    msg.setSourceEntity(41U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(232U);
    msg.ax_cmd = 0.3661873263211126;
    msg.ay_cmd = 0.4573149271493552;
    msg.az_cmd = 0.6450899756591475;
    msg.ax_des = 0.6757358541107285;
    msg.ay_des = 0.09768636952809973;
    msg.az_des = 0.525739206947531;
    msg.virt_err_x = 0.5660942482942977;
    msg.virt_err_y = 0.19898703778660076;
    msg.virt_err_z = 0.07554759033032654;
    msg.surf_fdbk_x = 0.7368457061227054;
    msg.surf_fdbk_y = 0.02719054051036207;
    msg.surf_fdbk_z = 0.5679827348553922;
    msg.surf_unkn_x = 0.20559436098355577;
    msg.surf_unkn_y = 0.8477256721247944;
    msg.surf_unkn_z = 0.13544588676237312;
    msg.ss_x = 0.1999455527742855;
    msg.ss_y = 0.1752323301262949;
    msg.ss_z = 0.6843001796579649;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FKDCTPAXLXNFSYAULGPDJIRNZAMUUZFSWUOCXTKTLTQBIVSQVAQJCEIVCFBVQKMSODRCDYZBSJNOZPMUAJEAXPYRFTRJRNDULOSLDXH");
    tmp_msg_0.dist = 0.816838037075102;
    tmp_msg_0.err = 0.77665798678884;
    tmp_msg_0.ctrl_imp = 0.3951833517261202;
    tmp_msg_0.rel_dir_x = 0.09197256514729724;
    tmp_msg_0.rel_dir_y = 0.67493906330528;
    tmp_msg_0.rel_dir_z = 0.5920050474403848;
    tmp_msg_0.err_x = 0.03699966074775718;
    tmp_msg_0.err_y = 0.45183284285529635;
    tmp_msg_0.err_z = 0.7255980003138454;
    tmp_msg_0.rf_err_x = 0.8693102589404657;
    tmp_msg_0.rf_err_y = 0.6484329928888993;
    tmp_msg_0.rf_err_z = 0.4688876328996785;
    tmp_msg_0.rf_err_vx = 0.3735588046972329;
    tmp_msg_0.rf_err_vy = 0.6369359891490216;
    tmp_msg_0.rf_err_vz = 0.26034009672168656;
    tmp_msg_0.ss_x = 0.7634925330674919;
    tmp_msg_0.ss_y = 0.21034949761340227;
    tmp_msg_0.ss_z = 0.48508332676616117;
    tmp_msg_0.virt_err_x = 0.04192299331879101;
    tmp_msg_0.virt_err_y = 0.5651865102424936;
    tmp_msg_0.virt_err_z = 0.8948839477194767;
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
    msg.setTimeStamp(0.897011969443691);
    msg.setSource(64393U);
    msg.setSourceEntity(25U);
    msg.setDestination(44941U);
    msg.setDestinationEntity(140U);
    msg.s_id.assign("GCLGDFXJPXYWCKXQOUTRGXNDPRMUFZHJBYXWCKOGSKZBLMEERUAQNUUZXSKMATCHHHBEQQAFNYFVLWTATLHLSORJAOWCESNCQUWZDAGBJMHQIDWOFDORSGVNJFHMCMQJXZWEKIEUDGBJYBQSVIVTFNNQOWPGTLPFIMCBYVQZHYJCZXMUDYBGCSVSJRMPLZTDAWFIPESAROFRHENPZINBDI");
    msg.dist = 0.6897494157072396;
    msg.err = 0.6335403626466858;
    msg.ctrl_imp = 0.2962335802956424;
    msg.rel_dir_x = 0.7248262667792226;
    msg.rel_dir_y = 0.9474176374399318;
    msg.rel_dir_z = 0.5117156440370929;
    msg.err_x = 0.8102185807939326;
    msg.err_y = 0.16824989281974578;
    msg.err_z = 0.37995001464551104;
    msg.rf_err_x = 0.23877627741453966;
    msg.rf_err_y = 0.06731689923582396;
    msg.rf_err_z = 0.8062050358243494;
    msg.rf_err_vx = 0.7810526788471517;
    msg.rf_err_vy = 0.4037236986746736;
    msg.rf_err_vz = 0.5429926327568244;
    msg.ss_x = 0.11583894234301828;
    msg.ss_y = 0.9308424462372218;
    msg.ss_z = 0.8773396114223728;
    msg.virt_err_x = 0.5040721550181102;
    msg.virt_err_y = 0.7583112357088568;
    msg.virt_err_z = 0.39355980706337823;

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
    msg.setTimeStamp(0.776671220885307);
    msg.setSource(44594U);
    msg.setSourceEntity(8U);
    msg.setDestination(15714U);
    msg.setDestinationEntity(107U);
    msg.s_id.assign("UAINCIFIICFDUAWGGWXYJFLCQUHZNHTVOGQWUAQRKFHPWKXDKECSBGQMQFCMQVIHYBOXVRIVDJUUJDOSNDKRLHRNKBGIWPTXRGOJEEEYDCGWXTOTJPVGFYYSOMXBHZBOHMQXRTNELKTJDNMLRUPRHBLXCAARUQTCBLTLZUBESWDAFKJZZNCYAGAVIAOEJCYBSKINDKSBMESQP");
    msg.dist = 0.4660631392743714;
    msg.err = 0.8665423952041492;
    msg.ctrl_imp = 0.22042933400322473;
    msg.rel_dir_x = 0.2674166854878345;
    msg.rel_dir_y = 0.4877878020108656;
    msg.rel_dir_z = 0.8166869821605096;
    msg.err_x = 0.06726689607413372;
    msg.err_y = 0.5339536567059049;
    msg.err_z = 0.5324610888761715;
    msg.rf_err_x = 0.4730868870518359;
    msg.rf_err_y = 0.648057371471606;
    msg.rf_err_z = 0.865791366791588;
    msg.rf_err_vx = 0.6880155440096833;
    msg.rf_err_vy = 0.21827790616659837;
    msg.rf_err_vz = 0.9549110649393899;
    msg.ss_x = 0.011047019228123123;
    msg.ss_y = 0.6976080271256174;
    msg.ss_z = 0.9555160531995659;
    msg.virt_err_x = 0.7890348206242431;
    msg.virt_err_y = 0.06468142908098762;
    msg.virt_err_z = 0.6765553085943806;

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
    msg.setTimeStamp(0.698143319341001);
    msg.setSource(10341U);
    msg.setSourceEntity(22U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(224U);
    msg.s_id.assign("JEFSMVUXSUIADNDGPRHDASHTATRFWMVBYAZTOUQOMFGKHNBOFGFFIGJHZKUGDMTHTYAVWJXLWZZJYQWCBRIDKOQGTEWVONPXWOCIJJXLKICMXUECFVHABYXMRENHTGUEYKPJPQWGFYWTPAYXSJCVNACIZSOOIXKEUHTLQIKLBSELTJERGIXESNPDOSMYFONQMPHVJPBGRZUPLZABZIZLALNXQDCNQZMEBPNUHSDKRRBFDCRYWDQRSWKQUBC");
    msg.dist = 0.5039246748572586;
    msg.err = 0.5756524801751568;
    msg.ctrl_imp = 0.5538827494113103;
    msg.rel_dir_x = 0.03410373806157185;
    msg.rel_dir_y = 0.056752520353450686;
    msg.rel_dir_z = 0.6220700672181191;
    msg.err_x = 0.4658295106356023;
    msg.err_y = 0.1924786884578905;
    msg.err_z = 0.071944128151464;
    msg.rf_err_x = 0.6823822296027087;
    msg.rf_err_y = 0.01770503588131278;
    msg.rf_err_z = 0.9558175549911264;
    msg.rf_err_vx = 0.5830387729038154;
    msg.rf_err_vy = 0.6065682076194129;
    msg.rf_err_vz = 0.6439588308775578;
    msg.ss_x = 0.9851489591985809;
    msg.ss_y = 0.9369184243381203;
    msg.ss_z = 0.2106311316995816;
    msg.virt_err_x = 0.8855860335585084;
    msg.virt_err_y = 0.017110509824593056;
    msg.virt_err_z = 0.7210450069025932;

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
    msg.setTimeStamp(0.42894020647730613);
    msg.setSource(39160U);
    msg.setSourceEntity(149U);
    msg.setDestination(20833U);
    msg.setDestinationEntity(131U);
    msg.timeout = 65040U;
    msg.rpm = 0.6059998713402787;
    msg.direction = 179U;
    msg.custom.assign("ATBVSPHAJGZXLBSDKWLYHBVFWARKEVFCROGDHTTIOYSKRSZWJUDBGRUZEMFXBPYNCZCILDDUECOQTNLKAOQIRHSWKAUOJQMNHSZLDIYEUIUIFVNGYFPWMUDBWBJNNNSSMXVBAKKHQHIXWCVHUQFMGR");

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
    msg.setTimeStamp(0.9755274104193057);
    msg.setSource(15637U);
    msg.setSourceEntity(227U);
    msg.setDestination(48049U);
    msg.setDestinationEntity(141U);
    msg.timeout = 17392U;
    msg.rpm = 0.4839534330567953;
    msg.direction = 203U;
    msg.custom.assign("YQMQJJTBQDNFLQZEGMVZEIISHSWVAOVLISDVRGUTRMZMXDHJHTDPDPUWNJATLBNQXORJRWSCGGQVNTMRSLCYHNPZKOLNPIBXBMANECTOSZCIYLNXMBCEXYFYVRHQKKGPKFSGPHWOZBVVPKACUHWKFPRKYCJHQPEZRUAMNKAZXFCIEVUVAZPZGOEGDWDHJTDUOLSCSFQEGATQUFOXEJRMN");

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
    msg.setTimeStamp(0.9003640332822938);
    msg.setSource(50588U);
    msg.setSourceEntity(14U);
    msg.setDestination(18862U);
    msg.setDestinationEntity(8U);
    msg.timeout = 56963U;
    msg.rpm = 0.7472167055314883;
    msg.direction = 232U;
    msg.custom.assign("KUIQRUZLSJYYXNYELKKCVOBMRPRQLPRXOCFYEHIDNWBAIQHAIOIDOZBLJFPMCDHDNWYUXJZMVXZHDIBNKEEHLGFSMTKYXUQZKXVBAVGEWBNTFUVALKBDLXNGZIQTAHDVETLPECCMWSWUUTPVKQWJOFOW");

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
    msg.setTimeStamp(0.7359358673304279);
    msg.setSource(62141U);
    msg.setSourceEntity(37U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("OQXUHVLLDRRXVFMWNELVFKLTKFPQHO");
    msg.type = 146U;
    msg.op = 136U;
    msg.group_name.assign("ZERETXJFWKOCWYRSCBLJUVUTRZNGQLBQTVXOLJKUNHASAXEHPLKXRSXSYZZTXXUOFIQZFYTIKBBFQRWNDMGSSOITTSWPKDDWOBWCOAYMZCMUJJOMPILKOTHPGUMUGIVXARWMFDZAPHEERFFWIJQYCDISALGCRNIDNEUUYALLGRZFHTTHNOPGKQNHWMEJHZGCMPJPLPHECAMYNEBBVAPFNDYVFDANVMWGUIKHXSJVKYDJZBDQQ");
    msg.plan_id.assign("SWBYPXYCWZMZYJWNBNCMJESGSGDFNMUDYHRTIFELYZCQBKIKVSEUWPICCKDLNGRKNZOPJCXAZMGERRYLPMBTXNSADGTUFXQWOVHYNQJHJJWQVPBEJVDVTVJYHYEACBOLLFNQBMFLOERGCWIOOFFPCGZQDRUXHRMUCAPVTSQLSA");
    msg.description.assign("UQEZDBIYOFUXSPAMQDNJMAEQCEBHQTOBRNZXLZHLKOUTOJNGMVWFFCLQCLCJRDTYXHFYTSHHDKWRARVMBIMARTOGDUQODADVEOIPXLIBPKJOGPIHTKSCLEJWSUVKEHGAWSTGKZECVZVMJRTQGUZZUQFXUZSFLIKTPBXWRFVYUXGFGCAZBINJEQPHROPEWMK");
    msg.reference_frame = 63U;
    msg.leader_bank_lim = 0.8074396426579835;
    msg.leader_speed_min = 0.7323778931003514;
    msg.leader_speed_max = 0.11503843303865413;
    msg.leader_alt_min = 0.07366125134100243;
    msg.leader_alt_max = 0.6918573752840339;
    msg.pos_sim_err_lim = 0.18272265751462724;
    msg.pos_sim_err_wrn = 0.6706549319043241;
    msg.pos_sim_err_timeout = 36145U;
    msg.converg_max = 0.5511271342739404;
    msg.converg_timeout = 28280U;
    msg.comms_timeout = 14984U;
    msg.turb_lim = 0.29444122554981556;
    msg.custom.assign("XNIHAAOLEMAEWMSLNRJUGIBFXVZACKNNTQGTCKCKSJTPBDZBSYVTXJMYFAZFNBPFVMKKOHRXWVVBCSNCRDLUPESKGNXGKBJMWLHYVCWJSVTYVEZJFIRWORQUTGEAHIWCRHCMIOLTHIQZCLOAGIVYZPMSUUWWZHXDYPLPOPQXRMOGQIQEKHNAFJRDASMFYEIKPDUBDEGUMVOBQDTSWABGYUJJNXLXRQYZRUK");

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
    msg.setTimeStamp(0.24742000780943907);
    msg.setSource(45749U);
    msg.setSourceEntity(186U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("ZKEOAGVLIFHEACZPQLYLLYHNKXTEXCBKPZEJPARVUGJTEGCRAMBWUCPDTBHVIRFSGNKWLF");
    msg.type = 242U;
    msg.op = 206U;
    msg.group_name.assign("MDCRXWLJQVSUOQKOFFMLELVINKURHWQEKTYMSZCBOACGEXYUDGAAGTQTLIWNSPBOTGQZPKRBJKZWJVVMXHXAIEVSVFADBSULFWZNBOIJNPTVUBVIGMZDGPOVHUF");
    msg.plan_id.assign("BBOSZAHAJAQQGZMLZIDBFTAARTTBTYFWPDJFIYKSBFSZLNAYVOREFXNCEREDNVGHWYQPXCHUCTOQOTBHZFMQFUOOSQVLWYWGHYBHQLBYYLNWCOKPZESNIIFJIKRJGCZBJXIWHJDAHTEGCXEVPWVCYMJ");
    msg.description.assign("FTXGCZWCZPYXFCRQUXZKHOPIEAMBCOXJWUOLFSAHRBPPGZSZNGYNHJJBYNVUNHFZLZISTLMFIYDWERCKWJQKHOBODTJZEDIKPOOFILDDEOSGBYUCFQPJXWVNQSMSRYVUAHIXQDXKTRVILACNPAXGDYWALQVQEKDUERFULCXQVASVLWWBV");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44670U;
    tmp_msg_0.off_x = 0.909077322747124;
    tmp_msg_0.off_y = 0.7268666897283259;
    tmp_msg_0.off_z = 0.39232718256195287;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.00813431023120359;
    msg.leader_speed_min = 0.7970313599386877;
    msg.leader_speed_max = 0.3096526963635736;
    msg.leader_alt_min = 0.8010572318535655;
    msg.leader_alt_max = 0.18229900752180894;
    msg.pos_sim_err_lim = 0.22934103094698532;
    msg.pos_sim_err_wrn = 0.24309342289664637;
    msg.pos_sim_err_timeout = 25098U;
    msg.converg_max = 0.5054614331003311;
    msg.converg_timeout = 60267U;
    msg.comms_timeout = 34651U;
    msg.turb_lim = 0.9899525073502519;
    msg.custom.assign("EDONGERFHNOASCOWOXVRXYJJFIMWTCFIBGDWZZEO");

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
    msg.setTimeStamp(0.13021900538206543);
    msg.setSource(21892U);
    msg.setSourceEntity(21U);
    msg.setDestination(62315U);
    msg.setDestinationEntity(11U);
    msg.formation_name.assign("WIOIHMEVLYJETBTMCCDHWLTCNURZVSITNMLVFBQWHQBCKLYWQVILBYEKBALAHUHOOKIXPTMWGVLMSXQVKMYDLSUADMSXFGDQWSJKEOPZAUAWMUFINUKTZHBWIRTPXLGKSFFIPJVOERXKYDZCUZYRETZRQWMOENOBNNSRGVGFSVFDKCAHYGJRRQXAQFVJXJYCZJINJSLPEOOCZOMGDFCURNDTGYSP");
    msg.type = 159U;
    msg.op = 252U;
    msg.group_name.assign("KPNWNJZNSZPZBCICRKYMCDDEBZTYAOQXKETYXQBZILTXYRO");
    msg.plan_id.assign("RPRSQHDDUJEWWXWBDRIODSMKQAZPOURJCXEZKUMYIOXTLUEARIAJEMFOZLBLGMZFKJYXXFFRZOEMVGTQUHQCTMOKQXMSORTAVZVEUBCLVFXOVSBZYCNNFULGQPYXVNWPPBBVYYTAUQTBAHCWGQU");
    msg.description.assign("OCAGBRJOHPQVXQKAZMCQYWNWGYTHKZ");
    msg.reference_frame = 94U;
    msg.leader_bank_lim = 0.5779635171532969;
    msg.leader_speed_min = 0.648600911075043;
    msg.leader_speed_max = 0.28208940070670574;
    msg.leader_alt_min = 0.6554881048914216;
    msg.leader_alt_max = 0.02593819592564972;
    msg.pos_sim_err_lim = 0.3735419537558675;
    msg.pos_sim_err_wrn = 0.67132908553414;
    msg.pos_sim_err_timeout = 62398U;
    msg.converg_max = 0.29473010179139814;
    msg.converg_timeout = 54363U;
    msg.comms_timeout = 10064U;
    msg.turb_lim = 0.6005380057486707;
    msg.custom.assign("TJNADVCOWRQFIOANSGHPDRWPGLZEZMGFGYMLKXPBFDSFKGYLHVLKEUNWEBRRIGSTVFDLGHDIDSHUAXVK");

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
    msg.setTimeStamp(0.5591109232610953);
    msg.setSource(60446U);
    msg.setSourceEntity(133U);
    msg.setDestination(5863U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 26U;
    msg.error_count = 24U;
    msg.error_ents.assign("OHGUYSVKXMUQCLJQMRHFHOMFICFNAWIXAZUXLDOWXRKTPTJZQDXJMLLNUXBWIBRTWQUOMJAYQKLWYCPWXEBPHRBRAKAVNJTCNJZDVPRERNUJSFEGJMEINUZRTXVGAVGMHKAICIRV");
    msg.maneuver_type = 17201U;
    msg.maneuver_stime = 0.8371728873314082;
    msg.maneuver_eta = 59631U;
    msg.control_loops = 3862895130U;
    msg.flags = 99U;
    msg.last_error.assign("OLFUZWMIUAZKHSLFRIVZRYVZUPWNBEMGMKAIABBVSLCEUHAPVDELSYHXYFIKJWAYLKDAJCYFTQSRNIYTSDXMXTPLXBOQPCGRBWJKFJJPPNONLHDRQUGCUCZNDPSHZHUNQGTEVAJNMQVXOGRN");
    msg.last_error_time = 0.49556557026184334;

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
    msg.setTimeStamp(0.6405325153613434);
    msg.setSource(29994U);
    msg.setSourceEntity(69U);
    msg.setDestination(64694U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 60U;
    msg.error_count = 204U;
    msg.error_ents.assign("BKBMDJMQNIEBQSRXPRHYNPIVBVTIXXOXFCALZDZZGZHDIGGAZEGODRYDXXUWOYRQIFDTVCSNR");
    msg.maneuver_type = 55164U;
    msg.maneuver_stime = 0.8573983719329388;
    msg.maneuver_eta = 54400U;
    msg.control_loops = 863832086U;
    msg.flags = 30U;
    msg.last_error.assign("EAAEYGOVWZYTTYBKXH");
    msg.last_error_time = 0.2959519124524035;

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
    msg.setTimeStamp(0.11989255443436919);
    msg.setSource(2664U);
    msg.setSourceEntity(200U);
    msg.setDestination(53297U);
    msg.setDestinationEntity(158U);
    msg.op_mode = 206U;
    msg.error_count = 146U;
    msg.error_ents.assign("FKVWOXDYLQOUEUWUTSJENTRPICRXCYRSNMGBIRLVUMWRPILZGBMNJFVCGOVMFXJPWKXHOKLNFWISZZHKRMCGQQDDSCRTMZPYJJTDOEVHBKHDKJQBKUSEEAIJOGCPFEBNRJTZNKPMOKUPQPHYQMNHESYDGAPBFICXVZGNUTCVOQLIWVHOJFAJIYFXHVGQADXXNFSQTQAWDUYSAALCAWZEBXBLMWXKZTRI");
    msg.maneuver_type = 49U;
    msg.maneuver_stime = 0.30029822180106314;
    msg.maneuver_eta = 54887U;
    msg.control_loops = 2688883152U;
    msg.flags = 142U;
    msg.last_error.assign("PEAWRIIRBJCYHCHBOCDXKVIFGQSUSAZKBLKLTIAYNWXBSONUDXJFGLUZUCHJEYJJHWFEPCQRANAFDAOPXLQMNAKSTDOSBTVGDAQCBROQHJLZRVDDQGZRYNOKECWCNXVHQKWBUMMTDFZJKTYZTVIBIUMRURNIEYHTGLLCWGGELSFTY");
    msg.last_error_time = 0.3295529049653265;

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
    msg.setTimeStamp(0.7992100700330504);
    msg.setSource(42418U);
    msg.setSourceEntity(3U);
    msg.setDestination(51968U);
    msg.setDestinationEntity(225U);
    msg.type = 65U;
    msg.request_id = 1651U;
    msg.command = 222U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 21429U;
    tmp_msg_0.lat = 0.4516850826333936;
    tmp_msg_0.lon = 0.45732978793927803;
    tmp_msg_0.z = 0.9940529562865172;
    tmp_msg_0.z_units = 197U;
    tmp_msg_0.speed = 0.6353713792835498;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.bearing = 0.22850766088957863;
    tmp_msg_0.cross_angle = 0.35645344126428236;
    tmp_msg_0.width = 0.5341546588143435;
    tmp_msg_0.length = 0.25647655418084137;
    tmp_msg_0.hstep = 0.8682812234776542;
    tmp_msg_0.coff = 189U;
    tmp_msg_0.alternation = 86U;
    tmp_msg_0.flags = 94U;
    tmp_msg_0.custom.assign("HESIQEBCNAVOXKWYVVHJSWGDEBYVRIBBFDSXKONYLUXEAEUBRTTCETHVKAXFNYTYRUMIJNDJVLJJPSRGQPSNSPIHPQJCLQJYVAISPOXLLXDHNECGROFLQJQYVRFFSQBFHBBXKFOZOASTZUBEUHAQGLWPEPZMKIZNLTKWONMMUAWPDITLVBZNZTPFCGOJHDFPUXCKZHUCGMIAUOHYIZWYSYZCJOTGRRMXDGDMZADNWWMACMULIXWCGKEVKGDR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30322U;
    msg.info.assign("BHDBDMAGEGZMLTYPYQTEZUGOAEVYQSYTACPHVEOQQWPBOULFXETXZPRCBNFZZGNCOCZNURBOXWFSBJBSJLSIKAKSWQFDNSJQAKIFGYAHLGYPUVJXFKOSVCRCRQ");

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
    msg.setTimeStamp(0.4267588317017119);
    msg.setSource(55576U);
    msg.setSourceEntity(152U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(84U);
    msg.type = 245U;
    msg.request_id = 31990U;
    msg.command = 206U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("XDCWHZXVXNOBYUIRCFPWQPKQFLYGSZAXVNCOKRBOEXGDMEMYITDFXPAOAHUYTCOTRAKYRELKFVNGYSQWDBEFRPGSEJZJISZHTNYNTMYBUVXNJJBROVIIILMSELBDFMSYBAPNOLOZMSXNZPCK");
    tmp_msg_0.formation_name.assign("VWXNTWXLQWXSIDLTDBXDSACFXYFCFIGCHSUEUYLGOTNGRSPFPYSBQJAOBFYXCNMAXMYYENRLOGIJIHAEWQCOQIRLVSRWUJZUHAPZHJMNAKNKZUFHYPMBMCSTQLPEWAMNOSWFJDMHUVIXPOFBXDRPTPBGJTJWCYDBZZTGKVIHFLGRUTVGREEYDQFHKJVESJABHXAWSPHVMEZIRTQCLKZDA");
    tmp_msg_0.plan_id.assign("DPSBJWHYEMKQMRMJSLRFSYAUXLCKBXVOASCCNQLZCLOGOHIDFLBVAZ");
    tmp_msg_0.description.assign("SNAILGRGNRFQUYLIGGVOQZUTBDLYDGMYKNIBOLPHCSCMKHDTXCHQOXDXOKOHVZNERWFXUZDZBYMLIQOVEZQVDBHHQJFJRESEIWAUVBSCNSMRPCFJXMKCUAJEKTEWJTDYANHPLQSISJKU");
    tmp_msg_0.leader_speed = 0.08204051452718197;
    tmp_msg_0.leader_bank_lim = 0.35600732363075216;
    tmp_msg_0.pos_sim_err_lim = 0.18584351315892422;
    tmp_msg_0.pos_sim_err_wrn = 0.8897530317274485;
    tmp_msg_0.pos_sim_err_timeout = 61453U;
    tmp_msg_0.converg_max = 0.8299943997260272;
    tmp_msg_0.converg_timeout = 15214U;
    tmp_msg_0.comms_timeout = 48812U;
    tmp_msg_0.turb_lim = 0.7797388640649046;
    tmp_msg_0.custom.assign("ERBXNSXYXZLMUYZOSEIGDSINAOSTDTYDOHMKTQUVDGCIRAUYQJKHO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12217U;
    msg.info.assign("FZMABURLSLFSLJYBEAIQKYHIUGMWCXYBKIRKFFXTTDRBFNGRGLEJXMCAVKPYNHLSPGUAOKDJYECIUCJQTIEDTGPWQCUPEEZKLYFODLLZRCABWSJJHTEMZQHQYEPJWVXXNQVHVA");

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
    msg.setTimeStamp(0.6975491453262247);
    msg.setSource(17513U);
    msg.setSourceEntity(166U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(105U);
    msg.type = 123U;
    msg.request_id = 38693U;
    msg.command = 118U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 29547U;
    tmp_msg_0.lat = 0.2997059189941569;
    tmp_msg_0.lon = 0.4441707584868332;
    tmp_msg_0.z = 0.010803460125338615;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.pitch = 0.18097524448392965;
    tmp_msg_0.amplitude = 0.7032970155908785;
    tmp_msg_0.duration = 22438U;
    tmp_msg_0.speed = 0.5282280485573307;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.radius = 0.21676533296571443;
    tmp_msg_0.direction = 205U;
    tmp_msg_0.custom.assign("IKDPAENVITBWATDIOXUMGFEHLDGVVJHNHYK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20855U;
    msg.info.assign("LHDTRADPVIYPVDPIDFVDDMFSSTXOGUHFWTRFZGPZXWYVQFJNIQVDBTGHLIOWMTAXPBNUYYPOEUNIFKAHESIUWBGOCNXQWTAERNBHPKRQZSJORFCONZXGZWYZXRMCQXGMALIVSCXRBLUJKMAYLDWRVJBCBMZQXQJHEBLHCEAOZAKIWKKSHTAUG");

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
    msg.setTimeStamp(0.12484785245006924);
    msg.setSource(4688U);
    msg.setSourceEntity(24U);
    msg.setDestination(4631U);
    msg.setDestinationEntity(11U);
    msg.command = 106U;
    msg.entities.assign("NJDHVIWPWQSTJAFYTGQGHLUJZLGFJITGXVHVDLFMKLFEAKDSCADAOVPHMJKDQNFCEWPZRJBSYMTYADRJYTPHBARSKEKUTEQXKNJNBVPDIARYCVH");

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
    msg.setTimeStamp(0.7462647656080689);
    msg.setSource(33977U);
    msg.setSourceEntity(203U);
    msg.setDestination(13025U);
    msg.setDestinationEntity(21U);
    msg.command = 137U;
    msg.entities.assign("XJUPMEUTMBMEGFSSKBFEMEFBZAPJDEVWQOAKMSBPFHDTIMTXNCPRTHCPYNHREFMFCINNGPWLELGDVXWAPBJACUQJHCMVIVXYTDSINXVVBBZYYUZTRPBKAKRICWERDROOLYDNUQXXUTOXNQDLHYFFSHOTPHQWZXZCNSLQHUSWJGTQLUZCOVDFZHANCKWSJEVKRLYQQJLPAMSGZOFGUYUZIAXCWIKGQRABNJKSBGYEZAGGIOMYKOIVHRWKDTRLLI");

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
    msg.setTimeStamp(0.8834999570678784);
    msg.setSource(44000U);
    msg.setSourceEntity(22U);
    msg.setDestination(8532U);
    msg.setDestinationEntity(199U);
    msg.command = 39U;
    msg.entities.assign("VHTDMJQZURCFWUKIZYVDNPIKULNRMSVFYMPXAQYDCKJO");

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
    msg.setTimeStamp(0.7166887780022951);
    msg.setSource(23984U);
    msg.setSourceEntity(144U);
    msg.setDestination(57222U);
    msg.setDestinationEntity(153U);
    msg.mcount = 245U;
    msg.mnames.assign("RZJWDLGEEDXHROADJRNZYBCAHPPUZTDCKWKZGVHIEXFQGAWYNATCKHCEJYHYRGFSRLIKWRFLEIQYEWMFESNDBUSXNPVMWDZXOOMZTKAOALMZTCYQLQJLNLSIPYETFFOVAOOSGMWYXQKZCSBPWWPHGCJZVNOFUITYKRSHWQFGBNQBIL");
    msg.ecount = 186U;
    msg.enames.assign("UHKRMDVQIJDFAZMYAZYSCGRBPTATAMWHGZAXHOSVOPJSSOFGJQBGWNYTIGEJKSXJEGMBJWBBYXVOCORLONXRCDLSLIXAPPXWNIHBELQMIAWJKCCHRVXFKYRQMDUQUHNLYBETKLVFJNFRDP");
    msg.ccount = 83U;
    msg.cnames.assign("HHYJUKFLKXVXUYUYHOACCGZBWNWCAUZUIDNQAQECFPGZXURWMVDKLFUMMWTFWZFPKFJCDSOSZMXWEXTYAOZTHIRAPIFGJJQSSZDTXIIREBFHKYJXNMMIPQHHNGJVSROVGTOSRQLEMBPOILZUJTPNYJDWDQCSETMLBBLQBLQRWOFBTDRLANHRZIRJIBLEV");
    msg.last_error.assign("GTINJOXHGPHQMQMQSHVITXKWYRILAFYWRUZGUYFODFIVNPUOKMHOBKKKVTYCABXTCMCRTZNHPKJ");
    msg.last_error_time = 0.04947991642260796;

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
    msg.setTimeStamp(0.4759404449783424);
    msg.setSource(4503U);
    msg.setSourceEntity(193U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(216U);
    msg.mcount = 215U;
    msg.mnames.assign("YRXPOECYKQANKZRUZJEDOFQUDPJBHNLSEDWYBFEMBKTCCIILOSPOJYVGFINTJSWWCORUCHELWDREEKCQQKGVPGWWMEXGWBAXZJLRXOPBTFRWLUGBMUSGSCPUMLTVNHBTOPZIDXYIDKFNQDCWLHHATSZDZGHFTIAXXJQACOJHBYZYSQMTPXGVQNYMCFKDHZEAASXONLQZUJXIUMJTLNAMSLZRVUKWKYMNSVR");
    msg.ecount = 121U;
    msg.enames.assign("DYSWJXLHIGCLCAHBOYGCRTMJLUADQZYINKEFTJPSTDVHXXRZKVYIDN");
    msg.ccount = 120U;
    msg.cnames.assign("KZELIUUDYDZEKWSWGUEGJCLAFPGPVJZVZTBYOMFAZDHKUKOAPQJDWKCXYYDMKHIPCHLGBMRZDEXVYQPGYIONCSPFSJNSRMBAVQMOCKLQADCFHJHIQSCQMWVOQXXUFNIMISMCXEHBRFTRWLPOQLDPGFNHOASXBNOUJFAYJLNDVLXJVKCKRZETDA");
    msg.last_error.assign("XWUWAWBJLKDCDSTPZRJGWJLFEGUEHTSHYLFGNPONVIOINUOVPRVBDEXZABLDANNJYGINZZICAIKWSSUPVIMCSBXZXGRRYQGTZIKURUETUDDIAXLHTYGEGKSKOHPXFQVBEMMTNNFTDESTRHYZYVDPWIAQBMSOWZCCYQTTCPMXBJUVKXEHWBW");
    msg.last_error_time = 0.21274166187590948;

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
    msg.setTimeStamp(0.24492703313903597);
    msg.setSource(63717U);
    msg.setSourceEntity(221U);
    msg.setDestination(55997U);
    msg.setDestinationEntity(110U);
    msg.mcount = 146U;
    msg.mnames.assign("NMAVXABJGSEKFSOOMETXCEJUNOQSVFKINGYRWGUXYATTUBFNLZDJGPYNCFOPPUXMOHTLELJEIBIMXWKJXRWWVGXMPYGWDSCWDWZLDDSBZIQPTQNUGZWLSJUIQNNEJAVKQBMVRQHFYWACYDKMSVVEBWHJYOHLTXRKZBUDYBAQOERMAIMZZTGDCNLIITBIAHSKIPZHCXOGJTYRFHF");
    msg.ecount = 98U;
    msg.enames.assign("CMMKZFUPGTAHZJZGAWMHODTPNXHZPGBHCUSXFRAZZAFCUGXKOOJIYQMIYECRVKAIINJVVSIOVKYYLYJYDASUKXMBEHHHHANPXWLFUFQVTKXRWLMMGDPIZTWOTRRSLYDLCIQWOBTRRQHAKIPCESNFFECBLEKDNPRSMVGCBZDEXSNLPNFDWUWROBIJWTTVNJTLDSAPQBVFYDUWJMWZUGZEHGNEXKUOVQ");
    msg.ccount = 186U;
    msg.cnames.assign("JUIZJUXGTBRDUGYFJYQDFEJEAFPPODHEUJBLVMPTTNCUAJVHZGIPLRWFAUWQANJYNSHHMQZCUBRPWTXONDFOGIDNRKCCFNAKTQLXKAXZHBCVLOZXLMZLIGSKBTGJRBESEWJCFUAYSFOIQRYPREMSZMBVMNYCGDBXLZRKYSDCMQMNMHHKCEAEXKKFG");
    msg.last_error.assign("YKQCBQGJRJPZCEMCRXTYPNDKSOYCMLSWTWQAFSEEIGXCDTOREUVGQIDTUKRYFMGDBAYVDCXKUSEOGPPLAULKUSBZSPZDFORWXIAMEEJBTDPTOVVEEILNLVWJIQWZOWKC");
    msg.last_error_time = 0.09892291152443211;

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
    msg.setTimeStamp(2.1780263739779038e-05);
    msg.setSource(57296U);
    msg.setSourceEntity(81U);
    msg.setDestination(57720U);
    msg.setDestinationEntity(163U);
    msg.mask = 178U;
    msg.max_depth = 0.7631696485162824;
    msg.min_altitude = 0.8057231637234273;
    msg.max_altitude = 0.7159595670049812;
    msg.min_speed = 0.2622021484605802;
    msg.max_speed = 0.6512298646572217;
    msg.max_vrate = 0.910848618185462;
    msg.lat = 0.20531337566286822;
    msg.lon = 0.13196486250282402;
    msg.orientation = 0.23900017629416304;
    msg.width = 0.75621434169075;
    msg.length = 0.8431874407805342;

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
    msg.setTimeStamp(0.9473518725359116);
    msg.setSource(15434U);
    msg.setSourceEntity(191U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(14U);
    msg.mask = 136U;
    msg.max_depth = 0.03025010125700678;
    msg.min_altitude = 0.8824814000730297;
    msg.max_altitude = 0.10031121827343392;
    msg.min_speed = 0.35044814070962327;
    msg.max_speed = 0.6336312543772126;
    msg.max_vrate = 0.42891006120444053;
    msg.lat = 0.08276232457723964;
    msg.lon = 0.8197199351986355;
    msg.orientation = 0.8750682279316581;
    msg.width = 0.006522309302404383;
    msg.length = 0.8938632978076235;

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
    msg.setTimeStamp(0.7676484023796986);
    msg.setSource(1503U);
    msg.setSourceEntity(5U);
    msg.setDestination(43251U);
    msg.setDestinationEntity(138U);
    msg.mask = 246U;
    msg.max_depth = 0.1174449767521073;
    msg.min_altitude = 0.7681060975397901;
    msg.max_altitude = 0.7896013699775596;
    msg.min_speed = 0.05351281478649805;
    msg.max_speed = 0.43356132616766585;
    msg.max_vrate = 0.7990840621311919;
    msg.lat = 0.7439110104261423;
    msg.lon = 0.425699095675097;
    msg.orientation = 0.26104219734528;
    msg.width = 0.30359447791345817;
    msg.length = 0.48759528236182537;

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
    msg.setTimeStamp(0.5848797143674159);
    msg.setSource(19293U);
    msg.setSourceEntity(50U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.5109330073779883);
    msg.setSource(62600U);
    msg.setSourceEntity(106U);
    msg.setDestination(31330U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.34018217844393595);
    msg.setSource(34230U);
    msg.setSourceEntity(164U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.38421425951266797);
    msg.setSource(61990U);
    msg.setSourceEntity(169U);
    msg.setDestination(5097U);
    msg.setDestinationEntity(196U);
    msg.duration = 1506U;

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
    msg.setTimeStamp(0.7009988858140379);
    msg.setSource(24748U);
    msg.setSourceEntity(51U);
    msg.setDestination(34826U);
    msg.setDestinationEntity(56U);
    msg.duration = 16810U;

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
    msg.setTimeStamp(0.5227969800419947);
    msg.setSource(13491U);
    msg.setSourceEntity(252U);
    msg.setDestination(56606U);
    msg.setDestinationEntity(210U);
    msg.duration = 47244U;

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
    msg.setTimeStamp(0.7352104928387434);
    msg.setSource(9954U);
    msg.setSourceEntity(110U);
    msg.setDestination(39655U);
    msg.setDestinationEntity(125U);
    msg.enable = 211U;
    msg.mask = 3622315046U;
    msg.scope_ref = 10705735U;

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
    msg.setTimeStamp(0.23280957085612197);
    msg.setSource(40637U);
    msg.setSourceEntity(70U);
    msg.setDestination(9777U);
    msg.setDestinationEntity(238U);
    msg.enable = 84U;
    msg.mask = 2900584767U;
    msg.scope_ref = 3606170474U;

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
    msg.setTimeStamp(0.050354721516367995);
    msg.setSource(43948U);
    msg.setSourceEntity(86U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(119U);
    msg.enable = 230U;
    msg.mask = 2006097101U;
    msg.scope_ref = 4097455349U;

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
    msg.setTimeStamp(0.5949382789355413);
    msg.setSource(65487U);
    msg.setSourceEntity(185U);
    msg.setDestination(48480U);
    msg.setDestinationEntity(62U);
    msg.medium = 164U;

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
    msg.setTimeStamp(0.7893066923041571);
    msg.setSource(40356U);
    msg.setSourceEntity(6U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(50U);
    msg.medium = 128U;

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
    msg.setTimeStamp(0.7378616692721189);
    msg.setSource(11306U);
    msg.setSourceEntity(210U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(24U);
    msg.medium = 130U;

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
    msg.setTimeStamp(0.22771439958906714);
    msg.setSource(56078U);
    msg.setSourceEntity(7U);
    msg.setDestination(32605U);
    msg.setDestinationEntity(220U);
    msg.value = 0.5115703871948772;
    msg.type = 39U;

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
    msg.setTimeStamp(0.8443952751359568);
    msg.setSource(35854U);
    msg.setSourceEntity(241U);
    msg.setDestination(61850U);
    msg.setDestinationEntity(185U);
    msg.value = 0.4265715851940609;
    msg.type = 50U;

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
    msg.setTimeStamp(0.13150827056934988);
    msg.setSource(38718U);
    msg.setSourceEntity(210U);
    msg.setDestination(40597U);
    msg.setDestinationEntity(231U);
    msg.value = 0.8467531633289846;
    msg.type = 103U;

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
    msg.setTimeStamp(0.9379750688544065);
    msg.setSource(25679U);
    msg.setSourceEntity(190U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(177U);
    msg.possimerr = 0.2456759838456649;
    msg.converg = 0.8941420722890728;
    msg.turbulence = 0.845760488623462;
    msg.possimmon = 166U;
    msg.commmon = 75U;
    msg.convergmon = 146U;

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
    msg.setTimeStamp(0.29283482210306955);
    msg.setSource(49249U);
    msg.setSourceEntity(218U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(86U);
    msg.possimerr = 0.37829785477112476;
    msg.converg = 0.8670652908554639;
    msg.turbulence = 0.20282976385937934;
    msg.possimmon = 116U;
    msg.commmon = 166U;
    msg.convergmon = 138U;

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
    msg.setTimeStamp(0.9291483881867646);
    msg.setSource(1617U);
    msg.setSourceEntity(32U);
    msg.setDestination(3436U);
    msg.setDestinationEntity(68U);
    msg.possimerr = 0.9720614084407988;
    msg.converg = 0.6732341564211181;
    msg.turbulence = 0.05231480132436872;
    msg.possimmon = 55U;
    msg.commmon = 117U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.8823818997529738);
    msg.setSource(49797U);
    msg.setSourceEntity(109U);
    msg.setDestination(23613U);
    msg.setDestinationEntity(220U);
    msg.autonomy = 68U;
    msg.mode.assign("LNLTQHODLCIOOHZHFFLTTEVHMNRCFKXHKSMVCVNQZDPWYERZRQQZOVOLUVXPGJDXYUIBXQUETHLSKKYTPTPQVDHXGXRKUIRFUKYONKIEROLSIJZXMJWHLMULWROCZ");

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
    msg.setTimeStamp(0.9982077296376103);
    msg.setSource(42325U);
    msg.setSourceEntity(46U);
    msg.setDestination(12033U);
    msg.setDestinationEntity(170U);
    msg.autonomy = 183U;
    msg.mode.assign("KEDSULEYPIPFNEAZAQPNLHRXYTMKZMCQYYLZUROCTFUWSXJIWXTSFPYDJNSXKXS");

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
    msg.setTimeStamp(0.5118731323635693);
    msg.setSource(43169U);
    msg.setSourceEntity(5U);
    msg.setDestination(21189U);
    msg.setDestinationEntity(46U);
    msg.autonomy = 167U;
    msg.mode.assign("PCWZTCNKQZFDOSIZRUQCIM");

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
    msg.setTimeStamp(0.3631547864727168);
    msg.setSource(39289U);
    msg.setSourceEntity(26U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(235U);
    msg.type = 28U;
    msg.op = 141U;
    msg.possimerr = 0.28683743754155233;
    msg.converg = 0.7939374297802118;
    msg.turbulence = 0.6292060391194201;
    msg.possimmon = 128U;
    msg.commmon = 18U;
    msg.convergmon = 200U;

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
    msg.setTimeStamp(0.722841043678897);
    msg.setSource(621U);
    msg.setSourceEntity(118U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(135U);
    msg.type = 210U;
    msg.op = 115U;
    msg.possimerr = 0.06437157095104229;
    msg.converg = 0.8568135140537051;
    msg.turbulence = 0.3289556171828172;
    msg.possimmon = 125U;
    msg.commmon = 200U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.5452068643989734);
    msg.setSource(4303U);
    msg.setSourceEntity(86U);
    msg.setDestination(45364U);
    msg.setDestinationEntity(108U);
    msg.type = 245U;
    msg.op = 111U;
    msg.possimerr = 0.29234117307542495;
    msg.converg = 0.773146678121128;
    msg.turbulence = 0.14235228019596702;
    msg.possimmon = 65U;
    msg.commmon = 73U;
    msg.convergmon = 215U;

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
    msg.setTimeStamp(0.9925228337643422);
    msg.setSource(30380U);
    msg.setSourceEntity(2U);
    msg.setDestination(43213U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.3989219469076144);
    msg.setSource(37630U);
    msg.setSourceEntity(210U);
    msg.setDestination(8741U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.12311379529487376);
    msg.setSource(48385U);
    msg.setSourceEntity(23U);
    msg.setDestination(39265U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.5084453736030685);
    msg.setSource(48988U);
    msg.setSourceEntity(126U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("GJZOYVEDQMJNRMYLHNTQIMNIPRKULWNLRSWRIAQMNCIFKJQCOWPVDENEPWHPRROTTOIVVYJWYAFKJMECIHDXDCHBRAYVUHEJTOAWRXBLDZHMELAGITMGGSNVGSKALSCXIMEBPXXKUSQWCTEKMTFCSXQBDQULAHFZZGQFTVHJBPWRUANVBOZPJBBKCPRYZMONT");
    msg.description.assign("XJCZFHSJNHLAKYGJNWVTZTLUSYHYRMHVFURALTIJPLCICPFRDYFEPLBXXBZGTHZSRMQUXYXHQRMABCBTFRKTDECSYYVKDWJVNKYHRFNFVHRDAOMADKEITELAEPKESANZENJMSWMOROKTXCLAPNXWUIGLOXWCTJZJDQAPWKPLOMOGGPZFCJDGB");
    msg.vnamespace.assign("ONMQRVFOMCKTEWHJQNKVRUSAKGFPNGJBWOUETTKPKKOQVDTKHRMCITNKELIVYJDSSTCHBFBMUBLXHFAIILWJMYZJPBEHOZLNARBTLCZDEIVMXN");
    msg.start_man_id.assign("DBANWJVRPEFYVECBZLQMGRBCMJXBHXAZQEEJZKUEYFSSLWIHUGHHVFOPIORPVDYTAVANEONHHFZQLPBXCZOYOGTYYKIOIHMFITJRQRH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JWKOMOCPFJDHUWXQWDTLHQPTPJXGXVRDRIKRVOWNESFINQI");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 51485U;
    tmp_tmp_msg_0_0.control_ent = 5U;
    tmp_tmp_msg_0_0.timeout = 0.17862966683531767;
    tmp_tmp_msg_0_0.loiter_radius = 0.21006153889305934;
    tmp_tmp_msg_0_0.altitude_interval = 0.37618816016260404;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblEstimate tmp_tmp_msg_0_1;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.beacon.assign("ZVCVBNJCLRUVZYTLWNOQEDGUJMPMZHOEUVSKWGOSTNRNCEMMABPGDFQNMHEJINYDHSXQD");
    tmp_tmp_tmp_msg_0_1_0.lat = 0.20239069553086808;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6236209044448519;
    tmp_tmp_tmp_msg_0_1_0.depth = 0.11467953949980325;
    tmp_tmp_tmp_msg_0_1_0.query_channel = 176U;
    tmp_tmp_tmp_msg_0_1_0.reply_channel = 57U;
    tmp_tmp_tmp_msg_0_1_0.transponder_delay = 222U;
    tmp_tmp_msg_0_1.beacon.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.x = 0.7091675403898843;
    tmp_tmp_msg_0_1.y = 0.7555750343351109;
    tmp_tmp_msg_0_1.var_x = 0.5804376563439667;
    tmp_tmp_msg_0_1.var_y = 0.028194414642974452;
    tmp_tmp_msg_0_1.distance = 0.24885957435686046;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UamRxRange tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 12678U;
    tmp_tmp_msg_0_2.sys.assign("QQYYCJLFMDIJMIKZCGFWGNLSNEBJPCUIKTYWMVXZNNCWDEXLDNPHECFKWAQDRSAIQAMLRZCSHSTXTUNYPA");
    tmp_tmp_msg_0_2.value = 0.970606201078341;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NJANCQBPAXSJPWOJ");
    tmp_msg_1.dest_man.assign("JYIMESFCJBRFGZOHDVTZULNAKNREMMQZEOKNQVANFNVNLBSRUICCQGLMX");
    tmp_msg_1.conditions.assign("TTBYOKKSXUUKWNPDGLWCSXSSYQYOHOGTCWBZKQPMIFJNEGGRQCYMMJRYKOQFFOVQSEVEMOKNYXSAWUWHUPTAZRQCIRCLSSEXPUIADNHNVCDBANHDZDBXHFYWTEDAXDPFFBVHFQJROERLAZEWVZLLTZWJLKUMJZRUKBMRNXAXPVXESDTPIRMMUJLQFPTQDPUNBIJEMVFJXBNBWHHLWY");
    msg.transitions.push_back(tmp_msg_1);
    IMC::TrexPlan tmp_msg_2;
    tmp_msg_2.reactor.assign("BWCALIUVUYRRMVIGDPKSNJKCGXVQTRHGCQOFEJI");
    IMC::TrexToken tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeline.assign("XMMLWZPSICFKXKQTEARZEGHSRJMFBCFLTUHYYZLJX");
    tmp_tmp_msg_2_0.predicate.assign("XLWYNTJZRQCJXHPNTCQPAJLBGZHWBXSXITUGDGIWTDEHLEBSTSAKNJHTRQYDRDVFOZOHRLSGFAAFIIRULBNOZVASJASGQUPUYJBCHJENACSFESMPWWEKLXRVVMRVCEKCOONQQNZHHPZLZNCXUMWTXHQBEKGVDKILDXYRRQJIKJSFSKFRWIMBGYDYCFWMMCTQUOZAGHYBVYKWPGZZLFXLDYAFPPVPMBNXOFVEEUMTMKBOYNUIUQTI");
    IMC::TrexAttribute tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.name.assign("KHOXWLLQYYOYQILXGQNMCQUBPEZIXOLZSCTRIJSSBDFODIGPVVNREXTPFACTDKPJVJYTDCZWOWTMZLRARXGQWQDHMJPM");
    tmp_tmp_tmp_msg_2_0_0.attr_type = 118U;
    tmp_tmp_tmp_msg_2_0_0.min.assign("AGIWIAHSNCLYUGXTYTCOSBMMUCKLIOKSEKTBVLXUUVFAZNJBSQQDEOYEOQFEWFARTWCTZODDQXUFUNXLGWVZDPERPNKS");
    tmp_tmp_tmp_msg_2_0_0.max.assign("WOMAEIVHSGBIUTMYPNYUEEZHBZEVMNTOGHCLKZDLBKHYHBGHSPXBPGYPLTUQDARLNJLZGXWPAXAXAINDLFTYDRUMFAHTPKSKVIROECMPFFJMXZCJUDII");
    tmp_tmp_msg_2_0.attributes.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.tokens.push_back(tmp_tmp_msg_2_0);
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PathPoint tmp_msg_3;
    tmp_msg_3.x = 0.27975556043416105;
    tmp_msg_3.y = 0.9966074592770628;
    tmp_msg_3.z = 0.269837839775936;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.44808073377274793);
    msg.setSource(62136U);
    msg.setSourceEntity(127U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(83U);
    msg.plan_id.assign("KCQIVHSZQXOWWXRMWTIYUAQWMCANJQSLRZMIYLIGVCWZKSRJBVQCGMTCQEMPPKWFALPYFXKUOPNIPMMPBTDAGTIZDLPEVFFMZIBXIHYLPVEVORIOSNCUAFNHWQOBWSWNAYJFTHDLJXHKJNYHALDIEOBPHREYJQBLGXSTBUBVDDNGU");
    msg.description.assign("DVWLCTTJRRIIRUKPADNPADKLJLHTYMFOFARESCDJSDBYCDQSMMCSLGKLHFQYYCXGHASAICIHFUEAGCRZYXLXEQEPFLANTGKHKMPIQ");
    msg.vnamespace.assign("MKZRWGLAJBOLZVVTTSXGMMBEQSEUHLJWRYXELXFARCMEGZEYDVWWPIBGGIBHBNCAKLTKVFZUBTGJIJINOPDGJMDUYKCWKCKHWZRFTVPDOBYZNKSIAUQOAIQVTGRQRJNYC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BYNJJGUVIWXSGQRZPKJMKLPSXOUEFUOUXZGPYFNUDNDRTZYQVWEWIJAMWHZHOXJTYADWDWOBRMKBHUANQVBYRXSYTDQVVKHICGRAHLKQMBCPFZMLQBNJLTPDICPSKTXNANQSVFAXXGA");
    tmp_msg_0.value.assign("JTFADJUYQCRNHGPERVOCGQJHWBDJZLFXIOCFWLUFOZAOMPHZQBYXESPAAISIVEPZNVRHOWIQZTVYKMVMPXFHLBIGCSAQUICNHTLBBDRQRPTNALWMYUDQSZXXZIKUGEKKZYNTATS");
    tmp_msg_0.type = 47U;
    tmp_msg_0.access = 209U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TYZRILSWRPQRCJEWIWZHPAPHKKAUHUNJVTPSVQIEFDCZZXVMSBGTORZGBOOFZTTTRMEBPVQYRDGKKGXAHJAXTMLJQJHGLCSUMPNBRLDUECSEHPEODRRXBTHAFOZUEXGCMTYMMPXU");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QMNQCTFHQIIXNZIJXAFGWVVSLPQLNOCIAKEHECNXZAPLOZJNSOSJQIJGPRVLDKSBLOWIEBVKBTJZKZGKFDFSMWOLFMZPRQTMXKMDFGVATJWTIEHUNLWCZBMDCSWAOPYRMUACICPLNWVYKQYKCYWBEDNGFQIFREZNBWXXOFIXHGGOHPYVPSRRBMWTCLJZDAFATRVBYEPJZUEDRTDEKOXEQYSXLGRRQTAUMPBSHUHHGDJKNBUU");
    tmp_msg_1.dest_man.assign("NNUSHEVXMDJFLPMOEZTMWANBQUZRJLMPWDLPPTCVLUERIHQJRYPBQHGTVNKZJDWQQFNYVOSXSAMTDWIFCJBSJROGAQPYRKHGDTCBELEWYYSVCUDGZWQPZTKNGVJ");
    tmp_msg_1.conditions.assign("RHGIMNQWJTLOFDORHUMFOEDWNVSKOZVJGSDITALBETVLLLTYLASAEWCMVHNRWMYCPSGJQSZGXTHVABJPILGFMJPODVYCIJTEOJBEBTKZDH");
    msg.transitions.push_back(tmp_msg_1);
    IMC::TeleoperationDone tmp_msg_2;
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
    msg.setTimeStamp(0.2089118177062692);
    msg.setSource(25348U);
    msg.setSourceEntity(30U);
    msg.setDestination(53366U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("QBLHKEATZKZWTOXWTLZIGJHQJMSFIMNLRYJQSDGPPRBASTSTFSIUPVLKVLCURRDGGILZPSCBQDXPIXCJVEXTENQKKNHVMAURHEDALAHGFPUIYBWRDBPYCDMHTEQZMEUABKQMMGDOOVBGHYXSRSECNVARCOBMFQNYOCFZXWYWUNNSIHIXJKNDOYQPFWZQHUJLYEGLIZYLIFKMWZXRVC");
    msg.description.assign("IDVGMPBWBSTQSHSWCYXAXYOFAQNPZZCVTBICQSCYRKVEROOUGHYT");
    msg.vnamespace.assign("KTBWPZNPQMCRZYERWMDPFM");
    msg.start_man_id.assign("TBFFVHGEDEIFBJAIMABBKSSHOSXSGUQNFVCLPREUQNPNYPHSCSNYQLVHOAZYECWDODTLIJNYCTLGGPYSJBZOTMTWFWUSGXICMKJCTQOYRWXMDMLDJHQVZQCNDCUTAZNAZGYMRJWFGELFXLEGRVXIKSFOCAMJKUMLTQPIEBSIPRRWVIKGA");

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
    msg.setTimeStamp(0.5482576053330799);
    msg.setSource(49213U);
    msg.setSourceEntity(155U);
    msg.setDestination(43593U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("TCBSKLQBGZCTRBBQNLJUDVRKHHSTILRXQYKZZNIJEJAVGAN");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 59962U;
    tmp_msg_0.lat = 0.7189627958222061;
    tmp_msg_0.lon = 0.5018383153703473;
    tmp_msg_0.z = 0.9970259580545615;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.0965871373143129;
    tmp_msg_0.speed_units = 153U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.805598516277986;
    tmp_tmp_msg_0_0.y = 0.2669297368171043;
    tmp_tmp_msg_0_0.z = 0.1813258329341525;
    tmp_tmp_msg_0_0.t = 0.12433245797009473;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SCTPGEBLLZYPXMQFOXZUOJWDCPBDREQKNYSMOJCHKSWXIHTIFLKLRTPGSIURQMKCMBVCYBRGEUARIDAEHXZAPOJFKEAUWRGGTZJDIBHWDJHGZFPQPTUVNUQHFLOVLINAEIHWCPXINNOBLRXYFWECNNVNTMMFEBJTUOTKBXKKDVCFAMMZAJAZDQSUPZQMOCJKARJPBHUNYZQXIDWXQGZUSSFOAFESKVTQ");
    msg.data.set(tmp_msg_0);
    IMC::ControlLoops tmp_msg_1;
    tmp_msg_1.enable = 70U;
    tmp_msg_1.mask = 660252500U;
    tmp_msg_1.scope_ref = 1732427869U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetPWM tmp_msg_2;
    tmp_msg_2.id = 199U;
    tmp_msg_2.period = 4035466628U;
    tmp_msg_2.duty_cycle = 2669437324U;
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
    msg.setTimeStamp(0.39682341664620857);
    msg.setSource(8320U);
    msg.setSourceEntity(22U);
    msg.setDestination(17867U);
    msg.setDestinationEntity(116U);
    msg.maneuver_id.assign("HUGIMJDNPOUDHQBEDQFBVDMYHDRAMHCEQKNNLBVPHLPAZDIRVKYMVLBAECMUNLSSXGARHFIUXTRDGGXAJQQWXTVJUIDINEYTTCWJOSABPJQAHJSPTXUVKZRMBEBCOOJGXMWITFGURLBIGIGSUCGYUKQKSEWACKCSPTUFZLCCTLAWMZDDERWKGXJMFFEHQWAZVWFHHO");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.1449250333107266;
    tmp_msg_0.lon = 0.3142194854836201;
    tmp_msg_0.speed = 0.20375622390022086;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.duration = 36560U;
    tmp_msg_0.sys_a = 4937U;
    tmp_msg_0.sys_b = 62141U;
    tmp_msg_0.move_threshold = 0.7197226709065856;
    msg.data.set(tmp_msg_0);
    IMC::Collision tmp_msg_1;
    tmp_msg_1.value = 0.8365895954511967;
    tmp_msg_1.type = 213U;
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
    msg.setTimeStamp(0.9926784069454329);
    msg.setSource(10919U);
    msg.setSourceEntity(233U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(197U);
    msg.maneuver_id.assign("OJRQYFKZUWCCAVBGCMADQQHVMUXVWUNESLITHDXGFESHJYPBGTPTVYAKFVWPZRIEBVTTLIZGZOVNNIXJUJCTTHEGXIIKRJRSQLMZWJAOPMWOTMBWUGLKYTAXANKAYURSCFGPAZGIDNBFYDOCKDJOFXLMWXBEFAPLEHWMXHQUDEJKMUFSZGMUZWVSSOYHN");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.17797834162871384;
    tmp_msg_0.lon = 0.5366352811697381;
    tmp_msg_0.z = 0.35673172523834795;
    tmp_msg_0.z_units = 60U;
    tmp_msg_0.speed = 0.7893429553222869;
    tmp_msg_0.speed_units = 195U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8729677567813995;
    tmp_tmp_msg_0_0.y = 0.32695373583623655;
    tmp_tmp_msg_0_0.z = 0.24159837789335747;
    tmp_tmp_msg_0_0.t = 0.06681231667783394;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.12685786675946986;
    tmp_msg_0.custom.assign("EPNEYLKRIVBBZTZAOKEBVVNFSXPEVNBIYGIFZBLJJRLWQWHGXNHDTEATMJQCMEFNTAUBSTXZWGPYDVFQGHYDNGXQSHOMNXASVQYJPJKTWDURJUAUCJGOKBGC");
    msg.data.set(tmp_msg_0);
    IMC::MapFeature tmp_msg_1;
    tmp_msg_1.id.assign("YXZKVPLZDOKXWWZIQTZQAM");
    tmp_msg_1.feature_type = 177U;
    tmp_msg_1.rgb_red = 129U;
    tmp_msg_1.rgb_green = 84U;
    tmp_msg_1.rgb_blue = 118U;
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
    msg.setTimeStamp(0.5077293431554614);
    msg.setSource(6473U);
    msg.setSourceEntity(159U);
    msg.setDestination(54658U);
    msg.setDestinationEntity(12U);
    msg.source_man.assign("RICXGFRGGWAZZFLHTLADBDJOMAAJCUEYQJQTFUKGCKSAWCBEMCPFBBKSWXTHYXUDPKLTPVHXTRLXHQKYAEQHADQZIKIWYJKMEBMXXYYAZUGNY");
    msg.dest_man.assign("QOANKGTCZXXNLQMDHNMFDMKLPRUTYEJCSRCDMJVSKUKGIZRSMYUVFXCPMIJZIBXXHIUVOHPISEXTWMBNBYXTBGOUEEWVORNDWBROCTZYID");
    msg.conditions.assign("CYZONZMLEJGCAASMCXVIBJZJWJEOBVIVCMSRYDNBIDFQIUCRBOKQQSDHUJXDTULJBNUCHYISELEWUFTWKGQJASDMOEWYALHWXCQXTFUGMYGBGXQODAZHCNPRFFVHEMMOAPHTPLSOWZBPMRHXTSUTXVRKPNBGWUXCOBYAOIHJBTDNSVVGOHHINREGMZLQKITFVIYTRZKUDQQZGVRWWRURLDJCMPALNYPKEYLANFYDJZSEVPKXKKNLIGAPSFX");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("REGESYEUSUBALLBLRPWQZCPVTLAQRHHBSNKANMQPDCVLQCZOXPNCRLEFFGPWIOYJZBCFDPDJPUUDGKRSDGAWFOGKKLQIKWBIWGZVNYNMMGLTSVLDUTCKRXQJCUHZDBDIYMYHNRMRIPVHBYEHFJQGVJMXXSJMBSQNDBIYXKEVXWITMETWAVFFHNZTEKTMWOZTJRHIAPYFICEQOAXZW");
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.850251430322419);
    msg.setSource(23455U);
    msg.setSourceEntity(188U);
    msg.setDestination(41423U);
    msg.setDestinationEntity(30U);
    msg.source_man.assign("FAXUSJYBCQPJQQSWAITDPIPWJKHZSUJSVSOUZLWNBJZGKEOKELHUZQGCRAHMRSGULJANWDMEOFELVAMWUDVLFXFXTCMBKIUYNDMNPGXBPKCEBBGWJSR");
    msg.dest_man.assign("RAVEWCNOBOAWVIBFKJAHRMFVYSENQVUSYNOXTDIINRQNCSVMEUCEHBYUWSNIFGJWPKFUQUQPLBTJOWEDHYKKFIKRDBLVOLVBWAJQBMBIEYPAZXJXEHTPFHWFDZPTZOSMSTMZCPTJNJVXFKDSMDHKZMPJYQTWL");
    msg.conditions.assign("EGSYQRXIRHOMVRYKUWKSFNHSGWZQVGPELIEJWBPWXEMFOIBVGMCWLKQDVYPZNLXKOAALFBJNYGTZ");

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
    msg.setTimeStamp(0.45910854532396417);
    msg.setSource(34378U);
    msg.setSourceEntity(208U);
    msg.setDestination(42661U);
    msg.setDestinationEntity(28U);
    msg.source_man.assign("UPUARYKQPLZNUEEXLPXXTMGCLHLDWGFJGIQBGBSRUUODCIFNDUARIBOPGPOXHWJJEMUQVA");
    msg.dest_man.assign("ALHOKAVDYMWJQZRWSQSEPNLLMHXHCPJTRWEPFZ");
    msg.conditions.assign("ILKRIFGWGPQEIFWHSQVDKMHOWBMZDBLYHLOOUCJMEYDCJVKTAKVQYBXVBZDQPZZAPWOSFILGAHZ");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 246U;
    tmp_msg_0.error.assign("BKYPVBFWJW");
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
    msg.setTimeStamp(0.3153518879666659);
    msg.setSource(21397U);
    msg.setSourceEntity(207U);
    msg.setDestination(63319U);
    msg.setDestinationEntity(61U);
    msg.command = 167U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IDCHGYJFGULYUOYDRMDCBRXHLMSGZQPUIMNRPNMKSBBAQJTDWKKVEWVTTXEMHPGIAPSEYXSJXAMJNJUMTRBWNTPWATGPCZYFMTZQGWDSKBIVZAIJGLJEYHVAJFYLGYRSCRYCPUWNLKNCJLQ");
    tmp_msg_0.description.assign("LJLNYQZWTHBEUDINZMMKNPSKEMKCZNAXVCMVSEVJVLDZXWFFTZOMPBOTEATIVYMRXNPDLFQRRPRFOIAZWXORZRYXJTWBPXSBRLTAGHUOIJEOVFXQGRWGPWEICYPAQA");
    tmp_msg_0.vnamespace.assign("QWPPBUAVUJRYFLQOZPSGQPCUCYHVCUBAOIIJGPVXPKAXAOLEUXQSFTRGNNDJLBLOPDZYCBKXCWYMMDERYXSTPHFRTXAGJIRMG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NGSXOJDVCGHCPGVNUUNOWGPNSDDLYFUVHCXENVKEKFHTVVEANJQBDWFRPPTWRAMFRJWULNODORMLENJFPIGTKZIHYCMKOQMDXBCEKGLFATLFPJUPKQZ");
    tmp_tmp_msg_0_0.value.assign("MSLJHMDGHCLNCZKJAIKVIFRMJBRUDIYBTYYM");
    tmp_tmp_msg_0_0.type = 149U;
    tmp_tmp_msg_0_0.access = 72U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ALXKQCJLUTXDVYIMWLWSCOWHXY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("SWJNJEFPRBKEHATIJXVAVEAKBYRXBHFQYCDQUCSGTXWRLWVRLIJLGRQHVGJPFTRSXCKDBQBUQMTXOFZUSHEWIDMNZGHJHVMYVVVPZQZWANMUCAPMWKXBFJLOMHQTLRGZGUCYIMVLSNKCCEH");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WINRTUPIPEJTVGPKKBBBSPUJXUSBNHVQKMDZDMB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Elevator tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 39369U;
    tmp_tmp_tmp_msg_0_1_1.flags = 2U;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.9335964481687757;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.30513716063536855;
    tmp_tmp_tmp_msg_0_1_1.start_z = 0.726091973168411;
    tmp_tmp_tmp_msg_0_1_1.start_z_units = 70U;
    tmp_tmp_tmp_msg_0_1_1.end_z = 0.063355394087103;
    tmp_tmp_tmp_msg_0_1_1.end_z_units = 190U;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.33496471434385366;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.3683943092017864;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 40U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("CCCJUAFCJXWGEDSSNMIYTLAYIGGXAATXMZRGVOUFJBZKMXOHDSBZMSQNBZKAQXHVSPNLYPRVEFCYONYITPKGOQ");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::UsblAngles tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.target = 41311U;
    tmp_tmp_tmp_msg_0_1_2.bearing = 0.2558496718601433;
    tmp_tmp_tmp_msg_0_1_2.elevation = 0.01331508685638827;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XWCMLJPTYTVLLOXBUAOUKROZXUDBNCHKOGSVKEDHGHHRPMXHMRMKTADNNIIEFUPPFDTUSWPAXZJNQAEFYFRGDAWFDJXKYTIFXKLAVIGCMQKCYUHZQQNCSNGL");
    tmp_tmp_msg_0_2.dest_man.assign("SDHRONTJNSYIMZPKPHTZFTYCLKMPIMKVFBEJQBMQEUIBUZUVRZRENBSGXXTIMEIBUKEZUKQSNLOQRFQWNDRKKSVVHVPYQTQWTFYHQSIAFLSMWVYRHBPTYUXWHMJYEXOYMXAAZGAPWJJONAFGQZJHOLECCCORKLFTOANOBHFJOVXLWHBWDMNDCDGGWRPZWITKRAIICKLAASCLJPJZIQCUXDSNBZUGCDUDPXXYGPFLHTOSLCVMREXGNGJYDEADEV");
    tmp_tmp_msg_0_2.conditions.assign("NLXOFGHRMVTOZIPEGDSOTVHYBOHNRONZLKBRJLYKJQFLXTXTZREGIHUDCJQWBJQNFKPIRTWAHRFQZETK");
    IMC::ReportedState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.9375367438986397;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.0709202090170965;
    tmp_tmp_tmp_msg_0_2_0.depth = 0.5086077020414828;
    tmp_tmp_tmp_msg_0_2_0.roll = 0.033893450080888066;
    tmp_tmp_tmp_msg_0_2_0.pitch = 0.5697546745166644;
    tmp_tmp_tmp_msg_0_2_0.yaw = 0.9284665043269764;
    tmp_tmp_tmp_msg_0_2_0.rcp_time = 0.8447550297740273;
    tmp_tmp_tmp_msg_0_2_0.sid.assign("JMFATKIIUPBBRPMPDPKUNODGNFVWVZUSKQKRAOEVRNHQBXAZEONIQMYGHXFWZOLBEPZWGOPJNHMLTJEQLYMMPJGFCLONNKBTDOIVCOYUXPCTIZJVCKEBWSUJXAAFSGTUWDK");
    tmp_tmp_tmp_msg_0_2_0.s_type = 7U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::IridiumMsgRx tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.origin.assign("HKMBKWKTFUATDFCYEZMRQTAMGXBHRZN");
    tmp_tmp_msg_0_3.htime = 0.9052823780702914;
    tmp_tmp_msg_0_3.lat = 0.7218753016013393;
    tmp_tmp_msg_0_3.lon = 0.7205023335385863;
    const char tmp_tmp_tmp_msg_0_3_0[] = {-88, -32, -15, -78, 44, -72, 29, 44, -25, -109, -100, 104, 39, 63, 13, -115, 15, 71, 110, -92, -50, 17, -62, 18, -107, 90, 72, -59, -29, 99, 93, 47, -21, -22, -61, -67, -116, 103, -65, -51, -29, 56, 102, -19, -13, -63, -110, -46, -87, -111, -38, 48, -117, 118, 86, 69, 96, 47, 45, 76, 95, -127, -103, -79, -85, 82, -43, 31, 35, 120, -35, 89, 80, -99, -86, 88, -36, 11, 81, -45, -11};
    tmp_tmp_msg_0_3.data.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::PowerChannelControl tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.name.assign("ICGZKPBYYKWAHWHNEAKPDKTAQGZFGGFYNMEOXTQQRQBWYXFALUMOFDFPCSZSRPERSTINARTWRXLWBVPRCEXMQRPWEHNBCRVQPQNVIFLWUKMXDYJQBNLACEWNTDIJDL");
    tmp_tmp_msg_0_4.op = 230U;
    tmp_tmp_msg_0_4.sched_time = 0.9404172613350389;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.8651200619731814);
    msg.setSource(13114U);
    msg.setSourceEntity(147U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(69U);
    msg.command = 90U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WQYTTMJYXIBPRVBDBNIKPKPLFQMAKALLIJXAKBUMZVCONWSGOFWSFYNNJHEPRLVPVZDGNLCNKETTUZRPDWDAOTBSGZHEFBJCLMGITSIZVWDXDUXIDJTBHIODQZSDGUUVHYYEEJLFMZKRISCXZFPWOBRYTILFVWCPSMUWMHCEINKWBA");
    tmp_msg_0.description.assign("DMLLQFITHCXPTAUJDXWSMUTPINKZWLEITQXPAHYVRCLGFPVBMCQMXBICJZDPLHELEWIVUKAGLYZBKNVJNYPLZMXMGBNPEZGFMHIHLHWYD");
    tmp_msg_0.vnamespace.assign("NWYCFULRLSMGUUPJQGHVMRLFCWENRNKASPNYZXKIMZFXMEXJFVFXDLXCKCQXPOHABIFQUBIEOQZNOLGCZDBWVFBXSNOEOABKQCPOJHHYMSXFEUGJMMLHITBRYYTNUFEVTDDXSLQINXCVKJNZZIUV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YHIMEVKJHMQXNZBQEZVONDCSYLLOOVHSAGKEXGDWUXPLXWBVLUUAABEIJMEUIONTOQHYYJRUJIZTSEJPGOWVLPFBRGGFLFPGZBTOTNUMCSBADTFPCZLHXIDTOFLWPIWMPKLYIRJXQDDIOWAAHXAWWYCMXAKJNRHCTXEDESZFRKVENDCAMTZRZTSHJUHSSUNQFCGQDRMIMIVZUJSRYNUOPGVYCFKCQPSBMHXKKVFEJRZQYDKBTWLFBKQCVAPBG");
    tmp_tmp_msg_0_0.value.assign("OFSSJJVEUNWPAGDXRTHNSXHMELVCRHCCWVQURNFSPKYJXMJXYTCVALLTISFIZMHKLHJQFSCZZETRBWEDUIONYEFEY");
    tmp_tmp_msg_0_0.type = 232U;
    tmp_tmp_msg_0_0.access = 47U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WEWDPOFMGLE");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KJUOWRAPHZNFKDJJRLAWUTFNPKXEKREYZXVGFHGZWAXOMELEBWNGNCQBCVCBQXSESGVCLYOOZUSFGIQNHPKWCPPTPLZHVIOLQKYNIDXUTWMQYGQDAFBDWMXELLYIZHMJSBMYDWAVAEQVXJBMMIBXJUHYFCHISJGKMHPSSORTOZQLFJZIUTXWCBKUZAPEUEMVTJERLRUNCCYBFSRFAVDGRJTHQPTVIFWGDTISDMORPNUCSKZQA");
    tmp_tmp_msg_0_1.dest_man.assign("ZIMSHGKDWSBJXHEZDNSGRNOZEUTIYXFNGMRLNIVOKSVTZQCTRRAFIBGIHPSPYPKPBTNXCJQLHWPNXGJMDJHRWXNOPHLCLHBSKXDUCKKVJSUQRCMJAEADYWGAYMFIMFONLUILSPILDJFPQDYFLUDCHXZEXNIBOZYBWZCOGJVAABSNTCUCPHBYAEIXZWVAWJGQR");
    tmp_tmp_msg_0_1.conditions.assign("ECONUKXYAXZLGFYXMVRHUPTRWESUTPKFRCIOZWHNWZUFUAQOMRY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.7539044597131189);
    msg.setSource(6151U);
    msg.setSourceEntity(236U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(147U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NEKQYFLDFAYMDPKUXOEASDYOQXTEQUJWIWUALYOIKYSGTSTGTELXZHHUFBDFPRWYNTPQIMRHFLQXKKDJSGIKNCMLWCMVJXGIIQOCUOUQCWMNJSFWJOPVCRDPVLIVMGAAPYBOPLGNKIMFFHNARNYVVZJAPUCKHZNZSIKHFZOGSJWLERDDCCSOLDOMUCNEZR");
    tmp_msg_0.description.assign("QCORFMQYSDLOPZSKQDCFSQVHINPNFKDITTIKLJNMRCPMMTQSZOQXNHMZUOWFULPZIHFEURRBBPJW");
    tmp_msg_0.vnamespace.assign("YCBXIMPWXDJOIMYWUXNEJRDZUYGJZEAMVGOJWAZANMFZSSHCPXGRBLALFUOCCXOJQWFRXUTESOSEADQFTZMZHQPICVKOUBHKSNEXFVQAQRABRPVCAEWIDJYTZHIKWHCUHWNLYRVNHC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ITEQUSMNPVGZMTRNORQNWWZCOCUMJDFNHJTVTAOXNCOCFSHIILSNGYXOTWFUCYKIIZLFKC");
    tmp_tmp_msg_0_0.value.assign("UFHEOEMNNTIZXLVZMEMZI");
    tmp_tmp_msg_0_0.type = 119U;
    tmp_tmp_msg_0_0.access = 25U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LUEKJIPYMSQORIYIDVIEYGVDSQBUZFUWNRDFZKGJQINMYZKODAJHGSGZITYRODQAWWVFGYLYJVTAWHULOTLDJQJAIVLVMEUSHFZNWGOWSMPXVBAQBLETWKORCLPAOFZPSOWMVCCRUDCBWJEEFXPBSHNURRHSIBGTZMPCIETTZPG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("XMDKIYSWCEQATZTXMWYLIPCLUFZNMPNWBHXEOXTZKYGHOABYYMKOOAPNVLADRKHVOLTAHVVMCEEUFRAUBNMRSLKJJBBNLVUQNKDPTKRLUSMJQFWDJIJVARXRHWPZNJQPRCFEICIHDGFHFKJWXGUICDFZOAFPLSEZIMQGQASGDJIDWETWBBHGWNLTXQBSVMCOKGGZZPBEYGXXYEXCYNMRESIUHJVUCPQBCSURSUOQARGHKVLQOFVJDYTNFZTWZD");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 44962U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UTLYCQPSOQOUKEVFCPMFJEGLSWHETZQHDGCSKFFBDRBGMKNQRWFEUDIRATRCKWIXWFVXQIEZKAJPJIMWDHDN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("MCHUKIVRUGBJJCOPPYLRSNAKLEQOAREWVSYMWXHLERFGNGGAUKZTBLOWBVVNUBZDG");
    tmp_tmp_msg_0_2.dest_man.assign("ULEIJGZBARTQAAWDDDVPXLMUOTWEFRSCJMLCNDNKXEAOYIZMOYGBXHPCNVNTTBMBZDPIHUQKXURQPHMKOBKIJNMWGKMTCHEBLSRORXZWHYNOGOSLRZQLMZASFUUSPJAKRWUWXAGQPKOWXRHVZQKLUHEVBYFIVJGQCJHSVEEUPDGYNOCXSFMZBFYHLANODZWPSWRRTCYHYSFKGFQJDL");
    tmp_tmp_msg_0_2.conditions.assign("TWXWTQOKIHHPWQQZTTTASTGCDZFCWXLHHHKNMZVGCVALVENAOBFLUXYXLBAFVGUFCZAJCYNRQXYJJNERKYELIMHBROKE");
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.k = 0.12906301170396284;
    tmp_tmp_tmp_msg_0_2_0.m = 0.26837722560552046;
    tmp_tmp_tmp_msg_0_2_0.n = 0.6393860480856705;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6925031850585903);
    msg.setSource(62811U);
    msg.setSourceEntity(79U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(240U);
    msg.state = 14U;
    msg.plan_id.assign("JNTZXMSGFEHDYACWFERELWGJAAIODAQOWVRUOQXPBQGSYDDKVQLODNFCISCUXBRUOKWLNUWIMTEADRVSKOYSHNBBFOZLCPREXYVITIUHWPRSKGQFLMBGYTJTIQDYHGUUMXMJBLCYTLGEBTCZNPQCJPSNKZPLTHERVSJYFYRZWFVHZJGNDWKQBGAMTPZQ");
    msg.comm_level = 132U;

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
    msg.setTimeStamp(0.47278561443141043);
    msg.setSource(59639U);
    msg.setSourceEntity(201U);
    msg.setDestination(25187U);
    msg.setDestinationEntity(220U);
    msg.state = 91U;
    msg.plan_id.assign("KDUKVOPCIIFDJBCADPMNBMZNTBWOOVSUZZHYLYDPGFTFALOT");
    msg.comm_level = 80U;

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
    msg.setTimeStamp(0.3121383095868382);
    msg.setSource(32573U);
    msg.setSourceEntity(186U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(90U);
    msg.state = 69U;
    msg.plan_id.assign("URPCBEMBEZIJTOLMVQMJLDEEKZBOWHWLGPYPOVIJUBNZNZMALYLWNFSUKHCEDNWYKTRRWEZKVFXXYRSKJTSOBNIINZVBLCURODWFGPGHCRXGXPJBNDQFQXAHKUGWAZMVDXJVTHKPOPTCJDVZUNSYRZAXCUXJOBIXKOIMUDSLYVHQASLHASTGWSNEXFYTIUMUAMFHJATGSDOLRQRQZYVFJGQCE");
    msg.comm_level = 51U;

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
    msg.setTimeStamp(0.750505395973701);
    msg.setSource(45704U);
    msg.setSourceEntity(184U);
    msg.setDestination(16405U);
    msg.setDestinationEntity(216U);
    msg.type = 81U;
    msg.op = 65U;
    msg.request_id = 21410U;
    msg.plan_id.assign("TWXWVFQKNMTYVIDEILRBHYIAACFGQQHPC");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.33378410163673666;
    tmp_msg_0.y = 0.5558406121846508;
    tmp_msg_0.z = 0.8569133269389217;
    tmp_msg_0.k = 0.8439472802315942;
    tmp_msg_0.m = 0.2816297178793329;
    tmp_msg_0.n = 0.5566044303377321;
    tmp_msg_0.flags = 153U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WHVTZMQFFWNRBFEOJGHYEZHHOPCRJGMRQUZLZSXJZBQMSAAIDPZACQDOWYYGDIZKDJSFKHVKYKMLYSPBLVHAJNKPYQJEICKVDWTCYGWPMMXWCUGUIKWTEJNPCNQRVCGXBXBTSWDTNNUEGRQKFUVVJHSOKDOZRLDIRUQXOMCPGYPIWFLUVUATBXTMAOXJTQSDLEPBXTCL");

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
    msg.setTimeStamp(0.6526026935212577);
    msg.setSource(15403U);
    msg.setSourceEntity(7U);
    msg.setDestination(29609U);
    msg.setDestinationEntity(126U);
    msg.type = 127U;
    msg.op = 35U;
    msg.request_id = 31905U;
    msg.plan_id.assign("EKAALLCHAFGJLQIXQNACZ");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.9736951236536748;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MGFRCVYVJYXZQPILDOPRAKDPHYAQLXCMXKDOSEMPASZBQEMQRADTHAWPRFCIBQYDYJLGKRYZFUWWPREDFULVQSHFTGVBAZBCFUEVATWEGSQPHLJPWGIMZXQFCKMLTDDBGVKEYHRHKNFSOZWSMIVFTUZHGUNIFREJJXUNNYCBEZOOQKUHNBMMJLCCTDNWOSIVRUTOOEMHXPSAIGERKG");

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
    msg.setTimeStamp(0.41299653560243577);
    msg.setSource(51194U);
    msg.setSourceEntity(57U);
    msg.setDestination(16772U);
    msg.setDestinationEntity(248U);
    msg.type = 133U;
    msg.op = 162U;
    msg.request_id = 60600U;
    msg.plan_id.assign("XZQENPSJSAOAUBJORAYCVYZPKKGSBFYAMWRWMNAZRHDDFHLZPBUTKCYJMRDZFIOGJNOMQMMXUCZLXDKPQGZECHUGKLOFLQDWLWYNINTZHKXTQJWIPPBHIIBOGDHFDGEXISDVSXVNFTYSGEKSCQ");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.9109744714093772;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOYLJCBNZKPBAWPPYBGHLJCLCFRDAYQWWMHDKXTLVSIDJPZOBNHQFRPMGIMGDONKZWSCZXNXALHGPPTCAMMLBLWXQDIABZYSCFQQYUETKJFZXMVFRTWSEUEVYQEWMEVHCKUQVPAECFSUCMWTLUVRFKGIMRZDD");

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
    msg.setTimeStamp(0.5226101506068798);
    msg.setSource(59113U);
    msg.setSourceEntity(86U);
    msg.setDestination(28238U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 23206U;
    msg.plan_size = 1443596578U;
    msg.change_time = 0.5673515111833569;
    msg.change_sid = 59848U;
    msg.change_sname.assign("BLNYJLRYKIVJVXBLKJZQFWTALXMBSAHKGDDSEQSQLXOQIWDBWHJOBUUQHOGMLLVZDTMWGROXSHAWHTXUIEWGPEYUFYGWCNRFUCZJIHPHGDPAXYGVXUERIAJAKNKSHENLLOBYCEIMGDSHKOKMCEQCCYBOTJRXNZZDFCSWJQWMTPZPPRIOCTSKZVTOZBWIFUHMCVYNUZQLDNCPAB");
    const char tmp_msg_0[] = {26, 19, -31, 119, 122, -34, 73, -64, 110, 63, -54, 118, 15, 34, -39, 25, 67, -113, 94, 4, -82, -40, -78, 84, -97, -43, -84, 70, 18, -60, -63, 69, -28, 111, -97, -9, -32, -125, -35, 94, 8, -41, 106, 95, -91, -70, 69, -47, -127, 104, -72, 2, -85, -85, 24, 6, -110, -34, 7, -21, 58, 24, -108, 95, -113, 16, 57, 44, 89, 27, 108, 9, 120, -45, -107, -65, -118, 123, 12, -39, 84, 101, -69, 40, 107, -9, 31, -99, -35, -120, -47, -103, 77, -13, -4, -27, -67, 111, -3, -97, -122, 38, -113, 18, 6, -97, 57, -70, 111, 109, 117, 53, -92, -59, -40, -1, 65, -123, 121, 18, -78, -16, 14, 121, 16, -48, -84, -5, 121, -112, -105, -127, 8, 54};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BPHTZNURBBQSXXYDKAFQCKESNAEHUCXRYJTEWLKZGOAJRXQKPOWBDPUMHZQOVMYVQIDVFMCOPUEIUWTMTAHNDXMKCYPUSZHOJIZBDADURAGHLZKPHTYMFWRRYPZVCLLTPKQYGL");
    tmp_msg_1.plan_size = 7780U;
    tmp_msg_1.change_time = 0.25677377916822897;
    tmp_msg_1.change_sid = 31457U;
    tmp_msg_1.change_sname.assign("XPLFESDBRNBDJPIQVGRWPXYHPQXLRCHMANYNJWAYYUTPBSXRGUEFKEBCDSTPWEDODZXTUUCNAUVKXAKUQCNIGCOAZOFIRPLYHSTFOWGGSMWUCXKCLRWOJKIAQGNLMLIWMCNWBHTTEIMYHKXHBODW");
    const char tmp_tmp_msg_1_0[] = {17, 69, 102, 24, 125, -41, 8, -51, -12, -65, -49, 67, 54, -104, 102, -23, 38, -115, -52, -28, -62, 67, -96, 113, 83, -2, 115, 126, 86, 20, -124, -74, -14, 125, -79, 107, 89, -13, -35, -34, -115, 37, -95, 120, 40, 74, 95, 60, 47, -80, 108, -117, -83, -38, 123};
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
    msg.setTimeStamp(0.7318274912290108);
    msg.setSource(23135U);
    msg.setSourceEntity(208U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(24U);
    msg.plan_count = 34793U;
    msg.plan_size = 1526046959U;
    msg.change_time = 0.4717196473494848;
    msg.change_sid = 38565U;
    msg.change_sname.assign("FYWRTEPCAXBBALEJIDLJCDSPJRZHNNQFQDSIVKFDCALOPCEIRNNAXOUUPEXZNXSPGRMGOBQOENHUUTEUQFSKZRPDGUHAYFKBZJSKDPOXQOWMWJPBCLSGWLACYDYEBTVZVQADIBXCMKURVAYHGAEVLYQKJWBZK");
    const char tmp_msg_0[] = {68, 40, 24, -50, -112, 15, 41, 49, 23, -111, -110, 92, 91, 106, -9, 11, 59, 112, 53, 97, 61, 115, -95, -117, -64, -62, -86, -103, -50, -34, -3, -101, 25, -60, -107, -53, 89, -37, 15, -102, 111, 95, 53, 24, -60, -65, -70, 23, -113, -120, -20, 96, 106, -54, 26, -70, 122, -2, 30, 38, -13, -32, -46, 54, 34, 17, -22, -128, -117, 41, 100, -118, -49, 64, -61, -113, -99, -39, -125, -67, 71, 80, 6, -17, 113, -33, -5, 121, -79, -115, 27, -9, 104, 43, -76, 3, -11, 59, 64, -23, 64, 26, -113, 29, 8, 67, 106, -39, -122, 96, -53, -103, 15, 87, -61, 10, 70, -73, 79, -108, 75, -114, -19, 36, -31, -39, 59, 109, 2, -53, -49, -50, 7, 34, -86, 59, 10, 42, -85, 77, 119, 59, 44, 3, 102, 63, -25, -31, 88, -4, -77, 89, 53, -1, 33, 106, -102, 14, -78, -67, -87, 41, -51, -101, -6, -17, -18, 11, 66, 77, -69, 94, 11, 107, -120, 4, 63, -114, 2, 10, 71, 37, 35, -16, -102, 0, -36, 65, 106, 19, 85, -72, -97, 14, -14, -95, -3, 5, 12, -97, -69, -83, -117, 74, 102, -107, -48, 23, -95, -67, 71, 124, -14, 31, 52};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XHOMZTHGLCRKIXUCNVFJXEEBAIEUFBJEHJYOMSVLNRXYTALLEAYDNNXPMZWASFLDNPEPQSVAYPSKOLAQWRCHGFMGNCBSFBKHPPTQCGHTRYUUMLMZYIDZAOZHBDQRVFJKLHGITOJXBUGKJVWOMIS");
    tmp_msg_1.plan_size = 11579U;
    tmp_msg_1.change_time = 0.3180001947149401;
    tmp_msg_1.change_sid = 16320U;
    tmp_msg_1.change_sname.assign("MQNRHJRURVQNMBFMRNWXBXBVYXBDVSKLQKQZFGEPDPMLKCOPEVOGPAZGJCAEVOAUNKFNMYSRVTSIWWJJZTLUHBDGGIUACGIPZQEDLHIHXTRKLEBYWPYPKDZBGSWRWNTOFZJEOCVAGNCHMUTNQQWHHYICAOJ");
    const char tmp_tmp_msg_1_0[] = {121, -12, 24, 99, 88, 86, 117, 32, -128, -95, -57, 11, 14, -1, 1, 22, -40, 23, 80, 83, 55, -76, 78, 102, 6, 125, -70, -85, -29, -116, 94, -27, -85, 11, 112, 101, -37, -18, -103, 89, 66, 113, 82, -1, -90, -67, -33, 14, 41, -121, -20, 30, 91, 109, -80, -28, -53, 33, 77, 62, 114, -63, 91, -90, 17, -9, -2, -105, -119, 106, 83, -76, 67, -21, 47, 66, -119, -29, 48, 89, -80, 49, 64, -33, -27, 116, -17, 87, 82, -87, -75, -122, -98, 65, -30, -104, 76, 15, -18, -99, 50, -24, -67, 72, -85, -50, 38, -100, -23, 97, -46, 6, 114, 97, 105, 3, 92, -30, 88, -31, 19, 32, 9, -7, -30, -4, -93, -113, -22, -100, 1, 6, -108, 121, -120, 2, 40, -46, -106, 81, 30, -105, -115, -32, -30, 74, 49, 113, -62, -4, -85, 77, 115, 48, -27, -100, 106, -8, 105, 1, 69, 115, 120, 115, 70, -11, 100, -125, -38, -20, -14, 68, 52, 48, -77, 3, 46, -82, 1, 1, 5, 57, -28, 0, -89, -30, -39, -24, 88, -72, -45, -39, -8, -45, 70, -42, 58, 54, 95, 23, 109, -121, -99, 0, -28, 113, 107, 40, 106, -5, -101, -120};
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
    msg.setTimeStamp(0.15123248777794251);
    msg.setSource(41092U);
    msg.setSourceEntity(195U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(182U);
    msg.plan_count = 19007U;
    msg.plan_size = 742663042U;
    msg.change_time = 0.24047249025148876;
    msg.change_sid = 30748U;
    msg.change_sname.assign("VULYWTLMCXITFQCQTAEZQADZMHONNLWPNYXBBEZXZTHDSFZJKGAHEYGOGXPPXQGAKEIWZAROUFKNKXJTMULNBRCGQDNVIFNWFVOUDBLWFRBAJKYRYGRPMWRILTOMEILHJSDOQXBYCMDOSFVMKLEPVZXBWEKTNEIOURSQKQIJSSFJJFDIMYOCAPYOJDIHPWEVS");
    const char tmp_msg_0[] = {108, 123, -117, 116, -71, -100, -33, -89, -99, -67, 116, -70, -81, -74, -114, -9, -50, 68, -77, -56, -115, 90, 96, -53, -127, -25, 110, 26, 72, -61, 3, 109, 9, 62, 101, -12, 8, 112, 121, 76, -30, 85, 4, -107, -49, 103, -50, 31, -22, -4, 22, -65, 58, -91, 20, 116, -16, 57, -81, 57, -97, -9, 72, -92, 119, -120, 11, 96, 0, -48, 86, 65, -15, -100, -100, 103, -40, 97, -61, 99, -31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DMHRBYNCPMCUKYFEMJSIXPGEJMSRERDAPNOTGROMWQIAMYDMHVCFELBRXIROAVDCHKGSATJITAMWLPHJZXULLYPYNQHKK");
    tmp_msg_1.plan_size = 28057U;
    tmp_msg_1.change_time = 0.8689823429397971;
    tmp_msg_1.change_sid = 21743U;
    tmp_msg_1.change_sname.assign("YVOOGROXDBUMCTTOWPCIAFNRGRMVZJDTDMFAWDCIWPSLTAEFZDAZLJFGURVZKBXNICYHBGCJHQYLLOPEDMLMOVNQAKONQZBBXPPKJVHGLHLMUNGLIEEUSUGVEFYBIGBYSOFPHDSGEBYUWIUITXYXKSAPRRQCFQEVLOSWXJUPNXWSYXHBSQKWAAQDAZYJTDMJXWNUHHSIOZMFTNKKBQETHLZRRQKJIRTPQCZGWNWEPFVJKECVXZYHDMRNCAJS");
    const char tmp_tmp_msg_1_0[] = {45, -116, -35, -121, 81, -113, -92, -25, 98, 60, 101, -16, -6, 98, -91, -118, 94, 30, 126, 44, 75, -56, 36, -86, -14, 80, -9, 74, -28, 0, 29, 55, -107, 106, 54, 71, 22, -51, -127, -40, -93, 33, 33, 13, 116, 11, 26, -119, 90, 106, 10, 124, -67, -98, -31, 69, 41, 78, -3, 15, 37, 81, 76, -59, 75, 94, 122, 26, 71, 109, -53, 25, 104, -42, 64, 40, 76, -121, 52, -60, -52, -8, -19, -120, 104, -112, -76, 101, -22, 74, -103, 27, -59, -17, -117, 23, 58, 19, 13, 43, -85, -47, 15, 97, -79, -82, -124, 66, -36, -52, 10, -11, 3, 114, 74, 21, 86, -50, -119, -66, 126, 91, -65, -117, -63};
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
    msg.setTimeStamp(0.04310579769302947);
    msg.setSource(39885U);
    msg.setSourceEntity(56U);
    msg.setDestination(25055U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("NREPOVIXRGFEJMNHQPVPOJSXBXAQLXVNEVJMLKXKBSZCYYLRUZWGEMVPCVEJILUCAIAZBSYQYIWYBKFROHDPQNMDHCEFWMMDWVUCOSGSLFYYKPUUXTJLTFKVTKBLEEIGWYTSJTTO");
    msg.plan_size = 2804U;
    msg.change_time = 0.7409558275272764;
    msg.change_sid = 38849U;
    msg.change_sname.assign("KBRQASCIBIWMWOIJLIQZQYIRLIGUDWDXADWDKSZEVYIBFKVWHTLKSFSFMXAZZJBPVNYFSUMDGAMMIAXAUTNEYFZRXNPNNSNYPRFCDYLVUPCY");
    const char tmp_msg_0[] = {58, 57, -29, 116, 67, 24, 47, -72, -12, 42, 20, -32, -28, 91, 88, 115, -32, -51, -92, 18, -74, -25, 68, -60, 29, -73, 71, -20, -65, -115, 50, -62, 60, -76, 112, -39, 70, -95, 82, -78, 34, 54, -45, 76, 48, 68, 13, -81, 123, -24, 91, 52, -98, -84, -109, -14, 22, -68, 65, 18, -126, 79, 123, -58, 117, 75, -36, 121, -19, 91, 115, -30, -113, -92, 70, -33, 71, -116, 107, -75, 25, -90, 114, 24, 93, -9, -72, -125, -125, 4, -108, -49, 83, 97, -40, 82, -114, 80, 23, 73, -92, -111, 106, -120, 69, -114, -69, -79, 70, -39, 90, 19, 79, 93, -38, -102, -77, -70, -62, -73, -122, -55, -93, -93, -50, -68, 84, -115, -124, 23, -29, 31, -49, 38, -111, -8, 75, -30, -85, 26, 98, -30, 103, 60, -58, 86, 99, -1, -24, 81, -66, 33, 48, -82, -101, -42, 55, 56, -114, 29, -118, -88, -2, 107, 87, -87, -47, -19, -1, -102, 119, -35, -66, 82, -127, -31, -98, -9, -126, 76, -121, 1, 66, -38, 44, -55, 106, 14, -68, 24, -65, -123, -94, 102, -17, 86, 91, -52, -63, 70, 89, -11, -51, -117, -120, 2, 119, -27, -50, 97, -30, -35, 12, -90, -57, 72, 70, 44, -50, -67, 104, 124, 13, 93, 69, 32, -40, 109};
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
    msg.setTimeStamp(0.6178530291019115);
    msg.setSource(33060U);
    msg.setSourceEntity(176U);
    msg.setDestination(19624U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("SBARIDORXABREIDNDBTJIXJRLFYKALBGPOEXSJQAAVYCPJIDNRQWVQUMPNYQLMLJZEAWJPPDMMHWOAWIPTETWXIOTGXCVAZMASYTXUGINGTBFMHYZZEKCOMZWOETFFOTFLIYAYSQBUDSQCUGUGYXYFDSKWFZKHCELBBOSRVMDMUGWPHWLQQLVHNU");
    msg.plan_size = 27921U;
    msg.change_time = 0.22990740119146857;
    msg.change_sid = 54592U;
    msg.change_sname.assign("HPPYQLODPPTIJPRNEBFXAIBBMIGMUTPUSEJVUCOBMHFAQKLTBTOXXIRKNORTKHWVFWAESGDXDGXFYQHZRUJLBANMJKOWKQYNLHRLVMHTDXFOVCUSOCY");
    const char tmp_msg_0[] = {82, 58, 107, 73, 101, 77, -81, -49, -73, -47, 15, 106, -115, 87, -70, -51, 19, 119, 33, -2, 125, 42, -101, -30, 118, -19, -9, 45, 48, -32, 83, -78, 79, -50, -11, -46, -21, 95, 77, 21, -38, -95, 67, 54, 4, -97, 72, 95, -93, -23, -45, 70, 22, -72, -59, 94, 4, -87, -4, 93, -11, 63, 18, 100, -21, 53, -85, -127, -121, -122, 97, -96, -19, -20, -2, 71, -84, -70, -46, 7, -91, -3, 90, 66, -82, 86, 96, 40, -48, -82, -24, 119, -43, -114, 115, 55, 119, 31, 96, 88, 82, -111, -55, 23, -85, 125, 20, -62, -105, -100, 119, -89, -53, 51, -113, -89, -39, -2, 60, 64, 77, 8, -4, 18, -103, 98, -17, -55, 0, -43, -36, -32, -120, 25, -41, 64, -10, -92, -4, 10, 92, -82, -30, 22, -27, -62, -30, 26, -120, -57, 92, -65, 25, -50, 117, 26, 11, 70, 0, 53, 56, 11, 8, 34, 71, 15, 68, 34, 126, 66, -62, 90, 113, 13, -12, 42, 70, -112, 85, -109, -16, 90, 8, -78, 58, 98, 6, 74, -82, 80, 100, -4, -35, -121, -15, -28, 96, 19, 30, -97, -49, -69, -55, 30, 82, 19, -97, -61, 27, -30, -81, 67, 123, -20, -14, 63, -127, 103, 2, 44, 23, 35, 104, 101, -115, -44, 97, 12, 46, -23, 3, 106, -95, 67, -64, -108};
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
    msg.setTimeStamp(0.7235030340967784);
    msg.setSource(10890U);
    msg.setSourceEntity(175U);
    msg.setDestination(46877U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("WHTROPMKCYCYDWBZXISVUZPGBUZCTQARCAVCKE");
    msg.plan_size = 33603U;
    msg.change_time = 0.5629801132426353;
    msg.change_sid = 57013U;
    msg.change_sname.assign("NXDQNVRBDJFANREOROJPTSRPTHMVWFNQJMPUFZYTRBDLBKCUUDVVBXCYLPYYEBVDMDMSVIUJLIXWZSDTYOFHSZVJWRLKPOGICEVGHBIHHJFHUAKUZAOAKIQUCQIKMDJRWOWNNGIEEYCFQJKTQNITPHSLPMZUSRXLTXWG");
    const char tmp_msg_0[] = {48, 122, -46, -20, 119, 119, 91, -44, 117, -126, 53, -88, 112, -122, 55, -15, 71, 56, -82, 101, 22, -65, 120, 77, -93, 113, 126, 63, 9, -14, -33, -5, 98, 114, -29, -121, -67, 89, -121, -93, 4, 22, 113, 67, 45, -51, 64, -1, 123, 14, 27, -42, -77, -120, 44, -121, -101, 18, 98, 54, 35, 18, -23, 104, -18, 88};
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
    msg.setTimeStamp(0.802718298674322);
    msg.setSource(60422U);
    msg.setSourceEntity(76U);
    msg.setDestination(62332U);
    msg.setDestinationEntity(120U);
    msg.type = 70U;
    msg.op = 134U;
    msg.request_id = 24428U;
    msg.plan_id.assign("QZMZWLRBGBXRVFHRGJMZTCNJGVOEYVDDBXFXYPZEHSIJCPQQLXGDJZSTWHELEAFCJDWQCPBFYJFPQKVLQFNPGOBLXNOJXKNVUAGCBADIKWWYUFWHPIXZJVBUTQOEUQHEOAEZLQWKAPUHZOCSKOEBCBTFGUUYOKIDMMRMAZNRHHDTSRSIMKLIBTWVTSXCDILKIA");
    msg.flags = 4521U;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("JWGDPNKNDEGATJBBMJDXZKKYJXBZQGKLELNHRHCASWCOHCLFTUYCSYGIFORFQHBVZYRGNIIPDRLFQZWAMBEFTPLRISQRR");
    tmp_msg_0.state = 8U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XKYAFCZPNNBZHJVJZRUHIMMKDCFKEAWELLMYSMATEVAMFIIZYJMDVZPJCHDVUSBDUMJGTSNSPEUBQYXSYQBZLGCDXGFYUXWROEMCSOXNTAHUQGKYGAVRFIVBKLAHGDDKLOOUOQFZOEOQ");

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
    msg.setTimeStamp(0.971185540170325);
    msg.setSource(4748U);
    msg.setSourceEntity(138U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(181U);
    msg.type = 112U;
    msg.op = 230U;
    msg.request_id = 57615U;
    msg.plan_id.assign("ZNRBALYIQDILTZMXLWKRDYJSEQIVFJEJYNZBOKHGCFQEUXVZLZFHGBHKHNBSTFECAMANSEYDYHDWOCRXLEOEUPUU");
    msg.flags = 64438U;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 203U;
    tmp_msg_0.mnames.assign("TLBFLXVGNF");
    tmp_msg_0.ecount = 83U;
    tmp_msg_0.enames.assign("ZEKCQSLMGGFONRCKIBDCRWZVJZUDVIILVINPJOFIDVXZXYHXRWBAIF");
    tmp_msg_0.ccount = 55U;
    tmp_msg_0.cnames.assign("LZTCKAVLPVAWJOKHGIFGRD");
    tmp_msg_0.last_error.assign("YRTHLLOZTTXREGIXWXNRGPYXBSNZXQPJTCNZUODPLRVUGDWAPBAXOZDRHMHBFEERSQMMKDNONFDBYJRWOIVAYAAIQFUBLJFDVFZEEJV");
    tmp_msg_0.last_error_time = 0.8639981190707571;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WESYGKMVAPFZNLHBAZZUNYJXXOIQEOZGSITBILUNTRBTVSCCVFAZQYZPUVDJPKYXLHBHEGRASDOYNQCCSDWDGEKNKXQXHJMJUXRTMTFAEGFEMOZXUHEJDIBDYOHWKWGSBLPOAEJDJUTUYWBBWVAZQGCFDGSPMTNMKOKCCPVLMAZMJVHQAJS");

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
    msg.setTimeStamp(0.5929850780485189);
    msg.setSource(2147U);
    msg.setSourceEntity(120U);
    msg.setDestination(19864U);
    msg.setDestinationEntity(237U);
    msg.type = 50U;
    msg.op = 167U;
    msg.request_id = 53399U;
    msg.plan_id.assign("JTOIKJQQGFTNMXXEMWSHALXCQUMRPKBSBDFDVLOSAGVPLMHZUIGYDZZOSIXVYCBXRHCNLPPUPHFFJZMOANRFKYBYZJBXTLBRJTVIEOLEMWMNIVZNGDMHRGYPPTODGIJWMXCDOKYWKTCJFBUFENYVEBWOZLTQVURZKRALWSFVRNWEBQYCQRZACXSTJHUAYU");
    msg.flags = 32687U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.023080783476194355;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 65390U;
    tmp_msg_0.custom.assign("DHDPLFFBAZIHWDNHSRWOKLNPVYLCYXFFIGTPMAXKLCBLVXSFUZDQMMSODEHDYZEIQIKIEKFFJORTVPGTWBTSDNETGAKUBUJJKUAOYUNQPPSEGYNUVMBHGQKQZEUZAFIRDXVNNBUWQUVI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JJDEUPIGLLCYEMUXHMXRULBMAKCQNBCEUSRFYXOGREVOYHABDLZWILWKIIWARZQFQICOHMSMTHMJMJSADUCDXHXFGSKXDZERLYZKCVFGOEKNOYQBZTSLTVIUPFAAXHFYJI");

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
    msg.setTimeStamp(0.546626620614686);
    msg.setSource(13745U);
    msg.setSourceEntity(182U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(85U);
    msg.state = 138U;
    msg.plan_id.assign("ZDTLWRVMBUFGLUMLMKBKIFANGCFKZAYNBDCEWWZRXJIPRQCWYK");
    msg.plan_eta = -188765837;
    msg.plan_progress = 0.06225773308767413;
    msg.man_id.assign("BRYFCTHDKHNUTBOWPQVAMACNBYCMRZJSHUQCRXLYDYTPKPMEOJINNWDFVSRZXQXAHRTRKCRBEDFPW");
    msg.man_type = 45044U;
    msg.man_eta = 712623000;
    msg.last_outcome = 150U;

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
    msg.setTimeStamp(0.1208163989167208);
    msg.setSource(50360U);
    msg.setSourceEntity(200U);
    msg.setDestination(39566U);
    msg.setDestinationEntity(232U);
    msg.state = 60U;
    msg.plan_id.assign("SLJJPAOMIPCVRTHSKKYEVBQBEVXNZNCKYJVLEREFSGJKWILLQDRQSYBQJKHMLSOSIZWIQDDXRBFJPRMRFNLKJFBQUDQRGFOUGXZAXBPFNLYVISCHZKGAOUZNYUYMUAXSHYZQWXITZUINUGVEGDRSDACUZG");
    msg.plan_eta = -259238;
    msg.plan_progress = 0.8343060544142876;
    msg.man_id.assign("AWNDIPTBNJJMYVEDFEXVXFHLJKZBOWSOITYSZVPRMUNSOBYMMJWPIOLRUSTGOYLURRTDCGWDSTJAWBUYEKXBJKXIPBMOXTERZGHQXJQANNCEIBWYGHJWXHHVPRTXCUPQWQXTGHKBAEMTMGEFPEIUVEQONQVNCCPOSZWQMAZOCIHDZKERLSRDIDFCGRFDLPIWHAAQBVOVZKUTYNLFF");
    msg.man_type = 26188U;
    msg.man_eta = 2073252025;
    msg.last_outcome = 240U;

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
    msg.setTimeStamp(0.6284128722429316);
    msg.setSource(39954U);
    msg.setSourceEntity(217U);
    msg.setDestination(11460U);
    msg.setDestinationEntity(36U);
    msg.state = 133U;
    msg.plan_id.assign("KUUELVENUIAVPWDGQYWMASAATZXZMRPISJPWZLZCRVCZLHLRHJBFBPGFCNPQCVHXEKGIOEEMPXDYRNJZJOTNGRUWDAL");
    msg.plan_eta = 16277114;
    msg.plan_progress = 0.6021283063356881;
    msg.man_id.assign("DYCAUFAVCLDWTQIKDHMTBDXJXXDLGWZJLDSVJGVNMFEWELXREGASVWPFGPPUAHNZBFPKNIJSLSCZTUFXBMRWRSNHBNHJCAUBMPXXBKUBDJLERTWCRHAZOTYHJWJGILSQMIEOWFKKIGVCVFLYDACEYHFZRVEZBDTHUUCPWMXNTAKXJODQPROAIRQIJOATKYEWZYMVYLZQNQEFZMPQQUGCSKGHISOOPNSRPMYTGNEQZUQ");
    msg.man_type = 19562U;
    msg.man_eta = 1040765152;
    msg.last_outcome = 153U;

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
    msg.setTimeStamp(0.22158051908551513);
    msg.setSource(33352U);
    msg.setSourceEntity(135U);
    msg.setDestination(53140U);
    msg.setDestinationEntity(7U);
    msg.name.assign("IZLNFEQFYKVGBWLHUXFJFMGKYYSIOOLXKWEBLTZTIPPKKFRPBPNTYKTRVCYUWMRIGAMZMMWVWIQDWIMRLSUYAEMXWPKDLJNVKCGPDTZI");
    msg.value.assign("EUXASBWJWSCDUNZBSDXNPELFBZHKKXIOIPMFIAYULJDZJQHUVGXEYEVLRITIOPOKNJOCGGTJTRQUATTKQPVEVKUMOLFPMCHPIMZFYHOZNDFHGYARCQLGMBRXHIGSWEREPXDZMKVYYLQOSSSPMAWOYFVEYNVMWSAUOYGRGHQZZXKBNKEXYJTPDZHABUICFWBQWKBNMJWCQFDGRHCVTGT");
    msg.type = 73U;
    msg.access = 112U;

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
    msg.setTimeStamp(0.3165631341587116);
    msg.setSource(18406U);
    msg.setSourceEntity(109U);
    msg.setDestination(39002U);
    msg.setDestinationEntity(75U);
    msg.name.assign("ZEQSMJWRWPFYCWMYKTUDJNBSYULXDKXTIYIBCCJZBXNALYLTXVENVZOPBZZMSAOEMZQRJUKMLPDISGXBQXPKAWOFJGCQPRBJRGJRAPUDEDIFGGUDWEHJVZTPBRPIEASJVCAIIHGEPRHHNMKINGGDXOGVWAPMODLLYYRXDKYMOTVSLQTHZQVQBWVKSALOIGFQHFXEAHUCWVCCFUNWOLBLMSUNKZURZDYSNRKHAT");
    msg.value.assign("KWIJPSRGJUIJEOTNWCAUWVJHEAMVFCPKAMDVQGLLHKHDXXMVXEMYRNSPESSYTOLHRXIKFWUNBXRRTYOXTMGJDUJXKSQCRCKUTTLQRTPVZOUBAUEFLUBWQOMDSZTUNQZWJMASGPLDSFOLGQSDHIEZINYGGKLXKKMEFDMCBQIHWJOWEDXLPKBANGXHAOLFFTASIEJPMWCNQVV");
    msg.type = 147U;
    msg.access = 176U;

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
    msg.setTimeStamp(0.12452494249297374);
    msg.setSource(24089U);
    msg.setSourceEntity(117U);
    msg.setDestination(23875U);
    msg.setDestinationEntity(247U);
    msg.name.assign("QZPPAFGOXSLWTWRGROIOIEIBDSMZIKEJEVYRWK");
    msg.value.assign("BMXGOTGLRLQDXETJNKAUNTHCBHODMBEEVPIQFJXSZDNJIZYFLFDIVOPIQLNSCBJGGEUOWJTAAPKEWZMALBMEZHT");
    msg.type = 69U;
    msg.access = 18U;

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
    msg.setTimeStamp(0.43758123592620246);
    msg.setSource(32830U);
    msg.setSourceEntity(222U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(196U);
    msg.cmd = 148U;
    msg.op = 168U;
    msg.plan_id.assign("HAKTRFEJBSFACSADKYPKNZNTOZWABCUKLHVSLVDFEEQUACRYMDXFNIHZXGNVIYVWZAJQUIUXXYYQNNN");
    msg.params.assign("GDNXNWZQPMHRMTJWHYBFWRZLQVGLFDNRYVWGVMBRUJACOSPSXJEFWSBISVKZRBVENQMIMKQDPIXDKSPPXQGGIZDRCUDPDFPHJMZHKBNZBQYUXZERUXXTJLQYSTKVVGWZCIHHDQATXYMMGSSOHWUJJJEAGTLLFKHORPASFFPNUCXIFYKTCYAPMEBOEONCAHQENONGLKOVCGAWVTSCJIWRMOBHVFZXRUCIBYKIAE");

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
    msg.setTimeStamp(0.6220019460413969);
    msg.setSource(7668U);
    msg.setSourceEntity(167U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(140U);
    msg.cmd = 249U;
    msg.op = 129U;
    msg.plan_id.assign("NMBMLYXWUEIJACMQKTGLHMPLRTKQLMGLAGRAXQFMJSDBEYSYGPCQPSZOBJZJGJQFYFWTOEXCQOUVDVTIZKWAEKQVSTVKMDWBGVCFJYZHAXQCBFERJMLPAOWCKPIUDINSRIOCMDHNGVBSHILPTZZNXUGKZVGFNQHJCOFTWZSFTZ");
    msg.params.assign("RWCPDUSGURQSWHZODKCJJMPLUFEJRXUBELHFBGGAYEYZIRSALGIBPWUJCVWOACJFRQLILNOADMOGSIXKEWHZNKKKVFTXOUDYMUPKQPTIPBSEUDSWQVLIAUBXSBMDNJYYTBESBLAEGCMTPYDKNXRCMWTAFSTXZNKFJCFLWYFJHOZVBBXPWMGHVJNPGILZDYENIXTTFMRXDICPVUKVYEFRLZVGSEZWVNMHGCQNQNMRTKQZTOAXAA");

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
    msg.setTimeStamp(0.2912040905153285);
    msg.setSource(57798U);
    msg.setSourceEntity(18U);
    msg.setDestination(21473U);
    msg.setDestinationEntity(230U);
    msg.cmd = 109U;
    msg.op = 121U;
    msg.plan_id.assign("VHPAXCIEQMJIEIKIMWABETMOVIBQKDHXGZNTOYWMCHZFPRAYYALTYYXHTGSVKQKAUAYAFSQVOWFJFLEBZCRFGLTMLZGVBMHQEOBBGSJKDRNPCI");
    msg.params.assign("HLTEGIHRBAGQFKJHENUJAFXUC");

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
    msg.setTimeStamp(0.8682195991291041);
    msg.setSource(2862U);
    msg.setSourceEntity(158U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("WNWMALJALXVXSXKUKTAFUXINCZLEPROCVFFIIYEZLNZSDLJBMWIVZDCUITLHLHVDXKHGZFHNLQXSRQREVYQDBBFTFFTIWIEAXBCOPZPDKQFBSWYZSWNWZHRQVUCMAREPRTUHCWSKYJUYIVTDOFNLK");
    msg.op = 207U;
    msg.lat = 0.6713933971617728;
    msg.lon = 0.9565487809584334;
    msg.height = 0.12235121160989992;
    msg.x = 0.590823975851713;
    msg.y = 0.24365581067595343;
    msg.z = 0.5917779241224986;
    msg.phi = 0.27177823287822633;
    msg.theta = 0.8685204359255908;
    msg.psi = 0.9945873949238584;
    msg.vx = 0.4046654250527233;
    msg.vy = 0.6467605674313585;
    msg.vz = 0.667360644253254;
    msg.p = 0.5617840307520345;
    msg.q = 0.4984443945235001;
    msg.r = 0.219454193175746;
    msg.svx = 0.5420371935784736;
    msg.svy = 0.7307343078958187;
    msg.svz = 0.24564591867466146;

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
    msg.setTimeStamp(0.47072045140208874);
    msg.setSource(63564U);
    msg.setSourceEntity(205U);
    msg.setDestination(62479U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("YSJLFQDIFFCVIWBBWHFBPUJOESC");
    msg.op = 97U;
    msg.lat = 0.9700324618455872;
    msg.lon = 0.20055605811078103;
    msg.height = 0.9083828394019386;
    msg.x = 0.4427301651251294;
    msg.y = 0.868718726624503;
    msg.z = 0.127823598029572;
    msg.phi = 0.287584558266765;
    msg.theta = 0.8564852896153182;
    msg.psi = 0.3128340111304323;
    msg.vx = 0.8469930214196536;
    msg.vy = 0.29472720051710566;
    msg.vz = 0.9294430850017092;
    msg.p = 0.25406211937803247;
    msg.q = 0.9752367234178149;
    msg.r = 0.055679560790760974;
    msg.svx = 0.22994221760141564;
    msg.svy = 0.8543450104728575;
    msg.svz = 0.3141003326886871;

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
    msg.setTimeStamp(0.716654958200696);
    msg.setSource(7042U);
    msg.setSourceEntity(180U);
    msg.setDestination(36509U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("AGRZKXBHMNHYNPYSUWTJGLLFKXRANCLIFVPTHODPBJPGFETQUGLNHZUSMXRFIAQMVVWITVBCDWWOPIBYGRMXUCIKDMJLRJKMCUVYLXKSSPTKERQWEEJJZWXKFJXGSEJCTEJBJZEQTNQNENHYBHDADZCCRFOTIZOVEDIKHCYMASQRNBUUYOMBCDLVPQFWHKXPXDOGLZGWOTARQDNYWGUAQVF");
    msg.op = 189U;
    msg.lat = 0.09336746421476383;
    msg.lon = 0.11742079113221326;
    msg.height = 0.2944077908910071;
    msg.x = 0.23931982645663874;
    msg.y = 0.15634616630022158;
    msg.z = 0.9440840434804615;
    msg.phi = 0.05354151165030374;
    msg.theta = 0.3909856065464017;
    msg.psi = 0.13467860665203135;
    msg.vx = 0.5994945331713754;
    msg.vy = 0.21972589862244196;
    msg.vz = 0.007144386747986897;
    msg.p = 0.12709330864102175;
    msg.q = 0.9857851630279055;
    msg.r = 0.4956202651513004;
    msg.svx = 0.6322185228067634;
    msg.svy = 0.22963237437268336;
    msg.svz = 0.9529667903061035;

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
    msg.setTimeStamp(0.6810960701313428);
    msg.setSource(44933U);
    msg.setSourceEntity(220U);
    msg.setDestination(27264U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("LPOTRLRZFDJEIAAITSOBTSJTDFJDDBYLOSBJCYBUIQGYMIMWACUJAXATEEMIUCMVUFNANWXXLZGKXJSQZRUOCTJMEUCEISFKOJRFSLMABYISLNGDDQEAXKNFPZKPKCPCOKQFHLRVIMRWGWOTAXCPTEFHNKQXGDZJQSHGVTBYNDBKOWVWHVXUIAQGHJVWNUBYWLIGCPWYUZVZPQEYZMKMMHGRFWBHSHVTYZNRXKOBRDVHNPXHQPZOGYDL");
    msg.type = 111U;
    msg.properties = 108U;
    msg.durations.assign("RTYOUYLLIXCMLUUFJDEHBEXVHZORCSQGDOBTKGYQHDZZIMGUKGPYEFAHKCDZRHAFDLJGWSKSKOUTIRPLVA");
    msg.distances.assign("CMGGRJDZHSRIRKCBJIRYSEEYWSFZFKVQKUBIQCLONKMYYTHXQCHNZTSLXLEKTRVAFUVVRMWQJJKWNQVHJFMYTOWMXACIRHZPJGPSMAVXBOPWSSDSMHGVITXBQEGJEIJYXFUASYZOYJQCQNPMHUDLUOBIYBWWLPXDVIEPPHKZIARZPEBRUUDPXTLZDCDNGWTDMEFLAOBINVDMGFTUYNZWUQXAGNAOK");
    msg.actions.assign("IQSMOHSCBTBBPSEKRPXDQHFWVEWGZPOXGTNJXZLZILBTJGPXKSRRWYTBRBATRARUODSQKWOILKOOEGQRVDAPTZZVYNKXWFNVJVCKHDKJFKCNJKDYIGAHQDENFQTWSRLXOEYGUCFSYDBJYTNFUHVPJFBMXNWUZDIGVLPVTBUGPIEUILICAYOAMXHANNJPMHZYBMCVILSFMHECFFSEYXSLDZKQWUHMQJWGWAECMMZEZLUXQOAJUTYLGRMVCHARI");
    msg.fuel.assign("RIAZNTWLVCHODAKUSPLLVDQZZCBGXIZAYXMIPNZYIEBNYIOLOBVQRFDUSRNQWBLCCGGCQGPUZHNPMFDFSQXZJIHTIHDEMYANVLKDCGKDSFPBWPEYBWZVRXNHJYFETSWYMTUPWHAXSKRNXONGJTXEAVKTHOTCHMSATIXPOHGRGPEQRYEUWLMJLEOBVKTBPCYZKJYAKJWFXQUDGMEUMSROLICFSHCEJNZOQFDKVR");

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
    msg.setTimeStamp(0.8938096505939508);
    msg.setSource(63875U);
    msg.setSourceEntity(151U);
    msg.setDestination(27488U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("NHXADHFCCBXLLIRMCDAWQITKBVUXCQJEVFLNJPNZHOAVVBKCINDLGXJNESVEHOYMQXHXLPRECKKWBSWBUXVQSKGTZUCMGIYGVNFXEMKPYPJXWMQPZHRDOAZEXDMZGWRDSNSWKTNCBTAFQYYJUGTUDGECDOUMRRT");
    msg.type = 97U;
    msg.properties = 137U;
    msg.durations.assign("MCEJNGDUPZYPUEPGJWCFDIETS");
    msg.distances.assign("NSCRHFTEQNSKTSZMQIVIYHEXERMUOOLTCGHZXBPROVAKVVWGBPIGBBLYNZJTCBAGTTXPOYTCZADZVHEFMMLVEGCHFRJPMXPXCAHOXKBFQWLFUEMOSWZOCCQDDLMLIXJRSYPGUIIUXIQOHTFWCWWUYUQDNJYSMQPLNKUWIVRZQLLQRIKBUNDDNNMVOHJAPSXBYYTDSPFJKKYFGKFUGUAPEKVZIATBRDNSWBWGZADJVEOKMCA");
    msg.actions.assign("FSLDGKNLIIAMHXZHXZUBFSVZKUVEMRGCQRDUIIFYOUVONSHMKVHYHVFLICB");
    msg.fuel.assign("QNEUHRUZWOCALZSIPPOQQFHAMFAXGPYOCKRLRPHGXYFKYGFBMOEKOHHSZBHFOBZNQWENWYIDURTHMRGYMXXVIQSHJKBSUCUNZQTEXMYMPNAJRWYCVZMJGUJGEOERMSTJPEBEIXNCUULGAHADBTLOVVWKCRRJKLSPSOKLYRQWIDADTZGCZTCQEWIVZVVMJDTQPWDT");

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
    msg.setTimeStamp(0.20525797669597312);
    msg.setSource(36457U);
    msg.setSourceEntity(115U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("FSILPDJLIJQRXTPBPXXZODQPYXOUWMCYFGDJUZULFHFINXGWNH");
    msg.type = 142U;
    msg.properties = 236U;
    msg.durations.assign("HWDWLUUNYDJEVGONXSQVXHOFBWMHEOWFIYNDVXQLQPQCBJGINILEPSFACQRAWLKGLOZAJMKBHRSAXMATUQGITOHIEGKBATGYRNCEVSRRONRNNZRYEBMIWCJFHPXBKSWZUGKHFZHYFNDMPJDVSRMGZWILHIEJMMJNZFJKMXLKCYVYUUFPXEPAHTCJZXSEOSRCYCTBTTZEGTFYUVDCLDTVOODMSDQA");
    msg.distances.assign("CRQGUVODVEPSMIWTWCRMWPNFLZUUSBWWGKOZMPYWGGFBYEUPDTYMIVRPACWDMXLLVSDZIFFVOJZTKKIQYTGWAOERTRHINLIQCDYTKXSPJJNEJQXRNOBOWBKLBPLXOMXVFNHIHLMHEVASYSAHRTGKNSQIOCZUPAGBCMCURZFQAJKEKLHWXNTMSSHJOXHLNBGPRAJJYGDEDMFUTVBDZHQZQAZUVXRYFISOKA");
    msg.actions.assign("TPAPOBFJKINVWSYBULHKRUTAVRRFQVBCZKFDWBOILDUUANKUDJQFZMXHDWPPGKZEHLELDGNFCKGZCRQKDYTOWLJTKNJYRQTQSLMPIZZH");
    msg.fuel.assign("GZVAQIWNEUNDDHHVAIPSORNTWNTXSERCRXCCFAISFFQJNIHBVGCUYRPDQYOATKMGDFLQGYUKSWIYYSBHUEYGR");

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
    msg.setTimeStamp(0.6915502289119199);
    msg.setSource(30298U);
    msg.setSourceEntity(77U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.5778618443965725;
    msg.lon = 0.25873854110442507;
    msg.depth = 0.9846518037732047;
    msg.roll = 0.2206868861688005;
    msg.pitch = 0.9538343005959747;
    msg.yaw = 0.8696555333118386;
    msg.rcp_time = 0.5139475950380578;
    msg.sid.assign("WNWPCDMVCHQURROCNHBHTHKLQVLVEQPWPBXEWOCTLOAIIDCSOLIZHBSAPGAWMWWYZGUWBXDVDNU");
    msg.s_type = 132U;

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
    msg.setTimeStamp(0.7727193819505509);
    msg.setSource(60081U);
    msg.setSourceEntity(25U);
    msg.setDestination(53184U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.5162455103190606;
    msg.lon = 0.7975935895069505;
    msg.depth = 0.5478980553833614;
    msg.roll = 0.6669834191339835;
    msg.pitch = 0.32023027630764456;
    msg.yaw = 0.021977996149351364;
    msg.rcp_time = 0.5463253364385077;
    msg.sid.assign("XLVJVHIOGYPODXZQOJXLQNQWTEQQSFHUOFAAKIABOJPIOXAULCQDJBWKNJPVEYCPRORCQJDWHSTKQRPSEXGBYASHDBYILVXGUUMLLVKLUYJKTGFYGEBGEZEHQAVPNWIWWZJJRVANWX");
    msg.s_type = 138U;

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
    msg.setTimeStamp(0.2999336681378566);
    msg.setSource(54300U);
    msg.setSourceEntity(136U);
    msg.setDestination(51453U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.1965622723457099;
    msg.lon = 0.999584770254073;
    msg.depth = 0.8687144248414449;
    msg.roll = 0.06245047158275574;
    msg.pitch = 0.39718371332471314;
    msg.yaw = 0.6425559945052587;
    msg.rcp_time = 0.6033512616077987;
    msg.sid.assign("ZLGXDGJUZUTTTAHWZRYDSOKSXJBFDAPMJFEPIXWCCYKPVJMIEPQFWKGYFZCCSCOFMLBOAAKPUVFNYSPJRDOTC");
    msg.s_type = 243U;

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
    msg.setTimeStamp(0.47927387935746824);
    msg.setSource(38901U);
    msg.setSourceEntity(93U);
    msg.setDestination(7553U);
    msg.setDestinationEntity(149U);
    msg.id.assign("DYADRVVFCMONAWXTPTBWACAINYEAXSSGHCOORRUPCLNNPEGKQRGKOTXHUFKMLKJEBHCZTGHMYBPQVGMPUJHNZIZFXZPDVWDQAMOEJJYMPECWFBRQXXGJBLTFJLUCLRDYIPQWSSOCTSESZBZGLMLFXVSOYAQNFASMNSQQUETGUKMYLHFEXYIVZBDBPPUOCTTXRNQZ");
    msg.sensor_class.assign("FNKXPKNGJFYDQQXFRHPHNXYSAQJDWZKQKOOWHMSTCVUQJMSCBTVFOMIHHTHVWLFRCFLSWCCAVQPRLBLGTLEVTOOBHKIGJPAEHFQIJYJBDVMZRU");
    msg.lat = 0.2197901915288325;
    msg.lon = 0.6775124067782426;
    msg.alt = 0.777528180728969;
    msg.heading = 0.7449745159466445;
    msg.data.assign("LSCYGIGARXU");

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
    msg.setTimeStamp(0.994750174033971);
    msg.setSource(50882U);
    msg.setSourceEntity(22U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(42U);
    msg.id.assign("FHWXMPBIEFHIEVYTXVLDAWSWTZOBPGOARUQCQESSFDJWVYCAKHRURTLDMLNQGGPKCT");
    msg.sensor_class.assign("NBVDOACSBLOKKEMOJJRNMSCIYRQRZERHHBQDXFARWDODWIRVXQTGBMOQIAPKVWQNEYGLBQWJNPIYPWAOMTFCOBLLCCVVYUVJPZKHZXZDUNEGLAXYXZCHDSOLTXYHQPEUDDEEACAZXRMJKXYBTKNIRSFPEHMKZZHJKUOFIKCERPSNDGTWTYZPBSFWBVAGTCTJAZNUGXLVOGQFVHFLAMWNMWIUGUNBVFQFDHMGULYJIMXCUTGWQITJPRIHSSPKEU");
    msg.lat = 0.2814834643197689;
    msg.lon = 0.02784089956102198;
    msg.alt = 0.3669462143687011;
    msg.heading = 0.4989522245839202;
    msg.data.assign("AVYLJNPUADZNWUUEQBAMDPLXFKRYUCBJZZFLMZNLLPXLNKSOGBVKCKKSRICKYHDYSGEIIEXJAXIPFGKYSQMWWBNSVFXPHEOROZITWXAJADQUHHEPOXCHDGQDYBZIQLDQHPUALDRJRVFCEZXFSCOVJATTGVUZNTGBMBEOCFTMOHZFMYOOCTKVYCPTTIWRUJUIBSGGVKVGJHXMXW");

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
    msg.setTimeStamp(0.8572810263448469);
    msg.setSource(1806U);
    msg.setSourceEntity(186U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(227U);
    msg.id.assign("SNUTIBPKUCFBVRGJCBJEOLIZEFZGIJVPQAEFUAKXYXUGPBKOYFIKRNCFET");
    msg.sensor_class.assign("VADXHMYWIWEHKKKTPWBPLJYUBCVCKORXUHPDTWIONXNYFWGEJMJIBCIPMHODHKQEEMZOXBIYTVPRFELXBCGSLJXCROMZVIAQFDCZLLDNKQFOGFWYASDGNAGZMCSMKHCJ");
    msg.lat = 0.10741325388287548;
    msg.lon = 0.4709087475653755;
    msg.alt = 0.31849111454782486;
    msg.heading = 0.5655321826812963;
    msg.data.assign("BTMHIJOPXBBJREDXAVBAQFMTUJPJNYUCZSLXDCZUPINRGNKQRUVXYRMAZLOHASWPRXXACKOWAKFXZEHUKPCSOQLLHUNZETRCDMTKQJICKGKHMBDJSGFOWYSPVFAGTNVIYVWLDTRGWS");

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
    msg.setTimeStamp(0.8695572850629971);
    msg.setSource(28497U);
    msg.setSourceEntity(223U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(8U);
    msg.id.assign("BWEMYZXWUQQSAA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NIERSPXOULWEZTYXNPHAHJOEVRTPACRLEZCJRPMGGOES");
    tmp_msg_0.feature_type = 91U;
    tmp_msg_0.rgb_red = 80U;
    tmp_msg_0.rgb_green = 207U;
    tmp_msg_0.rgb_blue = 125U;
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
    msg.setTimeStamp(0.823488755179334);
    msg.setSource(61751U);
    msg.setSourceEntity(68U);
    msg.setDestination(29709U);
    msg.setDestinationEntity(96U);
    msg.id.assign("JUDVSZBBYDWAXEFHSWQQTUVPRMJMOGGKMULWSFGEZZJUMMBXALGNSQFNKRLGAFHUPLYOYHNGQTDMNDBFPROCPXDPFDBXRZXI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VQTNEJQUSKWIJZVJBHXWHDTOEMCHIEHKNIJZLNFNJPPCHWZSTRKPPLPMGDLCEUUBLARZZFNKHRJGMYCMSIAVBVQFPOFMCBROWYFXQWDOCCMDRSDIGCZKTOKUPAGWQYXYUKDYTZRBNOXNPKZJYXLAKMXGHKTLXVSDIEEAGIUVQLAANNMRSLRMBWEZXOXVEBEJICQWBAJZONSTOLRDTOBTFALYMSGFIDSFAGVFSBYQU");
    tmp_msg_0.feature_type = 233U;
    tmp_msg_0.rgb_red = 32U;
    tmp_msg_0.rgb_green = 252U;
    tmp_msg_0.rgb_blue = 94U;
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.661660708067138);
    msg.setSource(49419U);
    msg.setSourceEntity(87U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(23U);
    msg.id.assign("ENGQAYUEUWMBFDBXVHN");

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
    msg.setTimeStamp(0.6562933741818486);
    msg.setSource(1758U);
    msg.setSourceEntity(148U);
    msg.setDestination(38383U);
    msg.setDestinationEntity(83U);
    msg.id.assign("BNZXNIMJGFMFPWHALMFUADEKGHCVGMBQVKNGWCVHMFUKFSDKKZPPXXPSJRPWBPRDCGWHBVVLNHFOAXCZMJFTYNLRPPAUCDEMTOOQWDKLUBMTKCCIMITGKRQALOZGTDJYALJZFRZQLZEJJSUFBVUHCTKGQVHHWELOEJUB");
    msg.feature_type = 72U;
    msg.rgb_red = 156U;
    msg.rgb_green = 49U;
    msg.rgb_blue = 253U;

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
    msg.setTimeStamp(0.051046348142940956);
    msg.setSource(59264U);
    msg.setSourceEntity(70U);
    msg.setDestination(7457U);
    msg.setDestinationEntity(73U);
    msg.id.assign("BAUGBIBRNRRTBWNOXNRNZKKKNODTNIOBEAYUGQORACTLSHJSJKLEMVLEKDKJEDXWTZWGWQDDGSNCGZXACPZTIXKSOVLSLRYAXXHYJILBIBPFHRZULMUCJZFXXQQVZOXURUATTHVFA");
    msg.feature_type = 43U;
    msg.rgb_red = 58U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 159U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.42763284857001505;
    tmp_msg_0.lon = 0.692159267881757;
    tmp_msg_0.alt = 0.42812384966556083;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4870219715107009);
    msg.setSource(51914U);
    msg.setSourceEntity(154U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(29U);
    msg.id.assign("GSGJTMTQLDQQCYHANESHEDIHQICJLJJAHPWEA");
    msg.feature_type = 180U;
    msg.rgb_red = 81U;
    msg.rgb_green = 35U;
    msg.rgb_blue = 212U;

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
    msg.setTimeStamp(0.1760414367225155);
    msg.setSource(62949U);
    msg.setSourceEntity(145U);
    msg.setDestination(9721U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.41063589424048097;
    msg.lon = 0.022537336437810196;
    msg.alt = 0.6789109340031793;

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
    msg.setTimeStamp(0.9651420565646875);
    msg.setSource(34571U);
    msg.setSourceEntity(86U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.6806376193688268;
    msg.lon = 0.566436566530895;
    msg.alt = 0.3965910748571858;

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
    msg.setTimeStamp(0.9166121666385388);
    msg.setSource(46619U);
    msg.setSourceEntity(251U);
    msg.setDestination(27372U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.44833636268936117;
    msg.lon = 0.3381584654772597;
    msg.alt = 0.6304305724785246;

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
    msg.setTimeStamp(0.004674897028358549);
    msg.setSource(200U);
    msg.setSourceEntity(166U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(216U);
    msg.type = 118U;
    msg.id.assign("CWJYNLIJEPIERKBOQOGNTQGDXLYYEMKIZVXJZLFZGGZQHAWXVSEVQSNQOMACPMIHWBTKZPILVNJJRASNQIVVTYCULCHZVHKRNZFEMHOEMFOWEGKKJSBFOPNUAUZZCRIDYEMTLGUSUWHUJDIFPKSYBNDHUITSRFQHCAOTYGTYKQDPKPWBMRXXGODGRBEOJLKSJVWSMPUXELANVCNTZCLDVBBCBCAQTSFRFHWWPDXYX");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.5162011831673919;
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
    msg.setTimeStamp(0.05049524586242804);
    msg.setSource(6319U);
    msg.setSourceEntity(166U);
    msg.setDestination(17523U);
    msg.setDestinationEntity(146U);
    msg.type = 223U;
    msg.id.assign("HXRFMPUIORQBZDIXYIHSINEVXNNPUPNZKJHCFBSSWJUPHCTHYGLNXICEEBKJMRMSCTSDVGFTVWSBFJDOASQYUKGBGJWBRYXJUZRNWDYNTLJEIQTLOCWLAYOVVTQZFUUSQPAQPCBQDMMAAKVYYZJXMWSPURTHLQORLZFXHCCEXTLHEWJBUGGNYMVDEDQOVGAWKTZVMCRNPKZRFIIZJGKGOMGWOYHDZAFTEPXWNA");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("SKMTIBPQWNYGTQVEPGZVQTUWDFFIAYQXCFUQZDSBDRLCXVMJBNY");
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
    msg.setTimeStamp(0.48868376289911797);
    msg.setSource(29628U);
    msg.setSourceEntity(125U);
    msg.setDestination(53522U);
    msg.setDestinationEntity(3U);
    msg.type = 213U;
    msg.id.assign("MUCOGRWAFUDWVYNPXWASGJUEZYDSVSXTGRWMSXDJGEFOBNLCAFMJGTYHIHSKEODQNEHXQHQTCALPFBIAWXUYRTZYZJNXYUSVLZKI");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 48U;
    tmp_msg_0.longain = 0.10115964509895803;
    tmp_msg_0.latgain = 0.8015227728081205;
    tmp_msg_0.bondthick = 3098881497U;
    tmp_msg_0.leadgain = 0.6800237798508181;
    tmp_msg_0.deconflgain = 0.8121270160909986;
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
    msg.setTimeStamp(0.5140905217865783);
    msg.setSource(13265U);
    msg.setSourceEntity(78U);
    msg.setDestination(16972U);
    msg.setDestinationEntity(115U);
    msg.localname.assign("MMRDRDVIZAAPCMBCATNDHUIQFFFHBFTJREDSTYBEEVJPNEJZOCZRBEPGYUHSTSXRBTNOXWQVZSJJURIUTYVKMPZAENIBXZXMPAANLUOVHKRGCZYBLMYPIWOHSROKCQIEGBODQPPTVQFZKKCBLVYRWIGNTUGUYVGJZDJOSSEJCDNBGQUXGXLFMSKSWJLEPLAWX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AZVFYHWDVTXTCFMCBNRSUOJRJIXFMWEQKSKKCQHUKUONCXBMWBUEHOMLFASLYMSBNYXPZMPJP");
    tmp_msg_0.sys_type = 203U;
    tmp_msg_0.owner = 48019U;
    tmp_msg_0.lat = 0.6876985245042136;
    tmp_msg_0.lon = 0.4372884711154482;
    tmp_msg_0.height = 0.12529378704352734;
    tmp_msg_0.services.assign("ILMVHLIQURMKLCGCNMDOJIACOXGFCDDGQRPBHGNQSPRYADNTVWWRQEJDJREXMYXVQZALJCNBEPEQCCFZHNEOWUGHZHMN");
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
    msg.setTimeStamp(0.16273374596126122);
    msg.setSource(15149U);
    msg.setSourceEntity(141U);
    msg.setDestination(59791U);
    msg.setDestinationEntity(254U);
    msg.localname.assign("XUFOJBXAQBQSUJXMOSFQPAKFFWAMGZKCICHXWLUQYXXAVKLHPWPDVRVVYVINCMOODRGVYNRPTDJPLLZGOXEJYFCTWIORDEULDXUFSNMLKZTIRHIWRSPNMTEBEQGVIBOZCSDELBEGQBPVMRISDGFJATV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BAJQESTYEFAVMORWKZNNAPSTWJQKPPCPEVAZRZOETPXUCFDOYG");
    tmp_msg_0.sys_type = 248U;
    tmp_msg_0.owner = 43278U;
    tmp_msg_0.lat = 0.7899827506196001;
    tmp_msg_0.lon = 0.35106263504198265;
    tmp_msg_0.height = 0.11692695567988498;
    tmp_msg_0.services.assign("GGQAEFCWDZZHRPPDNBYQFGACMUOLPJPOEPYIKIWTDBFTKLLHLUXSUEXGJZKTXWNKMUTWLIWXNHMJIRNHKX");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.11070961894423192);
    msg.setSource(2188U);
    msg.setSourceEntity(217U);
    msg.setDestination(32700U);
    msg.setDestinationEntity(57U);
    msg.localname.assign("EPMRWXEUCHLZXZUHQWMRFUGGMJBPYXGCPOEKRUZOPZNXDXTLPEOWAFAGZDAZDSPMNHDOJGISFHGSKJF");

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
    msg.setTimeStamp(0.5787500114111024);
    msg.setSource(55131U);
    msg.setSourceEntity(25U);
    msg.setDestination(19079U);
    msg.setDestinationEntity(1U);
    msg.timeline.assign("KGEEZWFQZMBXORNKJYGERBAPKVATHPVXFQGXQJDUULYWARBVDBGMBJWZKSLXCSIRQYMZTHJCCXNXDCNXGDETIH");
    msg.predicate.assign("KXUOFRDUVMTSYKPLFPTZQXXKORATNGIJEVZIYJLHMZMKGVXLEURJBNYCDWDELBSHPCVNRLKFBUZTMPCOAVRHPAWJZGXFWPSHHQOIJVQIAYJBYBRUEDGAPEQQOUPZMANUTRWVOREK");
    msg.attributes.assign("WYCTEMAYDUSZVEWSJUREKQKVXWJLMSWIIPQIPNTGUJPIPYBAQJVEUNXNWACB");

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
    msg.setTimeStamp(0.3085109272069311);
    msg.setSource(8949U);
    msg.setSourceEntity(143U);
    msg.setDestination(37344U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("ATMLOFVICRSOZNUKECPLZBETPNFRYXRVIQHDFDDSQKNQVHITKAGQAUCMBPNYIKFZSUGNGCKPGDQKSHPWDEJBKVFQXZBNOUJGCAUDAYYSEGDA");
    msg.predicate.assign("XHGDLDYALIPQSVHKWQCFOTAWZVPRBWCWXQFSJMKSLFKVFLIKKGUOENCSYVCFTPRYLDKKBTJIHWPKZRFNOCYTRAIHOXGCXLFEYNQLAWAQEDUMCBLZQQAFWCBGUERONZMHXBKDEGYBMENTGVQYJSHPBGWVSTBVRPITRYSJXTJEJSSCYPHXEOJARUAIJDVUBGNXZMXPBSVHUMDGNOINLRTJPHIM");
    msg.attributes.assign("QFGJULXXXXQVAHZMVSZRMSPKVFYIIBBHZUFJUAPXHQTRMEFOYEGROJLRDOMBUPYOWCQTAALVRYRJFBDDBOECSQRPJPAWGBHUFPPUXFIIRNNDGIHZUSSCCHLJHVMEWEYILTTEKCEABNGTVNWMPRKTCCBUFNOZT");

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
    msg.setTimeStamp(0.1415084898577359);
    msg.setSource(8533U);
    msg.setSourceEntity(82U);
    msg.setDestination(46672U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("GIZGRAXXJRKOZUWOGHGVXHKNCGYMHYRMLSSFWWXZLJBOWDHEINMETQ");
    msg.predicate.assign("EGLIFEUQJBABEUUGDQIEFDLEIRADYSGORNALWXFSNGGIUXXFLDJQBXVXSJMJNNKVWTFPHRWPDMRQPKQYOWCPZJHXWCPKYKQINMAKFYGBUOACHSISCVFKGBZQZMCTQJLRLPZMMDBQZBHPBVMGHCPYPTHZIUNWJARKYZVCOO");
    msg.attributes.assign("FRLJDFUCESDAHICWDMCYANHOVJHNCDUHWXRNEINWMTRWABMTRKZROKSDOOIJPVFZYVJSWIOWOFEPDHVZFAYQGTARTBVJIJTH");

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
    msg.setTimeStamp(0.34891394767693396);
    msg.setSource(20508U);
    msg.setSourceEntity(40U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(26U);
    msg.command = 103U;
    msg.goal_id.assign("LIKQRBOBLHMHGYOAUPBBSKLNZVFQAPWWHCEMRGNIYCKYJWJDGTESRHUCCGVKMSUYXXHLGVFQNNWUXUMULOVJJXTIZZDMTXWYQQCTIMPBVICZLNACZRMFHLXNUKDORGKVBFPYOMKPVHNZASMVZQAFSRCGNDFGJB");
    msg.goal_xml.assign("AEFNBIDGCRLWZDSRXTJAUOIHIOQOMINUKTZENEKLZXMVLJAHOYCSRKKBUFC");

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
    msg.setTimeStamp(0.4957850354019838);
    msg.setSource(27613U);
    msg.setSourceEntity(119U);
    msg.setDestination(29018U);
    msg.setDestinationEntity(231U);
    msg.command = 31U;
    msg.goal_id.assign("FILSHPWOFJCNBBXAJFTTVOKKQBEOQXDTLLUHFONFUORNDZZSCRMTWVQPVDDANGYYPDEWIWHKMYSNJECZMUNBJ");
    msg.goal_xml.assign("PHDIDXNWZFZJRTDPMUUVYUWYWCJXJDRZQELGNGWQEYEHTBFOKSRLVXMDGNKCITPPLIZQFRNJQDDAYXHOVWQBGQTWANGEUHEBARCJCSBTKSFHVSFAJBJYMJVOZMGOGU");

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
    msg.setTimeStamp(0.21362469317881871);
    msg.setSource(45992U);
    msg.setSourceEntity(69U);
    msg.setDestination(21172U);
    msg.setDestinationEntity(142U);
    msg.command = 80U;
    msg.goal_id.assign("IQECZWUOZYIEEKOUSZYSPLAFNNZFVUKKKNVVJNMROQIDDXDZYLXFOHQBBHEBTQFPKGGTRUTNNXBSSGMMEGBORWARCOSBDHUZCBLUF");
    msg.goal_xml.assign("DFGIQXNTQBKKHBQJQFIPQSFDBHUUVVPCDBTQRVXFCKHALAZTLTYGORLKRSEPCZOKNMBRNWJZHOOLXUGIZAUAEYTVXZPHRQWDSCDQLYHKNINPHLLOXYCBKWGLJVWUNRUHGEMRWEPJMXSTTYIICMYPSZZCNPDKUDNZJOKANTBRYQXIWFVJSVITYQW");

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
    msg.setTimeStamp(0.62424439161972);
    msg.setSource(48906U);
    msg.setSourceEntity(121U);
    msg.setDestination(63413U);
    msg.setDestinationEntity(18U);
    msg.op = 46U;
    msg.goal_id.assign("GAXNPGXNAXGKKDVJGLDYCCPIBVAYOJYZBPLOZENWFSFVMPRCEIVZFGULYVKYZFUFLLINSQTBDYXMOLQZWXPUEQYTWXURKDZSNBMDBUKERLR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ITOCMITLLAFFOQXKEEVCTJWMGEZJIEXBGOTQXVSPNGXRCSQGJIMBBCGGLFPMKLNZYMTLSVULAHQANBJGUTBDDRTXDNCN");
    tmp_msg_0.predicate.assign("STCNKZVQTKFSJPPXBCKNBKDFBRRHMKFGGHHUWOSJCAQPMNUJSCIBJGOQPLDOVHPLTOXXWVDI");
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
    msg.setTimeStamp(0.40778910383662725);
    msg.setSource(14377U);
    msg.setSourceEntity(70U);
    msg.setDestination(43406U);
    msg.setDestinationEntity(224U);
    msg.op = 46U;
    msg.goal_id.assign("GMAQBXDEVNLPUPVSMSHWDQZVSLRULJZEMENCRAFWMYGMAXHTLVRWKQWKXZHNNTQFQUKDEOSRAGCDEDZJVUCIRPZYXPJLCLBFYOQPAOUIXNIJZSCKRIXBJPTFZXBAGHROPDLESJZFSTMYWFUJTABZKZSWYYTOEMSDRDGWXQWGWBAVTKIJGJLOANOYHNIRQLQYNXMG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JHBLRSJNKRDRRCTGCHEIDIKEOYZV");
    tmp_msg_0.predicate.assign("USPJRXHHXDFHBAAVZQOUGFUTTDEYPTLNWHOBASWAKKSIGYURLHNBOFCCLQCELRXCJBWRKQAEXMZPJMWJWROVAWGODZQEQPPZTXUJGPTQMDFKRJZATVVCSDYIYYRDUWUSSWBMCIHLFTYGLENFQDSYVFUEUBGDFGVPNJVVNNMIMMPBNIHDAVNXSRSKXDHZPRKGMLWUEGKZOJIZEZNMOGCKAAYTBMJPXTQCBEZRWJFEYNVXYHOBXLSIHLFOLQCIQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EVPAMPLSHPTOEXZTSJXUWOBBXZMFUSXDEDQMIQDESCZCYWYHRLDGOZJOSYVFOPKSTMUTLLLLYVNQUPIGZGBALYNPUKZNGBESMCNUKVDALXWEYOUHBUWWHCNYGPAOVILBVQOKCGRIFHFDQHTUWWFHKJNFJXTFBDOASHYZAFNPDIJMQAVZSARGTRNATXIGKRJEREQXZRK");
    tmp_tmp_msg_0_0.attr_type = 9U;
    tmp_tmp_msg_0_0.min.assign("TQDZRMEBYWFFPNXWFISWWRGFIKAGWOUTUXYMXLYSDJPVANSCEPHMXJXTISBXEXYYTYAPQBXRROELTTZPYICSJNWVQKDJPETLJQZRSSTREMZTPNEZJEBVKIUUGWTKYLAQDZMNPAVBRHVYAAOIDEJOFQUGAGJPGIFDKMKHGZUGOFVFSKCRMFCVUMOUDKZHYOLJAIRNBGDBQHQJNNCHDHUMCWFCBBOZLOS");
    tmp_tmp_msg_0_0.max.assign("PFLEVXROIQJRWWGUHWREFYFVHGAEUIOWGUTQKAPJOCHBLFVCZXCGMBUEJAYYRCDVDUODMQQCIPBNTTABZYPRPZRESDVUSUFZGIFNQFKZJTCWSNXHKXHEMNCQOIKSGRFDXXHRMDZVXNOICZZBWBBOMCKLYKQTNJSSTESERZLNYIOALYNJBVL");
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
    msg.setTimeStamp(0.11327640982158893);
    msg.setSource(906U);
    msg.setSourceEntity(50U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(231U);
    msg.op = 20U;
    msg.goal_id.assign("OBNIOGFAQE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EWGOBITDZKEYWZEFQQFYUMAKLRORCRMKAFUNBUHSJIVDEXPYQRSACSAFSXTIWDUXWTQLQLTWLHHBCFQFGNZQDRKNWXIFTJVIJBPUACNMRUYEPIGYDTBCJKMJGZCRKHVDSOIRPOKVNVIGLQJVWDTTFHVEVDEXZBOOCIPFCAUZWECQGYNKTGRMMURSELNLODBAPHBPJPMZJGXGSIHQUABMVLNNJZHY");
    tmp_msg_0.predicate.assign("DUWPYQHUBUVSAOVGZIEWKKYHKCJBZTLXRRRDVWLUWABFQVNUIUPYGVMBKRXXHNJVEZRNMDKGNPLAGOMCDZYJPDFISAIIZQPNRHYFLAFCVJQOBWHSMEDBGFIHLLDCEUMUKPTADWTEXNRNXHZSYAXGWMCVSTMXZHIJGONVHTMXYOKEOGPSTOGJSPTVQQWDKFLPDMISLBINCWJFTQABYTZBUEQUQSOBWCFCAYJXASQJFOCET");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OYIIGPPQBJRQMPSFPFVHFDCHMNZXBZXYTWDGWHVOWJQZAFOSYKVPVYIWCTYUJIZZITIVUGBJQXMMDYSWURUSEETCOILNFDPCJDFCHLRGICYJOWEAKXUGEFPZLABOTMKWNQTQDNQVNLCTLLSWABERWXPBASVQKDMJRPBLGNVZOSTGQUCBSKHCCYLOZXFEKBUHNREKGEPDXMRZXQROETGADLFHNKVRUNKXUHIGTOSZMLVHYHWIJJYUJFRSED");
    tmp_tmp_msg_0_0.attr_type = 14U;
    tmp_tmp_msg_0_0.min.assign("MSRZWMBGHECQWYHOSAUJYYVDVV");
    tmp_tmp_msg_0_0.max.assign("IXKNPRZGDFDVMIGLWTCCTONVSDALYVMTTEBYCQEFU");
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
    msg.setTimeStamp(0.4570240945244637);
    msg.setSource(44919U);
    msg.setSourceEntity(243U);
    msg.setDestination(63999U);
    msg.setDestinationEntity(175U);
    msg.name.assign("QAZAUZWZSUPYRICUOVBTHLKCUQCCOVDHGRSJNOYXKIFIOGLBVVEOFAMBHBGKWNZXVJACGZKL");
    msg.attr_type = 210U;
    msg.min.assign("XGFLLNDTARJJNMLYUIKAEQAHBSEOEVPBTQOUPCRUCXZLGQQTEGDXVXTDICPGGWKBJCMUUXEAOCPVRSNERTAKOPFOYHMVFSRFZFLBWZWDKFJNQCESCQTLHWGSTRQZPJTZMXXWINVCPGORNQMWYHUAM");
    msg.max.assign("HXQARHFWUHITYFPVSMCEUTRCPKBNAEUYTPFRMSXBHGNNVJXUJBALVCPDNZCQLIKDOKDAGIMNDLPIAROPGIMFMBDHYUJDYSWRVZKPHIXNQYVXZXBZNHSAVGFEJGQDYZXUFJBFUJIMKVSRXNFCTTICPVKRGMQEYGEHOOLNHNAWYBLWLXVXRDMUJWFKEDFCJWLTCEZGAGSHZRDQLQYUCLSTQOPLVPTUGJSWBBYTKTAOEKIIJO");

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
    msg.setTimeStamp(0.2887237905761201);
    msg.setSource(49650U);
    msg.setSourceEntity(141U);
    msg.setDestination(49572U);
    msg.setDestinationEntity(130U);
    msg.name.assign("RINLETXWBDUFKZZEXDKPGJPOXMXFZAQCXFORRNKKNCNWCIAMXWKJPSMVJZDTBDSMAMVGKVNTHECJONXZQPAUYAEDZRQQLJUYBBYULFXYMOGKQHGWZJTYJEQMDPWTEHSHLKGYGEOIMGQIQLKI");
    msg.attr_type = 8U;
    msg.min.assign("BNRAJJEWPRUSERMUGATJFIJTLCKPZFZOLFNNPJCCMYKHQXYYSOLGXLTSSEHKAOCBXZJMYTRATWTVBFEKJLMQLDYKJGIWOVPJLKDGPDWBRUONOFSZYIXWNOYKTKGSHFEUKAIGQTKUQIAXDYZGHVWORQEOHDXMBXPHIZNFUYQWQCHPBFMDPERBULFBXCXNMVQVFQGWDDJRCTI");
    msg.max.assign("RIGALVIDQHQUYTZYRWKAXWAXMJGZJNYCKOFGLFZLQMKDWPCGRQTCYNWHKGMEBHDKAOWPCMSEXUVVSVJJMFOACDKIUMOBCFVWVSDMBRSLLXUEHTUQDGBEKUXSNUEHEGTVELPSW");

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
    msg.setTimeStamp(0.4977182866398635);
    msg.setSource(22028U);
    msg.setSourceEntity(95U);
    msg.setDestination(4317U);
    msg.setDestinationEntity(50U);
    msg.name.assign("UIYPFSWRJMXDDSMMLESFTVNALKZCQVVGNETBGCYRSWYJTQMYYHAXKCBEEQLHQQWAQTPMXMOBZOFDDDQKCDXJGVAGKBXQKVEHSKDGPUJVGFCNZWFXVEZQPGALCJCOHWSDOFJBUTTIMBTALWDNBIJWNKYPYRCVGPSTLZPMIREANTRORXIURIHOKADFSJAFOOPYQSUUAGLWBHIWHZYZGOKCOZUTM");
    msg.attr_type = 95U;
    msg.min.assign("HTDUDRCKUMUBNKHGCQVGERFPIJLGPKJXXJCHZQNIVAQIHAONFKSEXYPTU");
    msg.max.assign("XWUUCFFDLPZFIQGQZZKFULLDAOTRYPXOMABUDTHKFDIEEGSARBEEUGTKPVVWLKYMDOZMZLHYMWERXRXICAAGWQNNQNWJCMWWMFRPMETJPRMZZKBOQBOVIVJUIRPQIAVWSPIUTUCCISETMGTWNXEQCBPONTADJLSFYNNNRKOUTNSJCGDBVZGBGSVIDYSYVEGJBSLHBFLFMFLYKXPNKXEKCJHAHOQZXYSBORHJYTHCLAVSVRPAXOZJUKG");

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
    msg.setTimeStamp(0.25915012594754305);
    msg.setSource(38888U);
    msg.setSourceEntity(89U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(217U);
    msg.timeline.assign("MGOWXZMCAUQYLDZZBPWGMTEPBUMAXPAEYSVGTEYNPBHPVZXRGDQLOUEZIROKLVGMHHXNJPYSYCKWFJIRHYOQNGDSRSRCQKFDLNEWDQRKZGYTMNKJLDNREVTVAHKXBJBCSUCGTIGFGXRJCNOHBSOXQPHNJKT");
    msg.predicate.assign("EFONTVNAZYPSQKPOFVFLMUWYIEKNGGBYYXCLSXEMCHRSBPFVHTMYRQXWDNQFDCRRJCUXKRCITVKHZSMKLUQUCQWTEPWJFWDREMNSB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MFRXNCJPWDEYTAJCQJDODSVIKVTAQCACP");
    tmp_msg_0.attr_type = 171U;
    tmp_msg_0.min.assign("VBJZWEARVDTUOTRYETHADPVLHZVAGKMHUSPGMLUUSFIPMAIPJFVUMQNBRMIPLQKXKIZOEHZBNNNAIMDCXQHECNNDWMZIIUYQGQKWZXGBAQSYPGUOXYEFHQROHJLCGEADKFYWKZWRFOCBKEJABXTRDOSCI");
    tmp_msg_0.max.assign("DUNZVJGCFTHHJUNYNWVNEYVAUDIZWHXAHNKTBSCGERLUUALJWWTKEEDXLCTFLFYZTNTKOZSWQCVMOXVAPJHODLJQNFJLHXPLANOZBPRLODFYYSKFSXWIIQSPQWGBSBHPUKIIBRCTYLRQPXPUMDYELBXEUTSCIIYVQ");
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
    msg.setTimeStamp(0.2774882874586917);
    msg.setSource(39133U);
    msg.setSourceEntity(4U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("GOPYXBBKVGBTYEOAWXBXRWPRZYSMJMLYBPZYIJJRDMNTWZBYHTKYZMLCZSFQDSMKZEEVGOUOOUHIPVLLOWRUXBHANJLJKILDSSZEDCD");
    msg.predicate.assign("PMVPOPHQMJNETREGOWVRAKNLPIWLTPMYNOPVWEQNFGFNKLAPQBBYACUYUFRCLKFAZSXOIVSZMHTGECDORIWZUCVDJFFDKSHWDDLWQHYXGFTHYERMBMCRUOLTMWYBKOUBEGZQQNJWSZPJCUDSTGGIVMBOHDAES");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IAWISYGZWYTROUUITHHTKBSNDIJRPBCYCMIXROEQZHNSGOZIMXKXXVBPQFGFREDPBBONEKGELXX");
    tmp_msg_0.attr_type = 120U;
    tmp_msg_0.min.assign("OHICTUGGQUOYQPFLJPUQNNCABYNJSJWDBJSWDJRWAQAOTTDCSDIHMBLKFMCIWTZNVCRFIUUFRHVEFKEXVHCHZVNGKVSBCMXEOGIZKKPXXJCTVPHAQRAMZQKTGSESALNYBEIQQHCIVMMDPEAXRRIUDGZFOOKRLALTLHBSHTULWJMPYVOWFYOYNYJPOZSBOIATWRBLZRDNZKQDCRKMP");
    tmp_msg_0.max.assign("MUIRMDYIFEAYEXFWNWMTABLRBNXKNEQTVSKUFSLNJEXQGIDPQFNRNZKVVYHVEBBTZTVFMMCXCSLLXFZKFGUAJOAMESPYOMZKRTMBGUJHZWWEILEWROTQVLTHHWOGPUKUJKXPBGKJUCJJCB");
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
    msg.setTimeStamp(0.5301881519430894);
    msg.setSource(64559U);
    msg.setSourceEntity(229U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("FQMIVOOIBJUMDNSIZDZOEJQRIDUPEKNKUXNPOJYPQBFQMJVOWCXSIAQTUVLVEXVRZIAMTVBOHPPJXMQYBGKOEYGQPGLAXRGCEEUCLMTTIRWHSFDYGXTNUELGNAMWLUKSFESJFSNKOYZWRVVZHWIGHGDWNFUFSKQWRTZYGJMCWBQCBAUVFICJITYHDUCZHPTHXOPREATLBPCLZLBBMZKKNDAKCXS");
    msg.predicate.assign("KFMVJSGWXNLTQMPRFMJHGVRDECQSPAYFHGLHQYHJVVGEOQXLSOHJXOLIQSSZBXDUMIBYXQFZEWIUCIJWRWMYCUWSRZGXNDSLDNBZLWGYBGKYCAIQVYGNBPDCBKNRDYCVPOFAOTTOEEVIDMKIWURHVUAPSFOJAFEOUEBBQIHTLIDTVOOLZKTTBFPPMDKAJXFEBISAMXZNKGEDWNJPPLURHGNQNKXFZMVQRAYAKUUMWLSCJKZUCYEZTRCJH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HJUWJZOSUVDOARHFYFSSZRINAKJHTOVQDUEMOLPXXORBBAQFFCDYAZIKASVBACGYUMVBAJINLTDDBFKXNKXBKIPHQWHWGZBNLILOCXFWSKBMHNPVCULSONGSVEXJPERGESDZXICTDXFCFEV");
    tmp_msg_0.attr_type = 32U;
    tmp_msg_0.min.assign("RIAPTGAGADUWLFAHGIYJVNPFDCHHCIXDKUDAMZKBVONLOIJBMUXOWVEDXEENTLCKEPLPNVYYFMHMPOJSNFMOPRBEJSURHCBLFIXVBREKBGLHTNWERNHSJYDUUXOYEUNJQHRTAYZFVHWTWKSGCXGYQQLZCSG");
    tmp_msg_0.max.assign("MVAOFPWDITZOWDWUUQKDBSRZJWLJUO");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8316190823584274);
    msg.setSource(10234U);
    msg.setSourceEntity(25U);
    msg.setDestination(14361U);
    msg.setDestinationEntity(167U);
    msg.reactor.assign("ZGVYIADWJXJULRWZXABBMIWZYHAMCCOOYVJDCRNEERRTGCSFYQDQPDTJWOHZTRKEUSXFNHZEHZUONXITTCLBXHEYELPLUYPDFZEYVKNH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JRZMJWMBVSNRYVCFSWQFMJJANUQBPIDEJYFTAKHNXMXYAZMHUFYSEYOWGFNAHYUOHPLPEQVNNRZZRTSQACKFWFBVUGJLCDHTUOIOADIXEZHMWASSHPZUXDKIIFRFJVDQCEWYVWUWSOHHRLDTPPXPBXQMDGLXOBKGMGTWINLOQGIEGPXBYLENIEVYKGONIKGXKCLLSBPRATLBBDCUECTKQCOSJRFCDIKCMUTSVXQJZKTVPRDQJUYGWZOZVZERH");
    tmp_msg_0.predicate.assign("HGUACEBTTQPRJTXV");
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
    msg.setTimeStamp(0.33445046465374106);
    msg.setSource(34551U);
    msg.setSourceEntity(151U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(88U);
    msg.reactor.assign("BCJESGENMPYDPCYDUHOGZCNYWWQWJBZZMYATHSQDXDFEGRGHBFYEDXJOCXRBZVIVXDCTEMHHEHFTAASXYZUNGZLRIHFMKFSPUBNYRPKLIOVAMKFQKTINLMVUODVSFBPKRIDWWDYUEKUWWLNDOPPVVTACFCQXEQJJQIXFBAOTXMJSTOGGHKUBAJSAPZLIIMYKRVXGATBLLRLESTBYUTOSQAVPVCICHNGKPOZ");

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
    msg.setTimeStamp(0.23475287450955695);
    msg.setSource(23890U);
    msg.setSourceEntity(228U);
    msg.setDestination(55860U);
    msg.setDestinationEntity(91U);
    msg.reactor.assign("YQQQHALYMRQTOCXEOWKJYOZPZIBRLUAJYMSWVHWXJNZFUSYOEANTVXLKFDOJHRAEFHBFKUKVGXAXEZTRBPCNDFDKJSPXFFKAECGTECULPQMVNJLYQBSIZHXBGIMNEDGLH");

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
    msg.setTimeStamp(0.9455317604685861);
    msg.setSource(40721U);
    msg.setSourceEntity(163U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(97U);
    msg.topic.assign("VMSQJAHKTBESVXEQYBAMKUSSFBRJBETLCGKXNNLXODDTPGJIUVILFEZXCTPFDATZHITBXJLHDFGWKJHJSWVUAESCEOTPCBVMDFVYULDWCOUPICDJCLSUOPYKQVGNWQOLWSQRARAQZZQSTMPGOROYMHMKCYXZSMEYHMEKWDNWTNHPCELHQOPRZBG");
    msg.data.assign("NYBBMMYMJEPZUEWRNAWQZILOGKRIPFWMAQBGUTXAEPKIMHETXFLOSREONJQHNCIUIVZZUCBYVGQCSBPTOVHHDTBXKSFKUDJLGSEVWGFACDERNRRJKGJNCAPYWSSAGPMBZMFCFOHVPVUPLOXDSLXTBSTBEKJTPKDLFNMXQQRYBZVYQNNZGSHSIWVZFDRCQHTVWONDFLDILUZKQPAWDYHOAKUJHMJYED");

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
    msg.setTimeStamp(0.12540770601386797);
    msg.setSource(37937U);
    msg.setSourceEntity(93U);
    msg.setDestination(42303U);
    msg.setDestinationEntity(200U);
    msg.topic.assign("ORVHMLBUMCJPUDXUJDOLLDXJXILRJASFZRAXNVOMWGXZXMRVVGMCTDJIFVNPBURWTXTDQENGFRYLPQHEZQUSJSDYBUGEQWEDXNMEINNZHARQLRSKVGZHOYCPOBTOYLFMWHASQRIAKJTIIXZGYAQHYWKECGOAVEYOSNCXHETQ");
    msg.data.assign("PEAQQINXFCUENUCXWSDXDFPRGQVIOKNFLHR");

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
    msg.setTimeStamp(0.08832323536795483);
    msg.setSource(58035U);
    msg.setSourceEntity(216U);
    msg.setDestination(53449U);
    msg.setDestinationEntity(135U);
    msg.topic.assign("HNMJSZUINIYWEMSFLJO");
    msg.data.assign("ZUCNMFDYWSYUIGZAJKDAYFZHQRDXOW");

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
    msg.setTimeStamp(0.1415581931270723);
    msg.setSource(50453U);
    msg.setSourceEntity(246U);
    msg.setDestination(3267U);
    msg.setDestinationEntity(213U);
    msg.frameid = 141U;
    const char tmp_msg_0[] = {-95, 60, -67, 12, 2, 55, 4, -34, -27, 40, 108, -64, 107, -2, 107, -128, -20, -95, -105, -32, -11, -106, 5, 43, 23, -30, 13, 69, 56, 70, -38, 88, -102, 104, 123, 44, -42, 105, -71, 3, 55, -17, -94, -93, -85, 52, 84, 1, -76, 25, 102, 32, -5, -121, -95, -51, -13, -92, 8, -83, 108, 21, -127, 49, 57, -37, -102, -117, 79, 17, 36, 40, 72, 33, -30, -21, 91, -29, 103, 65, 103, 65, 63, -22, 72, -92, 112, 29, 97, -93, -119, -74, 59, 106, 100, -96, 115, -67, 45, 76, 56, -66, -75, -70, -11, -3, -102, -49, 29, -70, 105, 60, -16, 115, -7, 93, 85, -48, -48, 47, -53, -128, -18, -20, 54, 94, -66, -31, 60, -11};
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
    msg.setTimeStamp(0.3795330834689544);
    msg.setSource(59829U);
    msg.setSourceEntity(5U);
    msg.setDestination(19979U);
    msg.setDestinationEntity(217U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {-86, 122, -57, 46, 90, -80, -26, -105, -82, -91, 38, 111, 13, -101, -59, -38, 11, 26, 29, -79, 85, -28, 80, 96, 56, 115, 33, -86, -126, -60, -86, -125, 25, 115, 101, -57, -4, -27, 92, -30, -25, 11, -89, 20, 19, -39, -27, 117, 88, 86, -38, 77, 113, -73, -66, 80, 93, 38, 13, 77, -86, -17, -47, 88, 40, 56, -33, -49, 17, -127, 16, -37, 24, 84, -123, -57, -5, 24, 106, -120, -75, -128, -30, 60, -57, 18, 54, 86, 63, -25, 114, -75, -18, 48, 20, -19, -53, -100, -101, -16, -23, 99, -18, -3, 51, 20, -109, 73, 67, 4, 74, 15, -128, 46, 78, 2, 60, 85, -20, 27, -57, 25, 89, 122, 58, 71, -87, 26, 111, -82, -53, -127, 103, 114, -109, 26, 95, 80, -66, -66, 69, -85, 45, -82, -58, 58, -84, 27, -120, -8, 24, -28, 86, -76, 122, -91, -117, -107, 124, 119, -37, 17, -10, -7, 32, 121, -89, -59, -127, 30, -76, 49, -104, 14, -74, -93, 125, 109, 50, -43, -51, -29, -105, -103, 7};
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
    msg.setTimeStamp(0.7077469825254636);
    msg.setSource(61090U);
    msg.setSourceEntity(101U);
    msg.setDestination(52518U);
    msg.setDestinationEntity(253U);
    msg.frameid = 71U;
    const char tmp_msg_0[] = {-37, -32, 79, 110, -19, -116, 76, 68, -85, 31, -107, -25, 5, 78, -93, -98, 112, 88, -57, 50, 48, 79, -108, 122, 110, 16, 39, -102, 47, 97, 116, 123, 118, -40, 27, 116, -49, 7, -43, 88, 79, 124, -31, 104, -47, 17, 34, 66, -8, 71, 47, 64, -111, 19, 125, 109, 64, 51, 74, -55, 15, 114, 0, 53, 86, 120, -79, -30, -124, 120, -45, -26, -87, 55, -39, 57, -10, 3, 75, 80, -19, -91, -101, -32, 42, 95, 64, -77, -26, -80, -96, 96, -77, -46, -47, 60, -38, 111, 104, -13, 28, 19, -45, -103, -119, 95, 19, -19, 81, 117, -89, 109, -53, -106, -11, -62, 106, -53, 111, -91, -78, -114, -6, -53, 37, -77, 66, 58};
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
    msg.setTimeStamp(0.29919487036529957);
    msg.setSource(44315U);
    msg.setSourceEntity(28U);
    msg.setDestination(10765U);
    msg.setDestinationEntity(59U);
    msg.fps = 251U;
    msg.quality = 98U;
    msg.reps = 32U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.5641983933402441);
    msg.setSource(13117U);
    msg.setSourceEntity(251U);
    msg.setDestination(9194U);
    msg.setDestinationEntity(23U);
    msg.fps = 156U;
    msg.quality = 207U;
    msg.reps = 148U;
    msg.tsize = 15U;

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
    msg.setTimeStamp(0.10413748199419681);
    msg.setSource(3502U);
    msg.setSourceEntity(4U);
    msg.setDestination(33353U);
    msg.setDestinationEntity(88U);
    msg.fps = 165U;
    msg.quality = 121U;
    msg.reps = 245U;
    msg.tsize = 14U;

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
    msg.setTimeStamp(0.47186285423829677);
    msg.setSource(28610U);
    msg.setSourceEntity(163U);
    msg.setDestination(26702U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.485866563644044;
    msg.lon = 0.4542955530441809;
    msg.depth = 128U;
    msg.speed = 0.05673182472969518;
    msg.psi = 0.1187212680614601;

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
    msg.setTimeStamp(0.0365930526769811);
    msg.setSource(38515U);
    msg.setSourceEntity(13U);
    msg.setDestination(65368U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.9363871277968769;
    msg.lon = 0.792431312238753;
    msg.depth = 36U;
    msg.speed = 0.13865133248778094;
    msg.psi = 0.7528807427783235;

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
    msg.setTimeStamp(0.05147560946256857);
    msg.setSource(39088U);
    msg.setSourceEntity(5U);
    msg.setDestination(44225U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.476004674169756;
    msg.lon = 0.9926493931620037;
    msg.depth = 221U;
    msg.speed = 0.5469327475438004;
    msg.psi = 0.5250260502341454;

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
    msg.setTimeStamp(0.066270471652071);
    msg.setSource(1972U);
    msg.setSourceEntity(122U);
    msg.setDestination(55390U);
    msg.setDestinationEntity(90U);
    msg.label.assign("EFJLKJNAVEHRCYUOULBHGXLFBZIHVDVHKAPWJQBMCKPQSHRQJVTQEOXKYHNRONBYHMWJOVIZDAOXHSBFGWTRUEXMZYDAPYMTQFNPMNJSRWYLZGCZKJIQIWOFHUGTODXDELBXUJSYRIWUERGNASTACRCJSXFLAYVCACVINXWAOIONJIBPBUKDZMPCUNOPZBPDSDFGHKFFEEUXPWKWSSTIGMLLYLTRZQQMITVKGGAVNMK");
    msg.lat = 0.6722380842387207;
    msg.lon = 0.7891256408441479;
    msg.z = 0.4614752055833189;
    msg.z_units = 72U;
    msg.cog = 0.4364011467207821;
    msg.sog = 0.7935698771937478;

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
    msg.setTimeStamp(0.7516852547126409);
    msg.setSource(53263U);
    msg.setSourceEntity(106U);
    msg.setDestination(26038U);
    msg.setDestinationEntity(182U);
    msg.label.assign("MSIGJNNFMJOOWUAKAKWVVUJSOOWOQQUQDIPHDOLBCCDZVLJPZHWNCUWRRHGIORBKLTTHBBARWDTJEYNCKNJRVGOBNZWDEYHDCLEJKZULOSZITZMBBFKGCF");
    msg.lat = 0.8114835086082101;
    msg.lon = 0.48316525432449087;
    msg.z = 0.0442091309056063;
    msg.z_units = 24U;
    msg.cog = 0.6826364252260673;
    msg.sog = 0.9511865381922191;

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
    msg.setTimeStamp(0.6821093207338891);
    msg.setSource(7995U);
    msg.setSourceEntity(29U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(241U);
    msg.label.assign("FCEKOLPSEHJVDWPGLDSHRBVAGXLGWKUTIKCFYMCYHJOVGFMDEZROABTRKQFCNOACNWMPLYCKXISHKXOZNSJEHA");
    msg.lat = 0.30345993116130443;
    msg.lon = 0.14650700701613806;
    msg.z = 0.46967838353050206;
    msg.z_units = 198U;
    msg.cog = 0.943748709726876;
    msg.sog = 0.8016107872404813;

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
    msg.setTimeStamp(0.8517343064218895);
    msg.setSource(15289U);
    msg.setSourceEntity(155U);
    msg.setDestination(47722U);
    msg.setDestinationEntity(31U);
    msg.name.assign("BPQOHJROHWQZOWUYXXKSMALTMADOUDKZZJUBEGGVUBCRXVUIFPFDCNNRVJKWMOTFIYWLVSJFASHDCIDNBAXBRWGHOZXGOCKAEADPYHGLKFUCBLEQKMMPCAPJPSAQDMQTPYFERLNZOCMHNHNWLULRXGUTAEZYGQXYPTJYVJELJDHFYSCSIWDZIBZWQTKENFNGHOPYIMWEOFBVXGIZLQLXIIVSSMUGTSETJ");
    msg.value.assign("GVUDEPRFSNZDQPVCGPESWNBTNPWMYZLLKEIJGZYYSRUMGNCFIOVBTCQQTMXLHXLLQXVROBCOMZYFQHNARLYHTYHAUQDUOHIZNAJXCUGOCPNYIDURVFSTJSKLVVFYIMBFJGUODRQDKJWMZCNJWWJCEVWUXYEKGFXVSEPPZAHKBGHAISBDEKTQROTZOXXSJF");

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
    msg.setTimeStamp(0.8481445752486184);
    msg.setSource(45132U);
    msg.setSourceEntity(183U);
    msg.setDestination(55024U);
    msg.setDestinationEntity(84U);
    msg.name.assign("DIUGBQXUGIXYZMMOSECZVWMVOPFSDKZJNWWEWPHUGYRMLKJLVOKANAVKFPBAXEORAQXDFBJAMRKFZGDXPVMDWWCTROJNJJ");
    msg.value.assign("PJPESFEWKVKNBZTFIDCAGQHLBEAVDJXFWCNNWFXVTUTEJEDQKAHANENSYXKRRVMSUHUIXWNMVKNCZNHNPKCLULSSWRRGKOOHFVSXCXRY");

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
    msg.setTimeStamp(0.9479981646743298);
    msg.setSource(64116U);
    msg.setSourceEntity(7U);
    msg.setDestination(4602U);
    msg.setDestinationEntity(173U);
    msg.name.assign("XAOMBMCFLCZDIEVDFORZVKKFYYIPCLRICYWBTGXPJGZTNJOWQFRNFHOQSQFEVXVYJKBUWEPZBCLDNEKGNRHAJZZMFAGHSKRODLRRVWTLSMQNBGIATEPHXDNULBXKAWIYOAOWBMYARNENUSKUPQCHODHIFQTKDBGXMUXA");
    msg.value.assign("DWRVBZZWGFKJJMJSKPUTZDHNHLSCEAGODOLXLFWPTXGIJFNBXVPPFLJPJIKOXDBFOXOVMZWVXKHVDNXRZPSITGOYAWGYVNMPRMVQETA");

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
    msg.setTimeStamp(0.7117105516018423);
    msg.setSource(11965U);
    msg.setSourceEntity(39U);
    msg.setDestination(64726U);
    msg.setDestinationEntity(131U);
    msg.name.assign("VACJIXMINKBGGUQOTUKYOSTTMOFYXSGYVSORJAGNMVQFHUSECCUZICJYUZIIVSSZKEUZNGWVFEPOWXDGPVDUOCILYDTCCWTAYBQLFYSVBTJZZBRVXJYHXTHURKAELEWMHMPLHVVWUSZXMRQBPPHQBPAFGRLBNNKOZRXTNJWFDLHANMOHNZOCWCBLSXQMWEAH");

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
    msg.setTimeStamp(0.04564103298282318);
    msg.setSource(58456U);
    msg.setSourceEntity(108U);
    msg.setDestination(42539U);
    msg.setDestinationEntity(115U);
    msg.name.assign("VDLPLFMSWUXTCBIRQRSIVXBYUHDLCBSNRMGWZRSKVXAIUTEDIJYMQXKSXGKNXHJZSLADGNDAMRQNRMKMLXUKPHHBZXJHNBFSPNERWQPQJIPVNY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XWVFZTGPULMUIXYYTNDBKZKNFFDSOMAAKKYMIJLCPYKOJWTXXDRMJLTMZDTZDMJHERSQAVAHKMSBLBNDIOEVCAQCDAEEOAYLCGUCZHLUMNEUCMROHGPQVFJVSK");
    tmp_msg_0.value.assign("UXXDNKBTDVNICTOSCJELLJGCCZKXRQNZKXYFHARSIHBGITFMWFPWNNPDUWWOKAMEZPMBTGYDLDIBJSFNAPNQILWKYHCRDOYUHVJWKXAJMYUSCXQERAVFJQMEWPZWUPZOSUK");
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
    msg.setTimeStamp(0.8690887064629631);
    msg.setSource(52525U);
    msg.setSourceEntity(225U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(244U);
    msg.name.assign("ZHYPRVNMJNLSYVXOWPNKWECDQEJCAKFVRK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TQLXMFIGLKQYBGXOSVNZTROQLTPGXNWBICBEBKZMWZLHAALVOXORFAJARLJUOGIRQKMSIBKQJUJSNKLJEYUDWWNCPIVDCYMOTVVRBZPMDWWMDIAJSYEOLBXTDVWQOZRMSDJYBATTODMVEYKQNESWXVCMMKKGIPCJDXTXJYGGNNSZIVCPHQZESVACYYCIRFGHPPF");
    tmp_msg_0.value.assign("FACRDPVQLACFSVETNGULJISROMHWZYLNAJIKKRWQ");
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
    msg.setTimeStamp(0.840870421660478);
    msg.setSource(65067U);
    msg.setSourceEntity(211U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(132U);
    msg.name.assign("ZALCDWDSEXHEEQWVTRSRMFDOBIQSKPGSWVKSQBKPOMXPUMNLGHTNDVFPLIJMYNKZWUOCOLRZCXEJWNOTHYZICMVAMYUGUDLTBARCOQCIHFRKAYMGJRJOKPFFOJJBXVTNKREWIUFNEXPQTIPHPOVTGIZNRAVLBFYSBSYBVWCRETZUXIMPXATJQSHIVAGSLNFXYHAUYFGICVYKJGBD");
    msg.visibility.assign("FRSKLTVAPWIJZZCBVFGKEYTPDQHIPKCBOCBYML");
    msg.scope.assign("LNILAZOBLITNKGVZNVWFDQFGJFMRNTBJOFJPMQTSPRXVUGRGQUQHBBCNDBQSHGRNQPMVDENADOYLFFDATFKZRHMLSWDKXRGXEWIXFJOPXHYOCTBPYFWTQTIHDKGABCJEUNIOCVAYMYZULCOIHEASVCWWVYMUBOZPCKPUJJKEZHLDGIPWKJKRCEVKOMHUVESDVBCITN");

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
    msg.setTimeStamp(0.19789891085631028);
    msg.setSource(13017U);
    msg.setSourceEntity(192U);
    msg.setDestination(59038U);
    msg.setDestinationEntity(99U);
    msg.name.assign("GPOPEZUDCSTUMFCVLORVZNJUBKRIMAQWGRNUDBVUZOKVWYDJMNXVQIHBSAHLEDVILYOHTULRTZBKMEXZBYHWZIMZSNLAXLPRCCWEAEKRKETBAMWFDPY");
    msg.visibility.assign("DCFJJBOCGUAJENDYULEGESCRUOICPFBKPXHOBJM");
    msg.scope.assign("YGIIQOGFEIJNCCRAZUNRAXPAWSIJGXMBVMFCWESKOCSZKSFHXYMZOWZJPFWNNJQHQXBJTODHZOTZMJVILJHKTLJDOTICGRAGXUBQSICTHBRSIEERVBNRUWCLUAKEUXXYDTHZUMRYQUFMKPDTLTLDQISBVLZDYLVMRNZUWOF");

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
    msg.setTimeStamp(0.13794218476080766);
    msg.setSource(33217U);
    msg.setSourceEntity(34U);
    msg.setDestination(6211U);
    msg.setDestinationEntity(21U);
    msg.name.assign("WZXGLXFKUCTXJONQDRDTLPPLSNJLATHUSJAMVEMHWNQSIYDVZTHMXCCDVXSFOAGFEQLCOBFUQRUIGWPFLYOXYQHSCGBOGZERVHRUXQEUBIEOAVSCEQSFMMBZYKTFKQBJDCZHDHAFBZJGPJGHOCYNZAIYWTGRYAIUIJDLKRVRBMZQNKNYPRPBVSXAKVVPW");
    msg.visibility.assign("YKOWAXQSWCMWDIUEYYITYFDVTKYTPTPNSAGHUGEMDJJNZAPOIXLMVBFPXFTRRZTTAUKCBGRJAOFEKCQXBKHXEUYTJOGDVQQIXNLZYOECRXMNQTSSHGUEVKUBDCPMHOZLCXOWMOALXLMEJGZSHHNHYZHNLJPHMBLKRQASQGBZ");
    msg.scope.assign("JDFGCKLEBUBQEFBLPJWPKLWYTEKIXNKP");

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
    msg.setTimeStamp(0.8583334661761013);
    msg.setSource(54090U);
    msg.setSourceEntity(210U);
    msg.setDestination(14498U);
    msg.setDestinationEntity(49U);
    msg.name.assign("RVTWWWPEWNWHSFZTRDQGOUBSNIEMRPTUBFJIATUBJSSNFTHLYZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RIKCRQGVLTAKPGSCGNTNIZPZUOUYDZCSQVEOPOAWQZMRJCBOZRNMJSAKYJZMEBQNDLLHQJBWTJXDMBOAQMBDPGEUPEIBYSIBPMGFELHDWZUIKSFSCUADTCNEJYJVMUSKRFHKTXVYXAGZOBOFYVHVYU");
    tmp_msg_0.value.assign("VNPIQDNCGCMNYZFDXQBNGXYRORSSLKROADOYTCZIUMEQEQRSJCYQTDTYUTOUZVFNTBWLINBHVMFZZQPWHVTEDXNUTPBWWDSIXKGIJIZC");
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
    msg.setTimeStamp(0.24691724659514735);
    msg.setSource(29467U);
    msg.setSourceEntity(53U);
    msg.setDestination(23427U);
    msg.setDestinationEntity(213U);
    msg.name.assign("HRSFQMKYADWMJCBTFQPHEKXUURATBTMPUEGIEPLQCPENWYXLMIUPQAMAZQBJIVLAVRXXPAGULTVHQLILHJBOQFVVXCDOWZBVZZVFXHGKJEPTXWSNITJSSWODKIUNLIGXMYGWVVRDCRGOTYJTNZMKCCPEBBUO");

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
    msg.setTimeStamp(0.8174925166911193);
    msg.setSource(53830U);
    msg.setSourceEntity(3U);
    msg.setDestination(62U);
    msg.setDestinationEntity(33U);
    msg.name.assign("SKGHUOPORFLNONTXMZVLABKHBBTOYVSKXHDCVIUBOHMINNDKWGYVPKDTEWFJHNMWPHMTUIRDPEPGCEGJMXJWZYRRYDZSOKXZCILLXVQERZCMMMCVSSREPTRSQQYEVBUTFOXNULZUNEGIPLKSCCZJBFUQCDHEQDIWODNQAKAN");

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
    msg.setTimeStamp(0.3269721892131331);
    msg.setSource(18907U);
    msg.setSourceEntity(170U);
    msg.setDestination(30812U);
    msg.setDestinationEntity(175U);
    msg.name.assign("XUNEDMPIYAKLSPKQMHKKUYGTAEPNQZGDBODCCYUBVONIPZKVQMCEDAJBWIOVERGASOILJCCXYYZZLTQSPJFQHHFWLFFOJFHWVWSNUJXFHNKZPLLABGVVUVLGTJTDFSHM");

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
    msg.setTimeStamp(0.5972340434018119);
    msg.setSource(19549U);
    msg.setSourceEntity(62U);
    msg.setDestination(44425U);
    msg.setDestinationEntity(0U);
    msg.name.assign("SCGSHPTZBLYLTKTINHYYIANYRXQKUEBKZDEYDDOVYTQFSKFIALQWHTWDWFJEIUURBDKHKZAXLRBLMLXCDAFJPSTPVBOSLGNMGNQQLSEZIVOXQBCUZJRXJZNQFEAPMWNTUIAZCFADYUQYVPCCAEXENSVOIBRKEJDMHMGOCZBWXJVOKEHRTGZNBBNHWCWIJ");

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
    msg.setTimeStamp(0.005204283661011444);
    msg.setSource(58312U);
    msg.setSourceEntity(107U);
    msg.setDestination(23997U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FXTILLBGDDWKKVRYUJXUSFDVCTZJAGUE");

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
    msg.setTimeStamp(0.4412245090137572);
    msg.setSource(36642U);
    msg.setSourceEntity(21U);
    msg.setDestination(62496U);
    msg.setDestinationEntity(196U);
    msg.timeout = 367414168U;

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
    msg.setTimeStamp(0.11679775371914936);
    msg.setSource(57691U);
    msg.setSourceEntity(195U);
    msg.setDestination(44964U);
    msg.setDestinationEntity(74U);
    msg.timeout = 3473816557U;

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
    msg.setTimeStamp(0.7337956872145374);
    msg.setSource(3850U);
    msg.setSourceEntity(82U);
    msg.setDestination(50895U);
    msg.setDestinationEntity(115U);
    msg.timeout = 1266803495U;

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
    msg.setTimeStamp(0.013725001604815601);
    msg.setSource(60205U);
    msg.setSourceEntity(15U);
    msg.setDestination(14581U);
    msg.setDestinationEntity(20U);
    msg.sessid = 1037754019U;

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
    msg.setTimeStamp(0.9965325889006856);
    msg.setSource(60325U);
    msg.setSourceEntity(145U);
    msg.setDestination(48040U);
    msg.setDestinationEntity(73U);
    msg.sessid = 637932903U;

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
    msg.setTimeStamp(0.8003257210814453);
    msg.setSource(1218U);
    msg.setSourceEntity(136U);
    msg.setDestination(48496U);
    msg.setDestinationEntity(97U);
    msg.sessid = 3397060342U;

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
    msg.setTimeStamp(0.7203743125838442);
    msg.setSource(6935U);
    msg.setSourceEntity(191U);
    msg.setDestination(30775U);
    msg.setDestinationEntity(155U);
    msg.sessid = 2302411069U;
    msg.messages.assign("MCOWSLBRBETSZMQGVRFJYXFYUWHPDMQCLRNCQHXTENZFHTNYBBMMKSPJOPIAQOAKVMIEFYNGUPXSGCHQGVHGNSDGZTBWVCECDDZZHNUWMUTIOVP");

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
    msg.setTimeStamp(0.11660203635336674);
    msg.setSource(60672U);
    msg.setSourceEntity(163U);
    msg.setDestination(11720U);
    msg.setDestinationEntity(84U);
    msg.sessid = 403006838U;
    msg.messages.assign("OSGXEWIMEOAWSMMAZOONTWNHPVBAGF");

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
    msg.setTimeStamp(0.13879870376753545);
    msg.setSource(37782U);
    msg.setSourceEntity(166U);
    msg.setDestination(14816U);
    msg.setDestinationEntity(219U);
    msg.sessid = 3777366214U;
    msg.messages.assign("FQNURWKHSPXRYXXXAGXLUIMFWMTIDFPUSWRNNDQXGDMLZIYVPPMZATZABRGBOPTSSWCRYUMEIPFAJIFLTGJGHSSEUKKJUBCWQAQVDGKCYYCOFZZZNONLQNBARHGGZCIUJBVHRHNUREGOEI");

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
    msg.setTimeStamp(0.562510661727835);
    msg.setSource(44210U);
    msg.setSourceEntity(127U);
    msg.setDestination(42799U);
    msg.setDestinationEntity(5U);
    msg.sessid = 2107404782U;

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
    msg.setTimeStamp(0.6402192707083292);
    msg.setSource(52311U);
    msg.setSourceEntity(55U);
    msg.setDestination(12715U);
    msg.setDestinationEntity(201U);
    msg.sessid = 1662477821U;

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
    msg.setTimeStamp(0.5180337041363895);
    msg.setSource(18965U);
    msg.setSourceEntity(102U);
    msg.setDestination(27304U);
    msg.setDestinationEntity(133U);
    msg.sessid = 3301765103U;

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
    msg.setTimeStamp(0.05130044389495647);
    msg.setSource(36956U);
    msg.setSourceEntity(186U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2198647950U;
    msg.status = 139U;

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
    msg.setTimeStamp(0.9206172952355969);
    msg.setSource(5057U);
    msg.setSourceEntity(120U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1298307410U;
    msg.status = 159U;

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
    msg.setTimeStamp(0.9325164317923973);
    msg.setSource(41215U);
    msg.setSourceEntity(12U);
    msg.setDestination(35676U);
    msg.setDestinationEntity(110U);
    msg.sessid = 1263319734U;
    msg.status = 181U;

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
    msg.setTimeStamp(0.6907746954529329);
    msg.setSource(32565U);
    msg.setSourceEntity(162U);
    msg.setDestination(55302U);
    msg.setDestinationEntity(141U);
    msg.name.assign("YMMRLHKNAHHKAGQRZPBTCAPLSKBWFBNNKPGTOARNCJDDUUQWLFGWXWLEPPMTODFNTDBASBKPGXAXIRRTEWBPTDYEOCCSLVUBR");

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
    msg.setTimeStamp(0.4279999243020872);
    msg.setSource(3084U);
    msg.setSourceEntity(213U);
    msg.setDestination(54025U);
    msg.setDestinationEntity(218U);
    msg.name.assign("MADTJDHXFBTJLGBSTOSVCUTSVPZDKYPGGUBHVCWEFQGHPXUKRLUKITXWLWFUHORUDSAHQLSXTKEMXYYINMTWJZMDZEQMKXHIKDLKSYNSEFFBPTVBANOGWUENMNWRRJVWLAOLCRBNMZCLZCAHCZPAYBZQ");

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
    msg.setTimeStamp(0.24520330384518285);
    msg.setSource(62178U);
    msg.setSourceEntity(103U);
    msg.setDestination(11853U);
    msg.setDestinationEntity(178U);
    msg.name.assign("YIQYKNVNSZRLILHHGAGPVKUAFURIWDUSVWERBUTEGEIWAMMTYCXUCRWMLNIKKEOBBTDNVKDCLSQJBADZWVQZ");

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
    msg.setTimeStamp(0.7343064912644203);
    msg.setSource(17484U);
    msg.setSourceEntity(246U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(236U);
    msg.name.assign("ZNGLLTCTLUCLRKIJGVYMCGXANXOXDQHBALUEOPIIKOVNZDVTFFLFUZKUCUCYZJTKACXEKQPUIXQHRSOJBYJJGRJCMEMRRDYIXZOHAMIOCTASBFFYQNBYZPJKNHVKGDPENVHSFLYKQHTNWFVDWMDIDBQZIAOWAECSSPRJWSNFHYAMAQHGGSUWORPEPSLXOGFODBTQKVCPETNSLMRBMQUWBPWRZTWSKDBFYHMXWIMQHIVT");

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
    msg.setTimeStamp(0.7009443032717215);
    msg.setSource(5215U);
    msg.setSourceEntity(5U);
    msg.setDestination(46254U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BVEZELDQOWDLTXPXKPBCAQOFFABRJHFBHGUIYUZTCWMEUSCCMZIOCWMASPERYBHYQXIKKCZRJERPGINUBPVLXIIMKTASRAFRKFCLDWJJXAHVBEATJKSWXTNPTNHOAYMLBKWZJQDHKIOWFAOAUVECLMQJJYTUIPGYGFRVHWDXSUIMGQHYKYDGQVPZURTOUOPMDEBOLLQVFMRNXVHTTEXMYHONLDCDLRUGGWIWBQZNCVJKSZPZDFQSSXN");

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
    msg.setTimeStamp(0.7748601345505379);
    msg.setSource(26456U);
    msg.setSourceEntity(209U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(129U);
    msg.name.assign("QDAPDJILTWPXZXETLOOCMXTTYOVUCJOUHJNYYHANVMYJPILWEAHMPXJLNKEVZOASDDOLRFQFPHQQSYTGUQNINVKJNQEXEKXSYKRVLWQASGWSKKURBQARPGHVZCFBZE");

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
    msg.setTimeStamp(0.0136041428639464);
    msg.setSource(16256U);
    msg.setSourceEntity(122U);
    msg.setDestination(14433U);
    msg.setDestinationEntity(223U);
    msg.type = 117U;
    msg.error.assign("JQEYCDVLDTHKMKGUFTMJEZFPMDSTXLPOEQCXGRIVHDKXRTWISQSBQBXNBXIREVMBOVNMVUDOFJIHRVBGNMSNWGXCWVUZHH");

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
    msg.setTimeStamp(0.5923191993940898);
    msg.setSource(32219U);
    msg.setSourceEntity(42U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(246U);
    msg.type = 116U;
    msg.error.assign("AVLUPVEXDZEHUPG");

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
    msg.setTimeStamp(0.3071378691812232);
    msg.setSource(30034U);
    msg.setSourceEntity(1U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(207U);
    msg.type = 213U;
    msg.error.assign("ZEGEMJKDCFZCMICERDROLUZHUPNCDFSYEZODTUKRABHWTHYPNNPYSEMVXDITYVSUGRVDOUSDZCMTWFSUFUBAIFLAKVSCPXATKLRRBPRVRJNOND");

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
    msg.setTimeStamp(0.44320609478315354);
    msg.setSource(29194U);
    msg.setSourceEntity(88U);
    msg.setDestination(6868U);
    msg.setDestinationEntity(90U);
    msg.seq = 63561U;
    msg.sys_dst.assign("OVMRJWGUNOCZWSYAQMVZERSFQ");
    msg.flags = 101U;
    const char tmp_msg_0[] = {60, 33, -110, -24, -46, -88, -68, 24, -15, 94, -21, 30, 77, 16, 22, 108, -113, -63, 25, 105, -81, 36, -48, -1, 87, -70, -51, 72, -52, -97, 99, -93, 42, -83, 60, 61, 89, 75, 78, 21, -14, -86, 109, -112, 113, -75, -57, -35, -44, 67, -28, -110, 15, -128, -26, 83, -99, 9, 34, 91, 108, 111, 86, 105, 58, 85, -20, 38, -70, -128, 2, -103, -100, -56, 35, -31, -79, -97, 35, -26, -60, 5, 100, -21, 76, -9, -113, 6, 32, 49, 104, -47, -1, 44, 18, -20, 48, 100, -30, 84, 113, 48, -116, 101, 57, 101, -68, -46, -34, -31, -48, 41, -111, 35, -112, 62, 85, -30, 71, 101, -64, 41, -94, -13, 17, -78, 22, -12, -111, 100, -68, 82, -92, 108, 37, 13, -114, -114, -102, 111, -34, -48, -118, -63, -69, -127, -21, -121, -42, -98, 84, -20, 75, -56, -80, -54, -80, -111, 79, 40, 102, 112, 111, -70, -47, 83, 7, 0, 123, -109, 23, 19, -45, 46, -40, -80, -62, 48, -15, -116, 109, -11, -23, 48, 18, 37, -112, 28, -125, 107, 110, 40, -12, -60, -85, -125, -64, 38, -18, 117, 92, 110, -28, -4, 55, 56, -54, -33, -100};
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
    msg.setTimeStamp(0.7091638422865821);
    msg.setSource(35677U);
    msg.setSourceEntity(196U);
    msg.setDestination(55502U);
    msg.setDestinationEntity(55U);
    msg.seq = 32798U;
    msg.sys_dst.assign("IEXYXLLVXJHVJZFROQVGYNGMRFUWFRHONJHEUUDDBOCGJONJMSDQIGNWBCSCBMJZAMTKKOZBEGUVHHGNHVIWTBLYPUDVVRFKAUN");
    msg.flags = 90U;
    const char tmp_msg_0[] = {-15, -16, 62, 50, 30, -54, -121, 82, 78, 120, 31, -25, 96, 1, 116, 124, 69, -38, -69, 35, -43, 54, -44, 59, 123, 115, 78, 94, -110, -15, 101, -35, -51, -76, -48, -2, 100, -9, 82, -49, 66, -81, -14, -42, 84, -84, 16, -59, -99, -49, 49, 122, -47, 67, -114, -1, -42, -81, 30, 72, -95, 58, 51, -101, 9, 26, 114, -101, -97, 66, -7, 48, -114, -101, -44, -12, -6, 22, 112, -110, -15, 51, 91, 74, -80, 93, 79, -27, 76, -8, -73, 126, 2, -111, -35, 90, 53, -99, 23, -37, -77, 11, 10, 124, 23, -60, -10, 48, 126, 68, -23, -8, -67, -57, 92, 95, -126, -9, 53, -55, 35, -107, -118, 64, 4};
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
    msg.setTimeStamp(0.01131585109405353);
    msg.setSource(34754U);
    msg.setSourceEntity(123U);
    msg.setDestination(50039U);
    msg.setDestinationEntity(64U);
    msg.seq = 7416U;
    msg.sys_dst.assign("FSMNMDXJETSRRDVNUCFUDSZZIOYJAHKRFXJUOQAVPQDZWNSMCAKNIIHLIHZFLJKNGOIRWESPOBDBPSYRWCDYEPCMPOXAGIABYPBWKTAKRLVSVOSY");
    msg.flags = 136U;
    const char tmp_msg_0[] = {124, -90, -120, -7, 15, 0, -84, 30, 23, 0, -93, -117, 103, 9, 54, -3, -12, 64, -69, 89, -111, 20, -40, 81, 45, -60, 11, 57, -78, 75, -28, 117, 94, -41, 46, -53, -90, -46, 50, 47, 44, -19, -32, 22, -80, 87, 58, 54, 68, 61, 105, 23, -40, 21, 15, -113, 43, 10, -46, -123, 58, 125, 15, 85, -108, -32, 104, -47, -57, 115, 14, 64, 116, -74, -43, -106, -84, 59, 29, -46, -110, 85, -75};
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
    msg.setTimeStamp(0.7901083712937026);
    msg.setSource(49718U);
    msg.setSourceEntity(223U);
    msg.setDestination(27447U);
    msg.setDestinationEntity(153U);
    msg.sys_src.assign("GZPDCCLEZETVHRYEBOIWZQSIJHIZYCXULUPSURFXVFFWUMAOCCBENTDTHKRXUMDPLEXNFZUVBHQTJWEAZAGJOYXQAGRVKQRNNPDWYMMNDJGISVFSYOGJJGNVPKSPKXFXTIYJVCAHOMBRLKXUHHWKDEMCMYFWZSQBXZTWFDBWDVREYNRTEYZWKQSRANBSCOCLBASTJZPMLMILNOWLINUUELQBDVUI");
    msg.sys_dst.assign("BGFOZGLXMBEDORYHCBATQNQFAXZCEXTAKSVPCRRXGNCEQ");
    msg.flags = 212U;
    const char tmp_msg_0[] = {85, -54, -94, -75, -128, -88, 21, -118, 85, 24, 42, -24, 36, 64, -64, -83, -49, 95, 79, -13, 120, 122, 79, 124, -106, -5, 87, 118, 9, -9, -21, 99, 5, -70, 9, 60, -11, -11, -44, -36, -60, -48, 7, 24, 123, 77, 100, -58, 92, -15, 110, -42, -11, -13, 114, 100, -113, 101, 61, -125, -11, 77, -81, 63, 33, 15, 107, -36, 13, 81, -101, 54, -65, -63, 111, -1, 17, 80, -22, -15, -89, -81, -88, -56, -108, 69, -78, -58, 22, -8, -50, 64, 12, -22, 4, -53, -56, 117, -9, -96, 78, -112, 91, 79, 7, 80, -22, -63, -3, -124, 46, 64, -43, 7, 115, -38, 28, -83, -113, -82, -30, -49, -31, 23, -72, -57, -1, -97, -46, -86, -56, 23, -66, 70, -30, -75, -74, -17, 42, 68, 116, 121, 48, 9, 80, 29, -123, 66, 72, 79, 82, -73, -10, 85, 122, 76, 2, -125, 93, 18, -63, -68, 92, -104, -16, 117, -69, 21, -94, 48, 46, -2, 5, 96, -22, -52, -53, -40, 100, -28, 25, 5, -62, -42, -25, -74, -20, -121, -87, -48, -20, 98, 120, -22, 118, -28, 2, -55, 29, 68, -108, 35, 29, -115, 33, 83, 10, 55, -5, -91, -27, -71, -54};
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
    msg.setTimeStamp(0.9547845950019188);
    msg.setSource(13651U);
    msg.setSourceEntity(23U);
    msg.setDestination(27500U);
    msg.setDestinationEntity(241U);
    msg.sys_src.assign("WSCCSITAMQNLEVAKUHNLNIFRAIGRSBEUXDQZAFFLHJOQRGRZHAUDDOIEDQBCCEOHJZIIEEVASFVPCYMGKVITTTTPELRGXJKKRAHXBKNLWQGPOUTQQUYTOSHXXXVDCNWJPWBVFSBFMEBPCEUZJBOVRNAHRHYMKXDNJWERIKXFCUFWDNYLGFHUPOSZGBSSAWTMWFLZJZMCWMPAZLRLOOGMPYDVPKMBQJKCMYHIKIXYLXZVUBZJYYDSQW");
    msg.sys_dst.assign("BQEQXFVSNGYCXLCCGAPEQXMAUPXKHSILMZHVIVEKTOXOUYFFLESCSRGZYTPJRLWOCOGPGVXPPSABKXPDWAXAFVACSYRLBKIKMROLJJUJXVLBMCZTWZFOSBIYHCMHYCYFMFEANKGEZLAVWNRJQINUMBQGPELZ");
    msg.flags = 129U;
    const char tmp_msg_0[] = {68, 24, 14, -105, -111, 69, 52, -128, 59, 95, -127};
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
    msg.setTimeStamp(0.16267025268564705);
    msg.setSource(65202U);
    msg.setSourceEntity(142U);
    msg.setDestination(39089U);
    msg.setDestinationEntity(191U);
    msg.sys_src.assign("TNNVSJUQDMDGHRVNPBEWFQTYRIVFDFXXEJBSETQVTEIFBFAASZYMAMRXNOZVINTXCDIDIUBRXAZKRBUJLJPDKNOPITHIJQCKUHOZFSUGOMZMZHZPRPEWSXKOGLUTNGWAFWBYNOSWLWBLAGNOA");
    msg.sys_dst.assign("ANHLPEUTSFUOJYNEUWRXSKACXMNONUKYHNO");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-89, 59, -76, -52, -62, -38, 124, -62, 49, -35, -53, -36, -37, -126, 43, -9, -43, 112, 70, 13, -109, 24, -75, -20, 61, 104, -57, -20, 48, 69, -73, -33, -74};
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
    msg.setTimeStamp(0.03856079379983379);
    msg.setSource(46739U);
    msg.setSourceEntity(204U);
    msg.setDestination(252U);
    msg.setDestinationEntity(96U);
    msg.seq = 48253U;
    msg.value = 188U;
    msg.error.assign("SMBEVCGBVFCSQWDUEBFNEVXREPMEYUNLHPXXGSIRQPXWIZMYVINPUPAQFXPUCABKBTSWLWVRAAJWJUIMGOYDEAADQQGTZLICQFSOCQBJRHRMPOZOZQNCXEWLJPJDAMKRCGIHIUYULFAYKBJNFMGGPSWRWZZTXJHNKBOFIPZOQSTZKTLQKRXVMCIGCOEMHMZWOSLKJXZLYVNDHUTITFVYAGFCRJSYHDDNOSJBDHWHLNVUX");

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
    msg.setTimeStamp(0.9691411753910213);
    msg.setSource(33542U);
    msg.setSourceEntity(66U);
    msg.setDestination(35343U);
    msg.setDestinationEntity(99U);
    msg.seq = 54196U;
    msg.value = 104U;
    msg.error.assign("ATEAOMZZIBIFRIMJFORWCXDAPCAJQSLPDUISXOVLUVXWXYVOKNCWAJVMLBREXUYJNYNHYGVE");

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
    msg.setTimeStamp(0.2154611276404489);
    msg.setSource(54874U);
    msg.setSourceEntity(75U);
    msg.setDestination(27846U);
    msg.setDestinationEntity(71U);
    msg.seq = 55412U;
    msg.value = 9U;
    msg.error.assign("MQITMESAUPRTKDHFPBNVCXMJCMLWUQVWHCIDVPDKKTRUZ");

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
    msg.setTimeStamp(0.4890748429069156);
    msg.setSource(1765U);
    msg.setSourceEntity(195U);
    msg.setDestination(45870U);
    msg.setDestinationEntity(40U);
    msg.seq = 48788U;
    msg.sys.assign("WCOLPLMXJNDWTASYOQFXYMQLZRPYWBXOOHCDPZJKOAEKHGPMBKSAZZBLIEVXRSSDETWWGCERDQSNGTUCJBFJNKBJUFVYZRFXYQYEHDMDKITZPSHNOJDXNCFLOGVUVCCSVIDKZEWTSJRYAAZUUAVLQHSGMIVPKRDPLAXLZIURXEXEMQIAYKBLCCL");
    msg.value = 0.010787577763138878;

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
    msg.setTimeStamp(0.4612007602741448);
    msg.setSource(39727U);
    msg.setSourceEntity(209U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(189U);
    msg.seq = 14416U;
    msg.sys.assign("LRWQOPKQNNCBIDGXJMJRPRJCBLJDOSXYKIYZPNASGJPTCWVBDNXUCFWLULUENPWDGDILKQYKGHBYSXPCAYXBEIMMTLTMKFQJUUTRPWIVFGZIFRYYPTEGUGEESM");
    msg.value = 0.7122704718076487;

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
    msg.setTimeStamp(0.45031332468977114);
    msg.setSource(64843U);
    msg.setSourceEntity(162U);
    msg.setDestination(38527U);
    msg.setDestinationEntity(56U);
    msg.seq = 44884U;
    msg.sys.assign("BGEMFKIHNQDBXCGXHVHYHFBWUBNWAFEPGJOMVJARUWYRJXSLAXENQYTPSZHBGJZAHGUIPPMIVHOMODWZPIUKGLEZDJEDBWLFOSNKDSRRLWJGKIEVCTTNXLGBXEDRITWWQTUSMBYQRUAMKNYCHDHVMMOXRVCMSAFEQTZCIYSTRZQZKYJQEBYUUJTZOLCFJSOFEQXCPSRYGV");
    msg.value = 0.6451164967212679;

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
    msg.setTimeStamp(0.621849006278407);
    msg.setSource(30300U);
    msg.setSourceEntity(210U);
    msg.setDestination(57641U);
    msg.setDestinationEntity(252U);
    msg.action = 245U;
    msg.longain = 0.5923826278559958;
    msg.latgain = 0.40387797005741455;
    msg.bondthick = 2047893922U;
    msg.leadgain = 0.8720126624579267;
    msg.deconflgain = 0.02668433569211759;

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
    msg.setTimeStamp(0.5722262810258342);
    msg.setSource(36037U);
    msg.setSourceEntity(228U);
    msg.setDestination(63586U);
    msg.setDestinationEntity(175U);
    msg.action = 119U;
    msg.longain = 0.4431636050905269;
    msg.latgain = 0.6361996602473259;
    msg.bondthick = 419199812U;
    msg.leadgain = 0.17896117031012493;
    msg.deconflgain = 0.3654814743430944;

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
    msg.setTimeStamp(0.23225922441549063);
    msg.setSource(50737U);
    msg.setSourceEntity(210U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(225U);
    msg.action = 17U;
    msg.longain = 0.9227890272166772;
    msg.latgain = 0.4309005708948729;
    msg.bondthick = 2636114269U;
    msg.leadgain = 0.6384511797043516;
    msg.deconflgain = 0.6520508878729897;

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
    msg.setTimeStamp(0.0773773204232675);
    msg.setSource(57064U);
    msg.setSourceEntity(8U);
    msg.setDestination(48780U);
    msg.setDestinationEntity(114U);
    msg.err_mean = 0.5702985139426381;
    msg.dist_min_abs = 0.9543264574170446;
    msg.dist_min_mean = 0.876777565429354;

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
    msg.setTimeStamp(0.7994228710771445);
    msg.setSource(26593U);
    msg.setSourceEntity(58U);
    msg.setDestination(22418U);
    msg.setDestinationEntity(199U);
    msg.err_mean = 0.4318426595043753;
    msg.dist_min_abs = 0.005869365740607035;
    msg.dist_min_mean = 0.9340019099592938;

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
    msg.setTimeStamp(0.5247844820863836);
    msg.setSource(31581U);
    msg.setSourceEntity(97U);
    msg.setDestination(53482U);
    msg.setDestinationEntity(241U);
    msg.err_mean = 0.2698003410659483;
    msg.dist_min_abs = 0.852872520054573;
    msg.dist_min_mean = 0.662641906809993;

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
    msg.setTimeStamp(0.999337754757223);
    msg.setSource(10394U);
    msg.setSourceEntity(135U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(56U);
    msg.action = 244U;
    msg.lon_gain = 0.081989096811945;
    msg.lat_gain = 0.5972143777812436;
    msg.bond_thick = 0.9566017706298443;
    msg.lead_gain = 0.170126708743514;
    msg.deconfl_gain = 0.17988199516390935;
    msg.accel_switch_gain = 0.27589422912514183;
    msg.safe_dist = 0.4834022883696718;
    msg.deconflict_offset = 0.7144787640833477;
    msg.accel_safe_margin = 0.07093432566341074;
    msg.accel_lim_x = 0.25085007176479257;

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
    msg.setTimeStamp(0.07268986178521886);
    msg.setSource(3060U);
    msg.setSourceEntity(66U);
    msg.setDestination(22517U);
    msg.setDestinationEntity(20U);
    msg.action = 167U;
    msg.lon_gain = 0.5712820480306553;
    msg.lat_gain = 0.589352108368863;
    msg.bond_thick = 0.7462612094302754;
    msg.lead_gain = 0.22454346785985035;
    msg.deconfl_gain = 0.11272824898401734;
    msg.accel_switch_gain = 0.9440771208297879;
    msg.safe_dist = 0.8126568817637724;
    msg.deconflict_offset = 0.5955588931977116;
    msg.accel_safe_margin = 0.16298919832579073;
    msg.accel_lim_x = 0.11004047316044296;

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
    msg.setTimeStamp(0.8716932129709842);
    msg.setSource(52615U);
    msg.setSourceEntity(7U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(63U);
    msg.action = 131U;
    msg.lon_gain = 0.12245696081456292;
    msg.lat_gain = 0.11940912413675808;
    msg.bond_thick = 0.6902678241392315;
    msg.lead_gain = 0.7944811744014301;
    msg.deconfl_gain = 0.9113982234975008;
    msg.accel_switch_gain = 0.6447215609904577;
    msg.safe_dist = 0.34635267132503467;
    msg.deconflict_offset = 0.4529255128852202;
    msg.accel_safe_margin = 0.07134875585841616;
    msg.accel_lim_x = 0.34786182597595916;

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
    msg.setTimeStamp(0.9847758089152728);
    msg.setSource(51244U);
    msg.setSourceEntity(102U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(245U);
    msg.type = 64U;
    msg.op = 199U;
    msg.err_mean = 0.8185846641255029;
    msg.dist_min_abs = 0.7789645499994777;
    msg.dist_min_mean = 0.7709636907230388;
    msg.roll_rate_mean = 0.87937939275712;
    msg.time = 0.34231453512860677;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 81U;
    tmp_msg_0.lon_gain = 0.9747037520755074;
    tmp_msg_0.lat_gain = 0.31021749124048903;
    tmp_msg_0.bond_thick = 0.6632745983009886;
    tmp_msg_0.lead_gain = 0.3768225415731207;
    tmp_msg_0.deconfl_gain = 0.2619487593208234;
    tmp_msg_0.accel_switch_gain = 0.15507574717359562;
    tmp_msg_0.safe_dist = 0.42287243897135485;
    tmp_msg_0.deconflict_offset = 0.5879180514221165;
    tmp_msg_0.accel_safe_margin = 0.11170078883291623;
    tmp_msg_0.accel_lim_x = 0.2164824660254362;
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
    msg.setTimeStamp(0.45035566049763176);
    msg.setSource(22058U);
    msg.setSourceEntity(186U);
    msg.setDestination(22815U);
    msg.setDestinationEntity(168U);
    msg.type = 42U;
    msg.op = 130U;
    msg.err_mean = 0.6299652304862567;
    msg.dist_min_abs = 0.5763628539487564;
    msg.dist_min_mean = 0.5422276626851364;
    msg.roll_rate_mean = 0.34640071429766583;
    msg.time = 0.07448830079251878;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.lon_gain = 0.7982638214161513;
    tmp_msg_0.lat_gain = 0.3587078726259648;
    tmp_msg_0.bond_thick = 0.9601599429671352;
    tmp_msg_0.lead_gain = 0.7608513033283186;
    tmp_msg_0.deconfl_gain = 0.20021573519244174;
    tmp_msg_0.accel_switch_gain = 0.20629165081218803;
    tmp_msg_0.safe_dist = 0.16669362191281767;
    tmp_msg_0.deconflict_offset = 0.5238245615198539;
    tmp_msg_0.accel_safe_margin = 0.7636552335582505;
    tmp_msg_0.accel_lim_x = 0.8823330237861992;
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
    msg.setTimeStamp(0.415295311430971);
    msg.setSource(43417U);
    msg.setSourceEntity(100U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(111U);
    msg.type = 4U;
    msg.op = 210U;
    msg.err_mean = 0.802446682425847;
    msg.dist_min_abs = 0.9365324925857744;
    msg.dist_min_mean = 0.14335293281321604;
    msg.roll_rate_mean = 0.9147871940521625;
    msg.time = 0.6159476694983242;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 163U;
    tmp_msg_0.lon_gain = 0.44087374595054785;
    tmp_msg_0.lat_gain = 0.33225185533490653;
    tmp_msg_0.bond_thick = 0.006257918118849237;
    tmp_msg_0.lead_gain = 0.8289021541260589;
    tmp_msg_0.deconfl_gain = 0.27558154565615645;
    tmp_msg_0.accel_switch_gain = 0.9056661434663852;
    tmp_msg_0.safe_dist = 0.46411336444937723;
    tmp_msg_0.deconflict_offset = 0.2462804388477069;
    tmp_msg_0.accel_safe_margin = 0.22037866814647378;
    tmp_msg_0.accel_lim_x = 0.8186517168047452;
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
    msg.setTimeStamp(0.7100415557120375);
    msg.setSource(32838U);
    msg.setSourceEntity(174U);
    msg.setDestination(44700U);
    msg.setDestinationEntity(201U);
    msg.uid = 142U;
    msg.frag_number = 114U;
    msg.num_frags = 26U;
    const char tmp_msg_0[] = {1, -112, 7, -66, -10, 101, -75, -44, 121, 84, -46, -70, 31, 66, 24, 17, 106, -39, -61, 75, -84, -11, 100, -125, 39, -53, -124, 70, -8, -62, 98, 78, 42, -52, -90, 126, -108, 62, 29, 39, 0, -77, 59, -35, -8, -2, 50, 60, -124, -95, 57, -82, 13, -22, 27, 90, 65, -31, -85, 121, 83, -63, 49, 7};
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
    msg.setTimeStamp(0.2842165970034084);
    msg.setSource(65150U);
    msg.setSourceEntity(98U);
    msg.setDestination(29931U);
    msg.setDestinationEntity(222U);
    msg.uid = 136U;
    msg.frag_number = 169U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {18, 84, 87, 7, -15, -81, 18, -78, 73, 74, 124, 109, 93, 16, 79, 27};
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
    msg.setTimeStamp(0.014661940597127221);
    msg.setSource(55171U);
    msg.setSourceEntity(167U);
    msg.setDestination(36334U);
    msg.setDestinationEntity(33U);
    msg.uid = 58U;
    msg.frag_number = 10U;
    msg.num_frags = 185U;
    const char tmp_msg_0[] = {-111, 118, 38, 50, -4, 82, 84, -103, 28, 34, 107, -103, -104, -71, 117, -79, -113, 23, -90, 19, 94, 6, -77, -87, 86, -26, 61, 71, 51, -13, 115, 92, -95, -72, -66, 60, 74, -48, 2, -111, -2, -81, -100, -45, -33, 76, -109, 17, -70, 101, 116, -15, 99, -126, 77, -19, -94, -118, -106, -24, -49, -79, 71, -122, -17, -86, 35, -8, -3, 27, 106, 40, 125, 108, -114, 77, -125, 122, -117, -13, 126, -67, 119, 83, 108, -28, 99, 121, -103, 36, -11, -55, -49, -47, -22, -128, 26, -3, -27, -119, -70, 119, 122, -27, -76, -9, -80, 41, 20, -81, -98, -96, -45, -9, 114, 45, -103, 125, 68, 81, -34, -46, -102, 66, -3, -103, 113, -118, -57, -42, 6, -68, -60, -100, -38, 42, 75, 11, 109, 87, -71, 21, -64, 7, 56, 124, -104, 57, 89, 1, 66, 76, -50, -16, -82, 66, -25, 83, -110, 51, 0, 75, -122, 40, 47, -63, 62, 80, 75, 60, 11, -78, -77, -22, -114, 107, 13, -108, 10, -27, 126, 28, -49, 87, -54, -73, -25, 107, 27, -28, 57, -113, 33, -66, 39, 63, -8, -80, 71, 121, 87, -124, -23, -97, -118, 62, -17, -81, 59, -43, -83, 35, -10, 33, -102, 105, -125, -76, -41, -13, 37, 74, -128, -20, -91, 126, 17, 20, -80, 72, -101, -68, 66, 79, -22, -96, -123, -127};
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
    msg.setTimeStamp(0.13993549395457727);
    msg.setSource(46171U);
    msg.setSourceEntity(226U);
    msg.setDestination(62039U);
    msg.setDestinationEntity(147U);
    msg.content_type.assign("PHEXTCZHJPPSMZREKWCQPAOVBBMYUSZJEISZTLDERJTATYMRGGFLILJHIAOOSUWNDFBXTNC");
    const char tmp_msg_0[] = {-27, 57, -92, -24, -104, 60, 1, -56, -36, 95, 110, 52, 29, 83, 0, 82, -65, -3, 78, 10, -63, -110, 10, 103, 125, 97, -105, -3, -17, 74, -67, 33, -95, -104, 80, 120, -119, 15, -52, -71, 66, 89, -117, 97, -14, -115, 54, -76, 80, -88, -80, 102, -127, 86, -91, 39, -74, 94, -106, 99, -18, 34, 15, -109, -103, -124, -48, 94, -68, -6, 84, -37, 109, -82, -28, 53, -122, 30, -103, 43, -92, -56, -124, -34, 107, -102, 54, 123, 25, 7, 26, -81, -11, 116, 107, 37, -9, 11, -116, 28, -33, 56, 100, 44, -104, 59, -68, -99, -33, 23, 47, -116, -120, -77, -60, 7, 60, 94, 37, 88, -114, 30, -22, 87, -30, 46, 45, -18, -4, 2, 111, 92, 94, 91, -119, -37, 117, -106, 72, -93, 102, -40, -21, -23, -91, 34, 36, 25, 42, -34, -106};
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
    msg.setTimeStamp(0.2936859320331907);
    msg.setSource(114U);
    msg.setSourceEntity(16U);
    msg.setDestination(55507U);
    msg.setDestinationEntity(116U);
    msg.content_type.assign("JFYNOWPOCNFDVCOJPHDREKXLVPSBQGHEVZBXTJJKAVNCL");
    const char tmp_msg_0[] = {-89, -46, 66, -27, 110, 78, -62, -71, 104, 58, 58, -25, -29, -26, -62, -40, -14, -108, 122, 58, 1, 82, 13, 85, -89, -126, 122, -67, -76, 113, 126, 39, -92, -103, -116, 56, 1, -101, 21, -106, -94, 53, 101, 19, 101, -113, 27, 106, -58, 64, 125, 97, -62, -1, -36, -28, -57, -100, 100, -14, 121, 5, -108};
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
    msg.setTimeStamp(0.10610464302295708);
    msg.setSource(42813U);
    msg.setSourceEntity(16U);
    msg.setDestination(64896U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("OYVSKMXHVBLFNDILKRLHWJKBUGXTEPRYVRRHBLDRXINESBMEBKHOFMZDMJRQKSSFHUSYGBFLIIZCYVRDOWBTFZAVYMQITJOHJZAPVYUNODFGICNVFJMTTAOAERFJTESRKHRWBMPZCGVAXZSNGQEDUCLEWKPNXHDAEGCUBIIFQTGOPMLUZMQDNQKYUNWXSMWOQGHCYZS");
    const char tmp_msg_0[] = {-105, -112, 85, -83, -43, 7, -75, -96, 73, 73, -91, 21, -38, 75, -101, -83, -32, -36, -113, 56, -104, 74, -56, -101, 2, 103, -88, 57, -110, -16, 115, -76, -33, 106, 21, -81, -97, -53, 65, 59, 33, 105, 5};
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
    msg.setTimeStamp(0.251290325663054);
    msg.setSource(31673U);
    msg.setSourceEntity(252U);
    msg.setDestination(29886U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.08223446283061453);
    msg.setSource(43852U);
    msg.setSourceEntity(92U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.5986993036227657);
    msg.setSource(1013U);
    msg.setSourceEntity(230U);
    msg.setDestination(45285U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.22637292669779718);
    msg.setSource(35012U);
    msg.setSourceEntity(151U);
    msg.setDestination(40557U);
    msg.setDestinationEntity(46U);
    msg.target = 23651U;
    msg.bearing = 0.5587778443529069;
    msg.elevation = 0.4467322046446919;

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
    msg.setTimeStamp(0.3098615115645076);
    msg.setSource(5771U);
    msg.setSourceEntity(150U);
    msg.setDestination(40320U);
    msg.setDestinationEntity(35U);
    msg.target = 63502U;
    msg.bearing = 0.9228428814888306;
    msg.elevation = 0.7560181277198367;

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
    msg.setTimeStamp(0.03582750690320202);
    msg.setSource(43741U);
    msg.setSourceEntity(189U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(10U);
    msg.target = 59109U;
    msg.bearing = 0.7321451661362887;
    msg.elevation = 0.6645373594671112;

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
    msg.setTimeStamp(0.8885637099745535);
    msg.setSource(48008U);
    msg.setSourceEntity(172U);
    msg.setDestination(58509U);
    msg.setDestinationEntity(246U);
    msg.target = 8718U;
    msg.x = 0.6612803379742045;
    msg.y = 0.4096903540541056;
    msg.z = 0.6390149523719613;

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
    msg.setTimeStamp(0.92177963332997);
    msg.setSource(40509U);
    msg.setSourceEntity(77U);
    msg.setDestination(15638U);
    msg.setDestinationEntity(74U);
    msg.target = 47587U;
    msg.x = 0.5018840208059773;
    msg.y = 0.7417552528319684;
    msg.z = 0.8180581947314338;

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
    msg.setTimeStamp(0.6395946208325785);
    msg.setSource(40387U);
    msg.setSourceEntity(159U);
    msg.setDestination(52043U);
    msg.setDestinationEntity(130U);
    msg.target = 36291U;
    msg.x = 0.7653633814144633;
    msg.y = 0.5210211985688303;
    msg.z = 0.5945188297125421;

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
    msg.setTimeStamp(0.6118009288509451);
    msg.setSource(46949U);
    msg.setSourceEntity(187U);
    msg.setDestination(40849U);
    msg.setDestinationEntity(29U);
    msg.target = 54029U;
    msg.lat = 0.1864299148545564;
    msg.lon = 0.19661117933788708;
    msg.z_units = 151U;
    msg.z = 0.22177844004265856;

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
    msg.setTimeStamp(0.9836790093768313);
    msg.setSource(56477U);
    msg.setSourceEntity(62U);
    msg.setDestination(42561U);
    msg.setDestinationEntity(133U);
    msg.target = 11084U;
    msg.lat = 0.7813550369554392;
    msg.lon = 0.18636278032663667;
    msg.z_units = 124U;
    msg.z = 0.7110903553925403;

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
    msg.setTimeStamp(0.7664549931042435);
    msg.setSource(36021U);
    msg.setSourceEntity(236U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(252U);
    msg.target = 22416U;
    msg.lat = 0.5376141110939783;
    msg.lon = 0.26174414894392284;
    msg.z_units = 8U;
    msg.z = 0.07625340391154956;

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
    msg.setTimeStamp(0.5941166519674498);
    msg.setSource(56367U);
    msg.setSourceEntity(136U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(94U);
    msg.locale.assign("IGSOUCBEQWBSWELCOHSGVNMXAMFXFZIDCODOHGRTGLBEYELKCFDJQHQCTUFXHXLLGYTHJGNKXUZYVAKSYCVDBQPZJSKYVFLZRZRRSZDIOAASQTUIHJ");
    const char tmp_msg_0[] = {34, 25, 32, -99, -88, 64, 23, -16, -15, 28, 19, -42, -42, 55, 67, 9, 67, -26, -62, 9, 71, -86, -21, 30, -127, 18, 21, 8, -103, 56, -105, 115, 24, -68, -62, 28, -114, -12, -77, -11, 98, -27, -70, -20, 18, 115, -77, 69, -79, -85, -10, 105, 45, 67, 69, -59, -48, 3, 71, -90, 121, 55, 80, 46, -106, -98, -19, -109, -71};
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
    msg.setTimeStamp(0.2434673907656696);
    msg.setSource(13419U);
    msg.setSourceEntity(208U);
    msg.setDestination(52216U);
    msg.setDestinationEntity(151U);
    msg.locale.assign("EFUHMIXLCSDVDCFHRHJIJWBESPMRWOCUOQSRWACQXQUWXUUVZDVAXLOAEPEVNLLRTTJGDRMLVZIJL");
    const char tmp_msg_0[] = {-84, -98, 117, 49, -88, -2, 48, -10, -110, -37, -7, 52, 126, 84, 38, -58, 115, -64, -93, -54, -29, 123, -98, -116, 114, -84, -48, 21, 69, 125, 126, 23, -85, -69, -13, 33, 66, -92, -81, -63, -10, 94, 45, -41, -81, -77, -124, 96, -101, 35, -40, 124, 109, 28, -58, -100, 46, -112, -77, 64, -108, 28, 107, -4, 120, -56, 47, 49, -105, -71, 75, 111, 22, -86, -74, -65, -23, -26, -54, -74, -76, 109, 50, -50, -98, 3, -109, 93, 43, 57, -74, 107, 70, -107, -64, -69, -80, -105, 47, 36, -103, 62, -91, -37, -112, 0, 70, -2, -18, -1, -27, 52, 104, 50};
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
    msg.setTimeStamp(0.0509142154532517);
    msg.setSource(31539U);
    msg.setSourceEntity(118U);
    msg.setDestination(26332U);
    msg.setDestinationEntity(77U);
    msg.locale.assign("ZSARKVIPFGAVNNZQKBFMJUPQGLSWEBXRFDJNRTQUHXRPTXUUHDJFDAZQBHSEQZUKCECGCNSNWLCBAQSZZLIEYCTTIRHDJODVCDIUXNWVKOYOGKOBMRUFPJRFMTYILDZDTOHEIUSRXOCNUPBWYJIFRFYCCVPBLMLAZYEDLEOQSAMFJWPGAZYYDXOXLIAEPZWQKWTVLVNOKVAIYMPJK");
    const char tmp_msg_0[] = {26, -94, -68, 34, -109, 85, -46, 56, -58, -102, -100, -37, -48, -67, -40, 46, 99, -44, 11, 32, 10, 84, -116, -122, -126, -56, -51, 121, 122, 29, -17, -110, 95, 53, -68, -85, -2, -96, 122, 41, -22, 89, 42, 112, 61, -9, 77, -60, 101, -74, 4, 64, -95, -46, 79, -81, 85, -31, -100, 75, -97, 119, -11, -122, 26, 124, -110, 121, -4, 123, 116, 33, 116, 54, -105, 116, -69, -50, 54, -92, -31, 111, -8, -79, -26, 88, -14, -20, -58, 116, 111, -112, -52, -83, -50, -70, 71, 114, 36, 22, 58, 68, 77, 92, -121, -94, 18, 68, 26, 0, -23, 65, 37, 4, 89, 83, 18, 68, -32, 17, -46, -20, 62, 125, 99, 3, 28, 44, -72, -95, 12, -114, 26, 116, -19, 35, 22, 16, -44, -34, -106, 33, 37, -69, 126, 110, -65, -41, -51, 13, -21, -75, -3, 53, -35, -58, 47, 37, -113, 98, 65, 115, -62, 9, 114, -96, 62, -21, 15, 126, 83, -54, 24, -75, 37, -84, 50, 3, 120, -75, -23, 95, -34, 54, -63, -38};
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
    msg.setTimeStamp(0.9066381540931072);
    msg.setSource(2241U);
    msg.setSourceEntity(147U);
    msg.setDestination(60318U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.7943190835268751);
    msg.setSource(62413U);
    msg.setSourceEntity(136U);
    msg.setDestination(3937U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.9822743545035386);
    msg.setSource(29336U);
    msg.setSourceEntity(239U);
    msg.setDestination(55413U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.2512778980253545);
    msg.setSource(31920U);
    msg.setSourceEntity(55U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(227U);
    msg.highpass = 0.6077294958348544;
    msg.adot = 0.6356457002680947;
    msg.slope_compensation = 0.43093914178470305;
    msg.slope_compensation_difference = 0.68413235928968;
    msg.altitude = 0.9129527371577469;
    msg.auto_altitude = 0.8722837584315529;

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
    msg.setTimeStamp(0.4020760801160548);
    msg.setSource(26530U);
    msg.setSourceEntity(199U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(137U);
    msg.highpass = 0.330589408605908;
    msg.adot = 0.17494513022014835;
    msg.slope_compensation = 0.9044673685626414;
    msg.slope_compensation_difference = 0.7275072514840828;
    msg.altitude = 0.1335353226177194;
    msg.auto_altitude = 0.7486981753252883;

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
    msg.setTimeStamp(0.46100249233662316);
    msg.setSource(53148U);
    msg.setSourceEntity(204U);
    msg.setDestination(64456U);
    msg.setDestinationEntity(120U);
    msg.highpass = 0.20270585105772654;
    msg.adot = 0.35125475794744854;
    msg.slope_compensation = 0.6886075613984471;
    msg.slope_compensation_difference = 0.6330832161246861;
    msg.altitude = 0.34742212816577633;
    msg.auto_altitude = 0.5636795886170519;

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
    IMC::ReconState msg;
    msg.setTimeStamp(0.5497908221365493);
    msg.setSource(3513U);
    msg.setSourceEntity(68U);
    msg.setDestination(4544U);
    msg.setDestinationEntity(172U);
    msg.remotecontrolallowed = 249U;
    msg.remotecontrolenabled = 97U;
    msg.remotecontrolactive = 182U;
    msg.depthonlycontrolenabled = 23U;
    msg.directcontrolenabled = 17U;
    msg.returntoclosestpointonline = 15U;
    msg.onshorepower = 194U;
    msg.latitude = 0.13693215263108072;
    msg.longitude = 0.7685794193479417;
    msg.depth = 0.5960254697191445;
    msg.depthref = 0.19319243341085057;
    msg.altitude = 0.4533758539980325;
    msg.altituderef = 0.21713225875182096;
    msg.pitch = 0.4611861375515849;
    msg.roll = 0.521286634494513;
    msg.rpm = 0.6244586023669135;
    msg.rpmref = 0.3644791967351113;
    msg.speed = 0.2341437396005247;
    msg.speedref = 0.542864283941562;
    msg.heading = 0.8691451851614126;
    msg.headingrate = 0.9048197090356144;
    msg.headingref = 0.694837906938708;
    msg.missionstate = 6U;
    msg.leg = 2545621085415487540;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconState msg;
    msg.setTimeStamp(0.02835886962887324);
    msg.setSource(53679U);
    msg.setSourceEntity(194U);
    msg.setDestination(54070U);
    msg.setDestinationEntity(155U);
    msg.remotecontrolallowed = 173U;
    msg.remotecontrolenabled = 179U;
    msg.remotecontrolactive = 175U;
    msg.depthonlycontrolenabled = 125U;
    msg.directcontrolenabled = 10U;
    msg.returntoclosestpointonline = 17U;
    msg.onshorepower = 128U;
    msg.latitude = 0.354780940909298;
    msg.longitude = 0.543020218423413;
    msg.depth = 0.19600246985652392;
    msg.depthref = 0.3786820809054675;
    msg.altitude = 0.49921682613743956;
    msg.altituderef = 0.867931677546666;
    msg.pitch = 0.40829071374014037;
    msg.roll = 0.5242653303111826;
    msg.rpm = 0.8396379351749456;
    msg.rpmref = 0.3201498928141828;
    msg.speed = 0.640824540584689;
    msg.speedref = 0.6230316435268138;
    msg.heading = 0.2599479070855786;
    msg.headingrate = 0.23967153878870318;
    msg.headingref = 0.7608381328525443;
    msg.missionstate = 94U;
    msg.leg = 9213141103193132795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconState msg;
    msg.setTimeStamp(0.35303377001096237);
    msg.setSource(34359U);
    msg.setSourceEntity(221U);
    msg.setDestination(26814U);
    msg.setDestinationEntity(95U);
    msg.remotecontrolallowed = 251U;
    msg.remotecontrolenabled = 173U;
    msg.remotecontrolactive = 131U;
    msg.depthonlycontrolenabled = 29U;
    msg.directcontrolenabled = 172U;
    msg.returntoclosestpointonline = 107U;
    msg.onshorepower = 61U;
    msg.latitude = 0.9631506854981045;
    msg.longitude = 0.8011012409271876;
    msg.depth = 0.06520440192350274;
    msg.depthref = 0.2985241593693765;
    msg.altitude = 0.8741028887479937;
    msg.altituderef = 0.819800579578412;
    msg.pitch = 0.4744197371844119;
    msg.roll = 0.49155489346273895;
    msg.rpm = 0.09635963430661243;
    msg.rpmref = 0.8545891577886661;
    msg.speed = 0.17914225420724883;
    msg.speedref = 0.4734698245064842;
    msg.heading = 0.22439229194548949;
    msg.headingrate = 0.06160022203922;
    msg.headingref = 0.30859230483707867;
    msg.missionstate = 144U;
    msg.leg = -858764068770688959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9139557671666588);
    msg.setSource(28681U);
    msg.setSourceEntity(28U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(80U);
    msg.name.assign("ANHNPSCVYTGJHJLEXFCBIDVMKDJOCPDELGBHKERYUIDPUXLSLYCHIAMZYQQXAELQFZNOWNJCGBWOOTUHHPDFZVORAECBPJIRAKPICFWOEUZUOFVKSUTWGAYZDJBDPOTBNVTNJGASRMJUEDFSKVXIQWWSYCXXRHPDFGYMVXNALZRPHVRTBZKRCIWOQSETMRVGVIMKNDFGHGFTPNLBBWZOMJQSQULYXQMLNEZQTKTUKWZGCXYYUIQ");
    msg.arg1 = 0.7755973045544029;
    msg.arg2 = 0.7132797490557913;
    msg.arg3 = 0.8122867866112597;
    msg.arg4 = 0.7363589185913657;

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
    msg.setTimeStamp(0.8233749530512056);
    msg.setSource(10725U);
    msg.setSourceEntity(220U);
    msg.setDestination(18764U);
    msg.setDestinationEntity(59U);
    msg.name.assign("OHNHSEAVBKSJWJJPMWJHCZAYVSODYFASNBEGKGTSUMZWOWAKIYIDFWINEZSVAPDQNNUCFWHUSOZTWVQRUWBNILDOFTRAYRQHGRMMYCXPBKJOZUOZGIYCHGZVPPVKGNRRBLIIXOLYNLKAREDHQKZLDDCFTWUEVACVZSJXIQEJAQTQQHGVFSMMQKDNLFGTFHLPTAJKMPTXNBPYXXTXMFRXWVKMULBMLOIXCOGJPRFQYBCBDHTEIZURUJXELGBCUP");
    msg.arg1 = 0.4402546628176003;
    msg.arg2 = 0.5959981592449234;
    msg.arg3 = 0.08709742042006097;
    msg.arg4 = 0.9699806863444594;

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
    msg.setTimeStamp(0.8273985240121249);
    msg.setSource(26378U);
    msg.setSourceEntity(85U);
    msg.setDestination(27255U);
    msg.setDestinationEntity(220U);
    msg.name.assign("FVUUCVQZPUNAWOIOMFAFQDBNSDIGKAIJZBKGREIVSOCVCNSXFNGKQMLAKACJLWJYBKQVHNGHWGYOUACBXVTJDLWTSBMULEWJQZDS");
    msg.arg1 = 0.4653097236383893;
    msg.arg2 = 0.1376302322906563;
    msg.arg3 = 0.4077485538350699;
    msg.arg4 = 0.27406010238543166;

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
    msg.setTimeStamp(0.7080464780374012);
    msg.setSource(8229U);
    msg.setSourceEntity(200U);
    msg.setDestination(36640U);
    msg.setDestinationEntity(172U);
    msg.range1 = 0.14242998545717733;
    msg.range2 = 0.8300900886338561;
    msg.range3 = 0.7339744126406011;
    msg.range4 = 0.022252870032347882;

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
    msg.setTimeStamp(0.5151373553442874);
    msg.setSource(64291U);
    msg.setSourceEntity(92U);
    msg.setDestination(52922U);
    msg.setDestinationEntity(240U);
    msg.range1 = 0.3984722246514343;
    msg.range2 = 0.3964810551299126;
    msg.range3 = 0.19878721009106703;
    msg.range4 = 0.013021173256397955;

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
    msg.setTimeStamp(0.8045922041185941);
    msg.setSource(60823U);
    msg.setSourceEntity(142U);
    msg.setDestination(59999U);
    msg.setDestinationEntity(171U);
    msg.range1 = 0.8678249937301787;
    msg.range2 = 0.8968843497085045;
    msg.range3 = 0.6440310653193393;
    msg.range4 = 0.643946093540804;

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

  return test.getReturnValue();
}
