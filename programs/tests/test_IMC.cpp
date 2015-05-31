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
// IMC XML MD5: 813aa46274238e561c390e53d8fa8fb5                            *
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
    msg.setTimeStamp(0.6403000888467034);
    msg.setSource(21488U);
    msg.setSourceEntity(77U);
    msg.setDestination(7571U);
    msg.setDestinationEntity(128U);
    msg.state = 16U;
    msg.flags = 103U;
    msg.description.assign("GXDDHUNMXOZVLBRIMVIPEKGYQARRWRMFLAUHLVLXGLCGFJJSADEUNNTIPSKXVQZWRODPWAEXTYEDBLOOGHFCAHZPQIBUAUXYNWXPFGEYSCILFBMEDNWTTCKLOPQHRFLKUNFRHYWZHQMITHRUYQMQGBSYBVPJSYBFJIVNCTGINYMWZCBXAVBOEWJNZUASCJOSHIKOUMOTZDCPRVKQXJHXJDOSQBUVLYKQKDRFESKZMPIJCKGWNZATDES");

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
    msg.setTimeStamp(0.7132682062438682);
    msg.setSource(25291U);
    msg.setSourceEntity(210U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(185U);
    msg.state = 39U;
    msg.flags = 134U;
    msg.description.assign("KLEETAAZWZBVUGHBNIHGUQPDWQFROJTDYNLWJYIMHPGABNPUGSJ");

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
    msg.setTimeStamp(0.9273993538076147);
    msg.setSource(53229U);
    msg.setSourceEntity(182U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(209U);
    msg.state = 29U;
    msg.flags = 130U;
    msg.description.assign("RCUCTFRXFAMIYCGHESPRJEKVNHAQNUFDZIDSAQMJEDGTDBKUXHDELKORHECOMTBBOYXVYLYKNIHZEKOSNJLXRWJPJ");

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
    msg.setTimeStamp(0.2686196869344788);
    msg.setSource(40258U);
    msg.setSourceEntity(92U);
    msg.setDestination(2197U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.7961834274461407);
    msg.setSource(27323U);
    msg.setSourceEntity(54U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.9931175465573845);
    msg.setSource(54638U);
    msg.setSourceEntity(60U);
    msg.setDestination(29962U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.6062575967388651);
    msg.setSource(36974U);
    msg.setSourceEntity(188U);
    msg.setDestination(13706U);
    msg.setDestinationEntity(190U);
    msg.id = 144U;
    msg.label.assign("RBGKIYPVBXWCRLKXYIWIXKNTPRXBEPVVEBURXACOIGAZNIPUYMYONKRGJMEMUJOCYSPLHZIJSZTQZZFDDAQUKWHUNGVLWYBAHDONMRDMIAYOWHZQVWZJXKOSMDSPJTVJWDEPRQESQHFEELOHUVACUKZEPL");
    msg.component.assign("ZQUJLWWCQSROARYIDBXDIXVRGEYXGPTMTRBLIWKNBQHYONXAEVNGSFOICQNHMDZLPATNAOEORPAKLULRQFXFSESGBSPOWKYOWJBLVXAJJOGPQJYMUILKUDFLNHCBHEZHOUCGAAUFXVCGKSCVCVFKMRTMKSIUQFPDAZVEEWSJCPEWHZZBDMJTYPWRILGMOZSFBHQYBTZGIMPUUJIZDVYQKGDF");
    msg.act_time = 1896U;
    msg.deact_time = 64241U;

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
    msg.setTimeStamp(0.8032725174367058);
    msg.setSource(4466U);
    msg.setSourceEntity(83U);
    msg.setDestination(60436U);
    msg.setDestinationEntity(242U);
    msg.id = 179U;
    msg.label.assign("OFAPSQGZOXSLDBWGKEDDUJUOW");
    msg.component.assign("CSEXDPKCMSISHKVGYMICWAQEQXPTFCDNADXLOZBIYJRWKPEZFJYTBWULJUKWPKNBTFQTJZSGTKLICBOEOGXQZFQDGRTVXBQUABMMFLXOUSSGSZWIGTPDRKMOHYLWSRCPUFJOAVPOVREPYXEMALKTDH");
    msg.act_time = 54019U;
    msg.deact_time = 21502U;

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
    msg.setTimeStamp(0.3595684606139655);
    msg.setSource(39697U);
    msg.setSourceEntity(173U);
    msg.setDestination(22691U);
    msg.setDestinationEntity(212U);
    msg.id = 151U;
    msg.label.assign("AULSQMVKOMUUYYQRGLWIZHJFVTZZLBVDTQQUHICBKAJLJBTAOGAOFCDKUYNIPVEDDQNBDIRJCLEKJCAYZSHXQYCEEVYILMZWELBPVGZWXHYNWPXOSMHSSGBHXBCQCNGXMDOOPDKLTTTVRXGFFSYXSNEIHUGTIQKHFSNRICVOWEQMCYBDJWXFUUUNNREIFEWPK");
    msg.component.assign("EZLCCDGAIRUTMSWG");
    msg.act_time = 11407U;
    msg.deact_time = 64495U;

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
    msg.setTimeStamp(0.1884227746790199);
    msg.setSource(33910U);
    msg.setSourceEntity(201U);
    msg.setDestination(4067U);
    msg.setDestinationEntity(89U);
    msg.id = 150U;

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
    msg.setTimeStamp(0.192357319700464);
    msg.setSource(20931U);
    msg.setSourceEntity(227U);
    msg.setDestination(10630U);
    msg.setDestinationEntity(245U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.03058369889293433);
    msg.setSource(63988U);
    msg.setSourceEntity(115U);
    msg.setDestination(23316U);
    msg.setDestinationEntity(168U);
    msg.id = 215U;

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
    msg.setTimeStamp(0.974288349014726);
    msg.setSource(5670U);
    msg.setSourceEntity(53U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(70U);
    msg.op = 89U;
    msg.list.assign("SYVDJBCYCHNIZTRAGYMPAZUIBCWKRAFGJQPKZZNDKHXBUQDPWONGHYDFQIIDLTOOT");

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
    msg.setTimeStamp(0.9437513012308945);
    msg.setSource(30639U);
    msg.setSourceEntity(144U);
    msg.setDestination(31559U);
    msg.setDestinationEntity(253U);
    msg.op = 167U;
    msg.list.assign("LZDHCBYLZDFSRJYTDAXMSNGQGET");

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
    msg.setTimeStamp(0.8124904275080206);
    msg.setSource(43592U);
    msg.setSourceEntity(189U);
    msg.setDestination(56494U);
    msg.setDestinationEntity(57U);
    msg.op = 43U;
    msg.list.assign("RPOCBLBNRFHIZHZCNPXFWTIDAYKLFSEYDXBGGISQQRFEJI");

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
    msg.setTimeStamp(0.25031042519878954);
    msg.setSource(11444U);
    msg.setSourceEntity(170U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(184U);
    msg.value = 107U;

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
    msg.setTimeStamp(0.8391447038886712);
    msg.setSource(26575U);
    msg.setSourceEntity(221U);
    msg.setDestination(54520U);
    msg.setDestinationEntity(105U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.10916227955146596);
    msg.setSource(15920U);
    msg.setSourceEntity(155U);
    msg.setDestination(65487U);
    msg.setDestinationEntity(5U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.7721524736825803);
    msg.setSource(8589U);
    msg.setSourceEntity(217U);
    msg.setDestination(17270U);
    msg.setDestinationEntity(44U);
    msg.consumer.assign("KMDGUAZIYYJHBKICTMUCYSSVQAARJQWDAKSAHPIOIMDVJGEJVJAOPMEUHLQFNCJXILPFGOEXGMZYHSHRLOCCHDBZVWXMEXYPDRSGBOVTLBBBXEOMRDWBKXEVOKIJWVTGSXNWRWKUIDCFYHGURTJONGFVYZOLITNRTNECYKTJJBKSTZNVUAFLIUQCFXMD");
    msg.message_id = 42424U;

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
    msg.setTimeStamp(0.8171556719942406);
    msg.setSource(6348U);
    msg.setSourceEntity(87U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(48U);
    msg.consumer.assign("DFCGTTALBKLIHVCUITYWNOXMZHGZVJTZMPBRMBNJUTKJKQNNDXWNLROCEKEECNZHYFWWNJGPUFUYOZRCRBHYVYQUDNAAVQKSKLKLXQBMDORPIRUXGWDBONJPAIBMPADRFWXXTMDKOBZIZYHFKGUUKHSVQYQEQQYYFMJESWVXOUCERCLZIGZLEQJQVATMRASHPSITSGFDBJXOMIEPLASFGXDAUIIWLZWHVRTJHGCVFHBJYCXOCLSTSEVFDSOMWA");
    msg.message_id = 64605U;

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
    msg.setTimeStamp(0.6914330732715133);
    msg.setSource(14851U);
    msg.setSourceEntity(4U);
    msg.setDestination(42848U);
    msg.setDestinationEntity(130U);
    msg.consumer.assign("MUNRCFBOIWOHGEHMFKQDLBZUDXYJYNVKUXWRVLZVOCWCJPY");
    msg.message_id = 12449U;

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
    msg.setTimeStamp(0.7444123099268755);
    msg.setSource(59059U);
    msg.setSourceEntity(150U);
    msg.setDestination(9126U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.43354314747778255);
    msg.setSource(45582U);
    msg.setSourceEntity(85U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.10180664879675916);
    msg.setSource(64148U);
    msg.setSourceEntity(63U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.007601586541404637);
    msg.setSource(2522U);
    msg.setSourceEntity(249U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(28U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.2626352451985614);
    msg.setSource(57253U);
    msg.setSourceEntity(192U);
    msg.setDestination(27425U);
    msg.setDestinationEntity(224U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.9638134721448375);
    msg.setSource(46711U);
    msg.setSourceEntity(194U);
    msg.setDestination(30335U);
    msg.setDestinationEntity(142U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.30690532455967345);
    msg.setSource(3727U);
    msg.setSourceEntity(65U);
    msg.setDestination(29102U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 108U;
    msg.step_number = 211U;
    msg.step.assign("VZOWVFVQGBMLIKMZCPFCHMFTIIJTVKOMIPRCEBVCWLPFWJTHDMQSSVQSZEUGBJ");
    msg.flags = 211U;

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
    msg.setTimeStamp(0.5215342133853772);
    msg.setSource(22041U);
    msg.setSourceEntity(228U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(175U);
    msg.total_steps = 64U;
    msg.step_number = 224U;
    msg.step.assign("RKUCKJGZGQLIURFOKNNRSQTTUYRCCMCPOAPBYWGEBGNWLDNUFTDAMEKKMOBULPZFRBQVXJDGZFYOSTMSYJADXYZZJECJOVKVXAFKQAZNALRECUNWXBOCMNW");
    msg.flags = 115U;

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
    msg.setTimeStamp(0.9702286790201772);
    msg.setSource(60281U);
    msg.setSourceEntity(129U);
    msg.setDestination(54281U);
    msg.setDestinationEntity(178U);
    msg.total_steps = 236U;
    msg.step_number = 26U;
    msg.step.assign("PFEDOKUHXZVWDXFSMVQQCNSSLBCZISGCXPGSIDMIVAXDYSUEDLPCGMFWLHDUIYMXRBHONUXUJIUHMBZFOCAHDZLTGKVXDRUZLPZXAJEJKTWTTGEAWBOPTWCSYQWPTSGUIKSRPGEWYKQINWJNAKOLMQHJEQRFEPHZQZCYFMYVVTGGRYLDBAEYLRXKHAQVFJJFYCVKNMLUOVDNNZAHNEJQATCUGXBRHYTQMJNZPOSFKIWROAVWJRBEROBPKIITBC");
    msg.flags = 247U;

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
    msg.setTimeStamp(0.825958803575153);
    msg.setSource(30194U);
    msg.setSourceEntity(215U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(151U);
    msg.state = 127U;
    msg.error.assign("WHZXSGVESGIYDEDEPQIEZBDNDLQPASBJMRYAUGQKFHESIGVCJRORYUIDSKUUGNWBPODGQPNCVRPHISRFDLHLEQXWGQPMKTRLMWJZXYLTFKXEFKMORCJUSDXMCOZZJWOWHQALBNVBWRU");

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
    msg.setTimeStamp(0.2314382570949669);
    msg.setSource(60225U);
    msg.setSourceEntity(117U);
    msg.setDestination(6817U);
    msg.setDestinationEntity(73U);
    msg.state = 218U;
    msg.error.assign("VTJHDEXVIXQCIIFFZZWREIQJVTKKEQUAMBXVDIFMFXROEYNNIIQYXLZPYSAPMXCOVOKWBXBECIKPRWFUBROGXSRDAZYCVWYSSVNWPURSQAKEHLLJUPDGMDARPTGJOHSHAQDJD");

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
    msg.setTimeStamp(0.3434143965635542);
    msg.setSource(20161U);
    msg.setSourceEntity(130U);
    msg.setDestination(28697U);
    msg.setDestinationEntity(124U);
    msg.state = 42U;
    msg.error.assign("GXHMZVBGNRLCWBRXGKYQNYUXWCREUHJLGPLKNIPOSBMTFJCKHVPYQUOCRWELAYUBSVYAJSEZEMTRPLRQPEOIFVIXWREWAMLDUSHWTMUJQMEWKMFCDIOPDVLQOHSVTHIWKIGYAPLYBRDZXRZGDEFKVFOQXILIUHDZBTQAYKSTKAWXJCBZHSCXZHTZDFMGVQISJZUUNFTPUFBA");

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
    msg.setTimeStamp(0.5196239081062439);
    msg.setSource(11202U);
    msg.setSourceEntity(228U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.37258414291075936);
    msg.setSource(52650U);
    msg.setSourceEntity(29U);
    msg.setDestination(49762U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.8511717155982576);
    msg.setSource(18268U);
    msg.setSourceEntity(24U);
    msg.setDestination(39538U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.9059171036023699);
    msg.setSource(5928U);
    msg.setSourceEntity(246U);
    msg.setDestination(64954U);
    msg.setDestinationEntity(236U);
    msg.op = 197U;
    msg.speed_min = 0.160828133388071;
    msg.speed_max = 0.29467248273207436;
    msg.long_accel = 0.22072163690218516;
    msg.alt_max_msl = 0.8211737592670323;
    msg.dive_fraction_max = 0.963648111893174;
    msg.climb_fraction_max = 0.8361130688064652;
    msg.bank_max = 0.9429068940053889;
    msg.p_max = 0.10615982493455833;
    msg.pitch_min = 0.16671309861760242;
    msg.pitch_max = 0.031040189381218664;
    msg.q_max = 0.49687518619034454;
    msg.g_min = 0.9628301347273597;
    msg.g_max = 0.036091280665129455;
    msg.g_lat_max = 0.3585925584913635;
    msg.rpm_min = 0.5447881691369485;
    msg.rpm_max = 0.5553029661419611;
    msg.rpm_rate_max = 0.5456805914543362;

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
    msg.setTimeStamp(0.639525047630934);
    msg.setSource(55423U);
    msg.setSourceEntity(219U);
    msg.setDestination(3913U);
    msg.setDestinationEntity(98U);
    msg.op = 105U;
    msg.speed_min = 0.9008644684153087;
    msg.speed_max = 0.34379260466659256;
    msg.long_accel = 0.8347714747512659;
    msg.alt_max_msl = 0.40580248092193894;
    msg.dive_fraction_max = 0.5304418899849915;
    msg.climb_fraction_max = 0.1740769002800152;
    msg.bank_max = 0.14198763065474207;
    msg.p_max = 0.1678619077862341;
    msg.pitch_min = 0.8055116344070467;
    msg.pitch_max = 0.5993596230814101;
    msg.q_max = 0.8982818270030215;
    msg.g_min = 0.9630344918525072;
    msg.g_max = 0.7969888532369188;
    msg.g_lat_max = 0.7006942786164173;
    msg.rpm_min = 0.5452562471195416;
    msg.rpm_max = 0.2693384882443228;
    msg.rpm_rate_max = 0.9547854312963234;

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
    msg.setTimeStamp(0.44632288151175625);
    msg.setSource(62386U);
    msg.setSourceEntity(12U);
    msg.setDestination(905U);
    msg.setDestinationEntity(175U);
    msg.op = 204U;
    msg.speed_min = 0.579738456281194;
    msg.speed_max = 0.41121719986423444;
    msg.long_accel = 0.9925279290860479;
    msg.alt_max_msl = 0.4617799589122431;
    msg.dive_fraction_max = 0.39399671482480814;
    msg.climb_fraction_max = 0.9195799890552385;
    msg.bank_max = 0.2163540276605166;
    msg.p_max = 0.6647366656215593;
    msg.pitch_min = 0.2768639355301066;
    msg.pitch_max = 0.9878381079449616;
    msg.q_max = 0.23567990222009327;
    msg.g_min = 0.11680002526997524;
    msg.g_max = 0.2950647265683177;
    msg.g_lat_max = 0.023914720944774537;
    msg.rpm_min = 0.2439736849677835;
    msg.rpm_max = 0.8681955956298628;
    msg.rpm_rate_max = 0.48906549789114084;

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
    msg.setTimeStamp(0.12241989112309026);
    msg.setSource(10812U);
    msg.setSourceEntity(152U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.8229750655299797);
    msg.setSource(7423U);
    msg.setSourceEntity(56U);
    msg.setDestination(5634U);
    msg.setDestinationEntity(99U);
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.6585825003503771);
    msg.setSource(52070U);
    msg.setSourceEntity(131U);
    msg.setDestination(39456U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.9221201772357045);
    msg.setSource(60860U);
    msg.setSourceEntity(225U);
    msg.setDestination(59670U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.08398802633709046;
    msg.lon = 0.6677917317862087;
    msg.height = 0.3903314629355853;
    msg.x = 0.2633575107685684;
    msg.y = 0.23596746008772274;
    msg.z = 0.3257644660177812;
    msg.phi = 0.9787716875228895;
    msg.theta = 0.5550353033036171;
    msg.psi = 0.24422817936877117;
    msg.u = 0.39124478454478506;
    msg.v = 0.3134638501136995;
    msg.w = 0.4849854294496083;
    msg.p = 0.46382615509451;
    msg.q = 0.7320797598507781;
    msg.r = 0.8404767531666438;
    msg.svx = 0.49506299632781436;
    msg.svy = 0.5878213855330583;
    msg.svz = 0.7194293534056956;

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
    msg.setTimeStamp(0.24994347637626313);
    msg.setSource(51198U);
    msg.setSourceEntity(17U);
    msg.setDestination(38563U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.500817502498169;
    msg.lon = 0.2987754381430072;
    msg.height = 0.13005873993287242;
    msg.x = 0.5991609954887361;
    msg.y = 0.033866002056468725;
    msg.z = 0.9948448173292089;
    msg.phi = 0.5014708631038256;
    msg.theta = 0.5718448903057562;
    msg.psi = 0.6988990076844345;
    msg.u = 0.877604905397336;
    msg.v = 0.6665239868254469;
    msg.w = 0.8174364500727177;
    msg.p = 0.5883905530411233;
    msg.q = 0.32518847770170334;
    msg.r = 0.5356175666158755;
    msg.svx = 0.4343734176531643;
    msg.svy = 0.9328478474098347;
    msg.svz = 0.4111301313914105;

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
    msg.setTimeStamp(0.6300528420343118);
    msg.setSource(54947U);
    msg.setSourceEntity(91U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.7754119000519392;
    msg.lon = 0.8432150955578304;
    msg.height = 0.7907745405068376;
    msg.x = 0.4789344955496615;
    msg.y = 0.07684392240305193;
    msg.z = 0.8719407657382294;
    msg.phi = 0.4668200335539864;
    msg.theta = 0.9520421279761452;
    msg.psi = 0.0182752812255238;
    msg.u = 0.8640299532245959;
    msg.v = 0.9795627895058309;
    msg.w = 0.1972106417838777;
    msg.p = 0.6465611740095631;
    msg.q = 0.20178275363861198;
    msg.r = 0.4824748562714699;
    msg.svx = 0.026126681528832685;
    msg.svy = 0.7928129512225829;
    msg.svz = 0.3766484178370191;

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
    msg.setTimeStamp(0.7977941251020084);
    msg.setSource(24812U);
    msg.setSourceEntity(162U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(197U);
    msg.op = 30U;
    msg.entities.assign("IAMYDYVEHGTLGFRFSBMTDSAEVZACTIPJVTDKVTUMKWULEBEIUOFCMCGQIXAGLZGDMSRAJBKILRXUXHGKFIFKRODDQTSDQZHVYXSYSJOIMRJBUHLYKNCSQPHZEMBUXAOCVQPQDYFLWAOXWGPYOGJIZMXSCWXLPNBXQTKTCFNVRCMZKJPOAWPBNLIPRFEZARWVVYA");

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
    msg.setTimeStamp(0.7073925273756223);
    msg.setSource(39677U);
    msg.setSourceEntity(246U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(169U);
    msg.op = 177U;
    msg.entities.assign("WEQJXUWQMGVKPUOZYNNMGSRDMZAPEKYFZVCBYJOIYIRZSTOIPCTDJRGTZYMTQOFWJEGAAXMXNSNOMHAXCNBRWVPSLRUXQENCAULXMVGCHQWEFKCDWZOEVPPUZFMSFFUDLVRYPHTIVHLKCPKBXDBLMTIKFQBEDLWOKNSSZZFPJKGBIOFIPXVOIMQCGGKYTRAUSWHKF");

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
    msg.setTimeStamp(0.49097435626344255);
    msg.setSource(42905U);
    msg.setSourceEntity(44U);
    msg.setDestination(47963U);
    msg.setDestinationEntity(140U);
    msg.op = 86U;
    msg.entities.assign("JFTNRQHGDOJSVXSKIYXLMDCSMYDXDBZUUEVVFHLAMYSILFNIPHCQZPQWTGSBTSICCHXITIZWYOJTHCBNEKKKSDWOTG");

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
    msg.setTimeStamp(0.9587320377051746);
    msg.setSource(40072U);
    msg.setSourceEntity(63U);
    msg.setDestination(50399U);
    msg.setDestinationEntity(194U);
    msg.type = 84U;
    msg.speed = 7483U;
    const char tmp_msg_0[] = {-105, 5, -82, 20, 6, -26, -45, -31, -47, -96, -118, -53, 98, 112, -128, 79, 30, 17, 42, -92, 94, 11, -30, -66, -85, 63, 56, 88, 93, -23, -33, 37, -114, 95, -95, 3, 64, -47, 86, 35, -104, -123};
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
    msg.setTimeStamp(0.8042261977409426);
    msg.setSource(52674U);
    msg.setSourceEntity(224U);
    msg.setDestination(33113U);
    msg.setDestinationEntity(151U);
    msg.type = 192U;
    msg.speed = 24327U;
    const char tmp_msg_0[] = {43, 121, 96, -8, -117, -12, 111, -41, -26, -119, -67, -42, -30, 95, -50, 35, 74, 63, -81, 51, -103, 73, 53, 46, -126, 36, -66, -40, 103, 69, 47, 56, -6, -94, 12, 71, -119, 87, 116, 53, 76, -48, -57, 105, 126, -27, 95, -119, 101, 101, -124, -73, 95, 71, 123, -106, -8, 125, 117, 94, 93, 123, -72, -2, -106, 67, 80, -65, 19, 121, 5, 96, 104, -14, 57, -18, -126, 2, 15, 98, -74, 46, 34, -27, -13, -16, 75, 30, -58, -104, -77, -22, -108, -92, 14, 5, -82, 29, -53, 13, -45, 80, -84, 72, -125, -123, -75, -22, 31, -3, -22, -59, 74, -25, -71, 114, 97, 68, -109, -15, -15, -64, 80, -124, -67, 48, -55, 0, 3, 117, -102, 1, 25, 100, 102, -84, 50, 34, 21, 54, -120, -33, -18, 50, -102, -116, -12, 20, -3, 49, 13, -3, 1};
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
    msg.setTimeStamp(0.623231882429438);
    msg.setSource(11942U);
    msg.setSourceEntity(212U);
    msg.setDestination(16901U);
    msg.setDestinationEntity(89U);
    msg.type = 36U;
    msg.speed = 61068U;
    const char tmp_msg_0[] = {-36, 22, 84, -113, -114, 10, -34, 26, 65, -32, -16, 90, -35, 49, 50, -51, 77, 93, 119, 22, 119, 56, -41, -35, -21, 117, 99, 43, 74, 104, -59, 115, 59, -33, -102, -38, -51, 96, -5, 40, -47, -22, -95, 1, 19, -97, 121, 124, -64, -25, -111, 1, -72, -15, 53, 86, 29, -72, 108};
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
    msg.setTimeStamp(0.471053178279327);
    msg.setSource(21565U);
    msg.setSourceEntity(39U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(68U);
    msg.op = 184U;
    msg.tas2acc_pgain = 0.1812522705699966;
    msg.bank2p_pgain = 0.27320587826617815;

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
    msg.setTimeStamp(0.7745931123562928);
    msg.setSource(19972U);
    msg.setSourceEntity(165U);
    msg.setDestination(14779U);
    msg.setDestinationEntity(78U);
    msg.op = 191U;
    msg.tas2acc_pgain = 0.4796496603355138;
    msg.bank2p_pgain = 0.6235046957115302;

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
    msg.setTimeStamp(0.309943522809106);
    msg.setSource(16334U);
    msg.setSourceEntity(172U);
    msg.setDestination(25335U);
    msg.setDestinationEntity(149U);
    msg.op = 81U;
    msg.tas2acc_pgain = 0.833626556920094;
    msg.bank2p_pgain = 0.17908343412138905;

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
    msg.setTimeStamp(0.49952644574023275);
    msg.setSource(28179U);
    msg.setSourceEntity(98U);
    msg.setDestination(58339U);
    msg.setDestinationEntity(164U);
    msg.available = 3489421755U;
    msg.value = 239U;

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
    msg.setTimeStamp(0.9801201817017363);
    msg.setSource(42258U);
    msg.setSourceEntity(56U);
    msg.setDestination(62969U);
    msg.setDestinationEntity(76U);
    msg.available = 3180739580U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.8581305676028878);
    msg.setSource(38890U);
    msg.setSourceEntity(73U);
    msg.setDestination(35333U);
    msg.setDestinationEntity(138U);
    msg.available = 2873999120U;
    msg.value = 11U;

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
    msg.setTimeStamp(0.9804492194938533);
    msg.setSource(64450U);
    msg.setSourceEntity(34U);
    msg.setDestination(30327U);
    msg.setDestinationEntity(247U);
    msg.op = 153U;
    msg.snapshot.assign("LVDUGAICOMNATOYKANXVWOCPPRSINYOTXFQAPPQYFJGTKHZWJLZVLVTQXMAVPKBBIWYFABJGHPPZNHUMUTJBONJZOQOLDFNSSDUHMMKBATAKPFCPEHNYCKDMNRSYUEHWTQ");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.8209656672108833);
    msg.setSource(29738U);
    msg.setSourceEntity(247U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(170U);
    msg.op = 19U;
    msg.snapshot.assign("VTJMZOUDUEXGNFSWUXQPRVCSDIWHZAMBFEKOMPUWLFTVSIHNJHQWGLVBDNUNMPDFGEAPVZZCXRDSQOTGJPITWYYATYFOSXCHJWOLFDBXVEXHOEKSLZPHKJIFOSUCXQDVPNRTVWZAETUCNJEQYIALKRSEMIJKGTTMYRLOGLBLJSRRHMEUDKAOKNGCCBQHPPGODQWQXXUVKYLNFUJYBARYMENGIKCTZAZH");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 231U;
    tmp_msg_0.op = 59U;
    tmp_msg_0.plan_id.assign("WVPFNRVMHXIESKGPJIVFFNLPVJONQEYISPXLLEKBNFBPLSCDA");
    tmp_msg_0.params.assign("QVKBVEOBMPJNOPVFAFWHFGJYDZIBRDCGHHALBPZVHUEOZGRSULVDDBEFYGXLTLOFNWJUHBYGKQMHWRJFFEYBBCVLECYAITUNJMKGSEIRLGMQZJCAANWYHKLTDRJGPHPCVSYIWPJKKXHXMYXXRSAVLZLSEQWOBCEJCXSOPIQWQTYAYDOMFIKMKWSSUQZBKIQNEHAFRATOOKWQTINNUUCTTIMPTXPCTDNSGSRXWXJQMZZ");
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
    msg.setTimeStamp(0.29504486210612435);
    msg.setSource(53135U);
    msg.setSourceEntity(60U);
    msg.setDestination(33464U);
    msg.setDestinationEntity(93U);
    msg.op = 147U;
    msg.snapshot.assign("TTBQDTEENGBOYIJPQWLGLGONVUYNGTUJESVVKZLAZKAUBJSBNVTRTWEIOYHIQHSIDVVNLEORVQINPPGWWLMUQMFKMXDQAHISE");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.7492118411131321);
    msg.setSource(16422U);
    msg.setSourceEntity(249U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(171U);
    msg.op = 123U;
    msg.name.assign("LZAZHNLUCTZBCMBSMNHCYRBQZMOIVOXKGPJNGWSS");

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
    msg.setTimeStamp(0.22293587471702914);
    msg.setSource(33231U);
    msg.setSourceEntity(20U);
    msg.setDestination(41643U);
    msg.setDestinationEntity(189U);
    msg.op = 199U;
    msg.name.assign("LDHCRIBKVGXLHRQDPWVRRJTHMTUUYKNONJKDYGWJHYBHBBTIEHDXPUKMKEHEVOGRBVSFLUNXVIGLBTNWGITQJSLWXAHGSBGZMPZQAZHZEUPRKJPLZYAUFLMWQBERFHQNDFUOZEICVOXJMDZWVRWUMTNDDLCPNFOPMDAAPYLCTOJRFIOEKQYK");

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
    msg.setTimeStamp(0.6873111934768187);
    msg.setSource(59646U);
    msg.setSourceEntity(227U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(243U);
    msg.op = 132U;
    msg.name.assign("OWHXGAXJUFYSRIWQRUKOGBYQKNFUFMFRSKZESPMLPVJUXVDLQXJBEOIXKEMORYZNBOHAE");

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
    msg.setTimeStamp(0.09682954134584199);
    msg.setSource(41210U);
    msg.setSourceEntity(172U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(153U);
    msg.type = 167U;
    msg.htime = 0.806655165260757;
    msg.context.assign("VTGVLICEXCHSWGPEWRIWRZSVQPMYUMZFZWJHCAXNMYTDYLFLWHVOCBBFVDTBWYGBBNBFHPSJNEAQNPJS");
    msg.text.assign("FAWCUNQXLQGWRBKUNMIVJISFUQNHGEZIJQEW");

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
    msg.setTimeStamp(0.5280873359732676);
    msg.setSource(47771U);
    msg.setSourceEntity(43U);
    msg.setDestination(62603U);
    msg.setDestinationEntity(144U);
    msg.type = 200U;
    msg.htime = 0.8559667060921997;
    msg.context.assign("EJEZXMHIFAPDCILZI");
    msg.text.assign("LHSNWRGOCHTFCYZZMJHMQYDOHQKKRTLDTOJXIVSIKDOTECEIXXVZSSAAUGSZYJRFGWTWHFYNNXOVYVFOHUMUCVDALXRUUJSGRJZV");

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
    msg.setTimeStamp(0.1273681139087166);
    msg.setSource(23841U);
    msg.setSourceEntity(146U);
    msg.setDestination(59355U);
    msg.setDestinationEntity(185U);
    msg.type = 137U;
    msg.htime = 0.9935748049983839;
    msg.context.assign("EROBZPXUFKRTFXJYGSJKJGERABDAMLCHTDEGAAIZSOKQAJQCWBREQSYDXCCHEGFMHNZZLXQTFKQDTJAYIUNEFUMNBBMQFECOIXRMKYJAPOTNEQCXPIKOYCRMGHDIXVLTWSVIVFMLRUFTUWWCIWSEQLHVY");
    msg.text.assign("HSANZEHRAHFGOTBNBWPLZMBKGGQCJSTFTAZKDRGGISCOFUSJAPYCUUQDVYKEXKXEDWFNOFBDVXIBKTVO");

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
    msg.setTimeStamp(0.799571535911262);
    msg.setSource(53549U);
    msg.setSourceEntity(252U);
    msg.setDestination(50271U);
    msg.setDestinationEntity(228U);
    msg.command = 252U;
    msg.htime = 0.8117337986832475;

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
    msg.setTimeStamp(0.2916689916001164);
    msg.setSource(38685U);
    msg.setSourceEntity(233U);
    msg.setDestination(672U);
    msg.setDestinationEntity(82U);
    msg.command = 223U;
    msg.htime = 0.1931060964655793;

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
    msg.setTimeStamp(0.5141800077999971);
    msg.setSource(40794U);
    msg.setSourceEntity(117U);
    msg.setDestination(23305U);
    msg.setDestinationEntity(12U);
    msg.command = 156U;
    msg.htime = 0.5223406755362745;

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
    msg.setTimeStamp(0.20612852133243575);
    msg.setSource(9786U);
    msg.setSourceEntity(156U);
    msg.setDestination(39338U);
    msg.setDestinationEntity(239U);
    msg.op = 14U;
    msg.file.assign("CAKZHNKEWTRWACWHGMTWZLDMBSHYZQHRVJJTJIEYVHWBMJZQLHFLDSYSXBPYRCGUNOCQUBFXXTXIFZWYYCBNTQOKOEPTTTZNPNPMJRIMFFXILLSVDQPJIRIGNENUSYVFRDVWADTPKVLOQIBIFDBZGDCGPVSJMMQGKCXOKPVAZPZJAROWMOLIGKUMKBXHQCOAERAWYYOGKUSAURTJHUVEGAUQMXHRBJFNHDZUPCELKYEDBSA");

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
    msg.setTimeStamp(0.2954321543005246);
    msg.setSource(46552U);
    msg.setSourceEntity(117U);
    msg.setDestination(62129U);
    msg.setDestinationEntity(9U);
    msg.op = 131U;
    msg.file.assign("RRGWIDLGFIVCUFYDYNPAZDNOOMODBGCXEJTJUNSQJDVXCAWXYXFTPBYUJRTSQDRVZENELZJCNWWMQJKLEGMSXRPUVMSHAPVWCKOQSACKTAMSUVTGRAKMZDLNYCBLIKKPPPZGHBHYHCIHXUBQCIZYEMIPEGXQEMBUIBRJFR");

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
    msg.setTimeStamp(0.9939486959800687);
    msg.setSource(9174U);
    msg.setSourceEntity(110U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(233U);
    msg.op = 34U;
    msg.file.assign("XCXOOVNSHGTUJZIZTVAXSGKLEFKCZBRQPRGJVKWQSSNNCWTLZCGXNEBCJISQIGOBIRVRHSWOAFCPMZGBBKLJWLHAJQVOMOHPKKBGIJQTDNGUVMTLDSJKYPMWNV");

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
    msg.setTimeStamp(0.667008637082251);
    msg.setSource(46202U);
    msg.setSourceEntity(8U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(187U);
    msg.op = 122U;
    msg.clock = 0.4256901566081309;
    msg.tz = 78;

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
    msg.setTimeStamp(0.4534466627368442);
    msg.setSource(50591U);
    msg.setSourceEntity(128U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(196U);
    msg.op = 140U;
    msg.clock = 0.9490765778448367;
    msg.tz = 106;

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
    msg.setTimeStamp(0.19101871105910162);
    msg.setSource(27418U);
    msg.setSourceEntity(88U);
    msg.setDestination(6850U);
    msg.setDestinationEntity(219U);
    msg.op = 99U;
    msg.clock = 0.7501871771496312;
    msg.tz = -49;

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
    msg.setTimeStamp(0.3582689278870599);
    msg.setSource(54376U);
    msg.setSourceEntity(220U);
    msg.setDestination(11762U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.5066978930461875);
    msg.setSource(3056U);
    msg.setSourceEntity(1U);
    msg.setDestination(16398U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.005797810741648646);
    msg.setSource(61726U);
    msg.setSourceEntity(72U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.6064088001603652);
    msg.setSource(4620U);
    msg.setSourceEntity(167U);
    msg.setDestination(13695U);
    msg.setDestinationEntity(211U);
    msg.sys_name.assign("ZVRXORIAQWVRBZEBMQHWESYHWOJIZKCHSHBLSGDJGNFCZMHTKNOSKEYNFVXQARSUCGNTMJGWFTKLOODABZOPQDIPYFTYSJUUIREOWBXRUVJWYMWJWFNLSTCEBWGATDKQOAPPFYCQQALERJFUHTKKDZUEFQCFRTTGUZGOAYCIDDYUXIVYMIDFZLSIHPNXELMATLUMNOGMCECXBIGMGJVBNKZLPHWKXBKIPNA");
    msg.sys_type = 250U;
    msg.owner = 8241U;
    msg.lat = 0.04093765146914918;
    msg.lon = 0.4519254855739664;
    msg.height = 0.36012178457808797;
    msg.services.assign("NWDAYKCDBWEBOXLZOMIVURLKRABCAPQOXTUSHRJOAPLWGIHCCRYDTAXSHEJZ");

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
    msg.setTimeStamp(0.6926584449071203);
    msg.setSource(54639U);
    msg.setSourceEntity(225U);
    msg.setDestination(949U);
    msg.setDestinationEntity(145U);
    msg.sys_name.assign("FWRVXUSSFDMVEUZGTQGLKQUZGRUQKXJMGTKGXLIZKYNABEJDHEOWYYZANHEYL");
    msg.sys_type = 125U;
    msg.owner = 17246U;
    msg.lat = 0.954479062977128;
    msg.lon = 0.45294525222942383;
    msg.height = 0.6167544840594746;
    msg.services.assign("XLATQHELYIVVAWIQQQTTSTFGQNSPLEKITCBXVPSPNEGJBKMOOIIHSNESPHWCGSMXRVTINACWHRQMGAEDMXFYPUSTIRCGZYPWZHBTIDJYYZNUIYHLOFLCGCPRHVLVUMWOYCFHLWEUCNSZDOJMRRTXHVKNGQZZPZWAXVBRSKWTDCDMCZLOUDABFXFKFDZOBADMXOKGXODJQGUDVKPNAERGHLWAUEFJZREQR");

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
    msg.setTimeStamp(0.23396177431514098);
    msg.setSource(48383U);
    msg.setSourceEntity(51U);
    msg.setDestination(23975U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("JUWRUISHTPVTDFDJHUPQDEEVVBTOMNETPLLAMKYGAHFQWKIMEFWLRQVVSNAVUSUTVKMUNAONSQKHGCICDWXQXRDXTDLBCSZPQZEYJXOXWOJDKWWVTYRBEAHSNXJTXAJRUMCOXYFCDIJFEAYBLBZOUSPNAOYZSEFINMGXPRUMTQPCYI");
    msg.sys_type = 10U;
    msg.owner = 56631U;
    msg.lat = 0.6924474345267879;
    msg.lon = 0.08876938941465828;
    msg.height = 0.6214300019804875;
    msg.services.assign("KPPEGJTPVCFBEJWXLRQZSNVFUVJPYDMISDGEKH");

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
    msg.setTimeStamp(0.3193381877367981);
    msg.setSource(49838U);
    msg.setSourceEntity(206U);
    msg.setDestination(21784U);
    msg.setDestinationEntity(10U);
    msg.service.assign("EFSZRJUIKSDOYGDTMUFIQLKHWCZVWNVPJBZIIVGPYLBQUFNTIMSTWKCQULKGHESXRSPUGVOZPLFIOCZDECRNLAAMBHFTAHNQJDVPUAGSQESMZVQYMFQALKYNNTNBYIEBMYECGCVMLDWWKMFHJPOCEQBRLZPJEGOCVAEXJTUAXXGHIRCJNXYPGRHXFLUEKBRSVXGDMDLOZJTOYWCWVNXRFOJDHRAYFWTBRBODJQAWXTHMHUI");
    msg.service_type = 3U;

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
    msg.setTimeStamp(0.27975445439404667);
    msg.setSource(27676U);
    msg.setSourceEntity(241U);
    msg.setDestination(39709U);
    msg.setDestinationEntity(210U);
    msg.service.assign("IOOPFVAGMSBWCGTXVNWKESPNDGPNOPLRSYTOJSIYKYEPVMYDGFRTMCOYDCIXSNUKJCHYPZRYQZJMZKUIRNRLUPBRZZJHYWCLKIBWKIUHSJDXOAJBDSUZDEHCRVLTQNFALEUBLFJGSWFEAJHFDYQMMZLGMIGHAUCAQQGFMLATTVMGQDOQJFVRVXBQTFHCUBGEDXKCVJEUEEIZWXHCOVWTNBHNPNAVRQKOHQEOKWMXSZIXZXLTADAXPBLKI");
    msg.service_type = 16U;

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
    msg.setTimeStamp(0.6366151138273797);
    msg.setSource(27821U);
    msg.setSourceEntity(82U);
    msg.setDestination(53463U);
    msg.setDestinationEntity(163U);
    msg.service.assign("VEPWVGOSRCLOHMDYXJVIUURMULCCOJSGUDFLADBTTFHIJJPBBDRFXCJQHEPFUEAKYNCWPMEMEZYZHOVWCNTQFXPUIHJAWQZYLZBCNXJXUTWIAROZFIOCBKRGXTOQUTYLRLKSZWIJSRTFKVKDNQYDAAISKBLJNHDHBFMMZVKGVNDVLAFHUHSZXYTDPQANASMBPNHJGTWEIMORERCYDEBGKXZQGARGKXNYWWSNMQVCPFOPM");
    msg.service_type = 239U;

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
    msg.setTimeStamp(0.29616271825645124);
    msg.setSource(1660U);
    msg.setSourceEntity(189U);
    msg.setDestination(20444U);
    msg.setDestinationEntity(41U);
    msg.value = 0.11688144818486834;

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
    msg.setTimeStamp(0.5902120867444336);
    msg.setSource(34515U);
    msg.setSourceEntity(251U);
    msg.setDestination(17002U);
    msg.setDestinationEntity(235U);
    msg.value = 0.5386224478541627;

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
    msg.setTimeStamp(0.027581013229873275);
    msg.setSource(42392U);
    msg.setSourceEntity(220U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(109U);
    msg.value = 0.19325717088387273;

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
    msg.setTimeStamp(0.15307943058837659);
    msg.setSource(43137U);
    msg.setSourceEntity(172U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4447877272304991;

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
    msg.setTimeStamp(0.5710066727919291);
    msg.setSource(10521U);
    msg.setSourceEntity(124U);
    msg.setDestination(50343U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8145722640227872;

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
    msg.setTimeStamp(0.14170367434166575);
    msg.setSource(17885U);
    msg.setSourceEntity(247U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5042932653206692;

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
    msg.setTimeStamp(0.7718277343113056);
    msg.setSource(30751U);
    msg.setSourceEntity(242U);
    msg.setDestination(34944U);
    msg.setDestinationEntity(132U);
    msg.value = 0.0932735727714672;

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
    msg.setTimeStamp(0.47257159880825195);
    msg.setSource(13207U);
    msg.setSourceEntity(100U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8655504082289281;

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
    msg.setTimeStamp(0.4282715079634072);
    msg.setSource(930U);
    msg.setSourceEntity(233U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(143U);
    msg.value = 0.475029978805273;

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
    msg.setTimeStamp(0.9111477477361346);
    msg.setSource(53853U);
    msg.setSourceEntity(91U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(41U);
    msg.number.assign("YKBLQPWJXYTFCMXWYNDSYEHYYKQSKYNAIZRMNJEUODQMLCPIJXTEWTHDOBZEALOTAXIWAVWFFKNHHVZFTCNAZWFUUPWISAJDNJCIMLLMVKSIBGLILSIZTQSQOZDRIYGUOFBGKSOBRDVHCSCRVWSMKAPRREQHMDK");
    msg.timeout = 7724U;
    msg.contents.assign("ZSQWVHDTFFWLIYHVAFYODSVUHTORMKRWFZSEZPMAYINBJJIQQCNGHNEXTWHWMYJLUUBRLKFAZRPDEODCDV");

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
    msg.setTimeStamp(0.7616888538038371);
    msg.setSource(2826U);
    msg.setSourceEntity(176U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(215U);
    msg.number.assign("YTKGVMBUVGAAQKFIYLARICMRKUOLPBYRBZVKOZGMSWRPRZGOOHGCPSZHWYVMCRXKASBDZSRYPOLVNFTOJBYDXQELEJIWUNKSWNCZGYLIXOHNWTLVTEJ");
    msg.timeout = 36536U;
    msg.contents.assign("QNTUQEILXCJUZZOTSBPOTQBMJWYIZYRCDDGKBGCWNGYMHQMHUJAQVSBRMEOCKVWWNVJTQGWRGFAYIDTLSOZEEDHPINMWUXRDBFZFWNPTGBOOJQMMPAWOULLHHRUIWX");

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
    msg.setTimeStamp(0.6283520090400491);
    msg.setSource(30947U);
    msg.setSourceEntity(24U);
    msg.setDestination(24381U);
    msg.setDestinationEntity(229U);
    msg.number.assign("SXBIBRJQHQVRXZKZIKZYPPQFLPHFZAMTLVABDKSXHEEBHWIPJZXFVBORZNJGIQOQDWSFJJHRJUCULLOLEHGTHEOQEKXQCWPVJMYSIRJOGMNIRNUGVTAOTKSXGZQYWLSUGYXLULREVNGUQEERGFSZTXMKNMISODSAROPNCIYOFMKNCADDMCZKUMTBJN");
    msg.timeout = 45205U;
    msg.contents.assign("LQVQZWNNDFSIMJQIMHPOWGJDMYXPXNYIZEBLONQLSFMIBELRXIFYXEKMGDCLWWPIJTJGBPCZVKSQFWKORHVEDRDIEBLAFNUNSEBZTRNYPBRDSTCWFCNZJOXRHASGDVYKQJVMRVW");

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
    msg.setTimeStamp(0.983057887951873);
    msg.setSource(38056U);
    msg.setSourceEntity(150U);
    msg.setDestination(3132U);
    msg.setDestinationEntity(176U);
    msg.seq = 2362948746U;
    msg.destination.assign("CBLCLESJUWSEJCZCYLGVFOEOXFNAIPFQWPXYPOTDDXZKWMEIJTLJIZTSOKXFWYNZDCJHGQXWRPGRYOVBMCLSOTFNXIAPFYLTTRPIFGKBGAHLQWMFQXPAAPFHYUNZRJNUKMMKTTHVQGSCUYUVVNZXBVNTWUGUGKRRZLNSGCTESBKIDWHYWOHMHHIPJZRSDQLAQMQHBVEUIQNJRDCJDUIVVBRKEUDABAOAWDZEHYOXKGMSMQAB");
    msg.timeout = 2686U;
    const char tmp_msg_0[] = {28, 49, 100, 101, 82, 6, 53, -13, 51, 49, -47, -30, -32, -85, 104, -113, -59, -88, 52, 29, 118, 60, -38, 25, 73, 85, -119, -13, -94, -64, -34, 100, -111, -50, -24, -65, 11, 88, 105, 15, 112, -83, 34, -84, 25, -125, 33, 116, -37, 81, 19, 57, -126, -105, -119, 123, -112, 81, -58, -38, -17, -127, 66, 25, -98, 11, -42, 32, 37, 5, 54, 34, -106, 120, -23, -76, -67, -102, 92, -8, -91, 84, 59, -17, 124, 116, -82, -90, 6, -52, 86, 99, -33, -94, 48, 76, 38};
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
    msg.setTimeStamp(0.2748643257186931);
    msg.setSource(53003U);
    msg.setSourceEntity(184U);
    msg.setDestination(28687U);
    msg.setDestinationEntity(12U);
    msg.seq = 331953694U;
    msg.destination.assign("MWBMNWFFYJEKARJYRIPUBSUYQABZHWIPFOPPGNXVJFAMXRALC");
    msg.timeout = 34170U;
    const char tmp_msg_0[] = {119, -56, 83, 27, 84, 118, -38, -89, -104, -116, -32, -65, -32, 113, -108, 54, -119, -20, -37, 85, -13, 17, -30, -41, 93, 117, -91, 3, -12, 125, -36, -126, 125, 9, -91, -11, 104, 23, -111, 11, 61, -43, 103, 60, 5, 125, 13, 91, 5, -97, -7, -69, 85, 47, -23, -56, -59, -69, -90, 84, 10, -127, 6, 79, -46, -81, 91, 63, -68, 43, -67, 98, 117, -124};
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
    msg.setTimeStamp(0.3762292931638691);
    msg.setSource(23562U);
    msg.setSourceEntity(246U);
    msg.setDestination(23683U);
    msg.setDestinationEntity(152U);
    msg.seq = 1569736917U;
    msg.destination.assign("YRDGJTMHFJXCACGOMCQQONPJMNOZVIWZKULCFZLDAKJXSVJTSRVIIDSZZXMRRQWSVYWSCUNJBFHNNCWEQAUGRILVOLQJLFBZFOCYAFEPUUGYYXIHKCODOUIELHVQSBTEQFBOTDDYMHUNDEGGISFSPTYQWNRHXRMETTCGMHJWOPWFZAYPLEMWWKLLHXZ");
    msg.timeout = 5990U;
    const char tmp_msg_0[] = {-5, 29, -112, -111, -51, 97, 46, 86, -49, -32, -110, -82, 56, 89, 88, -24, 105, 38, -65, -58, -99, -58, 62, 58, -77, -104, -123, -79, -94, -124, 62, -115, 106, -15, -55, -35, -64, 80, 7, 6, -16, -92, 71, 43, -77, 10, -49, 78, 91, 58, -92, -52, -7, -41, -41, 112, 28, 76, 95, -47, -97, -81, 37, -2, -10, -115, -78, 98, 32, 69, 54, -101, 99, 12, -58, 84, -94, -47, -120, 22, -69, 10, 4, 19, 105, 110, 122, -68, 19, 96, 85, -127, 102, 32, -61, -34, -123, 56, 83, 17, -47, -91, -112, 123, 52, -13, 82, 122, 2, 45, -84, 47, -36, 72, -114, -44, -51, -43, -107, 8, 89, -97, -10, -44, 22, -87, -14, -29, 22, 17, -91, -47, 58, 26, -67, -68, -80, -61, 45, 101, -40, 29, 46, -38, -76, 52, -11, 97, 119, -47, 7, 51, -27, -74, 102, -70, 49, 79, 110, 97, -123, 49, -122, -60, 38, 106, -64, 99, -45, 39, -79, -50, 93, 69, 50, -118, -75, -73, -40, 54, 85, 4, 21, -80, -106, -52, 100, 30, 55, 106, -80, -56, -39, -113, 116, 20, 68, -103, 80, -125, 74, -95, -92, -90, 119, -43, 60, 85, 122, 32, -56};
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
    msg.setTimeStamp(0.2484183300915045);
    msg.setSource(47310U);
    msg.setSourceEntity(40U);
    msg.setDestination(9108U);
    msg.setDestinationEntity(65U);
    msg.source.assign("RHTTKBSBIMLVKFMUFZQVAUOZNXDGZXCOJPLJXLWHZSBQKWFEGITYJTYHKAODHMKGXFAUNWOPBBDKECAVAECXRYPATUWSOIBUBQZHVSRXRNPNUEFNHQEGWIIMLSIAEYBXUXBODLMCXWUFIPVFGOLQCPMEPTSZDKFITMZYHCSWXZAYROJMGDLQKFYCQLWNSHJTHBRSNESPFVRQRKOHWDERJGLLNQAIRGGUGKVTJCN");
    const char tmp_msg_0[] = {-122, 116, 78, -20, -109, 50, -125, -110, 62, 104, 8, 85, 119, 107, -44, -33, -40, -74, -32, -81, 19, 16, -103, 33, 27, -107, -118, -67, -124, -104, -81, 119, 117, 52, -76, 84, 35, 85, -9, -2, -2, 88, -102, -107, 5, 15, 91, -48, -74, 16, 42, 124, -31, 42, -11, 89, -28, 32, 74, 114, 85, 23, -125, -83, 12, 119, -62, 67, 102, -36, 40, -108, 75, 23, 126, -98, -6, -46, -32, -77, 17, 63, -26, 98, -113, 50, -31, 2, 3, -25, -38, -46, -107, 17, 120, 95, 116, -117, -92, 43, -68, 119, 85, 7, 15, -30, -6, -68, -108, -49, 65, 72, -56};
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
    msg.setTimeStamp(0.05992351447916322);
    msg.setSource(58666U);
    msg.setSourceEntity(148U);
    msg.setDestination(46352U);
    msg.setDestinationEntity(123U);
    msg.source.assign("ODVUANZJAAEOXHWGDMSCBUPNPWMQVMXKHNYVQKAKRDMVXIAFZHORSYUXKEWGIOUHWKUJUPS");
    const char tmp_msg_0[] = {-76, -7, 114, -28, -87, 88, 6, -102, -4, -104, -25, -85, 85, 51, -33, -14, -20, -12, -111, -26, 73, 19, 25, -89, 34, -66, 15, -74, -23, 71, 51, -75, 59, -46, 2, 42, 63, -105, 0, -79, -75, -87, -122, 10, 9, 86, -12, 120, -79, -8, 42, -61, -50, 120, 85, 88, 0, -104, -119, -27, -109, -108, -34, 125, 43, -24, -51, 6, 59, 118, -123, 106, 85, -46, -70, -25, 72, -29, 80, 123, -58, 77, -71, 16, 109, -89, -50, 33, 46, -104, 119, -58, -1, -94, 85, 68, -13, 57, -51, -35, 108, -94, -4, 2, 49, -68, 33, 48, -91, 41, -81, -128, -86, -92, 18, 37, 27, -98, -93, -98, -68, 30, -73, 45, 101, 76, 120, -20, -15, 91, -100, 107, -68, -128, -35, 102, -76, 0, 46, 81, 53, -29, -45, -97, -85, -59, -61, -42, -50, 75, 14, -17, -75, 60, 32, 116, -102, 15, 123, -56, -3, 116, 6, -57, 55, -9, 86, 31, -71, -40, 85, 94, -120, 45, 54, -102, -31, -88, -103, 16, -14, -10, 100, -105, 110, 17, 125, -21, 90, 126, 8, 10, -69, -83, -118, -66, 12, 49, 110, 2, 96, 74, 71, -74, 93, 39, 59, -73, 86, -110, 22, -116, 64, 17, 75, 101, 98, -26, 11, 27, -82, 44, -48, 7, -35, 65};
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
    msg.setTimeStamp(0.25596229837393103);
    msg.setSource(45265U);
    msg.setSourceEntity(16U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(192U);
    msg.source.assign("IYXJLNAGOQHXXMWVKKTPIBSIPFKNRNOTJFBLIGHEZGPKOFDHTVGFB");
    const char tmp_msg_0[] = {-55, -126, 83, 114, 119, 60, 57, 86, -127, 50, 54, 64, 89, 74, 75, 72, -18, 74, 50, 89, 76, -122, -73, -38, -96, -40, 106, 91, 94, 96, -54, 115, -95, 8, -119, -21, 7, 116, 89, 105, -102, 3, 94, -104, 122, -94, 93, -124, 20, -119, -74, 21, -75, -95, 71, 59, 47, -124, 123, 89, 95, 59, -34, -28, 93, -3, -28, -38, -8, -49, 2, -42, 55, -40, 12, 124, -72, 105, 41, -64, 10, -86, -18, 21, 41, 93, 98, 39, 43, -10, -80, 50, 57, 116, -72, -97, 40, -126, -120, 48, -80, -34, -123, 106, 64, 52, 62, -73, -93, 32, 102, -86, -97, 66, 16, 115, -7, -72, -1, -107, 103, -109, -101, 54, 49, 60, -79, 37, -86, 84, -76, 119, 4, -120, 53, -86, -71, -92, -4, -51, 28, -123, -61, 41, -38, 112, -6, -108, 27, 95, 0, -23, 100, -47, -120, -20, -11, -84, 82, -37, 110, 13, 83, 16, 14, -42, 0, -58, -4, 45, 17, 70, 8, -66, 16, -75, 94, -66, 72, -8, -23, 41, 90, 102, 90, 37, 121, -72, 23, 90, -36, 101, 107, 37, -128, -30, -7, -83, 112, -21, 118, -100, -115, -117, 123, 63, 94, 111, 90, -53, 21, -99, 77, -87, -68, -25, -65, -46};
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
    msg.setTimeStamp(0.07425195574746124);
    msg.setSource(22565U);
    msg.setSourceEntity(118U);
    msg.setDestination(7000U);
    msg.setDestinationEntity(143U);
    msg.seq = 577062367U;
    msg.state = 20U;
    msg.error.assign("ADAQVBHDMWKKVSREONLISXDZUTZJTOCFWMYWBCHBHCKCXPUAHBBADQAVGNROBRMXHYUJYYMRTOSAAXGREMSWUTXLVSJMKDCGQNYBJKQDVWZEIBFEEGSNLZXZYECDAQRAPJBCNGJFNTJZLWREFFXVWNHOILYJLQKVEMDUEMFHK");

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
    msg.setTimeStamp(0.12799536535980005);
    msg.setSource(53949U);
    msg.setSourceEntity(88U);
    msg.setDestination(10246U);
    msg.setDestinationEntity(89U);
    msg.seq = 923336740U;
    msg.state = 226U;
    msg.error.assign("PFJAQREGDUBGFUVIGKRKUXYAZDBDLQYMJYNJHHCFYOQBKZNOXHPYRULCLTYLGTMMWHFZOHNQMIHQWJP");

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
    msg.setTimeStamp(0.9683801144775641);
    msg.setSource(19009U);
    msg.setSourceEntity(209U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(215U);
    msg.seq = 3901413213U;
    msg.state = 129U;
    msg.error.assign("YMXHESIQFTPTOCXYEXZWIKLEGNVRCKWAKPZUOBDQSSNPIRSYIFPIBTSCLKGEFWLMYJJGQMKYBMFXDRMPSLCYOPXGPHNDVYNHLEXJOZAHUVBAZFROHMUDRNNBEVQWSJSPLZQKQPDZGXETJDFXNZGICCDMBZEUFFVBAYVBFJJMHXQIQRW");

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
    msg.setTimeStamp(0.0705961927420734);
    msg.setSource(50354U);
    msg.setSourceEntity(172U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(230U);
    msg.origin.assign("KDLWKSGMFJIUXADCVCYSYSKIVNWUHWGEITBCJIYCRHLZOVGONBVUAPMZWSTCYXMGRRGCULWVIQWPKEPHMUSONUXPLDLWPIWYBYQNMDNDJGSEXXNTAQWXFFBKQFVJDMUOXASBIEQHEMRGBOKHNQPIJHBAOOTFCMHQHKPYADCWEZHQIUXRTLZHLOVOBDSUVQVZRKTLXMKFRL");
    msg.text.assign("ZNVDVONHYZXWRRGDJOCKQKWMHXOHDXIDIIF");

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
    msg.setTimeStamp(0.5339653169017844);
    msg.setSource(53898U);
    msg.setSourceEntity(32U);
    msg.setDestination(62415U);
    msg.setDestinationEntity(155U);
    msg.origin.assign("ZXYBFYRFHPCKTOWHPFFZJXPFWKJGJUHNGQBRAGMFNZVCCJKBLRXICMBEPTVSTHRIOMXHICAMHCAFLQGERQXOIECUFEIKSYWWEQPAHJDUUGUYQZTYSLYKNKZNRXHJILDMACXZ");
    msg.text.assign("AATTOCRFVLSVWCZQKZFKGBAFCGNNSXBNEAOUOESWXOBFUUBQHDASHWWXOARSEFLBNLAJRWSPLMJJBKFQGHKDGHCYQGLYUEODSIHKWZIPSDPJSUEYMPCMWGFKMCEPWVCRTCWIIUGMUFLUOSQEXFZZHJRQXJNJDXYMBMMTPVYDRIIGZDHOUDXBCEETBXCGZEPLPNQBI");

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
    msg.setTimeStamp(0.20206293584366586);
    msg.setSource(19958U);
    msg.setSourceEntity(241U);
    msg.setDestination(52598U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("DNHOEVZYCWHZCLMFVJVRREDQOBPWAXRLLWGNSTZCCUANOALEAYHOFQWRTVIJXDNZHVNSZLSJKVGBMAGXDDEKQVUCTYSVBDWGIDQAPMKEWJRKHPRPIYMZSMIIIQMVUTPOCIUCRLFJSEGJSHHQEAZTXCJVSYXPQQZTKKDUFSGFPEOTZCNXBGEURGBPFY");
    msg.text.assign("KPUVQMODFHSVJLRWMOBDATSAQPEAOHKCHJQZRKHQVKOCWBBLHDSPTFJGIPFMLBFYAOZEMULISNASRQYPWYDQFKRPMZCDETWUXXXAAFBWHEAGNCGIH");

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
    msg.setTimeStamp(0.7654014600409722);
    msg.setSource(4891U);
    msg.setSourceEntity(178U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("DWUXKRMHWHVRIFJDEBOCQTXVGORNKRMJGBCIJVUUHMHTFEKCNUZKLOXCBSTAFWIOQNQRRLHGKTJGMREATJDOBVDBNZ");
    msg.htime = 0.7022775177146011;
    msg.lat = 0.7712842811308989;
    msg.lon = 0.8313027162748095;
    const char tmp_msg_0[] = {9, -20, 47, 82, -114, 88, -127, 78, -6, 76, 125, -22, 74, -26, 89, -117, -76, 74, -124, -7, -116, -84, 41, -89, -29, -113, -39, 15, 54, -86, -13, -126, 109, -15, 8, -109, -7, -91, 28, 97, -13, 20, 72, 32, 115, 104, -55, 118, -72, 26, -100, 116, 69, 33, 79, 116, 12, 29, 49, 24, 62, 32, -55, -7, 75, 15, 62, -72, -19, 96, -71, 73, -86, -43, -54, -23, -46, -58, 118, 122, -33, -20, 42, -65, -99, -71, -61, -72, 48, -21, 33, -53, 69, 100, 14, 8, -123, 37, -67, -46, 54, 58, 56, -120, 18, -17, -78, -105, -11, 89, 123, 78, 115, 62, -81, -83, -113, -91, -109, 115, 94, -58, 100, 11, -51, 26, -22, 126, -96, 101, -31, -70, 5, -35, -119, -4, -123, -85, 53, -68, -27, -85, -27, 82, 23, -44, 123, -8, -81, 32, 32, -105, -26, -112, -14, 60, 84, -59, -107, -98, -128, -20, 16, -22, 120, -92, -103, -125, 0, -31, 125, 8, -37, 126, -32, -127, -111, -60, -51, -79, -59, -103, -12, -47, 52, -73, -96, -120, 75, -98, 18, -30, -56, 16, 24, -94, 62, -9, 10, 34, -123, -38, -43, -35, 35, 121, -65, 91, -5, 94, -47, -13, -110, 67, -18, -73, 116, 4, 5, 15, -91, 36, -88, 10, 103, -125, -58, -125, -43, -6, -53, 126, -72, -29, 77, 3, -62, 66, 45, -21, 39, -66, 84, -64, -65, 44, -88, 5, 105, 26, 4, 9};
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
    msg.setTimeStamp(0.28214842266918305);
    msg.setSource(3574U);
    msg.setSourceEntity(220U);
    msg.setDestination(35998U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("UZUYPTKVGWMPMXWBOVJQPMACYMLHYCDZKBBWNIVZFRJWFFXMZFXXHZDGFHQEJAZOQLUEKTXGKTGICHRCWIFATTNHNISKAPMYNJQRBSDRIDUWA");
    msg.htime = 0.5240044939801916;
    msg.lat = 0.3691855249334751;
    msg.lon = 0.8206159741640979;
    const char tmp_msg_0[] = {-127, -16, -17, 31, 5, -65, 74, 115, -37, 13, -22, -2, -7, 66, -23, -35, 34, -30, 55, 78, 72, -38, 92, 0, 97, 3, -128, 26, 78, -116, -25, -9, 42, 94, -82, 113, -111, -61, 80, 70, 123, 20, -67, -30, 97, -9, 120, -49, 101, -10, 87, 102, 18, -86, 68, -76, -54, -91, 60};
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
    msg.setTimeStamp(0.4663523499734189);
    msg.setSource(5419U);
    msg.setSourceEntity(70U);
    msg.setDestination(4722U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("CQGBULEGTGIMYKCONSJKDIQQOCWFPQHLKPPWS");
    msg.htime = 0.018780795600694344;
    msg.lat = 0.7965753113812354;
    msg.lon = 0.2462983674578625;
    const char tmp_msg_0[] = {-126, -112, 14, 122, -52, 60, -60, 78, -113, -32, -63, -28, -70, -112, -102, -114, -19, 70, -91, 48, -113};
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
    msg.setTimeStamp(0.9357611498645804);
    msg.setSource(40775U);
    msg.setSourceEntity(235U);
    msg.setDestination(24319U);
    msg.setDestinationEntity(7U);
    msg.req_id = 15394U;
    msg.ttl = 3866U;
    msg.destination.assign("QURLCXINVDXLSHZAJAQHKIKMSBEPOPOMRMTNBBAQHICNVYZSZCXTUUPNBTQYTXKHRZMFJBZGLVZTUCHQWUIDFDKOGXULFOEOWMJXKHJGGVIQPBLAMTTSOIECEPUCEFUVGENDISERJYRWSIPTNQEY");
    const char tmp_msg_0[] = {77, -66, -125, 125, -104, -66, -91, 76, 117, -106, 36, -92, 119, -115, -64, -61, -22, 120, -74, -128, -123, 34, 59, 122, 82, -10, -74, 86, -94, -97, -80, 7, -86, -88, 80, 107, -100, -22, -108, -90, -87, 85, 49, 14, -2, -111, -97, -42, -93, 60, -10, 61, -112, -8, -112, -2, -87, -3, 63, -100, 9, -54, -61, -31, -1, -56, 54, -67, 66, 8, -113, -101, 15, -109, -25, -21, 94, 101, -72, -33, -106, -26, -74, -31, 106, -112, -13, 100, 12, -88, 112, -44, -45, 122, -116, 24, -92, -22, 33, -17, 26, -95, -109, -128, -35, -116, -29, -59, 47, -108, -88, -29, 54, -111, -12, 118, -77, -116, -126, 48, -72, 21, 77, -80, -45, 85, -55, -121, 33, 22, 97, -101, -110, 120, -100, -106, -34, 110, -43, -78, 37, 115, -33, -37, 41, 30, 73, -86, 37, 43, -31, 114, -114, -19, 103, -65, 14, -69, 124, -33, -64, -84, 19, 104, 100, 98, -100, -8, -85, -28, 106, 58, -23, -6, -7, 14, -1, -37, 96, 54, -55, -9, -9, 5, -45, -99, -96, -9, -121, -106, 17, -59, 93, 96, -84, 73, -12, 58, 118, -30, 36, -77, 15, 70, 94, -111, -86, 27, -32, -41, 78, -96, -41, -100, -77, 103, -29, -89, 123, 17, 99, -87, -7, 36, -25, 56, -73, 92, 41};
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
    msg.setTimeStamp(0.8045282950855744);
    msg.setSource(2298U);
    msg.setSourceEntity(174U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(0U);
    msg.req_id = 15597U;
    msg.ttl = 64757U;
    msg.destination.assign("QEXFXFSLYIYXNKQHGRFZBRTWEGOKNOBQPEXKOFBEADNYWIILIWCJUOSAGJAYXASVIMVZKWZCCHTNMHVSPQRCMHTICCFSJZFOGQAQBURZLBTZANJULNRADPTJKCHLEPULPDATDXXFJJWOMBRWCFCVHWYXEIGVVOGGWEDSGZPDRKEPOMDJPKRYUBBHUDVQLTCKYENYKSQSYZOSTHYXVOUXMDLBNSWVE");
    const char tmp_msg_0[] = {-53, -14, 32, 6, 45, -126, -61, -19, -58, -86, -98, 65, -59, -89, 9, 64, -110, -57, -66, -11, -66, 85, 10, -56, 88, -49, -34, 125, -102, 85, -9, 27, -17, -100, -73, 78, -85, -53, -71, -70, 47, -109, -74, -115, -87, 90, 98, -90, 52, 116, -54, 30, -96, 14, 61, -118, 10, -104, 56, 115, -104, 95, 43, 102, 33, 97, 86, 45, 45, -69, -53, -122, 32, 74, -79, 42, 0, 34, -31, -52, -14, -106, 110, 41, 51, 101, -95, 4, -110, -62, -42, -107, -49, 68, -62, -118, -17, 96, -114, 54, 102, 60, -42, 78, 35, -103, 101, 116, -95, -119, 22, 113, 8, 38, -85, -13, -36, 51, -83, 60, -31, 56, 44, 4, -119, -18, 125, -22, 57, 123, 125, 66, 31, 36, -26, 112, -10, 104, 46, 5, 96, 72, 56, 58, 6, -114, -51, 108, -66, -39, 120, 88, -52, -23, -17, 44, -124, 122, -101, 63, 76, 45, -117, -80, -30, 30, 46, -94, -1, -35, -110, 110, -62, 111, 103, -109, -20, 30, -83, 87, 22, 73, -73, -5, 88, 76, -87, -116, 98, -18, -122, -41, 42, 102, -52, 5, -56, 104, -121, 72, -8, 47, 12, 103, -72, -45, 30, -109, 79, 47, -109, -112};
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
    msg.setTimeStamp(0.290079697499099);
    msg.setSource(20180U);
    msg.setSourceEntity(87U);
    msg.setDestination(47954U);
    msg.setDestinationEntity(187U);
    msg.req_id = 51700U;
    msg.ttl = 11599U;
    msg.destination.assign("SPVUTPBKRQJWVFOTUSNSLUGUVJJJEGADWDDGWKYDXBMXBMNBNMJZOTUWAIYVJIEHHMREKEIQZSBKPLGVM");
    const char tmp_msg_0[] = {-109, 126, -125, 9, -55, -44, -76, 69, 80, -105, -50, -25, 42, -127, -11, 76, -8, -105, 86};
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
    msg.setTimeStamp(0.41913308499561863);
    msg.setSource(4751U);
    msg.setSourceEntity(158U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(44U);
    msg.req_id = 30862U;
    msg.status = 50U;
    msg.text.assign("QPKNPSDDBKFFLJOJCEYZFOPWBFWATRCALPHOWGTIYXYHCLRLWYSLOBKYSFRRDXRJPIDHVNKLKSLHQGTU");

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
    msg.setTimeStamp(0.8063507122489542);
    msg.setSource(43745U);
    msg.setSourceEntity(185U);
    msg.setDestination(25464U);
    msg.setDestinationEntity(50U);
    msg.req_id = 15346U;
    msg.status = 80U;
    msg.text.assign("HPUDOCKOSPBYGOCCOCHRFDCRQPPWHJBKKMYRWKTQAQSVLXDKMIUJIXOGQITQRJZXRZEZYFIETFZBQAUXQESRAYJLDGSNSS");

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
    msg.setTimeStamp(0.9550203634439949);
    msg.setSource(4976U);
    msg.setSourceEntity(107U);
    msg.setDestination(12299U);
    msg.setDestinationEntity(212U);
    msg.req_id = 31900U;
    msg.status = 7U;
    msg.text.assign("ZYJSBYDIJFORBREVMAMRFBIVQSEEJRKNPYGHTDDPQFZOQMVAYWWDNOWDWUHOISQQQAJKLWVEICBPCLCAZNFEBIPKVUGRJJHSTXUBCYILZUMWZNVCDPCTPLRZWDPXOHAAETECFOUAGZOXXIZUSADKNJSLYJYSKRC");

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
    msg.setTimeStamp(0.2352915859916488);
    msg.setSource(41285U);
    msg.setSourceEntity(41U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("OOBPPYJEVNMRWBLGCDWFKEXMGLCLUPDBZWHMKNZYOKJSFSOYKTNPXZOXEUXAYVTDPXFJDBVURCIVNDLMHTEJRQGOAHGHZBMQDCIECCQRFAGQXGLTDVKQYALHMNHGJWIYLYFUFGPWSBCMOGLSITUQVAJVEFWLNBHXKWMCUVQUPTAIZMVIXSTME");
    msg.links = 1403836405U;

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
    msg.setTimeStamp(0.9960010051443944);
    msg.setSource(46005U);
    msg.setSourceEntity(124U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("ZFJOTDWGLMIPDQJUIKHLRTRVMNYSXYWRTBSQVBKJWQTZAGCWDPEVFCFIIGPHWENCOVGACXJGYPZUFKGQQHWVHBUOVRRLLEESTEULAFEZWZPYNKVFVXAEGHCYKUFQTZUQUZTKTNQUPTAHAXGNIOOHHEBNIEMYCOCMKAZAYCXLBLIRHJZKJMVRJNDVRMDBXPSUMN");
    msg.links = 1647609122U;

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
    msg.setTimeStamp(0.18508164839579844);
    msg.setSource(56167U);
    msg.setSourceEntity(77U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("OKOHDMAOMFKHOMFFEWPSJKRKUSCHYYXTMLDXICDZMXSJWAJUXRKNGVLCICELIL");
    msg.links = 1961987784U;

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
    msg.setTimeStamp(0.4524064605274556);
    msg.setSource(41658U);
    msg.setSourceEntity(88U);
    msg.setDestination(41679U);
    msg.setDestinationEntity(210U);
    msg.groupname.assign("LJAZTNOVDWMEVRUNXALXGDGSAFLQUDQZGVACSGHVFHDNTNXXHWCTBHBKJZSSPEOYLEEHHVBKXIYSMTWDWIERTZPNLZPRCVJSTAQKGOFQYRQJZMXLAYCMQTHVIDVBJBKXWRLIEKKMUQUPLZFRUHRMJNHBXPTKTPEBQQ");
    msg.action = 194U;
    msg.grouplist.assign("ZMWUZFNHUYHDJWNXTFOEOWRSZFDTVXPLANHWMIUCOIZLTUPJOSVEZQHMURQYMDKCXIWTNJXVDCSJRBGNARIL");

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
    msg.setTimeStamp(0.484661770362358);
    msg.setSource(7384U);
    msg.setSourceEntity(60U);
    msg.setDestination(20138U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("QZPZXEFDWDG");
    msg.action = 88U;
    msg.grouplist.assign("ZGQWRIJBGGIWXOXIPF");

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
    msg.setTimeStamp(0.145219345228916);
    msg.setSource(1168U);
    msg.setSourceEntity(253U);
    msg.setDestination(20165U);
    msg.setDestinationEntity(16U);
    msg.groupname.assign("KSDLIICOPXNVTYVJUYFYDVMTFTONGZMDIYVOEKLZCRHCBCQMUJXURQVGQSHFGLRTZVILORSTUCZZUVYYYWOANWWWPKSMRSFWESEFAAHDQBJUABCLTHQPAFNPKXFOAQZM");
    msg.action = 184U;
    msg.grouplist.assign("DCYQJWNCRTFJCWCTPQJBLGKJGGRPYKNJPTROQKDLEUXHUCECZBSNAVKLVLOUMXYHMNSXYJMWTEMMHPZCPALJHAUFEOEZSUECWBGXRFLSRVEWPPAPEMYJGHNHWBSCSARPQZTAZTILTHDKQKBOZFWRUBYGUFTVEAUOTMGVOUZWJADIMBZOBNNIXVHYPJNMBIIVNLUCKNLOIQMFDOQSGWKEXFABIRKXTVDFAR");

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
    msg.setTimeStamp(0.5184517436433497);
    msg.setSource(59887U);
    msg.setSourceEntity(64U);
    msg.setDestination(46925U);
    msg.setDestinationEntity(12U);
    msg.id = 53U;
    msg.range = 0.40444077743977414;

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
    msg.setTimeStamp(0.1672324881818088);
    msg.setSource(27959U);
    msg.setSourceEntity(238U);
    msg.setDestination(11280U);
    msg.setDestinationEntity(230U);
    msg.id = 118U;
    msg.range = 0.7936199666524044;

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
    msg.setTimeStamp(0.02043451605309865);
    msg.setSource(65205U);
    msg.setSourceEntity(241U);
    msg.setDestination(2600U);
    msg.setDestinationEntity(102U);
    msg.id = 243U;
    msg.range = 0.17769939328627138;

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
    msg.setTimeStamp(0.41321557276773224);
    msg.setSource(51733U);
    msg.setSourceEntity(131U);
    msg.setDestination(42159U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("AFLEGWRXZTJHTJFKWRASATVMPJDXVWRTVONYOWPTEUJEBNGUSQYCAEOUNIKZDPQUPICDVBINKGLDZJDQYFSMNBJCZNXBAILCENOSYPQUPTLUBDYC");
    msg.lat = 0.23594960390459396;
    msg.lon = 0.11061880579042893;
    msg.depth = 0.42244336547186734;
    msg.query_channel = 186U;
    msg.reply_channel = 55U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.041182167989620155);
    msg.setSource(30861U);
    msg.setSourceEntity(241U);
    msg.setDestination(8999U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("TVTVUCDKKYQRPYVMWPACIKLAUSJIZDJGIHURRRXZZLGOJDTZGMLYSPOSFTRCYPPMYNBESMMLXHRZIBDOOWJWRHVDHXIBKQWFLTFUAPQTUCNXSDLYGLZITHDEZEXSFYGGRVTEIWKGMDDCUQVJHJEBBHTPALRSXHOGBIKKOLUUYSXWNDFFFUEPQBHNSSKBCRQEIMUBYLAFAHQMAVAYZJGOVQVPNZCFONCWJQNCMIMFXBXTQJNGEZXOCVWJNAE");
    msg.lat = 0.1339979732130515;
    msg.lon = 0.9922661652252964;
    msg.depth = 0.9726567558593661;
    msg.query_channel = 240U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 21U;

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
    msg.setTimeStamp(0.050351857747688356);
    msg.setSource(10334U);
    msg.setSourceEntity(213U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(142U);
    msg.beacon.assign("IYLIDHGNODUQBRREFSPHTLUBYOSEIJOBHMOMGXVKTFPHYLEMTURFCWOUWPDLAGQJMYHDJPGASFTCAYNTMYJUITXNSGNZBRBRBCVTRELXLHWUBNBLAUKZCVKRCZSZDALZYDDCMWAS");
    msg.lat = 0.07463515221963879;
    msg.lon = 0.8155771713151378;
    msg.depth = 0.17970447176942372;
    msg.query_channel = 121U;
    msg.reply_channel = 190U;
    msg.transponder_delay = 172U;

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
    msg.setTimeStamp(0.5644425679478425);
    msg.setSource(22144U);
    msg.setSourceEntity(42U);
    msg.setDestination(28203U);
    msg.setDestinationEntity(183U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.9252544831970111);
    msg.setSource(1388U);
    msg.setSourceEntity(210U);
    msg.setDestination(30152U);
    msg.setDestinationEntity(43U);
    msg.op = 167U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QTPFDYAUGQBDGCTQVNGDSQNBJQJGZAAOMCYDALMXAYP");
    tmp_msg_0.lat = 0.22572435188906603;
    tmp_msg_0.lon = 0.12311591188549964;
    tmp_msg_0.depth = 0.07098556473999207;
    tmp_msg_0.query_channel = 83U;
    tmp_msg_0.reply_channel = 122U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.4841842057253589);
    msg.setSource(50443U);
    msg.setSourceEntity(120U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(161U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.0076453786003156665);
    msg.setSource(63072U);
    msg.setSourceEntity(76U);
    msg.setDestination(1161U);
    msg.setDestinationEntity(27U);
    IMC::AcousticMessage tmp_msg_0;
    IMC::SmsState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 301446661U;
    tmp_tmp_msg_0_0.state = 149U;
    tmp_tmp_msg_0_0.error.assign("ZQYKUAETURROCKUKZSBNFRVAFXINDSJIYMJSAFZTVYDATCBPQFWZTATFQVTPFLEHUYCCOJSOELDADTBJRLPGURNWBQWXNSCLBFIMRTMRYPCZEHALHHCVO");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.66788275574507);
    msg.setSource(20419U);
    msg.setSourceEntity(116U);
    msg.setDestination(22349U);
    msg.setDestinationEntity(203U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 136U;
    tmp_msg_0.file.assign("UKDLATTNGARTRFVIIEHIZGQQDAPEVKCTBFYBVGOPSIEMAOKWQJZBUZNGUZHOAPNSXPZXWVXDVZTYNRIYHFEKLZZGHDLOCZAGHVDXYMFHYMXKNMQFYEQHUSIAOYLUJJGFMTCWGBCNIEWMXMSRTBPREUXOYWBOLDLYPJPUSMFBQROXGLUSSAHDJXQRN");
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
    msg.setTimeStamp(0.5182363765376552);
    msg.setSource(55965U);
    msg.setSourceEntity(182U);
    msg.setDestination(31329U);
    msg.setDestinationEntity(58U);
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.8278549933324223;
    tmp_msg_0.ay_cmd = 0.31152186912443836;
    tmp_msg_0.az_cmd = 0.5721258996719778;
    tmp_msg_0.ax_des = 0.07627616199793585;
    tmp_msg_0.ay_des = 0.6566309624502362;
    tmp_msg_0.az_des = 0.7785987017704339;
    tmp_msg_0.virt_err_x = 0.6405292835854401;
    tmp_msg_0.virt_err_y = 0.12719322572961256;
    tmp_msg_0.virt_err_z = 0.8900908031086624;
    tmp_msg_0.surf_fdbk_x = 0.3931920084787861;
    tmp_msg_0.surf_fdbk_y = 0.3281276341466479;
    tmp_msg_0.surf_fdbk_z = 0.5568851135560346;
    tmp_msg_0.surf_unkn_x = 0.6360469952809455;
    tmp_msg_0.surf_unkn_y = 0.10387890471791639;
    tmp_msg_0.surf_unkn_z = 0.8310674976354742;
    tmp_msg_0.ss_x = 0.21357868860146545;
    tmp_msg_0.ss_y = 0.8207653537926272;
    tmp_msg_0.ss_z = 0.9451946967567434;
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
    msg.setTimeStamp(0.43477471804487733);
    msg.setSource(59797U);
    msg.setSourceEntity(106U);
    msg.setDestination(32658U);
    msg.setDestinationEntity(162U);
    msg.op = 12U;
    msg.system.assign("FVVYXJFZAQKKWVDCNURMXNNEOVUQBJYRHLAMOFHUSGTZAWIREYWECKHMSXZE");
    msg.range = 0.6773348736492001;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("QUOCLOLHWPEZEYGDSWAYMUAFETKVJOMSYKWURNIAM");
    tmp_msg_0.formation_name.assign("ZKTVUGIHDCEPDBRNEOEOASNVMAXPRQUVPBJLBUVXRKLMCDAKYLEIFMUYHIUAPQUXQXBFDPAIBXDZFFXAQQVGZVZQEVPIQOCGBTAQIOSTDL");
    tmp_msg_0.plan_id.assign("UAXJTHJJLMIIDSWVRRXSUEFWZRBGVHUOWTSPDMDSFNEERKZORZEWMQZJCKPFDCVTIIFBPJAYJUMPAUPOYYBSWNGGILAANNBEXSKYDNBTTHMYYXUQKXHAGCFNRVCHHWIFWZCLPACNINRYVJTOQUZKRQZCXANTKIOQVFCSAMZTHFWPBYHVOSLGUCBILKFDOBQPQBMULTEQJDKLOEXJDDWLOHLMONKUHDVEJ");
    tmp_msg_0.description.assign("UHRBSWUQSQRPZJPDQAUBHKPOLYMCUDKSV");
    tmp_msg_0.leader_speed = 0.31175391176623957;
    tmp_msg_0.leader_bank_lim = 0.46603732900460937;
    tmp_msg_0.pos_sim_err_lim = 0.6705496955971962;
    tmp_msg_0.pos_sim_err_wrn = 0.8579442699539381;
    tmp_msg_0.pos_sim_err_timeout = 53678U;
    tmp_msg_0.converg_max = 0.7049513916413929;
    tmp_msg_0.converg_timeout = 21934U;
    tmp_msg_0.comms_timeout = 45974U;
    tmp_msg_0.turb_lim = 0.13987923605035468;
    tmp_msg_0.custom.assign("NCGCYUIZRVULBKYHGUZFUMYSWITPHQEQYYLDLJCAOUWBPJMXIRTENSOPKMHJQLOIRGEGYEFSDYPFLDEZNJQWKLFGKRXIWGHBIQXHUHOAXKMTTMCBHJSNNONADIWQVXWRWQNKSGDDTMZCEUCYUCWAXLLKWOLSQXATJN");
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
    msg.setTimeStamp(0.7132280247509213);
    msg.setSource(58550U);
    msg.setSourceEntity(72U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(160U);
    msg.op = 231U;
    msg.system.assign("CIZRRNLGRQJJAEMRMXZYVQTDKLAZDKPRCKQJRENPJTWHWZBKONUFZHMQTPGFJGOLEMNWRUICXHQXBKVAQMNWDWGTSVWDPPXOSRAOLWDGOIBDFIUFQKDVPLWIBJAV");
    msg.range = 0.802215829152585;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.041008323517431666);
    msg.setSource(20524U);
    msg.setSourceEntity(36U);
    msg.setDestination(44028U);
    msg.setDestinationEntity(125U);
    msg.op = 54U;
    msg.system.assign("KEHQJMSWGLDORMIMNUVTORXRHPHEKXLBWCCNGECBBXUESARXGOARYMMUTINZVHTNHUSWDJRABUXYXULZVQHIPJNFJDENKQZVJTVOZPXCSZADAIOKUMOFRFUTXRAWJYSYTHLZBUGFBCPIDADBGGPYCGTHEMFLSWIYKSAIBCAOIPOYYGQYZLERPZQQOZAQKOFVDFDPLVLQBWVNRJGNEJWDIEGPV");
    msg.range = 0.5137027693758167;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 118U;
    tmp_msg_0.htime = 0.26586446543670483;
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
    msg.setTimeStamp(0.17567741666861025);
    msg.setSource(40043U);
    msg.setSourceEntity(206U);
    msg.setDestination(25727U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.8589852341443007);
    msg.setSource(37095U);
    msg.setSourceEntity(214U);
    msg.setDestination(26513U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.36876441014540784);
    msg.setSource(6780U);
    msg.setSourceEntity(129U);
    msg.setDestination(23653U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.6264127316934475);
    msg.setSource(22732U);
    msg.setSourceEntity(210U);
    msg.setDestination(29343U);
    msg.setDestinationEntity(48U);
    msg.list.assign("YLASDNQHOTINJEJHOALOZZWATEDTAPTFDPIQVJFZCHSRIMFGMSACYEBKSPRJBCFNMYCJHDJIOSIPFYWIZFBRUTWRGNMHSPGRVQGSNMWDNDXYABOPNNVDZYTMDZLSOMEWCLUCGWXGIUHVNKAVTOHXJCBZEBREPKGHEFYLUBPAUB");

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
    msg.setTimeStamp(0.1984078036977508);
    msg.setSource(64009U);
    msg.setSourceEntity(92U);
    msg.setDestination(50808U);
    msg.setDestinationEntity(94U);
    msg.list.assign("LBIGGRXTJDKXQGKZUSHZZNRMJODVFZNARAERWWHMEOSCBYEUKRNNOEWWOTTMFIQRPSTPLWXRHDJAZCTWASIZAMIXRJDJOHXJNBOUVNXDWVVIPMTSISVKTHLFJBHJQAQKYFCDLXQPIFYDUMMAQQTAEAOUFCIHGCELWQNAKYXNVGBYPPTHLIHCJSBYKOVT");

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
    msg.setTimeStamp(0.10554003112552013);
    msg.setSource(60699U);
    msg.setSourceEntity(176U);
    msg.setDestination(54997U);
    msg.setDestinationEntity(59U);
    msg.list.assign("XKXZKNTTNWBYUBDAJKPGMVGNIMHJBZZXJXVLWHHXTLCYBRGUVSWPMMQEVRUOFZMWPLTBPKLQCCXLCEHMIKOIWGFRKKKLOWGYGZEAESZISPYQAQYDDRFAYDBHCIHZAOJVFZGKFTZTFTOXGRJDCVDSOGIQHSMNEJDEMEQSELSRPNLRUUQTURPFPQCHYXUNSACM");

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
    msg.setTimeStamp(0.023142986118229625);
    msg.setSource(56346U);
    msg.setSourceEntity(174U);
    msg.setDestination(4289U);
    msg.setDestinationEntity(108U);
    msg.value = -22498;

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
    msg.setTimeStamp(0.2937156048089741);
    msg.setSource(28966U);
    msg.setSourceEntity(69U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(235U);
    msg.value = 3344;

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
    msg.setTimeStamp(0.5868004486022356);
    msg.setSource(28125U);
    msg.setSourceEntity(228U);
    msg.setDestination(17947U);
    msg.setDestinationEntity(82U);
    msg.value = -17048;

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
    msg.setTimeStamp(0.9684229466504203);
    msg.setSource(28565U);
    msg.setSourceEntity(100U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(200U);
    msg.value = 0.9547527398643175;

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
    msg.setTimeStamp(0.18810833751563294);
    msg.setSource(50098U);
    msg.setSourceEntity(241U);
    msg.setDestination(55574U);
    msg.setDestinationEntity(94U);
    msg.value = 0.43359576303243796;

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
    msg.setTimeStamp(0.6249708521187096);
    msg.setSource(9899U);
    msg.setSourceEntity(25U);
    msg.setDestination(28312U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5291973708213776;

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
    msg.setTimeStamp(0.4582447189047266);
    msg.setSource(40624U);
    msg.setSourceEntity(67U);
    msg.setDestination(16607U);
    msg.setDestinationEntity(54U);
    msg.value = 0.1147436314630138;

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
    msg.setTimeStamp(0.05779471050996121);
    msg.setSource(37232U);
    msg.setSourceEntity(241U);
    msg.setDestination(47509U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5048237030130125;

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
    msg.setTimeStamp(0.6980013751502693);
    msg.setSource(31665U);
    msg.setSourceEntity(176U);
    msg.setDestination(2243U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3960669748456941;

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
    msg.setTimeStamp(0.3008931044191935);
    msg.setSource(58341U);
    msg.setSourceEntity(138U);
    msg.setDestination(63114U);
    msg.setDestinationEntity(225U);
    msg.validity = 19967U;
    msg.type = 158U;
    msg.utc_year = 28074U;
    msg.utc_month = 180U;
    msg.utc_day = 245U;
    msg.utc_time = 0.6878125617814279;
    msg.lat = 0.6247622160431949;
    msg.lon = 0.9346678366119363;
    msg.height = 0.22168051749528128;
    msg.satellites = 129U;
    msg.cog = 0.28065428082120736;
    msg.sog = 0.6017742459740189;
    msg.hdop = 0.8098684042302976;
    msg.vdop = 0.8245703763029414;
    msg.hacc = 0.0740737205247447;
    msg.vacc = 0.20490461988615416;

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
    msg.setTimeStamp(0.2363314982379362);
    msg.setSource(28008U);
    msg.setSourceEntity(158U);
    msg.setDestination(42233U);
    msg.setDestinationEntity(127U);
    msg.validity = 2432U;
    msg.type = 95U;
    msg.utc_year = 21980U;
    msg.utc_month = 89U;
    msg.utc_day = 203U;
    msg.utc_time = 0.36458972102449594;
    msg.lat = 0.17103056621803214;
    msg.lon = 0.9622711554743336;
    msg.height = 0.784022449868472;
    msg.satellites = 113U;
    msg.cog = 0.3940678340847439;
    msg.sog = 0.25941233534993224;
    msg.hdop = 0.7696847314525787;
    msg.vdop = 0.30015316416429527;
    msg.hacc = 0.3073058965094312;
    msg.vacc = 0.6120096392029114;

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
    msg.setTimeStamp(0.18352420213246534);
    msg.setSource(44238U);
    msg.setSourceEntity(21U);
    msg.setDestination(15870U);
    msg.setDestinationEntity(136U);
    msg.validity = 31180U;
    msg.type = 41U;
    msg.utc_year = 3912U;
    msg.utc_month = 56U;
    msg.utc_day = 203U;
    msg.utc_time = 0.3171583422367392;
    msg.lat = 0.9774751556622429;
    msg.lon = 0.36331305905563405;
    msg.height = 0.7287010992577262;
    msg.satellites = 116U;
    msg.cog = 0.7774119785546358;
    msg.sog = 0.28914791010285656;
    msg.hdop = 0.2956040494400596;
    msg.vdop = 0.7600209399480052;
    msg.hacc = 0.7128040352605673;
    msg.vacc = 0.5929671012358032;

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
    msg.setTimeStamp(0.6595892392079621);
    msg.setSource(12334U);
    msg.setSourceEntity(136U);
    msg.setDestination(30935U);
    msg.setDestinationEntity(122U);
    msg.time = 0.09405636691659269;
    msg.phi = 0.6156526017850935;
    msg.theta = 0.6154725192671245;
    msg.psi = 0.5207496741433225;
    msg.psi_magnetic = 0.6634958362202207;

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
    msg.setTimeStamp(0.8669983267766574);
    msg.setSource(17140U);
    msg.setSourceEntity(193U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(242U);
    msg.time = 0.40879891704768234;
    msg.phi = 0.6146850890817402;
    msg.theta = 0.004066620233350582;
    msg.psi = 0.042969596835215396;
    msg.psi_magnetic = 0.8627699341979516;

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
    msg.setTimeStamp(0.9434656008575865);
    msg.setSource(36499U);
    msg.setSourceEntity(172U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(18U);
    msg.time = 0.34730384073105025;
    msg.phi = 0.8086788703463884;
    msg.theta = 0.48639360775355667;
    msg.psi = 0.49180070419176014;
    msg.psi_magnetic = 0.04554416227615521;

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
    msg.setTimeStamp(0.7152793102439423);
    msg.setSource(32718U);
    msg.setSourceEntity(27U);
    msg.setDestination(54389U);
    msg.setDestinationEntity(186U);
    msg.time = 0.9448260389675255;
    msg.x = 0.9654579626037888;
    msg.y = 0.16733866665125374;
    msg.z = 0.9133064343456299;
    msg.timestep = 0.383567577299589;

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
    msg.setTimeStamp(0.3217878453825286);
    msg.setSource(53471U);
    msg.setSourceEntity(104U);
    msg.setDestination(27705U);
    msg.setDestinationEntity(180U);
    msg.time = 0.4838695321824561;
    msg.x = 0.1872593900967603;
    msg.y = 0.9136004847348433;
    msg.z = 0.9597777729434191;
    msg.timestep = 0.5893581204293771;

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
    msg.setTimeStamp(0.47762859010024794);
    msg.setSource(47929U);
    msg.setSourceEntity(120U);
    msg.setDestination(2850U);
    msg.setDestinationEntity(144U);
    msg.time = 0.49693413825659194;
    msg.x = 0.3491580785162284;
    msg.y = 0.4765813184159241;
    msg.z = 0.3118220655470062;
    msg.timestep = 0.2875806936485992;

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
    msg.setTimeStamp(0.20059357092824392);
    msg.setSource(18046U);
    msg.setSourceEntity(191U);
    msg.setDestination(1147U);
    msg.setDestinationEntity(147U);
    msg.time = 0.31677330950258253;
    msg.x = 0.7688358090791856;
    msg.y = 0.6344743223192446;
    msg.z = 0.5733087320234728;

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
    msg.setTimeStamp(0.9540885177526263);
    msg.setSource(8385U);
    msg.setSourceEntity(171U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(67U);
    msg.time = 0.5362927236735257;
    msg.x = 0.99790733260868;
    msg.y = 0.43140423316093435;
    msg.z = 0.0402564244551028;

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
    msg.setTimeStamp(0.5709430260698829);
    msg.setSource(10715U);
    msg.setSourceEntity(189U);
    msg.setDestination(41225U);
    msg.setDestinationEntity(68U);
    msg.time = 0.50920162347023;
    msg.x = 0.9907904354143683;
    msg.y = 0.43857638283476164;
    msg.z = 0.3029826245492214;

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
    msg.setTimeStamp(0.5685729846718406);
    msg.setSource(32911U);
    msg.setSourceEntity(11U);
    msg.setDestination(26777U);
    msg.setDestinationEntity(144U);
    msg.time = 0.005871400613506217;
    msg.x = 0.14000611326930357;
    msg.y = 0.43758732916757925;
    msg.z = 0.16623848244961648;

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
    msg.setTimeStamp(0.4494378115955271);
    msg.setSource(38847U);
    msg.setSourceEntity(180U);
    msg.setDestination(47597U);
    msg.setDestinationEntity(13U);
    msg.time = 0.5204702347289114;
    msg.x = 0.7608564797140202;
    msg.y = 0.8947047077306811;
    msg.z = 0.14668408481307715;

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
    msg.setTimeStamp(0.4190306339999098);
    msg.setSource(55071U);
    msg.setSourceEntity(20U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(156U);
    msg.time = 0.867897556538502;
    msg.x = 0.9949119977942901;
    msg.y = 0.8735733297053843;
    msg.z = 0.1421789344424692;

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
    msg.setTimeStamp(0.8945637701063772);
    msg.setSource(58631U);
    msg.setSourceEntity(88U);
    msg.setDestination(41799U);
    msg.setDestinationEntity(157U);
    msg.time = 0.8275905171186935;
    msg.x = 0.13586144259600974;
    msg.y = 0.7456953541256323;
    msg.z = 0.8801646997467535;

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
    msg.setTimeStamp(0.1044733157337141);
    msg.setSource(39196U);
    msg.setSourceEntity(124U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(46U);
    msg.time = 0.8756902599000156;
    msg.x = 0.19889732929589465;
    msg.y = 0.6459511240590441;
    msg.z = 0.07443735210916025;

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
    msg.setTimeStamp(0.6084836658060225);
    msg.setSource(15197U);
    msg.setSourceEntity(96U);
    msg.setDestination(6608U);
    msg.setDestinationEntity(173U);
    msg.time = 0.16484982421854144;
    msg.x = 0.7381996566203913;
    msg.y = 0.09168674350176265;
    msg.z = 0.5930040657507526;

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
    msg.setTimeStamp(0.7002748769859611);
    msg.setSource(2838U);
    msg.setSourceEntity(69U);
    msg.setDestination(27670U);
    msg.setDestinationEntity(161U);
    msg.validity = 220U;
    msg.x = 0.2859227353975745;
    msg.y = 0.9230115945932795;
    msg.z = 0.49740224965387725;

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
    msg.setTimeStamp(0.6818719450852018);
    msg.setSource(65426U);
    msg.setSourceEntity(97U);
    msg.setDestination(19474U);
    msg.setDestinationEntity(240U);
    msg.validity = 185U;
    msg.x = 0.5844073916619381;
    msg.y = 0.35112774453346174;
    msg.z = 0.5427928467522571;

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
    msg.setTimeStamp(0.23639792584775354);
    msg.setSource(40477U);
    msg.setSourceEntity(42U);
    msg.setDestination(54764U);
    msg.setDestinationEntity(169U);
    msg.validity = 9U;
    msg.x = 0.4426939177751663;
    msg.y = 0.5239332205400952;
    msg.z = 0.3272325605463704;

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
    msg.setTimeStamp(0.004020913442300711);
    msg.setSource(27149U);
    msg.setSourceEntity(113U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(72U);
    msg.validity = 3U;
    msg.x = 0.7939746057934205;
    msg.y = 0.6478395294109154;
    msg.z = 0.8104518541700446;

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
    msg.setTimeStamp(0.6492010717657748);
    msg.setSource(31778U);
    msg.setSourceEntity(247U);
    msg.setDestination(21853U);
    msg.setDestinationEntity(236U);
    msg.validity = 251U;
    msg.x = 0.648763359527486;
    msg.y = 0.8241700656833983;
    msg.z = 0.8036568953655067;

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
    msg.setTimeStamp(0.3123964751607169);
    msg.setSource(54579U);
    msg.setSourceEntity(76U);
    msg.setDestination(2214U);
    msg.setDestinationEntity(47U);
    msg.validity = 65U;
    msg.x = 0.6209992390034548;
    msg.y = 0.27942563285925526;
    msg.z = 0.053913347977777026;

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
    msg.setTimeStamp(0.8947966000610313);
    msg.setSource(57973U);
    msg.setSourceEntity(132U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(83U);
    msg.time = 0.8989361834246499;
    msg.x = 0.17327197165146835;
    msg.y = 0.02513954065093682;
    msg.z = 0.09323718899334221;

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
    msg.setTimeStamp(0.43749340373953494);
    msg.setSource(42100U);
    msg.setSourceEntity(34U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(3U);
    msg.time = 0.2903481501810705;
    msg.x = 0.8903068554815062;
    msg.y = 0.11362493749413694;
    msg.z = 0.7189798171500419;

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
    msg.setTimeStamp(0.41315874784610473);
    msg.setSource(54680U);
    msg.setSourceEntity(199U);
    msg.setDestination(13502U);
    msg.setDestinationEntity(174U);
    msg.time = 0.8475938027401267;
    msg.x = 0.462222269014409;
    msg.y = 0.7235301184603703;
    msg.z = 0.4182554553468544;

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
    msg.setTimeStamp(0.551060984466205);
    msg.setSource(23771U);
    msg.setSourceEntity(210U);
    msg.setDestination(56244U);
    msg.setDestinationEntity(184U);
    msg.validity = 58U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7525210023053137;
    tmp_msg_0.y = 0.2904319552651703;
    tmp_msg_0.z = 0.44234881664709846;
    tmp_msg_0.phi = 0.9379140294534434;
    tmp_msg_0.theta = 0.1985854938069419;
    tmp_msg_0.psi = 0.0023178078000472002;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5347419068684657;

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
    msg.setTimeStamp(0.6809500121603619);
    msg.setSource(26629U);
    msg.setSourceEntity(126U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(142U);
    msg.validity = 203U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7595635785319994;
    tmp_msg_0.y = 0.03487044708247866;
    tmp_msg_0.z = 0.8463315045890266;
    tmp_msg_0.phi = 0.06288337878455064;
    tmp_msg_0.theta = 0.7373095875725193;
    tmp_msg_0.psi = 0.5659889642583991;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.37341386307624524;

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
    msg.setTimeStamp(0.8500801673467626);
    msg.setSource(63902U);
    msg.setSourceEntity(129U);
    msg.setDestination(41023U);
    msg.setDestinationEntity(215U);
    msg.validity = 155U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.585111240300339;
    tmp_msg_0.beam_height = 0.23650552304606476;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3472387105477439;

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
    msg.setTimeStamp(0.5889374486329151);
    msg.setSource(37296U);
    msg.setSourceEntity(240U);
    msg.setDestination(46842U);
    msg.setDestinationEntity(238U);
    msg.value = 0.13585105940380704;

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
    msg.setTimeStamp(0.3642954425372604);
    msg.setSource(6077U);
    msg.setSourceEntity(68U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7426556914125548;

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
    msg.setTimeStamp(0.6085068378811163);
    msg.setSource(35916U);
    msg.setSourceEntity(236U);
    msg.setDestination(31808U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8795254832830934;

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
    msg.setTimeStamp(0.9142678583178259);
    msg.setSource(26428U);
    msg.setSourceEntity(88U);
    msg.setDestination(63935U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8782759700269318;

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
    msg.setTimeStamp(0.6622754067433824);
    msg.setSource(25900U);
    msg.setSourceEntity(44U);
    msg.setDestination(59888U);
    msg.setDestinationEntity(8U);
    msg.value = 0.830566846033051;

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
    msg.setTimeStamp(0.47092810728233425);
    msg.setSource(19941U);
    msg.setSourceEntity(136U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5735346128645273;

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
    msg.setTimeStamp(0.37440163957242867);
    msg.setSource(51766U);
    msg.setSourceEntity(191U);
    msg.setDestination(5723U);
    msg.setDestinationEntity(105U);
    msg.value = 0.24852614362944103;

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
    msg.setTimeStamp(0.6585245637209768);
    msg.setSource(57302U);
    msg.setSourceEntity(246U);
    msg.setDestination(7386U);
    msg.setDestinationEntity(243U);
    msg.value = 0.6319196504274555;

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
    msg.setTimeStamp(0.07856215592387372);
    msg.setSource(23257U);
    msg.setSourceEntity(123U);
    msg.setDestination(17017U);
    msg.setDestinationEntity(146U);
    msg.value = 0.2857617796969423;

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
    msg.setTimeStamp(0.750972737687049);
    msg.setSource(57759U);
    msg.setSourceEntity(60U);
    msg.setDestination(30281U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7336278057758486;

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
    msg.setTimeStamp(0.5937613537362788);
    msg.setSource(41073U);
    msg.setSourceEntity(144U);
    msg.setDestination(25499U);
    msg.setDestinationEntity(213U);
    msg.value = 0.4426831268953063;

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
    msg.setTimeStamp(0.13799413094129231);
    msg.setSource(48120U);
    msg.setSourceEntity(22U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(245U);
    msg.value = 0.4976310480000792;

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
    msg.setTimeStamp(0.1651781704034191);
    msg.setSource(9976U);
    msg.setSourceEntity(250U);
    msg.setDestination(26381U);
    msg.setDestinationEntity(152U);
    msg.value = 0.2339082634617362;

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
    msg.setTimeStamp(0.9101573956326872);
    msg.setSource(23560U);
    msg.setSourceEntity(66U);
    msg.setDestination(24593U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7811205254680221;

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
    msg.setTimeStamp(0.24351532411531385);
    msg.setSource(22137U);
    msg.setSourceEntity(122U);
    msg.setDestination(28818U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5419773859125087;

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
    msg.setTimeStamp(0.40185723330194867);
    msg.setSource(23534U);
    msg.setSourceEntity(167U);
    msg.setDestination(53079U);
    msg.setDestinationEntity(152U);
    msg.value = 0.5508781939987717;

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
    msg.setTimeStamp(0.02207628029707187);
    msg.setSource(8320U);
    msg.setSourceEntity(131U);
    msg.setDestination(61165U);
    msg.setDestinationEntity(93U);
    msg.value = 0.003080043137270061;

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
    msg.setTimeStamp(0.7027227246324035);
    msg.setSource(52260U);
    msg.setSourceEntity(34U);
    msg.setDestination(54870U);
    msg.setDestinationEntity(55U);
    msg.value = 0.310459100254713;

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
    msg.setTimeStamp(0.5902740461799451);
    msg.setSource(41345U);
    msg.setSourceEntity(130U);
    msg.setDestination(27902U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7188692576699717;

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
    msg.setTimeStamp(0.6528745526103072);
    msg.setSource(6915U);
    msg.setSourceEntity(159U);
    msg.setDestination(22884U);
    msg.setDestinationEntity(185U);
    msg.value = 0.3678050663623519;

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
    msg.setTimeStamp(0.6295581325877891);
    msg.setSource(52138U);
    msg.setSourceEntity(234U);
    msg.setDestination(51191U);
    msg.setDestinationEntity(158U);
    msg.value = 0.3333000734503364;

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
    msg.setTimeStamp(0.6291506761527419);
    msg.setSource(41775U);
    msg.setSourceEntity(60U);
    msg.setDestination(33718U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4880157598115016;

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
    msg.setTimeStamp(0.5236195464527955);
    msg.setSource(23241U);
    msg.setSourceEntity(103U);
    msg.setDestination(35929U);
    msg.setDestinationEntity(118U);
    msg.value = 0.589760731485374;

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
    msg.setTimeStamp(0.9126600559130426);
    msg.setSource(32771U);
    msg.setSourceEntity(232U);
    msg.setDestination(38442U);
    msg.setDestinationEntity(199U);
    msg.value = 0.6227317376526109;

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
    msg.setTimeStamp(0.3811735353493729);
    msg.setSource(40183U);
    msg.setSourceEntity(53U);
    msg.setDestination(42645U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.03443506047202394;
    msg.speed = 0.5312988439569061;
    msg.turbulence = 0.9415652732480629;

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
    msg.setTimeStamp(0.4251265471628113);
    msg.setSource(2611U);
    msg.setSourceEntity(229U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(96U);
    msg.direction = 0.4203838047570796;
    msg.speed = 0.12678177712278704;
    msg.turbulence = 0.5974764737784701;

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
    msg.setTimeStamp(0.6734413186277244);
    msg.setSource(46813U);
    msg.setSourceEntity(151U);
    msg.setDestination(20577U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.8152448822968288;
    msg.speed = 0.2548283617307522;
    msg.turbulence = 0.838508092339668;

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
    msg.setTimeStamp(0.9535808662836865);
    msg.setSource(26138U);
    msg.setSourceEntity(174U);
    msg.setDestination(28925U);
    msg.setDestinationEntity(139U);
    msg.value = 0.41547534852883405;

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
    msg.setTimeStamp(0.8854386566373595);
    msg.setSource(40002U);
    msg.setSourceEntity(125U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(110U);
    msg.value = 0.17600289962199123;

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
    msg.setTimeStamp(0.8312188328425734);
    msg.setSource(49607U);
    msg.setSourceEntity(91U);
    msg.setDestination(21329U);
    msg.setDestinationEntity(73U);
    msg.value = 0.05829661141847342;

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
    msg.setTimeStamp(0.9629092775741728);
    msg.setSource(56846U);
    msg.setSourceEntity(218U);
    msg.setDestination(36479U);
    msg.setDestinationEntity(166U);
    msg.value.assign("ETOUQVFLLBKWEOULAVCUMHSYOKEIXVYCTKSOTHGDAE");

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
    msg.setTimeStamp(0.5429534832312332);
    msg.setSource(39785U);
    msg.setSourceEntity(126U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(130U);
    msg.value.assign("URSZMVCDRJCZQMQYPLHIDTMCTJWQSZRTIRBALKUIBPLYBFYESKVQPNQWDSWZRFAZBTUUNDIHJOKEFDXPNPDCSSWGYCHMEYTEXSEFQYHFXM");

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
    msg.setTimeStamp(0.9219888772769579);
    msg.setSource(42813U);
    msg.setSourceEntity(208U);
    msg.setDestination(47045U);
    msg.setDestinationEntity(3U);
    msg.value.assign("VWVUMIBQEDXKVXBILZHSJCVWRFXISFRDBBGIGPQKQISVFATBJYYKYUOMTKJZN");

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
    msg.setTimeStamp(0.20710090121189006);
    msg.setSource(56959U);
    msg.setSourceEntity(156U);
    msg.setDestination(57653U);
    msg.setDestinationEntity(186U);
    const char tmp_msg_0[] = {-41, 11, -121, -26, -54, 107, 111, 60, -92, 28, -90, 23, 17, 22, 59, 36, -74, 10, -50, -25, 52, 86, 109, 84, 97, -37, -105, 89, -120, 95, -111, 19, -55, 60, 15, 105, 73, -59, 66, -20, -3, -82, 51, -99, -36, 42, -100, 75, 110, 100, -8, -40, 78, 111, -27, 5, 14, -94};
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
    msg.setTimeStamp(0.42477874224092205);
    msg.setSource(56712U);
    msg.setSourceEntity(132U);
    msg.setDestination(42918U);
    msg.setDestinationEntity(162U);
    const char tmp_msg_0[] = {88, 68, 91, -3, -38, -102, -9, 6, 45, -108, 45, -46, 109, 65, -54, 52, 113, -9, 29, 61, 110, -12, -109, -30, 40, 36, 2, -18, 34, -37, -2, 66, 84, 114, 124, 122, 31, -60, -77, 45, -76, 46, 73, -2, -57, 116, 91, 87, 38, 68, -115, -43, 121, 40, -113, 109, 28, 15, -110, 125, -9, 116, -126, 36, -18, -45, -102, -76, 92, 4, 106, -118, 92, 33, -46, 31, -20, 28, -85, 110, -64, -23, 120, -24, 18, 39, -22, -4, 82, 1, -3, 66, 119, 5, -105, 68, 77, -58, 13, -31, -16, 49, -31, -88, 67, 95, -10, -56, -38, -20, -6, -34, 56, 9, -21, -82, 22, 88, -11, 87, 76, 84, 11, -65, 52, 25, 86, -54, -50, -20, -93, -62, 0, 77, 98, -41};
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
    msg.setTimeStamp(0.8978393725515366);
    msg.setSource(38916U);
    msg.setSourceEntity(172U);
    msg.setDestination(43588U);
    msg.setDestinationEntity(147U);
    const char tmp_msg_0[] = {82, -74, -3, -32, -80, 20, -112, 114, 38, 77, 115, 14, -80, 83, 56, -117, 12, 80, -21, 53, -34, 88, 114, 74, 49, -108, -3, 27, -19, -9, -33, -46, 104, -88, 49, 17, -72, 39, -20, 106, 97, -6, 55, -115, 41, 34, 95, 119, -107, -3, -30, 1, -45, 6, 29, 57, 125, -13, -57, 100, -100, -43, -14, 80, -71, -18, 91, 27, -65, 125, 45, -31, 72, 14, -42, 52, -67, -75, 42, -119, -49, -18, -70, 110, 20, -128, -42, -127, -15, 78, -11, -53, 90, 52, 63, -8, -93, -86, -47, 64, -67, -20, -6, -101, 13, -39, 69, 45, 53, -120, 25, 98, -116, -111, 100, -118, 66, -49, -84, 74, -78, -111, -92, 11, -106, 59, -86, 44, 105, -45, 109, 82, 119, 18, -1, -111, -41, -93, -122, -103, 13, -31, -97, 98, -7, -55, 94, 83, 105, -53, -26, 87, -40, -83, -68, -36, -18, -76, -105, 47, 114, 115, -84, 33, -12, 58, 117, 90, 5, -8, 7, -64, 113, 8, 80, 46, -6, -8, -24, -74, 35, 46, -61, -55, -112, -68, -109, -29, -16, -60, -57, 57, -91, 58, 94, 6, -34, 64, -79, -35, 13, 89, 6, -40, 6, 99, 27, 25, 4, 109, 37, -7, -68, -35, 45, -105, 121, -7, -1, 0, -15, -61, 109, 46, 29, -13, -109, -64, -106, -108, 36, -101, 14, 90, -105, 102, -2, -3, 40, 36, 91, 33, -127, 20};
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
    msg.setTimeStamp(0.8294997803541126);
    msg.setSource(35151U);
    msg.setSourceEntity(223U);
    msg.setDestination(12515U);
    msg.setDestinationEntity(216U);
    msg.type = 148U;
    msg.frequency = 1986221497U;
    msg.min_range = 8520U;
    msg.max_range = 37777U;
    msg.bits_per_point = 77U;
    msg.scale_factor = 0.23134544613252628;
    const char tmp_msg_0[] = {-27, 120, 31, 91, 73, -17, 11, 27, -55, 117, -79, -126, 18, 92, 124, -102, 8, 28, -55, 32, 79, 121, -96, -3, -28, -104, 78, 118, 13, -1, -57, -93, 28, -32, -82, -96, 8, 124, 68, 51, -9, 49, -102, 100, 65, -57, 92, -7, -101, 58, 48, -71, -100, 90, -60, 74, 102, -108, 75, -56, -93, -35, -40, -7, -50, 98, -77, 123, -108, 52, 83, -108, -72, -4, 49, -121, -48, 20, -105, 17, 7, 6, -112, 39, 88, 115, -68, -12, 120, 34, -89, -5, 42, 34, -46, -14, -35, 5, -62, 18, 79, -110, 34, -66, 20, 118, -50, 67, -26, -110, -47, 73, 26, -28, -57, 67, 108, 11, 7, 11, 115, -66, 49, 97, 35, -81, -31, 14, 50, 65, 15, 56, 55};
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
    msg.setTimeStamp(0.0619751279099493);
    msg.setSource(49561U);
    msg.setSourceEntity(129U);
    msg.setDestination(27373U);
    msg.setDestinationEntity(38U);
    msg.type = 35U;
    msg.frequency = 1115158481U;
    msg.min_range = 26036U;
    msg.max_range = 25958U;
    msg.bits_per_point = 195U;
    msg.scale_factor = 0.728039129579218;
    const char tmp_msg_0[] = {-119, 123, -48, -58, -9, -109, -122, 1, -12, 44, -44, -55, -17, -92, -22, 78, -7, -48, 46, -19, -122, -120, -113, -112, -11, 101, -81, -31, -65, -12, 7, 50, 46, -82, -62, 106, 3, -1, -50, 125, -40, 66, 5, 99, 108, 78, -51, -33, 95, 40, 97, -49, 118, -2, 119, 83, 62, -20, -115, -123, -89, -3, 78, 65, -88, 112, 64, -91, 106, 1, 65, 81, 65, 118, -6, -78, -123, 22, -36, -48, -89, 42, -29, 110, 36, 14, -56, -52, -84, 108, 68, 108, -53, -31, 40, 26, 41, 6, -59, 17, 95, 32, -76, 99, -56, 32, 9, 101};
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
    msg.setTimeStamp(0.39516498983080683);
    msg.setSource(38034U);
    msg.setSourceEntity(64U);
    msg.setDestination(42410U);
    msg.setDestinationEntity(24U);
    msg.type = 4U;
    msg.frequency = 3140026759U;
    msg.min_range = 63425U;
    msg.max_range = 19316U;
    msg.bits_per_point = 79U;
    msg.scale_factor = 0.11852174025141304;
    const char tmp_msg_0[] = {97, -114, 34, -52, -93, 5, 6, 70, -84, -89, 49, 117, -8, 0, 49, 35, -2, -54, 113, 68, -127, 108, -114, -77, 57, -85, 79, -2, -108, 17, 110, -56, -66, 99, 37, 28, 66, -123, -95, -55, -50, -128, 14, 90, 66, 4, 7, 115, -8, 29, -3, -67, -128, 43};
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
    msg.setTimeStamp(0.4732694518529036);
    msg.setSource(47072U);
    msg.setSourceEntity(29U);
    msg.setDestination(9132U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.4611841381116636);
    msg.setSource(40542U);
    msg.setSourceEntity(138U);
    msg.setDestination(60490U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.8878240963982637);
    msg.setSource(40148U);
    msg.setSourceEntity(143U);
    msg.setDestination(64753U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.46786158021538704);
    msg.setSource(47102U);
    msg.setSourceEntity(141U);
    msg.setDestination(42629U);
    msg.setDestinationEntity(63U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.8707775041223133);
    msg.setSource(21U);
    msg.setSourceEntity(141U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(42U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.05662878528805637);
    msg.setSource(47821U);
    msg.setSourceEntity(104U);
    msg.setDestination(30536U);
    msg.setDestinationEntity(59U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.6923482833095299);
    msg.setSource(59390U);
    msg.setSourceEntity(149U);
    msg.setDestination(17861U);
    msg.setDestinationEntity(24U);
    msg.value = 0.033889435149721314;
    msg.confidence = 0.5482385696871489;
    msg.opmodes.assign("QVYAASJYNHUJUDGMQPXXHFPTOEZQLDJGNCGUWFALXHJDADUQSRGEYTSEJIDNCNROZVIMFYOKZCUQVBRRWFZCBUFGWSAXVRRNRCXGQEKMPPBKIWPDMZTVXZPOITTEPEUYIODVHQKWPTMCQDEHIUKMKTDWGL");

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
    msg.setTimeStamp(0.16350121347732138);
    msg.setSource(50120U);
    msg.setSourceEntity(179U);
    msg.setDestination(62578U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8654876903620596;
    msg.confidence = 0.09129685745985261;
    msg.opmodes.assign("TNATDHCCQBAXLLHWQCVVJRCXNZJSBQXTQDJKNFIWXISENHEDAOTRKAYPAYVQWKQJGDIQDGPLJKSWRWBZAGKZFMYBYUGYFOQEEOHOHYNJONRKVFPLYPCLTEXNWMNPGMIJMMUZJTZNGOEIBXVOXFITZQGVWFIOVSTMPXKKPUEGJPRMWBULBWUVLWBAHNLSUSSFAXXHDCPUZICTRYZKFGDKRDJCM");

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
    msg.setTimeStamp(0.7415490804955179);
    msg.setSource(32613U);
    msg.setSourceEntity(50U);
    msg.setDestination(34726U);
    msg.setDestinationEntity(182U);
    msg.value = 0.3885947033400978;
    msg.confidence = 0.34336368918202365;
    msg.opmodes.assign("HTTVALAIUAZROYMQHKRGPWRLINOUYSWJDWZLTTJZJCUGPBGFAAKUGMWVDOSROIMYJFJMVUINVFFQCDAKEQKHXWOHEDPNLHTEVPYEAFKXDYYRSRJQOMFPUJHXQODL");

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
    msg.setTimeStamp(0.021573034658944112);
    msg.setSource(40081U);
    msg.setSourceEntity(213U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(122U);
    msg.itow = 791505990U;
    msg.lat = 0.036479720134768856;
    msg.lon = 0.2659031712315797;
    msg.height_ell = 0.283948168445301;
    msg.height_sea = 0.3654891549897621;
    msg.hacc = 0.984082523695372;
    msg.vacc = 0.7187225766699331;
    msg.vel_n = 0.7669029618191524;
    msg.vel_e = 0.4200628452478561;
    msg.vel_d = 0.13999151409281796;
    msg.speed = 0.019318455948460378;
    msg.gspeed = 0.33759083965730774;
    msg.heading = 0.39230007101119346;
    msg.sacc = 0.8898698920728355;
    msg.cacc = 0.7485635243286924;

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
    msg.setTimeStamp(0.9020040979347809);
    msg.setSource(54996U);
    msg.setSourceEntity(147U);
    msg.setDestination(37605U);
    msg.setDestinationEntity(85U);
    msg.itow = 3668742322U;
    msg.lat = 0.23417372647248158;
    msg.lon = 0.5507908922746048;
    msg.height_ell = 0.7239030096328826;
    msg.height_sea = 0.031946799479957155;
    msg.hacc = 0.40176026477205007;
    msg.vacc = 0.44885035056732026;
    msg.vel_n = 0.9792133635170545;
    msg.vel_e = 0.8724208437418024;
    msg.vel_d = 0.6925304074779047;
    msg.speed = 0.23839038732502393;
    msg.gspeed = 0.514544007308939;
    msg.heading = 0.5101522305338673;
    msg.sacc = 0.4460708561950468;
    msg.cacc = 0.33820531480493565;

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
    msg.setTimeStamp(0.5847616959523719);
    msg.setSource(21732U);
    msg.setSourceEntity(99U);
    msg.setDestination(57866U);
    msg.setDestinationEntity(104U);
    msg.itow = 2565032688U;
    msg.lat = 0.7531953217693715;
    msg.lon = 0.8812274232425825;
    msg.height_ell = 0.307027272299054;
    msg.height_sea = 0.9589539957144582;
    msg.hacc = 0.39148065824960676;
    msg.vacc = 0.38070751695167426;
    msg.vel_n = 0.9552441547311626;
    msg.vel_e = 0.3590801938830157;
    msg.vel_d = 0.35345107664092146;
    msg.speed = 0.30957850994378444;
    msg.gspeed = 0.2449770004060141;
    msg.heading = 0.45684568883173093;
    msg.sacc = 0.4637932318254989;
    msg.cacc = 0.8773994435621288;

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
    msg.setTimeStamp(0.5912410075429628);
    msg.setSource(17412U);
    msg.setSourceEntity(221U);
    msg.setDestination(30916U);
    msg.setDestinationEntity(235U);
    msg.id = 29U;
    msg.value = 0.570923720363604;

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
    msg.setTimeStamp(0.5818539614592066);
    msg.setSource(56729U);
    msg.setSourceEntity(33U);
    msg.setDestination(33230U);
    msg.setDestinationEntity(184U);
    msg.id = 208U;
    msg.value = 0.36943859820694924;

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
    msg.setTimeStamp(0.9759843662477788);
    msg.setSource(8849U);
    msg.setSourceEntity(175U);
    msg.setDestination(12874U);
    msg.setDestinationEntity(174U);
    msg.id = 98U;
    msg.value = 0.09512131158863035;

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
    msg.setTimeStamp(0.047404608280562144);
    msg.setSource(28610U);
    msg.setSourceEntity(232U);
    msg.setDestination(23451U);
    msg.setDestinationEntity(159U);
    msg.x = 0.33358733021249065;
    msg.y = 0.3637902828876889;
    msg.z = 0.4714905778563869;
    msg.phi = 0.051946930808118186;
    msg.theta = 0.4288642993356737;
    msg.psi = 0.3006230250933002;

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
    msg.setTimeStamp(0.39091873371070307);
    msg.setSource(44710U);
    msg.setSourceEntity(211U);
    msg.setDestination(60484U);
    msg.setDestinationEntity(55U);
    msg.x = 0.24322573809322612;
    msg.y = 0.6839118051854172;
    msg.z = 0.24864685184709268;
    msg.phi = 0.5524069297726277;
    msg.theta = 0.7991982375095016;
    msg.psi = 0.06074864781574407;

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
    msg.setTimeStamp(0.0804388697261168);
    msg.setSource(37907U);
    msg.setSourceEntity(51U);
    msg.setDestination(18171U);
    msg.setDestinationEntity(193U);
    msg.x = 0.0951215356276156;
    msg.y = 0.24714941901379306;
    msg.z = 0.035600520479472375;
    msg.phi = 0.7473717748826164;
    msg.theta = 0.014714890935403457;
    msg.psi = 0.08671429762211447;

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
    msg.setTimeStamp(0.8465317361848465);
    msg.setSource(7066U);
    msg.setSourceEntity(172U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(161U);
    msg.beam_width = 0.29662312463307683;
    msg.beam_height = 0.6940116325596098;

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
    msg.setTimeStamp(0.4129300961921134);
    msg.setSource(12007U);
    msg.setSourceEntity(146U);
    msg.setDestination(11427U);
    msg.setDestinationEntity(88U);
    msg.beam_width = 0.9489535214774936;
    msg.beam_height = 0.8676599387428902;

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
    msg.setTimeStamp(0.9625265345948409);
    msg.setSource(37523U);
    msg.setSourceEntity(206U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(229U);
    msg.beam_width = 0.024720276611176706;
    msg.beam_height = 0.294361625475311;

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
    msg.setTimeStamp(0.9320714766126643);
    msg.setSource(63142U);
    msg.setSourceEntity(27U);
    msg.setDestination(1257U);
    msg.setDestinationEntity(110U);
    msg.sane = 227U;

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
    msg.setTimeStamp(0.48687520200747725);
    msg.setSource(46348U);
    msg.setSourceEntity(109U);
    msg.setDestination(37312U);
    msg.setDestinationEntity(223U);
    msg.sane = 25U;

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
    msg.setTimeStamp(0.11611831017807861);
    msg.setSource(21377U);
    msg.setSourceEntity(101U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(166U);
    msg.sane = 37U;

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
    msg.setTimeStamp(0.9254332775163556);
    msg.setSource(50579U);
    msg.setSourceEntity(5U);
    msg.setDestination(4998U);
    msg.setDestinationEntity(49U);
    msg.value = 0.8211039372395325;

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
    msg.setTimeStamp(0.053955661136815825);
    msg.setSource(43715U);
    msg.setSourceEntity(122U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(154U);
    msg.value = 0.49092352623436164;

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
    msg.setTimeStamp(0.5473557327644288);
    msg.setSource(58777U);
    msg.setSourceEntity(115U);
    msg.setDestination(23929U);
    msg.setDestinationEntity(199U);
    msg.value = 0.3405341635424102;

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
    msg.setTimeStamp(0.44818178540298304);
    msg.setSource(63546U);
    msg.setSourceEntity(216U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(72U);
    msg.value = 0.09302408042166;

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
    msg.setTimeStamp(0.48211697874343384);
    msg.setSource(41836U);
    msg.setSourceEntity(5U);
    msg.setDestination(50964U);
    msg.setDestinationEntity(121U);
    msg.value = 0.1016108830885285;

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
    msg.setTimeStamp(0.1868659470161158);
    msg.setSource(46370U);
    msg.setSourceEntity(200U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(104U);
    msg.value = 0.9224130648747417;

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
    msg.setTimeStamp(0.02078459786795439);
    msg.setSource(36719U);
    msg.setSourceEntity(196U);
    msg.setDestination(21988U);
    msg.setDestinationEntity(21U);
    msg.value = 0.39962386868440525;

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
    msg.setTimeStamp(0.016969862212640296);
    msg.setSource(29198U);
    msg.setSourceEntity(122U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3109562026412471;

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
    msg.setTimeStamp(0.3636601565675631);
    msg.setSource(10726U);
    msg.setSourceEntity(241U);
    msg.setDestination(3296U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8147592272975852;

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
    msg.setTimeStamp(0.2381777352400346);
    msg.setSource(23031U);
    msg.setSourceEntity(175U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(184U);
    msg.value = 0.23499744593481797;

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
    msg.setTimeStamp(0.35904574747298235);
    msg.setSource(29279U);
    msg.setSourceEntity(19U);
    msg.setDestination(41451U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4507657800449797;

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
    msg.setTimeStamp(0.0730841916936531);
    msg.setSource(8452U);
    msg.setSourceEntity(189U);
    msg.setDestination(24358U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5964495281715234;

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
    msg.setTimeStamp(0.837658753490262);
    msg.setSource(42756U);
    msg.setSourceEntity(217U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(121U);
    msg.id = 151U;
    msg.zoom = 176U;
    msg.action = 248U;

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
    msg.setTimeStamp(0.610835763162366);
    msg.setSource(54207U);
    msg.setSourceEntity(129U);
    msg.setDestination(65242U);
    msg.setDestinationEntity(165U);
    msg.id = 225U;
    msg.zoom = 92U;
    msg.action = 174U;

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
    msg.setTimeStamp(0.35873942129339453);
    msg.setSource(4616U);
    msg.setSourceEntity(5U);
    msg.setDestination(53097U);
    msg.setDestinationEntity(83U);
    msg.id = 118U;
    msg.zoom = 202U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.8651993199650698);
    msg.setSource(30691U);
    msg.setSourceEntity(119U);
    msg.setDestination(44136U);
    msg.setDestinationEntity(8U);
    msg.id = 3U;
    msg.value = 0.41469606257629266;

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
    msg.setTimeStamp(0.18996732457361742);
    msg.setSource(32222U);
    msg.setSourceEntity(222U);
    msg.setDestination(26172U);
    msg.setDestinationEntity(121U);
    msg.id = 187U;
    msg.value = 0.8990511753575257;

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
    msg.setTimeStamp(0.9330888308662205);
    msg.setSource(55521U);
    msg.setSourceEntity(31U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(193U);
    msg.id = 132U;
    msg.value = 0.7196447277140161;

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
    msg.setTimeStamp(0.7418817565509169);
    msg.setSource(33003U);
    msg.setSourceEntity(187U);
    msg.setDestination(15299U);
    msg.setDestinationEntity(136U);
    msg.id = 30U;
    msg.value = 0.9307833979309571;

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
    msg.setTimeStamp(0.5943648578168825);
    msg.setSource(40920U);
    msg.setSourceEntity(47U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(236U);
    msg.id = 204U;
    msg.value = 0.20272184044990804;

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
    msg.setTimeStamp(0.9926980095937752);
    msg.setSource(42425U);
    msg.setSourceEntity(89U);
    msg.setDestination(57749U);
    msg.setDestinationEntity(103U);
    msg.id = 41U;
    msg.value = 0.7294787561891137;

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
    msg.setTimeStamp(0.4126442099031107);
    msg.setSource(31351U);
    msg.setSourceEntity(1U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(215U);
    msg.id = 220U;
    msg.angle = 0.7422953944507938;

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
    msg.setTimeStamp(0.1420668861829204);
    msg.setSource(50943U);
    msg.setSourceEntity(232U);
    msg.setDestination(280U);
    msg.setDestinationEntity(172U);
    msg.id = 155U;
    msg.angle = 0.7156328885764793;

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
    msg.setTimeStamp(0.4176368986031368);
    msg.setSource(7686U);
    msg.setSourceEntity(114U);
    msg.setDestination(14578U);
    msg.setDestinationEntity(90U);
    msg.id = 37U;
    msg.angle = 0.4917259480459706;

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
    msg.setTimeStamp(0.8924281931836939);
    msg.setSource(11555U);
    msg.setSourceEntity(184U);
    msg.setDestination(49411U);
    msg.setDestinationEntity(162U);
    msg.op = 215U;
    msg.actions.assign("LJVBZBXHBJKSRMNDQ");

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
    msg.setTimeStamp(0.019989678509001463);
    msg.setSource(31104U);
    msg.setSourceEntity(85U);
    msg.setDestination(42833U);
    msg.setDestinationEntity(182U);
    msg.op = 162U;
    msg.actions.assign("IVREWPONVQYZVSQIYQGLDENHEPIFYWRURCRNJRNBHNJJPJMBYLCRMMBZKPJBXWHHWGZAMMFLILSXRGSBRMNAHUGWTVKLSYQITKDOYVQCJYFCGJFENXESILTTNKBBTXAIFZQUDPZKDENXJBTVAFMCCUAOTVUYDGNZAMIDQPMSZPGALZDBLIEOEWIEHUTZSJMCWARDWXOPFAOFOTACUGUVWPXSCUOLYJKKDFOQBHFXVKGXYQEGWSHVPLDKTH");

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
    msg.setTimeStamp(0.2843790879588147);
    msg.setSource(22055U);
    msg.setSourceEntity(242U);
    msg.setDestination(19628U);
    msg.setDestinationEntity(234U);
    msg.op = 90U;
    msg.actions.assign("PDBWMXUTJSVFVSNWQMCSOLHHBWWMKCKOEQHFYFDEOACFLQGTUGFJIXEPUVBRRPQAZNADXKDPGZPOKWXIUPGURTHDTQXHDURMBMSCFIISBRFXMPD");

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
    msg.setTimeStamp(0.4815675651256909);
    msg.setSource(43157U);
    msg.setSourceEntity(181U);
    msg.setDestination(57752U);
    msg.setDestinationEntity(30U);
    msg.actions.assign("XMPYWRPPROEXYWAVUIBQVYKPLVKOFQLPPYSFAKDTGNTVLUSZSIEEUPFZKFMNGQLVCRCUELHOSYNJRCCZHDMGKHRTSMZCETXFVAZNBFWEAOHQJKCINRBOLCJHTGXAJINQMPHBHVFIBXZWAJBSVBUOYTLKDJLBYUASFHTGRMLUDRIXYEQPT");

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
    msg.setTimeStamp(0.4924834621647435);
    msg.setSource(61465U);
    msg.setSourceEntity(127U);
    msg.setDestination(28313U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("ZNHMUFHWTRFAYDHQVRXQTQGZKRKNQYEKGTXYBTDYCQVRLIPIQENMWROLVWDTGJHOYBBXWIADVUQLGPUWLAOIKKXDNBRIGPQHQTTSYCXBGEAA");

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
    msg.setTimeStamp(0.6374856557600679);
    msg.setSource(9610U);
    msg.setSourceEntity(229U);
    msg.setDestination(50566U);
    msg.setDestinationEntity(143U);
    msg.actions.assign("NYMUSCXYWFHVHCBNMUZRRYWETFAWXQYHMQMVAOJSFGLGQCHFMPUKUBUZXKN");

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
    msg.setTimeStamp(0.743150524734721);
    msg.setSource(16665U);
    msg.setSourceEntity(172U);
    msg.setDestination(22750U);
    msg.setDestinationEntity(188U);
    msg.button = 42U;
    msg.value = 32U;

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
    msg.setTimeStamp(0.9312741048257076);
    msg.setSource(18509U);
    msg.setSourceEntity(112U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(252U);
    msg.button = 44U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.8500995148990259);
    msg.setSource(33265U);
    msg.setSourceEntity(22U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(114U);
    msg.button = 94U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.9203177526201176);
    msg.setSource(43855U);
    msg.setSourceEntity(188U);
    msg.setDestination(32961U);
    msg.setDestinationEntity(124U);
    msg.op = 9U;
    msg.text.assign("HASDNHEICJPDENSSYMTFLCJCWEJQNSZUCOT");

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
    msg.setTimeStamp(0.6075956127860342);
    msg.setSource(12489U);
    msg.setSourceEntity(98U);
    msg.setDestination(27828U);
    msg.setDestinationEntity(108U);
    msg.op = 1U;
    msg.text.assign("OZBMKGTEORBHANYLGVVFZMBBOEEKIUQYVEKNNFPLSZH");

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
    msg.setTimeStamp(0.5990249809687118);
    msg.setSource(1384U);
    msg.setSourceEntity(122U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(206U);
    msg.op = 197U;
    msg.text.assign("NQMUHSBIRYVSPEIVYILMLPCXIPQMUZNGJPYCNDETSYTWTCVNIZNFNNNSHQHEMCGQHYMBJUFCTQUFWASHAOZVLFJRMUBOVXXOIJFPNRTEJVWHCBLWQIDKBWBXKLVGDKMOSPJDRVPVUYCGVGDXGYGHQSITGRWIUTDLAZAOSUFXFBKFPKMFYDAHGORRWXLTNFMYXQSXRZHHAEADBKWECAKJPBMAO");

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
    msg.setTimeStamp(0.7654510378609619);
    msg.setSource(62431U);
    msg.setSourceEntity(147U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(18U);
    msg.op = 190U;
    msg.time_remain = 0.24287717907350592;
    msg.sched_time = 0.2974693875320181;

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
    msg.setTimeStamp(0.6071946413297415);
    msg.setSource(25300U);
    msg.setSourceEntity(116U);
    msg.setDestination(61403U);
    msg.setDestinationEntity(113U);
    msg.op = 172U;
    msg.time_remain = 0.037350133869145985;
    msg.sched_time = 0.1811684665377642;

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
    msg.setTimeStamp(0.8834151141915721);
    msg.setSource(36649U);
    msg.setSourceEntity(83U);
    msg.setDestination(29046U);
    msg.setDestinationEntity(129U);
    msg.op = 103U;
    msg.time_remain = 0.7437295583429219;
    msg.sched_time = 0.151999852086515;

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
    msg.setTimeStamp(0.15637978254860097);
    msg.setSource(541U);
    msg.setSourceEntity(82U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(132U);
    msg.name.assign("FICQREARDGTLDNGSDSAWMUDMZZWGLDFMYZUHTOXBDHCOHUQITNCVRNKYQBKSWRULGZNFTMTYPLPCWYANKLXHANMYZSIWMXOKXCAVCPUHVIGPVWKVJQAFGIQBDMEBNLLEOWEBTZMYZXWLUOPNTJFKQDSYCLWQIPZAXERZFFEUIYEXXOIYAVOGCSLVZXHTFJBFKWRGSBSJTGXRJVIANQVOMRJKGUPHPKJFPKNSHYRQJRSUDBAOJHETUDVBMEQCJP");
    msg.op = 78U;
    msg.sched_time = 0.15321272683153897;

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
    msg.setTimeStamp(0.14656947994752711);
    msg.setSource(21148U);
    msg.setSourceEntity(252U);
    msg.setDestination(51857U);
    msg.setDestinationEntity(56U);
    msg.name.assign("SAYJTAPZJBHMBXXDTCUPUJBDKIIVQNDMSYFESDZKOYWWQAMFFOLYCJHQZSWLGAZRMUXQJOGXUNUCTXCNFYLEDBDNENDVYZRHFMGWVKZAFWUPRBUSQNZIPFVLWARQVRHKMTDOOYEBGFTNMQNTXLVHGKHJOXXYDUHMTWSXEJKQWIJJOVCRQCQHPGOMCICXTRYGHLOIBMCUPUELBZEHLERPKTICZAEEWSSKOYINTAFJLIPPZGAVWSRGDP");
    msg.op = 80U;
    msg.sched_time = 0.6303168947345195;

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
    msg.setTimeStamp(0.6747510222348818);
    msg.setSource(63501U);
    msg.setSourceEntity(185U);
    msg.setDestination(7463U);
    msg.setDestinationEntity(245U);
    msg.name.assign("VBPVKFGVRWUBNOPCVBNCFNHWWQTKNEOSHATTCOUFTHZZXFZYEOGHVIOQTJFIAARLGDNNTNQHXDKDDQHQESDIKBDEIUCZKIPXQYBPXLCSZXGJOWMLEMRJFMJNEVBHKHVRPUAJLVMMEOJCAOSQYFDXROCLFJLLCRSWLHSYGJBAXUUDYBTNASDAWKSGRYZZBIMREUGPWNTYIAMMPIMYIKYSQOAULKCQGMSKJIXVP");
    msg.op = 165U;
    msg.sched_time = 0.6170711816712172;

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
    msg.setTimeStamp(0.2530231428762254);
    msg.setSource(2062U);
    msg.setSourceEntity(32U);
    msg.setDestination(32980U);
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
    msg.setTimeStamp(0.904646183619662);
    msg.setSource(32660U);
    msg.setSourceEntity(57U);
    msg.setDestination(38253U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.6736166984430312);
    msg.setSource(16020U);
    msg.setSourceEntity(37U);
    msg.setDestination(22096U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.5323095715505032);
    msg.setSource(13458U);
    msg.setSourceEntity(54U);
    msg.setDestination(18251U);
    msg.setDestinationEntity(102U);
    msg.name.assign("OYHXCVRSZKGBORMXGAXWNPFSVNVKHUYGWIOGDOQEMMPHJAEFMBVWIPKKBQUXVNRCGPTYYVEDLLCAGLTQJEPNNJAUTXTTRMGDSIDRHIXHEOUTUQDIWOKIKVRONNAZGOCQXCLMHHIRLMXFJAFLIQCFFPQBDQFZRYHZYUGAEVQBWEEMKEMWMTBUCSZSRVTKESXQCRZHLZHLPABYSDJSLWJFNADOBZWCNYJCSUFISWKAVBYLNGJZKUDBZ");
    msg.state = 225U;

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
    msg.setTimeStamp(0.33866770459200635);
    msg.setSource(16737U);
    msg.setSourceEntity(125U);
    msg.setDestination(232U);
    msg.setDestinationEntity(147U);
    msg.name.assign("XCHAXWKHKWLFTHPBDRQMULJGTAMQSFCCFYPUXGWUANMMPITXLJWVIAISDMEYECZOPNBAUIBFWGLVOZWEXHFSMXLRYHRPHEYEJARQFXZJUCWGOOCIVQLILSLMKBGZPOVYMJDYFIBANYBJVDBMEIWEZDQOTOSHTNGKBGZFQKKPZQCZQNHWAOHUUKPYNEJTHCSLURTCVYOBLIBDOVXRRTUVDREQKAPDZQNSMFYNVSXCNSDJTDWNKRXGGJPEKVRJS");
    msg.state = 237U;

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
    msg.setTimeStamp(0.27836104050634614);
    msg.setSource(9943U);
    msg.setSourceEntity(185U);
    msg.setDestination(11124U);
    msg.setDestinationEntity(157U);
    msg.name.assign("GIOBNCUEFYLGZQJAAPTLKBAX");
    msg.state = 80U;

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
    msg.setTimeStamp(0.23622512341115887);
    msg.setSource(18105U);
    msg.setSourceEntity(184U);
    msg.setDestination(2944U);
    msg.setDestinationEntity(184U);
    msg.name.assign("KYJVIQMQMRWPYGKNBANRDKQFTFTCIDRQJRSTQJGYTXEJDJAZZPRWQODMSAKHUYOLIJUOTZPLAOPXHXZHOURKNYU");
    msg.value = 121U;

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
    msg.setTimeStamp(0.3112918570672244);
    msg.setSource(16465U);
    msg.setSourceEntity(245U);
    msg.setDestination(33097U);
    msg.setDestinationEntity(13U);
    msg.name.assign("DWKIPELYUHINKYDFSBBERUHROGFZXYJPHMSWBOCTTGJRCYYOAHZXLQFYWCSANMZRXFMRPQYGFBRIXJTQNSFCMAKOGUTRELUPPRWLCTPKZJXPIFVDPAWXIOIOTUIQYGNHJQTUEVLAZFGOGNVDKKJSTGEKMIJHXBURXVMOOTZBQVQESPDUZEMVKFHNVDUCCLEAHWCNJPV");
    msg.value = 21U;

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
    msg.setTimeStamp(0.1645339870064053);
    msg.setSource(22230U);
    msg.setSourceEntity(107U);
    msg.setDestination(32302U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BQTXYSSONOGWOGXEBIDJIWJIQUADDRDFNDUQUCYKZRMVAGRXYSGJFTBSLUTGKLSPHHBUJKAXZMULVFMMCDYPJGCMILTBZEDTCVVZKGSXLYESLXVPTMTXRLKPFONZERFFCOCIRRWOBRZDYQFLPIFMHENHMKCQOAXOEPQTNBKAFIIOHSIFJMWBRGNDLHVAZUBAQWPWPUHWQJMCHPRAQWH");
    msg.value = 198U;

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
    msg.setTimeStamp(0.16700799166225366);
    msg.setSource(21868U);
    msg.setSourceEntity(169U);
    msg.setDestination(32005U);
    msg.setDestinationEntity(247U);
    msg.name.assign("PPSCZLRFOIWMOHEWYAQKNOYKUYGKPVGXUGOTCFSHXWADPBWTHQGLJSMZIIOUJXXNNIQDRNJVZQZCAJPWLFLFCHFVPSDMBBOHRUPMEFLSSJKVGVVWRCMFAANCSJBKMEHXPZKJBUDDGEAMLZKVKZLQIRHCNQOUSJUWTACOPFZYMSJTDRTCBUSO");

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
    msg.setTimeStamp(0.8966584196057052);
    msg.setSource(32831U);
    msg.setSourceEntity(229U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(29U);
    msg.name.assign("RLWSBJLIDEJDCQAQIANGSAQCJGHJPKHNJKZMUDCWCIGWTDDWKHBXFOMBPJXHJAXGNZVAUMQYUTVPNRMVUYXSNAEPBTVDLUOXIPMBXFECETFRIZHIEUSCRUBWYTGFKQQFBKRFYPAOHXVJXCYTOUAE");

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
    msg.setTimeStamp(0.8002734937318892);
    msg.setSource(10381U);
    msg.setSourceEntity(18U);
    msg.setDestination(220U);
    msg.setDestinationEntity(37U);
    msg.name.assign("POXGISACJKNJELWDXSNHXJTHBUQCNYUYXBATTJRGRVOZLMYMTMPNXEHBEGATCQELHISQAXAICBVKOKTNTFNNTRNJYRGPMRKWOFVDWGEFWLHNBGQVFCAULDZSCDYUJOQDOVUCUOKWCTDOVUIMTYNQBLQXLIYRXPJKYIGIMMBEPFDRDVAIESHPVDBWOZMZVQZQRJHPSLSDHCKUJRECGYVSPZBULFEBSKHFHRKWJSAPMLFOYZEGFAKUMZXFWWWIAQ");

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
    msg.setTimeStamp(0.8066541365935613);
    msg.setSource(663U);
    msg.setSourceEntity(120U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(172U);
    msg.name.assign("OHSRQHDYMKPUJKBLZMOTCEWSWCPNEYNHGONDIMRVQOG");
    msg.value = 72U;

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
    msg.setTimeStamp(0.6446438043637231);
    msg.setSource(29764U);
    msg.setSourceEntity(188U);
    msg.setDestination(20531U);
    msg.setDestinationEntity(189U);
    msg.name.assign("UGIXJDSLAATNWYTLJSVIDLKVXWBYSLJQEFNOAPXGGRFYEZRQUCBMKLKJBFEBDNMNIBQIZJKNGSMQWHRSCPACATSHULPKLRJQQSTTJZDIUFXBZXGIWCZPETHHJTGRKZVZPUYHHYACFFUFOPZGLBRNNUHWWLIVVAJUQCYQECCGTKRGXYVHRFOAWECOBQMPMLKOHZDDNEMV");
    msg.value = 228U;

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
    msg.setTimeStamp(0.28364493345528563);
    msg.setSource(32237U);
    msg.setSourceEntity(44U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(86U);
    msg.name.assign("ENIBYGCDGTJVOVBPMUBSOLASVUSP");
    msg.value = 29U;

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
    msg.setTimeStamp(0.6477919459473683);
    msg.setSource(15024U);
    msg.setSourceEntity(84U);
    msg.setDestination(30746U);
    msg.setDestinationEntity(140U);
    msg.id = 66U;
    msg.period = 1086266392U;
    msg.duty_cycle = 1344594337U;

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
    msg.setTimeStamp(0.8501652844163174);
    msg.setSource(5341U);
    msg.setSourceEntity(167U);
    msg.setDestination(19285U);
    msg.setDestinationEntity(154U);
    msg.id = 27U;
    msg.period = 955238734U;
    msg.duty_cycle = 1554839511U;

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
    msg.setTimeStamp(0.31417557765526394);
    msg.setSource(53748U);
    msg.setSourceEntity(145U);
    msg.setDestination(20263U);
    msg.setDestinationEntity(207U);
    msg.id = 105U;
    msg.period = 839793104U;
    msg.duty_cycle = 2336160493U;

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
    msg.setTimeStamp(0.8250702894719405);
    msg.setSource(36140U);
    msg.setSourceEntity(32U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(111U);
    msg.id = 203U;
    msg.period = 2035564991U;
    msg.duty_cycle = 1869730610U;

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
    msg.setTimeStamp(0.42902254958362873);
    msg.setSource(57553U);
    msg.setSourceEntity(236U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(85U);
    msg.id = 211U;
    msg.period = 3628147599U;
    msg.duty_cycle = 854244365U;

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
    msg.setTimeStamp(0.5321662285106092);
    msg.setSource(27750U);
    msg.setSourceEntity(216U);
    msg.setDestination(38575U);
    msg.setDestinationEntity(153U);
    msg.id = 161U;
    msg.period = 362192494U;
    msg.duty_cycle = 4244704466U;

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
    msg.setTimeStamp(0.7087606192687396);
    msg.setSource(35298U);
    msg.setSourceEntity(162U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.980759224282515;
    msg.lon = 0.7116001641377862;
    msg.height = 0.8509097510145306;
    msg.x = 0.7722454348088484;
    msg.y = 0.7984571534190359;
    msg.z = 0.8888578130188496;
    msg.phi = 0.7129897038488647;
    msg.theta = 0.6499119913430491;
    msg.psi = 0.08662971685129872;
    msg.u = 0.014630642344319211;
    msg.v = 0.7729271624174715;
    msg.w = 0.7756725976414455;
    msg.vx = 0.19053290294868397;
    msg.vy = 0.7125588875757735;
    msg.vz = 0.7373358351036735;
    msg.p = 0.8619809392802755;
    msg.q = 0.6094184735992242;
    msg.r = 0.6188308223238671;
    msg.depth = 0.4052180093511324;
    msg.alt = 0.6420574658678897;

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
    msg.setTimeStamp(0.26801019681117266);
    msg.setSource(31044U);
    msg.setSourceEntity(254U);
    msg.setDestination(31084U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.9917499510930982;
    msg.lon = 0.5960205842021568;
    msg.height = 0.5049618196064101;
    msg.x = 0.7210696680061547;
    msg.y = 0.11316383660206719;
    msg.z = 0.630469248131508;
    msg.phi = 0.9100252935559604;
    msg.theta = 0.9452041023997536;
    msg.psi = 0.00112065922783533;
    msg.u = 0.6249843905148096;
    msg.v = 0.760971398267564;
    msg.w = 0.5752600919596802;
    msg.vx = 0.30348206853159965;
    msg.vy = 0.9006588698602024;
    msg.vz = 0.7035257844652153;
    msg.p = 0.6020009294234995;
    msg.q = 0.5043565491958163;
    msg.r = 0.6656447270942804;
    msg.depth = 0.19512549213553665;
    msg.alt = 0.25320647222364734;

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
    msg.setTimeStamp(0.9125288781706884);
    msg.setSource(30472U);
    msg.setSourceEntity(229U);
    msg.setDestination(26533U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.9784867587825291;
    msg.lon = 0.7851799763696068;
    msg.height = 0.11832912710323829;
    msg.x = 0.4138227552717191;
    msg.y = 0.26686730706740336;
    msg.z = 0.7669145244162058;
    msg.phi = 0.6089905398629571;
    msg.theta = 0.9679406904387824;
    msg.psi = 0.7699929779304738;
    msg.u = 0.3112826125529621;
    msg.v = 0.19084467959365914;
    msg.w = 0.6234771306571356;
    msg.vx = 0.11831681836771768;
    msg.vy = 0.019938366561841003;
    msg.vz = 0.3370786434366958;
    msg.p = 0.3198059737142983;
    msg.q = 0.588442233392372;
    msg.r = 0.6835880441561575;
    msg.depth = 0.0798832875887533;
    msg.alt = 0.8831299622840427;

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
    msg.setTimeStamp(0.7870272441286156);
    msg.setSource(60946U);
    msg.setSourceEntity(65U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(107U);
    msg.x = 0.6816177144149772;
    msg.y = 0.8408432382531029;
    msg.z = 0.16045158449018626;

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
    msg.setTimeStamp(0.3278535480215574);
    msg.setSource(47115U);
    msg.setSourceEntity(54U);
    msg.setDestination(47428U);
    msg.setDestinationEntity(1U);
    msg.x = 0.12118081656090118;
    msg.y = 0.895958310131605;
    msg.z = 0.7314654691476703;

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
    msg.setTimeStamp(0.297371614806755);
    msg.setSource(44376U);
    msg.setSourceEntity(119U);
    msg.setDestination(19704U);
    msg.setDestinationEntity(185U);
    msg.x = 0.2949627110354869;
    msg.y = 0.4407313468779719;
    msg.z = 0.02692631736423845;

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
    msg.setTimeStamp(0.6598717889664151);
    msg.setSource(55290U);
    msg.setSourceEntity(23U);
    msg.setDestination(33335U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8097241621140561;

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
    msg.setTimeStamp(0.9896069417217679);
    msg.setSource(36022U);
    msg.setSourceEntity(164U);
    msg.setDestination(37677U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6718850094578293;

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
    msg.setTimeStamp(0.8915556803395787);
    msg.setSource(36257U);
    msg.setSourceEntity(228U);
    msg.setDestination(27449U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8078487853149137;

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
    msg.setTimeStamp(0.06823765813058369);
    msg.setSource(9043U);
    msg.setSourceEntity(177U);
    msg.setDestination(46409U);
    msg.setDestinationEntity(60U);
    msg.value = 0.38200334544091585;

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
    msg.setTimeStamp(0.5638662417119891);
    msg.setSource(49294U);
    msg.setSourceEntity(194U);
    msg.setDestination(43142U);
    msg.setDestinationEntity(159U);
    msg.value = 0.16292178410068858;

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
    msg.setTimeStamp(0.681561408190868);
    msg.setSource(5859U);
    msg.setSourceEntity(205U);
    msg.setDestination(33907U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8861715876723987;

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
    msg.setTimeStamp(0.25515538077334465);
    msg.setSource(54941U);
    msg.setSourceEntity(187U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(187U);
    msg.x = 0.4253479365179058;
    msg.y = 0.8247467202675929;
    msg.z = 0.37463167760524774;
    msg.phi = 0.5703309594283736;
    msg.theta = 0.95861341737666;
    msg.psi = 0.9718271504666626;
    msg.p = 0.11085749790216382;
    msg.q = 0.8908071511358037;
    msg.r = 0.5940143853236071;
    msg.u = 0.9703758873821713;
    msg.v = 0.6942410488195628;
    msg.w = 0.19919183813292285;
    msg.bias_psi = 0.7987877814619395;
    msg.bias_r = 0.083869494085694;

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
    msg.setTimeStamp(0.8790790214907107);
    msg.setSource(61792U);
    msg.setSourceEntity(231U);
    msg.setDestination(25078U);
    msg.setDestinationEntity(158U);
    msg.x = 0.24623907145603185;
    msg.y = 0.7020523527242107;
    msg.z = 0.6366690667796001;
    msg.phi = 0.35281653608712893;
    msg.theta = 0.9840389831350952;
    msg.psi = 0.9901502541786269;
    msg.p = 0.35013993951846156;
    msg.q = 0.8644028331065684;
    msg.r = 0.2508823543883937;
    msg.u = 0.32192045041983497;
    msg.v = 0.1467668176711041;
    msg.w = 0.7438751904734608;
    msg.bias_psi = 0.477397626958185;
    msg.bias_r = 0.7989744226053266;

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
    msg.setTimeStamp(0.9169325673942513);
    msg.setSource(52754U);
    msg.setSourceEntity(36U);
    msg.setDestination(10270U);
    msg.setDestinationEntity(119U);
    msg.x = 0.41755853289054423;
    msg.y = 0.3154324338386649;
    msg.z = 0.3638444860086685;
    msg.phi = 0.3898369300750082;
    msg.theta = 0.9955639764509239;
    msg.psi = 0.5345837729111583;
    msg.p = 0.7417728559489063;
    msg.q = 0.35830770115093324;
    msg.r = 0.134664641392787;
    msg.u = 0.031948893015773416;
    msg.v = 0.5256886095927329;
    msg.w = 0.5702847639493875;
    msg.bias_psi = 0.3878701784066795;
    msg.bias_r = 0.2736719955775442;

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
    msg.setTimeStamp(0.050402606534662886);
    msg.setSource(54432U);
    msg.setSourceEntity(230U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.1427761398350592;
    msg.bias_r = 0.4846534422444657;
    msg.cog = 0.3646938066116151;
    msg.cyaw = 0.7820644497940891;
    msg.lbl_rej_level = 0.9542292862597282;
    msg.gps_rej_level = 0.7650508556750456;
    msg.custom_x = 0.5676719107787026;
    msg.custom_y = 0.9722899806371622;
    msg.custom_z = 0.43016271463577904;

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
    msg.setTimeStamp(0.8859343687035114);
    msg.setSource(27207U);
    msg.setSourceEntity(187U);
    msg.setDestination(47209U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.9553757023185272;
    msg.bias_r = 0.586961449241657;
    msg.cog = 0.11728304911391196;
    msg.cyaw = 0.09829945124538753;
    msg.lbl_rej_level = 0.7164000064470003;
    msg.gps_rej_level = 0.14562528065940739;
    msg.custom_x = 0.6551055127874804;
    msg.custom_y = 0.44455163568407596;
    msg.custom_z = 0.8907280524196992;

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
    msg.setTimeStamp(0.8074153421327467);
    msg.setSource(56115U);
    msg.setSourceEntity(127U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(246U);
    msg.bias_psi = 0.12357405170295721;
    msg.bias_r = 0.32618492888536454;
    msg.cog = 0.22687462634799171;
    msg.cyaw = 0.6145811848284684;
    msg.lbl_rej_level = 0.3773287221242666;
    msg.gps_rej_level = 0.3048501980809194;
    msg.custom_x = 0.9875266958781191;
    msg.custom_y = 0.9699560864486461;
    msg.custom_z = 0.9195518086218506;

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
    msg.setTimeStamp(0.7880802110292616);
    msg.setSource(43993U);
    msg.setSourceEntity(152U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.7718637328091935;
    msg.reason = 157U;

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
    msg.setTimeStamp(0.06179232177359406);
    msg.setSource(53813U);
    msg.setSourceEntity(112U);
    msg.setDestination(15728U);
    msg.setDestinationEntity(159U);
    msg.utc_time = 0.4441640879746227;
    msg.reason = 168U;

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
    msg.setTimeStamp(0.2967116676197734);
    msg.setSource(15185U);
    msg.setSourceEntity(218U);
    msg.setDestination(2489U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.533644025499467;
    msg.reason = 155U;

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
    msg.setTimeStamp(0.23286865070124962);
    msg.setSource(4862U);
    msg.setSourceEntity(110U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(177U);
    msg.id = 226U;
    msg.range = 0.18070886232316685;
    msg.acceptance = 5U;

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
    msg.setTimeStamp(0.36909898422361276);
    msg.setSource(7812U);
    msg.setSourceEntity(179U);
    msg.setDestination(18106U);
    msg.setDestinationEntity(148U);
    msg.id = 91U;
    msg.range = 0.9981873548460044;
    msg.acceptance = 16U;

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
    msg.setTimeStamp(0.7907175066733169);
    msg.setSource(5325U);
    msg.setSourceEntity(232U);
    msg.setDestination(3057U);
    msg.setDestinationEntity(30U);
    msg.id = 240U;
    msg.range = 0.16544120310975396;
    msg.acceptance = 206U;

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
    msg.setTimeStamp(0.7888709172811025);
    msg.setSource(22418U);
    msg.setSourceEntity(148U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(210U);
    msg.type = 93U;
    msg.reason = 237U;
    msg.value = 0.22405497473924196;
    msg.timestep = 0.6916839780848505;

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
    msg.setTimeStamp(0.5090492898390155);
    msg.setSource(35783U);
    msg.setSourceEntity(212U);
    msg.setDestination(24106U);
    msg.setDestinationEntity(234U);
    msg.type = 53U;
    msg.reason = 153U;
    msg.value = 0.41196950696070656;
    msg.timestep = 0.9266921306911066;

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
    msg.setTimeStamp(0.20831775680438636);
    msg.setSource(61344U);
    msg.setSourceEntity(197U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(7U);
    msg.type = 53U;
    msg.reason = 161U;
    msg.value = 0.6682881014908453;
    msg.timestep = 0.6960679458935964;

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
    msg.setTimeStamp(0.7426136609684693);
    msg.setSource(29357U);
    msg.setSourceEntity(243U);
    msg.setDestination(34581U);
    msg.setDestinationEntity(70U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZKEPNJTQPEHXYDVDBZZLSDJHHABJAELNSUPQVUUDELEFXQIQHCYWVCPVDMGLKEOHMGHHTGZKOFYWNMGBHKAQTGYXVPFFGBYDPRCMEDGWPIIGNRFTAPALWAWTJDIMYLXXYNBSNKPIIAFFWVLTFBCJRKCBRXSWTRUTJHWSMVZDNMFXOLRBJNMZVWKPICFJCTBZKRCUQOSGUWJNRUJTER");
    tmp_msg_0.lat = 0.651773078733895;
    tmp_msg_0.lon = 0.38231549753071337;
    tmp_msg_0.depth = 0.5061352447148189;
    tmp_msg_0.query_channel = 57U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 88U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.14363683326865273;
    msg.y = 0.8937129996925307;
    msg.var_x = 0.8878742588550534;
    msg.var_y = 0.16318642812225337;
    msg.distance = 0.8157659608786506;

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
    msg.setTimeStamp(0.021776077300111774);
    msg.setSource(6428U);
    msg.setSourceEntity(128U);
    msg.setDestination(36858U);
    msg.setDestinationEntity(86U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QWBLCCCJJVKNZJHXLZPFLOVMGKNHXDQLUMTQAGROPIGEARTBQLIOFDFTCQVIDKMOTFODSJXKXITWBODBEPWUHQGKYVBSYBFBVRDSUYNEHINBCPNKKJLIAQWSEGCLLVMCSHJGZZCVPEIAAEMDURCYFFPDURYJMGUIALZXOXGTXTYXAYXWNSLNPKZWEYOFHOGQSRIZEFURMMVYQWPAJEARAK");
    tmp_msg_0.lat = 0.0963640254353475;
    tmp_msg_0.lon = 0.16037505891557835;
    tmp_msg_0.depth = 0.34917162257217305;
    tmp_msg_0.query_channel = 135U;
    tmp_msg_0.reply_channel = 24U;
    tmp_msg_0.transponder_delay = 127U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.1650898055161707;
    msg.y = 0.5253050529547535;
    msg.var_x = 0.9424635044951587;
    msg.var_y = 0.7834584212568747;
    msg.distance = 0.2815320875963607;

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
    msg.setTimeStamp(0.6129547232187561);
    msg.setSource(38514U);
    msg.setSourceEntity(111U);
    msg.setDestination(22532U);
    msg.setDestinationEntity(130U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HDFZBZEPPOYDRBNJFZADNEKUUIGMCVCWDRUQQSFKMFOG");
    tmp_msg_0.lat = 0.7327899679307874;
    tmp_msg_0.lon = 0.10268349635287233;
    tmp_msg_0.depth = 0.711898946413986;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 42U;
    tmp_msg_0.transponder_delay = 220U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.763771277168447;
    msg.y = 0.4685510292328675;
    msg.var_x = 0.531992798085199;
    msg.var_y = 0.48381202902673914;
    msg.distance = 0.4905315108866434;

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
    msg.setTimeStamp(0.749324544270724);
    msg.setSource(55975U);
    msg.setSourceEntity(216U);
    msg.setDestination(47112U);
    msg.setDestinationEntity(1U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.5752954821952807);
    msg.setSource(26805U);
    msg.setSourceEntity(107U);
    msg.setDestination(8705U);
    msg.setDestinationEntity(168U);
    msg.state = 44U;

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
    msg.setTimeStamp(0.2609882595260892);
    msg.setSource(52470U);
    msg.setSourceEntity(73U);
    msg.setDestination(45759U);
    msg.setDestinationEntity(92U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.9985302526150356);
    msg.setSource(35752U);
    msg.setSourceEntity(233U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(33U);
    msg.x = 0.051340383654021604;
    msg.y = 0.7442372538013291;
    msg.z = 0.09167293648973185;

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
    msg.setTimeStamp(0.9768832313261862);
    msg.setSource(65351U);
    msg.setSourceEntity(122U);
    msg.setDestination(29768U);
    msg.setDestinationEntity(222U);
    msg.x = 0.8304308680596882;
    msg.y = 0.9709644921467502;
    msg.z = 0.9458866623548408;

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
    msg.setTimeStamp(0.799781604500733);
    msg.setSource(29307U);
    msg.setSourceEntity(193U);
    msg.setDestination(578U);
    msg.setDestinationEntity(246U);
    msg.x = 0.44584359193853296;
    msg.y = 0.11146725998904694;
    msg.z = 0.10396991322268556;

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
    msg.setTimeStamp(0.06485332436598534);
    msg.setSource(6319U);
    msg.setSourceEntity(23U);
    msg.setDestination(31230U);
    msg.setDestinationEntity(229U);
    msg.value = 0.07794952535502075;

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
    msg.setTimeStamp(0.4397851964687509);
    msg.setSource(37764U);
    msg.setSourceEntity(245U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9721970257038941;

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
    msg.setTimeStamp(0.6333433853971389);
    msg.setSource(49819U);
    msg.setSourceEntity(142U);
    msg.setDestination(29684U);
    msg.setDestinationEntity(171U);
    msg.value = 0.29719990441266364;

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
    msg.setTimeStamp(0.2082967960638069);
    msg.setSource(9731U);
    msg.setSourceEntity(222U);
    msg.setDestination(47283U);
    msg.setDestinationEntity(104U);
    msg.value = 0.9169687597610294;
    msg.z_units = 123U;

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
    msg.setTimeStamp(0.6409070877051615);
    msg.setSource(51385U);
    msg.setSourceEntity(190U);
    msg.setDestination(47065U);
    msg.setDestinationEntity(119U);
    msg.value = 0.8232050789308398;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.9983883807338885);
    msg.setSource(8776U);
    msg.setSourceEntity(101U);
    msg.setDestination(38277U);
    msg.setDestinationEntity(125U);
    msg.value = 0.13940285521216045;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.10724887209330425);
    msg.setSource(40306U);
    msg.setSourceEntity(170U);
    msg.setDestination(51628U);
    msg.setDestinationEntity(178U);
    msg.value = 0.01845546721700453;
    msg.speed_units = 185U;

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
    msg.setTimeStamp(0.15436620413493507);
    msg.setSource(34211U);
    msg.setSourceEntity(231U);
    msg.setDestination(37500U);
    msg.setDestinationEntity(32U);
    msg.value = 0.22429948911032827;
    msg.speed_units = 37U;

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
    msg.setTimeStamp(0.027097952051462593);
    msg.setSource(64707U);
    msg.setSourceEntity(156U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(82U);
    msg.value = 0.036556680910221906;
    msg.speed_units = 228U;

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
    msg.setTimeStamp(0.15765348460333695);
    msg.setSource(31194U);
    msg.setSourceEntity(240U);
    msg.setDestination(32819U);
    msg.setDestinationEntity(188U);
    msg.value = 0.27224691278310387;

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
    msg.setTimeStamp(0.7915128062254121);
    msg.setSource(39068U);
    msg.setSourceEntity(130U);
    msg.setDestination(55122U);
    msg.setDestinationEntity(179U);
    msg.value = 0.3199152335777028;

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
    msg.setTimeStamp(0.6769361817361396);
    msg.setSource(41453U);
    msg.setSourceEntity(40U);
    msg.setDestination(47845U);
    msg.setDestinationEntity(80U);
    msg.value = 0.7537986595954976;

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
    msg.setTimeStamp(0.5069028061235148);
    msg.setSource(58484U);
    msg.setSourceEntity(207U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(205U);
    msg.value = 0.661508914330867;

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
    msg.setTimeStamp(0.001576917107558029);
    msg.setSource(51984U);
    msg.setSourceEntity(151U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(101U);
    msg.value = 0.5818975958059401;

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
    msg.setTimeStamp(0.9936145134788076);
    msg.setSource(16871U);
    msg.setSourceEntity(52U);
    msg.setDestination(37850U);
    msg.setDestinationEntity(107U);
    msg.value = 0.773445231621848;

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
    msg.setTimeStamp(0.1151183077868353);
    msg.setSource(19322U);
    msg.setSourceEntity(58U);
    msg.setDestination(7602U);
    msg.setDestinationEntity(116U);
    msg.value = 0.03959622185193745;

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
    msg.setTimeStamp(0.0879270624051558);
    msg.setSource(4150U);
    msg.setSourceEntity(67U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(120U);
    msg.value = 0.9700878347151777;

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
    msg.setTimeStamp(0.8047418231137248);
    msg.setSource(32940U);
    msg.setSourceEntity(250U);
    msg.setDestination(19686U);
    msg.setDestinationEntity(22U);
    msg.value = 0.27980495778365055;

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
    msg.setTimeStamp(0.290640535098482);
    msg.setSource(20828U);
    msg.setSourceEntity(241U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 330737060U;
    msg.start_lat = 0.7345927131242193;
    msg.start_lon = 0.8159647406505124;
    msg.start_z = 0.5369609048814938;
    msg.start_z_units = 74U;
    msg.end_lat = 0.12019159782721967;
    msg.end_lon = 0.19005489809349663;
    msg.end_z = 0.5462963181742485;
    msg.end_z_units = 222U;
    msg.speed = 0.7125496808572296;
    msg.speed_units = 39U;
    msg.lradius = 0.6814732563746045;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.5505796519889303);
    msg.setSource(8662U);
    msg.setSourceEntity(131U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 3064304096U;
    msg.start_lat = 0.3799975256210605;
    msg.start_lon = 0.8284706997091279;
    msg.start_z = 0.880465301689734;
    msg.start_z_units = 106U;
    msg.end_lat = 0.22513849186421164;
    msg.end_lon = 0.3349588535599496;
    msg.end_z = 0.1226327889107851;
    msg.end_z_units = 1U;
    msg.speed = 0.8080868523710765;
    msg.speed_units = 119U;
    msg.lradius = 0.8948995759409598;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.8846905243680886);
    msg.setSource(31601U);
    msg.setSourceEntity(73U);
    msg.setDestination(29432U);
    msg.setDestinationEntity(17U);
    msg.path_ref = 339065872U;
    msg.start_lat = 0.003984016237196131;
    msg.start_lon = 0.354607139567084;
    msg.start_z = 0.6113767669338814;
    msg.start_z_units = 125U;
    msg.end_lat = 0.8548267864899394;
    msg.end_lon = 0.4057895591751527;
    msg.end_z = 0.9576907385970638;
    msg.end_z_units = 146U;
    msg.speed = 0.39420878716184626;
    msg.speed_units = 170U;
    msg.lradius = 0.5162003003204977;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.30961897604444877);
    msg.setSource(53735U);
    msg.setSourceEntity(15U);
    msg.setDestination(38418U);
    msg.setDestinationEntity(69U);
    msg.x = 0.17875574843962283;
    msg.y = 0.7215631156184137;
    msg.z = 0.9763112106598762;
    msg.k = 0.3413751775397731;
    msg.m = 0.8733805108408683;
    msg.n = 0.16891746439857358;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.023401151490035632);
    msg.setSource(36882U);
    msg.setSourceEntity(127U);
    msg.setDestination(12218U);
    msg.setDestinationEntity(25U);
    msg.x = 0.6148502611834923;
    msg.y = 0.8320051232025947;
    msg.z = 0.7204949379191451;
    msg.k = 0.5757534435956335;
    msg.m = 0.44377337719250665;
    msg.n = 0.8980987813317081;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.2760337908953665);
    msg.setSource(54099U);
    msg.setSourceEntity(243U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(183U);
    msg.x = 0.1512982742237724;
    msg.y = 0.25464205962468955;
    msg.z = 0.20013042730714725;
    msg.k = 0.9291499198691279;
    msg.m = 0.8693470772882034;
    msg.n = 0.2607935135379119;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.4365457348859143);
    msg.setSource(51614U);
    msg.setSourceEntity(181U);
    msg.setDestination(15947U);
    msg.setDestinationEntity(249U);
    msg.value = 0.352181110669623;

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
    msg.setTimeStamp(0.1441359744096179);
    msg.setSource(59864U);
    msg.setSourceEntity(27U);
    msg.setDestination(49739U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6803016253703086;

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
    msg.setTimeStamp(0.7299746631399627);
    msg.setSource(57438U);
    msg.setSourceEntity(98U);
    msg.setDestination(35624U);
    msg.setDestinationEntity(219U);
    msg.value = 0.06537158228575857;

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
    msg.setTimeStamp(0.11989330410734322);
    msg.setSource(38859U);
    msg.setSourceEntity(188U);
    msg.setDestination(55427U);
    msg.setDestinationEntity(166U);
    msg.u = 0.21252452697974022;
    msg.v = 0.6081970968055408;
    msg.w = 0.23075092769331207;
    msg.p = 0.05542637887690727;
    msg.q = 0.20347566274569695;
    msg.r = 0.6066386482392923;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.879983454675878);
    msg.setSource(11766U);
    msg.setSourceEntity(92U);
    msg.setDestination(33257U);
    msg.setDestinationEntity(51U);
    msg.u = 0.859365892567477;
    msg.v = 0.5284414666047864;
    msg.w = 0.5615622794662057;
    msg.p = 0.7275399207184247;
    msg.q = 0.39667610391669184;
    msg.r = 0.6384279332291958;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.8112851120151501);
    msg.setSource(21475U);
    msg.setSourceEntity(179U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(214U);
    msg.u = 0.6149279048603021;
    msg.v = 0.06092188797589815;
    msg.w = 0.5473624805948236;
    msg.p = 0.4802537089529416;
    msg.q = 0.5204048566156333;
    msg.r = 0.9252310918609383;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.3159759979623459);
    msg.setSource(24127U);
    msg.setSourceEntity(89U);
    msg.setDestination(42153U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 3126261880U;
    msg.start_lat = 0.4702056114173643;
    msg.start_lon = 0.2619300679456624;
    msg.start_z = 0.06805424481099975;
    msg.start_z_units = 182U;
    msg.end_lat = 0.5351438537291356;
    msg.end_lon = 0.5791962654850709;
    msg.end_z = 0.42697911597734994;
    msg.end_z_units = 19U;
    msg.lradius = 0.3970881789128774;
    msg.flags = 165U;
    msg.x = 0.5708334733415793;
    msg.y = 0.9020340639064343;
    msg.z = 0.12661057081203198;
    msg.vx = 0.014766911407218197;
    msg.vy = 0.4201798835468581;
    msg.vz = 0.542170920826203;
    msg.course_error = 0.2855021712812662;
    msg.eta = 2779U;

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
    msg.setTimeStamp(0.7904042827253206);
    msg.setSource(26202U);
    msg.setSourceEntity(92U);
    msg.setDestination(43680U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 57837687U;
    msg.start_lat = 0.1434442094801336;
    msg.start_lon = 0.392042012829813;
    msg.start_z = 0.6122116942389018;
    msg.start_z_units = 185U;
    msg.end_lat = 0.8293542288632197;
    msg.end_lon = 0.3241400111981685;
    msg.end_z = 0.4955663381519615;
    msg.end_z_units = 84U;
    msg.lradius = 0.6213276243952778;
    msg.flags = 140U;
    msg.x = 0.32782597557219795;
    msg.y = 0.7333782883104562;
    msg.z = 0.07031643243959995;
    msg.vx = 0.12508292347089467;
    msg.vy = 0.541137934848862;
    msg.vz = 0.06291588285467475;
    msg.course_error = 0.3142165859755659;
    msg.eta = 45074U;

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
    msg.setTimeStamp(0.5955514770070074);
    msg.setSource(5316U);
    msg.setSourceEntity(231U);
    msg.setDestination(51195U);
    msg.setDestinationEntity(164U);
    msg.path_ref = 3737391920U;
    msg.start_lat = 0.15364206923866608;
    msg.start_lon = 0.42100509329869273;
    msg.start_z = 0.1301967039180154;
    msg.start_z_units = 221U;
    msg.end_lat = 0.9157385819864438;
    msg.end_lon = 0.5607499131897645;
    msg.end_z = 0.8513652908789423;
    msg.end_z_units = 43U;
    msg.lradius = 0.214489121024098;
    msg.flags = 167U;
    msg.x = 0.04654573627356229;
    msg.y = 0.737677916137222;
    msg.z = 0.5725165883887808;
    msg.vx = 0.13479426004286643;
    msg.vy = 0.6300754012276255;
    msg.vz = 0.9078218063880341;
    msg.course_error = 0.5549609186864362;
    msg.eta = 59722U;

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
    msg.setTimeStamp(0.39823949470129194);
    msg.setSource(43088U);
    msg.setSourceEntity(230U);
    msg.setDestination(7468U);
    msg.setDestinationEntity(231U);
    msg.k = 0.530325119656788;
    msg.m = 0.3232440259221957;
    msg.n = 0.9408422288396304;

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
    msg.setTimeStamp(0.2232735918786235);
    msg.setSource(60678U);
    msg.setSourceEntity(214U);
    msg.setDestination(27955U);
    msg.setDestinationEntity(112U);
    msg.k = 0.441198065290058;
    msg.m = 0.9211907209713612;
    msg.n = 0.20086141006625124;

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
    msg.setTimeStamp(0.5609694574323382);
    msg.setSource(23857U);
    msg.setSourceEntity(165U);
    msg.setDestination(9442U);
    msg.setDestinationEntity(215U);
    msg.k = 0.01491480546441093;
    msg.m = 0.7310635249346847;
    msg.n = 0.03161563117664734;

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
    msg.setTimeStamp(0.8687701337070599);
    msg.setSource(56419U);
    msg.setSourceEntity(123U);
    msg.setDestination(19082U);
    msg.setDestinationEntity(163U);
    msg.p = 0.9260423484838874;
    msg.i = 0.3769198074141501;
    msg.d = 0.47236332741958675;
    msg.a = 0.6706803727764222;

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
    msg.setTimeStamp(0.25376800057041016);
    msg.setSource(33213U);
    msg.setSourceEntity(175U);
    msg.setDestination(36072U);
    msg.setDestinationEntity(67U);
    msg.p = 0.14161569756635084;
    msg.i = 0.27379806818929364;
    msg.d = 0.6532518886994457;
    msg.a = 0.8021023262682834;

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
    msg.setTimeStamp(0.3490967702536669);
    msg.setSource(11065U);
    msg.setSourceEntity(135U);
    msg.setDestination(24530U);
    msg.setDestinationEntity(111U);
    msg.p = 0.019836497952725574;
    msg.i = 0.4220594265525487;
    msg.d = 0.3798765266576891;
    msg.a = 0.36820594995936473;

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
    msg.setTimeStamp(0.15205817862059035);
    msg.setSource(47284U);
    msg.setSourceEntity(53U);
    msg.setDestination(16704U);
    msg.setDestinationEntity(26U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.519776265695802);
    msg.setSource(48792U);
    msg.setSourceEntity(100U);
    msg.setDestination(7230U);
    msg.setDestinationEntity(6U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.2751110524918394);
    msg.setSource(30250U);
    msg.setSourceEntity(233U);
    msg.setDestination(15895U);
    msg.setDestinationEntity(212U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.009572286303280775);
    msg.setSource(54168U);
    msg.setSourceEntity(168U);
    msg.setDestination(58829U);
    msg.setDestinationEntity(93U);
    msg.timeout = 8654U;
    msg.lat = 0.14763212431849415;
    msg.lon = 0.42751468369323575;
    msg.z = 0.3527912590041514;
    msg.z_units = 101U;
    msg.speed = 0.48951581033241787;
    msg.speed_units = 126U;
    msg.roll = 0.6830696343433658;
    msg.pitch = 0.9925381732092544;
    msg.yaw = 0.28600979191915155;
    msg.custom.assign("VXKBEORQFOQVAPXQGWCYFWGVGRDSONRBIBQCLYVYULVEAGCJZRWLNJZDULBDCVTPQQNBTORIWUHMATMCPRLHSKUZWDTKNNECAVYBMWITDYLJRKNZMPJHMWGRFMRTGYUSXHESELEQE");

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
    msg.setTimeStamp(0.9097190899465623);
    msg.setSource(63225U);
    msg.setSourceEntity(249U);
    msg.setDestination(9512U);
    msg.setDestinationEntity(165U);
    msg.timeout = 62402U;
    msg.lat = 0.052359940982337205;
    msg.lon = 0.011026046312602733;
    msg.z = 0.9312878812060784;
    msg.z_units = 209U;
    msg.speed = 0.1799884560026177;
    msg.speed_units = 198U;
    msg.roll = 0.08125752664005692;
    msg.pitch = 0.07813436232629523;
    msg.yaw = 0.8307219551822407;
    msg.custom.assign("MRQAPEKXHDTVHDGEUDLCAEWOIFKVVHPADAGXMYNKMFYGWRZXSWLXSPIYNBSCVJVGUKHYFJWFUIXOQEIFKHBLXWTBNUKOITRCAAOGYVTIQMSMSOLEZBXUAUPOTWZKZFREBRJPQVOKOSGBTZWFVHRJPYRUUQITCEFGCOYCWGMFHLWCTPBDADYDBADXEGNHVREYMPLNRNPQZCJZDTKBLOJXQZSMMJPLLVFCIHNUZEYTKLZQSXJCNG");

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
    msg.setTimeStamp(0.779207911496885);
    msg.setSource(24289U);
    msg.setSourceEntity(105U);
    msg.setDestination(8592U);
    msg.setDestinationEntity(187U);
    msg.timeout = 23699U;
    msg.lat = 0.3976871979692925;
    msg.lon = 0.5691720489719821;
    msg.z = 0.9133743921972137;
    msg.z_units = 128U;
    msg.speed = 0.6271248555160683;
    msg.speed_units = 53U;
    msg.roll = 0.09878480606898465;
    msg.pitch = 0.2545216779577141;
    msg.yaw = 0.3032992324074669;
    msg.custom.assign("LPXPSLSSAZCUXVBNJVXFHNVNOWFTGZBVEUDQPQRQCMCKBJGMUBWDHMSMYN");

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
    msg.setTimeStamp(0.020979317529200125);
    msg.setSource(4222U);
    msg.setSourceEntity(52U);
    msg.setDestination(18957U);
    msg.setDestinationEntity(201U);
    msg.timeout = 56718U;
    msg.lat = 0.6439076724283832;
    msg.lon = 0.49220270031398783;
    msg.z = 0.7891438080946935;
    msg.z_units = 108U;
    msg.speed = 0.527824821989289;
    msg.speed_units = 40U;
    msg.duration = 43961U;
    msg.radius = 0.5725418233126688;
    msg.flags = 95U;
    msg.custom.assign("HHHYUDXQSMXSDTTYCGFPAVRFOMGZQNHOCYPBGOZAISNLOSQMVTVFINYACJZZXKVOEFVEJBNCJELPAKZIXWZDUPZZANPBSDMGWPCEKMVCDAFUPYXXXUOBEFTMQRFIDHAIBLIUSSVERXMYIGLIQJUWQQQNPHVWTOWGLJRMTLLPKMOC");

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
    msg.setTimeStamp(0.30717341358339056);
    msg.setSource(14950U);
    msg.setSourceEntity(106U);
    msg.setDestination(59184U);
    msg.setDestinationEntity(128U);
    msg.timeout = 48588U;
    msg.lat = 0.9796856135775958;
    msg.lon = 0.678010813866025;
    msg.z = 0.1956537294234152;
    msg.z_units = 184U;
    msg.speed = 0.6538024562578507;
    msg.speed_units = 50U;
    msg.duration = 25942U;
    msg.radius = 0.6477784978759961;
    msg.flags = 228U;
    msg.custom.assign("SHGEYLNJJRZH");

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
    msg.setTimeStamp(0.8417020897665964);
    msg.setSource(38161U);
    msg.setSourceEntity(143U);
    msg.setDestination(22584U);
    msg.setDestinationEntity(142U);
    msg.timeout = 23981U;
    msg.lat = 0.46158220577405573;
    msg.lon = 0.8309189658840291;
    msg.z = 0.44454554306185556;
    msg.z_units = 111U;
    msg.speed = 0.5912144765270091;
    msg.speed_units = 188U;
    msg.duration = 61534U;
    msg.radius = 0.07129905016255011;
    msg.flags = 164U;
    msg.custom.assign("AEOUORJOGTFRRUGFQLIPBJXXCWSMXFNCUHDMYZWSEXYHUGZJQNHGTKZZQMJHSHLWYAKEJWUILJEPLAIMBKDADKTUGTDMXUCBPSMKBECFQBWPGPHMCIZVIVQQVFOREJISFGFFYNNIWLMNYAOYKWLDQZNWRQKANWDOTVXBVISJXZTCKLRALSMGJZPRKNIVT");

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
    msg.setTimeStamp(0.6360488047339942);
    msg.setSource(34063U);
    msg.setSourceEntity(99U);
    msg.setDestination(20718U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("LOVMBCSUEMGPHFKFCUBGDBHIRYWBWIOEFBABQQAZVZQ");

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
    msg.setTimeStamp(0.34167788178841507);
    msg.setSource(54067U);
    msg.setSourceEntity(213U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(59U);
    msg.custom.assign("MIZCPOKHDEDDPIQMNKNGYODEYZSCGOXAXCJURNLIJQIIMVQLJEBNRFQBLWVOSFJKZMDDRSDBEPMRINRPATRWIXSDHTQRHUGWFMMPPLBRVDGLPHYFHXQHIWLCFJJLXCXSMVBSWVWBYAHSEUVUEULTJKCYUAZTDUSEIZBYVNWLJOCXWEGKFJZYZOOEPLGNEGHJSZKOAAGRYOMXTNFQHABKWTKKXFVCMOPQYFWBHQCZVZTVARQN");

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
    msg.setTimeStamp(0.4977081019281334);
    msg.setSource(48403U);
    msg.setSourceEntity(16U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(233U);
    msg.custom.assign("NKZRACURFTXBEPVHAJYJRROPIGPMTUMPJHGXOTLOREYJQWKOVAXGCHEUOEAXFHEYPDPFYOXNSEGRMIAXXLFLXUEGVGKFZMTHDYNYQQLVUSRBDBBPXJENRHHFQDACUTNYTZQZIRWKEZNMTBKUBUZZKILETMNDKSJVOSJCDCYZQYSSPSDGTWNUFPWJWAWNBWBVFWQHSTKOIDFLUCLFMVMPXMYACQGAIIZWVLKASDNKWMHRCCIJQ");

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
    msg.setTimeStamp(0.5497392849641579);
    msg.setSource(28292U);
    msg.setSourceEntity(75U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(152U);
    msg.timeout = 2649U;
    msg.lat = 0.31473715222359167;
    msg.lon = 0.0019526954597003376;
    msg.z = 0.9172983097144515;
    msg.z_units = 48U;
    msg.duration = 39925U;
    msg.speed = 0.14117281380543023;
    msg.speed_units = 251U;
    msg.type = 227U;
    msg.radius = 0.9649208349401881;
    msg.length = 0.14832029006858083;
    msg.bearing = 0.34693595197364546;
    msg.direction = 3U;
    msg.custom.assign("VEBKSYHHTMESLOPSQANBQLBFIYGTPAXJLIAWIJBLAOUCSGTMUOLHRNHRJMONBDZOLVDTZMXNRTHIJAUXIJRKVIQGYAJMGWUZSJWUQOLKDWEUEVSQLCCMYAPZRIXODDSDKIWZQGUCBYHTPOBCPWVJSZXDOLGYPAFMAJMRDPKQVHTRKEYKQOXGIXERMKNBZXHNFIYFQYWCPTCECBTJVNARVXNFZNEKCFQEMYHWGZFUSF");

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
    msg.setTimeStamp(0.0033888245641233716);
    msg.setSource(52606U);
    msg.setSourceEntity(242U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(161U);
    msg.timeout = 55697U;
    msg.lat = 0.13438958739944706;
    msg.lon = 0.29911331749185843;
    msg.z = 0.34190742105252503;
    msg.z_units = 175U;
    msg.duration = 35106U;
    msg.speed = 0.7991074570627459;
    msg.speed_units = 170U;
    msg.type = 75U;
    msg.radius = 0.6948843314342125;
    msg.length = 0.25705324230853643;
    msg.bearing = 0.49335264049752825;
    msg.direction = 72U;
    msg.custom.assign("BATHRTTHFRAJSURNLYSKQKZNMAZRNQWMCCFESDUJZVVWGWHTGGWXCGVULIBVBPWJDDWKOPIEJEPKPLWOCNAIHCMEGTKTGXAYBIVVYQSWHNPOHIWNPHBHXZKQXFUUOQSYXYXSIXFUKRXIVAZOOROKY");

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
    msg.setTimeStamp(0.002988521753297557);
    msg.setSource(44458U);
    msg.setSourceEntity(128U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(242U);
    msg.timeout = 24965U;
    msg.lat = 0.2887450223718957;
    msg.lon = 0.8644106699124642;
    msg.z = 0.2859182503871791;
    msg.z_units = 180U;
    msg.duration = 43875U;
    msg.speed = 0.08280341018963999;
    msg.speed_units = 218U;
    msg.type = 224U;
    msg.radius = 0.04686107677180995;
    msg.length = 0.6449467117119505;
    msg.bearing = 0.6431405641554577;
    msg.direction = 205U;
    msg.custom.assign("AVCVLHCOFTGMMCGXNIIVUGJARYGUQPFTXJEYINZZYOGJFHFDTRKOOGMRDMLYNTIUNXVVLAPKVEAXSUOUIQLDWHVLDSTZDFQGVBWQXJNCRAZEH");

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
    msg.setTimeStamp(0.30041634157281827);
    msg.setSource(65470U);
    msg.setSourceEntity(176U);
    msg.setDestination(59652U);
    msg.setDestinationEntity(232U);
    msg.duration = 25255U;
    msg.custom.assign("DMCRTKLQJTFEAUNXULBTIGIXRDQPHNFXYPTQUEOGCFOEITCTIXAWECSCYVBFLHBLBZRWUSXPNJRQLJPMNGRHMUQJWFIRVOSENEFLRSYYKVZKOVCCNDYGEOLXKPZCPAW");

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
    msg.setTimeStamp(0.022674527892655227);
    msg.setSource(25466U);
    msg.setSourceEntity(138U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(66U);
    msg.duration = 7456U;
    msg.custom.assign("SEXMYFUQQDBRMSFCFGTZOJPLCGEXOQGOXNULTJWQRODHILAMTYZLNPCGPTNQMFMGSXFBDDIGZZNMIYDGKBDUHHFXCJAZBWVNKHAQNDWRXNVWPDSSRRJVWMSEKZSQTKAYAWLHVEBFEEKTKRCGGXLBUCYEJTPPBHKAIWFVNMUOIPYBQADDMTRKYVPCBOLTJUQCBWWUPIWROFCOUYOJFAVKZEGKJXLUYUJIHSEILLVRHTY");

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
    msg.setTimeStamp(0.39540555072620076);
    msg.setSource(620U);
    msg.setSourceEntity(124U);
    msg.setDestination(26373U);
    msg.setDestinationEntity(64U);
    msg.duration = 43551U;
    msg.custom.assign("CPCYMQWEUTFJWSBHXAWRNWREVSESIVHCXFZQOXZLXUBISLOPHBLTPFUYAOBWDOCPDXSZVJNT");

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
    msg.setTimeStamp(0.4630553488031912);
    msg.setSource(48236U);
    msg.setSourceEntity(197U);
    msg.setDestination(48327U);
    msg.setDestinationEntity(188U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6460425103698664;
    msg.control.set(tmp_msg_0);
    msg.duration = 17026U;
    msg.custom.assign("PDMZUHLWWXPYABT");

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
    msg.setTimeStamp(0.5187991665775884);
    msg.setSource(50857U);
    msg.setSourceEntity(52U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(129U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3051166928U;
    tmp_msg_0.start_lat = 0.46939171217711684;
    tmp_msg_0.start_lon = 0.4602869574045788;
    tmp_msg_0.start_z = 0.5628716344647959;
    tmp_msg_0.start_z_units = 111U;
    tmp_msg_0.end_lat = 0.4093860873249511;
    tmp_msg_0.end_lon = 0.269075192381962;
    tmp_msg_0.end_z = 0.9236143515294337;
    tmp_msg_0.end_z_units = 114U;
    tmp_msg_0.speed = 0.45433838421342665;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.lradius = 0.07577732962506534;
    tmp_msg_0.flags = 48U;
    msg.control.set(tmp_msg_0);
    msg.duration = 41969U;
    msg.custom.assign("VLXGIYXVTJTUKSNQFWCBJERGJXVRLMOUXDGYEAYBUAXKMEUWQUDKBCBPBHQLIPMFZSBQFDKXPSEMGOZHRHDQRYIKFJKGOSLPRJHCUKBASNFIDTOZKDWGMGSRRWNJNVIWLCAQYOWOKZRXYYNWQT");

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
    msg.setTimeStamp(0.6551848335309483);
    msg.setSource(53589U);
    msg.setSourceEntity(160U);
    msg.setDestination(33234U);
    msg.setDestinationEntity(184U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.36686640208193066;
    tmp_msg_0.speed_units = 60U;
    msg.control.set(tmp_msg_0);
    msg.duration = 40620U;
    msg.custom.assign("XTKLOVFOHMUIVGKXXGLEHRPWLNCFLZHDHGPSGZNOIYAHNBROYSQRKFFRWMNBKYQROYXSPYWACCILIKZRMNXVGAQTJUZWJHCTUDJIOZSSRGSXFJEHECEUGVTALTVPDPEVMCWGYUJIGBBVDTKDQBCMYAUPJARLQQLZIZMSYAZMMLWDDUOWSKOHTAVOBDOKKPEPTUTCEYJPXNEXBF");

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
    msg.setTimeStamp(0.0792178821435);
    msg.setSource(49601U);
    msg.setSourceEntity(183U);
    msg.setDestination(45444U);
    msg.setDestinationEntity(4U);
    msg.timeout = 11793U;
    msg.lat = 0.8919788498232483;
    msg.lon = 0.39595244991346645;
    msg.z = 0.5938720275023787;
    msg.z_units = 163U;
    msg.speed = 0.8177772241191099;
    msg.speed_units = 184U;
    msg.bearing = 0.6218844181922719;
    msg.cross_angle = 0.43384737302842813;
    msg.width = 0.7539705592909787;
    msg.length = 0.6618788642366515;
    msg.hstep = 0.7347390198263274;
    msg.coff = 76U;
    msg.alternation = 87U;
    msg.flags = 153U;
    msg.custom.assign("UCYGPDFBSTBGLIQARGSLQOEDLYJZZVNGGQSXXKWVPLVFUZYJBULKHNFRFBMVGQJHYEIAIHRYAKLFAUSQSINZUOPZCBEPXHVWNWIRSCSMJIXYJIJSVVBJQZCWZOET");

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
    msg.setTimeStamp(0.7238202599207711);
    msg.setSource(10653U);
    msg.setSourceEntity(254U);
    msg.setDestination(9592U);
    msg.setDestinationEntity(169U);
    msg.timeout = 49713U;
    msg.lat = 0.616782049441255;
    msg.lon = 0.2790344902401921;
    msg.z = 0.5269892787251421;
    msg.z_units = 51U;
    msg.speed = 0.17638088330467938;
    msg.speed_units = 152U;
    msg.bearing = 0.039931181002248795;
    msg.cross_angle = 0.7853149541492592;
    msg.width = 0.3301172025882547;
    msg.length = 0.29339918177705615;
    msg.hstep = 0.2161865324227179;
    msg.coff = 208U;
    msg.alternation = 122U;
    msg.flags = 236U;
    msg.custom.assign("LXHWVNUEIDENLRIROYWAQMTDFIHXYHPNYCDSEJOIJSRQELHHHEYDRZCLPMFRACVOKSWXMFVQVKOJDNTWUBTJSMUVCDQYGYBJXKBSFROZBOUJLEODXXYBPJPJEIASWGXAFG");

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
    msg.setTimeStamp(0.4082972170990101);
    msg.setSource(52567U);
    msg.setSourceEntity(12U);
    msg.setDestination(2202U);
    msg.setDestinationEntity(65U);
    msg.timeout = 56677U;
    msg.lat = 0.4154546263580907;
    msg.lon = 0.882111530001617;
    msg.z = 0.1406210626536687;
    msg.z_units = 131U;
    msg.speed = 0.37162420881971503;
    msg.speed_units = 123U;
    msg.bearing = 0.7613210037245121;
    msg.cross_angle = 0.49617849221066346;
    msg.width = 0.9262046779830843;
    msg.length = 0.5787075039542428;
    msg.hstep = 0.8758677145575982;
    msg.coff = 57U;
    msg.alternation = 79U;
    msg.flags = 164U;
    msg.custom.assign("YCFHVOJSEDFGFWUIFCZJBKEWYGYNWUIKJZBSDXDCCVGZVQXGSKDZLPFWFOGRMNZHJLYIRDHWSBGKTTVVKBWUQRHZZJJGSSILAABHDYVYRDFPKANOEZTTTAXBNXRIETDYSKMMQJWGUFEBPMAUMQQOYPSFOTCHEHLNHRLIMPBVURLAPLRCPDCQIYYXPXVLUNIEPNTWQSIQNXZJOSVXMWKHQZUUVXLMCAJ");

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
    msg.setTimeStamp(0.13248070416352975);
    msg.setSource(16497U);
    msg.setSourceEntity(196U);
    msg.setDestination(36118U);
    msg.setDestinationEntity(109U);
    msg.timeout = 9618U;
    msg.lat = 0.9517245293977409;
    msg.lon = 0.8070531722792373;
    msg.z = 0.6901805272144426;
    msg.z_units = 206U;
    msg.speed = 0.28211754403600187;
    msg.speed_units = 179U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8712865612404771;
    tmp_msg_0.y = 0.5021611353726696;
    tmp_msg_0.z = 0.8168319050479627;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TBSKXFOHXYTOIBWIWAFDJWDJTHUQSLQHRKCBMVFBNIINOUJTKLCFDUEWFVMUSLRFKZZOYMXTLTPEHELBTTFWVBPHXLFMDXMCGGMIZQKRWOQMP");

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
    msg.setTimeStamp(0.11569005936509247);
    msg.setSource(16149U);
    msg.setSourceEntity(75U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(243U);
    msg.timeout = 44411U;
    msg.lat = 0.12902264545628828;
    msg.lon = 0.35990478011438753;
    msg.z = 0.7453312450691186;
    msg.z_units = 104U;
    msg.speed = 0.6853932419152137;
    msg.speed_units = 225U;
    msg.custom.assign("RDMSIXIOJCFHYQCIQAWLGPPXPXTAMOMIFHICYTWUQVOMKIJVULRHETPDPJAGFVXXPHFWLHLEMVFCGUCDZHJAARNTCKETRVRHTSWLBCZCZIWLXBYRZZQCDPNZSEDMDZTEBVMKYKOHSVSNBJQILKROSS");

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
    msg.setTimeStamp(0.7317878958952081);
    msg.setSource(59283U);
    msg.setSourceEntity(106U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(33U);
    msg.timeout = 20799U;
    msg.lat = 0.5024592169008659;
    msg.lon = 0.10296494141372425;
    msg.z = 0.8224963410731005;
    msg.z_units = 136U;
    msg.speed = 0.3484309755285585;
    msg.speed_units = 91U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9107247172286064;
    tmp_msg_0.y = 0.14229922597720046;
    tmp_msg_0.z = 0.10563876305356734;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MUQOXSQJTRJAVHWIKVKQZDWBFPFUEOSDHRYJRUVCQRWZNBODAVWIASGUU");

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
    msg.setTimeStamp(0.5952693541716659);
    msg.setSource(5843U);
    msg.setSourceEntity(180U);
    msg.setDestination(42678U);
    msg.setDestinationEntity(85U);
    msg.x = 0.8673524774480853;
    msg.y = 0.688725121389089;
    msg.z = 0.10384056787659501;

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
    msg.setTimeStamp(0.010630435403067073);
    msg.setSource(19303U);
    msg.setSourceEntity(194U);
    msg.setDestination(51611U);
    msg.setDestinationEntity(152U);
    msg.x = 0.38847267809470787;
    msg.y = 0.4188086711814317;
    msg.z = 0.7579304610037353;

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
    msg.setTimeStamp(0.6075644226217718);
    msg.setSource(60630U);
    msg.setSourceEntity(185U);
    msg.setDestination(41571U);
    msg.setDestinationEntity(191U);
    msg.x = 0.6137245234156838;
    msg.y = 0.1491344091108614;
    msg.z = 0.20668412989927654;

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
    msg.setTimeStamp(0.5938524825849028);
    msg.setSource(17595U);
    msg.setSourceEntity(45U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(96U);
    msg.timeout = 60055U;
    msg.lat = 0.24811310190694158;
    msg.lon = 0.45309319250002644;
    msg.z = 0.24855244451027114;
    msg.z_units = 162U;
    msg.amplitude = 0.10323416896506976;
    msg.pitch = 0.4130515267174397;
    msg.speed = 0.7351474385131023;
    msg.speed_units = 191U;
    msg.custom.assign("BIIRZFRQHHLJFSLMJZGODTNFMDPYREGBEJGKDEFZDUVZXTMSHWUKKJWKASCCBZAWLOWAPHEUONYGVFYLGOVYQILIWJHSVUSRMZXPDTBCGAYCYKEWOMCHXBWTGQFPKLUNCRYQKQXXPDVTUEKUVMNNZVRVTHORFRHBYNERNPJJIQEAALTXEPPKOIAOKMNQVDUDUZOTICLBCSRSGLWIFX");

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
    msg.setTimeStamp(0.12429691065312665);
    msg.setSource(19125U);
    msg.setSourceEntity(40U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(14U);
    msg.timeout = 50433U;
    msg.lat = 0.47496387447258737;
    msg.lon = 0.3603098130135842;
    msg.z = 0.019740012874230106;
    msg.z_units = 178U;
    msg.amplitude = 0.6230682035888133;
    msg.pitch = 0.8690353930282689;
    msg.speed = 0.10732993136570523;
    msg.speed_units = 57U;
    msg.custom.assign("PMUOOBSFSDTGEWVFVMHDBUFK");

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
    msg.setTimeStamp(0.4833164372939056);
    msg.setSource(65533U);
    msg.setSourceEntity(169U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(96U);
    msg.timeout = 53264U;
    msg.lat = 0.9538245379584617;
    msg.lon = 0.008578669096735658;
    msg.z = 0.4445573166253166;
    msg.z_units = 107U;
    msg.amplitude = 0.9870915403756904;
    msg.pitch = 0.49984732228962514;
    msg.speed = 0.4932577417077375;
    msg.speed_units = 210U;
    msg.custom.assign("JCUEERIQUFDOVCZXKKAEHRHTOFGULLEZNAEKBRVVYNVPGEHPNJCZFOTBWKMWBXEDWDYBHJITAFALVCMCVWPDBGBPQJZLYZEYKPQZWBZDTKOSXIOHVPSHIPJGQCJXAHMSHPLMWODEMDSSUXLRNCVFWIGRQMXZOWNPIDVFHQHIWGCVEQPSOJIBYBUYRQKSRYMD");

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
    msg.setTimeStamp(0.9484172023269648);
    msg.setSource(2581U);
    msg.setSourceEntity(9U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.2906152736763903);
    msg.setSource(24058U);
    msg.setSourceEntity(175U);
    msg.setDestination(50888U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.4982257760777872);
    msg.setSource(6206U);
    msg.setSourceEntity(80U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.3553536573292878);
    msg.setSource(6415U);
    msg.setSourceEntity(58U);
    msg.setDestination(49401U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.3064475015380891;
    msg.lon = 0.09004647547242828;
    msg.z = 0.3773435599207787;
    msg.z_units = 73U;
    msg.radius = 0.8767720295774736;
    msg.duration = 16406U;
    msg.speed = 0.42929173538937115;
    msg.speed_units = 152U;
    msg.custom.assign("PUEHIZRTDGWLCAKPCYDUJKGKTDANREUTZBSTFMNQCJETUIQBORCMQPDYRVLBNSTMWJDXEMZFQDAFZSJWSXILSWHQRLPFEPBWXTHRPFQ");

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
    msg.setTimeStamp(0.28388988343142496);
    msg.setSource(1611U);
    msg.setSourceEntity(95U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.7825811670814975;
    msg.lon = 0.0878535984405392;
    msg.z = 0.9823292901001722;
    msg.z_units = 178U;
    msg.radius = 0.8874309655683335;
    msg.duration = 23582U;
    msg.speed = 0.7500858743367356;
    msg.speed_units = 247U;
    msg.custom.assign("IOTZHGHKZSBVHEZFXOLMROWKCUGSTBEKZNIKYMFYLPCZKAIMUVOAVVKNCRLYXQLFSDEXQVRHCOJSEWDFMQQEPQYPCGYTIZDLXOVYGBUNZIPENCGVVRWNWL");

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
    msg.setTimeStamp(0.713598041590214);
    msg.setSource(55384U);
    msg.setSourceEntity(154U);
    msg.setDestination(52521U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.021767380124474656;
    msg.lon = 0.19087665777626728;
    msg.z = 0.6838791239475365;
    msg.z_units = 38U;
    msg.radius = 0.29443651724004605;
    msg.duration = 49785U;
    msg.speed = 0.9915350535119835;
    msg.speed_units = 15U;
    msg.custom.assign("XSFLSEPHIMYGZCVAXPXWBEQJTERFXKPZKAWYEZIHURVJXYWCUCGCNNDYRUSVWTXPIXZIRNGOOBKTGBCQOEDAVAIMJLLWXQB");

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
    msg.setTimeStamp(0.15714750772651986);
    msg.setSource(9038U);
    msg.setSourceEntity(35U);
    msg.setDestination(329U);
    msg.setDestinationEntity(157U);
    msg.timeout = 35118U;
    msg.flags = 247U;
    msg.lat = 0.3695650435978044;
    msg.lon = 0.5580603846090302;
    msg.start_z = 0.9649007347896719;
    msg.start_z_units = 171U;
    msg.end_z = 0.6941202020574577;
    msg.end_z_units = 33U;
    msg.radius = 0.8189006512300471;
    msg.speed = 0.9034287392712127;
    msg.speed_units = 41U;
    msg.custom.assign("LEMWUZLBZSGWRMXCYEUIABDUEPXBVOEGRQMQFPCVQHEXJGHYNULCEMMZGHBPKSIKITIPYKMONNFAKZQMGCPONRQSWVWLVBAFKNBNVZYRXRONJDWGXVRVCCJLTZTKSAMSGSPZVDJJRKGFTDDUPHBOCNKKDWFBTFAHXHQPBYSTFNCIFEHLLYZODJERVJLUYJOCROGHWAQKXGIMPUWXUFJYTYDSVIROFU");

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
    msg.setTimeStamp(0.45177340328143245);
    msg.setSource(16954U);
    msg.setSourceEntity(237U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(187U);
    msg.timeout = 43403U;
    msg.flags = 8U;
    msg.lat = 0.21423894724075276;
    msg.lon = 0.6580539702485714;
    msg.start_z = 0.680750267649524;
    msg.start_z_units = 193U;
    msg.end_z = 0.6490782228977728;
    msg.end_z_units = 155U;
    msg.radius = 0.3458465704924659;
    msg.speed = 0.7613723951605096;
    msg.speed_units = 226U;
    msg.custom.assign("GJFQQMDXGKCQWNNYEAMSPPUFKVTDRQZMFYD");

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
    msg.setTimeStamp(0.6608072474516332);
    msg.setSource(14990U);
    msg.setSourceEntity(54U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(145U);
    msg.timeout = 22199U;
    msg.flags = 200U;
    msg.lat = 0.206426371932254;
    msg.lon = 0.5302422278127731;
    msg.start_z = 0.4793273556967783;
    msg.start_z_units = 103U;
    msg.end_z = 0.3377355326760537;
    msg.end_z_units = 254U;
    msg.radius = 0.6871632525755483;
    msg.speed = 0.7566512552411171;
    msg.speed_units = 134U;
    msg.custom.assign("KGNLBAFURRHYHALOTDJAZBPGCXPQKIAELFFTCSKJZJOJMESVVWMAYBXBLVZXADGVTNETMUKYMOFHLNVDXEQKWTQQXZLRYMBQGHJPDOHRNLVCUEIIRNSNJJIFZHPQKFCWGRSTMVJMTZYCGETLMYIXSWUYIVFHSUCNADTBGOPTDRSOOUZQFHVIAREZBYUEPLOXSYRLZPKHCYXEBUOIERDKXJANBVSPUGWKD");

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
    msg.setTimeStamp(0.8141682393274012);
    msg.setSource(3197U);
    msg.setSourceEntity(130U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(168U);
    msg.timeout = 54143U;
    msg.lat = 0.8568584072154829;
    msg.lon = 0.5574472933794571;
    msg.z = 0.6554239854196322;
    msg.z_units = 40U;
    msg.speed = 0.8130500265587656;
    msg.speed_units = 115U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2502402232005154;
    tmp_msg_0.y = 0.9426757821867903;
    tmp_msg_0.z = 0.2671918309249942;
    tmp_msg_0.t = 0.2707045248646863;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("APFWPPUWLNYLQYMCQAXYEDNKO");

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
    msg.setTimeStamp(0.44273343129000364);
    msg.setSource(27460U);
    msg.setSourceEntity(12U);
    msg.setDestination(9822U);
    msg.setDestinationEntity(43U);
    msg.timeout = 35723U;
    msg.lat = 0.3240716452601603;
    msg.lon = 0.730669346148157;
    msg.z = 0.25385524289647887;
    msg.z_units = 95U;
    msg.speed = 0.7243459398355425;
    msg.speed_units = 121U;
    msg.custom.assign("BHLFZJKPONTBVIHAFRMGWDJFWMUPFIMBYKEDHULCEHBPGUKKMXTPGDQURVASOIMMEDOZTQWVVNRKXECKSUHAAAYVGOXJNLCYPYQOMWBXSPLUIZI");

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
    msg.setTimeStamp(0.8678595304947311);
    msg.setSource(17306U);
    msg.setSourceEntity(123U);
    msg.setDestination(52328U);
    msg.setDestinationEntity(98U);
    msg.timeout = 4997U;
    msg.lat = 0.7460757596098647;
    msg.lon = 0.0037222311345518344;
    msg.z = 0.8955928096387196;
    msg.z_units = 129U;
    msg.speed = 0.7740064929108379;
    msg.speed_units = 61U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8821795519941341;
    tmp_msg_0.y = 0.9576005842759086;
    tmp_msg_0.z = 0.7319516066450401;
    tmp_msg_0.t = 0.5650055530951014;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GQMOYJOOWSXISMSIIGOFFAEEFZEXMFKPCBBIUHYMJIDBWTTPDYWNGBNCARPHJUBEQENSHLPNLKJIPLJYRLCCUWHRATXGZKLVEQGHZRVRBFQCAFPJTWKWXKLHIHQVUGKOEDSBPLMCDPQWNCTUVGPZYVRUASQMTZLGFJCOVURYSDNNYCZZRNKJXHEDFEZHNYZMOBXDXSAXMTIGQKYFVCPRADABSVKAZHQVIALYDV");

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
    msg.setTimeStamp(0.35896480016094856);
    msg.setSource(13464U);
    msg.setSourceEntity(153U);
    msg.setDestination(44769U);
    msg.setDestinationEntity(122U);
    msg.x = 0.797013241497209;
    msg.y = 0.23634944049842932;
    msg.z = 0.2883105144767708;
    msg.t = 0.5911921035674725;

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
    msg.setTimeStamp(0.7615891843704349);
    msg.setSource(16455U);
    msg.setSourceEntity(53U);
    msg.setDestination(53189U);
    msg.setDestinationEntity(204U);
    msg.x = 0.7063375332106218;
    msg.y = 0.2880799213828411;
    msg.z = 0.7108335042621363;
    msg.t = 0.3192969055156134;

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
    msg.setTimeStamp(0.3019081161027698);
    msg.setSource(37762U);
    msg.setSourceEntity(111U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(4U);
    msg.x = 0.5600426722951146;
    msg.y = 0.8288770911931064;
    msg.z = 0.2992118314779093;
    msg.t = 0.3689246358990508;

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
    msg.setTimeStamp(0.39326342420050076);
    msg.setSource(41587U);
    msg.setSourceEntity(29U);
    msg.setDestination(50917U);
    msg.setDestinationEntity(18U);
    msg.timeout = 8212U;
    msg.name.assign("PWDSGDTKNXXHYHLCQRLRUKOSTECFPFUJYOVXSMRA");
    msg.custom.assign("RSETBFANTWIFFCBMUPGSUNVWUQXOHMESCUHXGMBYOQXPWJTHLLJHXWEHFVZAYAGJKKOZEWRNSSRNTVAIXYODTFLPUUHJCPQDOWOHINVZLWDVUUR");

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
    msg.setTimeStamp(0.9093850940336659);
    msg.setSource(5108U);
    msg.setSourceEntity(35U);
    msg.setDestination(56182U);
    msg.setDestinationEntity(133U);
    msg.timeout = 60412U;
    msg.name.assign("MSDMCFIYRIDBQQJNRYZUBHCRGPHEZIUIZXKKKBDMOOCTCHGNZZXVCEYPEUJAQYTJIMWRNBOZFPLOFOKXGNQQVEPRWQLAJPSAVMXZLTHKLEUFUWLRHFTCLNFWURFSSYYVOTXXPHKWJCIWBCPTNFTNDSHAVPXHDBAVZDLPNGDMKLBPIMVCEEXQWNMDZAFBKQARQSYBGXZJXVCIDWYUQSVR");
    msg.custom.assign("SIHVMVNMXPPPALWUFFOCYNRTSLDSANYCKBRCTFIARXTEUPPVINZOULQOHBYGFFGXBHLHHCURBEXBJQKMZRDRSRSOUZCPAXPOCFAQXXNILSPJGRDVZEEWVWQPVHVZXYIZYAMEJDUCFOWUQOOPKEBCRYMYJZWBRNXLSEVWSGLDIQGSZGILAJJZHDYEZGKMCKJWEWXSIGYMQFLQMNJHDTTKKQBGOOBWYJAVLDAHQAKU");

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
    msg.setTimeStamp(0.14485893337633282);
    msg.setSource(49534U);
    msg.setSourceEntity(26U);
    msg.setDestination(16464U);
    msg.setDestinationEntity(27U);
    msg.timeout = 1536U;
    msg.name.assign("YXMTPJVKXSMTWGCQMVHKDEUGSYDMKRXSLIPCENUOCUKKBQXDWSGCHZELAHOYVPKVAPOBLNBQRJEHSEYETJBXRDVHHDWSYGDJIGWUAMMMDNSYKANFIFJMLHPOVOWAHZFLTXZWQVPAZZJFFRCIJNGGYCUBJFQROZAZOLEIVZWBZXU");
    msg.custom.assign("LFYCACLRJISWUHWHCSDOJYEFGODHZDQFGBLYBUKVOHBXXSEITSBHPJUZLBVJUDHUFIRNOASQSZFETYKTSXZLDRNPTMAUGOWVZJHNZCZLOAWAEBMMSPEQIZCXKCQJNIEDCOXDTFVARJDWGRXQVTXDFFKYVEIZPNAQPNWVRIANWUJZISWDGXLGYFHBTREAXEQV");

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
    msg.setTimeStamp(0.008914008280364039);
    msg.setSource(20094U);
    msg.setSourceEntity(217U);
    msg.setDestination(14635U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.3223776122328488;
    msg.lon = 0.10108710365249574;
    msg.z = 0.2007698102350195;
    msg.z_units = 159U;
    msg.speed = 0.8661593418418295;
    msg.speed_units = 33U;
    msg.start_time = 0.9288498519086363;
    msg.custom.assign("EAAZESOQOOPZTNESPGTVOSILRADDGMYRCUFDXWXQRWDPIYQQKBINNUPVALKXWOMPSAFTAIJMVDXZXWGCPVPDSNGUTOJZEUDCOTZHDXZYJHIHUJYMJKHNHUMHFCFHAXKYQLKQJGEALBYMSXLTAVIZOFMYEKIBIVJJZMVQDBPCCNWQZPCEQGSCFFKRFJYLKUHRVWCDBWNBXUYRTBJVISUMTOBEKGWTRMPOTWL");

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
    msg.setTimeStamp(0.5433991587915603);
    msg.setSource(8273U);
    msg.setSourceEntity(77U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.48933928067793075;
    msg.lon = 0.46609532426898936;
    msg.z = 0.20114487682763948;
    msg.z_units = 248U;
    msg.speed = 0.6378166189793563;
    msg.speed_units = 248U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4687665421363575;
    tmp_msg_0.y = 0.14171079121508023;
    tmp_msg_0.z = 0.6393890753211506;
    tmp_msg_0.t = 0.9381215291439592;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 26866U;
    tmp_msg_1.off_x = 0.6328548353079124;
    tmp_msg_1.off_y = 0.5233106282391518;
    tmp_msg_1.off_z = 0.6021257060743901;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.1702574204480668;
    msg.custom.assign("IHUSBDLQPXASXTVWCOMMAOHJGUVAKIMXKIRAYDJVLCTAMZIEPLZKNFWBBBYGEYOKHKMRVRPJHAJPQPMVGWLDICLCCQINXZEYNDTFIPBVLWOECUDUSRYXUCRWTIQWNHVPNDTNLONYSQSBGLSFSBLNJEPXEFVUWHQGQOMRXDQOKNVAFPVLKGUAWEBFJANCKYMSEIFZXKDWXGIECFZZM");

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
    msg.setTimeStamp(0.051228041755231546);
    msg.setSource(42514U);
    msg.setSourceEntity(94U);
    msg.setDestination(12421U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.08481677604968563;
    msg.lon = 0.7722920270901955;
    msg.z = 0.9595987169265867;
    msg.z_units = 23U;
    msg.speed = 0.10859463176549322;
    msg.speed_units = 162U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8325728758881865;
    tmp_msg_0.y = 0.16348803053554828;
    tmp_msg_0.z = 0.0014761029417927896;
    tmp_msg_0.t = 0.6722447368953812;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 44033U;
    tmp_msg_1.off_x = 0.2464760155537974;
    tmp_msg_1.off_y = 0.013085873676413118;
    tmp_msg_1.off_z = 0.8180296554955923;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.38676281640223875;
    msg.custom.assign("VZYJLNXTFQGCEKQUNVLZECKXOTTHWCBBFHERQMKRYADULANQOFEPYFDGZVPPQREOMBSHCOGAQPRPDJKXNIXNHUGSQBJCBEHXSJQDSZWYTWYOHSMFUGVSWBNIBWTVK");

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
    msg.setTimeStamp(0.5048443286444746);
    msg.setSource(9429U);
    msg.setSourceEntity(195U);
    msg.setDestination(59853U);
    msg.setDestinationEntity(188U);
    msg.vid = 33687U;
    msg.off_x = 0.7132479163781615;
    msg.off_y = 0.23737877662399642;
    msg.off_z = 0.08902672300339709;

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
    msg.setTimeStamp(0.40266278873091144);
    msg.setSource(39971U);
    msg.setSourceEntity(194U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(121U);
    msg.vid = 4356U;
    msg.off_x = 0.5855212486145325;
    msg.off_y = 0.29966946277966455;
    msg.off_z = 0.1035673244616806;

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
    msg.setTimeStamp(0.9868018710691383);
    msg.setSource(49360U);
    msg.setSourceEntity(184U);
    msg.setDestination(53284U);
    msg.setDestinationEntity(195U);
    msg.vid = 37683U;
    msg.off_x = 0.5957659975408867;
    msg.off_y = 0.6996044363139208;
    msg.off_z = 0.7408750357801889;

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
    msg.setTimeStamp(0.24760068720464867);
    msg.setSource(39963U);
    msg.setSourceEntity(99U);
    msg.setDestination(8372U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.029782412177933315);
    msg.setSource(35675U);
    msg.setSourceEntity(145U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.9391669413477681);
    msg.setSource(13646U);
    msg.setSourceEntity(106U);
    msg.setDestination(58291U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.014362251886631539);
    msg.setSource(23302U);
    msg.setSourceEntity(201U);
    msg.setDestination(61747U);
    msg.setDestinationEntity(254U);
    msg.mid = 54286U;

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
    msg.setTimeStamp(0.23095354575922888);
    msg.setSource(21045U);
    msg.setSourceEntity(218U);
    msg.setDestination(43259U);
    msg.setDestinationEntity(165U);
    msg.mid = 10726U;

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
    msg.setTimeStamp(0.766170472997337);
    msg.setSource(56799U);
    msg.setSourceEntity(102U);
    msg.setDestination(53720U);
    msg.setDestinationEntity(129U);
    msg.mid = 34106U;

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
    msg.setTimeStamp(0.9291894308386047);
    msg.setSource(30637U);
    msg.setSourceEntity(92U);
    msg.setDestination(13063U);
    msg.setDestinationEntity(185U);
    msg.state = 200U;
    msg.eta = 61901U;
    msg.info.assign("DJHOVHHUFSBEMPVSSQPGHEMQGRHOXKHTIBGXDIBTNPXCDWKNVXFTBPSYJXOLFGLBNDRXUIGWNSQQNUGZVPVDCHSCOJQFRFKYQMDAG");

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
    msg.setTimeStamp(0.5326862029400357);
    msg.setSource(36256U);
    msg.setSourceEntity(208U);
    msg.setDestination(40745U);
    msg.setDestinationEntity(151U);
    msg.state = 205U;
    msg.eta = 35325U;
    msg.info.assign("ZZRVTNVPKPHTDUKAYZZISXUFMZJXCKFAFWLJGBUREUYGPYNRRCFRBKYHVN");

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
    msg.setTimeStamp(0.6395073569283526);
    msg.setSource(19451U);
    msg.setSourceEntity(187U);
    msg.setDestination(45980U);
    msg.setDestinationEntity(198U);
    msg.state = 149U;
    msg.eta = 15956U;
    msg.info.assign("QXMXAEGZUJGQATEXGDIBKLZUULNSCOLZKEIFAVJSKSWTSBGNPKWRGQASOVVKQVVUXMIHWBSXPJTYBUFJUNATVQDYDKFEXYDIDHGRYEWVYNIINTFKPVZOFHAMHSHRBOPRBSABMONTXNRCLOYBBUAWHHDPLPEZTJGCFMNWJCPVMEZOGLKEAQFJLTERSCULIZQMHDLZP");

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
    msg.setTimeStamp(0.5179044096195566);
    msg.setSource(465U);
    msg.setSourceEntity(179U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(133U);
    msg.system = 36572U;
    msg.duration = 33371U;
    msg.speed = 0.12268238955304178;
    msg.speed_units = 74U;
    msg.x = 0.17458262543262748;
    msg.y = 0.13399792296081792;
    msg.z = 0.7359083982220704;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.16806300079886927);
    msg.setSource(15833U);
    msg.setSourceEntity(186U);
    msg.setDestination(44817U);
    msg.setDestinationEntity(191U);
    msg.system = 26265U;
    msg.duration = 4615U;
    msg.speed = 0.9875531331668086;
    msg.speed_units = 171U;
    msg.x = 0.16268792021440814;
    msg.y = 0.6859767048699685;
    msg.z = 0.7051202202340477;
    msg.z_units = 98U;

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
    msg.setTimeStamp(0.44784754262489634);
    msg.setSource(11408U);
    msg.setSourceEntity(115U);
    msg.setDestination(6314U);
    msg.setDestinationEntity(176U);
    msg.system = 42146U;
    msg.duration = 48353U;
    msg.speed = 0.5259774091857391;
    msg.speed_units = 35U;
    msg.x = 0.6086338154919687;
    msg.y = 0.6732819270199214;
    msg.z = 0.5606258447200664;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.35660804005669344);
    msg.setSource(61811U);
    msg.setSourceEntity(233U);
    msg.setDestination(10018U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.8826102147062466;
    msg.lon = 0.7388639914927375;
    msg.speed = 0.7316344596859587;
    msg.speed_units = 176U;
    msg.duration = 37755U;
    msg.sys_a = 56270U;
    msg.sys_b = 45074U;
    msg.move_threshold = 0.12557356141108222;

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
    msg.setTimeStamp(0.3124984318886376);
    msg.setSource(57575U);
    msg.setSourceEntity(52U);
    msg.setDestination(17820U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.5067265201494491;
    msg.lon = 0.5308730268119696;
    msg.speed = 0.34513815682129;
    msg.speed_units = 242U;
    msg.duration = 55371U;
    msg.sys_a = 61520U;
    msg.sys_b = 63083U;
    msg.move_threshold = 0.2870405408734257;

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
    msg.setTimeStamp(0.3045519558216394);
    msg.setSource(23046U);
    msg.setSourceEntity(205U);
    msg.setDestination(48325U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.7270892953713917;
    msg.lon = 0.4025269176250186;
    msg.speed = 0.07191631542508081;
    msg.speed_units = 86U;
    msg.duration = 6179U;
    msg.sys_a = 50082U;
    msg.sys_b = 10082U;
    msg.move_threshold = 0.31170964795250145;

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
    msg.setTimeStamp(0.8294821873585593);
    msg.setSource(62986U);
    msg.setSourceEntity(206U);
    msg.setDestination(9246U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.530621503585578;
    msg.lon = 0.08108245086617094;
    msg.z = 0.4303197523828074;
    msg.z_units = 158U;
    msg.speed = 0.7572748088659773;
    msg.speed_units = 166U;
    msg.custom.assign("TVXHMXKDJCETOQAVAYCKNBHFKZCK");

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
    msg.setTimeStamp(0.17163766031368632);
    msg.setSource(44421U);
    msg.setSourceEntity(99U);
    msg.setDestination(1385U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.08926306014994279;
    msg.lon = 0.8337427762244152;
    msg.z = 0.704151491942426;
    msg.z_units = 224U;
    msg.speed = 0.38282474550325396;
    msg.speed_units = 34U;
    msg.custom.assign("PBVYMPZCPXQSBWXNC");

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
    msg.setTimeStamp(0.9518770348334052);
    msg.setSource(18135U);
    msg.setSourceEntity(22U);
    msg.setDestination(32402U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.01711982417897895;
    msg.lon = 0.8236736064765113;
    msg.z = 0.2911260892607118;
    msg.z_units = 226U;
    msg.speed = 0.0441757435284017;
    msg.speed_units = 129U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2710249261429377;
    tmp_msg_0.lon = 0.41954433709450345;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OHSCHFWPGYQHKRBGOCYOZINFYFUILPLXUBGOXOJSDXVJOEYCMKLNSVDQQRZNHBAVGGVRAEFGTBUFIJRVJPTPXMUKGIQIPJOUFBBAWKUEVYNNQMLCVCFHTWEMAYLZTHJXYNKXWEEWZZNSIPARDICDBQFVCSTIMNQDIASDIZHLPDSRYQMODMKSTAAJQLYDMEGRTLRUCFOYZCWXFJ");

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
    msg.setTimeStamp(0.20928813233690402);
    msg.setSource(30117U);
    msg.setSourceEntity(8U);
    msg.setDestination(17492U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.7145841114906344;
    msg.lon = 0.5863010694165871;

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
    msg.setTimeStamp(0.038142980039607144);
    msg.setSource(54211U);
    msg.setSourceEntity(90U);
    msg.setDestination(31064U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.525744041631386;
    msg.lon = 0.1196679134109987;

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
    msg.setTimeStamp(0.7039042722601935);
    msg.setSource(40269U);
    msg.setSourceEntity(107U);
    msg.setDestination(11429U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.0911048938770963;
    msg.lon = 0.8414440649751438;

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
    msg.setTimeStamp(0.7807161125285645);
    msg.setSource(20276U);
    msg.setSourceEntity(164U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(42U);
    msg.timeout = 26290U;
    msg.lat = 0.8551067843801239;
    msg.lon = 0.7904170413262473;
    msg.z = 0.9784493199706624;
    msg.z_units = 146U;
    msg.pitch = 0.0709468476594185;
    msg.amplitude = 0.6121007615970805;
    msg.duration = 21554U;
    msg.speed = 0.7226546612630643;
    msg.speed_units = 37U;
    msg.radius = 0.1593391563051475;
    msg.direction = 238U;
    msg.custom.assign("HFMCMLZKZIMDPUNLIYWXJVZCMTROYVEIWAPVEFTWUOFNBWQHYMSHWMGUFXBWTSRYPYHDRTCQSFBREAGFVBXEEVNCATAYKJCSDKOUTXIGKUKLHIGROLKLOJSZZRWVUXDTIHQHUNYKQYJSGUAXTSBHDSPLNNUALRTBEZMPEAKEGJQTNJAVLCCLYLXBXJVFSGRIQSKDVRZODOVWD");

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
    msg.setTimeStamp(0.31477466908666163);
    msg.setSource(23190U);
    msg.setSourceEntity(74U);
    msg.setDestination(34405U);
    msg.setDestinationEntity(11U);
    msg.timeout = 7120U;
    msg.lat = 0.2673300554928124;
    msg.lon = 0.8630834870678914;
    msg.z = 0.5240580371119279;
    msg.z_units = 228U;
    msg.pitch = 0.008166347858069467;
    msg.amplitude = 0.13471099693113908;
    msg.duration = 39668U;
    msg.speed = 0.06119568796437447;
    msg.speed_units = 161U;
    msg.radius = 0.8427323489805608;
    msg.direction = 177U;
    msg.custom.assign("KOSPUSZCEBACXVTPBJNPMADVITABWZXWQHHNOPRTZJQCLORFVCCUYVATBCRYRMXFEILFKZVXXQMHSZYRXFDNQDBJJBJSIJYKZRHVTWEIOFAKFRQJMSPPNGLQHWNIXLYLREWWMGXETVQMENKYZQCUXCPDS");

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
    msg.setTimeStamp(0.9686412166803967);
    msg.setSource(52943U);
    msg.setSourceEntity(219U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(117U);
    msg.timeout = 6444U;
    msg.lat = 0.47869745176834233;
    msg.lon = 0.8664780363977824;
    msg.z = 0.46099100499470225;
    msg.z_units = 211U;
    msg.pitch = 0.20323575997050247;
    msg.amplitude = 0.9692423321803291;
    msg.duration = 59904U;
    msg.speed = 0.6436228501356906;
    msg.speed_units = 177U;
    msg.radius = 0.8191749298275549;
    msg.direction = 210U;
    msg.custom.assign("MUUJNYGBLYOZNBJSRDVDFOIUFNHCQBFCZZVNBPJEVKJMBZWGAXURRKMBAQDFTCQDBXHVNPOYNNSLKMLHEWTKUIYKOSFYLLODHSOOVBGCCYEICPJTRTCTZRSNUFWSWCZEIDGJCIVUHWILYHQTKPMKWWPGAQIJMROPAZQCXRQDTYKJ");

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
    msg.setTimeStamp(0.6577200296714191);
    msg.setSource(12884U);
    msg.setSourceEntity(48U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(4U);
    msg.formation_name.assign("ISCGBKHQFYHLVMZFHDKAPOAGKRJOPHAGIITYVNQZBMSPLXGXGPWRNMACUCGNIBBSYLKZTTOEPBYEQTHWQQJLRZNSNTEEFHXAAQULULZKVEHRMVLFADEDMBFTIKXDFIOEGKHSQCWEPQJOWTZVGLNDZHDPTNXJDFVBPKMUKFOWGVKVLZWYOJA");
    msg.reference_frame = 235U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58518U;
    tmp_msg_0.off_x = 0.09651916480843026;
    tmp_msg_0.off_y = 0.5232049839493073;
    tmp_msg_0.off_z = 0.8914011722424899;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HEFJIUMLJAZBBADQNKPTYDYFFHFEHLPWGRNPVVNRDPDIMVHYSACUAHMZNKCPTMSUXUEVKQTVAQBBECCHIKSJMFMTDVNSUJMVXEUUXMKOAORGONJNRXAWDSIGNXRYQLDNXYSGTSATGWLBFXILCXZRWUBRCEQPDMCWFGJWNDZIKSWYKBJESYMQYTBPCCLSYLUL");

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
    msg.setTimeStamp(0.49938567976276227);
    msg.setSource(8479U);
    msg.setSourceEntity(224U);
    msg.setDestination(61694U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("GQJFPAKLQXNTWBAXLSNNMZHOURDSHTCNJKEBSVTBYEKVJRJACQBWWBMDYWVUICOUMILBYPRKGQKLCWYEKXCQZHVJZHRLEJHXDZGGUQCWWIJJOYISFGGDDAYBEADGHFAZGURFXCMWZFAVAJKQTQGUPTEPLNFEBPBRXYMG");
    msg.reference_frame = 13U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9074U;
    tmp_msg_0.off_x = 0.1847057816983474;
    tmp_msg_0.off_y = 0.8320514787013555;
    tmp_msg_0.off_z = 0.8871999847229889;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LHFHAHPTOPYBOVTWJCKZCYUUOLQIJVGJQCGEWXDAEXDGBTNIFFKATEPFTWTBMQNNDZAIVNDQGEHLFFMARCUGKNIXSIKKEDTSCIPYSKNRINXKMPZZGPGSBCHJVVGNCIQROTBUMPBLLSLJZMYNMWIXVYQMBQZRVPHQKKRZOGMXWECHRWSPHAAOJWWCYHCWZPSLUDAAOJGJRDXBSREFVADBLQOUBLIYMKVUUSFJHRTFQOWMLSNFX");

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
    msg.setTimeStamp(0.2234683863327137);
    msg.setSource(56914U);
    msg.setSourceEntity(188U);
    msg.setDestination(40699U);
    msg.setDestinationEntity(147U);
    msg.formation_name.assign("FVBWXTPAOTYN");
    msg.reference_frame = 95U;
    msg.custom.assign("TBCNEHVAMFQRVXFGKACCTOZUPREIXSOECJONKNNLMRFOOOLHWQXCSRTXWVIENJDMZKXMBMIEAWATWBXYOVIGYKJSICIWMIYRYVIC");

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
    msg.setTimeStamp(0.2937571449893899);
    msg.setSource(49847U);
    msg.setSourceEntity(146U);
    msg.setDestination(36211U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("RHKRRGWJUDTCGMWBRIHKHFIMLZJYOZFZPDCATXNOGLOFLSMYVQNIGRIXEEKSPPEHWYJXAQUIAVMMWHJMRAJBCDBJKQCIXTLSVOEARBXJATBLYNHZELQVFCQMCKTZZYTXKUQUSVRAOESWAOXHIDVZWBFSUTUNZLFPCCPHNBITMLVWAVDPBGCNSWQNYFNUAKSKNXWLBZGEDTZKRIFQSYDE");
    msg.formation_name.assign("QRDMPIXTIDWTHDLNURXULMRKJKQMIAMYSUHXLAIQFRNNDXEPIZSOVHDXFXUZ");
    msg.plan_id.assign("ACMQTBBHQAFXWRUKECYHPTLAQ");
    msg.description.assign("PZSAZESGOJWLGIWHDQULKAUFXJOGKAYQGRAOFZTHEXMKSDZTVGMQTHUDSSXCPOCIQWWLLKTMNZYELKHNVOJOJTJRLNNXGMRPWRQPAFNSDIDZCLXGFWJGWOZEJIBYLIPFYQQZUNJZAIFVNRVTEYPNVCTUAYCYRMAAUHXQQH");
    msg.leader_speed = 0.5937241250259374;
    msg.leader_bank_lim = 0.6779456295769657;
    msg.pos_sim_err_lim = 0.3370892192979065;
    msg.pos_sim_err_wrn = 0.9067278787277173;
    msg.pos_sim_err_timeout = 12308U;
    msg.converg_max = 0.8356456643892703;
    msg.converg_timeout = 2688U;
    msg.comms_timeout = 18391U;
    msg.turb_lim = 0.055931987809650474;
    msg.custom.assign("AHGNFDCHIOPSMWKXLQLIOYZLVEPEOTKXOEVMCSTCBRZKUJVADOHEGTILCFYAAOWZEFUGUNJEDRBXXJBXCSWHVLTSDYLNQWLHRLIEMVDNJCNJKGQGGZIETIZTYSPARWMDKTVQPXZVWAZBOKYYPFXMHYAYBDBJAVUMGBBFUSKHRNAJVMBGURUYHQFHJFWUWEBQAQWKIOPSPNPIRLFWSEXPUPIQMJMSGQMRKLZUNIRGXVZRHOCQDDZCCFNTT");

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
    msg.setTimeStamp(0.4160898515685306);
    msg.setSource(64904U);
    msg.setSourceEntity(75U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("OIZAROZXPAVTMCVERFCUWSYHQUGUQTCNQRPBLFXAPNUKVJLQLSGFDYOYVTAQWPOWTOFVTMLICYCAKADQJPAJSBUSTVSFEDXLJDICJMWWMHXRMOIKINAEQKNREHCGXDYJNIWSDLRHURXQPKKTMQYDWWZOSYCESDKJTHHGQBLBG");
    msg.formation_name.assign("GIVZEWJMYCPXHQURBRXVTKDFDOSCIPXYKWJNJNFHCOPGTNTPTXLRK");
    msg.plan_id.assign("VBPEAUAFTGOQSOMHVFUCEFQCVMZEONHPUVZFCHLIBSJRWIRZRNNBPUGHWPVQMWWWQSSRBELDFU");
    msg.description.assign("YTWIUFRZIKBEHHZUTOYRJRZFNZJSKYEWMSOZXUDDHDQFJMISLYSTBJFAYWMPCDDNGZJYTBSQQZAQOWGPQPCPQRXYUZUDFVUQROXTATMLVXXMBXGSSOQQHCAEUFACKPDLEKLBCNVHVGBJMPAPVWRQ");
    msg.leader_speed = 0.6497601055588444;
    msg.leader_bank_lim = 0.9601672909111526;
    msg.pos_sim_err_lim = 0.6806712101343484;
    msg.pos_sim_err_wrn = 0.5011078773834114;
    msg.pos_sim_err_timeout = 62850U;
    msg.converg_max = 0.37187542742622537;
    msg.converg_timeout = 2061U;
    msg.comms_timeout = 14158U;
    msg.turb_lim = 0.6014019673081151;
    msg.custom.assign("JTLMWRZDCBBYVIZMGIBRDUFVPZKMAOPGGNUSEJLCSBXCOFRKPKEDPXUMTFCJUCXUDNVCRWZYWJVSPFWEKBLFVGC");

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
    msg.setTimeStamp(0.5827160404247259);
    msg.setSource(32412U);
    msg.setSourceEntity(148U);
    msg.setDestination(34450U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("DDAFPESPDGODCMKIQEABRYDIDZTTSCBWOBMBKTSROGLNVSXSFJJEKRTWJNQMYJZFYWZFGODCBGXJINOTY");
    msg.formation_name.assign("JFGAGEBKRALXNDDJYYPWJSUZWBOJHZSJOSNBIBHPLGASRCMYYAPKZDRNOUQVMCFLVNKJFZUMHAYATHFZBQGHWVWLOFVBAKPTVCIVJJLQSJKLXATQTPYZEMFTXURZCWMCMEFFOHBCUISNPIDTSCUBBKUDORYUDXLKTQGCXIHFYOQYSRNEQXGECMWZMPGHNZTKJQLVUTBYTFOLHHPGXGEIMXRVKQRVWIXE");
    msg.plan_id.assign("PYLUEAFUVAZFRPQCUSQEWJKLTFJFAMPDBAVBWYPRVLRCYIQUQUZSVRSVSXYHDYFABNTCNWQSYSWZTONPVTRDNGBJGPTZCLTPMASKXJQFRVBMZHEWXBMSKIYTMNJPIXFTGHELSGALGDEIODTDZMMZHCAPINIDUWAI");
    msg.description.assign("OHBJNNRVZOQUOAHSAEKNBFVEPHIOFLDGTZVIHYHMBDZFWJDMWHUAOQQYYJBUGSXARKGUOKNGYH");
    msg.leader_speed = 0.6419545282115708;
    msg.leader_bank_lim = 0.4853543174498879;
    msg.pos_sim_err_lim = 0.03261771929268609;
    msg.pos_sim_err_wrn = 0.5180048099680603;
    msg.pos_sim_err_timeout = 30663U;
    msg.converg_max = 0.6055225545324517;
    msg.converg_timeout = 20359U;
    msg.comms_timeout = 8636U;
    msg.turb_lim = 0.5925389525002154;
    msg.custom.assign("TDAGSJEWCBZNOAVJUVKWNVNPJEYJCXHIBJLRLZNQMETDFXIPVIPEZRLDFFZEPSVQMZXDWJMVMSRZPRMWXILWIUKRCPEHTUVQHEKATJBAJYYTKSDQQMZBVVSHSKWZCCTTHBBHKYCSTXOGOXFYUDJIPQSGRXKWPUVNUZFGGQLPQQMEIKJAHMYNIWAOKTAOPUWCSWRLCKYLTMSFD");

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
    msg.setTimeStamp(0.7064589036172427);
    msg.setSource(44102U);
    msg.setSourceEntity(239U);
    msg.setDestination(28197U);
    msg.setDestinationEntity(70U);
    msg.control_src = 46909U;
    msg.control_ent = 230U;
    msg.timeout = 0.242925498086345;
    msg.loiter_radius = 0.6936432196834961;
    msg.altitude_interval = 0.6501347446865707;

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
    msg.setTimeStamp(0.06388647418816373);
    msg.setSource(2164U);
    msg.setSourceEntity(103U);
    msg.setDestination(36242U);
    msg.setDestinationEntity(221U);
    msg.control_src = 63462U;
    msg.control_ent = 133U;
    msg.timeout = 0.3910649783126082;
    msg.loiter_radius = 0.6790735428769401;
    msg.altitude_interval = 0.41470996977247754;

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
    msg.setTimeStamp(0.46973822634400964);
    msg.setSource(63363U);
    msg.setSourceEntity(155U);
    msg.setDestination(6035U);
    msg.setDestinationEntity(66U);
    msg.control_src = 30534U;
    msg.control_ent = 222U;
    msg.timeout = 0.6582210484632282;
    msg.loiter_radius = 0.05331866477930369;
    msg.altitude_interval = 0.45170954949957653;

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
    msg.setTimeStamp(0.2401127226770461);
    msg.setSource(5089U);
    msg.setSourceEntity(14U);
    msg.setDestination(9108U);
    msg.setDestinationEntity(71U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6713881091260993;
    tmp_msg_0.speed_units = 174U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6697448517362273;
    tmp_msg_1.z_units = 208U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.15713285333760219;
    msg.lon = 0.4007412186181418;
    msg.radius = 0.7801431448581712;

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
    msg.setTimeStamp(0.15757574930388452);
    msg.setSource(42065U);
    msg.setSourceEntity(59U);
    msg.setDestination(53911U);
    msg.setDestinationEntity(211U);
    msg.flags = 197U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5207596771012626;
    tmp_msg_0.speed_units = 108U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.19503774401714247;
    tmp_msg_1.z_units = 3U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5973838131389231;
    msg.lon = 0.9600489864235477;
    msg.radius = 0.17966253612209615;

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
    msg.setTimeStamp(0.9993326900903349);
    msg.setSource(5522U);
    msg.setSourceEntity(127U);
    msg.setDestination(20492U);
    msg.setDestinationEntity(214U);
    msg.flags = 123U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6391245599747608;
    tmp_msg_0.speed_units = 233U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3265939635950589;
    tmp_msg_1.z_units = 139U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43939228383397544;
    msg.lon = 0.9205381613732783;
    msg.radius = 0.11819169541555485;

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
    msg.setTimeStamp(0.29107374297587396);
    msg.setSource(41354U);
    msg.setSourceEntity(249U);
    msg.setDestination(12926U);
    msg.setDestinationEntity(185U);
    msg.control_src = 8040U;
    msg.control_ent = 162U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.596247387658237;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09790246274352565;
    tmp_tmp_msg_0_1.z_units = 124U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10767961215389299;
    tmp_msg_0.lon = 0.5439622781270126;
    tmp_msg_0.radius = 0.6718850100524051;
    msg.reference.set(tmp_msg_0);
    msg.state = 221U;
    msg.proximity = 59U;

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
    msg.setTimeStamp(0.4285358335705577);
    msg.setSource(40264U);
    msg.setSourceEntity(39U);
    msg.setDestination(19319U);
    msg.setDestinationEntity(66U);
    msg.control_src = 61689U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8277208073832845;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7602595077117944;
    tmp_tmp_msg_0_1.z_units = 169U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9289493174027308;
    tmp_msg_0.lon = 0.13570790182503023;
    tmp_msg_0.radius = 0.14946244032407696;
    msg.reference.set(tmp_msg_0);
    msg.state = 66U;
    msg.proximity = 112U;

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
    msg.setTimeStamp(0.816118469841512);
    msg.setSource(42294U);
    msg.setSourceEntity(16U);
    msg.setDestination(48790U);
    msg.setDestinationEntity(55U);
    msg.control_src = 33364U;
    msg.control_ent = 130U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 8U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7594797412283018;
    tmp_tmp_msg_0_0.speed_units = 99U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5595051386184612;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5892175612837778;
    tmp_msg_0.lon = 0.9030304054406243;
    tmp_msg_0.radius = 0.4032521152802081;
    msg.reference.set(tmp_msg_0);
    msg.state = 143U;
    msg.proximity = 49U;

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
    msg.setTimeStamp(0.024089304315057403);
    msg.setSource(10651U);
    msg.setSourceEntity(105U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(241U);
    msg.ax_cmd = 0.45767475731176543;
    msg.ay_cmd = 0.44201135496147836;
    msg.az_cmd = 0.2981502229626194;
    msg.ax_des = 0.2635750990307455;
    msg.ay_des = 0.1401768421086369;
    msg.az_des = 0.167615893398379;
    msg.virt_err_x = 0.9797480838422223;
    msg.virt_err_y = 0.20658538937540882;
    msg.virt_err_z = 0.6744107417344182;
    msg.surf_fdbk_x = 0.5325526111395606;
    msg.surf_fdbk_y = 0.9978321813413525;
    msg.surf_fdbk_z = 0.4723976336649257;
    msg.surf_unkn_x = 0.6040797521984647;
    msg.surf_unkn_y = 0.28401076529738045;
    msg.surf_unkn_z = 0.03080236608982556;
    msg.ss_x = 0.8722670942185783;
    msg.ss_y = 0.5118741780628338;
    msg.ss_z = 0.7884733823287516;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TTFBDMJAOHOPPKAOXLQFJKRKZZNALAWWSWPIXXEIMQIRQGAPTRATGMDVZJZARXBVCCVEOGROLGMYGJJGGTDTXHQYXVBBYQMWURBFMZTHDYBBESJNOBFVYOCPVHCFXUNMYEMHVWJEYDRNPHZSTVIWUKWIJLQIYNBUDSQENKSXBLLEKTHGHHKCMEWCQPRNIZLUSQCLFSOIGNHQOUFADZDAOUXVID");
    tmp_msg_0.dist = 0.14479194026032782;
    tmp_msg_0.err = 0.19603155896930347;
    tmp_msg_0.ctrl_imp = 0.40387115918693417;
    tmp_msg_0.rel_dir_x = 0.35614320971769575;
    tmp_msg_0.rel_dir_y = 0.23879196306603845;
    tmp_msg_0.rel_dir_z = 0.5844736974775947;
    tmp_msg_0.err_x = 0.09757582448790969;
    tmp_msg_0.err_y = 0.6225091668147328;
    tmp_msg_0.err_z = 0.10193092911228363;
    tmp_msg_0.rf_err_x = 0.9170821616871091;
    tmp_msg_0.rf_err_y = 0.8724205047077245;
    tmp_msg_0.rf_err_z = 0.7973057147985302;
    tmp_msg_0.rf_err_vx = 0.1476043282160162;
    tmp_msg_0.rf_err_vy = 0.551238186273825;
    tmp_msg_0.rf_err_vz = 0.34934234573740774;
    tmp_msg_0.ss_x = 0.5515691432245625;
    tmp_msg_0.ss_y = 0.05197873684154464;
    tmp_msg_0.ss_z = 0.233115929661038;
    tmp_msg_0.virt_err_x = 0.29370323889852645;
    tmp_msg_0.virt_err_y = 0.2578220040075989;
    tmp_msg_0.virt_err_z = 0.17149629836562263;
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
    msg.setTimeStamp(0.04044924985762044);
    msg.setSource(57756U);
    msg.setSourceEntity(151U);
    msg.setDestination(27868U);
    msg.setDestinationEntity(122U);
    msg.ax_cmd = 0.5547845301925124;
    msg.ay_cmd = 0.7334033626920712;
    msg.az_cmd = 0.901184422570017;
    msg.ax_des = 0.5961364370227079;
    msg.ay_des = 0.02099767530225627;
    msg.az_des = 0.056142608427022456;
    msg.virt_err_x = 0.8666514036901891;
    msg.virt_err_y = 0.25416644314146264;
    msg.virt_err_z = 0.7276577368978687;
    msg.surf_fdbk_x = 0.33849415912372105;
    msg.surf_fdbk_y = 0.6334974193848021;
    msg.surf_fdbk_z = 0.1487171467094205;
    msg.surf_unkn_x = 0.5108440764117903;
    msg.surf_unkn_y = 0.026661829413367255;
    msg.surf_unkn_z = 0.6227575110965268;
    msg.ss_x = 0.3361500538483452;
    msg.ss_y = 0.1379029746307634;
    msg.ss_z = 0.5268976060644033;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YJNMJTIDOPBLIZIETWKDMBQWUADMSPCXXSVORMXDRXDRJWGLSHMPRRTPWNWSXVZANVXLBBQWJRONAMKFJVYCHLXUYGMBOVRUAUDCXBJKSHVEOSUTYLPLFXGWDOCTPJQBOAZALIPAKFKGKCHNTZIQOAULGJGWEOZPTYSSHRCTFDNUHBIRQHMRNKZANXTECJNIWQKBEQSIWEFBQVDEIVUUPCZTUFYJPAH");
    tmp_msg_0.dist = 0.9213620494295821;
    tmp_msg_0.err = 0.9919776040810478;
    tmp_msg_0.ctrl_imp = 0.4119110749532183;
    tmp_msg_0.rel_dir_x = 0.8550863090052749;
    tmp_msg_0.rel_dir_y = 0.8050271673245757;
    tmp_msg_0.rel_dir_z = 0.7571470934830382;
    tmp_msg_0.err_x = 0.1325053817312375;
    tmp_msg_0.err_y = 0.3268327394850342;
    tmp_msg_0.err_z = 0.9920243768966925;
    tmp_msg_0.rf_err_x = 0.15862054272191262;
    tmp_msg_0.rf_err_y = 0.0616201608614807;
    tmp_msg_0.rf_err_z = 0.7807844660815468;
    tmp_msg_0.rf_err_vx = 0.9811343855494039;
    tmp_msg_0.rf_err_vy = 0.6495596155157419;
    tmp_msg_0.rf_err_vz = 0.6452774320417831;
    tmp_msg_0.ss_x = 0.62613057988101;
    tmp_msg_0.ss_y = 0.1683408079807459;
    tmp_msg_0.ss_z = 0.25831729288252836;
    tmp_msg_0.virt_err_x = 0.15783041483274418;
    tmp_msg_0.virt_err_y = 0.3254652743378911;
    tmp_msg_0.virt_err_z = 0.9706030549851221;
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
    msg.setTimeStamp(0.6196857686777516);
    msg.setSource(3995U);
    msg.setSourceEntity(200U);
    msg.setDestination(47189U);
    msg.setDestinationEntity(13U);
    msg.ax_cmd = 0.3349405559373926;
    msg.ay_cmd = 0.9903377719737081;
    msg.az_cmd = 0.8747332025691358;
    msg.ax_des = 0.8133977803922195;
    msg.ay_des = 0.13529065985045452;
    msg.az_des = 0.7272093342259344;
    msg.virt_err_x = 0.868508730080765;
    msg.virt_err_y = 0.702790821375588;
    msg.virt_err_z = 0.6010354683675595;
    msg.surf_fdbk_x = 0.18751046919833725;
    msg.surf_fdbk_y = 0.022359919189376187;
    msg.surf_fdbk_z = 0.3102265740713501;
    msg.surf_unkn_x = 0.5632687394685673;
    msg.surf_unkn_y = 0.09417139218659254;
    msg.surf_unkn_z = 0.9186187579222593;
    msg.ss_x = 0.8362461908246586;
    msg.ss_y = 0.7404328671998344;
    msg.ss_z = 0.8765238056482859;

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
    msg.setTimeStamp(0.9848212880450916);
    msg.setSource(13767U);
    msg.setSourceEntity(104U);
    msg.setDestination(739U);
    msg.setDestinationEntity(6U);
    msg.s_id.assign("BIMCCRPUPIFOOTFILKFNUKXYJEOCRFLXMXZYGSPYRBKJRXZIPOWEBBUWMYVPWPLVZOPRNAVVAIXTOJXAYDRL");
    msg.dist = 0.9972359685207892;
    msg.err = 0.1636877562853829;
    msg.ctrl_imp = 0.354118553361382;
    msg.rel_dir_x = 0.3316156141745421;
    msg.rel_dir_y = 0.3540534031773006;
    msg.rel_dir_z = 0.8278089816337857;
    msg.err_x = 0.1235228437919037;
    msg.err_y = 0.33741524681246693;
    msg.err_z = 0.2739255628475402;
    msg.rf_err_x = 0.20392363953867776;
    msg.rf_err_y = 0.719290082138254;
    msg.rf_err_z = 0.9500695613198195;
    msg.rf_err_vx = 0.1423704527704247;
    msg.rf_err_vy = 0.441900343309921;
    msg.rf_err_vz = 0.9487841519677891;
    msg.ss_x = 0.7555282710413879;
    msg.ss_y = 0.3830593175839333;
    msg.ss_z = 0.6833562715211965;
    msg.virt_err_x = 0.882481513603032;
    msg.virt_err_y = 0.05088938636280116;
    msg.virt_err_z = 0.5706293151027111;

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
    msg.setTimeStamp(0.33030210070820365);
    msg.setSource(29552U);
    msg.setSourceEntity(191U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("FZMHETIYAUSBNBPDBWXOBYRCIAVDAUSZJUXHINDWQVZWZRFPAXOKDTTGQNPFIKIDKTFXOKSHRWNQQYZWEDIG");
    msg.dist = 0.6783580777726604;
    msg.err = 0.13874718150811483;
    msg.ctrl_imp = 0.43640215782748815;
    msg.rel_dir_x = 0.10109682682458887;
    msg.rel_dir_y = 0.8261701507268634;
    msg.rel_dir_z = 0.2524833776001326;
    msg.err_x = 0.4011777254248041;
    msg.err_y = 0.16455493561090306;
    msg.err_z = 0.42294090251413996;
    msg.rf_err_x = 0.3216685323024563;
    msg.rf_err_y = 0.25912712083935296;
    msg.rf_err_z = 0.4141470806817682;
    msg.rf_err_vx = 0.12878101740204695;
    msg.rf_err_vy = 0.11342192397833506;
    msg.rf_err_vz = 0.6007274673121148;
    msg.ss_x = 0.4569029397718747;
    msg.ss_y = 0.03279446068622838;
    msg.ss_z = 0.42846337825518277;
    msg.virt_err_x = 0.6956228040407166;
    msg.virt_err_y = 0.44749723180398127;
    msg.virt_err_z = 0.5758084603995732;

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
    msg.setTimeStamp(0.46319608178534444);
    msg.setSource(41607U);
    msg.setSourceEntity(53U);
    msg.setDestination(47755U);
    msg.setDestinationEntity(153U);
    msg.s_id.assign("MGZRWDBYBGDFAZUNSLDEEOITYDOWUBJGWZOLKK");
    msg.dist = 0.28924979312600096;
    msg.err = 0.41600527592530323;
    msg.ctrl_imp = 0.5405184059754886;
    msg.rel_dir_x = 0.7718589200264505;
    msg.rel_dir_y = 0.4980406966785281;
    msg.rel_dir_z = 0.4833183616840515;
    msg.err_x = 0.8311772231912824;
    msg.err_y = 0.5081045706658218;
    msg.err_z = 0.9395980122481463;
    msg.rf_err_x = 0.9613962230036298;
    msg.rf_err_y = 0.8904500648685497;
    msg.rf_err_z = 0.6999036215759145;
    msg.rf_err_vx = 0.28580020537739437;
    msg.rf_err_vy = 0.9172875202430137;
    msg.rf_err_vz = 0.34233429526921955;
    msg.ss_x = 0.045364292484906366;
    msg.ss_y = 0.4228407377866461;
    msg.ss_z = 0.3725881402141046;
    msg.virt_err_x = 0.20904086740893912;
    msg.virt_err_y = 0.7761777013809892;
    msg.virt_err_z = 0.21767090494644092;

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
    msg.setTimeStamp(0.27497555227677173);
    msg.setSource(13155U);
    msg.setSourceEntity(237U);
    msg.setDestination(21071U);
    msg.setDestinationEntity(209U);
    msg.timeout = 7760U;
    msg.rpm = 0.8854880662816019;
    msg.direction = 212U;
    msg.custom.assign("ZMBOIJVEVQAHRSHNQSEOZFTZGSKPJWYEDF");

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
    msg.setTimeStamp(0.8561643876560986);
    msg.setSource(8261U);
    msg.setSourceEntity(148U);
    msg.setDestination(34294U);
    msg.setDestinationEntity(238U);
    msg.timeout = 29547U;
    msg.rpm = 0.23764596921726044;
    msg.direction = 158U;
    msg.custom.assign("AWAISQDXGUKNOTSVKPQXALROMPMRULIWNNSWBFQBEXEZYMMHXHBDXRMUZZARDPXYXRRVIBVPPMGQAZYDPHHHYFXNQZTSKKWINUEJJTPEVBURNCLGIMZTDJTHQXYEJUBCXCBSIGCLFCAKNWILKFNLO");

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
    msg.setTimeStamp(0.2527449838232587);
    msg.setSource(5839U);
    msg.setSourceEntity(95U);
    msg.setDestination(36609U);
    msg.setDestinationEntity(207U);
    msg.timeout = 41002U;
    msg.rpm = 0.6064365898021019;
    msg.direction = 233U;
    msg.custom.assign("TASHPZDLXNKJKUTYTWXYBXKUZQHBJZKRAYVNGCWEIBBUGSKYIJMPAYMVUPDLPNYCEOZNSBPRGTCDLEPSVQFLYZXEIYOEUGWWSCSFHJIHJILSOTACKXHXPLWBRJELGHYBWDNFDRVIMFQOPPRMEHJTLLFZSEVLQHIATZMSOXNICOQFBCUABSDXAMAMKUOMX");

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
    msg.setTimeStamp(0.32817566892239824);
    msg.setSource(14854U);
    msg.setSourceEntity(167U);
    msg.setDestination(46658U);
    msg.setDestinationEntity(6U);
    msg.formation_name.assign("BAQKHALRNXHPWDDNBDZIBQKGBMVFTPWFKGBYWMXJLHXXPVSEAFVUSSYHXNNOOTPONDYECDGEHGIJMWRAMWRQVLSODRUEFZACITALKTTJGNYUFMSXZCDJRFMCWTZPNOIEQUZPHGNIKCPFSBVSALRLRMDWDKEXGWGIYWKYUUQOJFMYEGKLPZVCVCHSNPTBAPXC");
    msg.type = 225U;
    msg.op = 166U;
    msg.group_name.assign("WKWYHPTJVHNSAGGXFJSNHKYYSHQWROVXWYLEFYPGJYXIMROUFHHTWGWYZCZIAI");
    msg.plan_id.assign("EBNIPYNZKMZBVSOJOYGIWWTRABIJTVFFSADWFGNTBDMZ");
    msg.description.assign("ETRRCLKQEPQJPDTPRUPJVEOFEEFXUXCZBWXPFYJHRIJOVXNZLWQGUTVKNQHCUYXWPLMCRSTGFEKCQNVTKUWAQFDJFCCBIGDWYIYJRRCADTGUZSDJRMIEUYORVEISGOLUYHTNHOEWDAGLOZPWQDBKBPHLYGJIXAYFBSBNSLIKBRZWNOJAWTBVESXPNWXZIA");
    msg.reference_frame = 142U;
    msg.leader_bank_lim = 0.6473123915675172;
    msg.leader_speed_min = 0.5620386997119252;
    msg.leader_speed_max = 0.4817198870016097;
    msg.leader_alt_min = 0.3409886515074183;
    msg.leader_alt_max = 0.2959877233651057;
    msg.pos_sim_err_lim = 0.7100761191282362;
    msg.pos_sim_err_wrn = 0.5674493084337103;
    msg.pos_sim_err_timeout = 8221U;
    msg.converg_max = 0.3184811888509135;
    msg.converg_timeout = 19672U;
    msg.comms_timeout = 23410U;
    msg.turb_lim = 0.41846334496717663;
    msg.custom.assign("PICSHRIIXFKHKBMCAMJAKPVDJXKCJRSACEDNIAVKOCXNQYVNSVXMETQIUPCZEYTBOGEDWPBMROJLIU");

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
    msg.setTimeStamp(0.7946890747895782);
    msg.setSource(23128U);
    msg.setSourceEntity(90U);
    msg.setDestination(29680U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("PBBUQZOALM");
    msg.type = 30U;
    msg.op = 192U;
    msg.group_name.assign("TWFQCUJASVKYZIQJTKDDBBGFQVYWHHDJFOJNRIXADLITUZCTEBINABZNAHJKMOIKPQVSBSQSOHLLWFJRPQBCCTBZETORDGVODNXWYGRZGFAEFUGI");
    msg.plan_id.assign("YDGVTKBJYGEJRTDREOJWQYUMZCQULNOUSMOLACMAVTKNNXDUFGLEIADPWGWNGEKHKMNLIXKJZRNVMBVTHAKYXWBBRTRFMVDVMBKTCHPIXAFLS");
    msg.description.assign("MTJAMYEPSPKOIMTZYWPIAKJFYWATESSGWYSGUHIXUQUAAUWTTCNPQKXU");
    msg.reference_frame = 158U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55983U;
    tmp_msg_0.off_x = 0.299274297929244;
    tmp_msg_0.off_y = 0.6613519456389709;
    tmp_msg_0.off_z = 0.5223621947307867;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.35021509814219887;
    msg.leader_speed_min = 0.6535172074572754;
    msg.leader_speed_max = 0.5147636494606854;
    msg.leader_alt_min = 0.1985623411031019;
    msg.leader_alt_max = 0.6510968895010043;
    msg.pos_sim_err_lim = 0.32637723043820444;
    msg.pos_sim_err_wrn = 0.5894815075953052;
    msg.pos_sim_err_timeout = 2239U;
    msg.converg_max = 0.5319769987038475;
    msg.converg_timeout = 39592U;
    msg.comms_timeout = 16556U;
    msg.turb_lim = 0.10419438458439423;
    msg.custom.assign("LLBWJQMRAMIDPYMOMFVVWHXTNPYBGMLQGNEZDKFBVKSWBCJJBXDPYIWASNFQAMLIYXFPOEOP");

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
    msg.setTimeStamp(0.8478955352191131);
    msg.setSource(14301U);
    msg.setSourceEntity(119U);
    msg.setDestination(4452U);
    msg.setDestinationEntity(250U);
    msg.formation_name.assign("GPJNNJPPWSEMTMMPRVFLKNLCBRFKIJCPSDVHJJDWOFGAIYIHBGSUXGSVYQXWUCWAQYLYVHOHVQDOMKLGNYTWVDEARPBHKCUZFQBAXBTFYXJDVFTNOQUVZXIGTHRYEOIZJTMUMQWIEMMSSNZDOLRADTTBBZKPAKNHFMZRFTSGEWSU");
    msg.type = 135U;
    msg.op = 36U;
    msg.group_name.assign("SVEHPGCVQBPTUXPZSEJMWGCBGKFRNSVBXSUACYGULUNREXZEJYYMWNLLLWJAKTHPLHBDOPPAXIHNUZNUIJUAKPWARMJYBOWJAJODTGVCGDISQRWGYGYMSJFCFFTIZFUTCHDQXVVOKKITWAXYDBGWLMDKQTOFHBMRPAZCLKIZMQRAHF");
    msg.plan_id.assign("TFJBAAQOVIFPQGPPJLUCPNOUCSNWXXHZNPDIPTOZZLJ");
    msg.description.assign("GHHXZDMCQFOALSUVUKADOUOLXQQKGRFTARJVWZVNEWDFRWLBJIMPCNZDBWYXLKQNHXJZTYQGYCRBJRHVTHPEINLOISVNGHWFKYCNPJYVOSLIFMFIFTYVMJTBWANUASDFHIPWAQUSTDGRJMGLTYRCCSXLZLXTMJZQIDSRPKPKGBWEKOYOIKUEPOJSWEXVKRGBACUHVMZEPPEBCBZLMHNCHVJNWIFXAEFMSIGSUQAQOXDDBGZRXCEOU");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19311U;
    tmp_msg_0.off_x = 0.9719252649681827;
    tmp_msg_0.off_y = 0.5400217590339971;
    tmp_msg_0.off_z = 0.9425817056731649;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8992463170810673;
    msg.leader_speed_min = 0.5383868631169099;
    msg.leader_speed_max = 0.7612902829029611;
    msg.leader_alt_min = 0.11277142984432775;
    msg.leader_alt_max = 0.6476098003108932;
    msg.pos_sim_err_lim = 0.23407529306337227;
    msg.pos_sim_err_wrn = 0.590117706125881;
    msg.pos_sim_err_timeout = 34587U;
    msg.converg_max = 0.08666384224617263;
    msg.converg_timeout = 61250U;
    msg.comms_timeout = 65439U;
    msg.turb_lim = 0.9392235067922384;
    msg.custom.assign("HSCVPUTPNWMWREQZKXXXROHCHBCCIKTTNYMOSQAQHENWVNDOESLPOERIVJJDGPFLIFINGSJVMUNZFFFBIYOREFTHYWVSIOXEBZYKGZBBYFIYKDJVUXCGSFTAGVOCJJUNDZQRAWZNYGGRTNMUKSJXZTAMIPEQBFGCHASYVAXQGYLTDPVLJPIZZLQHDCMLDPUDNKJTKAKEQWUEAPMWLQKC");

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
    msg.setTimeStamp(0.9163408007180764);
    msg.setSource(8292U);
    msg.setSourceEntity(239U);
    msg.setDestination(17488U);
    msg.setDestinationEntity(5U);
    msg.op_mode = 40U;
    msg.error_count = 73U;
    msg.error_ents.assign("XBXOZCRJSAOWXEDALUFQWDTTZSRYVDKIU");
    msg.maneuver_type = 42569U;
    msg.maneuver_stime = 0.9325714416606593;
    msg.maneuver_eta = 6799U;
    msg.control_loops = 4203980231U;
    msg.flags = 212U;
    msg.last_error.assign("YUMHCILAKGATOLVMHPJSDXLROFJFBPZMNCYMUWRSGWDDILQCJARWPKQMPYUQGLAQTBKAZEDWWLAEOGNVUJSGRQEVIMKXJZZDXHUIBENQEYCCJKBXRKEGUZQCDPVTRIBRVABOCOSTHBMHYHWXCZEZCEWGNTULSDFPKDZNDJULMYFBVKXPIEIMKGJXZSS");
    msg.last_error_time = 0.16759299587405474;

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
    msg.setTimeStamp(0.6499940477635219);
    msg.setSource(26311U);
    msg.setSourceEntity(193U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(196U);
    msg.op_mode = 27U;
    msg.error_count = 1U;
    msg.error_ents.assign("DALSTQCJXYHFFWMLMELGIFYCCHHSAPUTSHYBOBLWIQULHSVDUIGABUMURZNHWUMRGNMNXQNACYZSTPLOWXRPXNDQDQQYIJIMYTFRYWFASVRKHONJXOSOFGLEDFLPWTWSOIRKCQKEWVVEG");
    msg.maneuver_type = 58093U;
    msg.maneuver_stime = 0.5154612217546931;
    msg.maneuver_eta = 48738U;
    msg.control_loops = 4023627226U;
    msg.flags = 116U;
    msg.last_error.assign("PVRPYDOXFCMGRVBMCBNEPCEMNEUUARTXKZIQFRDGDAPLPVXJOBYKWTIONSHOEDQJASVPLBYGZNAVRCCAZUFDGWOGAIPYONRUZLKZDJYUXMIGHEMJVDUTLFTCEJKJOLKRNRZNVICJDKGJFWPBSWWDXEQSHTGSOBNICXIYJQBGHIEHQBXUWIXOHFLQVLZTTIKTWTPHWLXHDUZKSQHEQLUPSYSGKHBZRFCNMFVAOMYCTZLNMWBEAAMQFSMRU");
    msg.last_error_time = 0.1984239673737318;

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
    msg.setTimeStamp(0.701418863541819);
    msg.setSource(51780U);
    msg.setSourceEntity(221U);
    msg.setDestination(1946U);
    msg.setDestinationEntity(134U);
    msg.op_mode = 60U;
    msg.error_count = 125U;
    msg.error_ents.assign("LTWAHDBBFVITBSLERUWEV");
    msg.maneuver_type = 28246U;
    msg.maneuver_stime = 0.5052439559728963;
    msg.maneuver_eta = 5157U;
    msg.control_loops = 1439638806U;
    msg.flags = 89U;
    msg.last_error.assign("VQVQACQYRZLMMUEBO");
    msg.last_error_time = 0.5790476590345583;

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
    msg.setTimeStamp(0.3533091086095296);
    msg.setSource(33633U);
    msg.setSourceEntity(71U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(238U);
    msg.type = 178U;
    msg.request_id = 33436U;
    msg.command = 6U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 59601U;
    tmp_msg_0.control_ent = 109U;
    tmp_msg_0.timeout = 0.29837606503919367;
    tmp_msg_0.loiter_radius = 0.7220753534445113;
    tmp_msg_0.altitude_interval = 0.6580539693451233;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47292U;
    msg.info.assign("VDCXNUNCYHRWBMNYAPPJFHVDCNMSFYZRMRRSTLDQYDMPNJOCGHXPJLIUTYB");

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
    msg.setTimeStamp(0.0835488982368564);
    msg.setSource(25680U);
    msg.setSourceEntity(83U);
    msg.setDestination(56461U);
    msg.setDestinationEntity(49U);
    msg.type = 56U;
    msg.request_id = 8107U;
    msg.command = 33U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.5568869413633428;
    tmp_msg_0.lon = 0.4164484078961075;
    tmp_msg_0.z = 0.9669442332956454;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.6227543297536949;
    tmp_msg_0.speed_units = 215U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.10037150516209725;
    tmp_tmp_msg_0_0.lon = 0.31048328059727304;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("HVQOUNOYNFDDRLCSFQEBEBMPXYUCFQMDJQXOGLIVFBGYDJFSJWAQAJHIYLJNRBNNYRAWCDIUUCH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6797U;
    msg.info.assign("NUVHFYPXMEGIDURUJBNZOBQBUNMEJSMAYNVEJXHRDSDZHASWWLPINWARLNZCERLLJQVVRHFJHKWGLMSYVQEUOYHUZQNTYYBXPLWSROTZACTCKZPJLAZDAARTMNGRYCYXKKFYJBQIXRIPXDGKPOSYIVOPKFEJBXDGOQFUNTBBTGTOFZFQQEVOECSIOKDTVHMGLGJDRSWXJZAVFLMPQSUCPGKCXBENPTVWCZFICKGLMITFAMWBEOWXHKH");

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
    msg.setTimeStamp(0.5569861336496983);
    msg.setSource(38615U);
    msg.setSourceEntity(178U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(59U);
    msg.type = 112U;
    msg.request_id = 21120U;
    msg.command = 203U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 51978U;
    tmp_msg_0.lat = 0.07617282177666362;
    tmp_msg_0.lon = 0.7560766318670284;
    tmp_msg_0.z = 0.3587708154579822;
    tmp_msg_0.z_units = 250U;
    tmp_msg_0.duration = 17074U;
    tmp_msg_0.speed = 0.039825412351770506;
    tmp_msg_0.speed_units = 194U;
    tmp_msg_0.type = 193U;
    tmp_msg_0.radius = 0.06821125440861531;
    tmp_msg_0.length = 0.5565212658531987;
    tmp_msg_0.bearing = 0.6922944924386909;
    tmp_msg_0.direction = 113U;
    tmp_msg_0.custom.assign("RNIODQIQMBCIYUVZFGQRMCNNFKUKZWTDPMWKAVCIEVDEOTUCRUMOPVQILTAWJTAMZI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59960U;
    msg.info.assign("DSQDQAXZYSHWURLQCIKAIWEGTH");

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
    msg.setTimeStamp(0.8931250904170229);
    msg.setSource(10700U);
    msg.setSourceEntity(207U);
    msg.setDestination(9485U);
    msg.setDestinationEntity(152U);
    msg.command = 232U;
    msg.entities.assign("OCIDKBJHXZGBKKSJXREJUGUZYZXOINMGPUAXVYSDICRQFZGHQXIIXKBPMLRLCOQDKSNCTPSKHUBECFMKEMBYRLNPAUATV");

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
    msg.setTimeStamp(0.2470330996037945);
    msg.setSource(39299U);
    msg.setSourceEntity(35U);
    msg.setDestination(35687U);
    msg.setDestinationEntity(132U);
    msg.command = 83U;
    msg.entities.assign("WKNFOQFNRYFPJPCCIMAGHBCRJAVWRBHDOJDUSECZKPKPFWMXBALSQCDKOHESIATDNKNNZXMJYZMDSNYEQUFFFREFKSXSBJCAJHBTVAVIXDJSZKZCKZHVOYEHPUBMPLEGEJQVPYUYRDCGOXRVLWUPLFGYEXSOUPUYILMAWBPXDUVNBXGJRCZNMKQQWVLLTIKSIOQTGWLE");

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
    msg.setTimeStamp(0.689129519086305);
    msg.setSource(37579U);
    msg.setSourceEntity(143U);
    msg.setDestination(59826U);
    msg.setDestinationEntity(141U);
    msg.command = 132U;
    msg.entities.assign("SMPEKOGBARHBKYNXBCHBWZPJPQNUBYHPJSQRFFOHHXVDOWUWSXWWAOCIELQNQ");

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
    msg.setTimeStamp(0.6128596874727118);
    msg.setSource(25245U);
    msg.setSourceEntity(199U);
    msg.setDestination(18889U);
    msg.setDestinationEntity(6U);
    msg.mcount = 116U;
    msg.mnames.assign("ADCQBHOEHSRPZSTIILVBGBADNIUEHFRYMALWBNZVNKMRDCXCOFZVTEXAVMGHSWUUXZ");
    msg.ecount = 71U;
    msg.enames.assign("ESFFUJCVNCYGZWKOPLHXIUGMPWKOSPCCNVEYKOIMZYQLSRZMSHFPUABQPBHWVUMFLCWOWPKQNHRCVMXGWPODRJSHJLPALCDAIBUOBRTNXCJAHRDIVFKDXRCADKLTDBZKYVJGFDYXTBVNIGHIWSTGI");
    msg.ccount = 240U;
    msg.cnames.assign("QJPSDKAOPDLUWOOUOGGDBBIMOKASVZMOWFIIQSRYVDZNVKVCMUENJBGGONQYGNRRXELITOTVILEYQZYDLCLFYKBHCPNFAXXGWZKSMXTQIBBQMDDREOYMWTANYFTZJGZDHHHXTT");
    msg.last_error.assign("FSPKBQBLJZMQPHKZIPGYIENBCRGXXYOSSZDQRHQXKJYZCKIDGMTEOTNPWQTYJAITACLPITGBOHWCZVCCJSSUQJHOLMPMSDMFIRHNGNDOUMZYVFOJRORGMEXLKNAVXJHBFVSXKTDRMJAXAWTFVUQPXQBPGALLHYTHWDRSAOIMPZEGENJWNBVUKWCVPFXUCALWYYRSVKEOFRZDQZNHDNBBEFLFO");
    msg.last_error_time = 0.4556856692339648;

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
    msg.setTimeStamp(0.971173106530707);
    msg.setSource(28995U);
    msg.setSourceEntity(43U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(226U);
    msg.mcount = 214U;
    msg.mnames.assign("HZQXVIZPCVEWLCIDAWLITBZPDLFJSKIMWLFXFKNMTPE");
    msg.ecount = 116U;
    msg.enames.assign("JCOUAQINMFXOQSVVUOSTYYINCTFYZINZQKGUEMPQFVNWATIJOAFZFXBSHPEWKRIAGCKNIPMKBWJCLVGMLKYGXZBFZWHSKJPKBYMXJVRWJAHDAZ");
    msg.ccount = 2U;
    msg.cnames.assign("PHSEDQBHRLDAGMXEDGGIIDEMZMNBWZFWGTQPXMEANIHBXAMTKNPQRKLIPGFWPLSPROAJNQLXMNSHFLOKSHKBAOLSYHJRCTSZUUAGLMCGVPJMDTOXBGHWEOZBNICKTYEGFJKLWAHRYCVJYROXKCCDYXFBNUDUEZKYDTSZXBZAYJSSQXOZUOUFWJNI");
    msg.last_error.assign("VFNDXWLBRYCPUCQPHA");
    msg.last_error_time = 0.5553294877208049;

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
    msg.setTimeStamp(0.598967549361681);
    msg.setSource(20469U);
    msg.setSourceEntity(134U);
    msg.setDestination(41112U);
    msg.setDestinationEntity(208U);
    msg.mcount = 185U;
    msg.mnames.assign("VLSGUVKTXLOEBTGEFY");
    msg.ecount = 6U;
    msg.enames.assign("RXOUVCZGLAMRWKLYZXLJWTMBFKTIMKYMALCVKNANSBTINXTLXVWXSYKTDVAXJPXQGDDUHRTZSEMSNDAHBRRFGYIDXNDDQRGTRSWHJIWPNEHHNADOEXUWIKOIFJUVPPMUXSWLZPEOIKKGQUQUDAJ");
    msg.ccount = 233U;
    msg.cnames.assign("BOBGVJAWZMSBVPPJFVVHDEQSCRSAVRJKINCUZXANHPNPQBFBRWWFXZWZCFPCSHLACCYKQIFMXTIGJSXXZNSUDDEZVMAHRYGLQZZISWADQLDYFNWUUNDENUQHHLXTMXZSWGGRQGKNOEGDTBCROMVPYMYAMRVQDAXLUPYHIMISDJAJJYVBXYLACTFCODYKE");
    msg.last_error.assign("KPHIRZCWQOAQYTJMPFYZRYWKPUIBGURUEXDHNTUWCGZOAPFRMDHSQBKQSIDBKLDAOZMEZDJQUHYHENULBGGBSSQPKCYJHVDRTJEIWNCIBXLTMSBJAEXYPHKBFLAMOTXIGGVFUFQPCBPITCQVEYPMLNOWORYD");
    msg.last_error_time = 0.5306224022111468;

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
    msg.setTimeStamp(0.029390669885716036);
    msg.setSource(33572U);
    msg.setSourceEntity(246U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(212U);
    msg.mask = 70U;
    msg.max_depth = 0.1765073087007406;
    msg.min_altitude = 0.45970824632905294;
    msg.max_altitude = 0.525800070822915;
    msg.min_speed = 0.6960098762273128;
    msg.max_speed = 0.2196558832536406;
    msg.max_vrate = 0.3821565908731047;
    msg.lat = 0.963290453695014;
    msg.lon = 0.22592397447151447;
    msg.orientation = 0.8544681949817368;
    msg.width = 0.40019342403507907;
    msg.length = 0.9660139055702396;

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
    msg.setTimeStamp(0.18842084649109692);
    msg.setSource(17894U);
    msg.setSourceEntity(80U);
    msg.setDestination(49992U);
    msg.setDestinationEntity(177U);
    msg.mask = 50U;
    msg.max_depth = 0.7486448322410564;
    msg.min_altitude = 0.196142735865378;
    msg.max_altitude = 0.9690489449074675;
    msg.min_speed = 0.6704504170169528;
    msg.max_speed = 0.7576737923003685;
    msg.max_vrate = 0.21339088646334559;
    msg.lat = 0.7407334767667826;
    msg.lon = 0.04024196266779234;
    msg.orientation = 0.30439549417123835;
    msg.width = 0.7994831195892925;
    msg.length = 0.20585681733300365;

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
    msg.setTimeStamp(0.5464672308910499);
    msg.setSource(49021U);
    msg.setSourceEntity(42U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(189U);
    msg.mask = 147U;
    msg.max_depth = 0.6895002779863828;
    msg.min_altitude = 0.9923272780980805;
    msg.max_altitude = 0.9736981168276851;
    msg.min_speed = 0.884988132557984;
    msg.max_speed = 0.25647090387611315;
    msg.max_vrate = 0.7818375447628952;
    msg.lat = 0.30493785974068044;
    msg.lon = 0.32416067968680184;
    msg.orientation = 0.7291366637452589;
    msg.width = 0.34205532177540654;
    msg.length = 0.27796693692914354;

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
    msg.setTimeStamp(0.775308102668087);
    msg.setSource(63980U);
    msg.setSourceEntity(215U);
    msg.setDestination(10411U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.6328124693050808);
    msg.setSource(27955U);
    msg.setSourceEntity(81U);
    msg.setDestination(57101U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.9772192615650652);
    msg.setSource(16581U);
    msg.setSourceEntity(87U);
    msg.setDestination(16949U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.6042777268888845);
    msg.setSource(45311U);
    msg.setSourceEntity(84U);
    msg.setDestination(5417U);
    msg.setDestinationEntity(42U);
    msg.duration = 7824U;

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
    msg.setTimeStamp(0.855493225481234);
    msg.setSource(22578U);
    msg.setSourceEntity(79U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(24U);
    msg.duration = 4734U;

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
    msg.setTimeStamp(0.7772159752642714);
    msg.setSource(60619U);
    msg.setSourceEntity(32U);
    msg.setDestination(50908U);
    msg.setDestinationEntity(101U);
    msg.duration = 31754U;

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
    msg.setTimeStamp(0.4953626733204449);
    msg.setSource(61254U);
    msg.setSourceEntity(22U);
    msg.setDestination(61880U);
    msg.setDestinationEntity(112U);
    msg.enable = 203U;
    msg.mask = 1160951851U;
    msg.scope_ref = 3372100373U;

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
    msg.setTimeStamp(0.265975820074141);
    msg.setSource(18017U);
    msg.setSourceEntity(230U);
    msg.setDestination(58703U);
    msg.setDestinationEntity(70U);
    msg.enable = 159U;
    msg.mask = 1951630420U;
    msg.scope_ref = 2992873497U;

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
    msg.setTimeStamp(0.8632208377284545);
    msg.setSource(12964U);
    msg.setSourceEntity(160U);
    msg.setDestination(61571U);
    msg.setDestinationEntity(120U);
    msg.enable = 19U;
    msg.mask = 908569478U;
    msg.scope_ref = 288023871U;

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
    msg.setTimeStamp(0.7540154353691222);
    msg.setSource(21987U);
    msg.setSourceEntity(237U);
    msg.setDestination(62141U);
    msg.setDestinationEntity(150U);
    msg.medium = 39U;

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
    msg.setTimeStamp(0.453291166313354);
    msg.setSource(43279U);
    msg.setSourceEntity(2U);
    msg.setDestination(10873U);
    msg.setDestinationEntity(122U);
    msg.medium = 36U;

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
    msg.setTimeStamp(0.6307354670676898);
    msg.setSource(21947U);
    msg.setSourceEntity(5U);
    msg.setDestination(58495U);
    msg.setDestinationEntity(210U);
    msg.medium = 239U;

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
    msg.setTimeStamp(0.9665519285615217);
    msg.setSource(43889U);
    msg.setSourceEntity(247U);
    msg.setDestination(8327U);
    msg.setDestinationEntity(81U);
    msg.value = 0.9963879215042167;
    msg.type = 131U;

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
    msg.setTimeStamp(0.16585725875914903);
    msg.setSource(51984U);
    msg.setSourceEntity(128U);
    msg.setDestination(9170U);
    msg.setDestinationEntity(2U);
    msg.value = 0.15437178031367438;
    msg.type = 85U;

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
    msg.setTimeStamp(0.20188469338632675);
    msg.setSource(56792U);
    msg.setSourceEntity(94U);
    msg.setDestination(43199U);
    msg.setDestinationEntity(54U);
    msg.value = 0.3354248332893349;
    msg.type = 28U;

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
    msg.setTimeStamp(0.7063681398829789);
    msg.setSource(30107U);
    msg.setSourceEntity(44U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.03713668142091864;
    msg.converg = 0.02668124364709057;
    msg.turbulence = 0.523252836497306;
    msg.possimmon = 48U;
    msg.commmon = 168U;
    msg.convergmon = 233U;

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
    msg.setTimeStamp(0.8835821683138791);
    msg.setSource(2061U);
    msg.setSourceEntity(97U);
    msg.setDestination(48677U);
    msg.setDestinationEntity(74U);
    msg.possimerr = 0.23327161027380527;
    msg.converg = 0.7635794455978323;
    msg.turbulence = 0.01761711825102452;
    msg.possimmon = 128U;
    msg.commmon = 31U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.4646673243801871);
    msg.setSource(60896U);
    msg.setSourceEntity(251U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.28419490351969434;
    msg.converg = 0.8484926366998102;
    msg.turbulence = 0.8184720947282073;
    msg.possimmon = 191U;
    msg.commmon = 217U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.6024989400257995);
    msg.setSource(64553U);
    msg.setSourceEntity(116U);
    msg.setDestination(61812U);
    msg.setDestinationEntity(245U);
    msg.autonomy = 215U;
    msg.mode.assign("BKRUCHIDMDIABXECGIVPONMXWLLUYYNMQEVCTWZNOSVGRJLFXVABEJBZWVNJAJFEIBFYHLWEUPGRJYTQZHEPBSJKDATPDCKMXFKI");

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
    msg.setTimeStamp(0.7445827550050458);
    msg.setSource(32821U);
    msg.setSourceEntity(229U);
    msg.setDestination(56763U);
    msg.setDestinationEntity(47U);
    msg.autonomy = 62U;
    msg.mode.assign("NXCXUCNFEUJHYNTZJJYRZOLXSDOG");

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
    msg.setTimeStamp(0.38823363047140236);
    msg.setSource(43386U);
    msg.setSourceEntity(47U);
    msg.setDestination(27251U);
    msg.setDestinationEntity(204U);
    msg.autonomy = 35U;
    msg.mode.assign("XHYOKYYUJCVBOKSGPZGPWPYCUILVSFWADCTZAZCGITXABQLBMVADPZMOBKMNVKGBZMBKYQJIPHNMGNTESTGYIMLJGFHEMAWOEBKHALLYCYDWIURFVFNSNGREXCXXVDTSDJPOHXBDFDAUSGHQCXHDEPWLJEGNLQILNVVRQRYREAZLOUBSUOTZMSQRFSWWAPIUUKR");

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
    msg.setTimeStamp(0.21832827080676553);
    msg.setSource(47045U);
    msg.setSourceEntity(51U);
    msg.setDestination(27335U);
    msg.setDestinationEntity(49U);
    msg.type = 27U;
    msg.op = 184U;
    msg.possimerr = 0.8847038004155656;
    msg.converg = 0.8023890560996325;
    msg.turbulence = 0.7805150244108202;
    msg.possimmon = 76U;
    msg.commmon = 103U;
    msg.convergmon = 10U;

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
    msg.setTimeStamp(0.03502324378900945);
    msg.setSource(25349U);
    msg.setSourceEntity(37U);
    msg.setDestination(11678U);
    msg.setDestinationEntity(156U);
    msg.type = 41U;
    msg.op = 118U;
    msg.possimerr = 0.06563922083094798;
    msg.converg = 0.6183102452754489;
    msg.turbulence = 0.5998775379797111;
    msg.possimmon = 3U;
    msg.commmon = 8U;
    msg.convergmon = 169U;

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
    msg.setTimeStamp(0.09873556405109674);
    msg.setSource(61670U);
    msg.setSourceEntity(222U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(165U);
    msg.type = 123U;
    msg.op = 16U;
    msg.possimerr = 0.21310595679227595;
    msg.converg = 0.22290788884424007;
    msg.turbulence = 0.3618003325394713;
    msg.possimmon = 21U;
    msg.commmon = 202U;
    msg.convergmon = 55U;

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
    msg.setTimeStamp(0.8325893532162504);
    msg.setSource(47434U);
    msg.setSourceEntity(169U);
    msg.setDestination(43644U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.3157223779282864);
    msg.setSource(61463U);
    msg.setSourceEntity(110U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.2782225002832509);
    msg.setSource(44142U);
    msg.setSourceEntity(75U);
    msg.setDestination(64562U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.6617764060174647);
    msg.setSource(29421U);
    msg.setSourceEntity(212U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("GVTITOXVRIJWNBDJDJKSULPASYBLFAPMZHCUYQBWTXLIEZGRPETCZJGDEXUOYQCIBJEVONMRQVKAOGGETIDXFCXOHHXNQSIRZAM");
    msg.description.assign("XBFZMXVWXFRCLOOSVVPLSZXFRMDYJSFCPTGEGRMJILKNEPMHDZGJILYWRHHAIONMCNGBQRVKCETNMWNGQUSKUFEJYQKRDAMJJDTOXQLGSOVBLNJEPNZFCAEPNQKJJNKLVZERZASBUDHWGPUIIXTWCAZZUXNJXCUMTQAVCUEWYIOTFTHDPABFUZTAVLQBXBEARYMBYOWSUBIGWO");
    msg.vnamespace.assign("ARZCYICEVGMYIYQSLGLZKLTSYTXLOWGUPEKNKEJEVQBPYHBTFHOBVXZQVQHTVQSDODKFWZUGGHQVDMXFON");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("APPEAPGVCSBYGHSCYUWQLPBZBJMSODIPCSZHKQBVELQDHVHLRNFPHVSBBRNVALSUYXBUCAHLSDLOBRXURXUTMVUXZJJPKWIF");
    tmp_msg_0.value.assign("RQEXXWBECAPZQWUWPJIUOIQOMQOALGCICJYXZXNOGRTJOKDQHRMFIDIOSLUWTVSWFYDTDOILUXPLNNRCPNVCHJARSXCQVQRBOYKCHYSKFUVTVUWGNAPTZRCYARPVSBTHJRPJNKLQEBMWBSGFMZKKGXNBBEKFFKIABXFNEHMMYZEHIMFDDVULGZQCSYMPSWCDELGMFJSPGAXGEITDBTKRHAWHQHHAGFBDWOUPLUZJZYLKXIZDJUVSEMTVTEV");
    tmp_msg_0.type = 172U;
    tmp_msg_0.access = 112U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ISSIOKQOUMAFLBMYWOABVVHOFMCUQGSWNFYRDPVZICIEDEAHXUZNUZDRLTUPYGYVECNONFGELBOHCSKSVYBZNJCASGGBJPKGEPTSQWEKRMPFORPAFINRWPJJRAFCZCXGTVIJHBFKDJWGIRYCDNTNMXM");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SFIPBXVXCZZQOWUGXTRHTDYSSCHIFJPOZIBQHJMWVOBNJMSTFJBAFKGBQVQMYUSJCKXDZPTVGBGNPJVFJAUMSKTVEAMWXWUJGMILKHTLXKWUQHERFRNPFBLDVPOEFKNSHPIHHEPSXGTXYORKDRYDXCUVYCONHHWTARPEDQCEWWAYRVLLSJOZMY");
    tmp_msg_1.dest_man.assign("RUMLJIVPOFGXDGXWZJMKVCELMLPRVYSGYSFJRHSANDVYNVORNOHXQEQTWUINYVAZOJANJQDGURKBTGPNFFEMKBRMYUEFILRLMMBSDZXAODXUIGZSWYXTXTHHTWTLTKAQBECMDWPQURKKUQJGYRCPAGRLNVYEWIJIXAPNBBHCIMAFTBBWDZCITUSQZZ");
    tmp_msg_1.conditions.assign("LNNROMUXSBNVFBAJXWSDWBMOSXRPIMCTVYGHFRKREYGKTCZDHGILPNAVYIOMLGEMLHZVNOZMUONCKQKZMHIIQLRDJHEDVZUYJRSKYWIFNGBIRBFFACPWKCADIGGWHERGTOANZZLVDPHVB");
    IMC::LblRange tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 186U;
    tmp_tmp_msg_1_0.range = 0.16469762560818701;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GpsFixRejection tmp_msg_2;
    tmp_msg_2.utc_time = 0.6754583994543512;
    tmp_msg_2.reason = 21U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.12898083806639538);
    msg.setSource(13555U);
    msg.setSourceEntity(139U);
    msg.setDestination(5033U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("XLQGMFBLHPEMFREEAJMWJQAIZCODLJOFUZXVRYISXCBNTSIVIBMHOOGPPAUAOUFRJKSWVTRUYGAKZGZ");
    msg.description.assign("TOFLFDOEVMQYIHSFCTZLFUILCFJCYDNRBREMQTZVHJHFKJVXGBOKGSHWEBZYJDYWLFRRIABQQHVKPJUJGRINLTFGUTETGSOVEBCVRBPGKKLHMNHYKWMZNOWURZTTSPTKLGJSDMNSNVNICMOIMDERSDJDEQAYUAQYXMJHBGXZRNWBWKPVGXW");
    msg.vnamespace.assign("MAQFNTXSPNTIKHRTMUPWXAUCDUFGOIHYYQPLREQMWBBRJUDELVIZAAWGYFYKCONOSAILRNGQGHZJG");
    msg.start_man_id.assign("EQFTTFIAEEBNAKZTTKBMRYZRJNCVTDHQPH");

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
    msg.setTimeStamp(0.16011650129824695);
    msg.setSource(15666U);
    msg.setSourceEntity(118U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("SFLEKHOKZQSXGMFQKHJTMLOUDKDDYHTSIVBQFJKYRSRZVQAAVRPUPMUZACTSNUIRCQWTGUIAMAIZZPNSBEIYBDGXNJZJSDQFDWEPUHKUITVBWYIZHNTVFQGIPKGYXOROHPXZFEHZRLWWGNSWIOVBHLYBCYCJKFJWEJFBGVUJJHQGRBEWSBVXMJHTYTLOZYPQMNDOLNWRLNXTMLRDSXATVGMPCQMWEGILFPXO");
    msg.description.assign("OJAFPMLFTRRFULXNTJOMFYCEAOXGWDIKIEQVBJJNZIXRGAAEU");
    msg.vnamespace.assign("RLSXOYQKTJNKIIWMYQGJVWRDQVCYLOQLVNNHBXXYOIDHKBRAGYNMIMTFXSAKCKBUEAOTECHODREQJZSRJMVLEMERPCDVWWVTFMTSPTFTHNOCFKPXUZZNCIETDWCDFNADPSOGIIHPZBKYPHJZZPRTBSWWRUDYQACLEJSWHYLLIVUXAOMQUKMWVPOUZPPFLFIZQOMGFEBGHUZZFDGGAHKRUSCXXNJB");
    msg.start_man_id.assign("BKMPZYDWETWMVQGUUREOYUIJZAHGYJLCWVPVWAXCFPBAEEIOJVNGGKPSJSBJAHVDQLGTQRRVKNISJIRLOIHUXZLPKDTIOIPDBAUTUTDRLCZUHMYQZLJYPXQCNRFTPSMLWTXCYMPXWQHMQVAKJCSAZRHUFDYDMIOBIMXKKFOTQSNDHVXGTZOSRJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XXSDJRTZHMYUYBIUZABGJVJWNPARTSFADZCQZCUBKZKIRXBGFPLCKOLXQIXXQEMVHRUCEMVFTHXCOLRFJLNEBRPAKOSOPNVDLYNETSPBYGNYJEXBPYUSTCMGQINMLMCIGYPULDVWHDNJJTDAFOUPNVTOJCFQGWMFLXKINDKAGRWOAHZEWQYZHHHKDEZSNMSBZWUCKEIGYHDYRPEWSFQTOKAXROTQMLBWVQMVBIIWZAVGDQJESOJVSWCKHL");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2713589084959058;
    tmp_tmp_msg_0_0.lon = 0.058277800309190275;
    tmp_tmp_msg_0_0.z = 0.8244102313204074;
    tmp_tmp_msg_0_0.z_units = 69U;
    tmp_tmp_msg_0_0.speed = 0.23884217403078123;
    tmp_tmp_msg_0_0.speed_units = 11U;
    tmp_tmp_msg_0_0.start_time = 0.3942083014066001;
    tmp_tmp_msg_0_0.custom.assign("GFIZOGGWSTEVESPRPEOARJFRTVRNXBQGYGZRUYWJKNLDBSXSZATUIAYPHTBWGAYXUBIOFOODPQSJLLEVDYZBJYUOKFXLBKMFWBWJHYVQDAHIUDPQUXMACCMYSNDKWRAWQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::GroupStreamVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.7216895870926898;
    tmp_tmp_msg_0_1.y = 0.1772633592606352;
    tmp_tmp_msg_0_1.z = 0.021436767881054086;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Target tmp_msg_1;
    tmp_msg_1.label.assign("LWKUJKMTGCSYCAPJENRZARPXOSSMVQJYISKQJKZNZMYHCMDLQXNIJYBMISDEHFXWKOZPJXBULGPDMDTUNFDUOGLDDHOJVLR");
    tmp_msg_1.lat = 0.3512404432002255;
    tmp_msg_1.lon = 0.9313776636192342;
    tmp_msg_1.z = 0.363763441600641;
    tmp_msg_1.z_units = 69U;
    tmp_msg_1.cog = 0.8845641360582667;
    tmp_msg_1.sog = 0.7213642404124383;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6455322603285883);
    msg.setSource(53146U);
    msg.setSourceEntity(191U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(144U);
    msg.maneuver_id.assign("IRIEBMJSZGRAGHOAGNUFTGYLCXRIUTSCKVJADYLNFYQVTYJWFPXSLASCSRTKYXXZGWWVHFESAKTQDOBLLEUISEHJCZCOOMTPQXROHDMPHDHONMUENERAI");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("XWEKBRICDVRGXLFQPISHVCGOFGVYCWXJEMQMUDFEWKPJOKLMYQPYWWHMLDDOFWHDXVGKGRAAUIVNYEGCESNXQZKAFMFLHABZRVYNMFJLOTCBIMCTQEPAZUXSNZEEWZRJTLZOICGXONMLUPRGBHPBCYDRTSUSHXRPTITOWV");
    tmp_msg_0.formation_name.assign("LIEJASPNQPFQMLPKRIVSSCRLTJVYDHFHMLEPMAUIWFQJCLUJXXWYCIBVFWACEOETTASZTWGLFEXASVJUDCSUATPFGCFSWBBWZYERUWOIOHSNHDYUGNUEONVBMTQDCZNBDQCPHLIRONKXFJZFXTWBOPTUAUWZERIDPBUHMMDKZFXIYRTNDQOBSISZLQOVJXNJGIDHKBGHACEZOYMQVGLXAKQZLKK");
    tmp_msg_0.plan_id.assign("XCWYKLTKZMLRDCTTPWNUVTOLJUEZHLHNSWQNBXRXRFNBGKNYGKCIAJPWAUJZBDTEMOFWFIDJHOHPPCPCGAM");
    tmp_msg_0.description.assign("TCZTSSLKKJCYDHWWXWNYQIGDVZHYBAYOHBOQBJIAZNRLAWWQSLUPLPDMSDBJUZGCOCSASXEJEFAWTKNMVVMSUKJG");
    tmp_msg_0.leader_speed = 0.9210992685184589;
    tmp_msg_0.leader_bank_lim = 0.5874469014035261;
    tmp_msg_0.pos_sim_err_lim = 0.6497424435502992;
    tmp_msg_0.pos_sim_err_wrn = 0.706345256677474;
    tmp_msg_0.pos_sim_err_timeout = 43090U;
    tmp_msg_0.converg_max = 0.555518878014396;
    tmp_msg_0.converg_timeout = 25946U;
    tmp_msg_0.comms_timeout = 10710U;
    tmp_msg_0.turb_lim = 0.20717257844985448;
    tmp_msg_0.custom.assign("REKKJRXSIQMFIEQNRUJBBVSLCPTHYSXYPKBSYBBRLNOUVAQQMYTKSMEGYAMUZNOLTXHYCGTHCVLFFTUKCKEKKXVJFCWPWBQVGZTMBOEWQL");
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 45187U;
    tmp_msg_1.lat = 0.29685363061668957;
    tmp_msg_1.lon = 0.9669845199308688;
    tmp_msg_1.z = 0.6352269279295648;
    tmp_msg_1.z_units = 192U;
    tmp_msg_1.speed = 0.4675539086671878;
    tmp_msg_1.speed_units = 178U;
    IMC::PathPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.2415458653115875;
    tmp_tmp_msg_1_0.y = 0.11385402081459284;
    tmp_tmp_msg_1_0.z = 0.47107802913647734;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("SQJLOIZJGDFATSNWAKYJVPOBWZYHLDEFUVJMGZQIUKQDHVBDIHGYSHQDWNIAMMEJGRE");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Dislodge tmp_msg_2;
    tmp_msg_2.timeout = 58929U;
    tmp_msg_2.rpm = 0.22209223992973448;
    tmp_msg_2.direction = 28U;
    tmp_msg_2.custom.assign("VEAECTLENXOJAKSKFCQMFVJWFYARNEKCDLVIUZJZQCRSSGLMHLRYRHTQRGFPFYVWBCHDMCFXTXDGQJGLYRNSLDEWQKRBBYJAAFVDQUAFRMAYULVHVWKWGNOTONYBPCMVBDOWXEHMI");
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
    msg.setTimeStamp(0.17122813219010147);
    msg.setSource(47475U);
    msg.setSourceEntity(80U);
    msg.setDestination(55399U);
    msg.setDestinationEntity(218U);
    msg.maneuver_id.assign("BFEYUQONRLHQKTVUPWQULOVBHAAKSEKNRCCIEKSBHJAYJCDYPKNNWSPMMYGTCXXVXJHDABPRNDFPIGQDLHXFSGIJNGFLKUINDDAQNLFQVGBCCHGWCMPU");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QNUPJVNAJDSYRCJZXMHRJQQYMDTBWPVRQCBCXCXCRECLRANFCVXBCTHTQLGFWSROIVAYVLENGTWDFOLWLHRHHTSUMWDPGKTHRJZKSJEQBNVHDFWMMYTZEXGIXPEIQUIBSIFFZQIHWNUFHGLMYNECOBSTLSOORPGNTAXOPOP");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.19393926601042466);
    msg.setSource(61253U);
    msg.setSourceEntity(56U);
    msg.setDestination(58860U);
    msg.setDestinationEntity(130U);
    msg.maneuver_id.assign("KAGPZUFTGEBDIBHOZILBRSKOWBVTWTYZD");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 56805U;
    tmp_msg_0.lat = 0.21438808421999211;
    tmp_msg_0.lon = 0.26255868742685273;
    tmp_msg_0.z = 0.903178974912377;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.6450711877655873;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.custom.assign("ZMOFPYEILDZHJVSELDKZKVOWGHWJFCNAWDOBBIFTOJHWMMOSTLCDUSAFBAFHJATHJZCTRRINLMWATQPQBFOQGRFXUJGIDKINC");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.6728850516691134);
    msg.setSource(23259U);
    msg.setSourceEntity(218U);
    msg.setDestination(25233U);
    msg.setDestinationEntity(126U);
    msg.source_man.assign("ZAQJGNTQRNEBSNMVPCJCF");
    msg.dest_man.assign("UIHXIZRXHPSCMSZAOQDJPDXXOTFYOQBYGITHKJHZFURMVCKXPQRGGVJRPYZDDUBEAUBRPOQVWMFTAWEGFLCHIFKESPZAFLYEGONJHKWECOJTDCHFYDSGOUXONVBGWUEUBTEIIJVZKYBSVZJQRYRYCODNTZMQUTAXLPLJKNQMIMYEMGHVEGWFPOJWLQXAZBCQPBUTRDASIXKZCNWNUJIVWRVS");
    msg.conditions.assign("FAQGTBIKPQYDXTVXSYWBFKEPPHCUZAJJPHCTGXDVNUEQVUOOVXRNACKWSWKUXJWTICVYLGVAWSRIGLAHCMTAGZVYWVAURIWAZLNHHSWLWBGDMRFEQFOHIKLKYHJKIQRQMDPNMJRUBXOIYCZMNOLZT");

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
    msg.setTimeStamp(0.09245421468223192);
    msg.setSource(22320U);
    msg.setSourceEntity(3U);
    msg.setDestination(52756U);
    msg.setDestinationEntity(12U);
    msg.source_man.assign("FMIKIUDNCGFUESROMDYVEZJSBXHTRGYOMUAVDFSGMPCUKQZRTDCQQLOWVYBCWNVHMQNLZEGWIXMDPACABAEHRQYIRYPFRVUBEGWLOJRJJYDPOZCLXNNTDZSSAYTKSNHYKBM");
    msg.dest_man.assign("GEUPZBAQOXVMRXHONCIOEJVVUDCGUOSYADBQPVLKAYBHKHZGZFRAQFQMPMTFHJKTJPTMPXRRAJEBGNWMFWALPXNGNTFWBVNSATLNDGDLIS");
    msg.conditions.assign("SNRTKQHADNTCEAQAMBFDQBXEUJROHDWNEHZONZVZFRAKZOEAUAGNWIGZEOILICURMSJCYLLPVCRJMSDXSCPDBZEDLFTAPLWDQYKGKLHSRKHEOTBXFHWNPOPEGGQEJIPBRIGYWUWUJKPKBFBUYFYRIXWYMYTKAXOSRKDSQCTBUMSDPNJJNSZTNPXQFNILGIGTUQZPOJ");

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
    msg.setTimeStamp(0.14648227480102904);
    msg.setSource(11584U);
    msg.setSourceEntity(14U);
    msg.setDestination(33651U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("SSIBIYXTVXPULKXVLKOGMOIYHYZTOGBBYNCBLZZVRWLEEPYCXDDATIZIWPOINCFVDHGXHKQWONLAFRYLTGMBUMABMNJFLFLAFHDXVEWMWZUDPMMVWGYZPRDEIIJRCKRHGFVTJUTKEQOW");
    msg.dest_man.assign("ZQXVPYFTALMDDNBRHJUOTFLNZYJDEJJUOVPKNSFMMXHHYTKLIJKEYUPCPNGLQEYAYYQFCHOFBKXQTCZLVXTUAIEJWFBOBIPUWMJUVSNNWIACXWZWDEGZYSTWSMHSAEBMGWXRCVELFUAXPVLBPRDBZTRZGJUTDQKSDONEPSUYPVQKCAQWXHNYMEQOAQHDGHRMGNA");
    msg.conditions.assign("EBULXECUMZQMWLBXUAYJVTCQJDTGJQUMRYCXQONVTSACDNWZENRBRPFGXREAZDYPWVWVRKFNQOGAZMQAKIHEDMHSIBFNRZUSAHDZHIRILKBNUJOWOWLMRHFILMKHTYCEYPQIEOBV");

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
    msg.setTimeStamp(0.5020436620112144);
    msg.setSource(15658U);
    msg.setSourceEntity(217U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(249U);
    msg.command = 161U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NFGSNUXRYZJQCPPOFEKJTZVTHRCHDWAVVRQQORHRGRAYUCBGICAISMFVURYPIEDNDZPSFPFNEOBSH");
    tmp_msg_0.description.assign("BXIJFFZNQBMWWMXDTFTUADFNZRVGCYGBYNLINSQSRMKSKSZJGJPEMFKHEPASCYLBAFJZNWCTKMLRAAYGEDCWCCOPPTOEPSXSTULWIFNDOEUGZITKDTYXHLABBXEJGMYZKHOBWU");
    tmp_msg_0.vnamespace.assign("INJVDZCHPBVRFKVCTYLDAXZTYMKLQIQBIZAYNBXEDZXXQVFBYEBLWYNWMHGHSKVXIUPVIUUGNQEZJOVXTVIWCELGBJNJWDOHTERLUBATRJPLRJGBPFHYAGUAZZWSQUQTTFQBPZDVLQUGNAQFSPGTAICKURPSEDBSPXJINAOWEFHWSRROMCGZNSEHEYKRFMUMLHOIMWDRPZSXIUOOCGDFTKSNMYKAJLNLCEGMOTVJKROOJAKFPDWMKDCYQHXWS");
    tmp_msg_0.start_man_id.assign("BVWIDMCIEWJKLBYJLQRDQHFNELFDTNDHIGNBLEZEFDCJIETWWCZPXMDYFWO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GEGPZTVVISJLZGYOYPKLROXZDHSVIMLQUNHQOPAMFUWEDWLTUKJAEQEBXIKJDMNANYLCQFEPCTRCHLOJZOIKJLFUBGKDXQTALKFRIYZHIRCTHINPVPWRFDFIONUSSVEYVXKHAREABFSDIXFNCPEGTWMMCGUYPCMBVQYGIROMOBKDTUDOEWCWKGQJBYPJYNYQQXDBXGRTWHGZAWUENMMJZ");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 59699U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 207U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.16468876326080006;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.20453960883480193;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.5657153249534541;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5717262310108938);
    msg.setSource(51427U);
    msg.setSourceEntity(18U);
    msg.setDestination(25998U);
    msg.setDestinationEntity(78U);
    msg.command = 7U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DIOENECIEQCTEQNFYZWSHZXUUKVGSFBNCONRWSYDQ");
    tmp_msg_0.description.assign("HDHJVSEVGHWNTCUCOXFRXTBBSWUNJORNJZNCLUNHPCXAJDBKRLDAIKJIQGSQRHFHRMDXGGLJLLMSGWTB");
    tmp_msg_0.vnamespace.assign("HUOCTLTEFXSPBGTNSYOGRZZFJJOUKDJTXMACEHVFRMJWUXBMZPVUNDRSRQGVNLPTAAUEVMUIYYHBLTQ");
    tmp_msg_0.start_man_id.assign("EFBSKGWUNKOZWKOTVKAVHAGOMJQNZIBLEVHMXUQSBUYSXBHFFAHNAASZCFHPATMFN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QOOKWZQTFQBXEEAEJWGVDEIRPDKCJDYAUWES");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 7435U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.37559964785925337;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5449917351834067;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6968845318756919;
    tmp_tmp_tmp_msg_0_0_0.z_units = 57U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3522905314002934;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 197U;
    IMC::PathPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.7612106323895331;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.7577627477600996;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.9718436715220854;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QPCRRUCPYMFOBUDOAWQGOXYMAYYNDGBHLXXIZBNSLIPWDHVDZSBKCMQIJKWTKKRSYHLSIPKPWMHSJBFNATGRLGKJODSUXWVOOTEFMYDFAUSLEEVJMEFATIWZTAQZXVMGXXDEHIQTZRIJAUAQIHTZKMOGZVKJB");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YAXDXVBORSYGJZTUQOCDNPNRYWKG");
    tmp_tmp_msg_0_1.dest_man.assign("ODYYZDRPDNHRDFUZWVWADNVGSUPKJZLYCEQQSILFXHKVZTOCGBJLWUCXFEVTQRNKXGMFESVTWBVNUMACOUBRQDNNTPSMWKTMIPNORTSUOKAALPIHKHAEAMVFOFEFZBCOZGDQKLEFHYGQSOLXPPRJSGZCSMTGHAYIIWAY");
    tmp_tmp_msg_0_1.conditions.assign("JWZEWUQUKZONWJMYTUSXQTGMQHCKJTIQTGOVLMRJHKFBCNNBDCVTXOTOXUSRMQZPHVXSDFPFPBLNRKGCXPRUIPLJVOKIKWURZKLCXHVCSUFBKHNWNKWERATHHCTMSIQERQGABXWILDPQWJOJA");
    IMC::NavigationData tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.bias_psi = 0.39803891941861713;
    tmp_tmp_tmp_msg_0_1_0.bias_r = 0.7313116837081493;
    tmp_tmp_tmp_msg_0_1_0.cog = 0.031217535991501677;
    tmp_tmp_tmp_msg_0_1_0.cyaw = 0.6358003157755235;
    tmp_tmp_tmp_msg_0_1_0.lbl_rej_level = 0.897816989198629;
    tmp_tmp_tmp_msg_0_1_0.gps_rej_level = 0.28946434800530907;
    tmp_tmp_tmp_msg_0_1_0.custom_x = 0.9623135915260906;
    tmp_tmp_tmp_msg_0_1_0.custom_y = 0.2823214655171278;
    tmp_tmp_tmp_msg_0_1_0.custom_z = 0.6967876195092132;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Depth tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.5048211593433994;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::EntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("QEHATWJKLOJMLPROFSIE");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.name.assign("GMYJSCONMHBNJQNPLVPQREQAPDNZMAZBZNQXXYTEGEPYOFRLYMZUSVXAGCRSGRMLZVBMIGBUGDJFTAFNSYIDZHGENJBCPCTYQLWETKIFAQHOPWWNKCKSADI");
    tmp_tmp_tmp_msg_0_3_0.value.assign("SVLCLAFFAJQELHKVSIOSNWJCUSFXXEFLXVIVGL");
    tmp_tmp_msg_0_3.params.push_back(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.05037868208196461);
    msg.setSource(18249U);
    msg.setSourceEntity(54U);
    msg.setDestination(51591U);
    msg.setDestinationEntity(124U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EXTGWDZGRBLABWCXXIWLAEAHANTDWDEJRJUSLVOSYORIMWIQMDBUWFOEUOAUFXTQRXTKMONVHGXDPEXMKGIPSMPOZMEBIYJGEGIQZTNJXKORNFLIASQFHEJFBQVCRPLHVFCCBNAYARKBYTTFDEWHJIWHWFTVLYCUFJQQZGPZSZMJTEUMNBOVKYKKARPNPCVDSZCMLYQFUIYMPVWCSBVLGGUHXTNBQPDHIPKDJYXUSLGCOKANOZSSQRHUCLVZ");
    tmp_msg_0.description.assign("ALZNEJTYHRJZBRYIWZRFXMUINGPROZUBRGYJHFIAFNNADETZTCVMKICHSEKOVDISVURDTJHYZCCZQIMENFDCITGUXBWVMXVVTUTAXWQPCLWEOULPSXWORUFHTRSXASDAGFWBMMNMWATZJ");
    tmp_msg_0.vnamespace.assign("LONTYAYFBRCYXFMJRDDZRCWYEGQFJSIPICWTKBHXFLJXIQMUXVTQEHUXAEMCCWOBAWZJYUCZYPOGRHMHMTDUGTWKTKKWXOHJFOURMHRPLPFVJZZQZCGBBXMBNXAOSCNSEEYFYQNGDLTEASAKNOVKFWTJHDJVVADNFGOGKBAPUVCSALKQZSUQJLNFEGOVULPIQBGYHZZDNPB");
    tmp_msg_0.start_man_id.assign("ZNOPMFHECAXADKCAGCRSKEBLSVJJKAWTIJJPJLHSNBYUWBDRQGMNOXYFSVGPUZIFLBVMTNMOZPDLNRSHZUZNYIFHCHYKRWPCLVIMTRUSBXJVMWBWDKYCBUIGPHFOLXXKFXVRCCAVFUHVDEDMENZEERYHMTBCG");
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
    msg.setTimeStamp(0.1175489401562082);
    msg.setSource(16860U);
    msg.setSourceEntity(242U);
    msg.setDestination(16987U);
    msg.setDestinationEntity(150U);
    msg.state = 33U;
    msg.plan_id.assign("ISYKTTPRBGWHISOBVHOKUBWUXOCPHTVLITYCOXAWDSXL");
    msg.comm_level = 11U;

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
    msg.setTimeStamp(0.7385120478075006);
    msg.setSource(9374U);
    msg.setSourceEntity(225U);
    msg.setDestination(34259U);
    msg.setDestinationEntity(136U);
    msg.state = 209U;
    msg.plan_id.assign("YYGBSWOKTRDYCPXURNTMTZROEFBMSODGGYLIBFOCTANUYFHIBAEIYNNRLLJRKWOLMVYMZNGENXCFVBUHMWIQQJJGTHJBCKXIQKNWZBJFCVYJC");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.21965745169079087);
    msg.setSource(63846U);
    msg.setSourceEntity(103U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(158U);
    msg.state = 131U;
    msg.plan_id.assign("NEKHXCOTTVWUZWVLMOLFMYJKPKYWMJZMUOFBAFTKH");
    msg.comm_level = 86U;

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
    msg.setTimeStamp(0.3183008016293991);
    msg.setSource(40712U);
    msg.setSourceEntity(14U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(191U);
    msg.type = 48U;
    msg.op = 217U;
    msg.request_id = 53195U;
    msg.plan_id.assign("KOLDUPOQLCAORDOJJNNGPWHTXKCXAPWSIIBVGLGHHJTLKZUFPLHAHYVTNYWMZW");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.5009150932436138;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HCJFUDSTQYTDUEKJEFWPZXXIDTUFNQYALDTSMWDJRVOWTZXBCHLKEMLZOFSYFVNVOWBLKTZQOYSJZYHRVPXOGIXXUMREWTNMGGYZG");

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
    msg.setTimeStamp(0.4935942269131184);
    msg.setSource(49762U);
    msg.setSourceEntity(178U);
    msg.setDestination(16496U);
    msg.setDestinationEntity(50U);
    msg.type = 12U;
    msg.op = 130U;
    msg.request_id = 61295U;
    msg.plan_id.assign("TKAGYJHMLONTOICVHNGSCEDMQYDANYIKZRKZTHQWMZPJBHUDYRCWKFPEOYVQSMPIXXGVJINCUPCNGNMSWFRRGIAXTYZPLYOVLFVEWWSZZKBKHBKULEBEXWGXSLBNDYNZXPFRWXLDASPJDQZCFVQSSWURHITCZCAPMFJCUUQHNEEPQBFGHVQRKCDHGOJLEBITSFRZBIMQJTVBXNRDBJGUAALWXVTYQAOMJXWEEDUJKUUMLLMPTFAO");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 61460U;
    tmp_msg_0.type = 31U;
    tmp_msg_0.utc_year = 15542U;
    tmp_msg_0.utc_month = 72U;
    tmp_msg_0.utc_day = 145U;
    tmp_msg_0.utc_time = 0.7918818897434777;
    tmp_msg_0.lat = 0.7027062829279108;
    tmp_msg_0.lon = 0.4201041943109627;
    tmp_msg_0.height = 0.8392131369315826;
    tmp_msg_0.satellites = 14U;
    tmp_msg_0.cog = 0.6048661054807705;
    tmp_msg_0.sog = 0.9732310038960433;
    tmp_msg_0.hdop = 0.6322880315291002;
    tmp_msg_0.vdop = 0.4998668946678565;
    tmp_msg_0.hacc = 0.5303733723695764;
    tmp_msg_0.vacc = 0.1297662220175082;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPSYQMBYOKMVSDKQQPLBVLYCUSYOYRKUOGYUHULOKSMSSGJBHHWRVQJQITBJACWSXREKHUPIOZMNGTXVHHITJXRWLRKVRKERZBZNLKICPLFGTNRZYSFWLEWXEDLAQISEXAQMBFCTJCNOQTVIEAPYCTWIXZVFOKMBYEAIWJWGJGULUUFKGBDHFNBJYUJNDLNEWHPFDCPZAEZAPVTRPDZMFSXNXZAOPXF");

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
    msg.setTimeStamp(0.8878932145365477);
    msg.setSource(48948U);
    msg.setSourceEntity(98U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(89U);
    msg.type = 216U;
    msg.op = 245U;
    msg.request_id = 22349U;
    msg.plan_id.assign("WPDREKYJLZDCCRXDANIGTUYPUSUXKVTYFAPWXRFRJHIKLOMABHQZHSCQIWRVOIJ");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("JWLSHSTFTUFODWOKYUZOFSNJTPPSVVPQHCUBURDWROBMMOQLGOHYCSWNVJKFWVEAFELYOWBJVLJGSYULXAZBEUFXLAYTCTTIZGNPDZAASKXGKDQZLCFOFKCPCNAKJFDHGAUKXGPVWISRVMLBERQQYTZCSZQJEENOAMCXYR");
    tmp_msg_0.plan_size = 4416U;
    tmp_msg_0.change_time = 0.6704063254830959;
    tmp_msg_0.change_sid = 44820U;
    tmp_msg_0.change_sname.assign("BZWLDPZOUDOGCSCGJKHNDNQQOSNOKRDGZMVJSEFUJSVBUGCFVKZZILEKFBGXRGJVEBOBABGKSPVGQODXRURXKVPAHHCAWRXHOYCYJMQMTINXHLKLHPFIYNWDQTTYEKANPXPTFZAUTEGMETZMICKHTCYDUCWIIWYYSUXQTFUSBFAQZIRPCJDDJHQVKXNSRHZMFVBEEVNARBAMIWYTSRLIWUTAQWNUPSPLMQBXJOYAOCHWDFELNLVYFMWGZ");
    const char tmp_tmp_msg_0_0[] = {-65, -84, -83, 78, 86, -115, 1, -89, 116, -13, 11, 120, -120, 50, 18, -60, 120, 62, 70, -53, -4, 94, 73, -128, -109, -36, 59, -22, 49, -33, 126, 12, 49, 33, -100, 107, 107, -80, 52, -37, 1, -64, 6, 18, 37, -42, 69, -120, -22, 22, 118, -46, 87, -7, 87, 31, 57, 19, 100, 102, 45, -71, 71, -57, -107, -69, -47, 40, -111, -61, -107, 118, 3, -48, -120, -54, -119, -66, -42, -70, 80, 23, -94, 79, 61, 8, 77, -5, -80, -116, -93, 43, -56, -63, 43, -76, -104, -113, 66, -64, 22, 8, -17, 32, -76, 108, -95, -93, -58, -86, 125, -23, -64, 69, 104, 125, 115, 38, -82, 41, -67, -22, -117, 74, -117, -41, -110, 56, -52, 40, -8, 101, 20, -89, -15, -39, -128, 110, -91, 14, 121, -85, -8, -53, -96, 87, 93, -46, -124, -117, 90, 27, 82, -63, 71, 10, -7, -107, 84, -85, -19};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DLVSJLCKCKPASFBRTABEHXCNBSXFKJMERXIWRXYIXRKCCVDUANEZOQ");

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
    msg.setTimeStamp(0.7306248448063795);
    msg.setSource(14865U);
    msg.setSourceEntity(50U);
    msg.setDestination(45682U);
    msg.setDestinationEntity(51U);
    msg.plan_count = 63823U;
    msg.plan_size = 155177935U;
    msg.change_time = 0.9887383107572655;
    msg.change_sid = 56032U;
    msg.change_sname.assign("DVAORPXQLCBAYJKOEBVVSFUUVPCLZMOZUECXTEVWKFBAKXBDTIFVYJANSZLEZMFIRKRKADVJSLQUGURYLTRNNTAQYAWWXEGLOOYPZRDBBHZWBNGJW");
    const char tmp_msg_0[] = {68, 13, 89, -81, -48, 33, 17, -37, 18, -106, -8, 33, 118, 75, 40, 70, -53, 58, 83, 124, -80, -3, 48, -60, -127, 29, 122, -31, 2, 107, -11, -108, -43, -18, 118, -70, 45, -25, 77, 103, -87, 36, 96, -29, 106, -45, 69, -88, 95, -87, -107, -60, 113, 67, -1, -87, 45, -69, 15, 24, 18, 48, -7, 35, -13, 97, -37, -104, -60, 33, 105, 114, -89, 116, -14, 58, 14, -124, 12, 42, 0, 120, -97, 60, 14, -19, -43, 87, 51, 59, 111, -12, -71, 25, -104, -74, -42, 91, -109, 48, 108, 104, 77, -126, 36, -26, 8, 96, -12, -35, -17, 26, -47, -69, -66, 85, 52, -53, 72, -33, 13, -6, -90, 120, 116, 103, -92, -12, -84, 73, -128, 52, -83, -49, -63, -38, -110, -65, -85, -71, -117, 65, -43, -55, -92, -9, 55, -23, 99, -89, 97, 88, 29, -6, -127, -82, -85, 94, 100, 50, 13, 71, 86, -92, -48, 40, 11, -108, -107, 48, 75, 112, -3, 101, 65, -38, -3, -57, 5, -51, 26, 85, 46, 6, 119, 109, -76, -70, 112, -52, 62, 74, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UFAKDCXLAOHQHBLWHZEFVURE");
    tmp_msg_1.plan_size = 25747U;
    tmp_msg_1.change_time = 0.44524652988290403;
    tmp_msg_1.change_sid = 31324U;
    tmp_msg_1.change_sname.assign("LHYFEGEYWBNWWMMGCNQJWLJGPIMUFMXQLPOPSQCPSDHRCRFSBGXRDJTOUKIYNSSFOALEIHLUCRXSYVPJETKFZQOBJJMXGJJAQKUHXTACWXRSELZFRBHMSEKUZDVWAOGKIYBONYQAZCYAQPUZPTBYWJOPXZXNLMNZANPGWDNXCPQKYFBRHNAVKDGDVCTJMDUGUZRFLOEEDIVIORITVAQEFILHVBFBWLAYTMMISEOCRVVT");
    const char tmp_tmp_msg_1_0[] = {106, -109, 73, 116, 67, -3, 79, 118, 82, -79, -63, -55, -39, 72, -26, 102, 39, -83, 52, 104, -88, 96, 26, 126, 45, 111, 46, -34, 34, -100, 105, -91, 112, -24, 122, 118, 104, -27, -106, -44, -52, -51, 65, 40, 9, 84, 120, -64, 126, -128, -74, 104, 31, 17, -61, -34, 86, -5, -113, 25, 27, -22, 33, 44, 86, -71, -48, 77, 11, 64, 100, -37, -114, 87, -15, -37, -76, -56, -15, -59, -65, -121, 88, -91, 28, 49, 65, -101, -81, 41, 5, -16, 99, -18, -73, 89, -122, -91, -10, -100, 114, -87, -56, 62, -17, -76, -48, -24, -38, 3, -116, -11, 55, 64, 49, -101, 99, -71, -95, 125, 68, 48, 115, 101, 44, -29, -58, -63, 52, -88, -94, -127, 11, -103, -39, -7, -3, 62, 66, -45, -72, -35, 7, 113, -97, -53, 97, -91, 47, 84, -53, -55, -83, 63, -107, 92, -65, -47, 16, 118, -13, 104, -44, 15, -15, 47, 6, 117, 97, 13, 4, 20, -102, -82, -65, -29, 68, -127, -8, -56, -108, 24, 14, -95, -38, -52, -29, -53, 103, -56, -87, 14, 62, 103, 124, 70, 62, -51, 106, -12, -93, 53, 119, -83, -113, 15, -101, 27, 108, 51, 37, -25, -73, 69, -109, 81, -65, -24, -105, -66, -127, 4, -34, 8, 27, 111, -103, 102, 125};
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
    msg.setTimeStamp(0.9108143564957691);
    msg.setSource(59262U);
    msg.setSourceEntity(53U);
    msg.setDestination(52047U);
    msg.setDestinationEntity(81U);
    msg.plan_count = 26774U;
    msg.plan_size = 3736955036U;
    msg.change_time = 0.6191921117185355;
    msg.change_sid = 48381U;
    msg.change_sname.assign("OIGLTYBONPQCJHTGZOUTSVGFAPRXBJDRDVTQDCYCHOVQGFB");
    const char tmp_msg_0[] = {-85, 47, 5, 52, 105, 63, 21, 58, 118, -72, 109, 27, -24, -49, -113, -20, 59, 114, -82, -103, -18, -47, -109, -45, 46, 103, -90, 57, 74, 77, 118, -85, 76, 5, -118, -62, -118, -106, 51, 58, 49, 50, -67, 13, -113, -12, 31, 40, 67, -74, 60, -65, -72, -113, -62, 60, 35, -101, 16, -92, -74, -21, -122, 108, 67, 43, -80, -41, -90, 6, 120, -14, 12, -45, -22, -114, -24, 47, -89, 94, -122, 76, 98, 61, -126, -33, -60, 85, 60, 54, 112, -69, 7, 21, -13, 111, 101, -44, 7, -25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.3361004151027899);
    msg.setSource(22890U);
    msg.setSourceEntity(122U);
    msg.setDestination(57984U);
    msg.setDestinationEntity(13U);
    msg.plan_count = 14831U;
    msg.plan_size = 2764010753U;
    msg.change_time = 0.8431511175750949;
    msg.change_sid = 58585U;
    msg.change_sname.assign("JFMVFWDSEKUECISXKBNEYFVOIXLTWAPYOLTBFEKSYKOHINSMFYIJRNBBTBRFHGRUDZAUXEUPJRUZHASLQFBVMMAGLRTLIBXTAIOSBYZEIKHKWQNQQWTGCWNYARPV");
    const char tmp_msg_0[] = {100, -5, -1, 30, 106, 28, -36, -85, -78, 74, -91, -58, -7, -11, 102, 10, -107, -114, -66, -126, -86, 30, -104, 59, 22, 43, 68, -66, 117, 8, -43, 76, -8, 54, 18, -1, 35, 10, -114, 86, -117, -64, -110, 42, 30, -52, -27, 52, -10, -10, 97, -15, 113, 21, -128, -61, -63, 75, -42, -15, -2, 26, 22, 19, -104, 64, -81, -3, 102, -77, -32, -76, 87, 104, 77, 121, 87, -38, -32, -70, -120, 91, -29, -119, 74, 74, -117, -108, -48, 80, 71, 64, 43, 66, -49, 4, 102, -78, 65, -4, -16, -29, 5, -66, 13, -94, 16, 77, -86, 111, 14, -126, 102, 109, 17, -43, -39, 35, 46, -47, 47, 47, -20, 49, 30, -103, -2, -40, -98, -107, -105, -28, -26, 75, 111, 21, -64, 83, -87, 32, -92, -11, -37, -3, 13, -7, -45, 96, -76, -86, 102, -99, -106, -29, -81, -124, -99, 122, 67, 85, -103, 22, 76, -60, 122, -71, 99, -66, 22, 46, -3, -91, 101, 124, 117, -1, -100, 97, -57, -95, -60, 3, 22, -57, 65, 43, -90, -106, -127, -6, 49, -7, 82, -85, 121, -85, 108, -27, 35, 9, -104, 97, 39, 80, 34, -126, 10, 84, 116, -21, 52, 28, 48, -107, 85, -98, 72, 93, 104, -51, 41, -43, -103, -100, -24, 6, 112, 65, -16, -67, 69, -97, 95, 65, 15, -71, 99, 82, 48, -2, -53, 117, 75, -82};
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
    msg.setTimeStamp(0.8734922456469671);
    msg.setSource(27807U);
    msg.setSourceEntity(124U);
    msg.setDestination(32306U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("HLWIIMZDWIRSNSPEOFS");
    msg.plan_size = 6502U;
    msg.change_time = 0.5720911679245471;
    msg.change_sid = 35319U;
    msg.change_sname.assign("QIJVATSKHHKMUMIZQDQMGUCOQZROHSXHQCHKCCCNFLAUEPOMUSWLTKWLBSOWIPZTCGYVAEDBNKXFVINPMYALCXETSVXAROMDWMDTUHGZXVRVLUFVGWIALNBKDHA");
    const char tmp_msg_0[] = {37, -114, -111, -27, -30, -71, 86, 90, 47, 22, -82, 29, -59, -8, -35, 117, -30, 30, -8, 55, 89, 0, 73, 72, 7, 53, -106, -70, 66};
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
    msg.setTimeStamp(0.07849402017111118);
    msg.setSource(36796U);
    msg.setSourceEntity(177U);
    msg.setDestination(6601U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("VMYPERBHHRQQCVHHPLMRRMTYGWXOHFYSZGDBBNEGARYCLJCHNZCKIZHFKQZJOZYLA");
    msg.plan_size = 9848U;
    msg.change_time = 0.5554096475148383;
    msg.change_sid = 50993U;
    msg.change_sname.assign("WATEJDSOBADCVBRSDNNPUFEASMWJRXRCQLQBJGXJYGPXPNNEHINPUVCSJMIFJHMGPBOKCTWUHXAOMFXBDWVNZXMPLIQWYMWINEZNKUVXUHTEEKRWJIHSAYZNQPEKCKHDLYYDZHDGYOGZITTQZRYLBPMFWFBHKCGXRLVCSSLJTFTFTWILDYWPVPJAHGROEZVRVYLIAXEOBUGSZCVBSKV");
    const char tmp_msg_0[] = {-121, 121, 76, 75, -104, -120, 17, 116, -21, -23, -124, -50, 125, -31, -118, -122, 106, -109, 51, -89, -40, 11, -33, 73, -106, 92, 106, 68, 71, -26, -36, -54, 120, 38, 88, 34, -76, -29, 70, -68, -13, 38, 63, -18, 98, 95, -117, -103, 104, 7, -46, -100, -45, -95, -90, 84, -60, 28, 71, 21, -107, 43, 27, -48, 77, -80, -49, 90, 120, 39, 125, -65, 21, -77, -103, -101, -71, 21, 89, -93, -60, 23, -70, -80, 46, -30, 71, -69, -31, -98, -8, -78, -88, 36, -94, 121, 76, -46, -120, -103};
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
    msg.setTimeStamp(0.9327237480236191);
    msg.setSource(58071U);
    msg.setSourceEntity(81U);
    msg.setDestination(31700U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("QERRRQESXXZDYSVQAAOUFCZTVUDNLDWCHNFAJAKJFAPVMCJUIZKHSUYRGPRGOSTDZGQOZYEBBKFMBBKSROVAPEYBXIAMWKMMHJNWSYQKKAFLJKPXJGCJRBIOBSNWIRHWUTNXN");
    msg.plan_size = 60452U;
    msg.change_time = 0.9339539276766253;
    msg.change_sid = 55507U;
    msg.change_sname.assign("CYRLXCLCDVCRGVCTPDRWCJPCCDNOZXIMWSOGXAQRKWHWPNQSREGJBVXMZHWYENKLLXITNWYTKBRYEJKOYUDNMFRAPJEVOTZ");
    const char tmp_msg_0[] = {67, -8, 123, -101, -108, -67, 68, 81, -21, -95, -7, 55, 11, 112, -60, -112, 108, 52, 111, -21, -110, -118, -97, 35, 102, -84, -70, 96, -47, -42, 46, -29, 31, 30, 31, 13, -62, -73, -120, -39, 32, -128, -76, -16, 103, -10, 92, -71, 119, -118, 50, -68, -100, -107, 17, 0, 112, -59, -27, -80, -64, -5, 85, -64, 61, 13, -6, 105, -99, 62, -10, 76, 47, -118, 23, -26, -113, 106, 18, -62, -38, 55, -88, 37, 63, 80, 49, 57, 115, -45, -55, -124, -63, 88, -94, -24, -95};
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
    msg.setTimeStamp(0.5583677446595179);
    msg.setSource(799U);
    msg.setSourceEntity(187U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(184U);
    msg.type = 122U;
    msg.op = 236U;
    msg.request_id = 41806U;
    msg.plan_id.assign("HQGQZSVDBNHSPIPEDTIVDEGBNSOQDVZBLTPXFYYA");
    msg.flags = 8288U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.7166250082401147;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZYZHVQMEFRWYJICGPZWSIYOZWGKCHCTWUUGORDGLNEBJGXTTNUFOJKFPSKCEHWLSPXSNWKVOESWLQZSSIYTRESMYAPMTBRWQXNOKMDFVZJHBIWVCIAQAQLQHARQTIHZYIMBVHDKZBPANKDJXIJNQDPUGFKVDHDFMUCGEOUPOAXVEVGLHXAFDNUSHUICFRYEBGOBKQXYTZJBCEZJDIFWYPTCOJLELNFLUAXTRMXKVXNMAGVRYB");

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
    msg.setTimeStamp(0.2104756631177569);
    msg.setSource(18010U);
    msg.setSourceEntity(32U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(219U);
    msg.type = 113U;
    msg.op = 137U;
    msg.request_id = 15900U;
    msg.plan_id.assign("AGXKTGOUKWQPW");
    msg.flags = 17183U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 20879U;
    tmp_msg_0.value = 214U;
    tmp_msg_0.error.assign("XAHCMUJYULMMNGNFMDTVTKEGOCVVRJKASKXRGVDIUDXCZSPTNQWORASWHZWOCPWNIEUGLFBNBRSMFCEEXHYGXWPDOSVMMFTXUAJGVRPWDMMTAZFZYFODBBLOZGXQUBIQIXGYOOZNJGXYBSIIRYYICQBZLDBXHEATZRKAAQWYBROVNTISWMIFKDREVDPHCBEEEJAJRHZQHQUJLTCKNPCJCLYSKVFDFUSNJAQKTO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LGESAPJUNJDEXYQTQIHADOTZAKYSWFLNBK");

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
    msg.setTimeStamp(0.9466098098341673);
    msg.setSource(32123U);
    msg.setSourceEntity(43U);
    msg.setDestination(23843U);
    msg.setDestinationEntity(211U);
    msg.type = 63U;
    msg.op = 35U;
    msg.request_id = 36741U;
    msg.plan_id.assign("WUUHKGHLJFLAYISLQREECEYZQSTPDJFOMTMBSLPGUFMKZXNIETLGJXUXSUEAPCGOUYMEVDOEOCWSOOMYOJNFUZBWHPCRICQFLYNPCKTNRTPWFVLMMXVVARKFDXBWIYBSNEUGCIHZRIXWHBJAROZTDQRCOQHQDNBHZADTVVQUOSKREGPFTNNTPHIAKBDNVIIKXEXQBGRWALGDFYWUPMDAZYBXHRCVFJHQASSXTMVSLQWKCNVJPJAIY");
    msg.flags = 9069U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 156U;
    tmp_msg_0.op = 74U;
    tmp_msg_0.plan_id.assign("GIGAEKANSQCIPAPSZEQZQEFYCDFHNFWIIZGCFWANVNQMUKGTBTKJJPABVKOFNQHTVLWY");
    tmp_msg_0.params.assign("POZTSGWGIRJETJSLEZWUKDDSIBXYS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WPGBHYWQGALRTQZJYBTQPCGMJAVREUKICLCWRJROROGVINKOZKXHFTLNNPXVSJUIDHSUEDIDBPGNJCVJOGPOAEQLRFLAYTDFXSWIFACIFAWSBCDZVSHNVNRHKATJSQBCSUBVVQEZKPLELZUTJYFFHCRTBGXUMEMJENUTBPDZBQ");

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
    msg.setTimeStamp(0.6757258904070496);
    msg.setSource(47773U);
    msg.setSourceEntity(194U);
    msg.setDestination(11797U);
    msg.setDestinationEntity(195U);
    msg.state = 194U;
    msg.plan_id.assign("JEREBSXTUOUKNMZJCIVAPYGOYYTIYISXBVMGZEEKBLUSENKLTYJIZZVFRHNWQAKSTQDVLJKCAAWMHIDWCFROBADWQUUHZKSVVKTBYHIVXPTWYNPQORUEQMMZDXLCOUTWLGOBPCFUBNPBDNNIFFZCCRXLMHJRO");
    msg.plan_eta = 34167844;
    msg.plan_progress = 0.36905003101876876;
    msg.man_id.assign("PWBSFGXHVBBTZMVCYHKAEZUSVMWMUIHTQDOXLJYNIIQUUDZJXOKPOIQHDRCJBBTWALYNYCLBVNTWNCSWPPACPQNBZHLSKTIELFIQOEYRXOKNSHBUTTVKBHZDSOKWWLAOQYQCPGEFUWJDKFFMRXGXDUYPRQCYDMSQAMGDXDNPYITXXJSIJENZFJFVRKARIKPNECLDACFRGWHNLRZFGHEZLOMWSAMTVQOUJEZIMGUVH");
    msg.man_type = 38892U;
    msg.man_eta = -1380833794;
    msg.last_outcome = 135U;

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
    msg.setTimeStamp(0.1816124244749976);
    msg.setSource(57748U);
    msg.setSourceEntity(250U);
    msg.setDestination(44989U);
    msg.setDestinationEntity(49U);
    msg.state = 176U;
    msg.plan_id.assign("ABLPDFDPXRDVRJTZLKUVNCLCARNGVLOOTQDURNWUTTHYAVXNSWQVHBYZFHDZCSBESMBKYWUQNDHSITFSWAWPCQWMHUEQICIDFPMSAKJ");
    msg.plan_eta = -877339955;
    msg.plan_progress = 0.4690692172015345;
    msg.man_id.assign("NGLMLCOEZLLNLKRXRBBABIDFZWPMMQDBKIXTBUJOEXWYRCDJEFQNOLREKHWPTQKWJIJZEYDHQCGFUAVJUOWVIKVFTSHRKZHNTHBVNMPZWFUXTUTCLVHJYHEDDYYIFKPQSQREWRTQSTYVNEKOBOXGOFUWEBSMPKJDWUNFCXVZGQDZYILCWIBGDSDPOGMNSCIZM");
    msg.man_type = 5761U;
    msg.man_eta = -1233957416;
    msg.last_outcome = 208U;

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
    msg.setTimeStamp(0.5635839211573999);
    msg.setSource(18401U);
    msg.setSourceEntity(207U);
    msg.setDestination(37100U);
    msg.setDestinationEntity(234U);
    msg.state = 30U;
    msg.plan_id.assign("NPGUDHHVWJPEBQOZRAMRUXRJLZCRPDVFXOZBYCMYDRXYWAFDAZINKIPKATYPBNWUPCGGQNQNWXURHLSQJCKAYQYSMEDEARBXKZFX");
    msg.plan_eta = -1513820445;
    msg.plan_progress = 0.25572556572240235;
    msg.man_id.assign("GRHKSFPVALCLABLVAFSHSQNEUIADJTQRWJRCRNWGJOGEWMIBWVJVPKPTLHQX");
    msg.man_type = 34849U;
    msg.man_eta = -709610108;
    msg.last_outcome = 201U;

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
    msg.setTimeStamp(0.7535030088743742);
    msg.setSource(21556U);
    msg.setSourceEntity(98U);
    msg.setDestination(22078U);
    msg.setDestinationEntity(158U);
    msg.name.assign("YFHDHPWVIJBFONPOXZQJHGBAMJSKXWKCGYAEGTBUSHHGGMVJKRLJGVNKLDYFUPMIBJSPSMREVQCVHXQLLBXUIYAPDUUSBWUAZEUWMQVLEKCEMFWOIKAOLCZTNDPMOKROJDHEFQQBRNZSHTFVBZCGKRYGNTCLFPFWUXMPVTOLXZCNZQDIHDOJKSWGEXLXNWWUNTVXHYEDRYIPEEKAQ");
    msg.value.assign("UFGOLNSIOWCXZNTUHNEAIHWXYQRSQDLATRIQNPEOBBPZJZGPTPDRILVYMKTDXBSPURDKMEYJNZJSHJYTUAHGOXNFAVPZWMSURKQWBZMDHTLCFRQLKRDPWYCPXLLGBUYTFEWQLARVOMNJCIGBCEEVAAZXCJSVFWOIYOBSFXVXREKTHVDCNATZKUKWIMOJCEBOJDSRHQAQMAHUCWFHKETYDYMPFEGDZWHUMNILQFSJXPBZLKJVBGKXGNFI");
    msg.type = 37U;
    msg.access = 95U;

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
    msg.setTimeStamp(0.6887083624305637);
    msg.setSource(40220U);
    msg.setSourceEntity(3U);
    msg.setDestination(896U);
    msg.setDestinationEntity(112U);
    msg.name.assign("BIPGKIVPTGAKXARAQRVADFDZGTILURRDZGXSBIKFGQBOMWENIOQOCXWSEFSYNTZACCJVNBLUVXPAKCUYLYSOGWZUYGDQOSWNARPKXFUWINJTMMIWXOBFKHGNEMYDHPDPDPGJWBWU");
    msg.value.assign("TSWTNPAVDBCLUMCUWTCFEEHNFSMGYWZPUUZQAAXFLBTNTOMKTXHYKHMIUXUKBWEFNYBZGSUTCIEIPSECDEONQXNR");
    msg.type = 230U;
    msg.access = 69U;

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
    msg.setTimeStamp(0.11780996614275896);
    msg.setSource(11516U);
    msg.setSourceEntity(139U);
    msg.setDestination(37489U);
    msg.setDestinationEntity(147U);
    msg.name.assign("ZHVONBJZWQERHLIVQMHTKJAAQFXUSLXMPJWVGTWRSSHVMYQDQLTSBKIEPXGSZACEHDHUUROYTRUCMVXIVATKANYOUNGRQQUNBJVABESCZGFPZXHDBAIOJRATBKAKJLBJIXAEZWECFHYSFKIWGCEYOCCICTDIXMYDBLYFZGLLVNMBGOFDEUPJDSOYNNKSKFGZNYEPWTFJSUKNTWCPZGMLBKHNOURFROXUDHLEZDQQVL");
    msg.value.assign("KSCGZJEJHIZUVUDMFSCUUGHTXYVDYPBUHKALQKFGPLBSINEAJCJYPOYHBNQEAIKOFOBQPWBHPQOIFEGCVXPNCAEHSTFRRLFKVZLUTO");
    msg.type = 64U;
    msg.access = 152U;

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
    msg.setTimeStamp(0.6022951083278308);
    msg.setSource(5462U);
    msg.setSourceEntity(122U);
    msg.setDestination(62213U);
    msg.setDestinationEntity(17U);
    msg.cmd = 62U;
    msg.op = 180U;
    msg.plan_id.assign("NFREQKITIAFD");
    msg.params.assign("PXQVDTJNALLRIGXPVSFCGVFEMJCUYCSUUSWRQLOFQKJIBMCITKOOISEDCTVUDLUCGYDYMOAHSVAHAXKBHILISXYIGKUINWPQNNFBEGAOTVWVKNZHXJQZMLJMDNTUDBADQBMDKTYLRWRJFCHJNZIVPFRZAMSUDYQZEIGECBXVFLKRHPTRWHZWPPMTBJSQYEOOBWRXDMQBHCPKXRGGGZPEQALEFNOHXLJTHUYYAOKVXEWM");

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
    msg.setTimeStamp(0.03314444684207729);
    msg.setSource(44695U);
    msg.setSourceEntity(48U);
    msg.setDestination(18797U);
    msg.setDestinationEntity(166U);
    msg.cmd = 232U;
    msg.op = 143U;
    msg.plan_id.assign("PEPUXEQCTHEMURLSEMNTZWCBCAZIPJIYEJEHQLDQZMABDHDOFKWHBJOOGRSAZIGKYHTUDHOYDVMTIIUWQXYRRCBWCNAVLKEQTFSGOZWGZABHKFOGPQPXIWNNMAXBNTJCFAXBXFYVLVDWFZJGGLVPVTKUISAXUNGIMAFZBXDGJWRUDOPRLYUXVBLZPVQKLCLJSFVNBTAKEOKFMJPPSYCHDTM");
    msg.params.assign("LRMHLORECFACLSNSCVULKXXVJNFMOTZAARHTPJKUIXSPFHWNWZDOLEYBIFQBYMRYJWYZCTVFCQKJIGTWEAFGVEEZDBBURGVUKGEGSYEOUQCYFJIXXFSPDHGKQFMASOUKPUJVKTZBRWNAAMIHXCQHOZJNPXCWQDKDTBEIBWPYLKZSOGGJDZHADEYUJNVLVPMHLPTZNSRYSMXQZAPVLOC");

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
    msg.setTimeStamp(0.4121051576669469);
    msg.setSource(9641U);
    msg.setSourceEntity(42U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(216U);
    msg.cmd = 106U;
    msg.op = 82U;
    msg.plan_id.assign("XCBISLPYDRNCKCSNZFZJBNUIZJYBVVHHGGMKMMLIGGHUQGEBOVBPQHBCSYSEUOPPLIFXIXJINPRXWUQWTREWVRDCLFCUQWOMNWQYMWKDRVRZAZSVUPREVMFELDFVSJMAZLJAODKXHCKPTJSRBHUC");
    msg.params.assign("YZELWPJPBYBEUDATHYFQDLEIHSAJXXMCFQNLXKHYYNRURZWERGVNUBYLOSAMOBJYZ");

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
    msg.setTimeStamp(0.41630479134572196);
    msg.setSource(19208U);
    msg.setSourceEntity(106U);
    msg.setDestination(47457U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("HLBIIOPFPAOTKBQJCVYRYLAWWQWTDPXRXWHLEHBCUKRSSFYKESWTOMJVFTNMHBDAKPLIPGWOVIFDAKWKSGAXZIBVETWGSNMQGRZGVSZNMSLDQUOOGPVGDVRCJCETOJEMYXAVCQRSOYEOQXHHKBJBLLTSVWFZLAQXXTCIQPZAHRTKRYGIUEFFRFUZPNIUNPCQUUDLHEABHPDZRNNJMYIIDYMAMXBCHKMCJKFVQNGWTZNSOJJEB");
    msg.op = 155U;
    msg.lat = 0.04107960050989978;
    msg.lon = 0.3518360392449117;
    msg.height = 0.16703466931158795;
    msg.x = 0.8714629177319411;
    msg.y = 0.733155579218883;
    msg.z = 0.8511876971501076;
    msg.phi = 0.7297367302956316;
    msg.theta = 0.9396319989037228;
    msg.psi = 0.6014926345000068;
    msg.vx = 0.979873138975857;
    msg.vy = 0.035405161627828696;
    msg.vz = 0.053292553789994646;
    msg.p = 0.12601242016262426;
    msg.q = 0.10247528088674307;
    msg.r = 0.8142570712004297;
    msg.svx = 0.4803575201893907;
    msg.svy = 0.08381220813076584;
    msg.svz = 0.5602336264326625;

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
    msg.setTimeStamp(0.2856969991389712);
    msg.setSource(65524U);
    msg.setSourceEntity(195U);
    msg.setDestination(8793U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("IYGZPPCDBRENPFTXXCSEVTWUWDIQXOIUQCLBMQUIMPYBHBBKNCTNRKFHSAYVREWALKJZMJARULMGZIGJ");
    msg.op = 153U;
    msg.lat = 0.6300533843255584;
    msg.lon = 0.8141108792633207;
    msg.height = 0.12108560303186633;
    msg.x = 0.5847498302283056;
    msg.y = 0.7121064028612899;
    msg.z = 0.6586321889270006;
    msg.phi = 0.7284291994003266;
    msg.theta = 0.7474831381277538;
    msg.psi = 0.06592064289397337;
    msg.vx = 0.5510304616032345;
    msg.vy = 0.17330764945856791;
    msg.vz = 0.43091410877093006;
    msg.p = 0.8125631223429229;
    msg.q = 0.28766561880590114;
    msg.r = 0.49485184738518706;
    msg.svx = 0.48482663015135286;
    msg.svy = 0.9049932859377995;
    msg.svz = 0.6746618095922746;

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
    msg.setTimeStamp(0.787823943475906);
    msg.setSource(26754U);
    msg.setSourceEntity(118U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("CZUGXZLIXRMITHIXRIGOZRRVCKSXEHSQFEZMBYWUIFGEJMZZZZUSENYCVKFQYSCVIAOWPPPQTUDVJAJWNPQKOYGTOBWUAUAASNDPFTFSVUPDEOCIVNMBQZDKRVWEYWVHVOYDHFSTOVJLRTBHJPPFAKGBLRUPYOTNLYYQCSBCTJPBNYWJNQMGZLUN");
    msg.op = 123U;
    msg.lat = 0.9031209011654604;
    msg.lon = 0.9029948682407954;
    msg.height = 0.9557876230922001;
    msg.x = 0.8243572692961898;
    msg.y = 0.28486962899525337;
    msg.z = 0.806609096094111;
    msg.phi = 0.31116564365176835;
    msg.theta = 0.5641616235866582;
    msg.psi = 0.18027809441421816;
    msg.vx = 0.13064052842359886;
    msg.vy = 0.90180069331312;
    msg.vz = 0.8865253676441582;
    msg.p = 0.9884440852159386;
    msg.q = 0.8986564477522584;
    msg.r = 0.20766010064244134;
    msg.svx = 0.8245374530470726;
    msg.svy = 0.3209008531293318;
    msg.svz = 0.6240009440441795;

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
    msg.setTimeStamp(0.1057121762572999);
    msg.setSource(39296U);
    msg.setSourceEntity(85U);
    msg.setDestination(30321U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("SHOSCPAETHKYRPAJVFFEBNEBEMFWCDPDJAGJH");
    msg.type = 202U;
    msg.properties = 97U;
    msg.durations.assign("WXOFTTXVBBPTMGBEXTILRMSZQHOZPIQXCDSCRVNXJOZOARHKQLANSULPXAPPGYWLWGJFQHMBLDEJUVUEDNBUOAFVECZWRJHFAKUSFBSZGLQXGNFFKKVSHWYDVSHZHHDMNGTLCMZTEMLGDNOELKGKNUE");
    msg.distances.assign("EQJQPDRZGENQFAHBHDIXSIMUWUBELYEOCAMIPKCRCMHJECKMCIMUSBDGJOOQAOQHLFWGEGWRZDNYYCIYMXPBSTICQMXZGTIXHHAUVDFVWRAKQJXQHDNUESRFPAZOKQPZY");
    msg.actions.assign("XHQFXIGJAOESZZRLYMEBGRTIEMBIWCZLAAMBCOQMALMNNIBSRQFJCHFVIGXCKVPKROZDVNWLFLDWPPHNPZJNTKRQOUFVGVXQZSLWOTZRILKWRSFEGFOSVTRLXMREWUDKWSYQJQFFMTSPAXVEDHSQEUPUUJVBIZDKQAWDCPSCHIOHUBYWVIUCWZUEUYTYECHNADTOACHYOPDUFNA");
    msg.fuel.assign("WHMJRENIKLAHHSVZAEUNAQLKBFMRTDNDGAVRJUTXZBJHOGTNOVDEVYYTFLFU");

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
    msg.setTimeStamp(0.9895412701146521);
    msg.setSource(30805U);
    msg.setSourceEntity(250U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("HRTTVAMCSXMVJKCLCBMRUXPDAFNLNYQWMUTAFXERFKFYUSGEQOWFLDQQPTWVJLUWOHPSZYJDBJFAPGNIKELYSSYCROYDZMACI");
    msg.type = 129U;
    msg.properties = 127U;
    msg.durations.assign("SAGPDTTMOFUZYRTKRPZMVEWCV");
    msg.distances.assign("LGTQJWWKXPSSKZEVEGCOECSPDQIKNYAMTNTIQVBBXHQJRVWIZPOPETZVSWVZBOELKTKMCRPDMUVMUUCDENLSMKIDUIAFJEHZCZKICUDTOPRPPABSFJTNJTZCXBNFRYVUORKYHOGBLEAANYUWSXHGJGYFMDGFHYPAEIHAXDNXXKYIOPVZRXQGDUGLIBXROEGVHGBZMUNNSMFJMAFTHVKFWWJULMNSZBFAWWRJOYYH");
    msg.actions.assign("EYRWHMUSOQNEXKGCABHJWGYZUXICSESNNJRLVOQEFSMLOARRRFLCXKCZDIZUTBLYZBTVF");
    msg.fuel.assign("JOHOBWIAFCTCNWJJDXFICBRYBCVVUBELQNKUTEQZPHDZETOENVMWKSGOSPWNADUGLIYYADXFEJKHRTHEGIDMKRLQPCYVRQJWXPWKPZWFDCYIDTUFFGAHRLEGRGXCJCBLMUJPNSLBKVQVTAVNBWQSRYLDURTMNZRXSFUZMYAXAPNYLOMKZRGBAHJPVKTEQHTKLQIIEYMWGUNSIVOAEQZTZGMWDVIOUYHOZMFGFUHXBIFDXXA");

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
    msg.setTimeStamp(0.33364623454994635);
    msg.setSource(44134U);
    msg.setSourceEntity(11U);
    msg.setDestination(26730U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("ZXYQTVIKWSKGCLECKPPRZPCSTIYDPIRGYTLATHOYRUFHLCFOGPQTLAPIUJQCB");
    msg.type = 230U;
    msg.properties = 19U;
    msg.durations.assign("UKLVAFHQEMPNPQWJTWKWNMCZDFCVXZOGVFOWZQRJWQSXHCKBUBTCZRPGNQURTJPPLGGTEVLKIT");
    msg.distances.assign("FANWFDDMJHS");
    msg.actions.assign("HRGFKPQQBQDMTFDCJDXOKNCYXVLZB");
    msg.fuel.assign("YFTYGMMCCQRQBOJVQGVVNDALHXUEBOZCCJWPWTYPNYBPHQMMBYACJAXGSZKVNSERNKPBQKFXIXVZPOGYTOSCLNJJDHRXKRWKHKDWUMJDBRAOOERIVOQKJTCYQLKZBSIGXCTIDFFFUWJNUOSYUFPTVELAIBNRITAZGOKALVZQHISHDDNCOXMNZLZYQIVEFQZTVUGLNHSDMRJ");

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
    msg.setTimeStamp(0.7591783640679407);
    msg.setSource(14845U);
    msg.setSourceEntity(236U);
    msg.setDestination(63891U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.12211889998075531;
    msg.lon = 0.029906594019393107;
    msg.depth = 0.6710946902618619;
    msg.roll = 0.06630919367754429;
    msg.pitch = 0.08518915676377681;
    msg.yaw = 0.4045548167179702;
    msg.rcp_time = 0.7913900388680217;
    msg.sid.assign("AVMYIPOSWZGJMYUZYTQDBREUNRNQSIGUSRHPWBZQSTAOHSFXIHDELJHKDQBLBDRXBKCOMIFFXUPGCOUZRVVYGEGFZTAWBIYNHYJENZTJPMPTKZFVUSSMMREJRCQIMLTCWC");
    msg.s_type = 199U;

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
    msg.setTimeStamp(0.06965978272788576);
    msg.setSource(11578U);
    msg.setSourceEntity(246U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.7420343310646205;
    msg.lon = 0.8736945895435796;
    msg.depth = 0.5405468074614022;
    msg.roll = 0.6348544168665864;
    msg.pitch = 0.5175325726717592;
    msg.yaw = 0.9213262497362812;
    msg.rcp_time = 0.5998514770234373;
    msg.sid.assign("AJGAYOZKPXKHYUCBEWWZEIWNLNVQFUWNJNUTAHGSEPYUIGCHSGODGGCMCZBWJUWRQPIWTVYARFZTFWMQBSCMHVUVWOXMAXIIXHWFKAYHOVZLNJHBFEZGYRXXIDELNGFSNTAJJVLCIOAVLEEUMQTSJKISXLKYQRBAYRGSQMEQFDRVOHDQXAPIMENXRPKBJUOTHPQZK");
    msg.s_type = 245U;

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
    msg.setTimeStamp(0.19851456535638612);
    msg.setSource(25776U);
    msg.setSourceEntity(6U);
    msg.setDestination(21746U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.9321321906173022;
    msg.lon = 0.5568040499005503;
    msg.depth = 0.2674081528301512;
    msg.roll = 0.3532589394559599;
    msg.pitch = 0.16888317437357847;
    msg.yaw = 0.41239580254000496;
    msg.rcp_time = 0.6416427548400432;
    msg.sid.assign("XEMOAKBCWCQAZYNIADOGLPPRRMBSPNGESQFFTRCNJXVRUIRBDVAYVVCVVHDUJHHOQTTAHIRUMFMPQKTTXZ");
    msg.s_type = 106U;

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
    msg.setTimeStamp(0.15631169696364788);
    msg.setSource(46796U);
    msg.setSourceEntity(143U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(241U);
    msg.id.assign("NOELRIIWSXIYMVGSXVKO");
    msg.sensor_class.assign("UNDVAHJQHAFSLKQHGQUTMBVYEFSYAXKITCKRXEDOVEKYMJAKNBKULJDZCUMFJVYTMSCWIPZXWJBAXFHRIOZSUELMVYELGNFUVSUFDVLTIBYZVSLPWFQAREGPNIUIJIOCQGVQTXGPQZYKBCGNSBWRNAKMHTBEJBOLTQIJFZVCAFEJCDASBPDZDOHYNMHGHLNG");
    msg.lat = 0.09185779169398356;
    msg.lon = 0.2869000046727225;
    msg.alt = 0.35365673661534325;
    msg.heading = 0.4995877099285879;
    msg.data.assign("TDLWEPZGYPGAXJWHZXRUICRAKSIWMDKOJERSSAJLIBYMEUDYHBUOZXCFUUMOHBMPFGHEOALFJWKZQRNFIOHTQCJXXZRTCTSDCGYVPXRDMNSLDMGMTRPITGQQQVWEQHKWZHGYPSEMTCGOIUIVWEKJCNNMIPHLUNYNBBHATOFSBJLGNSVZUQWDXDQXARWCKIFPVBAYZODJCNXLJVZYLORTBBLVTYFQKA");

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
    msg.setTimeStamp(0.49526592773016365);
    msg.setSource(9329U);
    msg.setSourceEntity(10U);
    msg.setDestination(55162U);
    msg.setDestinationEntity(108U);
    msg.id.assign("FTCELCHZAFBSYVVPXSGGFVYJKPCIMELDYWLQREDEBPAXJFYKQGMOBRQKDWENYBSTTTMRSTEAJFHIPPXQZQJSRFVXOJXUIOAADIKLRDBNMJAYMLUWSQJDYBWUIQWUGKUEUQMACMLHGTZFJOOIVHEAWURTLDVOKNGCYNHKUIOWWYVRPCKZMPGTHNMUOTHQHSPVNGZIUYJIPOSZHXNWZGWXKP");
    msg.sensor_class.assign("HEFAXHVWZHTXCAFPNMWWKIVAAADLEBOOSPZIEHXMSDTJQVPPXSTGIPDJGUKUURUSYDFHCVDNGKUJWQWVMBTYRSQDPYCRBGCZCMLNXINHIJEDRAMJFQUIJRGLQOKQKLUXOZFNBTLPUNFRYGAGZSVVOZTKJ");
    msg.lat = 0.7975827713919311;
    msg.lon = 0.5080151500493022;
    msg.alt = 0.5593384624504399;
    msg.heading = 0.8717204587335213;
    msg.data.assign("LAUMPGEOGFJDZWQJUFXNZHQTREEQSZGSTCKXDWNWXUWIEYAJBKEHJZYJFFHQOJDNNBUODRLGGAIKOCOAUVMJCIDQ");

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
    msg.setTimeStamp(0.2799617468878375);
    msg.setSource(8139U);
    msg.setSourceEntity(39U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(100U);
    msg.id.assign("FKAZONSUOROJGUYPWTWIUTRCIYVPAXAIUMVWAOYSHUXKGKDWNBJDRZHGPCBUNGIOHQDPNPGEXRGKLSHBEFWQVLRANPQOEGXKEJDNSUBLTJIFIQZXXNJDEANMOCIHTBVUTMERTQJKASYVLMGCV");
    msg.sensor_class.assign("ZSLUPGVBNUXCTWPAFVTJYLYFSEIGSBZZKTRNZCJLBYLIYFEIWBCVWTRWFDEBHGVPMHHTIKUEUJSDTFTDMGPQSUXQCLYNEDRFJAOSUPOKWWMDZJJRWVYGTTXMCXNGLVAHACQZPRBOMBUEAKQMIENNUOROCKIJDOGXKPNWCRSPABQPGQWOIHAXQFHBFIYGAXSLNRYWMULQDHDZZYKHOCZXVHXMHOAJSLIENUETGMRVVPFADRK");
    msg.lat = 0.7928996324282106;
    msg.lon = 0.5619007838109168;
    msg.alt = 0.778712002776611;
    msg.heading = 0.06295202054333393;
    msg.data.assign("NMJMQYJGATYAYHHPKKIPANSFFDDFOLJNXXGKJJUDSBFPQRPHZWTVURSVACKFAHFSDKTFECICQLUZYYCSGBWTKQQLGEQWXGJLPDEDXSFWUCODPIMJVWWMP");

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
    msg.setTimeStamp(0.54658359199125);
    msg.setSource(3219U);
    msg.setSourceEntity(14U);
    msg.setDestination(16182U);
    msg.setDestinationEntity(211U);
    msg.id.assign("JOAHSLRCCFQGKMVNAYTPEQQEXZEWWFSJDPURYUHPVPVEBOQMTJHAXBVTT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WYGLULNYCHDWEHMGMPDKTKLRWALOJHGGIPETX");
    tmp_msg_0.feature_type = 174U;
    tmp_msg_0.rgb_red = 178U;
    tmp_msg_0.rgb_green = 108U;
    tmp_msg_0.rgb_blue = 137U;
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
    msg.setTimeStamp(0.7042360407489712);
    msg.setSource(26420U);
    msg.setSourceEntity(46U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(32U);
    msg.id.assign("GNQYPDDRIDTWNILUXOHSZCZXVGGNZLHAMUOJTUWOMYLLEMUJEFCJTSPCPJITCXBNVRQBFERMKHKMMXZLUNHWOYCLEDXVGKRADMQQHDQTZHZUDJNJOJLVBAZASRWIQCIYEUOOBLYSYNNEIWAGXJXWPMKFOTSAQWRLZEDYBQTNCWSPAKXTIPGSBSGHCKVCDZHBCGZNWREKBESRIMVP");

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
    msg.setTimeStamp(0.30770447502536935);
    msg.setSource(35835U);
    msg.setSourceEntity(175U);
    msg.setDestination(56692U);
    msg.setDestinationEntity(98U);
    msg.id.assign("IVGAQJSLOQVRMT");

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
    msg.setTimeStamp(0.8806599021631277);
    msg.setSource(50625U);
    msg.setSourceEntity(247U);
    msg.setDestination(55623U);
    msg.setDestinationEntity(63U);
    msg.id.assign("AJIQUQTMEYIVJCJGPUBAGFVFDADPSNKUBYXKTZBCHVRCVAMCPXDHMICWOAPREMEJIXGURVWRCHMEBXMUGGNKTHWUYLNQVTVFMSHIUGVXABKLKDJJNPRCNBSPPDSFPYOEUKLAWXCSENHOIWGYLQZZORLXGXNIGOQLSD");
    msg.feature_type = 75U;
    msg.rgb_red = 149U;
    msg.rgb_green = 25U;
    msg.rgb_blue = 2U;

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
    msg.setTimeStamp(0.9483534184046329);
    msg.setSource(10321U);
    msg.setSourceEntity(18U);
    msg.setDestination(22653U);
    msg.setDestinationEntity(38U);
    msg.id.assign("YFXZKXSQQXPJTIVUMMRJHCLRJRUGRJJVBIEDUDBWTXWDEJVFOJJKQNJOKEISRXTPIBDOTDQCFMSVHFAUKCWXWVCNSOINAPSPHKYUVYQLHLUMVHNAOEAWNYSZZJDU");
    msg.feature_type = 189U;
    msg.rgb_red = 245U;
    msg.rgb_green = 167U;
    msg.rgb_blue = 155U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.017057820575443472;
    tmp_msg_0.lon = 0.4001022519870724;
    tmp_msg_0.alt = 0.1776248214012961;
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
    msg.setTimeStamp(0.05801679597260989);
    msg.setSource(6112U);
    msg.setSourceEntity(232U);
    msg.setDestination(56388U);
    msg.setDestinationEntity(185U);
    msg.id.assign("UPLNJBJOAFEEOWITDPFXSYMXVZMGUJTJATELBDGSCIFHWQEJRGLEBRXXPBSWBYVTRPSDALUDHYCVKASAEJRZYGUVVQBTLUVQHYQIOQFROJCSXWNDFVNWWNGHBRPOOMFZGNBJMZDGNCUUMISYFVMMTXYEETKSUJAMICOGNKIWTYRKKLE");
    msg.feature_type = 157U;
    msg.rgb_red = 186U;
    msg.rgb_green = 214U;
    msg.rgb_blue = 184U;

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
    msg.setTimeStamp(0.13838783272468347);
    msg.setSource(37244U);
    msg.setSourceEntity(61U);
    msg.setDestination(53725U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.6868782128832372;
    msg.lon = 0.9069125951358173;
    msg.alt = 0.22198527310469107;

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
    msg.setTimeStamp(0.44142371716272777);
    msg.setSource(49561U);
    msg.setSourceEntity(24U);
    msg.setDestination(35285U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.657893679074132;
    msg.lon = 0.4060685315078332;
    msg.alt = 0.6261850834334525;

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
    msg.setTimeStamp(0.9162778268200316);
    msg.setSource(16243U);
    msg.setSourceEntity(149U);
    msg.setDestination(47360U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.433144695476404;
    msg.lon = 0.9597582391046418;
    msg.alt = 0.6826907297648335;

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
    msg.setTimeStamp(0.8921933006838382);
    msg.setSource(58263U);
    msg.setSourceEntity(168U);
    msg.setDestination(1372U);
    msg.setDestinationEntity(72U);
    msg.type = 29U;
    msg.id.assign("VDHLSMCOLRIKZBUZQENKPMJKXFC");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 32770U;
    tmp_msg_0.lat = 0.41520239798640135;
    tmp_msg_0.lon = 0.607476056768859;
    tmp_msg_0.z = 0.3617344281406809;
    tmp_msg_0.z_units = 214U;
    tmp_msg_0.speed = 0.769506961841252;
    tmp_msg_0.speed_units = 205U;
    tmp_msg_0.bearing = 0.26607405388010175;
    tmp_msg_0.cross_angle = 0.6493908744127015;
    tmp_msg_0.width = 0.7060001939329319;
    tmp_msg_0.length = 0.9040236190835682;
    tmp_msg_0.hstep = 0.7437935524864535;
    tmp_msg_0.coff = 45U;
    tmp_msg_0.alternation = 247U;
    tmp_msg_0.flags = 198U;
    tmp_msg_0.custom.assign("KZQZAQVCIHKQXQQEOOIVNLAMCOKMIMPVFFYFAAYOGUMKUZJBXHRRCENXATELCDIXFQJWJGUNRLYHSQNHBPPGFYLCEDIDQWAGWWBWORCDALTMIRDOIHJBIPVFYTYJTWAW");
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
    msg.setTimeStamp(0.6180632528253015);
    msg.setSource(33016U);
    msg.setSourceEntity(144U);
    msg.setDestination(20590U);
    msg.setDestinationEntity(77U);
    msg.type = 193U;
    msg.id.assign("LVVQENLKLSLXZZUICEDATAWTFLTOWPQMWUTODKRAEQSBCIFKPQPSHVPARHLIOUTHRJTXSYMNMXGZOOZNREHCWEQYEVFGJVFKVHTYFTZNVLVNJISDCMRDVYOPZROMAQIUBHMNUCIQXXSBMGFR");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PINEQJDCYQEVEWTZXSHFAYXFOTJJWIRUAPBBGFZWNMVCLZHGFBIG");
    tmp_msg_0.visibility.assign("LEUWKXNVNEKZIYWHSNXKBAMWQFCROUXLAGQBQJUGIRBBKHLYBXVQDLWGMRHMEUGASCDHJWRIEIZJNFOPAPYEVFTXMBDMYPJZMSYTQZXHETVXUEJCURTNJTSVWQIALYIWHSMIOPZYWXBUASQMJGDPEDKONHSNZFRAFILCDFOKHGPOBMBOGAGMREBTWIVTFJXZRPCGVRDLYHAFNSQVPLUTKSUQLVEHCCZKOJPVJLCFDGACZKDZCXQWTYSFIPYO");
    tmp_msg_0.scope.assign("CNIWYPNHAOMJLUQDANCAREVBQVWLLWLEJLGMPUSEBJNTMZJCFGZYUOAEXEFIURPHDKMKWFRIKEQBXYZJGYKZSKZQKXCUXFPCTXLODQWXZBLGDZP");
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
    msg.setTimeStamp(0.17987672367181484);
    msg.setSource(53556U);
    msg.setSourceEntity(31U);
    msg.setDestination(6095U);
    msg.setDestinationEntity(57U);
    msg.type = 100U;
    msg.id.assign("IDYNUNLFGQPFOLGXTJMPFLHDVKVTNHZGUCKAENKBKRASHGBDSYTDOCPPZFOVLTAXFCRMUSQWFHAYMVYMDDCRRZRMRHNDOWGSLWTEIQWRGXSKAGJFPZWYKOIJJBXLERVZUSXATJNCVEYFETTMKAUAOAKOXZQUUECPUYTBQQZIKWSWVEE");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 156U;
    tmp_msg_0.tas2acc_pgain = 0.7792314659193328;
    tmp_msg_0.bank2p_pgain = 0.27523702360945246;
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
    msg.setTimeStamp(0.3917854805103166);
    msg.setSource(24654U);
    msg.setSourceEntity(115U);
    msg.setDestination(7721U);
    msg.setDestinationEntity(75U);
    msg.localname.assign("ZFLUKZACOFWZQU");

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
    msg.setTimeStamp(0.950721482829485);
    msg.setSource(27508U);
    msg.setSourceEntity(219U);
    msg.setDestination(554U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("MLCGZFLGLZQRKNIUAPTISTJTUCXAXCHYSFROSEWXIVXTHGQQHLGZYWAOAIDAVULRRPPTJQZHKKXIBYEEGRMDTCLQYWDZMWAZFFBLOOWRJZCAYQNIEUOBTMDKGVMUEOMSJXPGUFKJDCFNSFIISRZGDPVXFEWABCBVKENNNKJRJBZPHOFL");

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
    msg.setTimeStamp(0.8574602349946312);
    msg.setSource(56769U);
    msg.setSourceEntity(108U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(246U);
    msg.localname.assign("IVGKCJBULJGORBMCHNMQFSUJYBCRXKQSNYPOTDJTRWTZXVICVAUDYHRNRLDVRIIRDMBGFUSZDFNVSYOZCPLBUMOWUAMZIWWYSTVZHNMQJTKLWCSHXICHWQGGOMKKUSLKXEPOZJHPQGPHUFKYNOXEDUPMDABUTYZFNLITBIQNJSWGAZCLYYWAEECNYDISOQKFPXWAERAFLVWQLQFMRCXTPFTALKVRJVQZOOVTGHHIGBMKA");

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
    msg.setTimeStamp(0.9137052068541454);
    msg.setSource(49259U);
    msg.setSourceEntity(5U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("EKEHMJOUHPQRUDUKXVJWV");
    msg.predicate.assign("PNXQERBTNBMUICVACDUYWUSKWITZGAKSWNSPERMQGFOXUJXLHSZKCFZMSGAIRGUIXHTSOCSVMDOBOBROWZTKTYCEPPJAVVRHPRBNNYYEHAHMYC");
    msg.attributes.assign("AQRBODUFOBPKPIPFHNMBGTZHMSDYKFUZLHNIRSMJWQHYELUMLYICUAICPVHGNQLRQCDRAOORRCQHMHLIWKQAEQPDVNXDXKEIYNUMQDEZCZGYCBYZXPUWETGSYSTAVJOJFMHIOANMWBBFESPCBJGFUZWQTVZWASFNPKUPELKDZLGNLGVXOUJDWTYFRWXYTRVRBJWKTKGGCFUAOEQYMMRVDNJBTWXSHSLFKVCZIIPD");

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
    msg.setTimeStamp(0.6878862176367541);
    msg.setSource(33968U);
    msg.setSourceEntity(7U);
    msg.setDestination(24751U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("HFMZBTRDCVSGQPVZYGNARWFUSCFBOPUYRBQUMPOCPDBRKKWWUYVEFCUTVNTJGICCTPBUNHNLSEJLHXOAZDXMUEJEILASQYSDMBKSXJXRYNWWINVASZIVMGHCFQZRLZPXLHDFILMWZOKLERPIJVQJIFSANUOUFVGXJGQPMAZIBROVAX");
    msg.predicate.assign("VGWLYUCPODACYNTOGRJHWWTISAAIOZQQBMCPRVLVTOLCXVKZZURRMAWDAJFXITEGWKUMONKVCHFNQFSYHOHZAXJMGJCPIFLZVQDLKKMKFXXSDSJEEHJLUIWISQKYWSUTYJNQAXVZPXGBNCVHNMWDRDCKOGLYTYGEMRMRXSORIFBNPSEJIUOWDLEPTUQQFMKFAHNDWRGQSYHTLDEDVGAIJGQBFENPXOUMPBEFJYZVTRIPTBBUZABUHNZLKZB");
    msg.attributes.assign("LOODLANVWWQFGQQZICXLWPMSHLCEBTPBUCJMKXDTMVHWYGFISAYWULMNHHKXLSAPFZWVFVTQDSKMAEWXAJKGBAFCEFHZGNQSYLZTITLEOPU");

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
    msg.setTimeStamp(0.4298608098257266);
    msg.setSource(10792U);
    msg.setSourceEntity(81U);
    msg.setDestination(15129U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("GWHTLCJXYBYPWJERGIKVRLXGYFRHTXNQRTKRVYJSOEMKLGDNLYKJCIAUPJDDYFMVVZXIRFVSLJGTHAGOEAONGUHLPOPTCKDACBVNWTQABKHJFNUTCYEWCXIPPYBNGDXZNZEIIMLEGCDVEDQEWKVQBQKXSTVAHYQLRWZFJOAFGHDJDBAWTSZUEONBQZHBBQUBMMWPWOHZZSRAPMN");
    msg.predicate.assign("ZYGELQTDFLEIIFSSXWNZZJLAHJSCTJHUEPP");
    msg.attributes.assign("JLTUKOFAOUSXVNVNROMAKWSYHWXKPJVSECIZZQOSHVVLJHUWRMJMFURTXQFORGSJZOXUXHCAFKGYQJLMEFIPNWDQRLPXTZHDIALUMGYPAEUKSOXLODLDORVZONBZVBIGNSRYJBUCJ");

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
    msg.setTimeStamp(0.8262031602446188);
    msg.setSource(31077U);
    msg.setSourceEntity(43U);
    msg.setDestination(49340U);
    msg.setDestinationEntity(168U);
    msg.command = 30U;
    msg.goal_id.assign("UTHIUFAUYCKTCGCYFZWCAVUEYNHMXYGRGAKTQKFOMQEURABPXGXCLMDJSYQEEBNLLOZARQVZDRXNHIETVDSMCJSOMLNTVKSIDWBGVFFQ");
    msg.goal_xml.assign("VYNRUUAQMHYOQVCRQLYIYTGKVMHBNXKBGMENMOFTJPENIGRZLHGVXCIUMLWGMYIDUWPFJQPTTOKWEXSJJXXTPDXVD");

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
    msg.setTimeStamp(0.5584332436972081);
    msg.setSource(35801U);
    msg.setSourceEntity(89U);
    msg.setDestination(49640U);
    msg.setDestinationEntity(159U);
    msg.command = 45U;
    msg.goal_id.assign("KAURRXWLYQZJSZKVPKWLDHFTFRDMFADZPDWIXHLNMERJFMKPFNJYBXERMCXWJVABSTWVCJWCSSSCIKBAHBSIJLDYQUMGSRCMECFTIALRVZOOENEEALNGYIQVTXDTOIROAESPBVYQJQPTOGYOBQFJFTSHAUHCNWIGIGWQHUZZHSXPNKMPIHTWUXTCPIQYJBODYVODKRLB");
    msg.goal_xml.assign("CEVDLPZQFJTMMXYECMOJANFOHAXXHARAVSAYNOZFGQDCPEDUXFGKBBAIUUGHNMFIUKJEAPTGFLYYTBMBORQPMZCUYJCTITWSVRLSRYVXWNBZLSQGTUFUNCPOFWIDRHUJWYANIRCABKWLIBNBQYKNVSWDOHMJSZZMKYXXLFKPRILLJSYPJBPXQIAOWDDOREPIVEGGPRCXZSVGJGKREEQOLMUINKTCHZHQJXHEUWTVTSWNSVOG");

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
    msg.setTimeStamp(0.29480836235096075);
    msg.setSource(10008U);
    msg.setSourceEntity(57U);
    msg.setDestination(2922U);
    msg.setDestinationEntity(214U);
    msg.command = 154U;
    msg.goal_id.assign("BVKKGKHSCETGNMVOJGWDYSQZNMTNIWNAWLPXDANQAOJSWICTTZRZQFSLFNYRMRTYVZPVLKHZAPYXHYWDIOBOKQLZFJGCIJKSYQQNKPUFMRFPLQMXGZUNRACPBBYJXCOUMYAICXUUJLOGEHRMQEVPXVTJTVPDFEEOCDKBLTSHHZWOUGGJHUSPMHSKYYSUASURLXEAZZBDGEVWDIFRXRHEMWXIDUEOHICTIPAKJNVBOQABNLDWBCXCFFJIGB");
    msg.goal_xml.assign("GOQUPHKWXBIDQTDRLQWGNYOAIPSJEOSIINNKGFIFJDVVM");

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
    msg.setTimeStamp(0.7950949999028066);
    msg.setSource(2495U);
    msg.setSourceEntity(201U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(149U);
    msg.op = 78U;
    msg.goal_id.assign("LMFIESVJSKDZJXLYYAKNZWQMFDRBJARBPVVNOREHGBTPXQIGOOOQSPSBNPOLUOSXCCTMLNCDUNLBWMRQETWZKIURPNCYZFRAEZEJHNVJBZYIECHLMFX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TWLTETHVZGBNAKNAXAXHBEZUVZNBMVFSKXTCVIPCPCYCNUIWMMQPTVYDURAITMQKUQDLTYGRRAVSFLXJQJTVCQZTEWTGVBXFOLUZMDPEMNAIGWXUZHKPXSBFXFJSEMHGJDIKGLIYAKURLRYOZHWYCMINKRIVQGEDQZGSSJYFKWOYUHHEENXAJNWHCEBRUKBWOCYZHMLMBOCPGWDVQLS");
    tmp_msg_0.predicate.assign("TXQTKJVJNTATAMIMFFPWOEKGZWZNOGITJMIYAHCMKBOLXXYYSDKNGJLTTXIPWPKCLLQTVLUEBBSXCVJCWSSEDOFQGJQCHLVAEZUUGNRWXOUNRDQFYHZIUWYGHQHSUFBAPSWSMSPVJPIEUFAOFTDMAKDPENXORLDYDRBGXZORKVRZERTSQGKKBRPMPBDYNWLBCNLCZHMIVAFHHWCXGAKMCCJNVJZEAVDFRD");
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
    msg.setTimeStamp(0.2966330081793417);
    msg.setSource(10334U);
    msg.setSourceEntity(67U);
    msg.setDestination(10230U);
    msg.setDestinationEntity(131U);
    msg.op = 170U;
    msg.goal_id.assign("TMWINBBKTURARJEUFOBQUOCURNPIYTDPTOO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KUSBBQTYEAHQLZMVQBCEORDXZGWCDFUEFFYATPCAYGPXRKMKGMZOGFQOTASHMFVJGKOMXXEDQRVKOYHBDGFORXUPWZX");
    tmp_msg_0.predicate.assign("QFTEMCYJQKVYFVVEFWUWMDICXFTTM");
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
    msg.setTimeStamp(0.9509024258991631);
    msg.setSource(52814U);
    msg.setSourceEntity(118U);
    msg.setDestination(63863U);
    msg.setDestinationEntity(131U);
    msg.op = 65U;
    msg.goal_id.assign("NNZFBICANADVCBJGHMTLQGOIQPOASHKGZNNUQWWEBEEDCISWPGVLKISRMIFTPRODLVKZOVDCRSQRPIYBCBHQDAZRKSKMCYOWVTUJGTTMIWAMBZUSUELWWGAVZKYXXJYJLEVCDXTUPIJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IQFKFVWZPZNHTJIDDADTSKJQEBISOOFIEWEAWWLRUSRMGHOVGSOVVAAQSGVYTVWGDJQKRPQTAQMYXAXYDKPAICNJEGCGEBURDOSBGRXAPKBFJYBKIGQFRYSPSQUOXBCDZLHTUHYWCEZFRPBUJWORULVRMHKZGIUPXMZLVLXNNIMEWLFHMZD");
    tmp_msg_0.predicate.assign("RJCJEQVYFXBJN");
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
    msg.setTimeStamp(0.12310445109087098);
    msg.setSource(43315U);
    msg.setSourceEntity(114U);
    msg.setDestination(58977U);
    msg.setDestinationEntity(138U);
    msg.name.assign("PBTGUXSQSVBFYRTWFRIBTUKLCRWMMFBAFHOBJIGKBYMZAOAZQNHWNYPCVUPTVJMNVHMXCOEYRYZIDHKAEEDDZZEQMKVPXHXUUXLKTFNGJEKDBQZFQNGPQOZMSWSBDNERTCKTIEHGOTSHJIAGDHWJUFSDJUGDCLOFPHOLVXT");
    msg.attr_type = 14U;
    msg.min.assign("RIHDPRPTXOEGGMBWCMOKLSMVUEFMYFULJWQNGXVUXOQPA");
    msg.max.assign("FBUIEJXESWIQKGJLCCAAYRDJROYUKXEGEHLJSLAVNUTGABTXNQFZMPWKHUHXWWQEAMILOFGDNCZWJCESPDGDXSQMXFYTIKNZYOLEVCBPNUKDHOCEBETJKUPOBKGRMIRKTZIOCWIFRJJTVBR");

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
    msg.setTimeStamp(0.0813244779566834);
    msg.setSource(27106U);
    msg.setSourceEntity(55U);
    msg.setDestination(43177U);
    msg.setDestinationEntity(107U);
    msg.name.assign("OBEBPKSGUBDSJENYZIRJJXZJLPCIWQWHTXTQYBTKNYPBDAEXAXWSWLQGQISLIIZGHAOHPKYJRURLEPUTLVTCMGSWMDSERHQLTMGODXKIBFPCOACXENZASDJHQUCHBFYFNMVVKZOCKAJNRUAFVFTVWPXCUTZGYPVFFRVJMLDESMDROOKYCOUZHFPQDRKWQURDXIWYNAZMZNGMRCUMWXCBJGOHJAEMIHLYSVSNLITABQETXYHEUPIKZB");
    msg.attr_type = 64U;
    msg.min.assign("MCPHAJKYWRLBPDMCYRXUKCGXHKGBLRRSQVHGEDAUQVEUBOHFXTWUCWSEVOVNKCEQLDGPQVZWOQJMUAJYHXYRJGPMVBCMCFZYYVASHAOSUJTPEBHDVLNMTFNWAOAQFZDBZRFNLONJSNXWNDNDPJXOHLOPYZFRIZTLNOXGNIGGAGPIFBTHWPSSMBZTKUQIESZYXUIUQIEMWJFTKWKHURMDKLTQCECZXE");
    msg.max.assign("JHYRCSCWLAJJVINPMXJUQEXLLYSETPCIRJRJROFFFDJDCGEERFHKZBGKQFINXHJOQQALUKQDPDMGWZGPMSMUZBIYNALDKAVUCYBTNOLCGTGYDSMBFMYKHLB");

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
    msg.setTimeStamp(0.9144726931107444);
    msg.setSource(22719U);
    msg.setSourceEntity(182U);
    msg.setDestination(4808U);
    msg.setDestinationEntity(14U);
    msg.name.assign("PJNUGNZZMRNHCHQZSVZLP");
    msg.attr_type = 162U;
    msg.min.assign("DYMLLRQNJKREGPYSVCVGYKVXRLXBCSCJWZEUFAXZLUFWTIOWMDZOGTMPCURKKPXTRCEV");
    msg.max.assign("FJZJFRIFSXXCLUSMXTCQAFJPKAGYAQVRCGDYGFRKGEJNPVGNVOMLBGNHCOUBKSHWVWBMDTOEMVQRMBRFXTEAILUSNECLMULIXZODQAWBHRMEUHZHAXESNPONXWKFQIDQZQNJETDSYGDIVGFVLXUFCTAKMDHNGYQIPUPYHTBTJCLTGAYFEDWIQAYKTCHZEMJUHUINKSDKLVXJAELOYSVW");

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
    msg.setTimeStamp(0.8705977822439228);
    msg.setSource(16491U);
    msg.setSourceEntity(51U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("IGCPLDQRPNOMRVRYBUHFYSXWZGWTWNDLWRTUOQKATCSXKNQZBLJCHLLAAFUVOKLUDAIQISAMGQHZPWFQSPLJMSHXVYUXZCFJMALTIGOWPDDNZXXMUJJAYHRDNKVTIGYNQAQTHMEYGXYEMZZSTHSRHHOB");
    msg.predicate.assign("DPJILHACDZBGORRHKBAQSCEONACODPRSZLVKHJSENCYWWSEAQBGXTWBZEMGFBVSTDCYYZHBNYPDDVLFBLJRKUINBBWSFQOPSPJRVVFLNQQIWJTLSUBXG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GBVLADMSBZNOJCLKJPZLRTVQUFSHHUDPNEPOWEWMTSABDIQWLLFCIAFVEIWJXEKHAPTOQOAAI");
    tmp_msg_0.attr_type = 21U;
    tmp_msg_0.min.assign("YHBWUNGDOZMHMDHTQIXHASUGNOJVIESIVTLAMXQDMFHWOXBNFYLJLAJZBPJDARLQQKRPEAUBDFQUXCSTJIWMVQQHXCRKULPBQNYQTSGOYGHRCUGOJE");
    tmp_msg_0.max.assign("HQVGSIUVNSJKSBCEOKFOVIXMRKUTRYMTPMKJYZCMCBRLTSDQFRRTNLNEIHUXGIRQFKUXDZUAJLPHXZOBQOFANUKMDRWGQBAJFBJTNVHUXIGABNFYISAVLCIXWWSWWPNPEIVDDCFCZDZLOWYGSXJHLKRHHJOMHALGXCPEYPN");
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
    msg.setTimeStamp(0.6270484676344402);
    msg.setSource(20647U);
    msg.setSourceEntity(36U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(18U);
    msg.timeline.assign("TZPJOHURBOVHGMDNZGNWMECLMNXEIHDTCPEUIVPDSURLRVYNVBWGAZKBAFMIAOWCWWGLRERUSKKXLXHOQSBJFACYGMRXXDQBGZVYQCFIAYVUDCDECODSZAGWTHIKFUKQACIJKXMSYKZQRNBEMFLJXTDCNNUSJH");
    msg.predicate.assign("AWCNXYHFPZVIJCQNECEWVQKQZXCKQMTXFSFFRYHHXNVSRRTUCPLKBSGQIOESABASPPMTZZJZFYBKJBLLOAXOYTWMLFWYJYNMGXJNUMPXE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WEVVLOVOMVWBBSQZDLBYOVNIMEGKSQHVUYLSOPNHGLCRASMICWDJKMQIAPHGEOWZZWAYCYJNZGNXNBGRNMBSBJDCURTFIHMWWKHIYEJOSOAVWAHEXDDQFUUVXKDMFLGKEYJKCGC");
    tmp_msg_0.attr_type = 207U;
    tmp_msg_0.min.assign("YXRONNQMRSXRYHPUCLOSAFSCWGOTQPKGFAZXNSGJUQMCBBFKGJUH");
    tmp_msg_0.max.assign("OVFFEBKQXMRAKQQAWCKDWROFOLDLRTHAWRLDLNCKUDEPABWPKKODUOJXLNMOTTGCAMMPBWNYTZUTZFBWXEVPJFVDAODGISYELJWGBNIVDYWMIBJGYGALZXCUMXZBFUHCVJJMRNNHHKIUZUZQRUAMRHVSGZCIELSOGQTDALSEZXSZQYSPCVBVFQFPWHDJTEXHSXJUEYSCOKZNRYFHGKMOYVPXAPBCEGUGTPIPYLYMIBXHSSQVNENJHITJ");
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
    msg.setTimeStamp(0.9795603054655395);
    msg.setSource(62301U);
    msg.setSourceEntity(42U);
    msg.setDestination(23490U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("YLAHVHBQGZUTPGODOVMZDAMYNAJVHQVNFFBQUEHRTNTKCGZKCVEAOJCJWEWNJSXTYQBSROHPRUUDQFMWIWSIYDIVKRBNGRDJLSBUMQWGURLNUOQKXNQLTKOXZPEVKXTRWWSZTZJJHOLBLTFIYSIIXMPDLEKSYORIRPHGRFNCZKFPQPHITPVMJLEOBGYUZAMSCWIDMZEKUHCSXBIXLMSEC");
    msg.predicate.assign("KBIWOYLKHBJBDWYACROQCRHMDAYWYJGSTIHLOLEUFOBDRZRRNWKKUSJVUNXNYJAGAVVPEZISTPDQMNOITSLCFURTGZBAAFNOQPSHMXFPUGBJCBGSODKDDBFSLQNLWLIFWRQFFOCVNUPGWKKRPHSVTYLEPYJEGHGTQKXXYENTVAHEMYCZPXSCDCGJJZAMHUEU");

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
    msg.setTimeStamp(0.8519750838378807);
    msg.setSource(12041U);
    msg.setSourceEntity(117U);
    msg.setDestination(46970U);
    msg.setDestinationEntity(148U);
    msg.reactor.assign("YEKGRPINPSXDFJPZSVFIYHREOXAAEQIKNROUXSRQSZJBZYTGSVMQXBHRCLAHUAWQWQRNFRPNJHKDLZZWXOMPQODXBTNBTTQLBCKVDCVBDKAMTLECSEHYIHAIHOUCMLGUBWVWUGFQVPTIGZWQBLZUBNPMWPGNTXAJOUIZBSZYPYLXTACUEFVUGATJRCYE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UIXCJYUQCETFMCNUVHPPILWMPWHFTBQESHEVAWQAPQLYGPIXYVQVHOFZCIFGJHRZIUGWCMMEDRJVIOCVFGAXAKDKXEJGLKFAKRJBYFUYXRJBZIWXOKYUXLPTNSWLSMMHDYRFMJIKSRQXCQTNZBWLPEUHOMOZZZDSUYONNLHMVGUWOVALVAMTEZLBQEAFJEBNZVG");
    tmp_msg_0.predicate.assign("WZRYIFAUEEKZOCYDAJDTVXHQLBRRPFAYNCFBSUTYBNHVDRUWDOJOQDSNFGCLXAJCMWHSJSCVWSLDWOHPVMHRIBAIZQLYURAEVBGIKZZCQRHSHMXPQNFJSNVYZOOPEVXVCZOBWZLEITNMNTLRZOWMKJBOVILLWCGHXQGKEFOMNULXJGWIEJBSKFQKEKZTBCNYPTADQFMGTGGHQUHKUP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MSBQDCPWZKOMRZQXPVQHOEQESPKJEAMTVPWJHAQIBNBLIFUPVDRBCSSAKPPTCMSWKFEZBHLBJNDYJVBFPWJVRGXLQMBOTWIZLOEKOACNKUFRHGLLBYWNLIQHYDMSNZYAWXXQTFEECJRLCAIGJTDGZJXUQYYNVTDGDMRXLCMMQTGEIUDIIUNSUHEYSGXRCUTOXFKINOFITRYAKCZVFNONVZOGZCHUMALRWATVHVWBHGDZFDPAHOXFS");
    tmp_tmp_msg_0_0.attr_type = 227U;
    tmp_tmp_msg_0_0.min.assign("ZYDTTXUMTJSZKTYVCRUYKARPOZMGGKEUEIRIBVXPWZMAMTNBPHVGCBCKWRHHYZRDIUMBHNFEPJEPGHMHBDWOGARSLNZFCVNSHJTMALVQZGBXAFTAUWQVQWF");
    tmp_tmp_msg_0_0.max.assign("ATPAFOBBNTBUYOMLIDSLOLOKZTHRWPJQJGPJGNVDVYHTXRJEF");
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
    msg.setTimeStamp(0.8691830675083193);
    msg.setSource(21500U);
    msg.setSourceEntity(54U);
    msg.setDestination(44920U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("OTUKIBLCHXSAPWUZBDXQVMBFOEVSFRXHYLTGLIHECHBQQKTRGRBMBFGWWDRJJWSFTKAUTCXYLNIHMYYOUNZCQKZNJNESYWACSCUOMTRLADUQPLYYDDPRNNJMXMWIBHQDVCAGCSKIZTXEBXFYHQUEMINTOVENBNBPJEVKASEKKOPJPZCWRGDRJIZSGLU");

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
    msg.setTimeStamp(0.6101527016430123);
    msg.setSource(23755U);
    msg.setSourceEntity(207U);
    msg.setDestination(60675U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("ZNNQNYYULSMMSCJZXGPLKARKCYMFQTPOTKBZOTVXAWTDZUSIOPBVSGRJBQAKQOLRBMFGYEQNTYCUVLFAEIWBFLDJPWRAUVOUBVYSZGPBWBQFBSJMMIWNVESOVAVLQDVSTGXWFCHWARQHEIAKJNRXTIVDZGLWHHYFWAGYSQHEXGIDDFKESCRUHKXTTWCDPINMXOOCTOKGNINGRFJREXZJFUZDBLJXUQLOUMJXPZCIPUYCPERZCLHMDPNA");

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
    msg.setTimeStamp(0.499047820359072);
    msg.setSource(24803U);
    msg.setSourceEntity(15U);
    msg.setDestination(11692U);
    msg.setDestinationEntity(135U);
    msg.topic.assign("ZXFDTOWASJOVKCWGUASVEKPGRWANLVLDEYONCYSZFAWDHBDSOHLXNVNIEIDBIETGYXEZSOPGKFUOTHQCHEOJYEFMK");
    msg.data.assign("BOYXFFSWPHSIABOEWWLBAUSNDRNMTHGPIZPUAKCXTYWVCWXLFAILZOKXJBOLCDNGCHFMCBZUYLVFSMSEGDBRKELTUAJBQBJKEGDNHNHVMZJMJIUKGHGASZXVEPGORXYQMPHFVXDTIQRDKEYWVWMTDPMEEHUTJFVZYXRNRRSQFLCRQLAQLRKNVJFNIXFCAOWHYABXUHOWOJDBCPYJSMYJTGOZKGKDDQTUGTIOZSLNUPUQCEKZ");

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
    msg.setTimeStamp(0.29302267753174505);
    msg.setSource(55722U);
    msg.setSourceEntity(242U);
    msg.setDestination(62245U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("FOQSTZYTAYLAQMMGVAPKAXKIVUUCCEJJUZQFLMXOIJJTSNDGUYSRFDCEWICKBDHSVWJSVUJMOYOPVZDAYWKIEIUXPRMPEAHOCHIDODKENVUQHQVBXAOSWQFRRHLIKZEJXINR");
    msg.data.assign("RWDPJHCRTIPFENHABUXWAZDGNOZYBMHQGOEMIVPJOMSUIFRSCYPGJCDLFBLRODIISEMDJAVUFECKVQTASRJCZAMGWDYGFAZNLXBTTPZBNZXTBXMOLJYKRDGYWY");

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
    msg.setTimeStamp(0.6343897067955138);
    msg.setSource(59072U);
    msg.setSourceEntity(119U);
    msg.setDestination(65371U);
    msg.setDestinationEntity(207U);
    msg.topic.assign("HRTAFLQAYARHMWZVWUDFKTYJIETTZMRJCPXSKRCEFFUQYWZGTEOZQWWMXIOVBBNPGXSSIOOQESYL");
    msg.data.assign("PVIQXXXPFLOACGQNQNJZRGNQCZMMUXSNNPQHKTYUZIBVCBHOTSGKJEGKERGOVFCJYGBBWXJJDWSSVBEJCPTOIRJQOPGJEVPMCHCSXUXXIYNMDMCIWYPKDTUVRVYDPPLLLUMMHDPOSOTTWZHZYCEMJOBIIWTMWRGVKNLSESUBFFEZHRIEHFRKNIYLUZAYUQTAWOACQRLAFZEZYRBDKWDWFZHTYQNXDRAU");

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
    msg.setTimeStamp(0.911120334228854);
    msg.setSource(55017U);
    msg.setSourceEntity(168U);
    msg.setDestination(38602U);
    msg.setDestinationEntity(203U);
    msg.frameid = 133U;
    const char tmp_msg_0[] = {-84, -74, -125, 74, -37, 82, -79, -50, 67, 25, -29, -80, -53, -59, -50, -85, -113, -94, -13, -78, 28, 102, -2, -35, 31, -4, -66, -101, -128, 86, -113, -59, 28, 62, -120, -73, 115, 110, 126, 45, -35, 55, -89, -43, 80, 59, 77, -35, 119, -42, -59, 40, -115, -120, -122, 93, 53, -22, -52, 88, -21, -103, 41, -97, -3, -66, 117, 100, 56, 16, 4, 90, -82, 50, 100, 38, 63, -103, -52, 56, 10, -75, -64, 41, -112, -56, 101, 7, 101, 18, -53, -67, 92, 101, -116, -16, 37, -128, 79, 75, -71, 109, 25, -128, -46, -94, 125, -71, -96, -66, -14, 60, -93, -56, -98, -77, 4, 83, -33, -60, 73, -89, -37, 24, 117, -105, 61, 66, 62, -57, 105, 51, -25, -69, 46, -12, 96, 2, 81, -20, 70, -97, -25, -58, 103, 59, -55, -28, -101, -36, 67, 64, -27, 66, -16, 62, -62, -78, 94, 41, -68, -70, 11, 52, 105, 17, -87, 49, 105, -110, 44, 86, 115, -115, -125, -17, 126, -38, 7, 22, 49, 126, 87, -108, -29, -103, -101, -65, -80, 3, 70, -65, -60, -85, -113, 10, 76, -32, 80};
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
    msg.setTimeStamp(0.4162967543414301);
    msg.setSource(10692U);
    msg.setSourceEntity(190U);
    msg.setDestination(282U);
    msg.setDestinationEntity(93U);
    msg.frameid = 49U;
    const char tmp_msg_0[] = {-55, 83, 7, -108, 103, -125, 22, 71, -104, 19, 88, -55, 42, -76, -12, -92, -21, -82, 73, 80, 46, 44, 88, -59, 90, 78, -126, -25, 33};
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
    msg.setTimeStamp(0.7811733305533981);
    msg.setSource(64825U);
    msg.setSourceEntity(119U);
    msg.setDestination(39138U);
    msg.setDestinationEntity(124U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {-86, -9, 13, -64, 26, -36, -36, 4, 16, -24, -87, -113, -5, -71, -62, -100, 81, 4, -5, 19, 78, -104, -10, -58, -110, 69, 102, 39, 74, 4, -50, -95, -102, 25, -46, -71, -71, -65, 101, 2, 13, 9, -49, 93, 7, 123, 7, -58, 120, -57, 27, -2, -25, -30, -24, -43, 72, 55, -90, 121, -36, 13, -84, -126, -111, -107, 52, 35, -70, 32, -128, 89, -70, 74, 25, -103, -90, 29, -18, -43, 60, 1, -86, -59, 108, 27, 126, -69, -96, 86, 118, -112, -25, 65, -27, -64, -127, -52, -68, 119, -69, -38, -51, 36, 98, -73, -65, -124, -116, -114, 22, -85, 100, -85, 72, 33, -88, -10, 40, -35, 126, 121, 72, -9, -128, -51, 53, -87, -103, 112, 112, -13, -78, 15, -23, 26, -16, 117, 63, 10, 85, 33, -69, 113, -52, -6, 9, 60, -43, 0, -22, 125, -49, -50, 101, -112, -40, -12, 123, 20, 123, -119, 116, 62, -51, 31, 7, -84, -40, -24, 25, -29, -58, -7, 120, -117, 74, -23, 59, -98};
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
    msg.setTimeStamp(0.247342678557274);
    msg.setSource(33333U);
    msg.setSourceEntity(17U);
    msg.setDestination(41475U);
    msg.setDestinationEntity(17U);
    msg.fps = 187U;
    msg.quality = 197U;
    msg.reps = 223U;
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
    msg.setTimeStamp(0.5740743419202521);
    msg.setSource(40929U);
    msg.setSourceEntity(16U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(47U);
    msg.fps = 50U;
    msg.quality = 94U;
    msg.reps = 99U;
    msg.tsize = 73U;

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
    msg.setTimeStamp(0.9839516891547585);
    msg.setSource(55931U);
    msg.setSourceEntity(163U);
    msg.setDestination(18278U);
    msg.setDestinationEntity(226U);
    msg.fps = 141U;
    msg.quality = 146U;
    msg.reps = 63U;
    msg.tsize = 90U;

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
    msg.setTimeStamp(0.9663028349102825);
    msg.setSource(20784U);
    msg.setSourceEntity(136U);
    msg.setDestination(605U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.38185867716572863;
    msg.lon = 0.7201449384076358;
    msg.depth = 122U;
    msg.speed = 0.3141020222415205;
    msg.psi = 0.08537385051762869;

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
    msg.setTimeStamp(0.5979067362920628);
    msg.setSource(39535U);
    msg.setSourceEntity(32U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.19192770765623202;
    msg.lon = 0.0049129719613730805;
    msg.depth = 10U;
    msg.speed = 0.09239933333407191;
    msg.psi = 0.23783596782263938;

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
    msg.setTimeStamp(0.9579176702567757);
    msg.setSource(47001U);
    msg.setSourceEntity(203U);
    msg.setDestination(9679U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.18253248456680526;
    msg.lon = 0.9115188517283602;
    msg.depth = 81U;
    msg.speed = 0.5316631570134576;
    msg.psi = 0.9598960709049651;

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
    msg.setTimeStamp(0.29152006332468894);
    msg.setSource(58477U);
    msg.setSourceEntity(219U);
    msg.setDestination(50766U);
    msg.setDestinationEntity(190U);
    msg.label.assign("XHIOJPMJKQMJNUDJUHYPOOVFSHFKENLYXELODBYDADDMZWLCBPYIACGNUBGKZHDDADEUUVIGAKKLOBGNAMJWKMNNPNKZGPWZLIMXNTEJFAIZLPEDGHCITFGRMQSEQOKLMHSCNQTIEQYKTZGJILBCOITRSVTQCYRBRKVSHXQWFYTEZHAMLUBXSFHFRQWVTFBBZAMHWW");
    msg.lat = 0.01772093742351588;
    msg.lon = 0.5267399441152043;
    msg.z = 0.7919058435180567;
    msg.z_units = 30U;
    msg.cog = 0.9359685854366563;
    msg.sog = 0.9559279191172111;

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
    msg.setTimeStamp(0.6642732569846983);
    msg.setSource(60813U);
    msg.setSourceEntity(222U);
    msg.setDestination(11198U);
    msg.setDestinationEntity(179U);
    msg.label.assign("VHBYLBGVTABHQSEUKNGSRVKIMRKMYMBOPSVSLIMWOGRCRYZFIUCPKOTPNDNGATNZAVCHUUDRTXZOSEWLXERNHXGJOQLZVUDHWPJWKPYBADBVJHAXKRZTUUQXZYXCNHMCJNCILCNQDLPMXGVYMAYFIFLYZIEQGYDFPPJXEFTQULCDFPBFIOSUGWDHVTSMZHIBKAZFSFEDMRYXZGJAPHLFQCJLSTETMWWNBOVRINKBEXAIKDWWQJQWCO");
    msg.lat = 0.33843086315454585;
    msg.lon = 0.9486107791127952;
    msg.z = 0.3161104277511956;
    msg.z_units = 86U;
    msg.cog = 0.4328423473639228;
    msg.sog = 0.489441393504369;

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
    msg.setTimeStamp(0.3935601528527719);
    msg.setSource(63983U);
    msg.setSourceEntity(243U);
    msg.setDestination(26998U);
    msg.setDestinationEntity(246U);
    msg.label.assign("DRXNFJSVNKWXBJYCVRZBLDUBLUTHWGJWOYOQAXHFLGFZSAKGIDTBASXJTFEAWQCENITKIYSGLVWCFFMLKZWIYLOOHWQSYAUFGNQLEILUYGNUDZMLBABIUSNRXOAJ");
    msg.lat = 0.03768824633726009;
    msg.lon = 0.8095831695718628;
    msg.z = 0.5560263301873308;
    msg.z_units = 230U;
    msg.cog = 0.8942498145628097;
    msg.sog = 0.4506250607907024;

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
    msg.setTimeStamp(0.8638298333855886);
    msg.setSource(20759U);
    msg.setSourceEntity(173U);
    msg.setDestination(23845U);
    msg.setDestinationEntity(16U);
    msg.name.assign("EYHMNJHIWPOKJYFMASXZJIAYUKYWHBLJFOCMKCVJTDPXXBQSDVGDGAEFCEVGEBENNAMLTJSOBDZCPLJEPQPIRKUVDKZTKECNWQKGQ");
    msg.value.assign("FYFOUXUBGTZFOMOFJVPOJZWKYGVRKSHQUPBOJ");

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
    msg.setTimeStamp(0.45405283115522954);
    msg.setSource(47461U);
    msg.setSourceEntity(0U);
    msg.setDestination(59237U);
    msg.setDestinationEntity(254U);
    msg.name.assign("KWACVPENAESTFITJERWAKFJMGBJQDCCYBXFNXBAHHUVCPEWOITXZBRQDPONGNDZRVSOSNORQDRQYBIKSXQUJPSNCMBHSHXYNZWUPLZMCNLCUUEWGNTYAIQLGVTWFQZOXABXKMEFWLXMOUYZVMDUOTDXMKJGRRVILWVYEAJVHLLHAIPSKLJTFPJCUAUCFBNDZSWIYOKQQHZRDROPVGFFPGHSCBYDGMWLJIGUBKOTHPIM");
    msg.value.assign("IWNRQTCYSLQZRYFJMFYTLOCNDPIQRWOUKDCSPRRBGMAJZXJJUGPMWDVJMAZAZEMNHHMFGIEMHIGHJYIDXEACIFUPAKPMUSLDIBCXGOIVJKTWXFESVDQKWBPPMETMCESRGEKKJLKPWFQNBTDTWSTSOVHZGTLVUQZAPWQNAUDUDSHHGGFRASNPKVXLYDVCBICCOARBZYOAHFWXC");

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
    msg.setTimeStamp(0.08542022793687376);
    msg.setSource(59300U);
    msg.setSourceEntity(241U);
    msg.setDestination(115U);
    msg.setDestinationEntity(128U);
    msg.name.assign("MMVOEFUDWBAGBFOOXOGNLMTELFWYAQYRYJVCBEVCZKW");
    msg.value.assign("LNSJCDBXMBDKBCMCCDIXHWPGIIHAIFURD");

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
    msg.setTimeStamp(0.7672095448012024);
    msg.setSource(21393U);
    msg.setSourceEntity(167U);
    msg.setDestination(35980U);
    msg.setDestinationEntity(77U);
    msg.name.assign("VZJJNKKLTSWBWFPUVQNIDHGCJWNCSCDOWAIRGDPLKSYUIYBIAMQJBRYESJMXESCQUUUYPBOXPCTFKRAVZMFWVAXUIUBHDYFGONOAVEKLGFZZEFCGAITETWSRCEWXITDROWYVBJTSYHCQPEFPBQFDUNGMOXDPLVIEMSLARHMQSKQH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LBKPCNKRSXHQXERUPATUUMTXPDNEBFWDSOFNPCZQHJCFAQTZLWNVPRRFNFWGSOGTZIISXIEGXQPHHIWIOVROLJYBEYDCBWKMUSQIKVFYSAOJDRLWYMPKDDTBWAJGXDEBHNVQXGUZEAOIZDYXBVVSVTAHWTIVXRLDZUHKZMPYZXRHBYJZCGTQGSBAOCJDY");
    tmp_msg_0.value.assign("ODUNOEKLIQAQUYBNQDYXNXSAJOMJPOCALVNIWOJPUTKAGPDEAYWXECDRWZJIBLBDYKGFSYHCPBETFVHPYVUXWROSMFPTAXHDQBVPZSYTLMIFFYRHCRWRTDGWBQSJPMCWFCWMVPUOZGHSNDMQGERQGSMHLKBZJXHUAEGXLKQNJCVMZQOKRUULODTYERFZQEIXTVFLPGLXJRKGSSOZIWWAFBLNCGEIHIUMZXDKFSKVAJYZ");
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
    msg.setTimeStamp(0.5945467393672759);
    msg.setSource(48754U);
    msg.setSourceEntity(42U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(224U);
    msg.name.assign("ZZSAQADBMWPTAXVOYFVOIQOGPMQLXYKPFOBLMGPYWXNAKHVKORNIJGEFFPQEQGCMIAIDYLZOYSTQKKCVKHLZJFYUJRNFOAQUXTIWHDGEBERHQOXDCSJPFLQHMSUEPKFIPTPTLGSZKOVBZDAJWCWTHBDBCJBURMGSIUHXWCWNVVERBDVXNNBMEWQZBSIHLRCRNVNCIETCKJGRZAEAYSDXFUYWMKHMHYUDLNJGYPTJIXSAUFDRRMUOSELVTZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FOJCKKZIPTXKDPGAULLSMJOFQGYXIEVTAQLYUCBVDAQECJRNFYTQHKCYGSGILNOBHXRRHBEHZUPJWLKEMF");
    tmp_msg_0.value.assign("TZUEBHWTRQZPWVDFDWYHMIPIBJKUEHOIGMQPXSFSDRIJYGZODKTTSFSDGUJGQOBJQGA");
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
    msg.setTimeStamp(0.6918463436775407);
    msg.setSource(36441U);
    msg.setSourceEntity(126U);
    msg.setDestination(45168U);
    msg.setDestinationEntity(123U);
    msg.name.assign("PEWLOOJCQXLFYDBAHUFADTPLZSBXZSDIJXGWOIZHSOWBEIOVBVJLTJCKMSXRAFRIHWBUMLITOKVNDRYGXMKRQNEQBZYBAGQVEPNDZZUUCHBXMRGXLOJQBXMT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZOLUGBXFSPBZHYOLXSGTHSVSYKPINTNZPMOYNIAOQUWUWXCRMOEPSIEIXOXFBIYKAJFLAMETZOBJPDGIJPRHMBHVZWJGRMZIKXBLTFQZJUAVANWGWIULKMGXCCUNCQSGFHPMYSLKRJFYPBVFIMNYKRDBTSFVXU");
    tmp_msg_0.value.assign("ZIFPZQYCQHDLCVTXELWLASPVEYSKHBOCESRNMNAWPTQTBGLZQNSPJYOLZOEMGIOMBPAKGJISAOOHFJJRNTFXPGHEKLFUMPGDHNHJDSHVJQUYCFIXBLWNPTQTLIRMQBKQMPUUZJYUVEUDLBRFSUBXMXWADBKCAKGHMY");
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
    msg.setTimeStamp(0.793947326633227);
    msg.setSource(30710U);
    msg.setSourceEntity(103U);
    msg.setDestination(53524U);
    msg.setDestinationEntity(91U);
    msg.name.assign("BJNXIWDDMISOWOPPZXPRURJKVUAEVFWGNVWQLYNNFPFARJIDGPLYVSZDOKTMIUHZMDMXTZHKUFLEDEKHBHUZTREAXYRJZKAKKTXSOOIBYNLISXWIDYTITOOMZKFBUCQJBWRMGEQCVESSHESJYAXPWAVH");
    msg.visibility.assign("GSDHJVMZGMTLDEMAUWFUOAMGYZFSKEPOSHBXCTHJBPXPDCWRLRYZMGHCLIEKZIVLWBZZJTXJXOPTCUXZIRDAQPDGHCKKGUUFFIKERQALUKVEJSJSECNOTTIAVKBNVCJVDSKNSJDEPPOBYBNSQIWWBRNAWQFYVHNSYEIFUVRLLJCNTYVYAWWPASTAQTMXHDXYFIOILLCXREGTYZBOMRHZ");
    msg.scope.assign("UQTOLHMJSTCTVIBNOZBNFANGHKLERNIAWQHVLMZLBMZAXDIZHANEDR");

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
    msg.setTimeStamp(0.9561795447685438);
    msg.setSource(62910U);
    msg.setSourceEntity(107U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(172U);
    msg.name.assign("YSRGVEVQIOKVCJCLNFCHNJJAOEMPKSHNHOEPCQCBBYBTIUQPZYDTXXZMZ");
    msg.visibility.assign("NAACHJICXHBYOIITTGWNVJBWDEBMZZDPFBUPRJKUEGMQJQCPOFGAOMNGFFSDWNLAQMWELNLHRSMAKTJVYD");
    msg.scope.assign("ZPIODXZCZQAJMLWMXILFYBYJWGEGNXSPKQUGOQGADCSTZQPVZXYYLHBIORWUDVJJFCQAFMUQHPFYDLNVGUQTNTELREIKMFICXVBTWLRACIEVWKVDNPMRRLDBCNFSXARQLWRXKAHOPRNZORLJDHCHEBEUSVOMJPNTBSHMEIUUKUCSQKJVIYGNSWMHFTJTSPNJIYSAHLKGAXYKOWZAKBCFZ");

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
    msg.setTimeStamp(0.9469337677889738);
    msg.setSource(44821U);
    msg.setSourceEntity(147U);
    msg.setDestination(57252U);
    msg.setDestinationEntity(107U);
    msg.name.assign("VZUPIACPBJOLFFLWYLPEQOXRLMBWCRMUEVDDQSAHDWDHITOJBNNKVGIVOJZELVSMDGJIMEUSSBDLQBCUWZF");
    msg.visibility.assign("KNPDMEVMQHHYOQYSZAWXGAHLDRMGRDCHYLPAPFEFGOXCMUIULAHAIUZSJESLVGYBJXZSIXBCXRTAZGYVACKXFVOKTEECBRKTAQPOWWNOQBXJZZFQBNDLMRUUNHDYCOZUTSQIQLJDEKSOROXCGPFRPTFIKUDAJBVERTHGNWASDURHCFBBILXLCEMZJLEGNVIUEWZKKSSMTVMYOKDWPQLPBGQCPJZMYWUXKHSJ");
    msg.scope.assign("XDDRETFOXIHBUYCGQFAHJEGVPBI");

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
    msg.setTimeStamp(0.17079525738390222);
    msg.setSource(45417U);
    msg.setSourceEntity(99U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(172U);
    msg.name.assign("ZVHHHCVFAJAGCPOUMKDOLDYGBNGPZVIJDVAPFUGHIYVJZEDZJCBLDZVYMHSGRITWXHBOQRBZEKYSBCMXRBDQQLPGQFSOJRZGMKSSKDANQUUYRPUQTGEENNKFOGMRXPTCIBOTHXVTQIJOYOZYXEWWHFRTKDJAQSCMXFXUIPWYPLEJSFTMLCALZOTXJJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HZKJKVXKPIAOUOBMTFNPPTSOVSOCARBXGHPYLMAOWAXCOJWCVUFLPJDDZLJTTQFKYVX");
    tmp_msg_0.value.assign("DKNLKCSEYGJZTJDTOTPQUNHPUYEINSQZIRYZIZOCAAIIYNJUDGVUKJDOVIUWHLDPANSLBEUCWXPXYIAQHDMOGLFQLFJZNTSQGJBNBGYRSKZGVKCWXRFJWDAHFYLRVBUKUFJAFHSVXETCCTVSVABRZQOFMJIPTFWXMGMMBLFCEPTVDS");
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
    msg.setTimeStamp(0.35650012034654643);
    msg.setSource(24860U);
    msg.setSourceEntity(18U);
    msg.setDestination(20490U);
    msg.setDestinationEntity(161U);
    msg.name.assign("FNLSAGFBWCJBMSJGNAQAKILKMQDZVZHEXSCAOWBLAOJDZSSNGJHITIMAVGXCUOFXDSTEYVQMYGNLSLCNKRJAGLGKRPBBSUCIOXLTQFKYUCTCGYIHFCVZSPYLEHEFVYMIOYZBEKPOMUUDULGITWRWKCDEHTTTNQUZQFQWRXNFFVPPNJIOCZKVRVWMJXRJDRGAQWHJXDPMPOYWEVDZWVHPITANORLRBDNBIZDTXHZOUYR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YXEYWDMWZMYBOASNCDDHMKLLRSSGHFJBHGKDDEJTPRICQKWZGLNBXWLCZPPZMZCCSIFAYVQJOLIAQEVWHRIWTVNHHTIGBBYQUNODJPYNRRSUOZDMIVRHAJVGGJAVTQGQXRTTKXPMAWSXUMBKYXRHQOUIJQUIUPBCNUZWLPTJRCLUFOMYOFJDIKEOSHRXEMVONATXGACFGDEVSQ");
    tmp_msg_0.value.assign("GJJALVCVSIYJIUCTAMIVACLFVEIFYPOYPEYFBTNOTMLSWWMWQXZEBZMKVXPUQXWNLGVBGXJRBXZTTDDAQLKVGQVDFOPDKEHAYDRJPQVHDHGCZICEURIEPKPXJHNBFGDDAAJXFOCOSPCSSMHMYREOFUGKDSKJSLSRDZAQUTYTTQPXYJQLULGIUWKAWMUOJQWZZWEQCOHOIKFMWRRTAGRKUIXENZZGCNMCYBVHSRBPY");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.10883790569123641);
    msg.setSource(52529U);
    msg.setSourceEntity(98U);
    msg.setDestination(727U);
    msg.setDestinationEntity(183U);
    msg.name.assign("KRAGEVVUMZEZYJVNZQPQJURMIVWKIXXWWVWPIICFT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XTRFBUYJQACWPRYFLUJLUJGOFXVFZTPAHVMMCNIQMGMEQAVCXRZNHSKGSIKFSVUVZRAOKCHLXBLLSSAVJIKBNJAXKZMBCYUDOHBYRFQWVYJUWOMDBSJVZAZWWRNTFNGZ");
    tmp_msg_0.value.assign("VCQUTZXFUOMMFW");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.11156002758604366);
    msg.setSource(9065U);
    msg.setSourceEntity(13U);
    msg.setDestination(58299U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XXJDKOOMPTNGXXVKYCMBNFYBAIFMWBIVHUATJNXTFEKSDWQJRZDGFHGHCMCJCUUTKHZFRWWQMALLSQOBUSNCJALEIUFVIRRUWMYZWYNRHBBXEUNXSALLREIWPRYLYXNZDZVOUFFHDOPGPAQPKYBIJWVWSZZRVBILDZQXOJTPUJCSDZHOTALIXRFMKPPEWYGVCSQESQQDOHVIPHMGMEBOIGKEDN");

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
    msg.setTimeStamp(0.47418691542534686);
    msg.setSource(31915U);
    msg.setSourceEntity(66U);
    msg.setDestination(8962U);
    msg.setDestinationEntity(98U);
    msg.name.assign("UIMCMPTTLCVMDNYKDSDDNOJWQEVAZCSIIQGTQYAOEFBGMLNIWSKNKHMAQUFPTCRSQOOPIEBVWNJEUBKZRDMRCFFXZILFTASOIGFXVXLGJPNCRGHBHKXAJALRYJVRGYOXGNVFVWDZXJEWUTAPBCSYPRLIQUHGIVHWNZMIZMRHYXSOGXWLBYYQNWKNBOTPPAJUKFZHJXUABEWPROTS");

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
    msg.setTimeStamp(0.6296419020509468);
    msg.setSource(29367U);
    msg.setSourceEntity(213U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(47U);
    msg.name.assign("VOYWHGHVDJMBAHRYDLFFKGLQDHVBZXQISBTCKCMDEBKHADCJLCYVUZTNLZYRWRBTNMRMSRGAEKQTWNQLJJAABEOUGXARPMULXLWHWKSBVAVNDUQIKIZNSJVWPXMNNFGKTISTGGZDPE");

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
    msg.setTimeStamp(0.8191447046024087);
    msg.setSource(38209U);
    msg.setSourceEntity(83U);
    msg.setDestination(30952U);
    msg.setDestinationEntity(62U);
    msg.timeout = 4058068873U;

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
    msg.setTimeStamp(0.7693440697982453);
    msg.setSource(18608U);
    msg.setSourceEntity(13U);
    msg.setDestination(1790U);
    msg.setDestinationEntity(230U);
    msg.timeout = 991787023U;

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
    msg.setTimeStamp(0.024047144773815754);
    msg.setSource(10284U);
    msg.setSourceEntity(243U);
    msg.setDestination(55191U);
    msg.setDestinationEntity(188U);
    msg.timeout = 3936314257U;

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
    msg.setTimeStamp(0.8095568225186149);
    msg.setSource(275U);
    msg.setSourceEntity(0U);
    msg.setDestination(38200U);
    msg.setDestinationEntity(160U);
    msg.sessid = 3206805647U;

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
    msg.setTimeStamp(0.8301128443343782);
    msg.setSource(35650U);
    msg.setSourceEntity(157U);
    msg.setDestination(12156U);
    msg.setDestinationEntity(20U);
    msg.sessid = 40576763U;

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
    msg.setTimeStamp(0.42475495747197745);
    msg.setSource(49809U);
    msg.setSourceEntity(223U);
    msg.setDestination(18570U);
    msg.setDestinationEntity(215U);
    msg.sessid = 3862495748U;

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
    msg.setTimeStamp(0.6065804815182875);
    msg.setSource(39808U);
    msg.setSourceEntity(65U);
    msg.setDestination(34519U);
    msg.setDestinationEntity(162U);
    msg.sessid = 2424556064U;
    msg.messages.assign("BGXYVCPTXUMDHTIJHUWVJFPDVDRAGGKWNGWGMEGHWYBIPRYTCUFTUXZUOICEBPXHPBOESPXMSLROFKWIFTGINRZMDNAQOSTVDKONFKDXAEOIZHWQTEYHQPVDMLRZABFOEFLPGNSZJMLDCHRUNQZHDXCAFRIYOTZRUJXUOHNZCCSLQGVQYVPUTFJATOBSHCLKELKXLMDSIRWEJKINJGWKIBRQMAKSACFWMAKSAVYLNENPZQWBYYUMLQJBQ");

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
    msg.setTimeStamp(0.5770158984380527);
    msg.setSource(27535U);
    msg.setSourceEntity(139U);
    msg.setDestination(56481U);
    msg.setDestinationEntity(208U);
    msg.sessid = 3311217529U;
    msg.messages.assign("GRLIWMZXDH");

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
    msg.setTimeStamp(0.8863681669534416);
    msg.setSource(27209U);
    msg.setSourceEntity(212U);
    msg.setDestination(20281U);
    msg.setDestinationEntity(66U);
    msg.sessid = 4087724912U;
    msg.messages.assign("LPHPDJAEYPRITGKSWMZUNYODEFKLLJKEGMKDCAETISVICLOZGCATKGODBINZFYRJVFHHWNGFTVSXNOQQFEUEUYWXHQRTPJXCSDYHZAMCEVITTIPDPDRPXJRDMUMIQAOAWXGSBAZNOYPYXESIWS");

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
    msg.setTimeStamp(0.8815409515476846);
    msg.setSource(63633U);
    msg.setSourceEntity(233U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(164U);
    msg.sessid = 3630647179U;

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
    msg.setTimeStamp(0.26400097786528387);
    msg.setSource(45578U);
    msg.setSourceEntity(234U);
    msg.setDestination(19028U);
    msg.setDestinationEntity(72U);
    msg.sessid = 1316314013U;

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
    msg.setTimeStamp(0.7053052928868405);
    msg.setSource(32959U);
    msg.setSourceEntity(10U);
    msg.setDestination(32209U);
    msg.setDestinationEntity(178U);
    msg.sessid = 2853048871U;

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
    msg.setTimeStamp(0.08679396013032392);
    msg.setSource(39774U);
    msg.setSourceEntity(204U);
    msg.setDestination(10477U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1652461062U;
    msg.status = 59U;

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
    msg.setTimeStamp(0.14301274164924294);
    msg.setSource(49605U);
    msg.setSourceEntity(81U);
    msg.setDestination(5579U);
    msg.setDestinationEntity(240U);
    msg.sessid = 2907611928U;
    msg.status = 86U;

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
    msg.setTimeStamp(0.39923323325541915);
    msg.setSource(64786U);
    msg.setSourceEntity(136U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(83U);
    msg.sessid = 4292405866U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.2468044859357027);
    msg.setSource(36379U);
    msg.setSourceEntity(216U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(98U);
    msg.name.assign("JFNIACKZQRYPCKRXJGACXJQTDYJOODLSIOIVVWCDCQLBUJNYPCRFTVNHFSNPUDBTOEHMGWAUXDGUWZORBCHXYUVWTDZQAHNRAEXWSZZKQEKWYJUDEDXJKFAJFBSKKBBMASYPMVFOSPHDIQCIYLG");

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
    msg.setTimeStamp(0.8906275248928793);
    msg.setSource(23890U);
    msg.setSourceEntity(169U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(241U);
    msg.name.assign("GEPIBIGKQWMHMCNSTICAJXQJHGUAYTJPHAKJBJXEEMLZCYLSYMITULBSPMWLFRQFZVDPVERODBOXNLVLWSWHPCGHDC");

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
    msg.setTimeStamp(0.39820593357439926);
    msg.setSource(26633U);
    msg.setSourceEntity(169U);
    msg.setDestination(41848U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ECVCWUIBPEXJOPYGGOTPFVHIPWBYOECRGZTAKDMZVLMVIBAXMBHYKMIFAAQAIURXFUHOHDBQMOOSEEGKYAJHTQDGVGDOKZDSTSAUCLWSKOZSSTEANUUENMLYLYNPKNTBSB");

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
    msg.setTimeStamp(0.38631014429046306);
    msg.setSource(14546U);
    msg.setSourceEntity(24U);
    msg.setDestination(29797U);
    msg.setDestinationEntity(242U);
    msg.name.assign("HCJVPGEOVYJETWLPNTYLZKVYPKLVYZXDAEPJNDTHQQXRZMSIHENYELJBZZOEXESBHCBIAFGAXDJNZNYNFALXTWJUFMBYWRQIKUBYZFSDSUNYBALASORTGHVTADQIKSMFCCEMWBWXMKKRXVBLFROGXIQKAGMTZUVCKVUQLVGHOGO");

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
    msg.setTimeStamp(0.42737237151317753);
    msg.setSource(17399U);
    msg.setSourceEntity(56U);
    msg.setDestination(33630U);
    msg.setDestinationEntity(227U);
    msg.name.assign("KSQQCHNEXJBOTNTJTAAZGEKQWPSRMUESHBPBYODOZGLTMUWMURBZNKNIXJHNWDSPQCWXUKBKYIKHHERPYEVSYUDVLPGFCIGGDWNCJADPVFHGSHQVKBDPVLFIRYVXRVXCRIMWMSCIOPEVNMOQZYJTVRIFHZOBSEUTSGNANDPQFWXKJWWAMDK");

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
    msg.setTimeStamp(0.06705756922152795);
    msg.setSource(10143U);
    msg.setSourceEntity(178U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(249U);
    msg.name.assign("TNLBGVCLSQDHCDKHFWWWOZZTRCYGNOJBOZXQIXRBYHYADMQTIXWIIQSORQKNLCJAIJIXLXPFHNZNMGGWJMPXZEYKDASVLUSSYKEEUZFPFMZADQMFSDNYZUPEFOGURLJKPVUMCTTCQEJ");

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
    msg.setTimeStamp(0.0069802405390932964);
    msg.setSource(33783U);
    msg.setSourceEntity(24U);
    msg.setDestination(12058U);
    msg.setDestinationEntity(183U);
    msg.type = 177U;
    msg.error.assign("YYJCFHVWOGZACGUFLIXUGECKTILXMKHNPMBDRHBFYQETSWIMURFRXJTAN");

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
    msg.setTimeStamp(0.8005425907873868);
    msg.setSource(55184U);
    msg.setSourceEntity(49U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(203U);
    msg.type = 206U;
    msg.error.assign("VCFYHSGBZMCGONVKTIUKFLUAXKAEMQKRCGMHELXZAQTPSDHHVYQPHJWHCSIUZYQAUVLZJDCSLBD");

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
    msg.setTimeStamp(0.21198749200875244);
    msg.setSource(11715U);
    msg.setSourceEntity(113U);
    msg.setDestination(30027U);
    msg.setDestinationEntity(24U);
    msg.type = 14U;
    msg.error.assign("BGZRMSZOAEXZPYRJYNGAWHZNQVYLZLKPSFLPOLLQGTSHWTRYKUCWTAWVHVXSTOQKGQRJVWZIXBYFHIRIBPBMTNDNDTVBCBUSBPWPJLGFJXKDIVTLDSEPMOAQCNCGIENMTAWVNFOKRFIDYEYE");

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
    msg.setTimeStamp(0.3356176191084197);
    msg.setSource(65072U);
    msg.setSourceEntity(59U);
    msg.setDestination(38007U);
    msg.setDestinationEntity(0U);
    msg.seq = 10291U;
    msg.sys_dst.assign("PMYSFCKRPSCKIZJEQAVPGLGYSYGTXLNKEMHOYCQEBWCIGOACRELGWFUETXZJZETEDUJKQOGIRMIWZNNEXHPMHXKJUCJZKVVFDKWQTJRQNNPBQFZNPTQZQHPXBSFNIBRMUADGADATWFGDHE");
    msg.flags = 97U;
    const char tmp_msg_0[] = {118, -41, -66, -95, 11, -85, 53, -85, -21, 102, 14, 111, -43, -96, -33, 15, -10, -67, 110, -49, 89, 22, -11, -107, -54, 95, 54, 41, 106, -112, -42, 50, 122, 75, -3, 71, 33, -19, 14, -78, -70, 99, -22, 84, -23, -124, -14, 58, 65, -86, 105, 19, -82, -107, -7, -41, -7, 126, -62, -96, 105, -27, -17, 57, 24, -84, 25, 7, 95, 55, 115, -48, -54, -121, 13, 59, -23, -60, -4, 88, 38, 121, -81, 66, 69, 82, -102, -95, -122, -27, 114, 106, -77, 75, 120, -36, 105, 104, 121, 100, 82, -48, -45, 108, 116, -75, 75, 31, -102, -88, 95, -24};
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
    msg.setTimeStamp(0.7408948282855635);
    msg.setSource(36224U);
    msg.setSourceEntity(160U);
    msg.setDestination(38613U);
    msg.setDestinationEntity(25U);
    msg.seq = 56368U;
    msg.sys_dst.assign("IGUCYAEKKKYXQVQAZCIYQLBHUULZFAJNNDOWGSFQDKSVROSXFUVHYNBGQZTUJBJXGSNYJVXHAXGQHCBUDSOLOMNIFWHSYEBRCHZTKROWPTRZAUYMCMCIGMTXWJVCKUECATFZPXSIOLJPRSBRBKRLZJFWWMGNLIX");
    msg.flags = 107U;
    const char tmp_msg_0[] = {-83, -16, -18, -74, -4, -117, -110, -34, 78, -96, -114, 98, 126, -40, 34, 122, 5, 102, -69, -112, 63, -38, -109, 61, -65, 33, -49, -58, 7, 25, -5, -34, -101, -98, 125, -67, 9, -52, -17, 62, 10, 73, -37, 112, 75, -80, -98, 30, 44, 52, -116, 49, -86, 113, -124, 1, 91, -63, 96, -10, -40, 62, 77, -5, -49, -32, -50, 11, 50, 49, -111, 61, -68, -23, -74, 79, 10, -22, -1, -6, -17, -109, 115, -39, 73, -122, 39, 78, -21, 11, -69, -21, -106, 48, -90, -16, -17, 76, -5, 74, -56, 50, 53, 73, 65, 57, -103, -44, -44, 63, -29, -68, 110, 108, 21, -49, 110, -13, -9, -74, 55, -105, -43, -120, 108, -46, -127, 93, 126, 17, -5, 16, 39, -21, 98, 19, -104, -86, 23, 103, -21, 74, 56, 84, 60, 86};
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
    msg.setTimeStamp(0.5737720990190186);
    msg.setSource(28901U);
    msg.setSourceEntity(242U);
    msg.setDestination(3591U);
    msg.setDestinationEntity(110U);
    msg.seq = 7666U;
    msg.sys_dst.assign("NRLGBKBGWERFDYGTIACKTZVMGOPGOJVLQQIDUIHGEZRRCJUBHMUHQPWXKLQEPRIXACFMKBGJCJKPRLGAQZTQFOWWAUXITUMOKQSVISSVXO");
    msg.flags = 5U;
    const char tmp_msg_0[] = {66, -50, -22, 94, -68, 85, -1, -39, 96, 33, 47, 59, 46, 116, 67, -47, -85, 28, -88, -73, 23, -111, -64, 110, -26, 70, -88, 118, 57, -95, -41, 56, -76, -120, -28, -64, 36, 28, -67, -97, 0, -74, -107, -101, 104, -50, 46, 28, -55, 104, 106, 68, 29, -53, 84, -108, -127, -47};
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
    msg.setTimeStamp(0.08270262750717094);
    msg.setSource(9119U);
    msg.setSourceEntity(50U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(203U);
    msg.sys_src.assign("DLJTVTWLKAOODNOCGSSVBHAIPKXZYTXLAVFFIGBVIOVGKSASXQPR");
    msg.sys_dst.assign("NJHOWBOVHFPCHCWRZVXEKIV");
    msg.flags = 64U;
    const char tmp_msg_0[] = {20, 52, -7, -27, 13, -65, -50, -12, -104, 97, -9, 82, 27, -33, -125, -34, 7, 97, 125, 64, 115, 53, -36, -6, 6, 90, 62, 86, 82, 107, 81, -29, 41, -23, 112, -38, -77, -36, 108, -109, -112, 2, -108, 112, 82, 20, -63, 25, -18, 78, -72, 65, 56, -25, 12, 64, 104, 96, 119, 59, 11, -6, 41, -60, -128, 111, -71, 57, -85, -46, 6, 75, 5, 78, 79, -1, -110, 68, 107, -22, 53, 87, -80, -25, 100, -86, 53, 81, -111, -80, -70, 115, -43, 120, -61, 11, 47, -81, -91, 83, 60, -98, 13, -43, -64, 58, 44, -44, 63, -124, -48, -99, -22, 47, 29, 27, 35, 101, 96, -56, -96, 13, -37, 56, -41, 105, 55, 82, -91, 0, 122, 70, -49, 42, 83, -83, 17, 118, -40};
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
    msg.setTimeStamp(0.47498948555880904);
    msg.setSource(15045U);
    msg.setSourceEntity(172U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(40U);
    msg.sys_src.assign("URSEOKSFJDVIBLYGOFCHPNQPDLESYTFXDDOAVLDOWCFDUBJLAXYBNIAPIQLJEDEMAOHHCTIMVGPUYDTKJLATGRZOGQNKLZOKPKZHFQTMPUWJCMWAXTFAUNTUZDEXG");
    msg.sys_dst.assign("XCPFZAWYGDUKXJPVPOYBTZDQGHIVKJOWWESVSQOUDQWINYDZ");
    msg.flags = 85U;
    const char tmp_msg_0[] = {-41, 107, -60, -8, -91, 93, 82, 80, 53, 50, 28, -119, -26, -84, -68, 90, -68, 40, -78, 58, -49, 38, -53, -52, -33, 15, 63, -14, -77, -61, 101, 35, -89, -118, -72, 115, -12, -116, -113, 82, 62, 76, -128, -92, -48, 17, 115, -122, -3, -109, -75, -85, -87, 91, -81, 19, -58, 56, 104, 8, 94, -45, 114, -123, 89, -28, -21, -18, -20, -2, 72, 103, 108, -121, 72, -26, -45, 64, 46, 86, -82, -73, 60, 108, -44, -106, -46, 43, -71, -81, 114, -93, -6, -11, 23, -12, 104, 115, -121, 120, 108, -80, -89, 91, 0, -33, 34, -12, -4, -8};
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
    msg.setTimeStamp(0.389366146692837);
    msg.setSource(12978U);
    msg.setSourceEntity(4U);
    msg.setDestination(26197U);
    msg.setDestinationEntity(218U);
    msg.sys_src.assign("OMSVAAWNRIKWGTSRURMPPZVDYIWPSBNVOUMAFGXJQCQKHONHYTIHGBWBCFPLTNYREYYSB");
    msg.sys_dst.assign("MSKALQDDVMWXIKMUEBCYURHVLZJUATVKGCQKCWXUYBGCEZPSNPHZPDBFRGWNZHCFTHCCBWVQPTTSCRQSHJNLMLFWXQNSBXKEOUTMNEWUBDQQYND");
    msg.flags = 208U;
    const char tmp_msg_0[] = {3, 112, 114, -49, -80, 86, 41, 21, -21, 109, 124, -94, 49, -120, 7, 45, -25, 62, 14, -67, -30, -18, 27, 61, -33};
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
    msg.setTimeStamp(0.23227876594696018);
    msg.setSource(58996U);
    msg.setSourceEntity(8U);
    msg.setDestination(65193U);
    msg.setDestinationEntity(26U);
    msg.seq = 36110U;
    msg.value = 238U;
    msg.error.assign("QEMQSDNAKFIZMHURDOYIIKPBWGPWILZVQNUPGDOQTCABGBEYADXAECRRATYJCGMUAQFAXWUVNMMEFGSOZYXWRLYPWELHFRPLFHISIOULBRFHAUMFMGSZZUOGZYJJQGXLQTXUHYBTBCQENUODBHDCINJNLLVTWRZJDRIDRHXLTWBMSSGCWPXKCTOEKOHSQSEHXPZFYJAKICPZWCLNJQONJDKETZKSSVKDFMFTNETBJYOVVAVXPRNKBYWIVP");

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
    msg.setTimeStamp(0.3118649639890577);
    msg.setSource(11162U);
    msg.setSourceEntity(169U);
    msg.setDestination(37317U);
    msg.setDestinationEntity(131U);
    msg.seq = 49777U;
    msg.value = 228U;
    msg.error.assign("AHSDISEZRCXDQOCJRNTIGETWDFBRYTOCIXANENUOFVZMEVBHZXLJNQLPHHDZFIDFOYPWERHOOEFPVUVMNBJXPURSJQYKGPSRESXKGPHUKQJEXBYGQILF");

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
    msg.setTimeStamp(0.5627897100201849);
    msg.setSource(54450U);
    msg.setSourceEntity(200U);
    msg.setDestination(3737U);
    msg.setDestinationEntity(127U);
    msg.seq = 38981U;
    msg.value = 143U;
    msg.error.assign("XXQNXCMOXWWBMZOYKZXBEDBUCLGRJNOYFQWHHSGIPMVYHULNWODETKRYWDUJJACIALOXLNGSRCJPVJRHNNQPJIRIUREVRBPZECDKSKWNLQIDQGEIALHDYUYBVVOSVHDFYASGIAKCJFKEFBOTMGQAXSNGQTLPFGJNOSMMMMXPIVBEFCQTTICDSAUZWMKKFZTHTTLYPSLHTRUBZHQEAZWZJYEGQFKYFOUWPWVXAVBDJAIOFEUDRSKTGPZMLZ");

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
    msg.setTimeStamp(0.8425925842026694);
    msg.setSource(42605U);
    msg.setSourceEntity(217U);
    msg.setDestination(41414U);
    msg.setDestinationEntity(76U);
    msg.seq = 55656U;
    msg.sys.assign("UBRMPYNESJKZXMBAZNVATWYPDETFHXOFAQZVANHKKHWTXIKTIFZDSNQHENIJCOQAIBVWOYBWHHEXMVXRFIWQNVWOYDML");
    msg.value = 0.7406161979389183;

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
    msg.setTimeStamp(0.3443546865034338);
    msg.setSource(62668U);
    msg.setSourceEntity(219U);
    msg.setDestination(14745U);
    msg.setDestinationEntity(242U);
    msg.seq = 47938U;
    msg.sys.assign("CKFMXMKMDOZCKUFZEQMMYZTWERHISBHZENTTLKRIHQQYSDYTMJEAJYRHVXVCUUZOEUZQ");
    msg.value = 0.4855253531137438;

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
    msg.setTimeStamp(0.9756291189270195);
    msg.setSource(3452U);
    msg.setSourceEntity(10U);
    msg.setDestination(22913U);
    msg.setDestinationEntity(140U);
    msg.seq = 18298U;
    msg.sys.assign("FXUDZYHKOTWLEPUIDXLSJN");
    msg.value = 0.6157881557522031;

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
    msg.setTimeStamp(0.12183643271502309);
    msg.setSource(30582U);
    msg.setSourceEntity(187U);
    msg.setDestination(25474U);
    msg.setDestinationEntity(39U);
    msg.action = 87U;
    msg.longain = 0.6021926971595339;
    msg.latgain = 0.5427929097727522;
    msg.bondthick = 3239485530U;
    msg.leadgain = 0.8044969004868487;
    msg.deconflgain = 0.82798391430701;

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
    msg.setTimeStamp(0.9646690038327664);
    msg.setSource(18632U);
    msg.setSourceEntity(56U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(244U);
    msg.action = 144U;
    msg.longain = 0.8970286281647545;
    msg.latgain = 0.9882416848824866;
    msg.bondthick = 649210837U;
    msg.leadgain = 0.8368141577356399;
    msg.deconflgain = 0.17883933282237496;

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
    msg.setTimeStamp(0.8207134386009218);
    msg.setSource(14658U);
    msg.setSourceEntity(114U);
    msg.setDestination(50815U);
    msg.setDestinationEntity(0U);
    msg.action = 68U;
    msg.longain = 0.6525372133625874;
    msg.latgain = 0.94657630180805;
    msg.bondthick = 421425884U;
    msg.leadgain = 0.08010143598747677;
    msg.deconflgain = 0.530602267355665;

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
    msg.setTimeStamp(0.9591128536582498);
    msg.setSource(52052U);
    msg.setSourceEntity(12U);
    msg.setDestination(21817U);
    msg.setDestinationEntity(104U);
    msg.err_mean = 0.676464649043658;
    msg.dist_min_abs = 0.9523611763766143;
    msg.dist_min_mean = 0.6953991323175043;

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
    msg.setTimeStamp(0.3410510870772958);
    msg.setSource(9978U);
    msg.setSourceEntity(147U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(83U);
    msg.err_mean = 0.8287858171172622;
    msg.dist_min_abs = 0.9242081551045143;
    msg.dist_min_mean = 0.8623546336500737;

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
    msg.setTimeStamp(0.7105178241142812);
    msg.setSource(7165U);
    msg.setSourceEntity(111U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(190U);
    msg.err_mean = 0.4185104911894777;
    msg.dist_min_abs = 0.906201608418518;
    msg.dist_min_mean = 0.585473590161119;

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
    msg.setTimeStamp(0.7353931268262761);
    msg.setSource(23300U);
    msg.setSourceEntity(56U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(9U);
    msg.action = 112U;
    msg.lon_gain = 0.5017738226371388;
    msg.lat_gain = 0.14137953198235487;
    msg.bond_thick = 0.7308461657074126;
    msg.lead_gain = 0.775791341861541;
    msg.deconfl_gain = 0.23375562515232617;
    msg.accel_switch_gain = 0.7883112529878336;
    msg.safe_dist = 0.9695902867115167;
    msg.deconflict_offset = 0.7935361681579436;
    msg.accel_safe_margin = 0.8552841008492852;
    msg.accel_lim_x = 0.7404178676477706;

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
    msg.setTimeStamp(0.6848227552848442);
    msg.setSource(28688U);
    msg.setSourceEntity(185U);
    msg.setDestination(33015U);
    msg.setDestinationEntity(78U);
    msg.action = 253U;
    msg.lon_gain = 0.41124849340545877;
    msg.lat_gain = 0.4200580878577209;
    msg.bond_thick = 0.35996499015414263;
    msg.lead_gain = 0.8340143923958677;
    msg.deconfl_gain = 0.41178315428045875;
    msg.accel_switch_gain = 0.9112522937938472;
    msg.safe_dist = 0.46594594138866474;
    msg.deconflict_offset = 0.6811377955078821;
    msg.accel_safe_margin = 0.6977317149761169;
    msg.accel_lim_x = 0.16785355092975718;

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
    msg.setTimeStamp(0.342552792982054);
    msg.setSource(41207U);
    msg.setSourceEntity(85U);
    msg.setDestination(61832U);
    msg.setDestinationEntity(103U);
    msg.action = 218U;
    msg.lon_gain = 0.8452170963374306;
    msg.lat_gain = 0.3289005429160885;
    msg.bond_thick = 0.039240460625597495;
    msg.lead_gain = 0.09311565984515968;
    msg.deconfl_gain = 0.8570826089148017;
    msg.accel_switch_gain = 0.4568372511135458;
    msg.safe_dist = 0.7998608925821076;
    msg.deconflict_offset = 0.024383494684111384;
    msg.accel_safe_margin = 0.4031319235922034;
    msg.accel_lim_x = 0.4047425555914198;

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
    msg.setTimeStamp(0.6042993644804718);
    msg.setSource(26563U);
    msg.setSourceEntity(17U);
    msg.setDestination(1412U);
    msg.setDestinationEntity(112U);
    msg.type = 156U;
    msg.op = 189U;
    msg.err_mean = 0.802825883186367;
    msg.dist_min_abs = 0.8970881532918391;
    msg.dist_min_mean = 0.764675394150776;
    msg.roll_rate_mean = 0.2915898268012417;
    msg.time = 0.2305004870342955;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 167U;
    tmp_msg_0.lon_gain = 0.019213232064439256;
    tmp_msg_0.lat_gain = 0.5748530647914845;
    tmp_msg_0.bond_thick = 0.11767887522800091;
    tmp_msg_0.lead_gain = 0.3242625688463423;
    tmp_msg_0.deconfl_gain = 0.4837110451666916;
    tmp_msg_0.accel_switch_gain = 0.6737454457002752;
    tmp_msg_0.safe_dist = 0.5415169848173689;
    tmp_msg_0.deconflict_offset = 0.39094203226026947;
    tmp_msg_0.accel_safe_margin = 0.34822504207726346;
    tmp_msg_0.accel_lim_x = 0.46015907760257924;
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
    msg.setTimeStamp(0.9246494257514499);
    msg.setSource(27302U);
    msg.setSourceEntity(164U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(208U);
    msg.type = 116U;
    msg.op = 231U;
    msg.err_mean = 0.8080417256803493;
    msg.dist_min_abs = 0.27597906239792225;
    msg.dist_min_mean = 0.6577026571689356;
    msg.roll_rate_mean = 0.2542447950534029;
    msg.time = 0.5551111576477025;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 69U;
    tmp_msg_0.lon_gain = 0.5229220944537791;
    tmp_msg_0.lat_gain = 0.6815373712338458;
    tmp_msg_0.bond_thick = 0.7881452434115925;
    tmp_msg_0.lead_gain = 0.10426561775663556;
    tmp_msg_0.deconfl_gain = 0.9915316107010362;
    tmp_msg_0.accel_switch_gain = 0.9733705811109337;
    tmp_msg_0.safe_dist = 0.14702920082060889;
    tmp_msg_0.deconflict_offset = 0.7483629774554329;
    tmp_msg_0.accel_safe_margin = 0.8070079652943927;
    tmp_msg_0.accel_lim_x = 0.777102226934825;
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
    msg.setTimeStamp(0.3618145067091776);
    msg.setSource(31676U);
    msg.setSourceEntity(169U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(47U);
    msg.type = 86U;
    msg.op = 162U;
    msg.err_mean = 0.04730342132101395;
    msg.dist_min_abs = 0.6124383648464058;
    msg.dist_min_mean = 0.47324044469507487;
    msg.roll_rate_mean = 0.5131371732651293;
    msg.time = 0.32066493835803034;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 254U;
    tmp_msg_0.lon_gain = 0.03845476922501345;
    tmp_msg_0.lat_gain = 0.5124751076352332;
    tmp_msg_0.bond_thick = 0.013767030207138209;
    tmp_msg_0.lead_gain = 0.4512533452127573;
    tmp_msg_0.deconfl_gain = 0.6317173660813722;
    tmp_msg_0.accel_switch_gain = 0.6385099908295557;
    tmp_msg_0.safe_dist = 0.39263016818317464;
    tmp_msg_0.deconflict_offset = 0.29137378329907493;
    tmp_msg_0.accel_safe_margin = 0.9522862940616258;
    tmp_msg_0.accel_lim_x = 0.13799375200394848;
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
    msg.setTimeStamp(0.9336502303344419);
    msg.setSource(63519U);
    msg.setSourceEntity(207U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(135U);
    msg.uid = 175U;
    msg.frag_number = 95U;
    msg.num_frags = 81U;
    const char tmp_msg_0[] = {-39, 114, -68, -98, -82, 114, 67, -56, -113, -15, -113, -30, 123, -125, -109, 108, 27, 79, -119, -65, -120, 82, -29, 0, -48, -98, 83, -69, 14, -7, -62, 90, -60, -61, 110, -18, 70, 99, 108, 14, -93, 7, 122, -110, -126, -52, 114, -5, -90, 29, 94, 89, -91, -74, -19, 35, 31, 50, -72, -10, -49, 125, 106, -10, -47, 126, -21, -31, 60, -89, 66, -69, 46, -105, 50, -85, 89, -95, -35, -4, -21, 87, -94, -126, 98, 98, 89, 100, 14, 56, -39, 77, 126, -28, 43, 52, -107, -108, 81, 53, 21, 24, 85, 29, 68, -120, 118, -20, 54, 113, 26, -23, 8, 85, -109, -98, -71, 76, -10, 9, 125, 7, -56, 39, 18, 32, 33, -38, -42, -128, -42, 121, -16, 104, -49, -31, 90, 44, -83, -89, -8, 64};
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
    msg.setTimeStamp(0.08612667514444183);
    msg.setSource(44437U);
    msg.setSourceEntity(178U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(225U);
    msg.uid = 54U;
    msg.frag_number = 56U;
    msg.num_frags = 114U;
    const char tmp_msg_0[] = {-10, 126, -14, 71, 36, 112, 14, 28, -75, 105, -10, 90, 40, -81, -25, -23, 10, -48, -126, 117, -121, 66, 125, -40, -26, -115, 84, -60, -89, -28, 71, -83, 32, 57, -75, -107, 5, -71, -62, -99, -35, -51, 87, -34, -50, -128, 37, -122, -37, -127, 100, 110, -115, -64, -2, 121, -104, 11, 88, -72, -86, -63, 121, -77, -81, -79, 68, 6, -25, 26, 74, -116, 115, -21, 67, -17, 89, -54, -52, -118, 121, 3, 123, 48, 27, 110, 114, -123, 73, 57, -49, -15, 63, 123, 93, -118, 107, -33, 45, 96, -85, -19, -10, -86, 45, 21, 21, -40, -100, -1, -89, 111, 108, 88, 9, -36, -125, 34, -24, -46, 122, 78, -107, 67, -97, -84, 51, -49, 116, -71, 101, -97, -47, 1, 41, 121, -73, -121, -124, -49, -122, -62, 108, -25, 83, -53, 73, 7, -92, 82, 29, -70, 71, -53, 19, 22, -103, 16, 52, -114, -49, -36, 52, 7, -69, 84, 119, 100, -42, -77, 85, -11, 51, 31, -103, -83, 34, 40, -40, -24, -84, 86, -64, -11, -30, -72, -105, 97, 8, -119, 40, -126, -62, -17, -107, -81, -105, -27, 75, -41, 0, 27, -82, -93, -76, -18, -68, -4, -75, 106, 105, 17, -95, 51, 119, -20, 62, 92, -116, -6, 73, 45, 40, 103, -101, 9, -2, -112, -40, 94, -40, 60, -7, 10, 32, 119, 125, 87, -90, -38, -56};
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
    msg.setTimeStamp(0.8729792553304223);
    msg.setSource(44220U);
    msg.setSourceEntity(59U);
    msg.setDestination(16240U);
    msg.setDestinationEntity(100U);
    msg.uid = 200U;
    msg.frag_number = 152U;
    msg.num_frags = 96U;
    const char tmp_msg_0[] = {115, -77, -35, -118, -75, 24, -30, -94, -24, -64, -69, -49, -3, 28, 35, -99, 33, 7, 102, -92, 78, 66, 16, -51, 94};
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
    msg.setTimeStamp(0.08171766216659648);
    msg.setSource(45765U);
    msg.setSourceEntity(128U);
    msg.setDestination(9072U);
    msg.setDestinationEntity(93U);
    msg.content_type.assign("VMFHNNQZXLGRJA");
    const char tmp_msg_0[] = {-34, 57, -3, -83, -123, -83, -69, 44, -72, -48, 66, 89, 105, -124, 91, -127, -56, 62, 7, -122, -55, -61, 17, 60, -41, -68, -107, 50, -98, -11, -67, -1, 80, 24, -13, 43, -66, -9, 55, -32, 23, -70, -68, 39, 2, 80, 72, -53, 1, 72, 80, -96, 44, -56, -120, -73, 87, 46};
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
    msg.setTimeStamp(0.1725865400739095);
    msg.setSource(63427U);
    msg.setSourceEntity(175U);
    msg.setDestination(63560U);
    msg.setDestinationEntity(146U);
    msg.content_type.assign("LYCJZRHQCCEMAKXWBGSFYPCZYWFMHVZODDJQQTIHSBJCJXABGNNIRIPRRTHKGIPVBWUHFGIMXBPPLOYMASXTRVZEETTLFBKFGMOYENQJYVHLGRKTJGOHKDUNEMPBCURDANCQEVHXAQGKULLVKRFSAHECYT");
    const char tmp_msg_0[] = {82, -123, -58, 87, 66, 120, -73, -61, 93, 57, -93, 63, 1, 110, 104, 37, 38, -125, 92, -125, 112, -6, 88, 39, 46, -128, 25, 66, 116, -66, 118, 62, 108, -76, 4, 21, 125, 107, 56, -109, 120, -53, 28, 62, -108, -28, 49, 118, 47, -79, -37, 9, 8, -15, -107, -43, 21, 5, 4, -39, 90, -110, -79, 11, 88, 55, 120, 117, -57, 38, -112, -66, -113, -3, -29, 13, -67, 103, -5, 51, -97, 13, 1, 115, 60, -20, 44, -27, -82, 60, -32, 106, 85, 98, 115, 72, -21, -120, -126, 24, 28, -49, 93, -70, 115, 11, 7, -22, 52, 68, 108, -6, -41, 46, 25, 106, 1, 46, -104, 72, 36, 4, 74, -107, 74, 52, -37, -82, -46, -120, 21, 108, 116, 97, 52, -40, 57, 53, 106, 16, 40, 11, -62, 32, 21, -126, 49, 116, 71, -109, -74, -99, 24, -77, 21, 91, -101, 121, -92, 78, -62, 46, -3, 60, 68, 17, 28, 66, 37, 27, -110, -128, 74, 99, 38, -28, -124, 39, 34, -87, -107, -24, -127, -101, -126, 77, 40, 78, -98, 34, 86, -58, -82, 88, 34, 82, -54, -117, 60, -83, 98, 125, 54, -83, 86, 30, 22, 35, -53, 121, -40, 48, 68, 16, -90, 26, -15, 6, 49, 79, -62, -110, -10, 60, -75, 65, 41, -91, -75};
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
    msg.setTimeStamp(0.5783650509690532);
    msg.setSource(45419U);
    msg.setSourceEntity(227U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(187U);
    msg.content_type.assign("KACVZKNLGUZKEEBJDANGRDUTVPQLOCJHWPNAVJFCUJRWWQFCGREGGTJSERIXZFPASRGBXRCWOKSOOMNLZIIYILHARECLGZS");
    const char tmp_msg_0[] = {-71, 82, -85, -38, -80, -125, -10, -59, 84, -97, -126, 95, 19, 35, 40, -118, -10, -113, 49, -27, -1, 19, -97, -94, -125, -118, -84, 41, 4, -74, -99, 38, 37, -117, 95, 31, 19, -90, -45, -46, 126, 98, 120, 47, -84, -77, 34, 101, -116, -4, -21, 7, 125, -34, -45, -119, -5, 32, 77, 106, 70, 25, -78, 67, 125, -51, -57, -42, -77, 89, -109, 95, -78, 11, 122, 7, -58, -16, -112, -93, 60, 104, 0, -53, 29, -112, 57, -56, -4, -106, -65, 27, 117, 6, -123, 36, -111, -47, 37, 120, -91, -116, 58, 85, -37, -119, -80, -109, -55, 124, -97, -117, 60, 38, 80, -48, -49, -48, 58, -108, -122, -12, 29, 111, -27, 4, 18, -49, -55, -11, 123, 120, 125, -12, 54, -105, 126, -35, 120, 15, -81, -26, -74, 109, 76, 50, -40, -111, -91, 110, -15, 63, 78, -71, 49, -89, -98, 113, -23, 24, -7, 116, -30, 66, -45, -99, -57, 37, -124, 77, 124, 63, -69, 54, -12, 118, -59, -24, 64, -113, -11, -76, -59, -124, -49, -57, 99, 77, -53, -57, 13, -78};
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
    msg.setTimeStamp(0.3224366162975293);
    msg.setSource(1314U);
    msg.setSourceEntity(202U);
    msg.setDestination(9924U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.8663136965621817);
    msg.setSource(29449U);
    msg.setSourceEntity(21U);
    msg.setDestination(57360U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.8061886318875046);
    msg.setSource(7702U);
    msg.setSourceEntity(207U);
    msg.setDestination(38764U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.09608698156933027);
    msg.setSource(32166U);
    msg.setSourceEntity(41U);
    msg.setDestination(56291U);
    msg.setDestinationEntity(155U);
    msg.target = 16980U;
    msg.bearing = 0.6492626504659371;
    msg.elevation = 0.3422875642713463;

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
    msg.setTimeStamp(0.33633989363834926);
    msg.setSource(23163U);
    msg.setSourceEntity(152U);
    msg.setDestination(53285U);
    msg.setDestinationEntity(157U);
    msg.target = 28449U;
    msg.bearing = 0.13618232336847802;
    msg.elevation = 0.8530833157181837;

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
    msg.setTimeStamp(0.9081301694662933);
    msg.setSource(34007U);
    msg.setSourceEntity(81U);
    msg.setDestination(46636U);
    msg.setDestinationEntity(210U);
    msg.target = 45845U;
    msg.bearing = 0.9785537499089523;
    msg.elevation = 0.48154467002010115;

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
    msg.setTimeStamp(0.7031139265190437);
    msg.setSource(40527U);
    msg.setSourceEntity(226U);
    msg.setDestination(51428U);
    msg.setDestinationEntity(153U);
    msg.target = 4192U;
    msg.x = 0.008500845239211352;
    msg.y = 0.8577385858230309;
    msg.z = 0.06077419814004581;

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
    msg.setTimeStamp(0.7913610401811163);
    msg.setSource(35508U);
    msg.setSourceEntity(106U);
    msg.setDestination(681U);
    msg.setDestinationEntity(251U);
    msg.target = 15194U;
    msg.x = 0.9573471950384996;
    msg.y = 0.9962992262971196;
    msg.z = 0.19421815387902586;

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
    msg.setTimeStamp(0.916741415922049);
    msg.setSource(63642U);
    msg.setSourceEntity(254U);
    msg.setDestination(3579U);
    msg.setDestinationEntity(35U);
    msg.target = 8181U;
    msg.x = 0.4030029612772843;
    msg.y = 0.22457111371041827;
    msg.z = 0.7463298860463612;

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
    msg.setTimeStamp(0.4341013723556306);
    msg.setSource(23497U);
    msg.setSourceEntity(42U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(108U);
    msg.target = 48694U;
    msg.lat = 0.23905604593392815;
    msg.lon = 0.35210530490118275;
    msg.z_units = 110U;
    msg.z = 0.5810188596354029;

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
    msg.setTimeStamp(0.9632449582921945);
    msg.setSource(39700U);
    msg.setSourceEntity(21U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(141U);
    msg.target = 14033U;
    msg.lat = 0.23427698560920918;
    msg.lon = 0.8639964547896676;
    msg.z_units = 106U;
    msg.z = 0.007765442216633223;

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
    msg.setTimeStamp(0.953701516487435);
    msg.setSource(54957U);
    msg.setSourceEntity(128U);
    msg.setDestination(13235U);
    msg.setDestinationEntity(196U);
    msg.target = 35411U;
    msg.lat = 0.028192069983539736;
    msg.lon = 0.13253586919307336;
    msg.z_units = 65U;
    msg.z = 0.6068465768929231;

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
    msg.setTimeStamp(0.4180494238586634);
    msg.setSource(26652U);
    msg.setSourceEntity(95U);
    msg.setDestination(46093U);
    msg.setDestinationEntity(186U);
    msg.locale.assign("VUNRPRCIIIUEHMVJAQRQCRLHQHWZCSFMOFMDIBUQOVWKLYWNHTWHIHEXSKWFYABUARLVIAWYOUPQUMBBWGJTXPYJEMTGXKNBGJPFQXMZYKDBPCFEGTGACOSZEXYPVJNPWADMQZHKJFDVBYTXUZYUQROUCVPVNRDLFVROLNSNTSQNLKEFZOMVKSLGKHWKGBPFPZQTSBXWMAZGSCEZDIJDIYCLREACXADDHMJU");
    const char tmp_msg_0[] = {20, 16, 14, -124, -10, 104, 62, -1, -113, -31, 74, 40, 28, -12, 71, -78, 107, 91, -14, -29, 115, 1, 66, -29, 19, 23, -90, -68, -10, 87, 91, 24, -85, 7, -123, 99, 119, -66, -17, 67, -95, -74, -37, 113, -68, 96, 33, -115, 44, 109, -104, 22, -40, -81, 27, 42, 35, -7, 85, -31, -93, 2, -30, -23, 20, -30, -85, -116, 16, 110, -48, 86, -117, 107, -20, -3, -99, 28, -29, -19, 90, -56, 97, -40, -124, 119, 98, -6, -115, -109, -63, 32, 15, 95, -126, 73, -64, -79, 68, 18, -12, 116, -51, -21, -119, -87, -65, -12, 118, -92, -126, -12, -126, 116, 41, -34, -30, 70, -19, 117, -61, -31, 63, 22, 98, 27, -58, 44, -25, 91, -127, 62, -17, -84, -90, 84, 122, 21, 32, 119, -101, -118, -104, 54, -33, 82, 126, 17, 119, -99, -73, -100, 120, -114, -60, 59, -100, 93, -53, -72, 82, 110, 114, 93, 83, 32, -31, -4, -40, -38, 13, 51, -111, -22, 117, 62, -12, -73, 36, -38, -57, -87, -107, -77, 12, -56, 34, -125, -62, -72, 42, -59, 8, 29, -114, -41, 60, -79, 24, 114, 59, -25, -41, 12, -102};
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
    msg.setTimeStamp(0.8059138004862602);
    msg.setSource(64349U);
    msg.setSourceEntity(38U);
    msg.setDestination(64884U);
    msg.setDestinationEntity(12U);
    msg.locale.assign("ULOVJWPDIBKQBGARX");
    const char tmp_msg_0[] = {-93, -122, -30, 93, 110, -81, -96, 124, 112, -35, 13, 36, -91, -78, 115, 63, 46, -44, 28, 105, 32, 28, 27, 114, -88, 59, -47};
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
    msg.setTimeStamp(0.1696904727887374);
    msg.setSource(18139U);
    msg.setSourceEntity(133U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(161U);
    msg.locale.assign("TMAQIOTESLCMEYVKMCAYJLCYCAUGCAUMWLNYJXKQZFXZYOROSBVODGYAZXBRGEXTRZIUOFUUBXPYDHJYKFMMFGWJOBPLUTMTEWANPXNSFHOQGISYLPJGTFJKIIBOXUDIHHWJRFQDBNZCIRQ");
    const char tmp_msg_0[] = {16, 67, 90, -97, 12, -119, 126, -11, 50, -117, 49, 111, -14, 101, -17, -63, 13, 64, 89, 59, -16, 50, -104, 76, 122, -6, -105, -59, 79, -4, -126, -79, -10, -66, 20, 120, 30, 33, -99, 45, -102, -9, -86, 15, -37, 31, -23, 56, 58, -61, -62, -97, -32, 71, 77, -74, -62, 16, 74, -33, 29, -33, -121, -56, 88, -78, 73, -105, 34, -43, 37, 18, -119, 46, -19, -39, 55, 8, 57, 50, -46, 1, -81, -66, 109, 55, 120, -8, 92, 58, 69, -19, 8, -53, 18, 44, -34, -94, 76, 20, -57, -29, 105, 115, -29, 17, 72, 64, 108, -103, -6, -103, -91, 53, 72, -72, 61, -26, -1, -90, 11, 51, -11, 31, -23, -6, -104, -57, -83, 61, -46, -70, -3, 67, -25, -56, 85, 58, -124, -20, 94, 92, -73, -44, -67, 22, 114, -2, -46, 120, -26, -67, 17, -47, -37, -35, -41, -49, -6, -101, 35, 48, 105, 34, 123, -51, 90, -125, 79, 16, 84, -67, -35, -84, -127, 20, 35, 99, 80, 51, 61, -31, -20, 58, -97, 31, -2, 78, -63, -112, -9, 31, -45, 83, 61, 6, 21, -71, -11, -93, 43, -106, -56, 52, -99, -98, 5, 92, 23, 86, 53, -99, -106, -50, -53, -25, -38};
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
    msg.setTimeStamp(0.7221885736654424);
    msg.setSource(41742U);
    msg.setSourceEntity(77U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.41586127949211815);
    msg.setSource(37358U);
    msg.setSourceEntity(205U);
    msg.setDestination(55823U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.5647252935092058);
    msg.setSource(2007U);
    msg.setSourceEntity(142U);
    msg.setDestination(37042U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.14532707464278327);
    msg.setSource(62854U);
    msg.setSourceEntity(42U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(164U);
    msg.highpass = 0.6568131562368775;
    msg.adot = 0.8189113660128087;
    msg.slope_compensation = 0.8443191018240841;
    msg.slope_compensation_difference = 0.7745344269320658;
    msg.altitude = 0.978473409897819;
    msg.auto_altitude = 0.16716453627664596;

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
    msg.setTimeStamp(0.9564840275995977);
    msg.setSource(4641U);
    msg.setSourceEntity(242U);
    msg.setDestination(49858U);
    msg.setDestinationEntity(115U);
    msg.highpass = 0.02042496903142965;
    msg.adot = 0.0590013787256779;
    msg.slope_compensation = 0.5500461612371652;
    msg.slope_compensation_difference = 0.7417271749018444;
    msg.altitude = 0.879389058911346;
    msg.auto_altitude = 0.7764272551167244;

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
    msg.setTimeStamp(0.6922970345858155);
    msg.setSource(51849U);
    msg.setSourceEntity(70U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(226U);
    msg.highpass = 0.24123001873086314;
    msg.adot = 0.8191466071577689;
    msg.slope_compensation = 0.33578866601702984;
    msg.slope_compensation_difference = 0.9810628037998835;
    msg.altitude = 0.8684978142532574;
    msg.auto_altitude = 0.898035718580964;

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
    msg.setTimeStamp(0.3109386134373391);
    msg.setSource(15533U);
    msg.setSourceEntity(21U);
    msg.setDestination(23026U);
    msg.setDestinationEntity(105U);
    msg.remote_control_allowed = 235U;
    msg.remote_control_enabled = 27U;
    msg.remote_control_active = 131U;
    msg.depth_only_control_enabled = 19U;
    msg.direct_control_enabled = 171U;
    msg.return_to_closest_point_on_line = 1U;
    msg.on_shore_power = 41U;
    msg.latitude = 0.6120949795946797;
    msg.longitude = 0.9862227070377488;
    msg.depth = 0.48042243948382846;
    msg.depth_ref = 0.2557872958562464;
    msg.altitude = 0.1974010986553727;
    msg.altitude_ref = 0.7109373633186498;
    msg.pitch = 0.03989897909838036;
    msg.roll = 0.6690182755849209;
    msg.rpm = 0.4465581766407315;
    msg.rpm_ref = 0.7100785525725802;
    msg.speed = 0.26252867308695216;
    msg.speed_ref = 0.3024432655635928;
    msg.heading = 0.8608236624025202;
    msg.heading_rate = 0.797368531863647;
    msg.heading_ref = 0.47633408305303293;
    msg.mission_state = 192U;
    msg.leg = -6095718171433279539;

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
    msg.setTimeStamp(0.685153529156075);
    msg.setSource(14729U);
    msg.setSourceEntity(69U);
    msg.setDestination(13796U);
    msg.setDestinationEntity(220U);
    msg.remote_control_allowed = 82U;
    msg.remote_control_enabled = 187U;
    msg.remote_control_active = 116U;
    msg.depth_only_control_enabled = 175U;
    msg.direct_control_enabled = 42U;
    msg.return_to_closest_point_on_line = 27U;
    msg.on_shore_power = 148U;
    msg.latitude = 0.07848140084182875;
    msg.longitude = 0.5590899490515592;
    msg.depth = 0.6500160104044238;
    msg.depth_ref = 0.10871998121908777;
    msg.altitude = 0.6541734192512577;
    msg.altitude_ref = 0.980976798586389;
    msg.pitch = 0.638821435538134;
    msg.roll = 0.5641748949820067;
    msg.rpm = 0.8511207171173563;
    msg.rpm_ref = 0.16237145638726447;
    msg.speed = 0.73871701488814;
    msg.speed_ref = 0.16032262166973898;
    msg.heading = 0.415660020871616;
    msg.heading_rate = 0.47686266733080984;
    msg.heading_ref = 0.8479805040051028;
    msg.mission_state = 121U;
    msg.leg = 5423921263810862001;

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
    msg.setTimeStamp(0.3149598611828972);
    msg.setSource(12820U);
    msg.setSourceEntity(142U);
    msg.setDestination(49924U);
    msg.setDestinationEntity(92U);
    msg.remote_control_allowed = 94U;
    msg.remote_control_enabled = 84U;
    msg.remote_control_active = 145U;
    msg.depth_only_control_enabled = 12U;
    msg.direct_control_enabled = 242U;
    msg.return_to_closest_point_on_line = 131U;
    msg.on_shore_power = 144U;
    msg.latitude = 0.04824347210526836;
    msg.longitude = 0.43487915328339477;
    msg.depth = 0.5491842037996463;
    msg.depth_ref = 0.6918267795319526;
    msg.altitude = 0.007204687818892497;
    msg.altitude_ref = 0.3157644228221397;
    msg.pitch = 0.783470752148903;
    msg.roll = 0.04271646386476646;
    msg.rpm = 0.9424257245739184;
    msg.rpm_ref = 0.8974919722044296;
    msg.speed = 0.19486796538559048;
    msg.speed_ref = 0.15194182682549628;
    msg.heading = 0.43469479049781234;
    msg.heading_rate = 0.9822465755442447;
    msg.heading_ref = 0.0335946040590519;
    msg.mission_state = 139U;
    msg.leg = 5310228157670535911;

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
    msg.setTimeStamp(0.16506675239733082);
    msg.setSource(10911U);
    msg.setSourceEntity(46U);
    msg.setDestination(43405U);
    msg.setDestinationEntity(187U);
    msg.name.assign("CFSRPUVFFAZMDHONQJEIEGMKIDYPMOWYHSXZTHTGXXFORKVHMPBOAFKNNHCYRUXSQICEMRUTULLICWITQSEGIXBBYNBVYZTAFPUUSZCLJEOVKPZRWZWLWHGYJSSVAEPYLIVZE");
    msg.arg1 = 0.2913853979835026;
    msg.arg2 = 0.20943538551222474;
    msg.arg3 = 0.002809294415180519;
    msg.arg4 = 0.00654878119459823;

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
    msg.setTimeStamp(0.9951070687197768);
    msg.setSource(53171U);
    msg.setSourceEntity(196U);
    msg.setDestination(557U);
    msg.setDestinationEntity(52U);
    msg.name.assign("EXOVACILUYQGUAORF");
    msg.arg1 = 0.9336502651178815;
    msg.arg2 = 0.024347282556876793;
    msg.arg3 = 0.38789267304298214;
    msg.arg4 = 0.06520008655349696;

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
    msg.setTimeStamp(0.9206798817238552);
    msg.setSource(29598U);
    msg.setSourceEntity(8U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(173U);
    msg.name.assign("OQICDLNJFNHNZCUBPRACJHBKLQBWOIQHRXUPTZGVNAKILJEWJMSWSNVYFUWSNWCKXVZHBPABZCTLFLMGKEGGXDXPXDRMYJOLJXLSZSJMNTLUGOIYXDAHHUDIJRQBFFSAQHOTFMMKATTKR");
    msg.arg1 = 0.7146506563680913;
    msg.arg2 = 0.11261870619687253;
    msg.arg3 = 0.8491162019723874;
    msg.arg4 = 0.11918662378689704;

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
    msg.setTimeStamp(0.45580021292694617);
    msg.setSource(65451U);
    msg.setSourceEntity(85U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(221U);
    msg.direction = 76U;
    msg.range1 = 0.7441957273370287;
    msg.range2 = 0.5955632711154147;
    msg.range3 = 0.46805196940228344;
    msg.range4 = 0.919020123599788;

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
    msg.setTimeStamp(0.9942322406432959);
    msg.setSource(7339U);
    msg.setSourceEntity(212U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(120U);
    msg.direction = 238U;
    msg.range1 = 0.921221751844252;
    msg.range2 = 0.35497151806960625;
    msg.range3 = 0.8050072813918044;
    msg.range4 = 0.17315600132949194;

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
    msg.setTimeStamp(0.3889232357876037);
    msg.setSource(65380U);
    msg.setSourceEntity(67U);
    msg.setDestination(16389U);
    msg.setDestinationEntity(110U);
    msg.direction = 9U;
    msg.range1 = 0.07084680580540226;
    msg.range2 = 0.8876617010178534;
    msg.range3 = 0.05675235474690088;
    msg.range4 = 0.22507693813351348;

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
    msg.setTimeStamp(0.7487567195161431);
    msg.setSource(16487U);
    msg.setSourceEntity(206U);
    msg.setDestination(45897U);
    msg.setDestinationEntity(60U);
    msg.msg.assign("FDSAGMAOUPENXDOMWNETJQVIVOBSOHKGQGDQEUATARGVAUPQJRIHKXLJCXQYOIYWSKSZCBLAWUXFNDYDJMDSFMANRCERBMORAXHHMITDZHDKXRGCSIMNRHRXPVBCMFUEIUJBSUFLOFWFWWTYOGDVDFVYLZPWQWKLPCBGVIBGYLKXUSPVPXYMSHOHVLKXFJNEYNNLU");
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
    msg.setTimeStamp(0.8667090519501662);
    msg.setSource(17407U);
    msg.setSourceEntity(66U);
    msg.setDestination(48686U);
    msg.setDestinationEntity(37U);
    msg.msg.assign("ZMGGJCDEBHZOWQWVFPMUGNAWSSVSOXGWJWHFTBGYRVASKYNR");
    msg.direction = 143U;

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
    msg.setTimeStamp(0.27567212898392834);
    msg.setSource(28775U);
    msg.setSourceEntity(134U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(238U);
    msg.msg.assign("BVBNSNIRTCGDPGGVLHOGNOKBHZKMWJNNYMRRSQADKGRXTKCUFQXIUEEJWBPHLSFQWCSYXKZSQEDLQHOTIQQROGXGVHITTTTDMTSANKVUJDZNPLBUFXOFKXWKKDEHRPHVWLRAWHRAEFBVEPTVBMXYFCYLXZWIIUAPYUMMYMAULIICGVBSODQJFYEMPRIDOJXUASZCQDYCOYFUMNUAFCAEZSOWTEVYPWCJONXGBDLJPZLBCQGS");
    msg.direction = 182U;

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
    msg.setTimeStamp(0.7614868412362054);
    msg.setSource(61336U);
    msg.setSourceEntity(247U);
    msg.setDestination(32695U);
    msg.setDestinationEntity(86U);
    msg.state = 250U;

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
    msg.setTimeStamp(0.26323421688935933);
    msg.setSource(61207U);
    msg.setSourceEntity(168U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(245U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.6363664653494169);
    msg.setSource(18634U);
    msg.setSourceEntity(154U);
    msg.setDestination(47971U);
    msg.setDestinationEntity(60U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.5332324773992084);
    msg.setSource(27394U);
    msg.setSourceEntity(33U);
    msg.setDestination(49508U);
    msg.setDestinationEntity(18U);
    msg.dt = 0.531753835151911;
    msg.k_d = 0.2691181428347251;
    msg.range1 = 0.8523223317192273;
    msg.range2 = 0.300186695159665;
    msg.range3 = 0.749265663604221;
    msg.range4 = 0.3324699401956557;
    msg.u = 0.18502683625401073;
    msg.v = 0.2932133160382938;
    msg.w = 0.6027941815851987;
    msg.phi = 0.5347996415594796;
    msg.theta = 0.722437159326779;
    msg.psi = 0.4187444625043477;
    msg.adot = 0.2810682803184581;

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
    msg.setTimeStamp(0.7624457901736309);
    msg.setSource(58355U);
    msg.setSourceEntity(72U);
    msg.setDestination(42172U);
    msg.setDestinationEntity(28U);
    msg.dt = 0.5905281597196509;
    msg.k_d = 0.7979291168388065;
    msg.range1 = 0.6220569830221007;
    msg.range2 = 0.8757640162120275;
    msg.range3 = 0.9216369655082463;
    msg.range4 = 0.11840639599127067;
    msg.u = 0.48374737892906383;
    msg.v = 0.38269956907525327;
    msg.w = 0.3677675365648475;
    msg.phi = 0.46995165819257934;
    msg.theta = 0.07720158179055192;
    msg.psi = 0.31463082983403945;
    msg.adot = 0.7031786632648839;

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
    msg.setTimeStamp(0.6385418545931332);
    msg.setSource(28681U);
    msg.setSourceEntity(195U);
    msg.setDestination(47974U);
    msg.setDestinationEntity(8U);
    msg.dt = 0.45559912863196794;
    msg.k_d = 0.7497167141090473;
    msg.range1 = 0.1162032399212991;
    msg.range2 = 0.825329015848976;
    msg.range3 = 0.5317988296716173;
    msg.range4 = 0.4770355267746781;
    msg.u = 0.9038119231220626;
    msg.v = 0.07982639494704802;
    msg.w = 0.14802134020380653;
    msg.phi = 0.19670257302540672;
    msg.theta = 0.26946096860740354;
    msg.psi = 0.9692183853624959;
    msg.adot = 0.6548317723918926;

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
    msg.setTimeStamp(0.8705254329429435);
    msg.setSource(52072U);
    msg.setSourceEntity(197U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(78U);
    msg.htime = 0.7068617086896108;
    msg.dt = 0.6591399008186448;

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
    msg.setTimeStamp(0.08472154892881378);
    msg.setSource(60867U);
    msg.setSourceEntity(229U);
    msg.setDestination(5377U);
    msg.setDestinationEntity(192U);
    msg.htime = 0.998325614123797;
    msg.dt = 0.05687461167668206;

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
    msg.setTimeStamp(0.46345066236033916);
    msg.setSource(43356U);
    msg.setSourceEntity(175U);
    msg.setDestination(65142U);
    msg.setDestinationEntity(184U);
    msg.htime = 0.1576539562949424;
    msg.dt = 0.8137332006395832;

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

  {
    IMC::ReconDesiredHeadingAngle msg;
    msg.setTimeStamp(0.26455781153158997);
    msg.setSource(44577U);
    msg.setSourceEntity(203U);
    msg.setDestination(11314U);
    msg.setDestinationEntity(113U);
    msg.value = 0.04638257688791603;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingAngle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingAngle msg;
    msg.setTimeStamp(0.0945463439293085);
    msg.setSource(24592U);
    msg.setSourceEntity(127U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(209U);
    msg.value = 0.005377603984481394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingAngle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingAngle msg;
    msg.setTimeStamp(0.21028401098607308);
    msg.setSource(58667U);
    msg.setSourceEntity(113U);
    msg.setDestination(61444U);
    msg.setDestinationEntity(38U);
    msg.value = 0.5700382020876901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingAngle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingWaypoint msg;
    msg.setTimeStamp(0.9808878719357439);
    msg.setSource(56499U);
    msg.setSourceEntity(70U);
    msg.setDestination(59529U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.006195431911703131;
    msg.lon = 0.6904059020796409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingWaypoint msg;
    msg.setTimeStamp(0.3996864513849947);
    msg.setSource(21757U);
    msg.setSourceEntity(183U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.47949855508160044;
    msg.lon = 0.040191762968937894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredHeadingWaypoint msg;
    msg.setTimeStamp(0.35429748290847773);
    msg.setSource(8802U);
    msg.setSourceEntity(130U);
    msg.setDestination(45192U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.08756778341485516;
    msg.lon = 0.7905142426706839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredHeadingWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredSpeed msg;
    msg.setTimeStamp(0.15609625196332533);
    msg.setSource(4525U);
    msg.setSourceEntity(38U);
    msg.setDestination(17697U);
    msg.setDestinationEntity(188U);
    msg.value = 0.29397456962733615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredSpeed msg;
    msg.setTimeStamp(0.6754186247481585);
    msg.setSource(51909U);
    msg.setSourceEntity(89U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(214U);
    msg.value = 0.25255664575986503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredSpeed msg;
    msg.setTimeStamp(0.15033314767970085);
    msg.setSource(32U);
    msg.setSourceEntity(20U);
    msg.setDestination(42172U);
    msg.setDestinationEntity(48U);
    msg.value = 0.03654451960181859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredZ msg;
    msg.setTimeStamp(0.6918432987743494);
    msg.setSource(58820U);
    msg.setSourceEntity(169U);
    msg.setDestination(29447U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6919893700613492;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredZ msg;
    msg.setTimeStamp(0.32208684221721895);
    msg.setSource(45491U);
    msg.setSourceEntity(21U);
    msg.setDestination(64977U);
    msg.setDestinationEntity(7U);
    msg.value = 0.1882026460094557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReconDesiredZ msg;
    msg.setTimeStamp(0.1775583984267699);
    msg.setSource(36454U);
    msg.setSourceEntity(67U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0706537030054013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReconDesiredZ #2", msg == *msg_d);
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
