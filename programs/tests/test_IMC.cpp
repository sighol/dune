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
// IMC XML MD5: 30fb744948c3ce8801f71389a532fa9a                            *
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
    msg.setTimeStamp(0.8482470460547042);
    msg.setSource(2550U);
    msg.setSourceEntity(83U);
    msg.setDestination(35999U);
    msg.setDestinationEntity(135U);
    msg.state = 42U;
    msg.flags = 202U;
    msg.description.assign("WOMNYHUZTHUTTYGRFSEGDXVCCQZIQLNCTYPWTMGLASYBQORHGIVODLVKILRUKPKUAEPFWKRRDHJJZFVNAHNVNTMOKQZBUFGYZFFJIXLYNQEXXXTLCARLMUIBDUAKEOIBYOCDZHJYXSSEMKLBJNJGSKQSLWDCZRQUFMADOFYSAIVCWVIDTBIBRGWEVGNCPPCXVLMTAFWHCJAOQGJWXZ");

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
    msg.setTimeStamp(0.31228776379579326);
    msg.setSource(50078U);
    msg.setSourceEntity(222U);
    msg.setDestination(28858U);
    msg.setDestinationEntity(53U);
    msg.state = 249U;
    msg.flags = 132U;
    msg.description.assign("BITBENIBXXIFYPYSDDRPMHDLVAYYHMIPHQEUETPJDSYYRFABUVNOGYBUOZRAVSFLQJTGQYODQCTCWFFSKYKWZZICCOEAKVJZNVNPMAGVACPFKZNOOVBMFSHIOKSLRXJBZVQFJJHGG");

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
    msg.setTimeStamp(0.06447618862444882);
    msg.setSource(42150U);
    msg.setSourceEntity(167U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(153U);
    msg.state = 82U;
    msg.flags = 24U;
    msg.description.assign("ACGMLAEAANOOCYDDJKYENOYOZPQIMTITGFUIPTDDRIAXAJMENKCWXSMWDLFYLLYCJVVEBQSSVZIPPUWZOHHPXHBXXYRBPEKJVYBWUYJGQBERPQKXYSTJMDLSPCAVQFZGJQSNQCQUUVNJBMCHBVJZDSDWROHSKKOR");

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
    msg.setTimeStamp(0.497391495751038);
    msg.setSource(39741U);
    msg.setSourceEntity(2U);
    msg.setDestination(25135U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.1551673151208094);
    msg.setSource(65427U);
    msg.setSourceEntity(7U);
    msg.setDestination(64802U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.49551327631018105);
    msg.setSource(60206U);
    msg.setSourceEntity(130U);
    msg.setDestination(45167U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.943732940386777);
    msg.setSource(63086U);
    msg.setSourceEntity(148U);
    msg.setDestination(10094U);
    msg.setDestinationEntity(45U);
    msg.id = 44U;
    msg.label.assign("SLTDPXJSGTNNRWOEAIZHQOFYPJTDTLUOHGGVRMLKANWQACFGLSEYJMRTWQKSEQCIOZMMJQOKOIUGYLZDRCMLHBACXEUCXIIJUXAXUKZTLMBWEAVSYWWSLRHJOWGNBPPYTSQCVKEABXFMZTLVLEDUEDRNKHVXHIQFNYHH");
    msg.component.assign("OULGAZTURBDQCWDAIVHXTQBHFAOQKFMEVYNNNGWVZGSKDSYNXHTIWCOFKAIUBEGMEUCYAEKVJBTZLJEMOGJDKEPAVOYQBBMUGPSERHLDKQOLNTLEQWPFRQZCXPFHCLHAARNFGZXXRITFMJDRFAOTJJZSWP");
    msg.act_time = 12824U;
    msg.deact_time = 5797U;

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
    msg.setTimeStamp(0.9992728133637337);
    msg.setSource(29924U);
    msg.setSourceEntity(68U);
    msg.setDestination(63086U);
    msg.setDestinationEntity(224U);
    msg.id = 152U;
    msg.label.assign("HEJNXTHLVCCZDGVRNOOKEMUXTGUEHQVFWMNJXWVUVPIAPCFEDGIOYDSNMQQHCLGSAYSPYBCLVADORMZNEXIFAWADKKWYXAWQZTVENRLQGIQWSWHLLIRBKUYCDOONBPHNHWPCQORZIGUPAZXIUIKHSBRSDJFZKRXFTKQDMTBMJFCTTQEXMLBVPBSFJFSVRQJAYMPTLNXPYGHOZUFACJJ");
    msg.component.assign("NZLNJBNYLXUFVZWYECIDIHDDOYDIMMLXUKARAOBYZNXZADPKEHLSTCPJZZASCWNEIYUATKEWKRITXNGMCHQBSRFGRFMEXFRJOIRDJTTHHWDCQKJVPPBBXFQAVBE");
    msg.act_time = 58171U;
    msg.deact_time = 7696U;

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
    msg.setTimeStamp(0.8822705603742372);
    msg.setSource(44057U);
    msg.setSourceEntity(239U);
    msg.setDestination(46495U);
    msg.setDestinationEntity(131U);
    msg.id = 185U;
    msg.label.assign("PUDWWRXMOSWQQHTCEZJQSALKBTKIVGYTHU");
    msg.component.assign("RBTWCVYCTGMXIKCGQHUNAWUCQJAKZHMEZNTNVVKHUWKYJMZJZBSOPAUBXDNXKOOLKSSYYBMNNIYGOOMSVVJUZRRLCNQFQNYYELIFDDFVEEDEHRJLEDLDKHVZFFPAQXIMIMEAQALLXGSWOWHZRJPBAHROKQLCSAMTBGSRUZHKAGIOPSHTNLPFOMXTSWBKGXCDW");
    msg.act_time = 32900U;
    msg.deact_time = 39056U;

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
    msg.setTimeStamp(0.6418074669453921);
    msg.setSource(51540U);
    msg.setSourceEntity(81U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(46U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.15394664003330572);
    msg.setSource(2469U);
    msg.setSourceEntity(175U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(113U);
    msg.id = 140U;

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
    msg.setTimeStamp(0.5302698718303979);
    msg.setSource(6869U);
    msg.setSourceEntity(6U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(172U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.42322797089271735);
    msg.setSource(8727U);
    msg.setSourceEntity(93U);
    msg.setDestination(10454U);
    msg.setDestinationEntity(164U);
    msg.op = 77U;
    msg.list.assign("NQFXXQUZFCGGACSNICCDLTOPNYFKZFJUTYFDOGSDOROJIPHCIODUWCUQNXBWVYVWBDLEREJWBPWAAVMNKKFVHZSIVLSDSQSMFABFJKBGXPDNKREHEMTAUMYFRFHYMEKXUTIQMOVCXVQGQREJRGZHPVPTADVGPZBKAELWZYRSUJNQHPAXIZLCWRYAHGSCMODLBO");

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
    msg.setTimeStamp(0.5081130329704897);
    msg.setSource(34847U);
    msg.setSourceEntity(31U);
    msg.setDestination(38639U);
    msg.setDestinationEntity(169U);
    msg.op = 227U;
    msg.list.assign("YQVEJKKVMBITWJCAYSUMFFOOVLBVKCHARWOCMZQXTAPSNHXBKRSANHZDYPLRRGEWTYNODRMUTYASVHQJZBHSIYKJXZXJFGLVBPCMBUJEPINWRVEKTNBJPI");

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
    msg.setTimeStamp(0.4866875241849197);
    msg.setSource(16567U);
    msg.setSourceEntity(95U);
    msg.setDestination(29685U);
    msg.setDestinationEntity(55U);
    msg.op = 42U;
    msg.list.assign("MSGCIQPHQEGWSTJPIMWWCLBRFAHWUKDYPHFIQHJNRL");

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
    msg.setTimeStamp(0.8894817894669458);
    msg.setSource(42880U);
    msg.setSourceEntity(230U);
    msg.setDestination(12493U);
    msg.setDestinationEntity(74U);
    msg.value = 233U;

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
    msg.setTimeStamp(0.063824290859673);
    msg.setSource(55624U);
    msg.setSourceEntity(5U);
    msg.setDestination(26458U);
    msg.setDestinationEntity(102U);
    msg.value = 103U;

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
    msg.setTimeStamp(0.3349448529011124);
    msg.setSource(33084U);
    msg.setSourceEntity(85U);
    msg.setDestination(13159U);
    msg.setDestinationEntity(134U);
    msg.value = 122U;

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
    msg.setTimeStamp(0.5737008588981612);
    msg.setSource(25783U);
    msg.setSourceEntity(74U);
    msg.setDestination(28303U);
    msg.setDestinationEntity(82U);
    msg.consumer.assign("QLKFLYFHFSZKIHXWXMRIWUATTQFMLUNSGVKZVVZOSSWSCJUAOEITUPJAGKWBKQXCYTQNMCOBACYNTFMYSXHBCLMDXDMLRTVQUIHGOOAGKVIKFMTYLBJWDJBYFLSKDDZORIWXSSZVYILESRVEOAJINOUWJDEGN");
    msg.message_id = 64056U;

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
    msg.setTimeStamp(0.8260090637862444);
    msg.setSource(6516U);
    msg.setSourceEntity(94U);
    msg.setDestination(62554U);
    msg.setDestinationEntity(175U);
    msg.consumer.assign("JXBSPKJIJTFRIGNLAXSUYRSIBTUQVNLHMARYVSCKMBTXWTPLHYKJMDPSAPCJITNQJSFSQCVD");
    msg.message_id = 56004U;

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
    msg.setTimeStamp(0.5320379089376851);
    msg.setSource(23640U);
    msg.setSourceEntity(122U);
    msg.setDestination(18487U);
    msg.setDestinationEntity(66U);
    msg.consumer.assign("ABEGHVDLMQAVCYRHZNMWEUBCEEUHKVGZZWEYLWAUXPMZRGTLMKQJKLGPPQJCIRSFJGJWAITJIYYNUNCHXCAIPACTVAIIRXWOMSLXRJSNKCODZJIOYOJGVPQOODQOBSPRWLDQBHUPZYPFENZXFLBQTEPCPLYWHQBYIYFSDFIUHGWTRNVBDSQNBKGTK");
    msg.message_id = 58358U;

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
    msg.setTimeStamp(0.5139592290800088);
    msg.setSource(26125U);
    msg.setSourceEntity(71U);
    msg.setDestination(51515U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.2203809167355767);
    msg.setSource(41613U);
    msg.setSourceEntity(153U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.4455957462036827);
    msg.setSource(24727U);
    msg.setSourceEntity(251U);
    msg.setDestination(32249U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.36497576064860293);
    msg.setSource(1310U);
    msg.setSourceEntity(136U);
    msg.setDestination(3201U);
    msg.setDestinationEntity(253U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.5087159911593989);
    msg.setSource(63607U);
    msg.setSourceEntity(140U);
    msg.setDestination(14887U);
    msg.setDestinationEntity(167U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.7123038250299685);
    msg.setSource(20293U);
    msg.setSourceEntity(38U);
    msg.setDestination(39352U);
    msg.setDestinationEntity(145U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.45595078510787745);
    msg.setSource(44848U);
    msg.setSourceEntity(239U);
    msg.setDestination(36182U);
    msg.setDestinationEntity(28U);
    msg.total_steps = 41U;
    msg.step_number = 40U;
    msg.step.assign("CUWTKCOYEQIXJKEWFLJNQNWXPOCNUIUUCWTAQAXOTBHGWAYSDDYVQQKRHVMFEBEZLOHYSFXQNBSEATDMOJEDSGIPOQMLLQWADFCKFXODYTSPSRLTRPJIPKMZBVTUCRNKLVBZZKNSPOMTCADRGBGLHWBV");
    msg.flags = 45U;

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
    msg.setTimeStamp(0.19656957734687652);
    msg.setSource(54364U);
    msg.setSourceEntity(191U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(102U);
    msg.total_steps = 236U;
    msg.step_number = 9U;
    msg.step.assign("IACSLPTDEVTERSRHBWMBPYPINDVCHAFUYJOTYTESVJZGGXLPZOXNSLIHXTREMQAXEDECATWNXLPUUAKLGPSLQHZOMGUKOBHVICSQI");
    msg.flags = 38U;

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
    msg.setTimeStamp(0.4225950869395264);
    msg.setSource(18764U);
    msg.setSourceEntity(119U);
    msg.setDestination(13701U);
    msg.setDestinationEntity(47U);
    msg.total_steps = 249U;
    msg.step_number = 194U;
    msg.step.assign("DCNKVRCISXGYWGXYNDKUWJLVMIGTBPPGPTQNRFDYGBQSSWBIFMKAZILWUKNEOCPSRRMQPJWLEEAYVREEYRFDSGZBOLSODWBKDYKECSFDZTYMUPHVUBZKGUVFCPOOUUXMCXHFNTPBYNRVAYBCAVLWNZQQCJE");
    msg.flags = 73U;

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
    msg.setTimeStamp(0.48071407914178765);
    msg.setSource(11235U);
    msg.setSourceEntity(40U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(205U);
    msg.state = 205U;
    msg.error.assign("TTCTBCSPCCKXKBNUHEJMXZUAFTBKVXCYCKBEXWTNWAVFNFCM");

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
    msg.setTimeStamp(0.0667724262814724);
    msg.setSource(53129U);
    msg.setSourceEntity(99U);
    msg.setDestination(37302U);
    msg.setDestinationEntity(156U);
    msg.state = 25U;
    msg.error.assign("HDGBAKVUMYITPPWFQQBRUCMFBBSJZEUVKPBWCGTWCZLWIQWWPZMRQTEIXECBCANANZDXHQETFJUGXEJHNHVBCOTDMISJSAVAQRNPLAXVCNKLTWJLPFOFRYZKNHDWGNMRUDIMDHRSGEUQTXVYXIMWYGGJEJJKJSICFXZEDTXTVMZHKPFLEOIAJQXGYKUOHSGVDYIAUPOLPIQZRTSSVKRFDKRYSNOFOYDMQOEHKBGLZUXNMOYZUHSLO");

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
    msg.setTimeStamp(0.7076609580541975);
    msg.setSource(28959U);
    msg.setSourceEntity(252U);
    msg.setDestination(8885U);
    msg.setDestinationEntity(224U);
    msg.state = 93U;
    msg.error.assign("TZEEKOYUIERNKBQLTQDSPOZIRXLRSKCXBMTWVTJVSMZAHBYQYQVWYGLGWZXLNDPWSCURTDZYTFNRVFHVFTOMYJIDGDPXVETVJBCHINRAKHMIQDFCLOKMGUCFPPEPULIPZHXEUIWKHJVBNTLKYVESMXWEH");

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
    msg.setTimeStamp(0.5030371279049738);
    msg.setSource(29705U);
    msg.setSourceEntity(191U);
    msg.setDestination(4067U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.5861740032378052);
    msg.setSource(30805U);
    msg.setSourceEntity(105U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.44141403690673087);
    msg.setSource(45199U);
    msg.setSourceEntity(55U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.6222015280719768);
    msg.setSource(23863U);
    msg.setSourceEntity(234U);
    msg.setDestination(38114U);
    msg.setDestinationEntity(165U);
    msg.op = 48U;
    msg.speed_min = 0.8847981727827677;
    msg.speed_max = 0.21587733641303597;
    msg.long_accel = 0.9498646558426129;
    msg.alt_max_msl = 0.7688696008867739;
    msg.dive_fraction_max = 0.6741094338700888;
    msg.climb_fraction_max = 0.024059472754769384;
    msg.bank_max = 0.9476707960108005;
    msg.p_max = 0.07778058291055578;
    msg.pitch_min = 0.5829027206731134;
    msg.pitch_max = 0.07313561542643521;
    msg.q_max = 0.4645156454979984;
    msg.g_min = 0.2506745710255637;
    msg.g_max = 0.9365648794227198;
    msg.g_lat_max = 0.6088801130527997;
    msg.rpm_min = 0.22857644864231574;
    msg.rpm_max = 0.8232528720619382;
    msg.rpm_rate_max = 0.4217813797262445;

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
    msg.setTimeStamp(0.5670745104809577);
    msg.setSource(19280U);
    msg.setSourceEntity(20U);
    msg.setDestination(20477U);
    msg.setDestinationEntity(201U);
    msg.op = 125U;
    msg.speed_min = 0.14055401026369563;
    msg.speed_max = 0.25091044290307996;
    msg.long_accel = 0.18460369791189257;
    msg.alt_max_msl = 0.8571585493890997;
    msg.dive_fraction_max = 0.33239897438957633;
    msg.climb_fraction_max = 0.9572873229571643;
    msg.bank_max = 0.12031318313923778;
    msg.p_max = 0.6355069794370098;
    msg.pitch_min = 0.1589112377448183;
    msg.pitch_max = 0.6903168039931049;
    msg.q_max = 0.5313376596746519;
    msg.g_min = 0.660126654145933;
    msg.g_max = 0.1569280451795867;
    msg.g_lat_max = 0.8029407408890409;
    msg.rpm_min = 0.8078364359684032;
    msg.rpm_max = 0.40932546716785156;
    msg.rpm_rate_max = 0.7717656460484412;

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
    msg.setTimeStamp(0.9571463301398762);
    msg.setSource(20697U);
    msg.setSourceEntity(216U);
    msg.setDestination(46852U);
    msg.setDestinationEntity(253U);
    msg.op = 61U;
    msg.speed_min = 0.7342039356642267;
    msg.speed_max = 0.5673661670790376;
    msg.long_accel = 0.6648419644516489;
    msg.alt_max_msl = 0.7815347918496485;
    msg.dive_fraction_max = 0.48187164824597317;
    msg.climb_fraction_max = 0.1603447539682863;
    msg.bank_max = 0.29674021727092836;
    msg.p_max = 0.9955725196975233;
    msg.pitch_min = 0.42105353653178945;
    msg.pitch_max = 0.35960617073949686;
    msg.q_max = 0.11883770850497344;
    msg.g_min = 0.9407863399500406;
    msg.g_max = 0.8077431917107634;
    msg.g_lat_max = 0.9194771618037297;
    msg.rpm_min = 0.2807663370617668;
    msg.rpm_max = 0.9604927841612529;
    msg.rpm_rate_max = 0.745861305043938;

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
    msg.setTimeStamp(0.653066041216229);
    msg.setSource(34940U);
    msg.setSourceEntity(206U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.8366096289656123);
    msg.setSource(4128U);
    msg.setSourceEntity(44U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.5153527796777484);
    msg.setSource(32510U);
    msg.setSourceEntity(172U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(231U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 57U;
    tmp_msg_0.eta = 35692U;
    tmp_msg_0.info.assign("IXPAECYBOCJCRJQUHKDJIGUOMLEXJYAQZEDGPPTREOOVBWPCYCSVVRPQRNXTKNDHNXUXWIFISQPJFX");
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
    msg.setTimeStamp(0.4270109031624463);
    msg.setSource(23056U);
    msg.setSourceEntity(12U);
    msg.setDestination(42985U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.8970756901549173;
    msg.lon = 0.7610810076804653;
    msg.height = 0.42138578502414836;
    msg.x = 0.37599149476576754;
    msg.y = 0.9125523347310226;
    msg.z = 0.10002567330367651;
    msg.phi = 0.5680134592823496;
    msg.theta = 0.9781304427897426;
    msg.psi = 0.7897416403534014;
    msg.u = 0.6693918221087863;
    msg.v = 0.4108027098779432;
    msg.w = 0.1172841338324172;
    msg.p = 0.0344190800531885;
    msg.q = 0.8783974999225279;
    msg.r = 0.13194900685421518;
    msg.svx = 0.27959848173808977;
    msg.svy = 0.5986547119676527;
    msg.svz = 0.6959085154331223;

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
    msg.setTimeStamp(0.17591830948310216);
    msg.setSource(15656U);
    msg.setSourceEntity(132U);
    msg.setDestination(16416U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.4907712796307352;
    msg.lon = 0.5175067207369412;
    msg.height = 0.27141141795771695;
    msg.x = 0.8806984109026963;
    msg.y = 0.8209752706887036;
    msg.z = 0.7324872375194027;
    msg.phi = 0.23879636541296612;
    msg.theta = 0.5506578606121001;
    msg.psi = 0.7293050600768176;
    msg.u = 0.782792181429215;
    msg.v = 0.575599825880205;
    msg.w = 0.4366584511692838;
    msg.p = 0.5627908728710195;
    msg.q = 0.6836022497619753;
    msg.r = 0.24907121669088095;
    msg.svx = 0.7399792186618164;
    msg.svy = 0.0188816469160078;
    msg.svz = 0.24461726521056115;

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
    msg.setTimeStamp(0.06987941339879866);
    msg.setSource(23463U);
    msg.setSourceEntity(94U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.7626534001537123;
    msg.lon = 0.29639984705238787;
    msg.height = 0.32061855951177964;
    msg.x = 0.051706878968994396;
    msg.y = 0.5593220897535838;
    msg.z = 0.005246160228431829;
    msg.phi = 0.3358715796889078;
    msg.theta = 0.8805066700288372;
    msg.psi = 0.5355220800354059;
    msg.u = 0.5693217267680907;
    msg.v = 0.7156261737275584;
    msg.w = 0.27288710238097136;
    msg.p = 0.2890210988714511;
    msg.q = 0.574627376443463;
    msg.r = 0.6084217901278365;
    msg.svx = 0.6366823178906947;
    msg.svy = 0.812164656330325;
    msg.svz = 0.9711982348511177;

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
    msg.setTimeStamp(0.9973452744366006);
    msg.setSource(62328U);
    msg.setSourceEntity(24U);
    msg.setDestination(222U);
    msg.setDestinationEntity(104U);
    msg.op = 53U;
    msg.entities.assign("KJMTNVQLZMUEOALNZZJCNQVOLWUCQVAIPECDJXODXQWHBAEGLIYTSOKOQXPWGZPTSYBVDQBWUAVXXRSQRXFCUIRXQVQOIHCYYWKGJSBIKLJMMNEELCMKUFYBZUIOJGGFCHYGWSRQVAPNTADMVHVFRHETSRZVXMTCNRMUWRHUYSPPAEBNWEHBHXWCFGTBFLHFZGKIKIFXEFDZRDUTTAMEYSBAZJPYONLOGDLADPWYSZNDNGFI");

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
    msg.setTimeStamp(0.0015073536031935397);
    msg.setSource(53961U);
    msg.setSourceEntity(40U);
    msg.setDestination(33392U);
    msg.setDestinationEntity(176U);
    msg.op = 110U;
    msg.entities.assign("AMVYNYFKBWNLLHYGXILSGQPSMVTNEUQPTSIAJCHUTUDNUSEVQPKOXZZFEOCVGYSPKZBZTQLIBMJWEZHGCSCNFLPXJCB");

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
    msg.setTimeStamp(0.6511469884540485);
    msg.setSource(60349U);
    msg.setSourceEntity(109U);
    msg.setDestination(40010U);
    msg.setDestinationEntity(91U);
    msg.op = 148U;
    msg.entities.assign("XZYKVOSMDAVIONDPPNBHOVFXYGOHFPMQUUFBTFBQAAIYISYGJBMKLIGQEDBCLGPZK");

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
    msg.setTimeStamp(0.053472828955740015);
    msg.setSource(56321U);
    msg.setSourceEntity(7U);
    msg.setDestination(65148U);
    msg.setDestinationEntity(223U);
    msg.type = 125U;
    msg.speed = 45013U;
    const char tmp_msg_0[] = {114, -31, -80, 105, -8, -74, 118, -103, 124, -123, 61, 22, 100, 68, -113, 16, -29, -105, -49, -88, 55, -36, -14, 64, -62, 53, 92, -22, -113, -27, -47, 114, -32, 72, -80, 70, -84, 110, 24, 36, 126, -115, -22, 8, -57, -121, -16, 116, 101, 116, -14, 51, 40, 3, 10, -31, 60, 8, -119, 60, 1, 102, -90, 119, -84, -74, 71, -58, -56, 47, 77, 89, 8, 90, -46, 10, 125, -95, 89, -58, -69, 93, -27, 79, -9, 34, 125, 23, -80, -77, 81, -44, -1, 72, -14, -112, -66, 32, 5, 25, 92, -58, -37, -99, -59, -128, -121, -18, -119, 1, 60, -64, -110, 102, 11, 116, 60, -25, -66, -110, -45, 14, -5, -105, -5, -9, 66, -58, 83, 14, -22, 100, 67, 29, -71, -6, 36, 8, 37, -118, -105, -35, -63, -85, 4, 108, 17, -26, -15, 39, -53, -38, -47, 32, 114, -75, 19, -27, 15, 58, 123, -104, -120, -85, 6, -101, 81, 0, 88, 44, -42, -27, 28, 77, 103, -36, -11, -4, -16, 57, 10, 7, -26, 125, 124, 57, -70, 26, -54, -85, -107, -106, -18, -24, 65, -113, 9, -86, -59, -20, 26, 33, -90, 75, 32, -38, 49, 123, 109, -41, 86, 15, -30, 48, 19, -37, -88};
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
    msg.setTimeStamp(0.5254367877066236);
    msg.setSource(49386U);
    msg.setSourceEntity(33U);
    msg.setDestination(34089U);
    msg.setDestinationEntity(249U);
    msg.type = 85U;
    msg.speed = 31919U;
    const char tmp_msg_0[] = {108, 115, 80, -56, -76, -97, 91, -47, 110, -126, 8, 65, -73, -72, -96, -22, 88, -27, 111, 43, -21, -28, 4, -121, -60, -113, -100, -27, -47, -126, 107, 81, -123, 30, -20, -86, 61, 120, 44, 11, -15, -41, -125, 66, -25, 64, 104, -73, -39, -118, -19, 56, 116, 31, -60, -3, -64, 37, 67, 94, 102, 36, -80, -125, 122, -51, -75, 30, -4, -22, 124, 98, 115, -92, 57, -65, -111, -20, 116, 102, 12, 53, 126, 6, 6, -1, -67, 89, 59, -125, 14, 22, -117, 18, -121, 76, -72, 34, 17, 50, -41, 103, -44, 23, -37, 29, -11, 78, -56, 24, -17, -29, -56, 99, -20, -54, -95, 24, 124, -122, 82, -49, 97, 120, 79, -99, -73, 98, 24, 98, -101, -46, 99, 89, 81, 5, -37, 26, 83, -110, -98, 92, 7, -71, 25, 84, 82};
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
    msg.setTimeStamp(0.03761900949160113);
    msg.setSource(14757U);
    msg.setSourceEntity(234U);
    msg.setDestination(13589U);
    msg.setDestinationEntity(185U);
    msg.type = 106U;
    msg.speed = 43927U;
    const char tmp_msg_0[] = {-3, -13, -26, -71, -48, -13, 85, 39, -35, -127, 79, -121, 5, 88, -115, -120, -99, 112, 8, 28, -81, -3, 62, 54, 85, 96, -59, 27, -9, -91, 82, -34, -49, -86, -64, 74, -105, 46, -83, 32, -47, -79, 7, 21, -58, 88, -1, -111, 51, 30, -124, 65, -96, -81, 26, -47, 41, -112, 108, -18, 117, 82, -100, 89, -22, -52, -62, -7, 1, 106, 125, -103, -96, -121, -66, 39, 120, 24, -3, 66, 65, 34, 42, -95, 61, 93, 74, -7, 99, 70, -83, 23, 54, 119, 115, 57, -6, -61, -86, 54, -99, 114, 90, -91, 30, -74, 78, 35, 65, 108, 28, 126, 48, -22, 39, -104, -57, 126, -103, -56, -96, -125, 100, -70, 57, 45, 72, -7, 124, -92, 90, -62, -16};
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
    msg.setTimeStamp(0.594598151261268);
    msg.setSource(31251U);
    msg.setSourceEntity(6U);
    msg.setDestination(8142U);
    msg.setDestinationEntity(176U);
    msg.op = 202U;
    msg.tas2acc_pgain = 0.9555413118160441;
    msg.bank2p_pgain = 0.7105320479902328;

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
    msg.setTimeStamp(0.10704908231624344);
    msg.setSource(61458U);
    msg.setSourceEntity(68U);
    msg.setDestination(15298U);
    msg.setDestinationEntity(244U);
    msg.op = 247U;
    msg.tas2acc_pgain = 0.927777033373306;
    msg.bank2p_pgain = 0.2882638604387878;

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
    msg.setTimeStamp(0.039332450493555826);
    msg.setSource(344U);
    msg.setSourceEntity(180U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(164U);
    msg.op = 132U;
    msg.tas2acc_pgain = 0.3713511408257453;
    msg.bank2p_pgain = 0.23547379869655127;

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
    msg.setTimeStamp(0.6994419892676526);
    msg.setSource(24339U);
    msg.setSourceEntity(222U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(252U);
    msg.available = 476406600U;
    msg.value = 68U;

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
    msg.setTimeStamp(0.9306397161483652);
    msg.setSource(63432U);
    msg.setSourceEntity(170U);
    msg.setDestination(63531U);
    msg.setDestinationEntity(20U);
    msg.available = 394253158U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.05881383172149979);
    msg.setSource(60295U);
    msg.setSourceEntity(92U);
    msg.setDestination(58034U);
    msg.setDestinationEntity(74U);
    msg.available = 1727087362U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.6850239346964188);
    msg.setSource(33954U);
    msg.setSourceEntity(151U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(74U);
    msg.op = 167U;
    msg.snapshot.assign("LFCNACFOERHOOETVNPDLIZSDIDBREZMHVATOYQQYXVTVJPROWSFBEVJXOLKSJZDFXMGKRRZRN");
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
    msg.setTimeStamp(0.920273764310802);
    msg.setSource(3345U);
    msg.setSourceEntity(253U);
    msg.setDestination(37517U);
    msg.setDestinationEntity(40U);
    msg.op = 128U;
    msg.snapshot.assign("UZDWHBPPTHL");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {114, 10, -122, -92, -1, -27, -4, 77, -75, -11, -10, -115, -76, -79, -8, -52, 85, 100, -51, 112, 9, 92, -124, -90, 58, -51, -106, -65, 26, 9, -46, 73, -25, -85, 15, 49, -15, 98, 112, -18, 29, -28, 69, 98, 86, 31, 56, 58, 100, 54, 74, 114, 1, -67, 42, 124, 87, 42, 13, 6, -86, 119};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7324540091751593);
    msg.setSource(17618U);
    msg.setSourceEntity(94U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(178U);
    msg.op = 165U;
    msg.snapshot.assign("PFRNDIZJOVJRFTTNDGDVLWZXFQUDTAUZNKWLABXXRIEKOMIOGOAZSGJEXADAQGFJVECMWMZNMEHFZKFAFBMVVVZRTNVNXLCDUUJTPKUJNGZRRDWOPHBXEPBTVADHOBKWJGXGKYFQAYYCOVQPZJJIQXMYYHLKTYPUJIUTEPPSFVILILCSLWUZQGHYS");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 7603U;
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
    msg.setTimeStamp(0.2395570838415909);
    msg.setSource(50174U);
    msg.setSourceEntity(8U);
    msg.setDestination(55275U);
    msg.setDestinationEntity(148U);
    msg.op = 43U;
    msg.name.assign("UQABJNRMGNYLEKJAYLOSHXDZRFLQGMXXDNZFXMWEIOHKAIXFIFXAHBZKABVPCBJNHIDTGACTPJHBDDYOYXRECMFANQYJQLUNSBBKPBPTLNLSVANWTYSQXZRIWDFLLHUYGZUGVGFMIJPFRMM");

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
    msg.setTimeStamp(0.49726365107343273);
    msg.setSource(41808U);
    msg.setSourceEntity(24U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(98U);
    msg.op = 159U;
    msg.name.assign("PGEKRYCMZIYJXJAIUEJSRVPIUWWGLCYIFCNYWEVDWCILDNYZUWFUUBSMVGKLYVXZXEPUZBTBWALNAMTJEKIHPQKGRLCZCCNURTQSPDWZMFWCOAZNLOX");

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
    msg.setTimeStamp(0.09971077498826242);
    msg.setSource(61099U);
    msg.setSourceEntity(65U);
    msg.setDestination(40395U);
    msg.setDestinationEntity(233U);
    msg.op = 235U;
    msg.name.assign("WDQJDQJRNYNFBAOBPSUKYPCDRKUCVPPXZCZHTBEMIPPEIWMRUQBDINUXVEKILDMMBSEXSFGSRKLMLABRZEAQELVGKVYUDFKDJXVGXYTHCHKGQTKYSNIDTJOLIBMTVOWTTNZFLFVNPJGJTFXTRUQHWUTJLXSNHAIGNLYJCAZPOXFFWMBOBQWHRQLDMRUDAVPQCEHVPXZYEYZACSBLSIIAGYSWZKWCEJCNJKMZO");

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
    msg.setTimeStamp(0.9352338313869655);
    msg.setSource(17211U);
    msg.setSourceEntity(112U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(152U);
    msg.type = 84U;
    msg.htime = 0.7504558177273496;
    msg.context.assign("JZFNUZWTMBMCRSINGNDQJABANNUCAUKAGVCDBTDPRPOKNMAEYOAPRTEQMSHYMZQHQQLQTODRQIPISHYCZLXKEROAJMLBCIHLRVWVDLSXXCEMPPTGRPIEZFLSNUNGGFBYJVHWDSHFQBHOVKDKBOETGNLWNFJEZBVTUIYDYPXOCXJUKIRASGYTXEOJBHFUXWSMMMULKKOKFWWDXVAQPJYYZUXSLIJGLC");
    msg.text.assign("UTENSZJJKQPFNYCIZKBKMOODQLHAUXHAXHOEAYVAYWTWJIQMVUSEJSCOUFSWTAUTFVETAPYD");

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
    msg.setTimeStamp(0.2062680760050034);
    msg.setSource(62234U);
    msg.setSourceEntity(196U);
    msg.setDestination(25107U);
    msg.setDestinationEntity(140U);
    msg.type = 35U;
    msg.htime = 0.27539702267133614;
    msg.context.assign("XZPHQUOKBGNERJXSJVXKAILNUKJUCZCGYXWLOBQGXYKUHVGSJEPRNFSXYTMMPYFVNAWPVOANFETVO");
    msg.text.assign("RZSZGVYZEQHLMCKHFLALKRXJGQTJQXBKIZNZSFZOLTGFDWGMPWAHJFZYKEROVTRRYAKNPFIDOVXFSGUNBKBYHHIVBKOBWZR");

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
    msg.setTimeStamp(0.7354964375018793);
    msg.setSource(26726U);
    msg.setSourceEntity(144U);
    msg.setDestination(58624U);
    msg.setDestinationEntity(225U);
    msg.type = 247U;
    msg.htime = 0.25839211567184106;
    msg.context.assign("CZGULDQEANMGZIDGTMNPRHUNIXBTQGCDYVXOIYJNTRCXHFEORDXEVWUWOCQAWTAOBPIIWZWNYBSASOHTAFRPOIXFKMPKIKDFFEHQKQGPXGRXLOUYWYFPADZJJRWOJNZFQJHNLCYZJLSHDFSTMKKMVLYHBSIKAVJKVEVPHGDFGTMCHRWJELNMNYVQOMRCJBKTAXEQCNUKQOCIZXULLDPBPYUSRXVCMDVGZBHLBZEUFBEBSARATSUGLYQSE");
    msg.text.assign("XEHHFDYDVBBXWWQHSPVYHVOLBKEQNTRYEJDLNAPMUOTAGWWQVAPLDZKFCAQRUQVPJHIEZZAZHRNPUOSPETBDOIIWTZTRFZABRJMRXWHHOOEAGBUSIXCXO");

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
    msg.setTimeStamp(0.916399971264973);
    msg.setSource(42605U);
    msg.setSourceEntity(246U);
    msg.setDestination(16758U);
    msg.setDestinationEntity(246U);
    msg.command = 50U;
    msg.htime = 0.8007139800432953;

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
    msg.setTimeStamp(0.933009410091903);
    msg.setSource(57860U);
    msg.setSourceEntity(55U);
    msg.setDestination(13772U);
    msg.setDestinationEntity(53U);
    msg.command = 121U;
    msg.htime = 0.8213260324099121;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 151U;
    tmp_msg_0.htime = 0.9655056837416685;
    tmp_msg_0.context.assign("AFPLIOXQWCTMAXCUMURVMOPXFJBLYFCHWOMQIIRNZQSSBECI");
    tmp_msg_0.text.assign("OIRPQLXCHHNVMBJWSHYAXKNNATSRRYGPRNEOCVTHNSUEUCEBWSFMRCVOKPFETGUAQIEUPBMLVYAXYWXLJXBHXERURTDMODPSIAKHPZJCDODQBVZNLGZRAFYSHDDJSHPKABNWTLOQFDIJWFVZTZKTQPKQXNQFIEFKBAOKQAUWJPZRDFLGIMMZVUMVBZELOOJGMGZHLNXTJHJSROMVCWXBWCGYVSLYIKCBYYIUCLDMTGJKFPCGYEWUTG");
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
    msg.setTimeStamp(0.773503510000318);
    msg.setSource(63626U);
    msg.setSourceEntity(198U);
    msg.setDestination(41562U);
    msg.setDestinationEntity(135U);
    msg.command = 20U;
    msg.htime = 0.8414224446259895;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 238U;
    tmp_msg_0.htime = 0.11315947477248434;
    tmp_msg_0.context.assign("CVVWWCUBDLPTZWKMUHMKDMOEWYFGDTFDQTLCQFPAAMLVBRICMLKQEFNPHWRNOWDFQEQIMCSFNWJOFPAZCIHSFVLYXYBSGGUYMNHPXGELAHGVBVYNDXLBZETAKSMUEKEZETMRQDVGHTSYIJHDUTDZHJEQPOMHCSZQSZOJQFJAZLGNRRUTNJQNFIZ");
    tmp_msg_0.text.assign("GTTMZBKGEIZPMKGHGIYUIYNKSFADTKNJBMEXMOBAEQXMATJICQFZUHFJBSPXPFLRCVSQBXYLLCJMSBCQXQNIWOWCULWKZQTNCAHGGABDIOYYFAZBZVUCPVGBNEYFVFGFQRNKLJRXHATOWKDOJYWDQRMLSURJRORZAQSDMESHAOLZUOHORMZHPPMNNGRFWPYFENDHUCDPJJVWTWVWPGEWSKCSURXBYELSHDEAXILKDNTTIVVLUODXZ");
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
    msg.setTimeStamp(0.21911318656113565);
    msg.setSource(48638U);
    msg.setSourceEntity(149U);
    msg.setDestination(52191U);
    msg.setDestinationEntity(128U);
    msg.op = 34U;
    msg.file.assign("FNWXKERLDEWIFUYRVZKRGECMQWVYXFOBAMLHAIKPTTYEBBDRXQHCZOXZESOXBQDGHMIOLNIMMZDLWIULLDGVYJYUEYFJCHGQISCFUTMFTVPRWFLKCZLYAYDGQANIQQJYDDWEMNXTOWUAAHZJTZZARTXIKFCEDQVPVBJZKWPC");

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
    msg.setTimeStamp(0.27287259293140065);
    msg.setSource(22779U);
    msg.setSourceEntity(11U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(229U);
    msg.op = 128U;
    msg.file.assign("PMXXKPPNIVBBHDTGCADQKVCTJKBWBLKOJGRJSSWEUTNZEXZCNKTWRVDKHVSUBHRWQEZDBLGXYBRLSBGTAFPIQKIUNRTASJFXHIIDFTUXOJLAMKXTGMFNDQHJIFLRZYQQZELCMVJCPBFUGELAOIGLAFNMJOIVXXEZYFOMGMMSPVEPHHABSSMZRZPQNUINAUDOYUEUKENHYHCSPOROKPZDCAOVLQNFFQGWAXYMTJVOUJHCCDSLR");

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
    msg.setTimeStamp(0.12336991709250789);
    msg.setSource(24722U);
    msg.setSourceEntity(159U);
    msg.setDestination(46517U);
    msg.setDestinationEntity(68U);
    msg.op = 196U;
    msg.file.assign("MSRBOJEWYUUAFRKFNNFWLJQNQMGTWLDZPXZMNTIQVUXNNPICNTDVLIYHCWGRDTFJOKPVKELPBYPSYRMPKOEIFXKOXZZIQDILVMVZNGYPYKBRFJJOGHICVVLXTYMVRBXZUGAEDBCCOXMQQSTWHDEDZEEEIYCUUCOYWUYWGMKMOLXJIQGARUSCHHNVLRSFELKHGATPKFHB");

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
    msg.setTimeStamp(0.6198532123127115);
    msg.setSource(6659U);
    msg.setSourceEntity(210U);
    msg.setDestination(43502U);
    msg.setDestinationEntity(116U);
    msg.op = 246U;
    msg.clock = 0.29368118667410703;
    msg.tz = -21;

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
    msg.setTimeStamp(0.41177873167976253);
    msg.setSource(36052U);
    msg.setSourceEntity(72U);
    msg.setDestination(40718U);
    msg.setDestinationEntity(73U);
    msg.op = 215U;
    msg.clock = 0.1441097715583598;
    msg.tz = 59;

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
    msg.setTimeStamp(0.7366086476717566);
    msg.setSource(36954U);
    msg.setSourceEntity(242U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(216U);
    msg.op = 208U;
    msg.clock = 0.23623996158062432;
    msg.tz = 124;

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
    msg.setTimeStamp(0.1717799879169607);
    msg.setSource(28336U);
    msg.setSourceEntity(126U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.02434713463497884);
    msg.setSource(55708U);
    msg.setSourceEntity(217U);
    msg.setDestination(26712U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.9333603148853244);
    msg.setSource(65394U);
    msg.setSourceEntity(120U);
    msg.setDestination(38753U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.46397578102455894);
    msg.setSource(46266U);
    msg.setSourceEntity(23U);
    msg.setDestination(56118U);
    msg.setDestinationEntity(245U);
    msg.sys_name.assign("KSBXOGEBGXYHVEZFTJNULUSFVDHIKFWYWOGYFVRFSGDJPVENCYDNNSHTIWITOPXBZARXAWBYPVQHERHAHISMAGKDDAQXHCUREULNIOACEMWEZPZKHKBLYKSZFHOLQAVVDXBPITRMJMZZMLCKTYUEEZXUCUYJOPDWNOMDMOBZDCBINWFQKGXLNQTJWFPCJVTQUJNKABVGAIYJQLIYUK");
    msg.sys_type = 4U;
    msg.owner = 25012U;
    msg.lat = 0.583173401366432;
    msg.lon = 0.8470047180632347;
    msg.height = 0.4587904938159032;
    msg.services.assign("WQBZYTNEGESEMPXFIGMUCIAEKMGZQJRVRBOJLLJYAFOZKGZMSGIYBOYWIEBOABFUJHARRXJWFLYHONKWODLAMUVZPUCF");

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
    msg.setTimeStamp(0.12617133180957263);
    msg.setSource(15611U);
    msg.setSourceEntity(88U);
    msg.setDestination(53770U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("FYQQKQUYJMBHPXSZVTREIKCJIUQPZAYYFPLXQMGK");
    msg.sys_type = 61U;
    msg.owner = 48384U;
    msg.lat = 0.2528710544930598;
    msg.lon = 0.1423936384271186;
    msg.height = 0.7920885257495862;
    msg.services.assign("FWTZFRRUIMDCHZOAKFZVRNLOJFTUCPTLRENQYFEACHFXBQOMJIVIZEIDMHTUBPSOI");

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
    msg.setTimeStamp(0.7041003736587993);
    msg.setSource(27650U);
    msg.setSourceEntity(234U);
    msg.setDestination(39137U);
    msg.setDestinationEntity(221U);
    msg.sys_name.assign("NGAXELLSKMLSOBSIRGVOUIVORAWHTTSTQFCODKERZCCNMJZFSBSKMWVRJKINWHXFEYHZYVYKORYQVEVXDUALZSGKDYIXEQXVPQBQIIXWPCFAYAWFJHAOJGMLVBPAYXQUQMFUREOKOCUWCIDAZGOTGXTJJDSCCSVBTDADJHBRWLGZMETEXMJLEQHGMHYPULSNNINY");
    msg.sys_type = 10U;
    msg.owner = 47181U;
    msg.lat = 0.768060418096313;
    msg.lon = 0.48743008878364436;
    msg.height = 0.317417297766607;
    msg.services.assign("FBPOJKCPNIVXQJIMRKPDUBRACZSWXAUNFSCSFRRCZCMHFTIGCNYBEUYYETJQOJWNBTDTMYHNHVHQSSZKXRUQLIUXBBWHVQTIUBHGWSEYTIKOEFBPWDBTEJHFVPCVLLZHLGGDLKPFJUOOYZANWXMKOIMRUJTAIOXGGHXONGLVALJIUJYWAJYODHKVEMSFSADNKWDCZNADYVQARUVXDYQLQBCMERMQGRWGXWCKTGPPM");

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
    msg.setTimeStamp(0.593050573137523);
    msg.setSource(27971U);
    msg.setSourceEntity(135U);
    msg.setDestination(5832U);
    msg.setDestinationEntity(78U);
    msg.service.assign("TQCCOHLZLASOGWRZGLGDXVBFUADDOZBZMRXQWVBITCFATEXYDSFFNNYERDNIGVYEKSWSCWPHEAZFSTCRLOGITLCRZJJQNJMBRAZMHWRNYOXJQHEIBKAGTUBSHCVKKEPOKPKYSMJTXNYXLQQXUWSMBNWUHODEVUHWQLDCPOQXYUIBAIGJDEKLZCFHGVOBVKOMSJYJXIYPRMDIRQT");
    msg.service_type = 64U;

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
    msg.setTimeStamp(0.9074973808408641);
    msg.setSource(36261U);
    msg.setSourceEntity(239U);
    msg.setDestination(26642U);
    msg.setDestinationEntity(163U);
    msg.service.assign("SDEAKFNOVCJOLUFWZXAKHHQYIXNEVISMDRRIOMRRCKWBJNZSMRDPCNTLWAJHEOEWHSKKFEYJKLELSFXOQSTHUGLMQAPEZGYPLXOYNZCRFGWLKOPMUFFJ");
    msg.service_type = 242U;

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
    msg.setTimeStamp(0.11713394009635292);
    msg.setSource(47961U);
    msg.setSourceEntity(57U);
    msg.setDestination(43907U);
    msg.setDestinationEntity(145U);
    msg.service.assign("MNRNBQLZPOFONHEMADVFKKWNLJYHXVDQVXBSIEZKALQGMEPMLCTVUJNWDCURNOBROPTCYUJGQSODMETTXYNPZAMZQHWURDQJFQAUDXHYEIABHUEZRYV");
    msg.service_type = 19U;

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
    msg.setTimeStamp(0.1893563996313652);
    msg.setSource(62601U);
    msg.setSourceEntity(246U);
    msg.setDestination(25629U);
    msg.setDestinationEntity(207U);
    msg.value = 0.4038358388233967;

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
    msg.setTimeStamp(0.8071204463837613);
    msg.setSource(37054U);
    msg.setSourceEntity(215U);
    msg.setDestination(23704U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5754997991635663;

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
    msg.setTimeStamp(0.8511340794854029);
    msg.setSource(2864U);
    msg.setSourceEntity(193U);
    msg.setDestination(57200U);
    msg.setDestinationEntity(101U);
    msg.value = 0.4496756279665264;

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
    msg.setTimeStamp(0.4546650590923079);
    msg.setSource(49514U);
    msg.setSourceEntity(73U);
    msg.setDestination(64777U);
    msg.setDestinationEntity(232U);
    msg.value = 0.14736976436363503;

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
    msg.setTimeStamp(0.7825660960280169);
    msg.setSource(2811U);
    msg.setSourceEntity(245U);
    msg.setDestination(45858U);
    msg.setDestinationEntity(137U);
    msg.value = 0.43764430395913756;

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
    msg.setTimeStamp(0.17031298383919613);
    msg.setSource(23475U);
    msg.setSourceEntity(141U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(56U);
    msg.value = 0.6176278225798543;

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
    msg.setTimeStamp(0.03294635143255975);
    msg.setSource(3848U);
    msg.setSourceEntity(202U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(219U);
    msg.value = 0.18499300246863626;

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
    msg.setTimeStamp(0.36033223432306427);
    msg.setSource(1130U);
    msg.setSourceEntity(46U);
    msg.setDestination(17578U);
    msg.setDestinationEntity(175U);
    msg.value = 0.540663040267444;

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
    msg.setTimeStamp(0.5482408499122093);
    msg.setSource(46528U);
    msg.setSourceEntity(253U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(135U);
    msg.value = 0.6656091500670362;

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
    msg.setTimeStamp(0.47510728455758966);
    msg.setSource(63868U);
    msg.setSourceEntity(46U);
    msg.setDestination(58268U);
    msg.setDestinationEntity(58U);
    msg.number.assign("BICTPJRZNJQOBUEBJPOCNALODCPZUKSULGYII");
    msg.timeout = 13791U;
    msg.contents.assign("JUTGTSGHNXZTOPQRENSEKBADPTXHCDROIJCZTJCFFQAHUMCRQZVQMKWYFNQWOVBYZHPQZKLFWGHTAELLCGEAIMPRBGBKDVKVWOWADMKAEVOJNKRCRFXMSRCXGJHQEQDLISLIKYETBFFQDXCMPPRJLYZVYBNYNMUFUAOTGCISGUVSMBPHRPZUTBYBNLKHWMKYADEORAIXIWSLLVZSMODNFPNUJDWYFZEVNWDXISEJJUTHICU");

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
    msg.setTimeStamp(0.32048658595294677);
    msg.setSource(3035U);
    msg.setSourceEntity(177U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(138U);
    msg.number.assign("LGWEFVCYKOUTWONTNSXWMOXENMGCNJUJETJHYWYKRLIAPMRFUPOZQRPNVOQLCEHQVMQEKUFVSTXVNQYPIQOALCIGOVSIBJUIUADDQTWKHFDBBJWADTMYQDZIBGZIMZJHZMPMWIWSZIEDBGKKLBSGDYBKTZTDCDDRQTHZZAUKYNOWGYRRRJCLAUPHHFVNXPNOAJXXUAFAGOFFCELEPSNXCHGVYHRVEGRCRPPXKE");
    msg.timeout = 18508U;
    msg.contents.assign("ALSYNGQWPXMMGBBVWZZJGZXKDJVTSYWGSYRLFDLETCDZUHIFUHENDJEGLLLJYPFKAQMBMHXKZNARDHUSXIYDXINEVSUP");

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
    msg.setTimeStamp(0.6182705550997457);
    msg.setSource(4550U);
    msg.setSourceEntity(182U);
    msg.setDestination(20007U);
    msg.setDestinationEntity(249U);
    msg.number.assign("LQMTCUOJHGGJATZFFZMBWIKRPQPXMAZFWSQEJGSOUDIWZQKZBHTHPKYTKHMNAWLVTICNJYBBNVTXPLRXWUALURULOAVOUMQLSQMOP");
    msg.timeout = 58939U;
    msg.contents.assign("CNRSRMNVLZWPJNVWUFHESSMEMVISPVTOFUEXWHFOFJKZWORCPRWIJRGDYWCIPOIAMZTLOUXSRIVGXGIATVJIKBLTKGQOYOKQEBIDXDNOMLMYQFDNLUGZUJASXACMXLPPYMRBGSUOXSRKCWBDKN");

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
    msg.setTimeStamp(0.9776608266106083);
    msg.setSource(8476U);
    msg.setSourceEntity(100U);
    msg.setDestination(7472U);
    msg.setDestinationEntity(39U);
    msg.seq = 895381439U;
    msg.destination.assign("LVJGTIZUPTBLZMMCGDASIZHYQGFEXBVZNYGDJXWKOYHYLCFUSPSKNWGPIUXQAYQ");
    msg.timeout = 11649U;
    const char tmp_msg_0[] = {-70, -2, 2, -43, -109, 126, 111, 95, -72, -17, 124, 33, 103, -27, 17, 7, 1, 101, 2, -111, -49, 38, -121, -114, 27, -93, 2, 49, -128, 1, -82, -59, 63, -87, 11, 18, 44, 101, 80, -51, -124, -10, 36, -83, 100, -70, -108, 17, -56, 95, 15, -5, -50, -46, 49, 16, 82, -19, 116, -67, -17, -104, 36, -7, 74, 35, 60, 73, 85, -123, -51, 105, 23, 10, -29, -61, 31, -59, -63, 44, -10, -125, -83, 2, 71, -56, 13, -95, 86, -17, -126, 13, -93, 78, -111, -98, -32, 97, 47, 82, 57, -16, 12, 1, -33, 75, 42, -1, -48, 10, -33, -76, -53};
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
    msg.setTimeStamp(0.1174297997771574);
    msg.setSource(26245U);
    msg.setSourceEntity(31U);
    msg.setDestination(27492U);
    msg.setDestinationEntity(6U);
    msg.seq = 1510737944U;
    msg.destination.assign("XFTPNGXKSFDXZWLEGCITNNGPEPOLVAEQUBXUJMIJEGWHWYNQEZMMLPBOQLTEBHAQGNDZBBHOAYEGHKYZIVTGRZAXCFVKZSUONAJYQJJBANTPUCDPIRIVWFMKFUJIMAMCHLTOYTEKGCSGVDAXSXRZISHKQOTJOAMV");
    msg.timeout = 37154U;
    const char tmp_msg_0[] = {-125, 38, 46, 32, -52, -68, -80, -99, -38, -30, -90, 65, 51, -120, -51, -97, -34, -16, -75, -38, -6, 30, 94, -7, 104, 89, 88, 78, 3, -89, -93, 54, -117, 0, -112, -105, -49, 86, -115, -2, -72, -86, -40, -45, 7, 52, -125, 4, 82, -90, 40, 22, -99};
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
    msg.setTimeStamp(0.4718921030282498);
    msg.setSource(25120U);
    msg.setSourceEntity(10U);
    msg.setDestination(41765U);
    msg.setDestinationEntity(245U);
    msg.seq = 1970398861U;
    msg.destination.assign("DFWOOBESHGIKNUTOBGWYKUJGUTZMCADAGYDTSFJMMCOFIZDYAZDBPCZKEODDLUWCSNXKKORYPWVGTEOFALJSQZXENQBMGTAQJZFCXIRRWBWLXNRENPDHBHWEVYHWOJRRFGISESOVQGLAPQTJSLYHX");
    msg.timeout = 24625U;
    const char tmp_msg_0[] = {-53, -14, -95, 105, -80, -86, -15, 51, -44, -111, 34, -27, 76, -120, 63, -87, -11, -82, -16, -19, 75, 76, -34, 121, 76, 0, -10, 65, -71, -45, -98, 100, 71, 39, -48, 43, 106, 106, 104, -62, -35, 56, 68, 93};
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
    msg.setTimeStamp(0.13593729108217445);
    msg.setSource(52393U);
    msg.setSourceEntity(191U);
    msg.setDestination(9679U);
    msg.setDestinationEntity(146U);
    msg.source.assign("AYFVHGIITAWSEQKRKMBOZSMADUAYXKPCERXJGJBUBLONCAEEYFSNBDFVFQVWIPIKBHVRNSTUDJZNYJMBJBWAVERLYDGXXIGWRXWCIZWYQSPRHUIEWKMOLPXTZGESUQHDMCDZTHZFBXOQNOADZVQSACXSPKXHVRIDPTQNJJKAICYJUMETKPOCMTGM");
    const char tmp_msg_0[] = {118, -98, 81, 1, -40, 68, 105, -104, -13, -110, 92, 57, 105, -93, 49, 0, -106, 57, -6, -76, 39, 77, 22, -70, 61, -40, -40, -108, 38, 77, -100, 73, -25, -13, 70, 58, -93, -11, 116, -88, -120, 18, 125, -13, -76, 64, -44, -116, 73, -18, -79, 5, 99, 2, -11, 34, 52, -102, 0, 61, -5, -67, 115, 28, -101, 3, 57, -82, -50, 84, 80, 79, 75, 53, -86, 10, -65, -114, -93, 118, 58, -110, -88, 28, 101, -64, 30, -113, 84, -100, 46, -16, -80, 32, 107, -19, 88, -82, -80, 6, 57, 40, 124, -70, -36, 125, 0, -17, 30, 4, -67, 79, -13, -105, 35, -68, 125, -92, 120, -115, 104, 28, 114, -122, 1, -84, 90, -109, -48, -60, 113, 58, 108, -95, -6, -58, 83, -100, -96, -64, 9, -78, 40};
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
    msg.setTimeStamp(0.648111944029481);
    msg.setSource(64228U);
    msg.setSourceEntity(140U);
    msg.setDestination(51522U);
    msg.setDestinationEntity(6U);
    msg.source.assign("JKNCCVTHKKFAIRDDWLVNNPSLBWPCJXCMPRNKBYGIFBEOMRZHAHLNQYWCUDMDP");
    const char tmp_msg_0[] = {-90, -111, -25, 56, -47, -24, 66, -82, 105, 106, 73, -1, -61, 58, -59, 97, 31, 13, 39, -87, 0, 27, -35, -114, -46, 73, 123, 14, -14, -15, 118, 9, 58, 32, 15, 62, -55, 6, -44, -41, 37, 61, 124, -104, 0, 78, 31, 103, -27, 126, -65, 37, -108, -117, -11, 40, -92, 47, 107, 106, 86, -115, 85, -80, 63, -95, 37, -5, 22, 111, 26, 55, 29, 125, 108, -33, -69, 121, 76, 117, -4, 9, -29, -40, 83, 30, -28, -8, -26, 59, 115};
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
    msg.setTimeStamp(0.24387936149373124);
    msg.setSource(23652U);
    msg.setSourceEntity(166U);
    msg.setDestination(50263U);
    msg.setDestinationEntity(6U);
    msg.source.assign("LXPVOIDCXPQZRGUHFOVGDGHRSTPIKSGNMIRUQFPPHUDXVQOKCLGBFLMEXYKNGDXISGETEFLJMXNMYLYFCTOCSRBBVLUYKHZHBIKAUCCYWRIRSZKSKAQLAVJAGZXBMAEQFFEQVVJUKAZMIUHNEYPCTFBJLTHANWNHDMZDVRTQPAIJAICBJEXTFOOCMOSJPLUWFETKVADQKDHNNJCXXWONUHWZJWESIDWZODLQRGYS");
    const char tmp_msg_0[] = {116, -3, -31, -87, -128, -48, -83, -11, 91, 70, 97, 59, 31, -102, 66, 85, -15, -118, -5, -24, 109, -105, 59, -61, -83, -21, -80, 58, -18, 28, 126, 77, 15, -104, -21, 67, 101, 79, 114, -103, 122, -94, 13, -54, -15, -50, -92, -104, 11, -62, -14, -116, -12, -115, 54, -42, 26, 46, 61, 92, 23, 11, -61, -67, -95, -63, -5, -53, 21, 43, -85, -74, -84, 5, 82, -65, -120, -53, 14, -97, -70, -27, 25, 29, -97, 79, -100, -31, -128, 65, 22, 78, -74, 107, 107, 114, 51, -60, 121, 18, 3, 53, -127, -57, -50, -113, 70, 23, -13, 38, -77, -122, -47, -37, 126, -75, 117, 57, 5, 116, 62, 2, -120, -89, -95, -94, -122, 81, 5, 70, 74, 105, 85, 77, 77, -7, -115, 35, 10, 58, -127, 73, -20, 17, 103, -60, -68, -98, 17, -99, -98, -3, -4, -28, 95, -64, 122, -15, 64, -40, 65, 34, -125, -102, 68, -97, -93, 14, 89, 5, -63, -104, 37, 122, 104, -10};
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
    msg.setTimeStamp(0.20907119771449933);
    msg.setSource(37711U);
    msg.setSourceEntity(126U);
    msg.setDestination(51461U);
    msg.setDestinationEntity(12U);
    msg.seq = 2943485397U;
    msg.state = 80U;
    msg.error.assign("SSJBKEEYKWFYFLFQWRWIPYHJIRLRDYLHOAPGDZGJAUHUIODPIXRWQLCORDIEU");

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
    msg.setTimeStamp(0.5969050417945665);
    msg.setSource(8607U);
    msg.setSourceEntity(111U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(60U);
    msg.seq = 312117568U;
    msg.state = 131U;
    msg.error.assign("XZNHVBBNWXAGCHRGWXSJPBPBJYZHVPLOPKWXMZRVVTAMXSDQPPPPCTDSCRJEFFRCJOUAFDLFVGJIMTAZEXJJYMJVICBMIBISIGRWVXKVOHNVMNUNFEYOYYWFZULSCBTMHQKAEOWDREIFTELTLKDLASDAGFOUCMXESZBGMUUP");

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
    msg.setTimeStamp(0.9791761057259659);
    msg.setSource(22751U);
    msg.setSourceEntity(247U);
    msg.setDestination(40704U);
    msg.setDestinationEntity(230U);
    msg.seq = 3001954993U;
    msg.state = 106U;
    msg.error.assign("KUZBTQYLIHOJGQNSHZRKSFSIMCYDEXFUNZEKNINICHRGAPRHIOGYCFHKYHOEDCTUDQXUNJJSPFPUEFDWRDDRMETZMCTPNELYUJQVAEVDLVXSXAKMVDVGUOLTYAFIMEFDLOBOPXJTKVFQIPOKXVRBALRIXPKQCPSWJQLMNNWGXPJWVXJEYMJZEBQZOYWHHLDGIWZPNTMS");

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
    msg.setTimeStamp(0.9407876691893897);
    msg.setSource(22555U);
    msg.setSourceEntity(124U);
    msg.setDestination(5137U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("UWQZDRNOWD");
    msg.text.assign("RZXNKVBDIROZVOGUVAFOJLDQZLSWHTGWKZEUAH");

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
    msg.setTimeStamp(0.7632379361519496);
    msg.setSource(10672U);
    msg.setSourceEntity(28U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("OTKPACVGDIWBIONKGDRLHFBCFEJZFNKJGTNBHHAKBLLTQYUPSMYBHDNKJCESYQCMUVVRWNWBFARJADWDKEWIVPERVUTMQZUNIRMLKQTPTOHZWMVKGINKZMHKSOLW");
    msg.text.assign("CEBSWKTGQKGMNNXPQUOGBBNZESRXLWAVNAFDMLBLGNTROMRUXUHBCXYEGIMPNMBRUXEIJETBXEYHQNWEOJUHZJZDJMXDKJARAVQDVLFHVQDBZYOXDVVCXFAYSWHYCFIDPFQ");

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
    msg.setTimeStamp(0.672452739984128);
    msg.setSource(40827U);
    msg.setSourceEntity(85U);
    msg.setDestination(15912U);
    msg.setDestinationEntity(151U);
    msg.origin.assign("RURMEZVBDEPZTRCXFLGGZIPHXSOCXFDTWWSNBJPQDPMQJIONFBSELTJEGITNUNQWBVFTCFHUTTISODMANWDHAQHVMYZVOTABNEIAMVDOQWYYKQHJKZBCNRKJMUQSKLRQDUOOFZGAJVMXZIJBHKYPVZBTLLKUDVSRVXFYKXFWUMRVASXXMYCEGYCLSPKRFPAZONUYQWUHAPWIWRKLL");
    msg.text.assign("POHXDMXCXRGOCOWMCVCATYGIRUVLGYJYEWXISAZUBUHZZGLHPOQSKHUHXPNWMUKPAROFEDMHFJLPADFRFQAQYZOIATJHY");

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
    msg.setTimeStamp(0.3684338658210412);
    msg.setSource(26165U);
    msg.setSourceEntity(124U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("PZJRDUURTXLFQYRUMYLSNSMDJVIVZWPDWOSILINLOVFJPGTTNWXWDWRAUPKSXOKANCJRZMTHJLKOOANPQAKSWZDFIZYEMBTXNFV");
    msg.htime = 0.9977867716268629;
    msg.lat = 0.4989673111330697;
    msg.lon = 0.48625316035789046;
    const char tmp_msg_0[] = {-12, -44, 87, 18, 104, -37, 69, 84, -120, 26, 117, -29, -100, 15, 31, 83, 82, -118, 97, 114, -39, -110, -95, 4, 82, 56, 47, 56, 93, -123, -46, -1, 103, -41, 105, -90, -24, 14, -101, 19, -28, 101, 51, 25, 62, -25, -42, -110, -6, 23, 44, 19, 25, -62, -127, 74, 51, 83, -32, -30, -34, -120, 110, 28, 11, -5, 18, 79, -110, 36, 43, -73, 35, 109, -113, 109, -100, -104, -108, 32, -10, 99, -20, -2, 119, -100, -20, -83, -12, 12, 27, -121, 73, -26, 72, 107, 44, 88, -88, 48, -75, -55, -67, -17, 6, -79, 78, 106, -62, 91, 34, -32, -72, -93, -121, 119, 54, -128, 111, 87, 75, -3, 67, 12, 82, -124, 104, 7, -37, 107, 53, 114, -79, -86, -107, -46, 121, -33, -72, -105};
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
    msg.setTimeStamp(0.11622197291466863);
    msg.setSource(24775U);
    msg.setSourceEntity(51U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("PHSTEEMKRJPAJTFLWWCBUKGEUTMBHWWJSWVNAMOWUUTTFIQWHKHLIDKOOIXFOOOSBIFLVUIAZCEDXGPSIXNLAAJAQUCNFCIGCQCZLTGVIUK");
    msg.htime = 0.08793373463320864;
    msg.lat = 0.47452864109595105;
    msg.lon = 0.8433931244506616;
    const char tmp_msg_0[] = {-107, 60, 108, 19, -28, 94, 61, -97, 80, 83, 112, 3, -66, -116, 33, -3, 54, -70, -6, -109, -20, -14, -43, -117, -39, -43, 51, 109, -93, -5, 77, 1, -69, 74, -77, -61, -108, -83, -39, 35, 8, 35, -13, -87, 88, 53, -39, 94, 9, 74, 43, -71, 39, -23, 120, 67, 79, -68, -7, 70, 105, 88, -50, 93, 39, -35, -104, 35, -59, -110, 44, -16, 29, 100, 118, 56, -114, -126, -106, 76, -17, -90, 17, -33, 30, -24, -11, -96, -14, 15};
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
    msg.setTimeStamp(0.6820047558492831);
    msg.setSource(16749U);
    msg.setSourceEntity(237U);
    msg.setDestination(47656U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("CREEJZBQAISIYMWZRYSTXAUYWFLBOOHFKKUYPMCCVBKJOQBMCXVUHSYDVJHGADECHJBDXQITNXGZOEKSOIRKTGFQKLHVKSCFYTRLPYGKBNEQANNIUMDIHKWPGRFCLQZGDMXVMYPDDCATOZDYCJZNERGJSNFPBPDVYZEGIIOAWDZBTLNULBNTPVUHXMAXVSJQLGRPXXTOUFWZHJAOMUVESIFKAAUOWWTLWZGPXPRSWHM");
    msg.htime = 0.7324519238522972;
    msg.lat = 0.12305138540797322;
    msg.lon = 0.8508601033713725;
    const char tmp_msg_0[] = {-7, 96, -19, -86, 96, 91, -35, 35, 98, 17, -24, 28, -28, -89, -110, -54, -83, -120, 66, 30, -45, -127};
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
    msg.setTimeStamp(0.9273654591841842);
    msg.setSource(35710U);
    msg.setSourceEntity(67U);
    msg.setDestination(42079U);
    msg.setDestinationEntity(221U);
    msg.req_id = 56577U;
    msg.ttl = 32592U;
    msg.destination.assign("OVZITELUDBAXUGMWAPKHVQLCXPYHXACTRLMMGDQPUATVGYKRONFQZBHCDGJDFTYFFWUEVPGQIFDIAQJGVSOLVECQMOLFRUXRSXBWDJQTEVQZZKWJOQHPEREUNITMKYGKDMJMVKKHTNIHFRTLEYSUJBBMYINNWDUCCBDJDSHCFSZRWGKCPSECWIWPBLFOZVYGBUSTGRAASXHOBNTXWXEFZKAQYKPLOMJYENIRHZOJWJLCOZBISMSRU");
    const char tmp_msg_0[] = {-101, 46, -30, 35, -121, 80, 125, -74, 14, 63, -66, 92, 77, 89, 33, 45, -93, 72, 77, 39, 28, 124, -56, -46, 11, -8, 53, -57, -67, 86, 102, 114, -37, -112, -73, 62, 23, -68, -77, -27, -45, -57, 17, -84, 86, -93, 104, 7, -22, 69, 83, -114, -97, 34, -63, -115, -31, 62, 19, 43, 14, 106, 32, -113, -48, -89, -115, 58, -120, 122, 119, 120, 101, 68, -20, 41, -113, 39, 25, 87, -13, 48, -98, -5, -13, -60, -42, 88, 45, -66, 27, -16, 73, 29, 30, 94, 101, -61, 84, -27, -34};
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
    msg.setTimeStamp(0.9247778794887485);
    msg.setSource(14247U);
    msg.setSourceEntity(244U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(23U);
    msg.req_id = 32295U;
    msg.ttl = 32890U;
    msg.destination.assign("BKPOPGGVSFNUOVJHGTZQMYQFYMCPRIHYESWBCXQIZZHHHMRZOTNTSXKFWZFIEGOKYDYYGJKPDXPPKUQNDYKJUTMDQIMAEGUMEEYRTUEAHECZYWLZFOOCOIWNKSIQNLAACVGLJHFCPLSJCDGDGX");
    const char tmp_msg_0[] = {107, 80, 91, 83, -69, 32, -73, 104, 46, 88, 3, 94, 123, -17, 20, 88, -123, -92, 112, -46, 83, 55, 3, 97, -10, 112, 42, -127, -28, -55, -36, -103, -5, -97, -84, -11, -40, -95, 51, -37, 110, -6, 121, -90, 99, 123, -75, 119, -102, 47, -56, -45, -12, -70, -9, -31, 119, -57, -28, 16, -80, -85, -117, -99, 85, 13, 50, 32, -86, -76, 11, 121, 108, -30, 71, -83, -45, 92, -1, -125, -80, 43, -120, -34, -39, -70, -34, 105, 6, 94, -56, 115, 112, -82, 62, -52, 94, -89, 121, 93, -109, 71, -67, -53, -70, 9, 43, 42, 77, -14, -28, -8, 122, -71, -8, -96, 31, 14, -43, 11, -4, 2, 75, -47, -98, 78, 79, -100, 123, 126, 17, -84, -123, 79, 85, -65, 63, -18, -55, 106, -4, -91, 17, 55, 61, 46, 61, -100, -70, 104, 84, -40, -13, 64, 84, -123, 40, 124, -114, -101, 64, 114, 11, 115, 67, -56, 82, 81, -3, -16, -38, -57, 72, -39, 83, -25, 114, -8, -80, 26, -80, -23, -65, 45};
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
    msg.setTimeStamp(0.6266035100375354);
    msg.setSource(55354U);
    msg.setSourceEntity(98U);
    msg.setDestination(31011U);
    msg.setDestinationEntity(143U);
    msg.req_id = 4211U;
    msg.ttl = 47712U;
    msg.destination.assign("UMEAKFVWYYHOYTGSDONPMFUXCMAAB");
    const char tmp_msg_0[] = {74, 70, 77, -106, 57, 20, -85, -50, -25, -75, 30, -14, -88, 89, 88, -69, -85, -127, -58, -88, 46, 1, 120, 95, 31, 54, -23, 33, -93, -73, 71, -4, -67, 61, -81, -59, 26, 82, 102, 39, 20, 65, 46, 113, 26, 114, 100, 77, 71, -101, 100, 108, -86, -42, -5, 48, 107, -58, 125, -112, 125, -42, -97, -32, 0, 68, 23, 57, 18, 78, -41, 78, -37, 107, 5, 46, -122, -20, 79, 11, 60, 72, -27, -19, -24, -32, 95, 99, -17, 10, -39, -48, -115, 22, -13};
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
    msg.setTimeStamp(0.0032777177217193643);
    msg.setSource(27547U);
    msg.setSourceEntity(46U);
    msg.setDestination(62360U);
    msg.setDestinationEntity(227U);
    msg.req_id = 26870U;
    msg.status = 186U;
    msg.text.assign("GGBZEOKGOJVQVSMQYAPKSFWBTLDSIYOGCBNGTRRPRN");

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
    msg.setTimeStamp(0.3144477737139343);
    msg.setSource(38122U);
    msg.setSourceEntity(206U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(97U);
    msg.req_id = 38459U;
    msg.status = 126U;
    msg.text.assign("SCPDDNNXYYRJXHMMSKXUKHWBKZEGFIWELXTIQJVVUSPPUR");

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
    msg.setTimeStamp(0.14276994310997015);
    msg.setSource(56436U);
    msg.setSourceEntity(57U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(10U);
    msg.req_id = 60205U;
    msg.status = 235U;
    msg.text.assign("IMIPKUSBHZSIHKLLYRKGSJP");

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
    msg.setTimeStamp(0.22761802709387724);
    msg.setSource(29702U);
    msg.setSourceEntity(226U);
    msg.setDestination(53687U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("ZDLFINHDEMWNQZXJHDBSTYBKLYPJDPMBGZHGYOIIXWUNHDLUKIPXFCUCDUIQXUHZRQCETMWKMLKGAXWPCUCQLYYAJHAIWFLFVZTPCFGKYGRMRDQGOEZSALUGJYEUPKBDAIQQJPOTSQKBFVCGNUTPKZNJITOYERBRHYPXJSORZOOAAMYKELBSXJAIRCHNFGTVXKBGFWAJTSVEZSVCEMUXIRBDWRHODLXJMQOMB");
    msg.links = 4041044661U;

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
    msg.setTimeStamp(0.33732324053191165);
    msg.setSource(30099U);
    msg.setSourceEntity(0U);
    msg.setDestination(55593U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("YADKYZVNFXNSBQMAASPUZUQMFODDIPRWCCSMDXSBPPLMVQBKGDYRKWKFRYPEOTJKEBHDSSBZUJ");
    msg.links = 1629702547U;

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
    msg.setTimeStamp(0.29258145463338336);
    msg.setSource(31988U);
    msg.setSourceEntity(246U);
    msg.setDestination(15317U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("UOGQMTILHACLOVRSANFXCLVZEBLHXCGOENCRLYESYBTPQJLGEZJJSMEPHKVFWVUZBQDRGWIGANIWMCZTQSXIOJKBSNBUWLSQCWEYDNRMBPDCXOGXELHLJQIJSHFGUMXUNESUDFSORFIHWYPVMPDQODFKYKVTFZACHUPZNXWGPIR");
    msg.links = 1948580832U;

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
    msg.setTimeStamp(0.8223428405646365);
    msg.setSource(30164U);
    msg.setSourceEntity(41U);
    msg.setDestination(61243U);
    msg.setDestinationEntity(92U);
    msg.groupname.assign("CAVKYPZJXLNIBIEMKTPWSDCJAIFFKCRFAYHEOUMJTATNFQDVBRHVENRCDUEXRFFRMXAPETCWHBPDPVHBQLFINIGAPZMPTOWLUZNCWGJHWXYILMMXVTTSAYJMPZWIQKKNUWBPGZBPKLDVERDYSSZGJKATXGQTGBVHONENNOQXVDJGUCOQODZDDUSZEVEQHYSAOWKYLOSNESKLJJYHQYIMLCUQLHOYRS");
    msg.action = 226U;
    msg.grouplist.assign("KSPRSZIFUMTHYYYRZVAIYGIULWMAVGTVP");

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
    msg.setTimeStamp(0.29206239078822493);
    msg.setSource(60569U);
    msg.setSourceEntity(22U);
    msg.setDestination(63066U);
    msg.setDestinationEntity(203U);
    msg.groupname.assign("YPSXIQYKIIUOCVRFDAPSWYCTPSOEBHISORNBZCNFLVGTWKCZADOCQFXJMYHAJOMDICKMGBETF");
    msg.action = 112U;
    msg.grouplist.assign("WSMVAGGFLWTVTZPDBNLOWQUTUMEDVELZCSWHZTBCIVPBTDZXKBDKFDBHQTGJWXCRQQMFUNSBPJEBMNDJEKLAFSCIJZFJYXHHHNKTJORHLYJXMPXVZCNRPUHEULHFWPOJYZXRWVSITDROAYAZEDAISEEYPLHBMA");

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
    msg.setTimeStamp(0.09291722357556564);
    msg.setSource(20094U);
    msg.setSourceEntity(181U);
    msg.setDestination(14034U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("GDURAYZKZIGNZSTILAQNWRLRMUBFSHS");
    msg.action = 111U;
    msg.grouplist.assign("OZTXDADFGVQKXLAFZRJQJMWWUUCNATVEXUQGWYTDTLCXHULYJNFACCFQERJMNHYJZKP");

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
    msg.setTimeStamp(0.4765943274366208);
    msg.setSource(18319U);
    msg.setSourceEntity(111U);
    msg.setDestination(52747U);
    msg.setDestinationEntity(138U);
    msg.id = 121U;
    msg.range = 0.710715934895193;

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
    msg.setTimeStamp(0.3602116773489821);
    msg.setSource(22664U);
    msg.setSourceEntity(97U);
    msg.setDestination(28100U);
    msg.setDestinationEntity(84U);
    msg.id = 58U;
    msg.range = 0.34745565481471863;

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
    msg.setTimeStamp(0.6311250889843903);
    msg.setSource(45659U);
    msg.setSourceEntity(129U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(99U);
    msg.id = 93U;
    msg.range = 0.48378265603790105;

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
    msg.setTimeStamp(0.8558158223081044);
    msg.setSource(6847U);
    msg.setSourceEntity(44U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(51U);
    msg.beacon.assign("HFTIQVCGBUNTVNUJQSVKGKVARYHHAWUUFOPLDFWMHIJYIJFDLVOTAJZWTVGMFWCAIQJ");
    msg.lat = 0.29897607699113316;
    msg.lon = 0.47966241911993723;
    msg.depth = 0.08407046344585989;
    msg.query_channel = 199U;
    msg.reply_channel = 184U;
    msg.transponder_delay = 8U;

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
    msg.setTimeStamp(0.8379947065667638);
    msg.setSource(58296U);
    msg.setSourceEntity(166U);
    msg.setDestination(64296U);
    msg.setDestinationEntity(178U);
    msg.beacon.assign("BUUJFNRYKCULXXAEGSMPXCRQNDUQDWSOXGVEPWNMQWMGYAQHANPLCANBYBJJCDRLCSVVFEHHWPNGLXFZUJOMRCZBNZZKUUTIJTFZCXDLFCWLUIANFQBOTTUJEFRRNVIJNQHMZQOFETIBTAGKQWXBBQCZOHEPGFRMIWIMMHOBSAVVPLYDOKSDKAJDWAVSJZSXFDYEKTVPIHY");
    msg.lat = 0.20093539053754084;
    msg.lon = 0.3741118138724038;
    msg.depth = 0.38624883490418127;
    msg.query_channel = 217U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 168U;

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
    msg.setTimeStamp(0.277256267472908);
    msg.setSource(49166U);
    msg.setSourceEntity(234U);
    msg.setDestination(39241U);
    msg.setDestinationEntity(182U);
    msg.beacon.assign("QLQWEMNVZAEBVDZYPOMAAZKRNCJHBJAOUHSMXCYYEGRPTQFYRPHZCAQWFKLXPDKVJIUJXKCQYPMSPKWMWOTGFVDIXILTHXBSBTURTOIIKRBPOWOTWMAIHDNRIUGWNYNTFVDUJTL");
    msg.lat = 0.12985924305025132;
    msg.lon = 0.5654217423234269;
    msg.depth = 0.19947677574216338;
    msg.query_channel = 23U;
    msg.reply_channel = 215U;
    msg.transponder_delay = 202U;

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
    msg.setTimeStamp(0.7494581499747466);
    msg.setSource(36737U);
    msg.setSourceEntity(83U);
    msg.setDestination(26677U);
    msg.setDestinationEntity(50U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.1668903328493253);
    msg.setSource(21141U);
    msg.setSourceEntity(29U);
    msg.setDestination(41999U);
    msg.setDestinationEntity(106U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.7664463047475685);
    msg.setSource(60988U);
    msg.setSourceEntity(149U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(152U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.5251644876396605);
    msg.setSource(29190U);
    msg.setSourceEntity(54U);
    msg.setDestination(58723U);
    msg.setDestinationEntity(169U);
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.31116427025457916);
    msg.setSource(11233U);
    msg.setSourceEntity(195U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(142U);
    IMC::AcousticMessage tmp_msg_0;
    IMC::VehicleLinks tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.localname.assign("EVBATOUQNJUVMJHDGCPSINVZBQRWJAVHLPDFJCMDMROYVUKPJCTJBSYZVTZBVGXMRNZUKQYWUWFHRLIDFTCQHNQPBHCWEMMELFVBWUEYUVGDRWWHRDIHSESTEIZXROQGXNIXAQLDAPIBODRHYNXAFEUFRLOMGQKIAYISWBJPZHF");
    IMC::Announce tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_name.assign("GDDUGNHCVOIVLAIJHUMOQWRWDKXNLRBNWMLFIRASGSEVRITCATMZPWXULVTBSPXKZCNCJIPMSHXL");
    tmp_tmp_tmp_msg_0_0_0.sys_type = 25U;
    tmp_tmp_tmp_msg_0_0_0.owner = 26354U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4517825476692905;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8126235607155103;
    tmp_tmp_tmp_msg_0_0_0.height = 0.21524172428320887;
    tmp_tmp_tmp_msg_0_0_0.services.assign("SZHPKZFILNZQLLPQONTFVAEAIPHNECUKXKTWRJQGKHKQWMEWJGXTCVVHJRUFMFJXCYNGGQZQBSIXDDEXKWHSDIACDZFFGTTWKGOVSMUZPQKWYIJAKWPLZOZLOQEB");
    tmp_tmp_msg_0_0.links.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2923912858006332);
    msg.setSource(1871U);
    msg.setSourceEntity(90U);
    msg.setDestination(11996U);
    msg.setDestinationEntity(80U);
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TIMDBBYCYWQBIMPXUHJDFVMXPGMDCGIQHFKQEICBHFHVEANKLVPOBHFLURJWQJNSUXIEVZARGBUCSNLNEWXRPTLUFSJUNSGJQGIPYHLEEAYWOKZHSYYTUADNZDCKATJZWIYKZZIRYUSITLSOOECPMKJJDJTVSLWZIFWHRXKQFPFEAOROBXNGTFOZLDLCQMVMYDWQKPUABDW");
    tmp_msg_0.predicate.assign("ZMJHWDZJALCPCAVBUTEGIWXZTCPVGZOXOHOAUZPLGWQVXQOJCBVLOUNMFSFIIWQYZSYPQHMMHDEWTSSQKIMMSQKUOWFQIBHU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PHJTJCXKKFJAWPRQKGYGPISEBIBFGABITIRHMQASXZNMLDRNUAVNHYKGNABOGFNRNTNOMUHLYVYNAUXSQLZDEQBOVEUEKQLTWQSAFUJTHEAHEWPDTWQDIYXBPWKZGMXYHPWGOBGTUDTJKUPTCGIMCRVTWXRVMRQKFSVONCHOCNCVMXVMFOXUDU");
    tmp_tmp_msg_0_0.attr_type = 149U;
    tmp_tmp_msg_0_0.min.assign("EYPTIVLEGTMYVFSGZVPQRGQSBDGAWMRKTYLXXEDCSUWFJUDLCYRHGTRIWQAPRBZPCEUILVNBKLNXOPPACADRNTXGEBJPKAKZAJKAIZ");
    tmp_tmp_msg_0_0.max.assign("IUWMEOJVTEYLZAMXRUYNGCLPKOTXWKSPWDVRFYCGTFLAZPVWXOXKAUJSQDUOYOSJQZJPVSLEIXMBPBLFNJUCZXFPIYRNQXLMNAGZBKTEDHNCGOQUABUEIDWZERZCPFWMUBGVNEEFCPARBCHIKNGMNTDTUYWHBT");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.06469567557373113);
    msg.setSource(13448U);
    msg.setSourceEntity(61U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(37U);
    msg.op = 123U;
    msg.system.assign("QNBEFPRMZHITDGYPYBPVYEQWWCCANSZGMKVOIBST");
    msg.range = 0.5338314266425656;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.4733091874523062;
    tmp_msg_0.lon = 0.10103577081502646;
    tmp_msg_0.speed = 0.38529201786644895;
    tmp_msg_0.speed_units = 166U;
    tmp_msg_0.duration = 10860U;
    tmp_msg_0.sys_a = 47304U;
    tmp_msg_0.sys_b = 43939U;
    tmp_msg_0.move_threshold = 0.19667125914844297;
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
    msg.setTimeStamp(0.6874395690130461);
    msg.setSource(28553U);
    msg.setSourceEntity(28U);
    msg.setDestination(6789U);
    msg.setDestinationEntity(107U);
    msg.op = 41U;
    msg.system.assign("QFMZGTBCARZFTAGLPRJNOIAJDKFREJKZMWOXVQERKSKOJKNGDMQHNJNLTGPQZDWZZRPIXJHENGHAXBVWGFYRRKDYBXABIYIUMCTWGLFZCYTBAAOBSDHSEVNNQBCEEAMRPLOHMPAKWSNOUMRHXYWIEPFWKMJSJJYMRDCQWATBMDWXOCIBSJFLGYCEUQUXDLZSUVWILILXLXUSVYEDOIHT");
    msg.range = 0.8071997579100397;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 37669U;
    tmp_msg_0.flags = 250U;
    tmp_msg_0.lat = 0.5426807705897193;
    tmp_msg_0.lon = 0.3060415308130219;
    tmp_msg_0.start_z = 0.04848534054801723;
    tmp_msg_0.start_z_units = 16U;
    tmp_msg_0.end_z = 0.37516767067612977;
    tmp_msg_0.end_z_units = 97U;
    tmp_msg_0.radius = 0.9950945876959225;
    tmp_msg_0.speed = 0.7971412281981811;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.custom.assign("DUYSEAIWMJASNLKNQVGEIZNJAFGGTOUSCKCGZVUYKXKOIRULGDEGBTYOECDXSCCWFXBMU");
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
    msg.setTimeStamp(0.6053058110109619);
    msg.setSource(44137U);
    msg.setSourceEntity(219U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(80U);
    msg.op = 17U;
    msg.system.assign("PHIXLBKGEJCYGZSMCFHYDSWDFUWLUPCKIRWCULHBHQACGMGUOENXRWETECLIRDXPQHJZWSASALNORYCFFVTSCZYHXHMGWQVPFNYFCGNXMHJRKATDXEAMWRP");
    msg.range = 0.8247859541047781;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("NJASPQXMAMBFBTYETOGZZLSJNYPSHSUFNEFWGGMXIIRKDBSQHDYGFEQSIGTXBGZELOYNCYXUWUVAVGCWLTJFHGZUPIZLTNUXOHZXBEJVFETQALUMMTCCBWYCXWTJGXHSSWDRDSVKKRLRVQJOCRQMHQPDCZKRXFWOVRKIIA");
    tmp_msg_0.state = 199U;
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
    msg.setTimeStamp(0.6344312399396949);
    msg.setSource(57053U);
    msg.setSourceEntity(229U);
    msg.setDestination(13504U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.4632464125897596);
    msg.setSource(18138U);
    msg.setSourceEntity(187U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.9535230422827432);
    msg.setSource(9327U);
    msg.setSourceEntity(105U);
    msg.setDestination(19108U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.10732396339968131);
    msg.setSource(55149U);
    msg.setSourceEntity(29U);
    msg.setDestination(47773U);
    msg.setDestinationEntity(75U);
    msg.list.assign("QPDWSUPVTTUDCKXTWDQBYBWPLFNJMHIAJMHVMGECEDETBNWFPAYNXDIQRALZZJUUUDXFGEOOTBEFIQMCJZRUHPUIAGLVDKMJFCSJGZSWQRXLVZEPFRYKYXPHCVBAVEXYUGMMGTXOYXLDKNMREQLTSNCDBUJWHVMASLNZEKFOAITRSPIMCRFRBSKPDWKSUYOFAKQNHBYJWTHORLB");

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
    msg.setTimeStamp(0.22926494565978106);
    msg.setSource(57225U);
    msg.setSourceEntity(227U);
    msg.setDestination(2178U);
    msg.setDestinationEntity(161U);
    msg.list.assign("GBRJRIQEIKBHVILMFIYDAGJLQNPJXCRFLHGLUUKOKYNXNCMBPKITGARQKNZUEPHTPYJATIQOBFHZTUSMZNZRSSSICAWXJGOKKWWGRUVDRBBJLTEZPAQCPNJLDSDOQCCVDMUYHPDSBLFMESOFVBEWZYUSDEDCLAKOIVGZTVLENWXXJFIWQZQYBPHAYAKWCLTFRQVWGXOPVMMGONXWSTHJHOBFKVXDUWHCTNERMMHYFTEVROXDFUCAZJYYUEP");

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
    msg.setTimeStamp(0.9144865228196772);
    msg.setSource(53632U);
    msg.setSourceEntity(49U);
    msg.setDestination(15446U);
    msg.setDestinationEntity(48U);
    msg.list.assign("FUOKOUGTYCDOEJEWINZTZKWQBEB");

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
    msg.setTimeStamp(0.7107669346449433);
    msg.setSource(52389U);
    msg.setSourceEntity(134U);
    msg.setDestination(10075U);
    msg.setDestinationEntity(108U);
    msg.value = 16999;

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
    msg.setTimeStamp(0.20490188619370586);
    msg.setSource(29475U);
    msg.setSourceEntity(162U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(227U);
    msg.value = 30154;

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
    msg.setTimeStamp(0.11216415724683637);
    msg.setSource(15885U);
    msg.setSourceEntity(192U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(19U);
    msg.value = -31460;

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
    msg.setTimeStamp(0.6757284150143557);
    msg.setSource(19752U);
    msg.setSourceEntity(221U);
    msg.setDestination(43827U);
    msg.setDestinationEntity(67U);
    msg.value = 0.030612502609266512;

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
    msg.setTimeStamp(0.10061860954748092);
    msg.setSource(58767U);
    msg.setSourceEntity(140U);
    msg.setDestination(27509U);
    msg.setDestinationEntity(123U);
    msg.value = 0.1282310314077032;

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
    msg.setTimeStamp(0.7781876497970512);
    msg.setSource(44312U);
    msg.setSourceEntity(103U);
    msg.setDestination(52897U);
    msg.setDestinationEntity(10U);
    msg.value = 0.9522365123606984;

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
    msg.setTimeStamp(0.45822528714885824);
    msg.setSource(42603U);
    msg.setSourceEntity(221U);
    msg.setDestination(33523U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7528284712479021;

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
    msg.setTimeStamp(0.22895881693717524);
    msg.setSource(37256U);
    msg.setSourceEntity(125U);
    msg.setDestination(62822U);
    msg.setDestinationEntity(95U);
    msg.value = 0.6469609796442122;

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
    msg.setTimeStamp(0.5371952041056549);
    msg.setSource(45265U);
    msg.setSourceEntity(67U);
    msg.setDestination(23996U);
    msg.setDestinationEntity(196U);
    msg.value = 0.699961661613634;

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
    msg.setTimeStamp(0.6582544813680055);
    msg.setSource(29587U);
    msg.setSourceEntity(88U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(100U);
    msg.validity = 53871U;
    msg.type = 204U;
    msg.utc_year = 32731U;
    msg.utc_month = 177U;
    msg.utc_day = 105U;
    msg.utc_time = 0.773248621541043;
    msg.lat = 0.7345950702438093;
    msg.lon = 0.9061724795146079;
    msg.height = 0.7068214297816211;
    msg.satellites = 216U;
    msg.cog = 0.07031358928731979;
    msg.sog = 0.05523558565800035;
    msg.hdop = 0.9854945277066992;
    msg.vdop = 0.3389372135442297;
    msg.hacc = 0.5304630094570398;
    msg.vacc = 0.5395340022188582;

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
    msg.setTimeStamp(0.21721302240403828);
    msg.setSource(40078U);
    msg.setSourceEntity(205U);
    msg.setDestination(7552U);
    msg.setDestinationEntity(194U);
    msg.validity = 57554U;
    msg.type = 88U;
    msg.utc_year = 47027U;
    msg.utc_month = 51U;
    msg.utc_day = 221U;
    msg.utc_time = 0.3248250039351879;
    msg.lat = 0.9868466162304663;
    msg.lon = 0.8092615718074766;
    msg.height = 0.7671141653591476;
    msg.satellites = 15U;
    msg.cog = 0.07545021508408145;
    msg.sog = 0.4612769293024528;
    msg.hdop = 0.36153500065618605;
    msg.vdop = 0.5890607870193939;
    msg.hacc = 0.9033107274811745;
    msg.vacc = 0.11775523096497309;

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
    msg.setTimeStamp(0.14120523062663726);
    msg.setSource(48477U);
    msg.setSourceEntity(98U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(83U);
    msg.validity = 8613U;
    msg.type = 55U;
    msg.utc_year = 65372U;
    msg.utc_month = 143U;
    msg.utc_day = 148U;
    msg.utc_time = 0.7685109232911739;
    msg.lat = 0.9507364155358159;
    msg.lon = 0.9963329355979919;
    msg.height = 0.22388485464927332;
    msg.satellites = 144U;
    msg.cog = 0.6055927646374288;
    msg.sog = 0.08036773444636036;
    msg.hdop = 0.0501780581722866;
    msg.vdop = 0.4454740858569798;
    msg.hacc = 0.8472039444527233;
    msg.vacc = 0.22507194675777065;

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
    msg.setTimeStamp(0.6889600141398061);
    msg.setSource(61555U);
    msg.setSourceEntity(47U);
    msg.setDestination(24427U);
    msg.setDestinationEntity(35U);
    msg.time = 0.9229005613839337;
    msg.phi = 0.6156606846268897;
    msg.theta = 0.6931330600502322;
    msg.psi = 0.586393475343052;
    msg.psi_magnetic = 0.882285715564122;

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
    msg.setTimeStamp(0.6009597132068523);
    msg.setSource(53469U);
    msg.setSourceEntity(147U);
    msg.setDestination(28598U);
    msg.setDestinationEntity(82U);
    msg.time = 0.09672962318214451;
    msg.phi = 0.7775133984407893;
    msg.theta = 0.7562060022944898;
    msg.psi = 0.9647418924485898;
    msg.psi_magnetic = 0.7601348943414642;

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
    msg.setTimeStamp(0.4138197213014555);
    msg.setSource(4116U);
    msg.setSourceEntity(136U);
    msg.setDestination(56593U);
    msg.setDestinationEntity(254U);
    msg.time = 0.6120216220943951;
    msg.phi = 0.9213370367329691;
    msg.theta = 0.9174718934721225;
    msg.psi = 0.8261388622538889;
    msg.psi_magnetic = 0.33598904104496297;

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
    msg.setTimeStamp(0.3286689198151259);
    msg.setSource(64344U);
    msg.setSourceEntity(221U);
    msg.setDestination(46586U);
    msg.setDestinationEntity(162U);
    msg.time = 0.11914299836596254;
    msg.x = 0.1916410407376079;
    msg.y = 0.2034408390765443;
    msg.z = 0.3388482440861553;
    msg.timestep = 0.9088687552616144;

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
    msg.setTimeStamp(0.4412306443982953);
    msg.setSource(52945U);
    msg.setSourceEntity(155U);
    msg.setDestination(35925U);
    msg.setDestinationEntity(67U);
    msg.time = 0.7572663251706131;
    msg.x = 0.5741145600395187;
    msg.y = 0.9071709683285645;
    msg.z = 0.34817242035531215;
    msg.timestep = 0.3202576947442429;

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
    msg.setTimeStamp(0.15265735717601892);
    msg.setSource(30506U);
    msg.setSourceEntity(169U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(77U);
    msg.time = 0.8003539673475992;
    msg.x = 0.7824196763437395;
    msg.y = 0.794719533217524;
    msg.z = 0.7382791533538923;
    msg.timestep = 0.8169474191194954;

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
    msg.setTimeStamp(0.8640380545474531);
    msg.setSource(19576U);
    msg.setSourceEntity(83U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(158U);
    msg.time = 0.7131834711052925;
    msg.x = 0.34256054566652194;
    msg.y = 0.5729108728654155;
    msg.z = 0.1641575087834677;

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
    msg.setTimeStamp(0.2618886895604836);
    msg.setSource(46102U);
    msg.setSourceEntity(144U);
    msg.setDestination(14815U);
    msg.setDestinationEntity(182U);
    msg.time = 0.003236331195472175;
    msg.x = 0.255924926201035;
    msg.y = 0.6179829622686274;
    msg.z = 0.040456373181817495;

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
    msg.setTimeStamp(0.916837633681728);
    msg.setSource(1895U);
    msg.setSourceEntity(189U);
    msg.setDestination(60873U);
    msg.setDestinationEntity(203U);
    msg.time = 0.5040547351978758;
    msg.x = 0.21156051767372652;
    msg.y = 0.23322464373109641;
    msg.z = 0.7687356419046119;

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
    msg.setTimeStamp(0.07750999728497443);
    msg.setSource(50260U);
    msg.setSourceEntity(44U);
    msg.setDestination(58612U);
    msg.setDestinationEntity(18U);
    msg.time = 0.8089979851691523;
    msg.x = 0.3380904679381439;
    msg.y = 0.2391567068393865;
    msg.z = 0.992045339647262;

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
    msg.setTimeStamp(0.9411461875166381);
    msg.setSource(6537U);
    msg.setSourceEntity(69U);
    msg.setDestination(15405U);
    msg.setDestinationEntity(212U);
    msg.time = 0.8697744476022092;
    msg.x = 0.5147421450716965;
    msg.y = 0.41229778275587414;
    msg.z = 0.7569344482295436;

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
    msg.setTimeStamp(0.9953090384544984);
    msg.setSource(35799U);
    msg.setSourceEntity(18U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(180U);
    msg.time = 0.209936763394601;
    msg.x = 0.2329508361645748;
    msg.y = 0.8026876218143343;
    msg.z = 0.9588484917102346;

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
    msg.setTimeStamp(0.9720844857654213);
    msg.setSource(6293U);
    msg.setSourceEntity(134U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(166U);
    msg.time = 0.48789744445325556;
    msg.x = 0.6914911823621563;
    msg.y = 0.45012176095845435;
    msg.z = 0.8592391179190049;

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
    msg.setTimeStamp(0.9114448832093461);
    msg.setSource(51548U);
    msg.setSourceEntity(223U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(145U);
    msg.time = 0.3124898293759584;
    msg.x = 0.5613362629503699;
    msg.y = 0.37941398644079316;
    msg.z = 0.9459527566400329;

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
    msg.setTimeStamp(0.3184523097512273);
    msg.setSource(12268U);
    msg.setSourceEntity(194U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(178U);
    msg.time = 0.7376795167273623;
    msg.x = 0.8761999240321852;
    msg.y = 0.07393665427777107;
    msg.z = 0.30786650505581215;

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
    msg.setTimeStamp(0.015766467489043534);
    msg.setSource(46424U);
    msg.setSourceEntity(76U);
    msg.setDestination(16473U);
    msg.setDestinationEntity(7U);
    msg.validity = 172U;
    msg.x = 0.250900225205808;
    msg.y = 0.32630847171026534;
    msg.z = 0.10691532704225537;

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
    msg.setTimeStamp(0.1792139821185882);
    msg.setSource(43623U);
    msg.setSourceEntity(35U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(171U);
    msg.validity = 93U;
    msg.x = 0.9800742629556897;
    msg.y = 0.8491507264196627;
    msg.z = 0.06572288126815562;

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
    msg.setTimeStamp(0.34741416855941776);
    msg.setSource(39396U);
    msg.setSourceEntity(185U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(99U);
    msg.validity = 222U;
    msg.x = 0.9960863775490304;
    msg.y = 0.43807294784715944;
    msg.z = 0.7451041863262238;

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
    msg.setTimeStamp(0.6973062128113676);
    msg.setSource(9517U);
    msg.setSourceEntity(86U);
    msg.setDestination(28851U);
    msg.setDestinationEntity(136U);
    msg.validity = 203U;
    msg.x = 0.7341457719730472;
    msg.y = 0.8523352838172933;
    msg.z = 0.9781915077712495;

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
    msg.setTimeStamp(0.5987978582955826);
    msg.setSource(8362U);
    msg.setSourceEntity(2U);
    msg.setDestination(57553U);
    msg.setDestinationEntity(82U);
    msg.validity = 226U;
    msg.x = 0.16585686118015697;
    msg.y = 0.7274543575337246;
    msg.z = 0.9129663532128032;

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
    msg.setTimeStamp(0.6626277276148994);
    msg.setSource(7839U);
    msg.setSourceEntity(87U);
    msg.setDestination(56648U);
    msg.setDestinationEntity(164U);
    msg.validity = 47U;
    msg.x = 0.7163913529942141;
    msg.y = 0.13741677801256735;
    msg.z = 0.6019366545783228;

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
    msg.setTimeStamp(0.4743358913033102);
    msg.setSource(4118U);
    msg.setSourceEntity(69U);
    msg.setDestination(26557U);
    msg.setDestinationEntity(194U);
    msg.time = 0.6785221300070474;
    msg.x = 0.7503688695085498;
    msg.y = 0.8578720187859005;
    msg.z = 0.7890592593681871;

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
    msg.setTimeStamp(0.9698979273655808);
    msg.setSource(10344U);
    msg.setSourceEntity(74U);
    msg.setDestination(16855U);
    msg.setDestinationEntity(222U);
    msg.time = 0.9624637740558917;
    msg.x = 0.3013308224925978;
    msg.y = 0.9915221357694762;
    msg.z = 0.9543354628134906;

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
    msg.setTimeStamp(0.19383752055446812);
    msg.setSource(234U);
    msg.setSourceEntity(200U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(212U);
    msg.time = 0.3479614579596785;
    msg.x = 0.8374544842047152;
    msg.y = 0.4219429437338663;
    msg.z = 0.33034733583099796;

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
    msg.setTimeStamp(0.027722320720362292);
    msg.setSource(50786U);
    msg.setSourceEntity(252U);
    msg.setDestination(24839U);
    msg.setDestinationEntity(160U);
    msg.validity = 113U;
    msg.value = 0.5997843094697786;

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
    msg.setTimeStamp(0.47608877414572703);
    msg.setSource(55482U);
    msg.setSourceEntity(93U);
    msg.setDestination(48154U);
    msg.setDestinationEntity(15U);
    msg.validity = 196U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5892558501714581;
    tmp_msg_0.beam_height = 0.8730918253009624;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6907371369784785;

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
    msg.setTimeStamp(0.5433289917881927);
    msg.setSource(50972U);
    msg.setSourceEntity(9U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(144U);
    msg.validity = 196U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8050671633335742;
    tmp_msg_0.y = 0.8415247910002828;
    tmp_msg_0.z = 0.6807255723984281;
    tmp_msg_0.phi = 0.878717709118509;
    tmp_msg_0.theta = 0.08980828909871241;
    tmp_msg_0.psi = 0.8604774421724286;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.04083368640907703;

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
    msg.setTimeStamp(0.09979719304196377);
    msg.setSource(29472U);
    msg.setSourceEntity(105U);
    msg.setDestination(28659U);
    msg.setDestinationEntity(7U);
    msg.value = 0.598735109334948;

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
    msg.setTimeStamp(0.8206698229045662);
    msg.setSource(14702U);
    msg.setSourceEntity(81U);
    msg.setDestination(57973U);
    msg.setDestinationEntity(178U);
    msg.value = 0.620183210695469;

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
    msg.setTimeStamp(0.793526642449141);
    msg.setSource(11006U);
    msg.setSourceEntity(51U);
    msg.setDestination(49276U);
    msg.setDestinationEntity(78U);
    msg.value = 0.5793641192210268;

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
    msg.setTimeStamp(0.5136342259848486);
    msg.setSource(63979U);
    msg.setSourceEntity(109U);
    msg.setDestination(14337U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9392309012452594;

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
    msg.setTimeStamp(0.25638783535879683);
    msg.setSource(8536U);
    msg.setSourceEntity(106U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(249U);
    msg.value = 0.8391213245903566;

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
    msg.setTimeStamp(0.34976541787530735);
    msg.setSource(50731U);
    msg.setSourceEntity(154U);
    msg.setDestination(59073U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5350017006701737;

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
    msg.setTimeStamp(0.23151293064161327);
    msg.setSource(64538U);
    msg.setSourceEntity(224U);
    msg.setDestination(62524U);
    msg.setDestinationEntity(115U);
    msg.value = 0.48319917128380574;

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
    msg.setTimeStamp(0.15653908892296808);
    msg.setSource(11106U);
    msg.setSourceEntity(57U);
    msg.setDestination(28471U);
    msg.setDestinationEntity(27U);
    msg.value = 0.25057761338925544;

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
    msg.setTimeStamp(0.29741839639374457);
    msg.setSource(41024U);
    msg.setSourceEntity(165U);
    msg.setDestination(47426U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7571748380133984;

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
    msg.setTimeStamp(0.5442819992635995);
    msg.setSource(54536U);
    msg.setSourceEntity(94U);
    msg.setDestination(50258U);
    msg.setDestinationEntity(43U);
    msg.value = 0.5292261159467289;

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
    msg.setTimeStamp(0.7409240933607122);
    msg.setSource(59472U);
    msg.setSourceEntity(117U);
    msg.setDestination(36043U);
    msg.setDestinationEntity(62U);
    msg.value = 0.40089181888710235;

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
    msg.setTimeStamp(0.44244717877932993);
    msg.setSource(48523U);
    msg.setSourceEntity(119U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(128U);
    msg.value = 0.05187966354138751;

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
    msg.setTimeStamp(0.4778350555024923);
    msg.setSource(17716U);
    msg.setSourceEntity(143U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8817572522160246;

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
    msg.setTimeStamp(0.7733720969319972);
    msg.setSource(38568U);
    msg.setSourceEntity(77U);
    msg.setDestination(43848U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9327816388625355;

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
    msg.setTimeStamp(0.3023579266633951);
    msg.setSource(59469U);
    msg.setSourceEntity(79U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(50U);
    msg.value = 0.09734864871702853;

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
    msg.setTimeStamp(0.8571012886683439);
    msg.setSource(59890U);
    msg.setSourceEntity(240U);
    msg.setDestination(26276U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5258003952298644;

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
    msg.setTimeStamp(0.4338994546637994);
    msg.setSource(19282U);
    msg.setSourceEntity(70U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3214068169200821;

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
    msg.setTimeStamp(0.27067300334990174);
    msg.setSource(6353U);
    msg.setSourceEntity(156U);
    msg.setDestination(53202U);
    msg.setDestinationEntity(44U);
    msg.value = 0.6937673903951636;

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
    msg.setTimeStamp(0.884247958189959);
    msg.setSource(56970U);
    msg.setSourceEntity(48U);
    msg.setDestination(51386U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0012738552258696467;

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
    msg.setTimeStamp(0.3996780993961768);
    msg.setSource(16269U);
    msg.setSourceEntity(23U);
    msg.setDestination(13050U);
    msg.setDestinationEntity(186U);
    msg.value = 0.23777478956611875;

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
    msg.setTimeStamp(0.5731994322321882);
    msg.setSource(2487U);
    msg.setSourceEntity(87U);
    msg.setDestination(10896U);
    msg.setDestinationEntity(174U);
    msg.value = 0.25682563230912403;

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
    msg.setTimeStamp(0.41411365409038714);
    msg.setSource(4847U);
    msg.setSourceEntity(107U);
    msg.setDestination(7117U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9982867904283602;

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
    msg.setTimeStamp(0.7601010059844272);
    msg.setSource(63475U);
    msg.setSourceEntity(173U);
    msg.setDestination(38938U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7560796466965062;

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
    msg.setTimeStamp(0.8048823278497538);
    msg.setSource(65230U);
    msg.setSourceEntity(182U);
    msg.setDestination(62745U);
    msg.setDestinationEntity(93U);
    msg.value = 0.15035439496996517;

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
    msg.setTimeStamp(0.3733436870018033);
    msg.setSource(19768U);
    msg.setSourceEntity(253U);
    msg.setDestination(28807U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.641537535872192;
    msg.speed = 0.34503864447663224;
    msg.turbulence = 0.12724053520266843;

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
    msg.setTimeStamp(0.13353735885996287);
    msg.setSource(40314U);
    msg.setSourceEntity(184U);
    msg.setDestination(47306U);
    msg.setDestinationEntity(202U);
    msg.direction = 0.8009741728699494;
    msg.speed = 0.6339751109446091;
    msg.turbulence = 0.6828437240062378;

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
    msg.setTimeStamp(0.442152162939935);
    msg.setSource(43309U);
    msg.setSourceEntity(49U);
    msg.setDestination(43282U);
    msg.setDestinationEntity(60U);
    msg.direction = 0.3902024946083581;
    msg.speed = 0.6813040323214355;
    msg.turbulence = 0.6976971064851668;

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
    msg.setTimeStamp(0.47919188558995873);
    msg.setSource(10651U);
    msg.setSourceEntity(251U);
    msg.setDestination(56157U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6465636148670131;

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
    msg.setTimeStamp(0.32391323490766366);
    msg.setSource(13931U);
    msg.setSourceEntity(159U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8742305284534981;

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
    msg.setTimeStamp(0.488644397840555);
    msg.setSource(42749U);
    msg.setSourceEntity(63U);
    msg.setDestination(2923U);
    msg.setDestinationEntity(71U);
    msg.value = 0.39536004032881555;

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
    msg.setTimeStamp(0.45358334134808764);
    msg.setSource(55655U);
    msg.setSourceEntity(22U);
    msg.setDestination(40500U);
    msg.setDestinationEntity(116U);
    msg.value.assign("XOCZYARYWZHYFZQYXHAVCDJZXTEYOEKTLWGGDUVQJSSYICRZBVZOXFNKBDHHDWIGZDNHZJJOLSTBEQOSHRMUPBRCPSEOKKIYKMSTAUAPBPMULEIZQOUTWWOTVZRKXBHFFGTXWFLDAVQCSTFBCNVGIDLBMGNDQWEALVUDKRLEXHWQNJPAIFLMCAKUMAYGBRNX");

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
    msg.setTimeStamp(0.32824645448387746);
    msg.setSource(58629U);
    msg.setSourceEntity(196U);
    msg.setDestination(51483U);
    msg.setDestinationEntity(218U);
    msg.value.assign("TOKQNNKBVH");

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
    msg.setTimeStamp(0.48504198929468734);
    msg.setSource(39137U);
    msg.setSourceEntity(33U);
    msg.setDestination(50810U);
    msg.setDestinationEntity(54U);
    msg.value.assign("CRRXWUIPKUWBNNRZQZVVVZRLQMHZXFDRSSPCOMZUEQLKJFDKOPMCZ");

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
    msg.setTimeStamp(0.019014218784656145);
    msg.setSource(30120U);
    msg.setSourceEntity(39U);
    msg.setDestination(54956U);
    msg.setDestinationEntity(75U);
    const char tmp_msg_0[] = {-33, -104, 2, 17, -24, 8, -7, -9, 108, 109};
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
    msg.setTimeStamp(0.2624976039152107);
    msg.setSource(20657U);
    msg.setSourceEntity(133U);
    msg.setDestination(9632U);
    msg.setDestinationEntity(156U);
    const char tmp_msg_0[] = {101, -122, -98, -103, 69, 30, -81, -35, 76, 20, -33, 29, 34, -44, -57, 107, -5, -93, 107, -113, 119, 27, 63, 29, 16, 58, 69, 114, 50, -85, 58, -97, -37, -58, 98, 50, 123, -23, 58, 100, 116, -81, 91, 99, -22, 44, 112, -55, 41, -33};
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
    msg.setTimeStamp(0.4137400576436495);
    msg.setSource(56847U);
    msg.setSourceEntity(93U);
    msg.setDestination(52229U);
    msg.setDestinationEntity(210U);
    const char tmp_msg_0[] = {110, 26, -74, -20, -4, 14, 28, -58, -100, 107, 78, 2, -33, 51, -105, -95, -82, 0, 96, -7, -47, -25, -69, 113, 70, 19, 49, -93, 48, 2, 87, -28, 53, -104, -123, 96, -109, -43, -31, -63, -28, -46, 117, -127, -128, 26, 45, -114, -13, -101, -31, -128, 51, 63, -38, 70, 28, 45, 53, 101, -111, -14, 21, 22, 23, -52, 31, 53, -26, -44, 38, -74, 117, -21, -24, -98, -67, 9, -34, -86, 106, 33, 115, 111, -5, 25, 8, 61, 98, 51, -49, 89, 40, 28, -55, -59, -42, 115, -35, -89, 124, -31, 13, -32, 81, -115, -28, -48, 86, -38, 68, -54, -62, -19, -87, -53, -18, -51, 51, 47, -10, -78, 87, -23, 108, -38, 108, -34, 64, -34, 118, -32, -94, 93, 115, -60, 59, 119, 47, 25, 12, 78, -71, 86, -41, 45, 95, -14, -57, 6, 30, 88, 19, 97, 37, 56, 45, -67, 69, -53, 18, -70, 61, -88, 67, -16, 22, -33, -65, 56, -85, 31, 97, -44, -69, -53, -15, 106, 68, -54, -73, -43, 83, 8, 86, 100, 65, 119, 125, 106, 41, 5, -116, -21, -66, 56, 91, 69, -66, -97, -13, 4, 96, -110, 75, 79, 107, 35, 68, -128, 44, 96, 96, -10, -57, -48, -85, 57, 26, -2, 21, 77, -27, 66, 121};
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
    msg.setTimeStamp(0.6610863021572676);
    msg.setSource(14127U);
    msg.setSourceEntity(13U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(63U);
    msg.type = 218U;
    msg.frequency = 2615132575U;
    msg.min_range = 65097U;
    msg.max_range = 10696U;
    msg.bits_per_point = 166U;
    msg.scale_factor = 0.22068733976397792;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5343544701197586;
    tmp_msg_0.beam_height = 0.8830748386751192;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-78, -61, -30, 96, 0, 89, -82, -42, 69, 89, -126, 41, -79, 20, -73, -78, 50, -30, -27, 81, -99, -1, -1, 26, 35, 69, 92, 60, -5, -51, -92, -29, -55, 69, -25, 58, -29, 58, 30, 99, 78, 62, 100, 36, -25, -7, 73, 22, -12, 91, -123, 9, 35, -112, 70, 53, -10, -109, -7, 60, 123, -10, -81, 44, 106, 25, -14, 40, 80, 78, 93, -10, 55, 120, 24, -122, -27, -49, -72, -39, 57, 92, -63, -24, 110, -124, 88, -4, -40, -62, 100, 95, 4, -29, -89, 87, -22, 89, -123, -38, 109, 32, 15, -30, -57, -42, -12, -75, 55, 103, 115, 104, -89, -99, -106, -87, -84, -3, -128, 26, -42, 118, 105, 87, -75, 22, 72, -56, -13, 111, 25, -81, 45, -51, 77, -4, -68, -32, 125, 105, 68, 67, 62, 98, -13, -4, -7, -101, -113, -45, -123, -84, -125, -92, -20, -84, -89, 0, 51, 36, -30, 50, -62, -36, -10, 97, -61, 54, 118, -54, -28, -102, -49, 93, -116, -40, -110, 36, -103, -103, 99, 34, -38, -64, 114, -92, -16, 102, 3, 100, 83, -20, -10, 5};
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
    msg.setTimeStamp(0.3479149431154027);
    msg.setSource(14569U);
    msg.setSourceEntity(148U);
    msg.setDestination(29392U);
    msg.setDestinationEntity(52U);
    msg.type = 71U;
    msg.frequency = 3937437853U;
    msg.min_range = 31509U;
    msg.max_range = 3200U;
    msg.bits_per_point = 254U;
    msg.scale_factor = 0.3837027349530725;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.13749102339329267;
    tmp_msg_0.beam_height = 0.1335069451928852;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-124, 118, -86, 1, 107, 80, 16, -72, -14, 13, 126, -63, 125, 58, 113, -17, 123, 116, -63, -74, -10, 76, -33, -107, 3, 27, -14, -77, 51, 64, 48, 16, -43, -52, 27, -128, 53, -12, -116, -106, 40, 74, -58, 125, -79, -23, -19, -40, 69, 10, -86, -114, -63, 111, 20, 45, -13, -87, -38, -110, 104, -24, 72, -71, -20, 103, -88, 123, -109, -71, -14, 44, 13, 92, 46, -16, -107, 109, -74, 86, 20, 10, 71, 48, -50, 123, -45, -53, -66, -93, 32, 39, -21, -91, 19, -35, 24, 7, -57, -10, -69};
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
    msg.setTimeStamp(0.0408087850076827);
    msg.setSource(60648U);
    msg.setSourceEntity(77U);
    msg.setDestination(10903U);
    msg.setDestinationEntity(191U);
    msg.type = 77U;
    msg.frequency = 2876579267U;
    msg.min_range = 52719U;
    msg.max_range = 2630U;
    msg.bits_per_point = 22U;
    msg.scale_factor = 0.847311003456088;
    const char tmp_msg_0[] = {110, 75, -69, 35, -1, 12, 106, -21, 67, -67, -12, -33, 51, -6, -59, 112, 42, -56, 117, 116, 30, -21, 33, -87, 106, 122, 81, -64, 8, -102, -14, -64, 95, 64, -118, -109, -74, 102, -94, 90, -65, -74, 88, -70, 31, 112, -106, 15, 101, -117, 113, -47, 14, 7, -56, -107, -61, -15, -30, -46, -67, -128, -98, -20, 54, 66, -36, 40, -31, 124, 125, 94, 71, -70, 16, 88, -111, -119, -101, 6, -120, -109, 29, -53, -113, 24, 30, -63, 61, -94, -47, -75, -55, -71, 100, 97, 30, -21, 88, 39, -108, -62, -74, -73, -20, 103, 95, 23, -113, 16, -114, 14, -77, 50, 8, 93, -11, 117, 59, 44, -53, -106, -93, 65, 31, -45, -56, -118, -113, -101, -86, 40, -33, -71, -21, -3, -74, 55, -49, -114, -52, -50, 77, -86, -100, 121, -109, 9, 23, -32, 36, -75, -40, -114, -85, -97, -56, 42, -26, 101, -113, -71, -120, 112, 6, -125, -13, -112, 23, -98, 61, 126, 81, 28, 122, 33, 47, -62, -77, 15, 47, -3, -118, -20, -77, 19, -55};
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
    msg.setTimeStamp(0.5318480085760929);
    msg.setSource(17010U);
    msg.setSourceEntity(126U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.11119005427847006);
    msg.setSource(11760U);
    msg.setSourceEntity(185U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.19120286623539362);
    msg.setSource(62296U);
    msg.setSourceEntity(170U);
    msg.setDestination(52194U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.22041631135108897);
    msg.setSource(34345U);
    msg.setSourceEntity(201U);
    msg.setDestination(59658U);
    msg.setDestinationEntity(71U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.5057807584129691);
    msg.setSource(42395U);
    msg.setSourceEntity(81U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(1U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.87467111785698);
    msg.setSource(62224U);
    msg.setSourceEntity(59U);
    msg.setDestination(26066U);
    msg.setDestinationEntity(80U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.06458722345643353);
    msg.setSource(23504U);
    msg.setSourceEntity(132U);
    msg.setDestination(36416U);
    msg.setDestinationEntity(47U);
    msg.value = 0.3452863412910573;
    msg.confidence = 0.9492438505703186;
    msg.opmodes.assign("BCDZDSWMYFVYHHIFXKCGLPSGGBTOCEKIWLJDVHLVREEOVFQBZGDJDDRVACWYQRQVIKEOGQPSNWZZDMIBUBXSLTMCFWNAXBUBJENNEKWMAEQJBHWXPDYHYOANPLERPHTXVZZIJMXMJCMCMSFTAUKTHQLRESAMIUUTNQWRKKJCCUVQIY");

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
    msg.setTimeStamp(0.21971862073266712);
    msg.setSource(52609U);
    msg.setSourceEntity(200U);
    msg.setDestination(48795U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9005297680845851;
    msg.confidence = 0.992650227788278;
    msg.opmodes.assign("VGQLHMFMMQRTZJKQKWNTHFVBUIMDZRXCWNCCAPUZLATMVWRHIVEDAXSQQKRGKJJSABNSBOPPJFPPBKLSIEMFYZYIXGXZJWGOFADXEWSNIKEGAGBGICZFQUYVEHCYOTDPLYRMYRVFKHQLOBLNDSBLNXRQNHDORUMLVTPTWDCOYI");

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
    msg.setTimeStamp(0.28275542800904263);
    msg.setSource(1483U);
    msg.setSourceEntity(243U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4448708328184986;
    msg.confidence = 0.9262537217629999;
    msg.opmodes.assign("ZTCLZGFBOGNBLCJNAIBREUVRQWUVZETQF");

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
    msg.setTimeStamp(0.07482712050338647);
    msg.setSource(55940U);
    msg.setSourceEntity(78U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(59U);
    msg.itow = 958423057U;
    msg.lat = 0.04040527290777263;
    msg.lon = 0.36383093119104193;
    msg.height_ell = 0.2855639456095791;
    msg.height_sea = 0.24590513067337771;
    msg.hacc = 0.3316238498738381;
    msg.vacc = 0.2987024249476947;
    msg.vel_n = 0.35283733389223737;
    msg.vel_e = 0.720608269531216;
    msg.vel_d = 0.07148445467284759;
    msg.speed = 0.32286660757666874;
    msg.gspeed = 0.7472415918951879;
    msg.heading = 0.01718719253240697;
    msg.sacc = 0.7828522268702993;
    msg.cacc = 0.31633836840638807;

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
    msg.setTimeStamp(0.6731809864171048);
    msg.setSource(34351U);
    msg.setSourceEntity(140U);
    msg.setDestination(7527U);
    msg.setDestinationEntity(207U);
    msg.itow = 2325002213U;
    msg.lat = 0.10962324067454898;
    msg.lon = 0.8001147794839463;
    msg.height_ell = 0.16942494639639083;
    msg.height_sea = 0.1369991149777693;
    msg.hacc = 0.549015862600727;
    msg.vacc = 0.39729171224468074;
    msg.vel_n = 0.441193016263982;
    msg.vel_e = 0.29523290226969434;
    msg.vel_d = 0.7465505961691286;
    msg.speed = 0.532052313794214;
    msg.gspeed = 0.5980090999448555;
    msg.heading = 0.29411721472823316;
    msg.sacc = 0.3451361273671335;
    msg.cacc = 0.9636731330102125;

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
    msg.setTimeStamp(0.9147696711947183);
    msg.setSource(37208U);
    msg.setSourceEntity(102U);
    msg.setDestination(994U);
    msg.setDestinationEntity(126U);
    msg.itow = 2541156067U;
    msg.lat = 0.557922484539469;
    msg.lon = 0.5410561046943957;
    msg.height_ell = 0.360625470862181;
    msg.height_sea = 0.9164696629146092;
    msg.hacc = 0.6097548095761176;
    msg.vacc = 0.7169144887756388;
    msg.vel_n = 0.1521691844168237;
    msg.vel_e = 0.41019931771924156;
    msg.vel_d = 0.7845114009215463;
    msg.speed = 0.5550295860009435;
    msg.gspeed = 0.7125239777901538;
    msg.heading = 0.6225960718763559;
    msg.sacc = 0.3622004274378655;
    msg.cacc = 0.41474990995888406;

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
    msg.setTimeStamp(0.31335032294831977);
    msg.setSource(40001U);
    msg.setSourceEntity(139U);
    msg.setDestination(55146U);
    msg.setDestinationEntity(244U);
    msg.id = 72U;
    msg.value = 0.7997429677551203;

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
    msg.setTimeStamp(0.2633613050379079);
    msg.setSource(44488U);
    msg.setSourceEntity(128U);
    msg.setDestination(42381U);
    msg.setDestinationEntity(152U);
    msg.id = 129U;
    msg.value = 0.46034984882213503;

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
    msg.setTimeStamp(0.4267855482958628);
    msg.setSource(33630U);
    msg.setSourceEntity(105U);
    msg.setDestination(13375U);
    msg.setDestinationEntity(154U);
    msg.id = 32U;
    msg.value = 0.6169858302825604;

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
    msg.setTimeStamp(0.7288884058683116);
    msg.setSource(4294U);
    msg.setSourceEntity(118U);
    msg.setDestination(50736U);
    msg.setDestinationEntity(149U);
    msg.x = 0.7551532317071498;
    msg.y = 0.37498274261252496;
    msg.z = 0.8947756978123719;
    msg.phi = 0.6211948047336351;
    msg.theta = 0.5096409402008732;
    msg.psi = 0.7854340232632371;

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
    msg.setTimeStamp(0.0918527582711246);
    msg.setSource(53070U);
    msg.setSourceEntity(178U);
    msg.setDestination(10035U);
    msg.setDestinationEntity(116U);
    msg.x = 0.9648701028954817;
    msg.y = 0.5225554645974135;
    msg.z = 0.8137614637220915;
    msg.phi = 0.27143714308122036;
    msg.theta = 0.3541738656048985;
    msg.psi = 0.9794897208744173;

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
    msg.setTimeStamp(0.6205688559604413);
    msg.setSource(44338U);
    msg.setSourceEntity(129U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(240U);
    msg.x = 0.0378250008890072;
    msg.y = 0.8418137113838904;
    msg.z = 0.012821094273430256;
    msg.phi = 0.18740573019779982;
    msg.theta = 0.9028064220352416;
    msg.psi = 0.043703165834423574;

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
    msg.setTimeStamp(0.9317216878735053);
    msg.setSource(53541U);
    msg.setSourceEntity(192U);
    msg.setDestination(34356U);
    msg.setDestinationEntity(249U);
    msg.beam_width = 0.6759141427823687;
    msg.beam_height = 0.10699767118028203;

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
    msg.setTimeStamp(0.8092270529973961);
    msg.setSource(33685U);
    msg.setSourceEntity(231U);
    msg.setDestination(29611U);
    msg.setDestinationEntity(82U);
    msg.beam_width = 6.680936723735265e-06;
    msg.beam_height = 0.3566422717413048;

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
    msg.setTimeStamp(0.305250812647876);
    msg.setSource(23869U);
    msg.setSourceEntity(104U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(71U);
    msg.beam_width = 0.17984888251252895;
    msg.beam_height = 0.4202099728488068;

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
    msg.setTimeStamp(0.27598672010358816);
    msg.setSource(5993U);
    msg.setSourceEntity(35U);
    msg.setDestination(42740U);
    msg.setDestinationEntity(26U);
    msg.sane = 131U;

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
    msg.setTimeStamp(0.4304451293885522);
    msg.setSource(59660U);
    msg.setSourceEntity(224U);
    msg.setDestination(11009U);
    msg.setDestinationEntity(82U);
    msg.sane = 42U;

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
    msg.setTimeStamp(0.4936476001316974);
    msg.setSource(9709U);
    msg.setSourceEntity(94U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(147U);
    msg.sane = 26U;

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
    msg.setTimeStamp(0.5209153676504913);
    msg.setSource(51302U);
    msg.setSourceEntity(130U);
    msg.setDestination(35125U);
    msg.setDestinationEntity(36U);
    msg.value = 0.2263872171962591;

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
    msg.setTimeStamp(0.6154341829234136);
    msg.setSource(62876U);
    msg.setSourceEntity(218U);
    msg.setDestination(48293U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5025606156209882;

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
    msg.setTimeStamp(0.8841969827325878);
    msg.setSource(61322U);
    msg.setSourceEntity(143U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(206U);
    msg.value = 0.46269338368431345;

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
    msg.setTimeStamp(0.38964656239278717);
    msg.setSource(5370U);
    msg.setSourceEntity(60U);
    msg.setDestination(346U);
    msg.setDestinationEntity(181U);
    msg.value = 0.19447250314191877;

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
    msg.setTimeStamp(0.5516270994233544);
    msg.setSource(6829U);
    msg.setSourceEntity(36U);
    msg.setDestination(27446U);
    msg.setDestinationEntity(202U);
    msg.value = 0.1493876739745097;

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
    msg.setTimeStamp(0.7895188422833159);
    msg.setSource(23309U);
    msg.setSourceEntity(3U);
    msg.setDestination(19449U);
    msg.setDestinationEntity(97U);
    msg.value = 0.3135852615398347;

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
    msg.setTimeStamp(0.8705076473219654);
    msg.setSource(61147U);
    msg.setSourceEntity(36U);
    msg.setDestination(8697U);
    msg.setDestinationEntity(102U);
    msg.value = 0.750409356335054;

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
    msg.setTimeStamp(0.6499337865980096);
    msg.setSource(54952U);
    msg.setSourceEntity(104U);
    msg.setDestination(31602U);
    msg.setDestinationEntity(238U);
    msg.value = 0.5061277783868592;

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
    msg.setTimeStamp(0.5045651391884569);
    msg.setSource(34794U);
    msg.setSourceEntity(153U);
    msg.setDestination(55063U);
    msg.setDestinationEntity(34U);
    msg.value = 0.5902257071687165;

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
    msg.setTimeStamp(0.4456319202180057);
    msg.setSource(44003U);
    msg.setSourceEntity(171U);
    msg.setDestination(18528U);
    msg.setDestinationEntity(81U);
    msg.value = 0.10414560991603938;

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
    msg.setTimeStamp(0.585840579738713);
    msg.setSource(12382U);
    msg.setSourceEntity(129U);
    msg.setDestination(39654U);
    msg.setDestinationEntity(73U);
    msg.value = 0.9586573998607716;

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
    msg.setTimeStamp(0.15445617816842838);
    msg.setSource(59814U);
    msg.setSourceEntity(252U);
    msg.setDestination(7407U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6424539769222845;

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
    msg.setTimeStamp(0.9849379759917015);
    msg.setSource(56016U);
    msg.setSourceEntity(105U);
    msg.setDestination(23193U);
    msg.setDestinationEntity(193U);
    msg.id = 235U;
    msg.zoom = 125U;
    msg.action = 186U;

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
    msg.setTimeStamp(0.929424364532937);
    msg.setSource(8331U);
    msg.setSourceEntity(242U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(89U);
    msg.id = 213U;
    msg.zoom = 147U;
    msg.action = 81U;

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
    msg.setTimeStamp(0.4156305651007566);
    msg.setSource(54371U);
    msg.setSourceEntity(133U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(94U);
    msg.id = 138U;
    msg.zoom = 182U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.6581241387401957);
    msg.setSource(62881U);
    msg.setSourceEntity(57U);
    msg.setDestination(33915U);
    msg.setDestinationEntity(129U);
    msg.id = 190U;
    msg.value = 0.7101926963247286;

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
    msg.setTimeStamp(0.4079663997187587);
    msg.setSource(54290U);
    msg.setSourceEntity(186U);
    msg.setDestination(47205U);
    msg.setDestinationEntity(2U);
    msg.id = 104U;
    msg.value = 0.2893079706329986;

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
    msg.setTimeStamp(0.6835966696150574);
    msg.setSource(59635U);
    msg.setSourceEntity(85U);
    msg.setDestination(59529U);
    msg.setDestinationEntity(164U);
    msg.id = 14U;
    msg.value = 0.7901667991522239;

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
    msg.setTimeStamp(0.09395236911227034);
    msg.setSource(12154U);
    msg.setSourceEntity(142U);
    msg.setDestination(45729U);
    msg.setDestinationEntity(197U);
    msg.id = 199U;
    msg.value = 0.3874662400290412;

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
    msg.setTimeStamp(0.08017354405680399);
    msg.setSource(10748U);
    msg.setSourceEntity(218U);
    msg.setDestination(34916U);
    msg.setDestinationEntity(207U);
    msg.id = 76U;
    msg.value = 0.9678630041589562;

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
    msg.setTimeStamp(0.9212609190908773);
    msg.setSource(15918U);
    msg.setSourceEntity(235U);
    msg.setDestination(29754U);
    msg.setDestinationEntity(6U);
    msg.id = 112U;
    msg.value = 0.2844507061093047;

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
    msg.setTimeStamp(0.6157009489167823);
    msg.setSource(2039U);
    msg.setSourceEntity(139U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(235U);
    msg.id = 12U;
    msg.angle = 0.6391579024280434;

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
    msg.setTimeStamp(0.8730779819965883);
    msg.setSource(27705U);
    msg.setSourceEntity(60U);
    msg.setDestination(4247U);
    msg.setDestinationEntity(63U);
    msg.id = 223U;
    msg.angle = 0.7705009365897307;

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
    msg.setTimeStamp(0.7506953302093995);
    msg.setSource(724U);
    msg.setSourceEntity(96U);
    msg.setDestination(51417U);
    msg.setDestinationEntity(206U);
    msg.id = 100U;
    msg.angle = 0.5700227848684777;

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
    msg.setTimeStamp(0.7944930154359661);
    msg.setSource(55433U);
    msg.setSourceEntity(146U);
    msg.setDestination(30434U);
    msg.setDestinationEntity(24U);
    msg.op = 114U;
    msg.actions.assign("KCIPBBAEIMKQLCFUASSRIQNHMQRKAYGGMLYQOZSJZACBQERIPFTKNRUUFBBDYNVHXUEWOPLQVNSZNSNVVSTEFHEUXIYHBJFHJFZLGOATJSYKMEBQXMMDDWMWWCDKLYQTJMIFLVOJLZSEZRIDAAEKIGGTRGNOYILRUVCSLRDAHLXCKBNHPZFKPEYCTWYHTDPECZUXWJDVIRMPHUTQPVXGGFOFYGJWOXB");

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
    msg.setTimeStamp(0.4383337522796198);
    msg.setSource(26126U);
    msg.setSourceEntity(32U);
    msg.setDestination(12418U);
    msg.setDestinationEntity(3U);
    msg.op = 73U;
    msg.actions.assign("AHJDCGKMYGQFIDXDVHIISZCWMWNFWZMVEELEV");

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
    msg.setTimeStamp(0.9906335892206132);
    msg.setSource(55702U);
    msg.setSourceEntity(28U);
    msg.setDestination(51346U);
    msg.setDestinationEntity(4U);
    msg.op = 200U;
    msg.actions.assign("YVILBNCUDYKKFBXBQCODIZWASDJWYSPNVARTRJPACHHGWKJCXESWSLJIJVWNXVTRKRKUILERPFSXOVFPUUJOGLKZATTUFRNSWHPNKTGNAIESLMBVRZLYJSJECKTYTFQBJEXBOQEMATWQHPYKYMQVZZERMOMSHKANYMDVLCMBFUTBQGZHGCGQHJWPXCXUEHBFNMF");

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
    msg.setTimeStamp(0.24281905058711306);
    msg.setSource(56756U);
    msg.setSourceEntity(70U);
    msg.setDestination(26847U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("FOHXXPXHJCIFISTLQCLZOUNTJIAAMTIJRVGBKNYEMRYOAMYQVFAAJFPKSERSRVHQZQFBPGVLYDDDWHZISACYUVPXMLTEXKLXWHVUULBTVKGVJKWCNMZZYJEWWONXAFWPVYJFUEPXJKHGHZGDOEYGRCCZCTDBMNNZISKCBWIWTRFPIMOLJRQRQATKOADQQDZBNPOGADYKBISGOMBTBLUWMEGHUNHJSFSSZRXMDNEWPUDPCO");

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
    msg.setTimeStamp(0.6509524474475674);
    msg.setSource(57228U);
    msg.setSourceEntity(103U);
    msg.setDestination(1147U);
    msg.setDestinationEntity(163U);
    msg.actions.assign("MWRQNHCSRYJZJIJYDTOOCKCRLVAHCFBFOTEINMHYLNGMWHDVMSQPIJXGAKYKVBIPGDDPPYBMEPSGHDBUWALHKQKGJLFABTHXSGROCDAUQXOMHOJEDVZQVFEASQLASXTPCZBNMIQBBDPEAYOYTTVWJWVVLJTJALRUQQJYPZENWXKFWAMUEMHKPBNCCZUTSIKPCXNWDXBRSIUYGROKYFFREROEOGIKLQVGFX");

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
    msg.setTimeStamp(0.37229718964980674);
    msg.setSource(20330U);
    msg.setSourceEntity(42U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("LLKEAWZSYAVUSLGQRVYCMILVRBYBUJTYJFQQKENLAFPAOBQJRXMKYNINBRGHXFSFLODWGJLCTWPHNZMWJCPVPGVDUXFBWPCIQJHBXJHEXFZDBYZGJHMNLKHUUGQEUDSNQRZGZOZRMTYTIPTBCG");

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
    msg.setTimeStamp(0.5682091226775685);
    msg.setSource(58052U);
    msg.setSourceEntity(135U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(49U);
    msg.button = 104U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.34386009146080243);
    msg.setSource(12398U);
    msg.setSourceEntity(126U);
    msg.setDestination(12943U);
    msg.setDestinationEntity(197U);
    msg.button = 237U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.603718646247929);
    msg.setSource(9401U);
    msg.setSourceEntity(104U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(185U);
    msg.button = 159U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.5552254790896739);
    msg.setSource(55511U);
    msg.setSourceEntity(20U);
    msg.setDestination(57316U);
    msg.setDestinationEntity(73U);
    msg.op = 118U;
    msg.text.assign("LZDOTMBVEGKFLRHYKVUDMUVTSJYMYCYERZHOZRQGEBVIFUMRLMXETQIEJUPDAWXNNJMFBAPELKUCPWCIDNCGXMXFIHMOKBEOGAHGAWCISOTNTKEAIZXPBFAYCSNJSKTDRHGHQRXIQTIPDKFJRGRCUGDXNVWYAGFCSWTQLLHNLYFXZOFTPKQXRBSNJBASSVOOEUSZGUAQJHPMHRQHZXSKYYMDZIQLCLOPWVAJYCPWZUBBNQPKUVNZODJVWJI");

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
    msg.setTimeStamp(0.46848613009431095);
    msg.setSource(28253U);
    msg.setSourceEntity(30U);
    msg.setDestination(10407U);
    msg.setDestinationEntity(81U);
    msg.op = 9U;
    msg.text.assign("UNJTZSZPBXMTBGPIOONBPILHHUUWBSDSLXSDVMMZXMQDSKONTQRDEQBPIORIJLYROKACKCEHFCYKZIKTWFZDIA");

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
    msg.setTimeStamp(0.8474407627914663);
    msg.setSource(39015U);
    msg.setSourceEntity(180U);
    msg.setDestination(58917U);
    msg.setDestinationEntity(7U);
    msg.op = 92U;
    msg.text.assign("PFIKACHCKLKZWLBIAEZSNOYEFJYUEGBHOV");

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
    msg.setTimeStamp(0.525819816669599);
    msg.setSource(12160U);
    msg.setSourceEntity(113U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(193U);
    msg.op = 211U;
    msg.time_remain = 0.08492191929721737;
    msg.sched_time = 0.9726883479829541;

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
    msg.setTimeStamp(0.32142652434829333);
    msg.setSource(4950U);
    msg.setSourceEntity(239U);
    msg.setDestination(32928U);
    msg.setDestinationEntity(123U);
    msg.op = 116U;
    msg.time_remain = 0.9420345342404958;
    msg.sched_time = 0.33940687835397654;

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
    msg.setTimeStamp(0.6264895436612686);
    msg.setSource(4504U);
    msg.setSourceEntity(250U);
    msg.setDestination(13595U);
    msg.setDestinationEntity(1U);
    msg.op = 93U;
    msg.time_remain = 0.23393796773794928;
    msg.sched_time = 0.5155891193836856;

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
    msg.setTimeStamp(0.5334822906677259);
    msg.setSource(48308U);
    msg.setSourceEntity(37U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(210U);
    msg.name.assign("HIWMHZZNEUMFIKDYTBKYBUHHTCFYGYJAYXMCDLCNWFPQRPRQWLWQHRTZSSEMGGJVAPVBXKPULAHYNNIVSWWFHMIKEFQUZWBRBURTOEFZQBSNTICFXDSJKXPBYOADBMMZJPCNDTMVIOGDAPAIGDROYF");
    msg.op = 23U;
    msg.sched_time = 0.18799060409083745;

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
    msg.setTimeStamp(0.026855395122506676);
    msg.setSource(54340U);
    msg.setSourceEntity(27U);
    msg.setDestination(41700U);
    msg.setDestinationEntity(206U);
    msg.name.assign("BJHPJFFKQDYNWWTJDEVAWTZAGMCKJVTBFQLDLFZFIYLBBNGSROOWPPXKJGVUKKCZFEGYFLEYFYICTKEDVNRGHJDXRVINRGIYTQNOVACEQOJXHFCVHOUGKDKAEJLHOFUWICIPURJMKICIYSUGTLSRCXTGHQSTAXWMBHPYHNOQDPRNSLUEXXMJAEOTMRSCABZZN");
    msg.op = 210U;
    msg.sched_time = 0.5721236486128642;

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
    msg.setTimeStamp(0.9536065737015348);
    msg.setSource(23691U);
    msg.setSourceEntity(30U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(210U);
    msg.name.assign("GVVGSQKRGWWJWHMDHSCLVKWHLYUZVOEZOHERRJMFPOUYLOLSJSCVZGVHKTMJWGEEUYDJXTNXIYPKBXTUKZXDWXAXHTQBBAQUEZFEVIIMGIZKQGJVSPYXBZUUCSCQZBTRENAHHMQOPKAXCWFANMQITAKOTSDCQKFOVRHPRQYMDIWSYLERZTAQYULFRBVI");
    msg.op = 221U;
    msg.sched_time = 0.8478675758150614;

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
    msg.setTimeStamp(0.25736758654957814);
    msg.setSource(53949U);
    msg.setSourceEntity(178U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.628913784014207);
    msg.setSource(17376U);
    msg.setSourceEntity(96U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.9523826025245794);
    msg.setSource(26164U);
    msg.setSourceEntity(1U);
    msg.setDestination(24524U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.031449990613199974);
    msg.setSource(16256U);
    msg.setSourceEntity(176U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(131U);
    msg.name.assign("HGNRPAYKQYUUYVDRMNKWRPLWRLJHBVGFBQAAERREQFIYBTCGMODXOKTKXPAUAVBHKNANKIWTCJZRSMFKLDJLXICSRVYVRAWOVJFPYENLGBYOMUCKCW");
    msg.state = 217U;

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
    msg.setTimeStamp(0.6273244422410081);
    msg.setSource(61887U);
    msg.setSourceEntity(19U);
    msg.setDestination(55719U);
    msg.setDestinationEntity(251U);
    msg.name.assign("CHPMSWSTBHSHUDXDFJDJKMIRBCJZFVBEWZPRZLUANWALYCTDOBBWEKYKJBGJSDKPAIMLGHTPXEDQODUJPQCAM");
    msg.state = 220U;

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
    msg.setTimeStamp(0.6047948021905448);
    msg.setSource(50470U);
    msg.setSourceEntity(233U);
    msg.setDestination(41773U);
    msg.setDestinationEntity(184U);
    msg.name.assign("SYNVXOXIRDIBHPEHEFMLFSPFKGCMXONUSZYZGAVXAKCIXKIWSPFSRJWTNMVXKSYAWXLJUSVPYDRCCYEWUVUJVQDDZBYRONOAQRQQCIISXWHLGMHY");
    msg.state = 142U;

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
    msg.setTimeStamp(0.616480266949724);
    msg.setSource(39281U);
    msg.setSourceEntity(14U);
    msg.setDestination(30100U);
    msg.setDestinationEntity(134U);
    msg.name.assign("GNHFHTNTKVHEHRXSTVTXGKBMSGDVGHBEYHPJTCLJMXBAEONAQWEAIIKSUXEEBIGRTILWMYRCXHXRTYDSWOONPFHYKPNGDMWFRYWWQTGSIWJLQCLFA");
    msg.value = 50U;

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
    msg.setTimeStamp(0.47329095312933644);
    msg.setSource(983U);
    msg.setSourceEntity(163U);
    msg.setDestination(37343U);
    msg.setDestinationEntity(183U);
    msg.name.assign("MTJXSIKGEVURBFKHOQQMLEAOJHYOFCUYZADHFUIVTYMSMNOFSNXARIGKHARWDAHYTRWIEUFKVKSCOYZNXVGZGWGZZWQGXEPZQDJPOKPLRLZAEFLOJCMITVWZLWJNBLYPBHCBQHJFIMAFGJEVMXZLPTEXMNNJIPXBPSJYLSCAYGFDTPCDQKDJDBNUKXMVUDTCSUENTEHWQVRRCOIRHCGASMARV");
    msg.value = 153U;

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
    msg.setTimeStamp(0.7716496097051216);
    msg.setSource(30425U);
    msg.setSourceEntity(228U);
    msg.setDestination(245U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WFJWEKFOKDQINOKLIBWHGOGXMHVBWZNQTDQMTIPVPITEPACLZQBHZPWGBBMLJPHYPPOGOVOXCMRHRUARJDYWDMSQBMXZVPJFWFHKIMTCKJLJAUDYGSOTGUNRUSDYYAARRDYEYUNAPZBSHAXJHSKSCBIEDEYXUMMXGMJHUFRTVTNRQEOWIDUTCZTXLGQANUXQEWZ");
    msg.value = 82U;

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
    msg.setTimeStamp(0.4290895383189415);
    msg.setSource(27202U);
    msg.setSourceEntity(17U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JYKZWYVWFAZQHUWCBVNCPQNFSTYHYULDOPNNCOKWEGZTMQTMNOVXLUIVKTEWQSXZDJKPEBBXCIKSGBMGXZCAHXJXIDPBLJPYHYRUMZANWLTUZRNHTKNGWFIILASEEBDJXUKNYJKKTVAGRIOCVBHYODQ");

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
    msg.setTimeStamp(0.04694961340278636);
    msg.setSource(24538U);
    msg.setSourceEntity(153U);
    msg.setDestination(6443U);
    msg.setDestinationEntity(214U);
    msg.name.assign("HGTZQFAMDNZNSCVVXDBFHRKSWPACYOTWCYBQHIKLFBRBJGTEXYVODDMHTDKIAPNFUMUEOFGRLEZFKWQKLVOZXJGLAIBKNYJMSJNHYSRGSTZCBSOOOEPBGTDRVCAFXRTPYKYIXLGVRIJVUHMRQIZCUSBQIWZNMMMDLFCPCEZUVKJWUWNDDWLWPGO");

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
    msg.setTimeStamp(0.7753796266823797);
    msg.setSource(42090U);
    msg.setSourceEntity(123U);
    msg.setDestination(32005U);
    msg.setDestinationEntity(93U);
    msg.name.assign("HKJFJQCKSLVONSYNCAVEPGNQCTSDXBMRKBLEXEZYLVUMPFWINEXBGRMUFBRNVTQMKYXCFJVLBDLTJQTDHLINYYAWXEHYEXGOOMVLNSZAMYUIQSOHMYLPCKHJXHJJARRWSMUDDPELUIQCBCPTCVRGAZOFQDWWPSIOBGWGZETRMGGLTAMHJUAUOJFKRABNQYXPDVU");

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
    msg.setTimeStamp(0.12235555795273201);
    msg.setSource(62827U);
    msg.setSourceEntity(180U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(230U);
    msg.name.assign("KOJVBIFKDBOWBEPCUIPYKDQSUDLQOBIMGSVGFNUYJBADTOJCT");
    msg.value = 11U;

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
    msg.setTimeStamp(0.0016941780603413337);
    msg.setSource(605U);
    msg.setSourceEntity(170U);
    msg.setDestination(62711U);
    msg.setDestinationEntity(71U);
    msg.name.assign("QCUNSDRWSFRSAGCEWNYPGZRHPHWVSPGYUIFWKBPEWLNCYPOBHFCCIIRVAHIOATLDOMOWCLAKGBQZJQXJHLNJMVVNXFZEEPXNIKXGBEYIQZQKXKVSBMMRAAJBJUDMTEWKMQZFSDTCLEOZDPVAFCYZRHHYMPXGXLJ");
    msg.value = 122U;

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
    msg.setTimeStamp(0.4902566395000615);
    msg.setSource(24367U);
    msg.setSourceEntity(133U);
    msg.setDestination(21722U);
    msg.setDestinationEntity(24U);
    msg.name.assign("GGHIWVISHVYUOLLVLKZZCNRRXMFPKGTFQNBBOYECOEFQWLJDLUYLSUGIOFWJJSJCNHHEXXBISBUDGRQRUMYXIZHNPQTKZJDFXNJSZOXUSVCAMJF");
    msg.value = 212U;

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
    msg.setTimeStamp(0.3835708928568209);
    msg.setSource(8840U);
    msg.setSourceEntity(249U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(166U);
    msg.id = 48U;
    msg.period = 3361516169U;
    msg.duty_cycle = 2432070873U;

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
    msg.setTimeStamp(0.059794320006740564);
    msg.setSource(51118U);
    msg.setSourceEntity(191U);
    msg.setDestination(42944U);
    msg.setDestinationEntity(240U);
    msg.id = 11U;
    msg.period = 817441585U;
    msg.duty_cycle = 3502242584U;

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
    msg.setTimeStamp(0.8302436920452954);
    msg.setSource(42691U);
    msg.setSourceEntity(116U);
    msg.setDestination(5687U);
    msg.setDestinationEntity(92U);
    msg.id = 207U;
    msg.period = 1685259897U;
    msg.duty_cycle = 3497647365U;

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
    msg.setTimeStamp(0.14837285881941287);
    msg.setSource(64478U);
    msg.setSourceEntity(251U);
    msg.setDestination(48115U);
    msg.setDestinationEntity(130U);
    msg.id = 91U;
    msg.period = 4137315189U;
    msg.duty_cycle = 2333540196U;

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
    msg.setTimeStamp(0.9146411839665854);
    msg.setSource(59289U);
    msg.setSourceEntity(6U);
    msg.setDestination(22856U);
    msg.setDestinationEntity(36U);
    msg.id = 117U;
    msg.period = 2528595813U;
    msg.duty_cycle = 316360132U;

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
    msg.setTimeStamp(0.5683387094237731);
    msg.setSource(14271U);
    msg.setSourceEntity(41U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(234U);
    msg.id = 33U;
    msg.period = 745395129U;
    msg.duty_cycle = 1625630461U;

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
    msg.setTimeStamp(0.18922374413897491);
    msg.setSource(18173U);
    msg.setSourceEntity(133U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.21487580824059893;
    msg.lon = 0.4292061244889911;
    msg.height = 0.9167074172291108;
    msg.x = 0.005964563621352337;
    msg.y = 0.1847079558489091;
    msg.z = 0.3584013786653557;
    msg.phi = 0.13006436165984525;
    msg.theta = 0.9825321590308319;
    msg.psi = 0.26984920056628015;
    msg.u = 0.1756947101147769;
    msg.v = 0.7433173632684971;
    msg.w = 0.440809003070907;
    msg.vx = 0.9596576049715132;
    msg.vy = 0.4112072919212191;
    msg.vz = 0.0775419780157256;
    msg.p = 0.43920643037345475;
    msg.q = 0.3730183630690117;
    msg.r = 0.19527072243340649;
    msg.depth = 0.6394015297865376;
    msg.alt = 0.5381349925711832;

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
    msg.setTimeStamp(0.21357140553612974);
    msg.setSource(59279U);
    msg.setSourceEntity(211U);
    msg.setDestination(12952U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.9073378544267672;
    msg.lon = 0.12681962262217505;
    msg.height = 0.8975319360016601;
    msg.x = 0.7823885856863446;
    msg.y = 0.06133308466622045;
    msg.z = 0.6893816203887493;
    msg.phi = 0.4633273658316982;
    msg.theta = 0.7209695170614173;
    msg.psi = 0.5795675197451499;
    msg.u = 0.31607775099124413;
    msg.v = 0.0027201331119879324;
    msg.w = 0.4740372295970827;
    msg.vx = 0.6707795207616344;
    msg.vy = 0.9824968082884887;
    msg.vz = 0.7914248304338053;
    msg.p = 0.8574045959387137;
    msg.q = 0.9227378942987949;
    msg.r = 0.9010756216633717;
    msg.depth = 0.19978776532073006;
    msg.alt = 0.6025913325717547;

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
    msg.setTimeStamp(7.001869453637788e-05);
    msg.setSource(30963U);
    msg.setSourceEntity(218U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.9039876766022179;
    msg.lon = 0.31242627931783895;
    msg.height = 0.38286530791934126;
    msg.x = 0.15449136082565917;
    msg.y = 0.056027744881449015;
    msg.z = 0.05551441278419467;
    msg.phi = 0.710779942411072;
    msg.theta = 0.2348012432186336;
    msg.psi = 0.5661234038358021;
    msg.u = 0.6815515794293425;
    msg.v = 0.026973198950054234;
    msg.w = 0.8271508329514179;
    msg.vx = 0.8793398227458332;
    msg.vy = 0.30705403521931474;
    msg.vz = 0.25149218961169806;
    msg.p = 0.35391937183485433;
    msg.q = 0.03417571033790734;
    msg.r = 0.8951849065892579;
    msg.depth = 0.4674611222370316;
    msg.alt = 0.5923319148770233;

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
    msg.setTimeStamp(0.5287255711580636);
    msg.setSource(52714U);
    msg.setSourceEntity(61U);
    msg.setDestination(27497U);
    msg.setDestinationEntity(99U);
    msg.x = 0.43825971911803185;
    msg.y = 0.47687722165284097;
    msg.z = 0.21394343032420393;

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
    msg.setTimeStamp(0.5171224011770543);
    msg.setSource(12571U);
    msg.setSourceEntity(17U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(138U);
    msg.x = 0.09224772884424637;
    msg.y = 0.798452530605559;
    msg.z = 0.6828233654554074;

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
    msg.setTimeStamp(0.2874948961332976);
    msg.setSource(24514U);
    msg.setSourceEntity(90U);
    msg.setDestination(47674U);
    msg.setDestinationEntity(136U);
    msg.x = 0.7679651958633674;
    msg.y = 0.9651583387140376;
    msg.z = 0.9719739241328135;

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
    msg.setTimeStamp(0.315083036552681);
    msg.setSource(21769U);
    msg.setSourceEntity(127U);
    msg.setDestination(15878U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9821731170073602;

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
    msg.setTimeStamp(0.1594650085596494);
    msg.setSource(29074U);
    msg.setSourceEntity(35U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8181818881399544;

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
    msg.setTimeStamp(0.8858159218271731);
    msg.setSource(33778U);
    msg.setSourceEntity(158U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3330320220658819;

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
    msg.setTimeStamp(0.04050021102994006);
    msg.setSource(3660U);
    msg.setSourceEntity(123U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(236U);
    msg.value = 0.96395371049369;

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
    msg.setTimeStamp(0.7255560603015873);
    msg.setSource(30816U);
    msg.setSourceEntity(140U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(177U);
    msg.value = 0.3228516203761733;

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
    msg.setTimeStamp(0.8853690437421737);
    msg.setSource(9122U);
    msg.setSourceEntity(238U);
    msg.setDestination(15794U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6806555944511105;

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
    msg.setTimeStamp(0.745400040145908);
    msg.setSource(29605U);
    msg.setSourceEntity(57U);
    msg.setDestination(62227U);
    msg.setDestinationEntity(178U);
    msg.x = 0.019809521419989484;
    msg.y = 0.3024028805007861;
    msg.z = 0.1447607082852831;
    msg.phi = 0.002232081360511895;
    msg.theta = 0.7348842401619277;
    msg.psi = 0.542247770035398;
    msg.p = 0.6851726243866082;
    msg.q = 0.9370819997960627;
    msg.r = 0.49382348248603547;
    msg.u = 0.5815383788698784;
    msg.v = 0.5612456819366329;
    msg.w = 0.738847703895179;
    msg.bias_psi = 0.9209040979823139;
    msg.bias_r = 0.9616784150923624;

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
    msg.setTimeStamp(0.5403053120732895);
    msg.setSource(27946U);
    msg.setSourceEntity(16U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(104U);
    msg.x = 0.8218424043362793;
    msg.y = 0.6251453763930722;
    msg.z = 0.4273705237395772;
    msg.phi = 0.11755226371018701;
    msg.theta = 0.26494002604309186;
    msg.psi = 0.04233328306035011;
    msg.p = 0.22372010174276147;
    msg.q = 0.3751887405994935;
    msg.r = 0.8663972560078123;
    msg.u = 0.36958387875350174;
    msg.v = 0.06249876934201082;
    msg.w = 0.5834529179369068;
    msg.bias_psi = 0.4221821140071581;
    msg.bias_r = 0.6069876278788413;

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
    msg.setTimeStamp(0.6066009195358564);
    msg.setSource(40953U);
    msg.setSourceEntity(179U);
    msg.setDestination(7763U);
    msg.setDestinationEntity(214U);
    msg.x = 0.8506435436039039;
    msg.y = 0.7303159501291088;
    msg.z = 0.7443137833899115;
    msg.phi = 0.18873883566714023;
    msg.theta = 0.8904289088015538;
    msg.psi = 0.6668175533268358;
    msg.p = 0.6498408681669208;
    msg.q = 0.07108367850804864;
    msg.r = 0.6352106435466286;
    msg.u = 0.05197878657759891;
    msg.v = 0.3287720650140824;
    msg.w = 0.41955976456419575;
    msg.bias_psi = 0.697092111896909;
    msg.bias_r = 0.07715274892383173;

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
    msg.setTimeStamp(0.8355420572256018);
    msg.setSource(56078U);
    msg.setSourceEntity(50U);
    msg.setDestination(19350U);
    msg.setDestinationEntity(154U);
    msg.bias_psi = 0.7398333390634011;
    msg.bias_r = 0.41128500463522644;
    msg.cog = 0.41466373982510696;
    msg.cyaw = 0.15188179532472001;
    msg.lbl_rej_level = 0.41101166666866695;
    msg.gps_rej_level = 0.34632384810356576;
    msg.custom_x = 0.06112319821119949;
    msg.custom_y = 0.9173866697013141;
    msg.custom_z = 0.11467994371528856;

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
    msg.setTimeStamp(0.8406503396901799);
    msg.setSource(17906U);
    msg.setSourceEntity(188U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(81U);
    msg.bias_psi = 0.4072003838068944;
    msg.bias_r = 0.4208397030859189;
    msg.cog = 0.7181410514064157;
    msg.cyaw = 0.3361182050581535;
    msg.lbl_rej_level = 0.5103031005644979;
    msg.gps_rej_level = 0.7083021721612204;
    msg.custom_x = 0.9320266027388168;
    msg.custom_y = 0.8812960764057782;
    msg.custom_z = 0.015319773015181393;

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
    msg.setTimeStamp(0.27651135869817156);
    msg.setSource(35827U);
    msg.setSourceEntity(143U);
    msg.setDestination(3912U);
    msg.setDestinationEntity(23U);
    msg.bias_psi = 0.6482368443876373;
    msg.bias_r = 0.14161926937989933;
    msg.cog = 0.8153914656438732;
    msg.cyaw = 0.5659041385247946;
    msg.lbl_rej_level = 0.07539856930552857;
    msg.gps_rej_level = 0.6585255067501536;
    msg.custom_x = 0.26411547221235954;
    msg.custom_y = 0.558437376649451;
    msg.custom_z = 0.3173003125719548;

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
    msg.setTimeStamp(0.5284333334363915);
    msg.setSource(16916U);
    msg.setSourceEntity(63U);
    msg.setDestination(35352U);
    msg.setDestinationEntity(205U);
    msg.utc_time = 0.34890045915152523;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.7546635916151877);
    msg.setSource(61973U);
    msg.setSourceEntity(252U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(180U);
    msg.utc_time = 0.6966706881810828;
    msg.reason = 115U;

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
    msg.setTimeStamp(0.787994104667519);
    msg.setSource(21207U);
    msg.setSourceEntity(170U);
    msg.setDestination(62729U);
    msg.setDestinationEntity(72U);
    msg.utc_time = 0.164351539035843;
    msg.reason = 56U;

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
    msg.setTimeStamp(0.4438777207931687);
    msg.setSource(7637U);
    msg.setSourceEntity(33U);
    msg.setDestination(50700U);
    msg.setDestinationEntity(158U);
    msg.id = 78U;
    msg.range = 0.9564493006375991;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.14728660575296548);
    msg.setSource(15930U);
    msg.setSourceEntity(207U);
    msg.setDestination(58428U);
    msg.setDestinationEntity(84U);
    msg.id = 194U;
    msg.range = 0.006706208364725907;
    msg.acceptance = 196U;

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
    msg.setTimeStamp(0.058730275892192374);
    msg.setSource(19259U);
    msg.setSourceEntity(212U);
    msg.setDestination(30125U);
    msg.setDestinationEntity(237U);
    msg.id = 14U;
    msg.range = 0.7883242478142981;
    msg.acceptance = 185U;

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
    msg.setTimeStamp(0.8175750519884833);
    msg.setSource(3340U);
    msg.setSourceEntity(169U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(100U);
    msg.type = 141U;
    msg.reason = 11U;
    msg.value = 0.45727570023924624;
    msg.timestep = 0.4552932257034257;

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
    msg.setTimeStamp(0.19603467832012322);
    msg.setSource(35961U);
    msg.setSourceEntity(37U);
    msg.setDestination(61659U);
    msg.setDestinationEntity(88U);
    msg.type = 198U;
    msg.reason = 161U;
    msg.value = 0.40680277956517497;
    msg.timestep = 0.06253962032332838;

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
    msg.setTimeStamp(0.78610265945188);
    msg.setSource(28062U);
    msg.setSourceEntity(136U);
    msg.setDestination(9943U);
    msg.setDestinationEntity(215U);
    msg.type = 4U;
    msg.reason = 96U;
    msg.value = 0.7184282138010417;
    msg.timestep = 0.21516823274089203;

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
    msg.setTimeStamp(0.4883587591039037);
    msg.setSource(34806U);
    msg.setSourceEntity(222U);
    msg.setDestination(33356U);
    msg.setDestinationEntity(151U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KPIWUSGBHWMMBJGLXBUCSXKWZHVQLLXZLPHUXVVMIFFNAE");
    tmp_msg_0.lat = 0.26040038127069987;
    tmp_msg_0.lon = 0.8055849505116769;
    tmp_msg_0.depth = 0.7858661571344797;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 62U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8590731247257362;
    msg.y = 0.08150394703734853;
    msg.var_x = 0.11582903419554369;
    msg.var_y = 0.5185561081315888;
    msg.distance = 0.31625217748906786;

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
    msg.setTimeStamp(0.5926896679337756);
    msg.setSource(3816U);
    msg.setSourceEntity(143U);
    msg.setDestination(51922U);
    msg.setDestinationEntity(179U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AWANMEBYSVNHOJUFU");
    tmp_msg_0.lat = 0.19737822676576766;
    tmp_msg_0.lon = 0.5704813440512144;
    tmp_msg_0.depth = 0.07210246933082931;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 87U;
    tmp_msg_0.transponder_delay = 218U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7250313341094357;
    msg.y = 0.43620801896252137;
    msg.var_x = 0.05467733682402354;
    msg.var_y = 0.7653214343001056;
    msg.distance = 0.9665828741775809;

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
    msg.setTimeStamp(0.47102339090656764);
    msg.setSource(53944U);
    msg.setSourceEntity(208U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(96U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TAALOVLBPITMEYMHPPSGJBAQQNBOMVYZTHVJFFFTKCCIXMVSKHEPHYOAEFSHNXESDAFIWUJQQUECMDHBOQHGKNQOPGQEBWDCDXNYXICYKIFKFIOZCWZJKCVJAZLKCUVYDUEWBTGFTGJIFPRM");
    tmp_msg_0.lat = 0.39062041892122434;
    tmp_msg_0.lon = 0.1681425947196038;
    tmp_msg_0.depth = 0.9519816718104378;
    tmp_msg_0.query_channel = 183U;
    tmp_msg_0.reply_channel = 188U;
    tmp_msg_0.transponder_delay = 99U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.09604527711135113;
    msg.y = 0.37252880128166665;
    msg.var_x = 0.5509105583666717;
    msg.var_y = 0.44864876950328725;
    msg.distance = 0.21279939156445382;

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
    msg.setTimeStamp(0.6275938745485237);
    msg.setSource(20950U);
    msg.setSourceEntity(177U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(138U);
    msg.state = 185U;

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
    msg.setTimeStamp(0.5431274106949294);
    msg.setSource(62641U);
    msg.setSourceEntity(16U);
    msg.setDestination(12667U);
    msg.setDestinationEntity(59U);
    msg.state = 214U;

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
    msg.setTimeStamp(0.053724221133163885);
    msg.setSource(15821U);
    msg.setSourceEntity(85U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(234U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.06479678207454453);
    msg.setSource(47365U);
    msg.setSourceEntity(69U);
    msg.setDestination(36102U);
    msg.setDestinationEntity(79U);
    msg.x = 0.3027464592159943;
    msg.y = 0.26958180931466935;
    msg.z = 0.6257871562666233;

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
    msg.setTimeStamp(0.6684825140806603);
    msg.setSource(42352U);
    msg.setSourceEntity(216U);
    msg.setDestination(14313U);
    msg.setDestinationEntity(217U);
    msg.x = 0.7624023862033714;
    msg.y = 0.49625332096734076;
    msg.z = 0.5047370171432858;

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
    msg.setTimeStamp(0.5165103399508859);
    msg.setSource(48916U);
    msg.setSourceEntity(2U);
    msg.setDestination(61838U);
    msg.setDestinationEntity(29U);
    msg.x = 0.4155767197940141;
    msg.y = 0.429570270825415;
    msg.z = 0.1410040276782598;

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
    msg.setTimeStamp(0.8440344900016357);
    msg.setSource(1196U);
    msg.setSourceEntity(223U);
    msg.setDestination(9490U);
    msg.setDestinationEntity(253U);
    msg.value = 0.41643925492313094;

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
    msg.setTimeStamp(0.8328686240176963);
    msg.setSource(32184U);
    msg.setSourceEntity(246U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(97U);
    msg.value = 0.15071059155057576;

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
    msg.setTimeStamp(0.48461485858286046);
    msg.setSource(55146U);
    msg.setSourceEntity(43U);
    msg.setDestination(52801U);
    msg.setDestinationEntity(43U);
    msg.value = 0.949743081226507;

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
    msg.setTimeStamp(0.18019017805943272);
    msg.setSource(20231U);
    msg.setSourceEntity(178U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(203U);
    msg.value = 0.3925164243825814;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.17675599024747446);
    msg.setSource(18930U);
    msg.setSourceEntity(61U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7620918412191522;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.013854271173185051);
    msg.setSource(56829U);
    msg.setSourceEntity(215U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8385749465836417;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.9227956573260185);
    msg.setSource(47400U);
    msg.setSourceEntity(97U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(159U);
    msg.value = 0.21034714596603932;
    msg.speed_units = 184U;

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
    msg.setTimeStamp(0.059802653230465186);
    msg.setSource(61015U);
    msg.setSourceEntity(41U);
    msg.setDestination(39161U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6575035450188019;
    msg.speed_units = 136U;

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
    msg.setTimeStamp(0.8736313805611995);
    msg.setSource(23815U);
    msg.setSourceEntity(190U);
    msg.setDestination(45222U);
    msg.setDestinationEntity(115U);
    msg.value = 0.11631668174899124;
    msg.speed_units = 226U;

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
    msg.setTimeStamp(0.8803450023259783);
    msg.setSource(65226U);
    msg.setSourceEntity(57U);
    msg.setDestination(39177U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5224792598918262;

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
    msg.setTimeStamp(0.6604980115389956);
    msg.setSource(20309U);
    msg.setSourceEntity(185U);
    msg.setDestination(41314U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5266451853599922;

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
    msg.setTimeStamp(0.32533238683985644);
    msg.setSource(56668U);
    msg.setSourceEntity(11U);
    msg.setDestination(9840U);
    msg.setDestinationEntity(191U);
    msg.value = 0.32874587760544227;

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
    msg.setTimeStamp(0.6122693551853268);
    msg.setSource(39364U);
    msg.setSourceEntity(33U);
    msg.setDestination(8445U);
    msg.setDestinationEntity(54U);
    msg.value = 0.941718138484308;

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
    msg.setTimeStamp(0.3299441212108445);
    msg.setSource(30772U);
    msg.setSourceEntity(97U);
    msg.setDestination(37996U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9744917960402482;

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
    msg.setTimeStamp(0.9719779575881012);
    msg.setSource(2967U);
    msg.setSourceEntity(175U);
    msg.setDestination(5248U);
    msg.setDestinationEntity(49U);
    msg.value = 0.24201866907161496;

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
    msg.setTimeStamp(0.6100428764238216);
    msg.setSource(58494U);
    msg.setSourceEntity(68U);
    msg.setDestination(3186U);
    msg.setDestinationEntity(151U);
    msg.value = 0.6125279003615199;

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
    msg.setTimeStamp(0.5168787452232001);
    msg.setSource(59010U);
    msg.setSourceEntity(103U);
    msg.setDestination(30765U);
    msg.setDestinationEntity(14U);
    msg.value = 0.047735024525046965;

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
    msg.setTimeStamp(0.12106756118619921);
    msg.setSource(8721U);
    msg.setSourceEntity(229U);
    msg.setDestination(3969U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6552406045838938;

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
    msg.setTimeStamp(0.5758170168018669);
    msg.setSource(55075U);
    msg.setSourceEntity(64U);
    msg.setDestination(60172U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 3540189339U;
    msg.start_lat = 0.4187185732563413;
    msg.start_lon = 0.7485141376234636;
    msg.start_z = 0.2870484453673219;
    msg.start_z_units = 88U;
    msg.end_lat = 0.15311805586403426;
    msg.end_lon = 0.3656440980634955;
    msg.end_z = 0.09771757536279568;
    msg.end_z_units = 230U;
    msg.speed = 0.7021460426895757;
    msg.speed_units = 58U;
    msg.lradius = 0.004839487486541172;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.03751555882287938);
    msg.setSource(62956U);
    msg.setSourceEntity(49U);
    msg.setDestination(32008U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 4279065011U;
    msg.start_lat = 0.27404193131525567;
    msg.start_lon = 0.2697923523340834;
    msg.start_z = 0.9611725901900214;
    msg.start_z_units = 142U;
    msg.end_lat = 0.5025523841982363;
    msg.end_lon = 0.3235455913960875;
    msg.end_z = 0.88131532282764;
    msg.end_z_units = 242U;
    msg.speed = 0.7757039206838284;
    msg.speed_units = 192U;
    msg.lradius = 0.19000047414031807;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.0006670835738913361);
    msg.setSource(61362U);
    msg.setSourceEntity(144U);
    msg.setDestination(3558U);
    msg.setDestinationEntity(158U);
    msg.path_ref = 314551052U;
    msg.start_lat = 0.6055630928031458;
    msg.start_lon = 0.1527399236925786;
    msg.start_z = 0.2835862466514283;
    msg.start_z_units = 53U;
    msg.end_lat = 0.7428570979547358;
    msg.end_lon = 0.6638263858464929;
    msg.end_z = 0.31721407678216473;
    msg.end_z_units = 70U;
    msg.speed = 0.8970258636203888;
    msg.speed_units = 235U;
    msg.lradius = 0.055064146586356943;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.22844545032082753);
    msg.setSource(7040U);
    msg.setSourceEntity(65U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(243U);
    msg.x = 0.9134354265394881;
    msg.y = 0.8166894159409591;
    msg.z = 0.45973962574658433;
    msg.k = 0.395641671044337;
    msg.m = 0.7249008940939761;
    msg.n = 0.24159563892425984;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.9991346315836814);
    msg.setSource(15675U);
    msg.setSourceEntity(130U);
    msg.setDestination(8023U);
    msg.setDestinationEntity(183U);
    msg.x = 0.7023524920396204;
    msg.y = 0.17086942427753182;
    msg.z = 0.2619009492895603;
    msg.k = 0.8694643109672937;
    msg.m = 0.4380629266064182;
    msg.n = 0.27802906516043724;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.8199259239588691);
    msg.setSource(22169U);
    msg.setSourceEntity(141U);
    msg.setDestination(47723U);
    msg.setDestinationEntity(251U);
    msg.x = 0.9899225933803001;
    msg.y = 0.8041432194164334;
    msg.z = 0.4425590265304956;
    msg.k = 0.21111150638213305;
    msg.m = 0.1732495316802104;
    msg.n = 0.9999944637200833;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.9387508149829982);
    msg.setSource(10156U);
    msg.setSourceEntity(65U);
    msg.setDestination(15977U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7135286435221027;

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
    msg.setTimeStamp(0.018451890492782952);
    msg.setSource(31571U);
    msg.setSourceEntity(65U);
    msg.setDestination(41596U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5108992380003149;

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
    msg.setTimeStamp(0.2606990741107085);
    msg.setSource(64525U);
    msg.setSourceEntity(1U);
    msg.setDestination(48391U);
    msg.setDestinationEntity(208U);
    msg.value = 0.19829279305429015;

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
    msg.setTimeStamp(0.4235763234238955);
    msg.setSource(17865U);
    msg.setSourceEntity(139U);
    msg.setDestination(7055U);
    msg.setDestinationEntity(199U);
    msg.u = 0.49343963710036265;
    msg.v = 0.008339795009955187;
    msg.w = 0.565944707640328;
    msg.p = 0.054073908484310595;
    msg.q = 0.5189033413392361;
    msg.r = 0.34055975666835325;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.5027919591940002);
    msg.setSource(44431U);
    msg.setSourceEntity(171U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(101U);
    msg.u = 0.4528746676162766;
    msg.v = 0.39187430932485023;
    msg.w = 0.3306775862502701;
    msg.p = 0.7790460350538803;
    msg.q = 0.30443885202516474;
    msg.r = 0.7824070043167223;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.31109564040794446);
    msg.setSource(14363U);
    msg.setSourceEntity(136U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(212U);
    msg.u = 0.7845239222807169;
    msg.v = 0.6402412655380846;
    msg.w = 0.9857721835963908;
    msg.p = 0.35099469501537106;
    msg.q = 0.8961806578872441;
    msg.r = 0.3475394188836065;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.4161836139586621);
    msg.setSource(22965U);
    msg.setSourceEntity(123U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(28U);
    msg.path_ref = 3582369429U;
    msg.start_lat = 0.8004987360848899;
    msg.start_lon = 0.9173973137191711;
    msg.start_z = 0.8069229793404081;
    msg.start_z_units = 118U;
    msg.end_lat = 0.7633018786839737;
    msg.end_lon = 0.9126768351254785;
    msg.end_z = 0.14928319683805835;
    msg.end_z_units = 144U;
    msg.lradius = 0.1654685967222692;
    msg.flags = 164U;
    msg.x = 0.8539731767098;
    msg.y = 0.33085587404134265;
    msg.z = 0.1935921867156185;
    msg.vx = 0.34879807434039956;
    msg.vy = 0.09796382804028059;
    msg.vz = 0.030754150479869513;
    msg.course_error = 0.11627025953463377;
    msg.eta = 44777U;

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
    msg.setTimeStamp(0.6662040676320893);
    msg.setSource(41673U);
    msg.setSourceEntity(135U);
    msg.setDestination(22979U);
    msg.setDestinationEntity(204U);
    msg.path_ref = 3161217632U;
    msg.start_lat = 0.5384107585913869;
    msg.start_lon = 0.5650950538954972;
    msg.start_z = 0.27331054425599355;
    msg.start_z_units = 214U;
    msg.end_lat = 0.1892163073604176;
    msg.end_lon = 0.5731239486312067;
    msg.end_z = 0.13130351378677585;
    msg.end_z_units = 148U;
    msg.lradius = 0.766069909698805;
    msg.flags = 217U;
    msg.x = 0.11153664536127528;
    msg.y = 0.013711766811058124;
    msg.z = 0.634961128109819;
    msg.vx = 0.47663420425415437;
    msg.vy = 0.5975640091760903;
    msg.vz = 0.5229420142197763;
    msg.course_error = 0.9631572207588475;
    msg.eta = 56571U;

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
    msg.setTimeStamp(0.4379854439545151);
    msg.setSource(16998U);
    msg.setSourceEntity(114U);
    msg.setDestination(57960U);
    msg.setDestinationEntity(7U);
    msg.path_ref = 204114672U;
    msg.start_lat = 0.5466910980516972;
    msg.start_lon = 0.8391009962802183;
    msg.start_z = 0.14006657028530356;
    msg.start_z_units = 215U;
    msg.end_lat = 0.9987996870049675;
    msg.end_lon = 0.506390900630004;
    msg.end_z = 0.9041051386384396;
    msg.end_z_units = 231U;
    msg.lradius = 0.19144783612185712;
    msg.flags = 96U;
    msg.x = 0.1516073542084384;
    msg.y = 0.00012749736010564394;
    msg.z = 0.8457962363870122;
    msg.vx = 0.7426936638177912;
    msg.vy = 0.3031641515215062;
    msg.vz = 0.13781985169802702;
    msg.course_error = 0.2538437685292453;
    msg.eta = 39690U;

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
    msg.setTimeStamp(0.4050048636125163);
    msg.setSource(1369U);
    msg.setSourceEntity(73U);
    msg.setDestination(45866U);
    msg.setDestinationEntity(39U);
    msg.k = 0.9341909338412802;
    msg.m = 0.654707077239236;
    msg.n = 0.23939132174420152;

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
    msg.setTimeStamp(0.9848100244541956);
    msg.setSource(46991U);
    msg.setSourceEntity(73U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(132U);
    msg.k = 0.6120438198817651;
    msg.m = 0.19708008449167347;
    msg.n = 0.859494827431063;

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
    msg.setTimeStamp(0.3424175985644011);
    msg.setSource(62014U);
    msg.setSourceEntity(46U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(62U);
    msg.k = 0.47762498077344784;
    msg.m = 0.9131003994262544;
    msg.n = 0.1611424251979917;

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
    msg.setTimeStamp(0.4737504033968002);
    msg.setSource(32943U);
    msg.setSourceEntity(70U);
    msg.setDestination(54181U);
    msg.setDestinationEntity(149U);
    msg.p = 0.29629463699788705;
    msg.i = 0.4609471368691993;
    msg.d = 0.20136116660279113;
    msg.a = 0.7169648904310343;

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
    msg.setTimeStamp(0.3405408067102096);
    msg.setSource(6337U);
    msg.setSourceEntity(19U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(54U);
    msg.p = 0.2474330195685478;
    msg.i = 0.8949831770032626;
    msg.d = 0.08137651969341186;
    msg.a = 0.0687130582320461;

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
    msg.setTimeStamp(0.7672873336703592);
    msg.setSource(18448U);
    msg.setSourceEntity(129U);
    msg.setDestination(3914U);
    msg.setDestinationEntity(74U);
    msg.p = 0.8857403063604286;
    msg.i = 0.545579612137716;
    msg.d = 0.6051393798919703;
    msg.a = 0.8423608674372571;

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
    msg.setTimeStamp(0.8203438778077894);
    msg.setSource(61380U);
    msg.setSourceEntity(94U);
    msg.setDestination(15743U);
    msg.setDestinationEntity(163U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.6447771956501551);
    msg.setSource(57536U);
    msg.setSourceEntity(188U);
    msg.setDestination(50558U);
    msg.setDestinationEntity(61U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.13767843469795493);
    msg.setSource(10470U);
    msg.setSourceEntity(111U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(181U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.21536624762111667);
    msg.setSource(40300U);
    msg.setSourceEntity(117U);
    msg.setDestination(31908U);
    msg.setDestinationEntity(219U);
    msg.timeout = 36232U;
    msg.lat = 0.4617616416474656;
    msg.lon = 0.6766595591515846;
    msg.z = 0.2613231893222474;
    msg.z_units = 162U;
    msg.speed = 0.8027341586020179;
    msg.speed_units = 100U;
    msg.roll = 0.2005188842022364;
    msg.pitch = 0.7939227217749004;
    msg.yaw = 0.6545366071774102;
    msg.custom.assign("KNPDHNJPEPJNUKCDRONTNCIVTOCXZWQOIBLODDXRKRVCMACSDBFBTRQRXFSGBSHDFUQQGAWEBHGVLOTVZXVRGFWUEFQXHEEJZXNWHORGUJXYCIYCSDMWELIOTUZYFQQTUJBKVYSGTSJFYAZQSNNOHCLARMEFCPHLMZWMIZFLWVSKMIKXVPGJXMREFAEZZOUCWUJIAYLYSPGWJTGXKIPADBYQDGAUJRPKBZTHBLSVBPMUTDMEHIPYHNAK");

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
    msg.setTimeStamp(0.03741549793797716);
    msg.setSource(17676U);
    msg.setSourceEntity(205U);
    msg.setDestination(13915U);
    msg.setDestinationEntity(170U);
    msg.timeout = 35403U;
    msg.lat = 0.6161191214263764;
    msg.lon = 0.5810847176375282;
    msg.z = 0.8343388445199043;
    msg.z_units = 121U;
    msg.speed = 0.12374237376965513;
    msg.speed_units = 85U;
    msg.roll = 0.5359832049537915;
    msg.pitch = 0.19000248246142737;
    msg.yaw = 0.15776545831381938;
    msg.custom.assign("QYCQPZIEYRBQYBSBRSGEUTGPPDQBZOXSFZQFLVUNCFNXLBHAFPBIZTYSANRSUNVXEEIUEWUGRLSVEMLZHWVPYVTEDQ");

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
    msg.setTimeStamp(0.03721929712465322);
    msg.setSource(4075U);
    msg.setSourceEntity(126U);
    msg.setDestination(28343U);
    msg.setDestinationEntity(169U);
    msg.timeout = 48669U;
    msg.lat = 0.9615544814554379;
    msg.lon = 0.38825645663687813;
    msg.z = 0.24485846959027247;
    msg.z_units = 22U;
    msg.speed = 0.7699641334210973;
    msg.speed_units = 145U;
    msg.roll = 0.2789472946204389;
    msg.pitch = 0.3731921857101893;
    msg.yaw = 0.27069580749757904;
    msg.custom.assign("VLGUTPVIDILAGLJGCLCWFBYWVDMEGIWJLXGYOASTTAXRIKQYMQPFWGMNMSSUXADQXPBPHINRCEZVVJYNGOVMMRZOQIVYHSZNOPYAUSNLETTBIKLKNBUUGRQFKYRSWBXBBOSZTAXSWCBUCMHTFFUQHCHKXJUENNAKQZPPPQDCTRQKJGHCMFROFMTBCKYIZIREWL");

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
    msg.setTimeStamp(0.00439179758414332);
    msg.setSource(12425U);
    msg.setSourceEntity(127U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(53U);
    msg.timeout = 35726U;
    msg.lat = 0.6156747188273569;
    msg.lon = 0.41753021167163207;
    msg.z = 0.3552882302253918;
    msg.z_units = 88U;
    msg.speed = 0.14275653979146197;
    msg.speed_units = 92U;
    msg.duration = 34807U;
    msg.radius = 0.3408969442744444;
    msg.flags = 166U;
    msg.custom.assign("RFMUJULNAEZVR");

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
    msg.setTimeStamp(0.497416615604226);
    msg.setSource(6505U);
    msg.setSourceEntity(181U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(148U);
    msg.timeout = 37046U;
    msg.lat = 0.803707852470397;
    msg.lon = 0.6072006877553603;
    msg.z = 0.43605610954424534;
    msg.z_units = 236U;
    msg.speed = 0.34218515607589284;
    msg.speed_units = 221U;
    msg.duration = 12599U;
    msg.radius = 0.7319465219409237;
    msg.flags = 61U;
    msg.custom.assign("BFNGSXLJRRTLYYLRPAQRHGOFNKZLVZWVWMDSJCATUXEKQCBKSISOIMPIEXLDOYPDUFWVFACNQEDHBCHRDSWOTYEZUDQNJOHAQWMLITAABUTEBUYRJPCDMZTZYVYZEZFKMSBFENCMLOXQJNEBVHXSTW");

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
    msg.setTimeStamp(0.07879070119611109);
    msg.setSource(29487U);
    msg.setSourceEntity(176U);
    msg.setDestination(23417U);
    msg.setDestinationEntity(17U);
    msg.timeout = 9947U;
    msg.lat = 0.10920670896775464;
    msg.lon = 0.33175265457797676;
    msg.z = 0.7668760654583715;
    msg.z_units = 254U;
    msg.speed = 0.020914872604156254;
    msg.speed_units = 218U;
    msg.duration = 13613U;
    msg.radius = 0.15994728231925837;
    msg.flags = 54U;
    msg.custom.assign("ANNZTCRZIADJFFDOJPOBLGWWWSOCMQTNVVTRENCMQLLMVAOXMHQVWDWQASHIWQJIKEUDOSPVCTOITCQXUXPIHFYWKCUXJIMZLKPVOPIRKEQXSDBIYVFDGJRNEIXMYYLQPCAEDPMQYFJSNNHRVWCEXZCBGJLHUFNLLSZLAAPKRWOGZZFGKORUZMAJGFKGXBUYSHTNPEXMBTAVUBEWKISXFGBK");

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
    msg.setTimeStamp(0.4024183861804397);
    msg.setSource(7806U);
    msg.setSourceEntity(100U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(5U);
    msg.custom.assign("RJNRDPPIZXGHPLYHXXMTLWHDV");

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
    msg.setTimeStamp(0.6017066572250193);
    msg.setSource(23534U);
    msg.setSourceEntity(235U);
    msg.setDestination(18869U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("MZEXAQDIOGDRDPEYLYPMNSSCTUERQIGFUWFVKIFHSBOGQHAIDTQKUSHNGESHZIYJLRBYTXSHTZRRNMJZXLAIVNQWVTTWWKUPCOENMTFCDXEAZFKFQOEQOMJOJXVPPBDOGIKJCVBTBMLHRIOJWGCQXVCCWKXEPPRDIEFBNJMZQOUVUVFHUUYLLYSJFKNBJRWUGZAUMKDAKBGSBMAVGDWHITEQB");

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
    msg.setTimeStamp(0.9594685132852766);
    msg.setSource(28752U);
    msg.setSourceEntity(37U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(99U);
    msg.custom.assign("TTDSHLAKWEMMNQQHGZVGZJPUWQBMMBCISYWIVXLVROKFXSOGXRNEZZIODTQOHPVAWWTCOLRUHTKRAZSBBWMUKMLMIYJKHBGPAFFNEHCRYXFALPFNODPDZCEAJIDAPYXYBG");

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
    msg.setTimeStamp(0.6011123684971998);
    msg.setSource(59220U);
    msg.setSourceEntity(111U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(136U);
    msg.timeout = 40965U;
    msg.lat = 0.3456876973072722;
    msg.lon = 0.7637383943820812;
    msg.z = 0.20533045438651953;
    msg.z_units = 45U;
    msg.duration = 7231U;
    msg.speed = 0.7555753524111568;
    msg.speed_units = 87U;
    msg.type = 81U;
    msg.radius = 0.48757179679460527;
    msg.length = 0.9549610234900443;
    msg.bearing = 0.9603910551065887;
    msg.direction = 228U;
    msg.custom.assign("EGSHEHLUVHNVUWWWPRQNPBZLPLIAIGGXNSEOSKVOZCOZQRFYCEFQBFMYCKZBYPYFNGQUBLVENZLVWLCCIMEMUTJRKMHMCBSPFXZPMRQGRMLGYIIFDNCGAXQJMWNLWMJVJRBHSNXUNQYDKHWVTFBBNFUZSXC");

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
    msg.setTimeStamp(0.9157039837028327);
    msg.setSource(64538U);
    msg.setSourceEntity(48U);
    msg.setDestination(40145U);
    msg.setDestinationEntity(89U);
    msg.timeout = 3957U;
    msg.lat = 0.6381701201138051;
    msg.lon = 0.9105619776310677;
    msg.z = 0.9169854877447677;
    msg.z_units = 228U;
    msg.duration = 597U;
    msg.speed = 0.5543946105451019;
    msg.speed_units = 182U;
    msg.type = 57U;
    msg.radius = 0.09170832185101085;
    msg.length = 0.9015840795427046;
    msg.bearing = 0.6321956351360968;
    msg.direction = 166U;
    msg.custom.assign("DRERKAAMTJKEQVZFCLQUUTHWMNFZSZRWKTXWBDYYCTJFVSZSOIBJDFOGYUKLBXCGOJKJFNZQTKOVJXQOTGBRNUWFMJLSRLAPPPWHCISERSLTKQXEZEBHMNYEVRMXHAXZFHAMYXUQXRGUUBIGYCVPJIUDYEBZYMNWAAHDYLXBTMLBPWCEDAFSPIQVSNSDODWOYCBCDLJOWIXONKELQAOIGUHMAZHGHFCDKINJQCNT");

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
    msg.setTimeStamp(0.747438348659346);
    msg.setSource(45604U);
    msg.setSourceEntity(199U);
    msg.setDestination(35711U);
    msg.setDestinationEntity(5U);
    msg.timeout = 41316U;
    msg.lat = 0.3704618064965487;
    msg.lon = 0.6408521889182389;
    msg.z = 0.7416293531627363;
    msg.z_units = 25U;
    msg.duration = 33548U;
    msg.speed = 0.5888096095786713;
    msg.speed_units = 212U;
    msg.type = 187U;
    msg.radius = 0.12285621938636304;
    msg.length = 0.47064760523846105;
    msg.bearing = 0.030312328799102284;
    msg.direction = 100U;
    msg.custom.assign("YATQMCISYVTNIHJCTBBYFPVRWKBZOPCROVTNVWEMBEBKJGDJSFLKHWMWXKKXGWSIFLUGFFDUJUBEIVXZISUVVLGRWUGYQDQQJIZEBTZFPLDJWJHAQPGKYCKHHRCHQKOAEQVKOCSBRZMODLEPFPUELNTNHTXYNGOADZECUXNYLHAYZGZRIAGDARNCRMATLSOZIWNJLFMSSXPWJMBHOIUQXQQMVZAVMXYRXCDOPIOSAPSPKRNMENGUDY");

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
    msg.setTimeStamp(0.985743449845609);
    msg.setSource(35792U);
    msg.setSourceEntity(167U);
    msg.setDestination(64475U);
    msg.setDestinationEntity(200U);
    msg.duration = 53222U;
    msg.custom.assign("WFNJBSOXAFKWQECPONLGBUDAQQGELJRKOVAEQRTECVAIOTXLJPTMYRIUZSVZHPDCRRZHSGYDBPZNVUVLIFSBKDDJLTJZKMHYHFNRFPMIXHWKWXEBXKFNMMXCDXHIBKLOHWUYCCFSAYDESTPYQXHRZCQTRZSOYFLJBHGIEYSCGGZYMUVOBUNDTKREXATNBSKIAAOTWQPMWGVPEAGJWPSKREVFVPQYNAVLQOJLBUGGDTODZJMWMH");

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
    msg.setTimeStamp(0.7140386808735265);
    msg.setSource(41549U);
    msg.setSourceEntity(92U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(51U);
    msg.duration = 16870U;
    msg.custom.assign("ZKQILMTRNOCBUCNCUSUNKIMPMWGEVZAXLNHGVRIJDPTPMYOSSLYJIJGJRPJFNWDULSVMOAGXHLNSXNFDXIDYXCDNRKLYZBMMYNBQDXESURILQOAPQYFYDYEZPWRTAJQCMQAVCFUBPFTWCTILHKBHXQQRNAWAKZYCHGDDFKRJHXBKGYVFVZESZRFWFRJAIHWEMAOHWUQQOTUUSTWVBIHWLPHVBGEAKVPBEZEBEZJCOXSTJISPODFLKKOO");

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
    msg.setTimeStamp(0.7581013380129965);
    msg.setSource(41923U);
    msg.setSourceEntity(18U);
    msg.setDestination(59535U);
    msg.setDestinationEntity(205U);
    msg.duration = 49032U;
    msg.custom.assign("MFMEUSDKXHSMJVQKVGPEDJLUZUPVLHVCSNLKJKLICSGBGDHJWWSUIPOBIDEANBEMJTHNXBHATDKXAFQQMTXHNRQNFXWPLBHLOKCJJHSAYDYYMOFQPHVZBLPZUOGQPCOSROZQAGOUAGZNAFXRUECZNBFJCYSDAKTNYQYIGBXVDZRAIVTYTQVUGMSZHZEJXKOOPQDTEMFXNT");

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
    msg.setTimeStamp(0.3556776891399408);
    msg.setSource(29432U);
    msg.setSourceEntity(193U);
    msg.setDestination(3703U);
    msg.setDestinationEntity(85U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5459788396391309;
    tmp_msg_0.speed_units = 239U;
    msg.control.set(tmp_msg_0);
    msg.duration = 18906U;
    msg.custom.assign("FSKIMFRFDOXOPZMKPLWJJXSUXWQEBERALMNIPEBDYCDKIHCVEPDZHRDVZSIKDQNVRMTRNUBXGYZVEUYRDECSJBTUIQVDVTCJLSFABHLGUTWOUYESDCMPPUS");

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
    msg.setTimeStamp(0.6440349558792315);
    msg.setSource(16760U);
    msg.setSourceEntity(17U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(60U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0751804395615816;
    msg.control.set(tmp_msg_0);
    msg.duration = 45696U;
    msg.custom.assign("TDOYJTGVAOIDNWFSOXFRRDLAGDDPZQXNAHGPVULFSBLVBIVHTEOESFICR");

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
    msg.setTimeStamp(0.8096166660228725);
    msg.setSource(4432U);
    msg.setSourceEntity(246U);
    msg.setDestination(57641U);
    msg.setDestinationEntity(191U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.942772500219176;
    tmp_msg_0.z_units = 235U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9805U;
    msg.custom.assign("YPZTFSAVCTAELVKSPZKEWJWGRKQOFODDMFLBWIEUFQQROXYSFAUDVUPKBUBTCJNWLLCWTNWAE");

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
    msg.setTimeStamp(0.569296477830296);
    msg.setSource(550U);
    msg.setSourceEntity(68U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(90U);
    msg.timeout = 17876U;
    msg.lat = 0.3760932673822035;
    msg.lon = 0.15973735829776037;
    msg.z = 0.4009420536556727;
    msg.z_units = 143U;
    msg.speed = 0.711248528896755;
    msg.speed_units = 162U;
    msg.bearing = 0.7952922847741599;
    msg.cross_angle = 0.6575214695585054;
    msg.width = 0.8610052322522038;
    msg.length = 0.052825769527157784;
    msg.hstep = 0.783853077697262;
    msg.coff = 68U;
    msg.alternation = 156U;
    msg.flags = 182U;
    msg.custom.assign("KTCDINAQUZDQGRIVLQOUNDNTTCOECWSROCAQUNMYKNMWDVCLEYHHUTHUZNQIEYNGMBQZVFAGWWRCRSLRJZZHSVQIXDGKPGJDKRJABXKPMBBKMMTVKBIGDTYZQWZGABENFX");

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
    msg.setTimeStamp(0.35873225103680406);
    msg.setSource(13934U);
    msg.setSourceEntity(191U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(207U);
    msg.timeout = 3237U;
    msg.lat = 0.3600371461375418;
    msg.lon = 0.23093240577650853;
    msg.z = 0.6661234483700355;
    msg.z_units = 13U;
    msg.speed = 0.1808188161464095;
    msg.speed_units = 113U;
    msg.bearing = 0.7342225445074732;
    msg.cross_angle = 0.9971310316186415;
    msg.width = 0.3018538746140147;
    msg.length = 0.18240334853792917;
    msg.hstep = 0.5329215077320395;
    msg.coff = 231U;
    msg.alternation = 41U;
    msg.flags = 73U;
    msg.custom.assign("WECUJLAKYFOBMEDMHIDVQWSYHHGNJPQOFFVDESAUHEEKYYSKOYOAMSLMUSKOUCCRQFCTWOPIOPOJCGVNQHVYWCVRNEGMQPGWBMDSPIXSDAGEBTZNZJYBNGQMTUONWPFKBLBVDFHASLNXZTFYQREJGIZWTAHDDPUDFRAVXEELZT");

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
    msg.setTimeStamp(0.0028902960525947208);
    msg.setSource(64377U);
    msg.setSourceEntity(79U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(97U);
    msg.timeout = 45225U;
    msg.lat = 0.324214542375574;
    msg.lon = 0.9656457891257766;
    msg.z = 0.763444934318578;
    msg.z_units = 151U;
    msg.speed = 0.5394356829686221;
    msg.speed_units = 1U;
    msg.bearing = 0.9128663340057587;
    msg.cross_angle = 0.7575846203312141;
    msg.width = 0.45299948371477994;
    msg.length = 0.45534609241123614;
    msg.hstep = 0.34658814394148174;
    msg.coff = 204U;
    msg.alternation = 6U;
    msg.flags = 114U;
    msg.custom.assign("LOEAISLPENEEFTEHBTXLKOZNQBVUMTPYALHKZGCNGIGAPLEXWAXUQKYMIBUDYGGZGMQPTYUNKCDBVMYQAWSRGDZUQJNFHDAPCCVRJWPJXDSCDXZETHOSMGYHANAYOOSQNLZRYREDHBRB");

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
    msg.setTimeStamp(0.4082102387355927);
    msg.setSource(1290U);
    msg.setSourceEntity(29U);
    msg.setDestination(799U);
    msg.setDestinationEntity(39U);
    msg.timeout = 20922U;
    msg.lat = 0.09488256974054998;
    msg.lon = 0.009194288812843343;
    msg.z = 0.4766573297792358;
    msg.z_units = 254U;
    msg.speed = 0.8740547657513753;
    msg.speed_units = 7U;
    msg.custom.assign("QTPDODJLUQOROSKXAXHZYYVYBRNSIAUFIMDNSTSYOHUGZKWIRWNDADERPMEBTHCXLUFIH");

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
    msg.setTimeStamp(0.8389873654480909);
    msg.setSource(35928U);
    msg.setSourceEntity(186U);
    msg.setDestination(55371U);
    msg.setDestinationEntity(49U);
    msg.timeout = 44583U;
    msg.lat = 0.2486669386043333;
    msg.lon = 0.07096622063860658;
    msg.z = 0.6242406930830804;
    msg.z_units = 243U;
    msg.speed = 0.5066120198602234;
    msg.speed_units = 111U;
    msg.custom.assign("IPSRVZMNDJLSODZRPSSFPEKKRRCLMGIYDKJWHQFHXXVPGFGKBHZASYXILYCQZMVFBSVVYBTUVHUEDYQWHIUMWYGPQNPGMQTADJTUDAETIZELTIQ");

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
    msg.setTimeStamp(0.5338647012263765);
    msg.setSource(58407U);
    msg.setSourceEntity(66U);
    msg.setDestination(58061U);
    msg.setDestinationEntity(193U);
    msg.timeout = 32117U;
    msg.lat = 0.10097954412906085;
    msg.lon = 0.46361020492771976;
    msg.z = 0.4224624252634688;
    msg.z_units = 202U;
    msg.speed = 0.8097183072535907;
    msg.speed_units = 115U;
    msg.custom.assign("FVUTPSGMEFQWJKJYDPJPBMRYIHTLISYPUSIABAEYHGCJKPJYZZDFOMEPKKFKGZXIULCBHNEKIILEITMXTHWURVVVEFBJGQWBCAKISGZGNBXAUTLUGSGLCQXWXHXDNLYZANCJWRDWUPJBUOFOMDQZRIDHVRDHMAQUOCTHCXMNLONVE");

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
    msg.setTimeStamp(0.28569577342400343);
    msg.setSource(55990U);
    msg.setSourceEntity(217U);
    msg.setDestination(43276U);
    msg.setDestinationEntity(202U);
    msg.x = 0.9845796850927023;
    msg.y = 0.1856571839522163;
    msg.z = 0.6728672660218342;

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
    msg.setTimeStamp(0.3863779330011502);
    msg.setSource(48671U);
    msg.setSourceEntity(176U);
    msg.setDestination(14359U);
    msg.setDestinationEntity(214U);
    msg.x = 0.5734089098384992;
    msg.y = 0.1111616058517676;
    msg.z = 0.3072417205816903;

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
    msg.setTimeStamp(0.3635408462742512);
    msg.setSource(41604U);
    msg.setSourceEntity(73U);
    msg.setDestination(55732U);
    msg.setDestinationEntity(61U);
    msg.x = 0.18111683562202918;
    msg.y = 0.057438945994793045;
    msg.z = 0.42527753800138157;

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
    msg.setTimeStamp(0.04960126606891169);
    msg.setSource(38210U);
    msg.setSourceEntity(222U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(27U);
    msg.timeout = 10448U;
    msg.lat = 0.19718785764143;
    msg.lon = 0.8313706516091817;
    msg.z = 0.8387796039630897;
    msg.z_units = 234U;
    msg.amplitude = 0.28584339191396213;
    msg.pitch = 0.19908172046009665;
    msg.speed = 0.8704540717257723;
    msg.speed_units = 74U;
    msg.custom.assign("UKEKGEAWYSCASHVPHDBRXIJXFZEAQFZULTCXCMQWKFQGEJGYZPBBWNPTPOXCHQXBKEYCJCCFTUKXJMMDDWNMLMVWSKHIZUMSQLGHEJMIUIFEVGIGARPFZIWZXDLC");

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
    msg.setTimeStamp(0.4055322533736435);
    msg.setSource(5397U);
    msg.setSourceEntity(187U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(8U);
    msg.timeout = 25322U;
    msg.lat = 0.38556827796012605;
    msg.lon = 0.969524631985518;
    msg.z = 0.7402620227836627;
    msg.z_units = 107U;
    msg.amplitude = 0.4178659630145498;
    msg.pitch = 0.9450006965450335;
    msg.speed = 0.4010107836142085;
    msg.speed_units = 130U;
    msg.custom.assign("WQOAINYECNWDFQBWTRRIPFFRCAALQFSLYDIGWYBBPWMEACQGPTJEXUKSEAVCXVWPWYJHZBIGBMALSGLMUKGMYEZPHWOETGBDRLSCVFIHCOBUPFCIDHHNZTDODMFSVGLSJQQAJUJKYNUZQNPSWUQBNJKMOVXGZHCJVNKKSNPSYEROKGNIKEXIIVOLJDYEHZRMMXYVXCULFQZXHAITZADDWVTLRXESTPMQNRFZUCXU");

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
    msg.setTimeStamp(0.1815261891961535);
    msg.setSource(42377U);
    msg.setSourceEntity(27U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(226U);
    msg.timeout = 18399U;
    msg.lat = 0.6965480851718306;
    msg.lon = 0.32625841747700446;
    msg.z = 0.13627418678174463;
    msg.z_units = 97U;
    msg.amplitude = 0.6353494906463943;
    msg.pitch = 0.6914825436876981;
    msg.speed = 0.6680166346041287;
    msg.speed_units = 64U;
    msg.custom.assign("GIXZPWIQRVKNBVMXBTPAYPCVCFSCGMCETWHWEMURFDRNUACIDANCLZAMELSIQZBDSWYKTYWDSLLFPQMHOHTUXLRCTAZLFKOBOZGHDXOFOVIKGJKUSTJWPJFIXXAEUKSDKBQNWBOWJHEEJIDJRQGXAHNEXNKCMLPYGFNZEIQTJJOIVSOCYNTUNKQYYBJGZPD");

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
    msg.setTimeStamp(0.06422475821454521);
    msg.setSource(25973U);
    msg.setSourceEntity(199U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.05317054948267974);
    msg.setSource(61654U);
    msg.setSourceEntity(38U);
    msg.setDestination(65124U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.298318491715277);
    msg.setSource(47176U);
    msg.setSourceEntity(243U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.4322455023133561);
    msg.setSource(31817U);
    msg.setSourceEntity(202U);
    msg.setDestination(51292U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.09882864188798735;
    msg.lon = 0.6662787548513187;
    msg.z = 0.5371523574635051;
    msg.z_units = 238U;
    msg.radius = 0.2530851371351377;
    msg.duration = 14177U;
    msg.speed = 0.31747453462484854;
    msg.speed_units = 130U;
    msg.custom.assign("RKGYMBKZTUTJPIQPUFNZBXMPNFAUFVVOOPOS");

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
    msg.setTimeStamp(0.48262594594713193);
    msg.setSource(64767U);
    msg.setSourceEntity(17U);
    msg.setDestination(26161U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.5982363283942633;
    msg.lon = 0.34121303305540496;
    msg.z = 0.24970327942831727;
    msg.z_units = 15U;
    msg.radius = 0.8439937916993047;
    msg.duration = 645U;
    msg.speed = 0.5881580669793446;
    msg.speed_units = 133U;
    msg.custom.assign("DXBYZEQODEUNNYPEAXDCJVXEYBPYPQRZJBPBXLALVOWWQIQLGREYHWDPUZCYHADCZJTTZTYMVGPIUCKOKEFMUGUJNFMIEISUMGIHMTIEVZZNRXVYCJASICZJKOHMJGTXSLOHSKHWFKQVHASZPGRFNFUTSDXNKRVNXMFICAIQSHSJWBMATFIKEWOGKUFSALFYJEWVOGCLVRMRSBONBGZTN");

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
    msg.setTimeStamp(0.3617641090446049);
    msg.setSource(1397U);
    msg.setSourceEntity(94U);
    msg.setDestination(38780U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.9580424713347697;
    msg.lon = 0.605298736057746;
    msg.z = 0.476285924025485;
    msg.z_units = 13U;
    msg.radius = 0.04632204820282548;
    msg.duration = 36821U;
    msg.speed = 0.48593362927757033;
    msg.speed_units = 159U;
    msg.custom.assign("EYSQWTNNUP");

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
    msg.setTimeStamp(0.20179847698631626);
    msg.setSource(63713U);
    msg.setSourceEntity(244U);
    msg.setDestination(49923U);
    msg.setDestinationEntity(64U);
    msg.timeout = 56809U;
    msg.flags = 168U;
    msg.lat = 0.9658162085717139;
    msg.lon = 0.8567863813381134;
    msg.start_z = 0.44439165926601587;
    msg.start_z_units = 134U;
    msg.end_z = 0.6006900943070458;
    msg.end_z_units = 183U;
    msg.radius = 0.31787263536758004;
    msg.speed = 0.058261462684186305;
    msg.speed_units = 131U;
    msg.custom.assign("SYNIOXJTTGGFIKGPHLEWGWKOSPSNGVPKUUFSQRLTBMJCUYR");

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
    msg.setTimeStamp(0.6643641554805365);
    msg.setSource(6311U);
    msg.setSourceEntity(26U);
    msg.setDestination(34525U);
    msg.setDestinationEntity(80U);
    msg.timeout = 16785U;
    msg.flags = 226U;
    msg.lat = 0.6084769602090861;
    msg.lon = 0.35213153268702246;
    msg.start_z = 0.2560668153763195;
    msg.start_z_units = 105U;
    msg.end_z = 0.12707302558913436;
    msg.end_z_units = 242U;
    msg.radius = 0.13199370939256927;
    msg.speed = 0.22144735482854705;
    msg.speed_units = 45U;
    msg.custom.assign("DQMHNRXUYJMNVOMDRWRDNWYWSLGXVAVRHPNPVIMEVYJPPCPKGXJDCDKXBK");

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
    msg.setTimeStamp(0.5806873486064918);
    msg.setSource(57455U);
    msg.setSourceEntity(167U);
    msg.setDestination(9674U);
    msg.setDestinationEntity(143U);
    msg.timeout = 34406U;
    msg.flags = 72U;
    msg.lat = 0.23432067313153804;
    msg.lon = 0.33250321054963883;
    msg.start_z = 0.962312016812129;
    msg.start_z_units = 72U;
    msg.end_z = 0.1894046489868899;
    msg.end_z_units = 132U;
    msg.radius = 0.6512917734626902;
    msg.speed = 0.11975381159287335;
    msg.speed_units = 101U;
    msg.custom.assign("JMOXPPRYMSRZDUDYKVGHTMCKXULGYQWUWLWKNLEHMQCRHBSBCBTWPLETGWDRZGRGDVYFTBXEXFBAIISFGVSVXIWAJMIHOIHDFAKRUFSEJOLZHXPHZYDAUMWKXVSDONQQFIOVBGVDDSNUAONJBQZTSTA");

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
    msg.setTimeStamp(0.30872671735574453);
    msg.setSource(45771U);
    msg.setSourceEntity(220U);
    msg.setDestination(37335U);
    msg.setDestinationEntity(105U);
    msg.timeout = 23780U;
    msg.lat = 0.8122261692163398;
    msg.lon = 0.5730210372529888;
    msg.z = 0.3273908790551626;
    msg.z_units = 84U;
    msg.speed = 0.8323922756548424;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5992470082364701;
    tmp_msg_0.y = 0.317565636920935;
    tmp_msg_0.z = 0.06359132125198697;
    tmp_msg_0.t = 0.7628395531683382;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IFWGUXFTQFQSDMOENRZHJXOCPIHQWKBPVHCHSVIXXRRWCQCSPRNPOTDZXKZQEHQXCFFNYJSUCPJHMNOTBREBPONLXFTVVUFYMHKMESUNTSRROG");

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
    msg.setTimeStamp(0.8942810390966776);
    msg.setSource(23190U);
    msg.setSourceEntity(234U);
    msg.setDestination(12277U);
    msg.setDestinationEntity(164U);
    msg.timeout = 51713U;
    msg.lat = 0.25115902158799586;
    msg.lon = 0.2938120555450746;
    msg.z = 0.7608078002944665;
    msg.z_units = 181U;
    msg.speed = 0.40417537428441197;
    msg.speed_units = 218U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5198319675191694;
    tmp_msg_0.y = 0.25534240409572806;
    tmp_msg_0.z = 0.64023513365804;
    tmp_msg_0.t = 0.5546465887605576;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NIQPHXGEIWMCKQHTVDMXIBWMXBRIEXKUGRFCSNYECNUJMCLVVANZQGJNTYN");

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
    msg.setTimeStamp(0.7658801767895834);
    msg.setSource(4772U);
    msg.setSourceEntity(206U);
    msg.setDestination(38098U);
    msg.setDestinationEntity(105U);
    msg.timeout = 23207U;
    msg.lat = 0.8253513188108433;
    msg.lon = 0.00897792702747402;
    msg.z = 0.08430237578224808;
    msg.z_units = 131U;
    msg.speed = 0.8826593500919443;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.30478322243590383;
    tmp_msg_0.y = 0.5877229812420807;
    tmp_msg_0.z = 0.9831014085753117;
    tmp_msg_0.t = 0.5843516394826009;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NWBQFDTVZICMRYZAMKLCZRBBXNTYYHWENIKORFJJOQOHJGTCMQAJSJHLSFXCGILIDPNRQFBUQEIVQW");

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
    msg.setTimeStamp(0.12076288033122284);
    msg.setSource(43470U);
    msg.setSourceEntity(10U);
    msg.setDestination(24761U);
    msg.setDestinationEntity(93U);
    msg.x = 0.26880929432714773;
    msg.y = 0.20012993686725156;
    msg.z = 0.11765038458462307;
    msg.t = 0.16787434901539355;

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
    msg.setTimeStamp(0.8122164510122839);
    msg.setSource(12788U);
    msg.setSourceEntity(225U);
    msg.setDestination(42205U);
    msg.setDestinationEntity(120U);
    msg.x = 0.9195261030200487;
    msg.y = 0.035825763837358915;
    msg.z = 0.4678852946263409;
    msg.t = 0.9771299698872269;

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
    msg.setTimeStamp(0.4800022792100993);
    msg.setSource(51765U);
    msg.setSourceEntity(66U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(148U);
    msg.x = 0.7773039069758536;
    msg.y = 0.16953692258612196;
    msg.z = 0.9543553569025623;
    msg.t = 0.5242637484713518;

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
    msg.setTimeStamp(0.28218009276071465);
    msg.setSource(32714U);
    msg.setSourceEntity(211U);
    msg.setDestination(59275U);
    msg.setDestinationEntity(214U);
    msg.timeout = 57612U;
    msg.name.assign("HOTVYONYRWQMRQJAWJRXKSQLRXIUMBCGXHULPIZAWZMODRPNIQTYKWEDBGCTBYXLINZGDEFKLCEQYMDEBUPUPCJPAKDKBPKZUSSLDXCAFZFWVIXKAUWVMAHDVYFHSGQAEGFKIVHKRJPDITFGYVSSOGOMJKAHNPONWQNUIYHFBJWTVLQOMLRJVZARYHBOEWHFNVONISEB");
    msg.custom.assign("OFAYOJXNPBAQGFJPSPXCDQWFOKKPAHROCJFMQEENNICOHFDDIWRECJNBKEVSBMLVTAGBSDIBDNAGKWUHTYWXPAUESQPMDAQGDMMFWPTQVKYOGDHMZSLPZLU");

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
    msg.setTimeStamp(0.6992277652122618);
    msg.setSource(8010U);
    msg.setSourceEntity(46U);
    msg.setDestination(62237U);
    msg.setDestinationEntity(162U);
    msg.timeout = 37064U;
    msg.name.assign("NTMNXWBOQSETPGAZHKQOYZ");
    msg.custom.assign("XNIMOZYSEAKBVMXMALQYAKUMOZXHZQCGSDJGCAVFDTNSLKTTKMLAJYTUI");

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
    msg.setTimeStamp(0.7867983165689015);
    msg.setSource(44811U);
    msg.setSourceEntity(4U);
    msg.setDestination(27243U);
    msg.setDestinationEntity(13U);
    msg.timeout = 19204U;
    msg.name.assign("NGNYHJBENPAMDCMZWCHHNBELUMDSRSHRQHTFIFOGBKAPKPXXXVODEYTLQDZYLNFGWXUYGKYCYUIXJLNVUACHPXECJELLZPBZDTWQGFWWOBLYSKJDTBSTTIBONRXFTBBTVRWIQUMYKIONOVIUCKHPSNYSKSURVEAVARUADDUVFOQKXRPGGZEMTVZOSOQIVQBWMPWPQCAGKJMLNGSYHOEVZIMCAZRLGRRSMTWFFXFCCLJIMAHJKAQPJWUXHI");
    msg.custom.assign("GFMCYFLWIIMNQMEOKNZHVSJTSGAUJNZOGPRVWFNEGEQFYYXKRZPBINGGFSFMCHUOZQETUAOTIOUBMBYHKQUOQKQGANXEYKQCBJMFTPHILHWCEARHOSCIHUIGVPBAZRWCLWBSWTJFXZTMRCLPNLDDMDXPVKOLXLCRH");

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
    msg.setTimeStamp(0.5512824557948378);
    msg.setSource(15359U);
    msg.setSourceEntity(208U);
    msg.setDestination(29071U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.4170956323039706;
    msg.lon = 0.6006109869981013;
    msg.z = 0.7738396519859033;
    msg.z_units = 100U;
    msg.speed = 0.36223379285187884;
    msg.speed_units = 219U;
    msg.start_time = 0.6542616557781114;
    msg.custom.assign("MCOWKRAJLVMWVVWMNYPNTFQBHOIOJSNXOECNFUKHPCHFOYLTZNXZLIEOTPBRUYAHUAYSXMYSODCQPTZXJUTNNLZIPBCRCLQWBIBVVMJHWGHCFOSMUKRTFQGZDFJRLTDXEFQAYFIKMEGHUSZEYARMFWQHDCOPGBQRXXK");

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
    msg.setTimeStamp(0.5693081077574538);
    msg.setSource(29958U);
    msg.setSourceEntity(165U);
    msg.setDestination(45018U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.9007005545881862;
    msg.lon = 0.9264506558438316;
    msg.z = 0.9988650442323157;
    msg.z_units = 211U;
    msg.speed = 0.05803595706765863;
    msg.speed_units = 26U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7864213954872622;
    tmp_msg_0.y = 0.1935903408555869;
    tmp_msg_0.z = 0.7538542670803675;
    tmp_msg_0.t = 0.68793536257021;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.19932290132392672;
    msg.custom.assign("WRRNPNBTVGGWLFMCVPGWMBZZDEXOQBSCCMFQWZSGXDKVFAFQCILKNLHCPORNQ");

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
    msg.setTimeStamp(0.6182227963892584);
    msg.setSource(46549U);
    msg.setSourceEntity(127U);
    msg.setDestination(23917U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.6806982334221137;
    msg.lon = 0.940178429243001;
    msg.z = 0.36520314711567126;
    msg.z_units = 104U;
    msg.speed = 0.024691414051352556;
    msg.speed_units = 65U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.11684729112066639;
    tmp_msg_0.y = 0.6873537271803238;
    tmp_msg_0.z = 0.26394803730115335;
    tmp_msg_0.t = 0.7359649063310187;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9132125969774267;
    msg.custom.assign("MFZPJOKVRNQWEJWWHYSHVWKYNXBPDVCPAVNGXDGICUTRHMCAMZBQCEHOVNMZCHBTLACWYRYFUXIFTDABICBDVIURCTHACQHEIYGXHSTQJEQLDMMIVLSNXMSATECPLQPNUBNQXAZLJWJQRYGSODGVUXSMNIRPZKODTRDUIWJTKFLQMBYFFBGTDUJVYORQLGRLKZAOGXZLZZVFEOFPHEJWGSYH");

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
    msg.setTimeStamp(0.797420003132479);
    msg.setSource(43576U);
    msg.setSourceEntity(235U);
    msg.setDestination(63958U);
    msg.setDestinationEntity(169U);
    msg.vid = 44191U;
    msg.off_x = 0.8606281368409008;
    msg.off_y = 0.594664590024476;
    msg.off_z = 0.7405521394584413;

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
    msg.setTimeStamp(0.7113631594357543);
    msg.setSource(19405U);
    msg.setSourceEntity(195U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(163U);
    msg.vid = 41546U;
    msg.off_x = 0.24542352769060216;
    msg.off_y = 0.5282017209158549;
    msg.off_z = 0.5476828481717624;

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
    msg.setTimeStamp(0.7218793144585886);
    msg.setSource(7896U);
    msg.setSourceEntity(218U);
    msg.setDestination(24233U);
    msg.setDestinationEntity(58U);
    msg.vid = 44688U;
    msg.off_x = 0.5465344839742572;
    msg.off_y = 0.29107737687099955;
    msg.off_z = 0.4409909525543283;

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
    msg.setTimeStamp(0.9006881551705973);
    msg.setSource(14382U);
    msg.setSourceEntity(32U);
    msg.setDestination(18135U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.7922168981598197);
    msg.setSource(50653U);
    msg.setSourceEntity(125U);
    msg.setDestination(7720U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.3953129985313356);
    msg.setSource(65347U);
    msg.setSourceEntity(85U);
    msg.setDestination(18669U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.09901829775819082);
    msg.setSource(19280U);
    msg.setSourceEntity(78U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(151U);
    msg.mid = 15973U;

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
    msg.setTimeStamp(0.3925141413735592);
    msg.setSource(24000U);
    msg.setSourceEntity(184U);
    msg.setDestination(55849U);
    msg.setDestinationEntity(158U);
    msg.mid = 52424U;

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
    msg.setTimeStamp(0.8142137193832262);
    msg.setSource(51145U);
    msg.setSourceEntity(20U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(130U);
    msg.mid = 2638U;

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
    msg.setTimeStamp(0.8104560514955578);
    msg.setSource(44217U);
    msg.setSourceEntity(165U);
    msg.setDestination(10397U);
    msg.setDestinationEntity(212U);
    msg.state = 112U;
    msg.eta = 22644U;
    msg.info.assign("SNENLSZLCWZTULTPHBTRAEQKKKEHBCAIXVDJFLTUOMYXRLDGZHITNFLEHXMCVCPONSWTJODDMBCTYXQZKTYQKGNLBYVMQEMJCSNHGIORMASUFXSZPCKDBHY");

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
    msg.setTimeStamp(0.26974396396610456);
    msg.setSource(9657U);
    msg.setSourceEntity(66U);
    msg.setDestination(21857U);
    msg.setDestinationEntity(160U);
    msg.state = 9U;
    msg.eta = 49537U;
    msg.info.assign("ITQILZEWNNVUDNFXFCMRTWFLNPYSEAKIOELJZHYTVPGWDNMUOSDXKIAIPBQPJZTRUOSXZLHYXQFUCMFIAYHLMOMLYNEEMPJYFVSAUJMKVWKOVTFYPXSERRDVGCWOLHTLSWURMKJBBGSYBHVXOKGJOIRLEQLXPDAMDWHGBTIAMGQXCZHCWUCFHNATJNNGKCGZZRAQXVOEAKKGVE");

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
    msg.setTimeStamp(0.6175205427427941);
    msg.setSource(20318U);
    msg.setSourceEntity(135U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(185U);
    msg.state = 236U;
    msg.eta = 57864U;
    msg.info.assign("NKGQWPPYVQQJEIMMEBQXKPLF");

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
    msg.setTimeStamp(0.6195685260451236);
    msg.setSource(4334U);
    msg.setSourceEntity(161U);
    msg.setDestination(60131U);
    msg.setDestinationEntity(122U);
    msg.system = 36287U;
    msg.duration = 26993U;
    msg.speed = 0.30198360194538654;
    msg.speed_units = 167U;
    msg.x = 0.20146893945005406;
    msg.y = 0.4321542610409205;
    msg.z = 0.6492686853865016;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.025002216999382987);
    msg.setSource(17071U);
    msg.setSourceEntity(79U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(122U);
    msg.system = 61595U;
    msg.duration = 41490U;
    msg.speed = 0.04392143564444051;
    msg.speed_units = 163U;
    msg.x = 0.49249542968456894;
    msg.y = 0.6201390234943943;
    msg.z = 0.6024945330926536;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.8586166201956749);
    msg.setSource(27197U);
    msg.setSourceEntity(208U);
    msg.setDestination(43201U);
    msg.setDestinationEntity(196U);
    msg.system = 32575U;
    msg.duration = 42095U;
    msg.speed = 0.06620948148305084;
    msg.speed_units = 150U;
    msg.x = 0.849178073635814;
    msg.y = 0.21720250390620754;
    msg.z = 0.4742781070244724;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.0836637187964111);
    msg.setSource(45441U);
    msg.setSourceEntity(190U);
    msg.setDestination(14684U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.04711358327558968;
    msg.lon = 0.6753673462816632;
    msg.speed = 0.10231906112049283;
    msg.speed_units = 31U;
    msg.duration = 54901U;
    msg.sys_a = 39963U;
    msg.sys_b = 2155U;
    msg.move_threshold = 0.0401111921615005;

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
    msg.setTimeStamp(0.8521356232532419);
    msg.setSource(28115U);
    msg.setSourceEntity(212U);
    msg.setDestination(11955U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.8320661137790495;
    msg.lon = 0.7512923131530853;
    msg.speed = 0.7354038674288987;
    msg.speed_units = 131U;
    msg.duration = 26785U;
    msg.sys_a = 54013U;
    msg.sys_b = 62535U;
    msg.move_threshold = 0.36174157255585904;

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
    msg.setTimeStamp(0.5944272589518822);
    msg.setSource(1098U);
    msg.setSourceEntity(16U);
    msg.setDestination(6819U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.23474494508052368;
    msg.lon = 0.16177766790936432;
    msg.speed = 0.2453801600574197;
    msg.speed_units = 201U;
    msg.duration = 57130U;
    msg.sys_a = 2103U;
    msg.sys_b = 45543U;
    msg.move_threshold = 0.6263119441508535;

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
    msg.setTimeStamp(0.1338433154618558);
    msg.setSource(62295U);
    msg.setSourceEntity(146U);
    msg.setDestination(4727U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.22230715882713747;
    msg.lon = 0.33116386489001237;
    msg.z = 0.4807083057250532;
    msg.z_units = 245U;
    msg.speed = 0.5897793050862347;
    msg.speed_units = 243U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1646004569575229;
    tmp_msg_0.lon = 0.45334221036842337;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YKLDOUDWJPTJFXMOEYGZOQBAVJXOSZSMXWFNVPIFQLVYBORFMXBHPKNSIVJEUSBLQIBBAETEMATXMRUJAHGMPNLSLPXWBUUKVXOTTEJKKUWGWHIWRJLGHFOFWKCAONKNPVGIJLCVQQAZHDCGDBUARRZEQRNLVIDHWVDNPLYSPSRXGVYQKHRFKQIXYDLQYQZUCAEGZJN");

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
    msg.setTimeStamp(0.9660501055611634);
    msg.setSource(39962U);
    msg.setSourceEntity(121U);
    msg.setDestination(27628U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.12714229845285718;
    msg.lon = 0.3348868580695833;
    msg.z = 0.9610461177356486;
    msg.z_units = 238U;
    msg.speed = 0.36568471900470967;
    msg.speed_units = 70U;
    msg.custom.assign("ZDIVNXKNFXEIKLAJUZSNYOYDYFWWUCAQBSOZCYBJFWUMVDWAKGPIIHGHWVJLATMBVBYKYRNMCTXJBWRFIJFSUGRNEQXQOOTFOZLUWMBTGZQEEAPPHHNUEXJSRNOELRXTTQVZ");

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
    msg.setTimeStamp(0.5677109324224145);
    msg.setSource(46386U);
    msg.setSourceEntity(170U);
    msg.setDestination(53172U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.6794140860919747;
    msg.lon = 0.2512440354687844;
    msg.z = 0.2779845875145376;
    msg.z_units = 193U;
    msg.speed = 0.6916018105633134;
    msg.speed_units = 221U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04724686609604978;
    tmp_msg_0.lon = 0.9445894552940187;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OBGTCLNOZDEITCRTGMRNZBBJQWUFFNOYZNJNFRGSRTKYKXWRECPQDJGVHLWUBPRSKOSBZLBHABSFHLXJYFMYFHPHSTCKEOQKHZABWAFOTIMLNLJHICEJRAAWILIQIOZKDPUBVJWOGYTXUVDOWHDRCJSDKNWIYXMNXBGVLZYUEDNUGEAZXMVFJUQHODPWUCSQVZPXZMDVTEIGGRRAEGCVXSKLYQNPUHEWKFFPPTIVTPCXMLJIESMM");

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
    msg.setTimeStamp(0.28384790674793614);
    msg.setSource(47719U);
    msg.setSourceEntity(31U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.45903568648703263;
    msg.lon = 0.4830364052006091;

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
    msg.setTimeStamp(0.6061579324033588);
    msg.setSource(7857U);
    msg.setSourceEntity(99U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.2767497367452343;
    msg.lon = 0.6360248766723984;

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
    msg.setTimeStamp(0.7307305767377416);
    msg.setSource(64328U);
    msg.setSourceEntity(155U);
    msg.setDestination(48355U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.13930194982671706;
    msg.lon = 0.3886549834489951;

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
    msg.setTimeStamp(0.9294293639322753);
    msg.setSource(12030U);
    msg.setSourceEntity(186U);
    msg.setDestination(53865U);
    msg.setDestinationEntity(54U);
    msg.timeout = 46959U;
    msg.lat = 0.10119953317345387;
    msg.lon = 0.7820997202415834;
    msg.z = 0.2563551904220319;
    msg.z_units = 16U;
    msg.pitch = 0.8134134753867824;
    msg.amplitude = 0.35627720169515553;
    msg.duration = 51255U;
    msg.speed = 0.13540404071924728;
    msg.speed_units = 59U;
    msg.radius = 0.7002387019268387;
    msg.direction = 224U;
    msg.custom.assign("MABIMYYBAQCWKBBMAWKQUPFZASWJGOKIPEAAOOCQXHRAMNZNLHDQUTBCWFHRXVRLCXZNQFGDHKJYBLFKFVTCNZDPVIFEXBZVNWTHEDHHHSGWWEKGPPTGZCYSDXEGFQU");

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
    msg.setTimeStamp(0.8201505197730292);
    msg.setSource(50284U);
    msg.setSourceEntity(180U);
    msg.setDestination(49271U);
    msg.setDestinationEntity(9U);
    msg.timeout = 46142U;
    msg.lat = 0.8664838969504393;
    msg.lon = 0.6559412123780314;
    msg.z = 0.7018770284790525;
    msg.z_units = 185U;
    msg.pitch = 0.5053147968878942;
    msg.amplitude = 0.6652472944119281;
    msg.duration = 7961U;
    msg.speed = 0.1052226057648622;
    msg.speed_units = 184U;
    msg.radius = 0.5069235215112943;
    msg.direction = 25U;
    msg.custom.assign("IJHLYWWWKZPWRKGCXYFAUUAGAPMJTIEDTGTGLYDSYQAPXDTCWJDKJEOWMVBTMFNJJSMLCLQNEMGANLKNECUBDHKAFVHRSWABHRAYCLKCJMZOIOMGFXXQINIOZCCRRLRUFVXYVEVHGRHUIUVITPXIXTBQ");

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
    msg.setTimeStamp(0.9956333751069614);
    msg.setSource(13355U);
    msg.setSourceEntity(117U);
    msg.setDestination(44096U);
    msg.setDestinationEntity(240U);
    msg.timeout = 4974U;
    msg.lat = 0.5720222320447653;
    msg.lon = 0.6339326901367993;
    msg.z = 0.6873254509630413;
    msg.z_units = 79U;
    msg.pitch = 0.4220821756235812;
    msg.amplitude = 0.7069309271504316;
    msg.duration = 30658U;
    msg.speed = 0.5114312295477147;
    msg.speed_units = 60U;
    msg.radius = 0.9831410981104599;
    msg.direction = 216U;
    msg.custom.assign("MSYRZGRHNDQBGAGBHKNPTBDEITDVSWROTOJFKOIESUTWMIEZBIZGAWUUPIQQVJLOUZMFLTYUKGEKORYVQGNPLJIGOJUEKDDNHQMWYVDZFXIPWSBLWCVBKNLKAJXLCQDBPINMUKFPSATVSQKYKFSIXBQQWHDYRRRYREMSOPXTWYHNXOUEAXYFAUJYEEFCTIASVPJCVJVJSTGLXLQAZCRXW");

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
    msg.setTimeStamp(0.42273150741584187);
    msg.setSource(16053U);
    msg.setSourceEntity(242U);
    msg.setDestination(3483U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("REEWKCWAOKGSWMGRZUSQHOPIHPDDEHDSUTNYAVGYJKLFUSMWBDXFNPZHZCFRBXNIJBZYAMIRMWHODXYVGITKSRQJXKUJNWRBHYUUIVXWBEEMCOFRTCVKYSNAUSIEPDAPNTPZLIZJTCFXZYIJSDCCWXMCOBGMIVPN");
    msg.reference_frame = 191U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3598U;
    tmp_msg_0.off_x = 0.9105968042669889;
    tmp_msg_0.off_y = 0.3645120879789784;
    tmp_msg_0.off_z = 0.2049375679082368;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XRZYUHKORPXAXNDTUIVKIWRPZMSBNFCGLINYYCADLZZHKWPOTAZDYZDQSYEIDMUXRAGADJNPAHQVPSBSJDUHWFYLNCKJGSCKPXETBQWCPENNHZLLVJGGUECJUGIX");

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
    msg.setTimeStamp(0.1436021541468694);
    msg.setSource(59193U);
    msg.setSourceEntity(165U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("YKWPMJJURJRPKUVNWRUMRFVNQYDGADZYLZROKAWCUEAVVSUCLWVTYRZUBBXB");
    msg.reference_frame = 81U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40799U;
    tmp_msg_0.off_x = 0.6445436048267836;
    tmp_msg_0.off_y = 0.9499502581583472;
    tmp_msg_0.off_z = 0.4288757008537486;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ATGIFUHCJRQONZIRDKHLHVZFFLNUERTEWRCYFJBNJGJXXVDMVSIPUZLYBVJTLVRGLDAKIPISKVTXFGJDPZTFXEGKFPSYOQCBRBPACMRBDYZOSGUOWHEZBOGULTQCYOZXUUUPYKXNAKDMBEYSWDYTALHFAZCHMQUJKPQNTPXXAJWFGMZJVGHASMYMRLZUSNNSXW");

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
    msg.setTimeStamp(0.278890555216433);
    msg.setSource(57198U);
    msg.setSourceEntity(77U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("BXYBASQTPRJMUWDIRSTYIXEPFNCRBDCJALQWCLSAAVFDMSVVACHVTFHWUOSKQIFRTCSAPIHPMBXZGELSZUQSVNKJWOVLFHXITQPWYANUKNCREQKPCNYRULMXOOGCAHBUEXVDRCZFVSHXEBDITYY");
    msg.reference_frame = 25U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52957U;
    tmp_msg_0.off_x = 0.35111216474342977;
    tmp_msg_0.off_y = 0.7712478972432716;
    tmp_msg_0.off_z = 0.804535164939386;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BXOBDXVVVODQPWKHMFOALJMWF");

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
    msg.setTimeStamp(0.5883560645129395);
    msg.setSource(17012U);
    msg.setSourceEntity(68U);
    msg.setDestination(7562U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("UKGIZTIBMSHATLZSMZERJWFYXHUQBYMTDUAWSMJDSZFFSGVROJPIQFBKOMUXFPEAHA");
    msg.formation_name.assign("ETLVWNHBQLDKWONIMFLQPJGUKMFSEFY");
    msg.plan_id.assign("OZQVKPBSQZXPDYLQFTAHKALFOJMVNMNHPWZJLHHCDXHCMPVDUURFEYTZVKMKYPIVSUUEVSQESFRUZPZAZKNIRTBQGWRUJMJQI");
    msg.description.assign("OTKOUFXYXFSKLQEYJLNZXJBFTZMZEFDKYHWWRLGOSPQXDYGBPDIDYECTDLHHQUTOQIPJEHLAICBRORKBLDAMVHADBGEQANASCUHXXPSDUNKUIVUVRKTMMFRKNZCEWPFLDILOYMFSTPPKGAQJVFYARZXMBZYCPOQPQASIVQYMZGWWSOUNVHLDOECFTIEJNEBQICBBXGKWVHKCUCEAMPGNIUJXLUZZHSJVWRGGIRHBRJSWFWVMTORJCAXZ");
    msg.leader_speed = 0.9631461545455917;
    msg.leader_bank_lim = 0.05146596372164991;
    msg.pos_sim_err_lim = 0.5955122982229909;
    msg.pos_sim_err_wrn = 0.45515826511871227;
    msg.pos_sim_err_timeout = 35423U;
    msg.converg_max = 0.3555907526446571;
    msg.converg_timeout = 2331U;
    msg.comms_timeout = 30034U;
    msg.turb_lim = 0.7657977025415558;
    msg.custom.assign("RHWDMJPUKFSDZZVOY");

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
    msg.setTimeStamp(0.07843830730962609);
    msg.setSource(10111U);
    msg.setSourceEntity(101U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("RBUJNOOVBWCZUPQHHFKJVIFSTILTF");
    msg.formation_name.assign("RXOAEEZRVJXLZXJUSJFNVSDVOIQMLDUHVZJQTLEQCDBLPZQEGT");
    msg.plan_id.assign("BQSNAPZLRHFCSIVPAVGFCEPHXKHNMVODAWMJKNGYLZNDYFRVDBJSSEWOVYJFRGWQPCZSSBSERLTMFAVWCLPDXYWABYVXGEZYXEHKIGZMOBIMAIXVXCFMBDHUGOHQMEUQSKRRPSOXLVOXDXRTWIIECRMNBCFABSLPJJTTDXUIRHFYZGKNQTDUKAWTEWMKDWLUJTYNNKHCQLFOAATUOWBNFYDUZGZQEHG");
    msg.description.assign("RCCBCOCPVJFBXGVVBUTZHNPIHDSRONXTOVXIZRLGWYMGFMASUKLANDODGGAJZJXVMNOETZKZCSWXRFXZMBQJLMPIJGLDINFIKWYXCULRTZLIPI");
    msg.leader_speed = 0.01695173430405772;
    msg.leader_bank_lim = 0.009165921948712463;
    msg.pos_sim_err_lim = 0.09603778748743508;
    msg.pos_sim_err_wrn = 0.4498575467393504;
    msg.pos_sim_err_timeout = 18853U;
    msg.converg_max = 0.16780339790964383;
    msg.converg_timeout = 47961U;
    msg.comms_timeout = 46450U;
    msg.turb_lim = 0.02815896741455448;
    msg.custom.assign("GSVIHYLPCZXEVATAUWSJS");

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
    msg.setTimeStamp(0.2767996973112733);
    msg.setSource(3435U);
    msg.setSourceEntity(217U);
    msg.setDestination(30601U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("ZBIMMMQKKWADZGQELMXKVJTNDXYRYDFHTEGPQHAEFPTYBWMEBFRXHHLCDVFSIYINLJUHJUZIIABYRTOQIXYCRFZMJGPSVBKVALZWSGLUUKMPPURCRZNEWQYZWWUODDUOOFLDUINSNOMJEPAQFBKHTOVRPCWNDJLKABXJVVPSSVNKPTOLFOWMGLXCSCXIMOOJUCRPBHKYEZKSXTHUBRTJHYGSRHAQQENGANJE");
    msg.formation_name.assign("OGOOSGFVFPUBHUHKZMZLXSQJZEXYBEKEXSVRRZOGJUNTHVYWOTGCGSAR");
    msg.plan_id.assign("IULLZZZZAIXHHADYMEJHGCMWCUDXBXHFKJSXEQMWLUEOKTUBFUNTSTKYGWFQYVIGDSKAKJPWCOBOEWNIPRLPOZNHFTKGGSPDUGDKZMHOXDEDYAIMBQXPTXBAQJAESRYWCBLMVUINYANNJSSVALRJFLOYVSRCNCVFUEXVOV");
    msg.description.assign("PVNVEFDVTXYOGPYOFXDRGZNPKOFTVBSOZJUGRMXZBGGRMWCHSPBTQELPSBXANZUDVQALXHVCYAMOEEDSHMTAWXQAFYHNROWCGIJSYCMPSKIIXGEMGHBAYILRPXBRLXDLRVCABONSFCGKKTUDTYBFJJUJZDNMTONYFVDFQRLCT");
    msg.leader_speed = 0.38983062054820683;
    msg.leader_bank_lim = 0.35547824396706884;
    msg.pos_sim_err_lim = 0.42155050244042314;
    msg.pos_sim_err_wrn = 0.9281864242932273;
    msg.pos_sim_err_timeout = 999U;
    msg.converg_max = 0.4148551579783174;
    msg.converg_timeout = 58867U;
    msg.comms_timeout = 62872U;
    msg.turb_lim = 0.032252968320190645;
    msg.custom.assign("WATZOTCCISZAZIKPBCRPDHDNCXPPGJFOTGLEQCXDKOPJSFPMKVFIUDREYPHLZLYBEUOFGLHEXUVLZJOJDSJTMVXZNWJLZWBJXZIUURYUVUNAXWGGDEACUQIMCIOXSBMRQWQTFKR");

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
    msg.setTimeStamp(0.635755241396803);
    msg.setSource(47155U);
    msg.setSourceEntity(243U);
    msg.setDestination(27155U);
    msg.setDestinationEntity(129U);
    msg.control_src = 29665U;
    msg.control_ent = 122U;
    msg.timeout = 0.2078828019504585;
    msg.loiter_radius = 0.7810886114463641;
    msg.altitude_interval = 0.04537212645936173;

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
    msg.setTimeStamp(0.7649841723521615);
    msg.setSource(39680U);
    msg.setSourceEntity(38U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(125U);
    msg.control_src = 56793U;
    msg.control_ent = 113U;
    msg.timeout = 0.7025409739554561;
    msg.loiter_radius = 0.9118482079220711;
    msg.altitude_interval = 0.25065402482378873;

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
    msg.setTimeStamp(0.8236781177845216);
    msg.setSource(57465U);
    msg.setSourceEntity(62U);
    msg.setDestination(43768U);
    msg.setDestinationEntity(163U);
    msg.control_src = 3631U;
    msg.control_ent = 104U;
    msg.timeout = 0.618069206974212;
    msg.loiter_radius = 0.767919920743742;
    msg.altitude_interval = 0.7872812637354293;

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
    msg.setTimeStamp(0.3639429784917614);
    msg.setSource(42356U);
    msg.setSourceEntity(89U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(254U);
    msg.flags = 205U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.011656804831736478;
    tmp_msg_0.speed_units = 158U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9683397470652536;
    tmp_msg_1.z_units = 142U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9551605812900569;
    msg.lon = 0.34630903702953286;
    msg.radius = 0.11073906908033004;

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
    msg.setTimeStamp(0.7722856272725577);
    msg.setSource(20416U);
    msg.setSourceEntity(129U);
    msg.setDestination(40186U);
    msg.setDestinationEntity(113U);
    msg.flags = 214U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6844606494912353;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.12626264292559009;
    tmp_msg_1.z_units = 83U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.03780820939836427;
    msg.lon = 0.5931215883846542;
    msg.radius = 0.5238136610250754;

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
    msg.setTimeStamp(0.6175645223242041);
    msg.setSource(44803U);
    msg.setSourceEntity(205U);
    msg.setDestination(3773U);
    msg.setDestinationEntity(49U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5037015414905529;
    tmp_msg_0.speed_units = 223U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.19247539741653297;
    tmp_msg_1.z_units = 242U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.27226002676204497;
    msg.lon = 0.7823583725993766;
    msg.radius = 0.9629549127738809;

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
    msg.setTimeStamp(0.5091025507546156);
    msg.setSource(1307U);
    msg.setSourceEntity(47U);
    msg.setDestination(26294U);
    msg.setDestinationEntity(11U);
    msg.control_src = 55806U;
    msg.control_ent = 227U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 22U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9209021605652555;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.018312929602381067;
    tmp_tmp_msg_0_1.z_units = 51U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8692672532719912;
    tmp_msg_0.lon = 0.9989137667060278;
    tmp_msg_0.radius = 0.7718775777251421;
    msg.reference.set(tmp_msg_0);
    msg.state = 196U;
    msg.proximity = 8U;

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
    msg.setTimeStamp(0.1919222041439752);
    msg.setSource(59108U);
    msg.setSourceEntity(250U);
    msg.setDestination(15232U);
    msg.setDestinationEntity(222U);
    msg.control_src = 53760U;
    msg.control_ent = 239U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 80U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7462975386785011;
    tmp_tmp_msg_0_0.speed_units = 30U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.24999364656133383;
    tmp_tmp_msg_0_1.z_units = 200U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9558207885479224;
    tmp_msg_0.lon = 0.5496334547014714;
    tmp_msg_0.radius = 0.9812088166475306;
    msg.reference.set(tmp_msg_0);
    msg.state = 190U;
    msg.proximity = 165U;

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
    msg.setTimeStamp(0.6273023422261178);
    msg.setSource(46512U);
    msg.setSourceEntity(227U);
    msg.setDestination(16147U);
    msg.setDestinationEntity(88U);
    msg.control_src = 10906U;
    msg.control_ent = 217U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9475914278363045;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.383253859815438;
    tmp_tmp_msg_0_1.z_units = 26U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5221676372089754;
    tmp_msg_0.lon = 0.021057358625475753;
    tmp_msg_0.radius = 0.5644584404784072;
    msg.reference.set(tmp_msg_0);
    msg.state = 184U;
    msg.proximity = 55U;

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
    msg.setTimeStamp(0.48317150619865523);
    msg.setSource(3802U);
    msg.setSourceEntity(61U);
    msg.setDestination(41669U);
    msg.setDestinationEntity(2U);
    msg.ax_cmd = 0.732219673635991;
    msg.ay_cmd = 0.3027403277649243;
    msg.az_cmd = 0.6196999321216308;
    msg.ax_des = 0.10081870795467474;
    msg.ay_des = 0.04129320686160132;
    msg.az_des = 0.5215934512190259;
    msg.virt_err_x = 0.254036697128343;
    msg.virt_err_y = 0.8511830784843679;
    msg.virt_err_z = 0.4909565776052508;
    msg.surf_fdbk_x = 0.8987199443527145;
    msg.surf_fdbk_y = 0.9044280904096692;
    msg.surf_fdbk_z = 0.5876286664587643;
    msg.surf_unkn_x = 0.350611415916285;
    msg.surf_unkn_y = 0.34136445356548595;
    msg.surf_unkn_z = 0.1443302892667815;
    msg.ss_x = 0.02073302875962124;
    msg.ss_y = 0.5162898174704895;
    msg.ss_z = 0.27253251481185503;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FVBBGYXMSVCUXTKEBLAZNCZQFRSXNAGGSIGYDHXJLXOVHTJYHJHLIVBWZSARYHOOFEW");
    tmp_msg_0.dist = 0.28404666770122833;
    tmp_msg_0.err = 0.8023142524432142;
    tmp_msg_0.ctrl_imp = 0.4358008732866693;
    tmp_msg_0.rel_dir_x = 0.8675996658830687;
    tmp_msg_0.rel_dir_y = 0.7885645126954047;
    tmp_msg_0.rel_dir_z = 0.5203560468756857;
    tmp_msg_0.err_x = 0.8653756063454838;
    tmp_msg_0.err_y = 0.3773303304617316;
    tmp_msg_0.err_z = 0.9703254027442495;
    tmp_msg_0.rf_err_x = 0.4233896408755681;
    tmp_msg_0.rf_err_y = 0.3992123077822559;
    tmp_msg_0.rf_err_z = 0.009768847665162061;
    tmp_msg_0.rf_err_vx = 0.7513919861683551;
    tmp_msg_0.rf_err_vy = 0.3519571468698486;
    tmp_msg_0.rf_err_vz = 0.3015887315358854;
    tmp_msg_0.ss_x = 0.784009764384356;
    tmp_msg_0.ss_y = 0.4568619796504706;
    tmp_msg_0.ss_z = 0.07681261088520897;
    tmp_msg_0.virt_err_x = 0.5633632007263742;
    tmp_msg_0.virt_err_y = 0.8251030407050695;
    tmp_msg_0.virt_err_z = 0.3853417757335673;
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
    msg.setTimeStamp(0.0716963367369754);
    msg.setSource(55800U);
    msg.setSourceEntity(109U);
    msg.setDestination(25436U);
    msg.setDestinationEntity(30U);
    msg.ax_cmd = 0.9600932565948823;
    msg.ay_cmd = 0.7532799865562785;
    msg.az_cmd = 0.20527907726910777;
    msg.ax_des = 0.5424267740032951;
    msg.ay_des = 0.37970504721927023;
    msg.az_des = 0.4389644635319402;
    msg.virt_err_x = 0.9545822222920238;
    msg.virt_err_y = 0.9278914361184895;
    msg.virt_err_z = 0.6493498724129012;
    msg.surf_fdbk_x = 0.9469276840772208;
    msg.surf_fdbk_y = 0.6302184688601351;
    msg.surf_fdbk_z = 0.3312178568368733;
    msg.surf_unkn_x = 0.43998424327873886;
    msg.surf_unkn_y = 0.18780725040733526;
    msg.surf_unkn_z = 0.9961161409063319;
    msg.ss_x = 0.7530423749278501;
    msg.ss_y = 0.08710387834049371;
    msg.ss_z = 0.6171200530193275;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NUNHWZYVASUDAOOWJLVXPUEEFETKUCXDXMAKNOFKKMLEFSTTTHLDEMGMWPRWJEQSFWZECLDLUPGKXZTOAGBAOWNZMHNIAWRGJRGZIJTWLXJZRYNG");
    tmp_msg_0.dist = 0.8168679519309194;
    tmp_msg_0.err = 0.9882221383356246;
    tmp_msg_0.ctrl_imp = 0.7279166608923378;
    tmp_msg_0.rel_dir_x = 0.9354960188583669;
    tmp_msg_0.rel_dir_y = 0.8503009774295546;
    tmp_msg_0.rel_dir_z = 0.952839389618623;
    tmp_msg_0.err_x = 0.4890359259086854;
    tmp_msg_0.err_y = 0.8823662724885395;
    tmp_msg_0.err_z = 0.8846875993066393;
    tmp_msg_0.rf_err_x = 0.5247675950450883;
    tmp_msg_0.rf_err_y = 0.08520086522364534;
    tmp_msg_0.rf_err_z = 0.3718569238516267;
    tmp_msg_0.rf_err_vx = 0.3440652503665014;
    tmp_msg_0.rf_err_vy = 0.0582442072735333;
    tmp_msg_0.rf_err_vz = 0.8704913866038266;
    tmp_msg_0.ss_x = 0.5133411627300902;
    tmp_msg_0.ss_y = 0.5167184066115839;
    tmp_msg_0.ss_z = 0.23394534513009424;
    tmp_msg_0.virt_err_x = 0.09984746006271406;
    tmp_msg_0.virt_err_y = 0.040542239242226885;
    tmp_msg_0.virt_err_z = 0.7448070317211534;
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
    msg.setTimeStamp(0.9409241764559365);
    msg.setSource(29251U);
    msg.setSourceEntity(252U);
    msg.setDestination(11675U);
    msg.setDestinationEntity(244U);
    msg.ax_cmd = 0.3524021065227083;
    msg.ay_cmd = 0.6638397002663604;
    msg.az_cmd = 0.2425214777649214;
    msg.ax_des = 0.43635843342423053;
    msg.ay_des = 0.160564022954796;
    msg.az_des = 0.4841023887327266;
    msg.virt_err_x = 0.44726431505641984;
    msg.virt_err_y = 0.045426636520795816;
    msg.virt_err_z = 0.618348182657719;
    msg.surf_fdbk_x = 0.2034869455107644;
    msg.surf_fdbk_y = 0.3100735121266296;
    msg.surf_fdbk_z = 0.6016659045670026;
    msg.surf_unkn_x = 0.4323700692207866;
    msg.surf_unkn_y = 0.8067227217668306;
    msg.surf_unkn_z = 0.8526897290477026;
    msg.ss_x = 0.09327469320233894;
    msg.ss_y = 0.0658725810727282;
    msg.ss_z = 0.6732759757901616;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AWCIFGSXFRIHTBJAQZFCDXWYPUZTRYUFFBS");
    tmp_msg_0.dist = 0.5923797676443784;
    tmp_msg_0.err = 0.8489410594476867;
    tmp_msg_0.ctrl_imp = 0.8109653539277915;
    tmp_msg_0.rel_dir_x = 0.5838787795342535;
    tmp_msg_0.rel_dir_y = 0.7397618533336969;
    tmp_msg_0.rel_dir_z = 0.9687528682041208;
    tmp_msg_0.err_x = 0.15708159184308068;
    tmp_msg_0.err_y = 0.9954797247033137;
    tmp_msg_0.err_z = 0.7984249996709439;
    tmp_msg_0.rf_err_x = 0.025442092903613767;
    tmp_msg_0.rf_err_y = 0.7853818143767897;
    tmp_msg_0.rf_err_z = 0.6250034424891289;
    tmp_msg_0.rf_err_vx = 0.4156037518877733;
    tmp_msg_0.rf_err_vy = 0.5056741610397718;
    tmp_msg_0.rf_err_vz = 0.9638939681827745;
    tmp_msg_0.ss_x = 0.7459295581389429;
    tmp_msg_0.ss_y = 0.020703980177669723;
    tmp_msg_0.ss_z = 0.7793577207102891;
    tmp_msg_0.virt_err_x = 0.6706891273681492;
    tmp_msg_0.virt_err_y = 0.9213679277264063;
    tmp_msg_0.virt_err_z = 0.7438622122231089;
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
    msg.setTimeStamp(0.048843904826677775);
    msg.setSource(52598U);
    msg.setSourceEntity(189U);
    msg.setDestination(49970U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("BLBTGASLXSIEVYVDUVUTLSXMPWZHLZGZWAHTIRYJQNTUOLIYGMCFSQJOFYZOJMMVILZXZEAXWUBHXTPLURFKPCMCAZZCGGRIWBFDLBIHWEGMFQACXRZDQBPMPDYNJQADQVNGNAKSEHGJCCOPMNJIECUEJQQMNTPYTWTBRKFJHKPXKHEHNDK");
    msg.dist = 0.9645241609271819;
    msg.err = 0.827396619839476;
    msg.ctrl_imp = 0.6842626798370527;
    msg.rel_dir_x = 0.2717411036613845;
    msg.rel_dir_y = 0.940273548369786;
    msg.rel_dir_z = 0.7565468108366137;
    msg.err_x = 0.9395252237233652;
    msg.err_y = 0.9390411660824244;
    msg.err_z = 0.06757346766644134;
    msg.rf_err_x = 0.946550730087257;
    msg.rf_err_y = 0.24252125628492172;
    msg.rf_err_z = 0.4004334126722363;
    msg.rf_err_vx = 0.639704196643683;
    msg.rf_err_vy = 0.14218937059316694;
    msg.rf_err_vz = 0.9040461181697316;
    msg.ss_x = 0.4650446852511111;
    msg.ss_y = 0.6029891848067891;
    msg.ss_z = 0.9394469091011219;
    msg.virt_err_x = 0.5243913353995463;
    msg.virt_err_y = 0.5738515206122538;
    msg.virt_err_z = 0.8204887314188639;

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
    msg.setTimeStamp(0.048119067130922955);
    msg.setSource(39311U);
    msg.setSourceEntity(103U);
    msg.setDestination(33168U);
    msg.setDestinationEntity(81U);
    msg.s_id.assign("SHUGRPQEMDQUPXPUHTKDIBFDKLY");
    msg.dist = 0.3685655390898348;
    msg.err = 0.7332396339932906;
    msg.ctrl_imp = 0.125602712223703;
    msg.rel_dir_x = 0.887443666967333;
    msg.rel_dir_y = 0.5305403595560645;
    msg.rel_dir_z = 0.6396092029440775;
    msg.err_x = 0.9521274615778715;
    msg.err_y = 0.40503944667143665;
    msg.err_z = 0.5823502449896434;
    msg.rf_err_x = 0.1266900243836987;
    msg.rf_err_y = 0.49641388589419844;
    msg.rf_err_z = 0.723681193243075;
    msg.rf_err_vx = 0.5098015013557378;
    msg.rf_err_vy = 0.6877092056476733;
    msg.rf_err_vz = 0.17390496957745571;
    msg.ss_x = 0.9209049538561089;
    msg.ss_y = 0.5484735848690558;
    msg.ss_z = 0.5319657496517292;
    msg.virt_err_x = 0.8360022013383481;
    msg.virt_err_y = 0.8276014312789145;
    msg.virt_err_z = 0.6747936727713837;

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
    msg.setTimeStamp(0.034268152744427294);
    msg.setSource(5074U);
    msg.setSourceEntity(13U);
    msg.setDestination(58765U);
    msg.setDestinationEntity(172U);
    msg.s_id.assign("IWOTPJFQUNHPICKXBAFZPBXAZALJTJXFTRVLMYXMSIJUSBRSOEEDYEKYBBAMKNLCJMQPCOLDFNWZHFEVKTAVHDRQPWJVNCJSWBNCSPKGWDDDEBRANRCXSNZDAJKFTXWCIPGOEUOMRZCIBFRLPCMVTDAKEQRTXEZNPH");
    msg.dist = 0.32634024045181476;
    msg.err = 0.8342223511989052;
    msg.ctrl_imp = 0.28190107797337605;
    msg.rel_dir_x = 0.5922236799664686;
    msg.rel_dir_y = 0.5340404382739612;
    msg.rel_dir_z = 0.645474168375319;
    msg.err_x = 0.7528500937870986;
    msg.err_y = 0.9486433771974666;
    msg.err_z = 0.9329013661863942;
    msg.rf_err_x = 0.11411183614995857;
    msg.rf_err_y = 0.13308694863702508;
    msg.rf_err_z = 0.6629884781970558;
    msg.rf_err_vx = 0.8700010377242251;
    msg.rf_err_vy = 0.4231913266160945;
    msg.rf_err_vz = 0.1569620035318563;
    msg.ss_x = 0.9540734032852877;
    msg.ss_y = 0.0839720075281688;
    msg.ss_z = 0.6835912070228233;
    msg.virt_err_x = 0.5148080911848469;
    msg.virt_err_y = 0.10734713475202196;
    msg.virt_err_z = 0.9250649262794;

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
    msg.setTimeStamp(0.47309187393200236);
    msg.setSource(47430U);
    msg.setSourceEntity(233U);
    msg.setDestination(32160U);
    msg.setDestinationEntity(241U);
    msg.timeout = 54830U;
    msg.rpm = 0.631376960568023;
    msg.direction = 253U;
    msg.custom.assign("DKNEXGTSROYXVCVBZVUEUIIRPXDKLBEKPMSODRFFOUWLINFJHQBCBIGIXAWYATGQUSXVOPGTEICSQNEOXWGDUXIJOCJFYXEKBZPNHPNTPICNZUHAJICHZFALGEMFKDRSWCCAUKNUGTDYANWGNVZHKFPAMONBAZTPBDRZREEBQVFKKHLSYMBTPVYSJCYLSQKQJQHSL");

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
    msg.setTimeStamp(0.3136195494831835);
    msg.setSource(42014U);
    msg.setSourceEntity(147U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(163U);
    msg.timeout = 52840U;
    msg.rpm = 0.0938042009300355;
    msg.direction = 123U;
    msg.custom.assign("OFEDRAXNLVWIHRHIFDBLFMMUYUPHLNMFQTRCIQAWHUBOHOZEXRZNVXCNDHACBCFIBRIOGUDQIMMVYLPDPUCSGJYHIPHTYKQBYJVVXDQSSLQUDUBGXSW");

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
    msg.setTimeStamp(0.6094354899915191);
    msg.setSource(42631U);
    msg.setSourceEntity(79U);
    msg.setDestination(57622U);
    msg.setDestinationEntity(5U);
    msg.timeout = 47972U;
    msg.rpm = 0.7812673175884012;
    msg.direction = 50U;
    msg.custom.assign("JFLIFFORWILOSDANVXRKWWXNXBVAJQUWJNNVJEWXPYZRODOFKLMZDEGIOISYPPDPUUOBXDQMRQATSRRXVCYGCAQZEGRAZEUNZKWYJZCHDWZGUACQOKMDVBLHSBETXFKLFHGCNYLSXMNYMMQQYTLVYFB");

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
    msg.setTimeStamp(0.2302297083946211);
    msg.setSource(54056U);
    msg.setSourceEntity(150U);
    msg.setDestination(20423U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("QSJDPGEQZAFRZRSBVMIKZDYRLSXEXEMQLCSDTDJZQISVOCNZAIKWYTXYTJNZWQLCXLVFDMYBTTSVQTGJFWGHXOWJGRENVVMJFUPEHJFJYGCEYSMLIOBUTSALVGYLFSVZKEKGKQQUOCOAMQOEQPAXGYCNORORAUHZOSFIHUKWXBORJFALIARNTF");
    msg.type = 205U;
    msg.op = 242U;
    msg.group_name.assign("NEJBGRMHSENVAXVKHRYJPIWTYFSMDAISEFJIEDHZWSCOLDLFGPPTILRKCZNRQJWYNZEGMNISDOYVBAVFALJGKZQBQFDPWNKIQLQTSSAGCGOGMZZNSHEIOXYUBCYQMQMCONXVJZWZTCUVLXDXVPMXYFOHJWJMPPQJHURGXJT");
    msg.plan_id.assign("DEHRQIMCRFAJJKJOBTRNHCGVZVQTYMCYZBATVHYDKABJXUXPIBJ");
    msg.description.assign("RRVEKYCSYDSZSUKFLGYUJSGIGOLPZRQHTCCHWKEHXADXBYCUIZKAW");
    msg.reference_frame = 74U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38548U;
    tmp_msg_0.off_x = 0.5453105751819227;
    tmp_msg_0.off_y = 0.9452227154876935;
    tmp_msg_0.off_z = 0.6254972828313812;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9613750556479995;
    msg.leader_speed_min = 0.5523680688857119;
    msg.leader_speed_max = 0.574686535636894;
    msg.leader_alt_min = 0.4654919412716947;
    msg.leader_alt_max = 0.30427482280266416;
    msg.pos_sim_err_lim = 0.6281813276956608;
    msg.pos_sim_err_wrn = 0.14456975284577056;
    msg.pos_sim_err_timeout = 49275U;
    msg.converg_max = 0.5098744723184522;
    msg.converg_timeout = 24122U;
    msg.comms_timeout = 40371U;
    msg.turb_lim = 0.931553201134753;
    msg.custom.assign("HOPJPAZHTBORKBMWSUJDVMTENENNGTSVJFTSYYADIPEWZGIGDWHPMAHDDZTTAKZFVVVFYRPIQFKSUVFEBVXSWSUCILTRSQUJXDRGNBHLNMBVFPKMGTJDKCNMPQYLXCZVZCMJCXOXQEXRFNPKORJQSEWNDZGJOCFWLOBUWNMIIHXCFRQWIHEHLCBAUPYOYXXXASQNUWCBKRWGURO");

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
    msg.setTimeStamp(0.777018874188468);
    msg.setSource(44576U);
    msg.setSourceEntity(217U);
    msg.setDestination(65199U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("ZQKYVEKAUFVYPBCPXGAVUFKTXILCSMEJZSQDWPWEHOORUAQUFVTVXGZZSOZKQNZJYMNICHNGRVAJXCAONAGESIITIRRCPFJKHJPECQVPYQWRZETDWOGZLJJKPRDQHTAYVSWLIYUDHBLFBDHDREKHLMIVLZQYFFBHGSLPPBGCMTEXUMQBVTMQSXMWKOLECNONRZWPAFYUGFSLOYCKTJRUEGCUAINNKTDHWNXOTHRIXMNBBOSUFGJBDMASDXDWJ");
    msg.type = 93U;
    msg.op = 223U;
    msg.group_name.assign("ANOWKKRQLLIEQ");
    msg.plan_id.assign("VWMEPDMXQGSEORVLLBNTUGMJOJCSNIXXBQHCPOEYCLZQDALNYEFCMQNKBFDIUJPWWHFXIBNKX");
    msg.description.assign("FANNMMKQSPBWIZAPLHZKOCSUEWKQLZETLCQSJTMEUPEUUTOHTIBPQYKZELQAWWQZENRNMBJYKXEOWDLRZQBFLMHRTVFDYIBRNNAYFOOZRWRTRHDAXCJDPPEKVQIJ");
    msg.reference_frame = 145U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15616U;
    tmp_msg_0.off_x = 0.7330703896291456;
    tmp_msg_0.off_y = 0.9640506809226075;
    tmp_msg_0.off_z = 0.20394138534898965;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.12884193802653687;
    msg.leader_speed_min = 0.8897814767482345;
    msg.leader_speed_max = 0.249121870877406;
    msg.leader_alt_min = 0.26300558815591857;
    msg.leader_alt_max = 0.108392273652687;
    msg.pos_sim_err_lim = 0.8797281664876472;
    msg.pos_sim_err_wrn = 0.06603526907224522;
    msg.pos_sim_err_timeout = 3339U;
    msg.converg_max = 0.36804843872991133;
    msg.converg_timeout = 10093U;
    msg.comms_timeout = 8001U;
    msg.turb_lim = 0.07411062047979822;
    msg.custom.assign("DCYWHBUBQEGFPWZMZPZFISBHTASFELNLEYWOMVDRDHKQLXYECFWASYKYEROORCNYZLAZAOEBTDRWIYVRTXOZXFLAUERIQKANFXWMCPMNRUTJKVSPJLISYYNKIGFVNKMRAGWMBZBSFLRKVNGTILTXBAYUJLSUDWCPGZUQKFGJQKDPVAZECPLJDTDQHIUDJIJCEHGQPBKEVVSHMWCMMXXTNPOB");

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
    msg.setTimeStamp(0.5947182413384063);
    msg.setSource(37800U);
    msg.setSourceEntity(122U);
    msg.setDestination(39280U);
    msg.setDestinationEntity(145U);
    msg.formation_name.assign("XQSUWVEGMODHLYCDNHEGUAETDGBGBWISD");
    msg.type = 154U;
    msg.op = 134U;
    msg.group_name.assign("JBUCVEZHBDLAJRDAJMTVNMFTYFFUQQZUSGOKITBKTISMTLXGBFJVCLECDGPRNQSYAWPOUNNCRLPIYOLHELQVCSCQHJVWLWZECANPGKSHRBLPCUBRXMKRMRAFXGOAIPJILZNGTREQAIYDYQSVPMGWNKSVOMISQTJYODKSKRCODRWWWXJUVETPUDIEHBHWZFHGAJPFZDPTMXHXIBNTXCWKYMBDZWXOYZEFSKKMBFOJNAXEIUHXNUVAYLVGQOEHZD");
    msg.plan_id.assign("ZEWAGCZUCPPLIODGWTQNIUYSYTTRBRVYJSLRRBSAKULXZQAWATHCKKJTZMVFHXBVJZGEQETMXGMPCQNZGQISJBDELDDAVMDOEISUJHHCNGUYLFOHDRUJPEW");
    msg.description.assign("GAZXKJZZPNJVOWOANINXWCSOQQZUMAXCYCQDSMCSEMLADVNLWDOKOHIRCAKKFJUBGDMOYNEJDPWQCQBIIBXZWSSHALVRBEEDHVUZJKJXTUVUWULKQNYNOZHOJPHYEFLTUHLVIAWMFXNBGWCGXQPIPRBEVXUZSTVCPAPOJAIUUTSMCKYVZRHWEMTJYYNTFQMTMVRDBGEHOYMKENRFAJIFTPRPFBIFSPDIKGGDLXYDCQGXBTSYLRZREBGHLRGFFT");
    msg.reference_frame = 57U;
    msg.leader_bank_lim = 0.6673146945253224;
    msg.leader_speed_min = 0.6136996935890262;
    msg.leader_speed_max = 0.5374773046374763;
    msg.leader_alt_min = 0.3079448850093739;
    msg.leader_alt_max = 0.5750656566042174;
    msg.pos_sim_err_lim = 0.1732375507303635;
    msg.pos_sim_err_wrn = 0.0755173575259449;
    msg.pos_sim_err_timeout = 8869U;
    msg.converg_max = 0.8076661058546794;
    msg.converg_timeout = 22174U;
    msg.comms_timeout = 10274U;
    msg.turb_lim = 0.3647909086443397;
    msg.custom.assign("CKTFUDNEMERPUQAGTIAWMHZCKCFUPP");

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
    msg.setTimeStamp(0.6688879730465302);
    msg.setSource(62104U);
    msg.setSourceEntity(175U);
    msg.setDestination(50159U);
    msg.setDestinationEntity(252U);
    msg.op_mode = 16U;
    msg.error_count = 51U;
    msg.error_ents.assign("XVEEMWSOTAXILBYFPQKNAJBIVKOZIOGOEHNFBTBOUZRQQSMQDCJSCGLZLKLQRDCWMVXZPBKGRIQAULKVYRATVEHGATYMFIBRPQXJBANPCHWLYTVNAUDQNP");
    msg.maneuver_type = 2565U;
    msg.maneuver_stime = 0.6131429944646959;
    msg.maneuver_eta = 17279U;
    msg.control_loops = 2212472055U;
    msg.flags = 102U;
    msg.last_error.assign("BDVLKJPNBIXHGYSPIADRUUSMVSYAVZNOYPPEUYELVBKSFHOTMFWMYQIJGNCNZXGLUMODFXJGDNLEOFESNNSHQTYEDPLRYHTRWCCGWRUKLODBRIWGCNTMVBOFUHPVHZNZLILHXWBSRESRGQAD");
    msg.last_error_time = 0.9420371475593659;

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
    msg.setTimeStamp(0.8303563245440422);
    msg.setSource(10988U);
    msg.setSourceEntity(154U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 41U;
    msg.error_count = 137U;
    msg.error_ents.assign("GJQZCAUXYEVMGMYLK");
    msg.maneuver_type = 49020U;
    msg.maneuver_stime = 0.9745928409275626;
    msg.maneuver_eta = 1934U;
    msg.control_loops = 3763146069U;
    msg.flags = 18U;
    msg.last_error.assign("JVUIKPYVYMDCDOXCYKNXCSBWIGRLOELSZHHHZJQBSFLUVNKDKEQQAAYIXHCUTVOQFHSGOTEBJTXALERKFWYBMKLPVIIWRMUPKQYMTRFKZBTZXVRYGEBPBPUGNSEXMNBABCAVMZFKPEFGNDMOASCFASAICFXZQPONHWKGWUOD");
    msg.last_error_time = 0.07263689001612617;

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
    msg.setTimeStamp(0.87303280304887);
    msg.setSource(14274U);
    msg.setSourceEntity(58U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(11U);
    msg.op_mode = 27U;
    msg.error_count = 207U;
    msg.error_ents.assign("EQLBOZJMMXLTYXZQVWMIIMOMZRDMYAIYMPSJYHABIIWOVQECJLPDXESVGYZIFKSSUFRKLUSTEQVDPBDTYJ");
    msg.maneuver_type = 44833U;
    msg.maneuver_stime = 0.4523103488223631;
    msg.maneuver_eta = 5852U;
    msg.control_loops = 3927658819U;
    msg.flags = 177U;
    msg.last_error.assign("TEXIRRKSJDSYHVVTPKSJZYDMVNYSHUMOOSICHXTHEJORPXBAQTLZZCFNZIDJEVNYYJUNCGRVRLIEGKWKUWHQHXYPPJKMNQXMMDALNBAGXYEUOWVGBTFHQELKAICTMULKAVMVOEKMECIPBPVUCRLBIDFHBWSRFURTSQQWNTNHDPFNAQOXVXEEODZOWWJUQBFROLW");
    msg.last_error_time = 0.9513845663128693;

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
    msg.setTimeStamp(0.9901260185105276);
    msg.setSource(48695U);
    msg.setSourceEntity(89U);
    msg.setDestination(63139U);
    msg.setDestinationEntity(169U);
    msg.type = 80U;
    msg.request_id = 3007U;
    msg.command = 34U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 5955U;
    tmp_msg_0.name.assign("GVRBMASOEHCA");
    tmp_msg_0.custom.assign("MCDZXOXFLBVBQPFCITNDOADCMLMNJSXNONPKACPJDJTIDNUKWLRIHTPGFQEYNEUMYORKQNTSVZMSFKRWDHXJTIEGICNPOLHHIB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49919U;
    msg.info.assign("BTPOAZIQFGLXXRCCKXJFWLQIDECGYTEUPZPRMSIKENPYMRTVDAYSHBYXHDLWFLPBRJYYVGBJFUSMOIISGXVYZONZQURBPHDLZWOHFNTHOEGLCMGQPROKGZTFU");

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
    msg.setTimeStamp(0.3122613031105007);
    msg.setSource(52787U);
    msg.setSourceEntity(90U);
    msg.setDestination(32770U);
    msg.setDestinationEntity(147U);
    msg.type = 82U;
    msg.request_id = 46213U;
    msg.command = 164U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 38766U;
    tmp_msg_0.control_ent = 123U;
    tmp_msg_0.timeout = 0.12535553360210938;
    tmp_msg_0.loiter_radius = 0.9821398262835542;
    tmp_msg_0.altitude_interval = 0.430535575583354;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56895U;
    msg.info.assign("OLYCHNVEBZMJDIVYDNLZJUAAWIZGKGRNQUDHZMGMOGFTSTVGEOJIXGVHBCPCENHQYOGQDCOOTYOYEYDLICUXZLPMSUVOTQMIJZXUWVUESWSWJAIXTCUYLAGKAIAVZWBZKQBGMDHYNZDJXTSFABRIRBHJKENFBLRETJIHNUKTDFLKRHVRUUGNZSQ");

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
    msg.setTimeStamp(0.21387963035705948);
    msg.setSource(58875U);
    msg.setSourceEntity(21U);
    msg.setDestination(46047U);
    msg.setDestinationEntity(194U);
    msg.type = 214U;
    msg.request_id = 30344U;
    msg.command = 219U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 58691U;
    tmp_msg_0.custom.assign("FSLUMKIDYFOMWUVTPJVGZGAMUCRFBHPTNCVECWKAUAKLQYECKOYGHARCPQBEWNIHEBHBNWQYJXVYZJTEVNPNMSXSKLMHYDJBWSGBCJIPAZWLPMGLUPTITYLMXFXRQJEGDINNMNJLFSDXCQTTWQQXVSRGIAUFSIZUIAUZDDEPKHRMFLATFAPWOBDQRN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12675U;
    msg.info.assign("SZJMSFSAQTMARUKLIMUMHEBUOFUQAWFCCKGVJCEZJFQDHKBYTYSRHPGJAXNSQZFHGDKDOMHUJEOTWDRRTXZDPKNZLSINTYNIVILJXEEPFCXVJANTZFOOECADSYMQ");

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
    msg.setTimeStamp(0.702188601875734);
    msg.setSource(20484U);
    msg.setSourceEntity(105U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(132U);
    msg.command = 145U;
    msg.entities.assign("JNGIKACZADNFUPLLYLCEFMWKOVQWIHEKDALXZZITOCCRTCJNMBDQLPLUGUVNULXBYOGKXRYBYAITVTXHEJONCWRXFXDBXUFURSYULALAAZRHAWETQRIMIKIVSOWE");

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
    msg.setTimeStamp(0.7137118922782261);
    msg.setSource(28453U);
    msg.setSourceEntity(248U);
    msg.setDestination(796U);
    msg.setDestinationEntity(139U);
    msg.command = 216U;
    msg.entities.assign("YSHZVDUIMHFSSCOFIADAYOKTVZFRNZGGTAMOANQUXZXDPLXKHVXQLPI");

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
    msg.setTimeStamp(0.24642067206206497);
    msg.setSource(17594U);
    msg.setSourceEntity(109U);
    msg.setDestination(42336U);
    msg.setDestinationEntity(126U);
    msg.command = 170U;
    msg.entities.assign("MVYVHWVIMTYRFWCGTWXJWXOKBE");

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
    msg.setTimeStamp(0.7563628851231997);
    msg.setSource(62056U);
    msg.setSourceEntity(73U);
    msg.setDestination(51125U);
    msg.setDestinationEntity(177U);
    msg.mcount = 246U;
    msg.mnames.assign("HAQXFAQHEZYEXMPNGPCOBCDINRGBTFVRIHIJYNUVSTUHDLKVAKRJSPEWCSDHEVHOZMZGFRXWREJMUDQHCOCNOZQXNWBIMVOGXFIUESXGSXPLVTNABYZMGQFBULDFREGYNWQTSOVPOCCEOLSVTAYHRGJWCYXAIPKLNYTITXJMBQZSWFWFIL");
    msg.ecount = 232U;
    msg.enames.assign("VKPAAOOAOMRXNJEGLYCLAPNYZWECGLTWFIVLHDPIIBJMXJKANQFBFUSSJFDKLDJZCEMJIQKYGPYZPGRWDYDRVMEPDXFTLHFFCRJXROGGOBMCPBHQECYOHKMZSNWDVXUYNMPOIZHQEWNCZKHTHTJMYRUTJNUECYWVRIVASPSNQZWLSSLLXQXBARIWUKGGAV");
    msg.ccount = 139U;
    msg.cnames.assign("UECFTGCFAIGJWXWSEIVPLCJZKYVNXPXUIERFOLXQRFQLTMYYATIKCJFGHDSOWWMTOSOSQFRLWPJXQVNDGEXBWENVKYKYBUDCGICXZXTSDZRJSLMPQUPCZYPSTPYIQBCXHHNVRHLTBBYNJHIORDUWZOVDMURUEDCROZPPPSKJBLDVAKAMDSJFGBIRBVUEGZJXUYTLALMGEVFKBCTMZH");
    msg.last_error.assign("OBTVRSUHXGWPZQLNQOGKZXOYMUJBYYKWFRIGGHQCVVAVXYLMZBWSSGHKTUERDECWSCYEFITLHFXOEYZQDTNIVCCMQTFCISINSFOZNBSDNVTMIOVARWEDEJJHKMGPNLIAWLRFZCSKXIILTXYUMZBBNMDWKNBHZPFQPUZAXJUCKXXTDEPKSMMDPHRYKPRPEWHAXUDOWLAZUSVUQGVQBOJPGAFDBHAGEBTFFKRJJCQALOL");
    msg.last_error_time = 0.3417223492072575;

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
    msg.setTimeStamp(0.4939298066459141);
    msg.setSource(62453U);
    msg.setSourceEntity(141U);
    msg.setDestination(3204U);
    msg.setDestinationEntity(228U);
    msg.mcount = 178U;
    msg.mnames.assign("FHWCVZMJVSDQSLCEXKZPZXALFXBUZGQLOPDZCJWYLHNYGHFIWGACNUHEZEJMOKIWNGRUOFXXEGWKV");
    msg.ecount = 46U;
    msg.enames.assign("PEERFLIOCHFAIPUTAUWJMPKBDZCMOSXFZYDINESSDDPZYYRFSSTXCUKQWBWARLNAGXUBRCBCLMOUAQZSICYQYDRGJVYCHXLJQHMCEAJFNCWKPVOKOGGOGYULTTFBFEEKVDTNMQXLUTWTHZTYJZEHRSSQNFJACAOBVLEFT");
    msg.ccount = 61U;
    msg.cnames.assign("SOKKBIICOSRFOAZZXSRVMRZOZULWADYYQMSUCGAFDUGPJZABVFNFBCWEINWULTPBAUKZXKVQCQLXHCVI");
    msg.last_error.assign("IHVSCZVBYVXETDOLCFFZXTLBAZWJHHOEGFDYXSXJIMFYUPCENVPNBRUMQNPUZGSQZEDAGHWHJKWXVJCPDUMREGRAQCUBZDIIRLTNJFEADJJRSCGDDERZSSKMWWOXUPHYKYTFOFCRCSMOHOGKPUBTMOPMPWAG");
    msg.last_error_time = 0.30251551415660627;

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
    msg.setTimeStamp(0.3822592112086065);
    msg.setSource(16981U);
    msg.setSourceEntity(240U);
    msg.setDestination(9766U);
    msg.setDestinationEntity(184U);
    msg.mcount = 102U;
    msg.mnames.assign("INJCQUUQOYBMSZDYFNLORMDWDBZZAXSWBWQKIMTNQJPCXPHJA");
    msg.ecount = 28U;
    msg.enames.assign("DFLECXCWTWPYFGZFMRHLVSFCQPDZHOXAUOPGGJAKRTOCORURTJXPFSJLANZKNODDYBOKRRHHICOKFVJMXZBMALZDWRCWDBICAJHEXIVVBIUTJQKGSQXRWTKHAEVPUKMWCEMCAJESLJQKYYNWPNETIQGOZWYQIPKPDGXI");
    msg.ccount = 185U;
    msg.cnames.assign("MAPEHUOTSLQQIUKJYEFBBVFFWEDZEJYGKFPKRYCFXABCGXMVVOJHCCRUKHZXCBFISZMSGNONIZVSATRJBWWXUMLKTRTJDUGGWLIPCTSYZNUQORNGAFDNRGSPPAIFTRYZGZUFDOOHLALHUDTPSBPINXHVODJULMKRBBJESNLYJXDEOSVEXVEILYBWQDKZCVQYRLXAOM");
    msg.last_error.assign("XAHQBOTYDHUXXYYQVFRCDWDLOCSVWVMUCXSMHUCQBSTRIZAFUIHGGXAN");
    msg.last_error_time = 0.5615577667720295;

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
    msg.setTimeStamp(0.1815728361131953);
    msg.setSource(7989U);
    msg.setSourceEntity(213U);
    msg.setDestination(52272U);
    msg.setDestinationEntity(156U);
    msg.mask = 8U;
    msg.max_depth = 0.12861255439615205;
    msg.min_altitude = 0.7566343174953581;
    msg.max_altitude = 0.05807527081642494;
    msg.min_speed = 0.8289677780281214;
    msg.max_speed = 0.24022973873378417;
    msg.max_vrate = 0.0871336241551457;
    msg.lat = 0.8084906576405784;
    msg.lon = 0.9168442908655527;
    msg.orientation = 0.9013445565555875;
    msg.width = 0.6363742145708989;
    msg.length = 0.5602396643802923;

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
    msg.setTimeStamp(0.9808805867912423);
    msg.setSource(21829U);
    msg.setSourceEntity(115U);
    msg.setDestination(3263U);
    msg.setDestinationEntity(105U);
    msg.mask = 190U;
    msg.max_depth = 0.08013085974623646;
    msg.min_altitude = 0.6135546908204559;
    msg.max_altitude = 0.9683993657031282;
    msg.min_speed = 0.46270734425565985;
    msg.max_speed = 0.7927399141268248;
    msg.max_vrate = 0.15462308018885407;
    msg.lat = 0.18382171271947612;
    msg.lon = 0.4573854939424613;
    msg.orientation = 0.6468893670270456;
    msg.width = 0.11575142600813615;
    msg.length = 0.3492465023687239;

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
    msg.setTimeStamp(0.7721904131356505);
    msg.setSource(31441U);
    msg.setSourceEntity(57U);
    msg.setDestination(1345U);
    msg.setDestinationEntity(157U);
    msg.mask = 72U;
    msg.max_depth = 0.7986889881295477;
    msg.min_altitude = 0.8969720331868821;
    msg.max_altitude = 0.9534483280297442;
    msg.min_speed = 0.8925831791618641;
    msg.max_speed = 0.37663105769138583;
    msg.max_vrate = 0.057900526218890636;
    msg.lat = 0.9497781476390992;
    msg.lon = 0.6688655557045149;
    msg.orientation = 0.8469837794164121;
    msg.width = 0.4350646323538814;
    msg.length = 0.38268731201659356;

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
    msg.setTimeStamp(0.6879015863911074);
    msg.setSource(37012U);
    msg.setSourceEntity(125U);
    msg.setDestination(33293U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.8993195249013136);
    msg.setSource(25754U);
    msg.setSourceEntity(181U);
    msg.setDestination(480U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.3743022253984364);
    msg.setSource(39326U);
    msg.setSourceEntity(41U);
    msg.setDestination(37114U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.6641924582717739);
    msg.setSource(8663U);
    msg.setSourceEntity(226U);
    msg.setDestination(5367U);
    msg.setDestinationEntity(77U);
    msg.duration = 34118U;

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
    msg.setTimeStamp(0.724572814139008);
    msg.setSource(45648U);
    msg.setSourceEntity(74U);
    msg.setDestination(61369U);
    msg.setDestinationEntity(196U);
    msg.duration = 27504U;

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
    msg.setTimeStamp(0.5886118577720607);
    msg.setSource(41563U);
    msg.setSourceEntity(3U);
    msg.setDestination(37012U);
    msg.setDestinationEntity(185U);
    msg.duration = 60662U;

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
    msg.setTimeStamp(0.7018537712282029);
    msg.setSource(54710U);
    msg.setSourceEntity(238U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(102U);
    msg.enable = 213U;
    msg.mask = 3393757345U;
    msg.scope_ref = 2124555124U;

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
    msg.setTimeStamp(0.813746202705432);
    msg.setSource(52914U);
    msg.setSourceEntity(74U);
    msg.setDestination(63099U);
    msg.setDestinationEntity(81U);
    msg.enable = 111U;
    msg.mask = 2581177492U;
    msg.scope_ref = 3887903323U;

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
    msg.setTimeStamp(0.972372808387507);
    msg.setSource(36453U);
    msg.setSourceEntity(135U);
    msg.setDestination(9310U);
    msg.setDestinationEntity(10U);
    msg.enable = 108U;
    msg.mask = 2382094109U;
    msg.scope_ref = 1431172221U;

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
    msg.setTimeStamp(0.9595739150693919);
    msg.setSource(47084U);
    msg.setSourceEntity(143U);
    msg.setDestination(63640U);
    msg.setDestinationEntity(69U);
    msg.medium = 128U;

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
    msg.setTimeStamp(0.3123384746111617);
    msg.setSource(40500U);
    msg.setSourceEntity(229U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(105U);
    msg.medium = 188U;

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
    msg.setTimeStamp(0.20023982087933867);
    msg.setSource(55866U);
    msg.setSourceEntity(84U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(4U);
    msg.medium = 220U;

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
    msg.setTimeStamp(0.5636097772794141);
    msg.setSource(46288U);
    msg.setSourceEntity(249U);
    msg.setDestination(19698U);
    msg.setDestinationEntity(191U);
    msg.value = 0.693067686318465;
    msg.type = 103U;

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
    msg.setTimeStamp(0.8150009896367107);
    msg.setSource(24092U);
    msg.setSourceEntity(17U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(100U);
    msg.value = 0.41368139251561153;
    msg.type = 63U;

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
    msg.setTimeStamp(0.09202898408618632);
    msg.setSource(26841U);
    msg.setSourceEntity(73U);
    msg.setDestination(28350U);
    msg.setDestinationEntity(12U);
    msg.value = 0.5089155115205987;
    msg.type = 207U;

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
    msg.setTimeStamp(0.7321422772072695);
    msg.setSource(38602U);
    msg.setSourceEntity(156U);
    msg.setDestination(19188U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.7670221199152688;
    msg.converg = 0.21247650572247867;
    msg.turbulence = 0.5606024418562892;
    msg.possimmon = 126U;
    msg.commmon = 111U;
    msg.convergmon = 119U;

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
    msg.setTimeStamp(0.059757950114810665);
    msg.setSource(45699U);
    msg.setSourceEntity(50U);
    msg.setDestination(12636U);
    msg.setDestinationEntity(3U);
    msg.possimerr = 0.631197344274826;
    msg.converg = 0.2001099012863039;
    msg.turbulence = 0.2821196456762243;
    msg.possimmon = 199U;
    msg.commmon = 163U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.04624212159205887);
    msg.setSource(43571U);
    msg.setSourceEntity(219U);
    msg.setDestination(21356U);
    msg.setDestinationEntity(136U);
    msg.possimerr = 0.7609594864833322;
    msg.converg = 0.892173247350381;
    msg.turbulence = 0.03303280135714515;
    msg.possimmon = 171U;
    msg.commmon = 37U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.35762366911983523);
    msg.setSource(27918U);
    msg.setSourceEntity(194U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(98U);
    msg.autonomy = 58U;
    msg.mode.assign("VZSAHQNCDHNBYPFGYFCYMAREXDXUSUQZMGQJHDYWMXDSCQYRMJBWZTJVJJZLZXTGGLLUGXIDAORXPSPVCFIXPJQGOBNPTUCQSEKZBAFNQCUWRGFTSAHMVZOYQMTELYQCRLEMHKTEBNFV");

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
    msg.setTimeStamp(0.9207722942571703);
    msg.setSource(45070U);
    msg.setSourceEntity(160U);
    msg.setDestination(8481U);
    msg.setDestinationEntity(197U);
    msg.autonomy = 187U;
    msg.mode.assign("PDXVHIOCDXTCOZSVODHMK");

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
    msg.setTimeStamp(0.3867767166946815);
    msg.setSource(49982U);
    msg.setSourceEntity(124U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(38U);
    msg.autonomy = 79U;
    msg.mode.assign("VGURQIHZBESCODFEGKAWAYEDLJDNPISMSJNUBUGPCJVYPVJWMYWZLBAXBLWRBETARU");

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
    msg.setTimeStamp(0.3208984469434488);
    msg.setSource(53606U);
    msg.setSourceEntity(146U);
    msg.setDestination(23500U);
    msg.setDestinationEntity(249U);
    msg.type = 105U;
    msg.op = 186U;
    msg.possimerr = 0.6425557011406882;
    msg.converg = 0.399946584674718;
    msg.turbulence = 0.48427934644488546;
    msg.possimmon = 135U;
    msg.commmon = 222U;
    msg.convergmon = 34U;

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
    msg.setTimeStamp(0.8336090974628071);
    msg.setSource(54423U);
    msg.setSourceEntity(5U);
    msg.setDestination(50272U);
    msg.setDestinationEntity(67U);
    msg.type = 168U;
    msg.op = 236U;
    msg.possimerr = 0.7804629258650765;
    msg.converg = 0.814464992990529;
    msg.turbulence = 0.642277283564942;
    msg.possimmon = 50U;
    msg.commmon = 170U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.9642543265531753);
    msg.setSource(10553U);
    msg.setSourceEntity(95U);
    msg.setDestination(39885U);
    msg.setDestinationEntity(193U);
    msg.type = 110U;
    msg.op = 105U;
    msg.possimerr = 0.3227541616709608;
    msg.converg = 0.3887645077145172;
    msg.turbulence = 0.9453888636712018;
    msg.possimmon = 251U;
    msg.commmon = 117U;
    msg.convergmon = 219U;

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
    msg.setTimeStamp(0.2604093051945182);
    msg.setSource(12553U);
    msg.setSourceEntity(62U);
    msg.setDestination(54020U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.2679813505961791);
    msg.setSource(4501U);
    msg.setSourceEntity(130U);
    msg.setDestination(49351U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.5306437015021115);
    msg.setSource(63234U);
    msg.setSourceEntity(134U);
    msg.setDestination(60323U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.41159997761303824);
    msg.setSource(65152U);
    msg.setSourceEntity(8U);
    msg.setDestination(34501U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("EOBEDQCQSCTNAFNMWIUUGHHXJDYBZMXJPORWVMNUNCEOQHBVJBIHXSEJNZSGGUDPMILGXKBMKZNEOJUNFFLUMBSXKCWNSRQCCQGGLHEZVCFBPKHJFATPPIDQYJMXLADZHGTJACOWMDFAAGASRUQXVKWEADSLOPSRUIKWXPEWGQRHYJZENKMFTTXRDZILRAYIXIPVRKHUZGISBWTVOTVLZBFYROCWP");
    msg.description.assign("TGSUTXKBAMVOLZIUMGUHSOHVKGTYUVPTAFNFVMEIQKARDJBWJIRFFZYNKKNSEQEJBQZGOJRDRFWSBXTBZXGEKWLRICANSKDEOLAKOHYBEAYLYZIBGDMRWLEQNKSAZJXRPOT");
    msg.vnamespace.assign("JKXBWTCRXLCOCNKTKQICWWKMGONSZADEGVRUPWSDHFOZDBNLHUZPP");
    msg.start_man_id.assign("NCMIPIEUGVXWFOZEYBMUNWYUULDBAHQQYFPKCGYQFTSIGWKWPVZRRUIOFZVVNHJMKMSCFWIUMFDBEQSRRPJPUSTQBMBCGHCAGMGZHANSBXCEDZPYQWHTIZLROTEDOXJCDCMXURSAVRZPLPLZDKIIHKSUWPRYXHTOAEXQPJNM");

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
    msg.setTimeStamp(0.8218011020749474);
    msg.setSource(54061U);
    msg.setSourceEntity(72U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("DXJADHVGIPNNOPYGFUCSWHOZUGTYRUCAXWOJCYQCHBVDPDEZPJINDJTFSMBMOOVRMGAY");
    msg.description.assign("QWDDCIFBXSEFOOBGQUHCLHPUBHXTYFADPENPEZUKBMUZQRKXOGIEDQFHPTWCOWMPAYCFBPEIJLGLESTRCFAVPSLHWZTFVLJUJMXVMKZWKAQUCTKYNQHZNVZQRKSVQWFLGVMWYPXRYYGNRLBJCHTJNYRWDECXIL");
    msg.vnamespace.assign("QHFFRTEMBMOUWRQDBGVBILWKFXXLQDQSLJTIGFJWSFTFPLAXRZACWUIUOAMVVEXRIYAVKXBRIHLACVHPJSOAPRWFDGPZBYNKGYPVLJOEHPANRKJHZKZOFMTGUCTGSHDCZDRXKJVMNHWCPKSJNPAOECHOGQTUMNEUHJOVZUXGYLERVXQVKZZOZKDSWIDEUIC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OFDZJUVRYUPWXMSBTYRMAPILFILCTPGRCZQOQGZUSHAFUYGSYKVOQHQYIPSLEVCORPPXHBKIIBKESXZHIIZMNWHBTNUXCGHWVAMEGSKLRJMFUWRRDMJUWJCDSLJNDHQIAMPSRKXQNWFTDBXEJIGOCTHKDJBLOTDQEDNRETSZUWAA");
    tmp_msg_0.value.assign("ATBEVXALGVZZESHOYGVLQGWFDBMSRBHWQDQGOSPJVNCJOZBCJXVFTQRUWDWJGDKLTAPKZSHCSJZDAGKCQXHFIAMDUDXHQJNUHUWFJKNLBIOCUPIHTBMTLGKPTXBILIJSUNPRYROEWBLJCXENWEZIHANKIVEXOWAAXTTHIZZFMPDRELUEOYSFHRERNSNFRKMSWXN");
    tmp_msg_0.type = 43U;
    tmp_msg_0.access = 251U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GRWHWNVOKXPTYMGJGJGRTWAVRFOYGQBLUBBXNRSMHYDQITWENLAKDGECFNZKHAWTCXKZRLHNJQSFDIECZPBLOJPPVXUUCTVHJKEFXBGJYCNVKLZDSBQUETELOHQGDEGRIVKCMSRHIUCYABIUMHNKLUGZAVVUOOKTMCTSAWBLAXIZIZAJHQDSJPUOXFEVVFLDFDYZPSMTOYFTMMLPMBJWQIMQYHWXDIYRIWSZRPJSXPYUDRENCFP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OMYWFTFRMJBOEHFCIPKGPYIXURSPQADNIKUKXXWLCAHGVNNTOUTXPWURDROHJMEDDVMOSHQDVYCYLFXRNQZKAZWMOIHGCLDKOLFGHVWLJLZMEVFDLRSAQNICRCIXBYOSGMJJUQSTXMGGGUBYSSCAPATVDEKFBFUJYEBYWJECMPPQINEZSZWNNOKQNCHRBZRLVAEOKEBJIPFXYGIUVAUGKTZWJUDDQNKJZXHY");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 60346U;
    tmp_tmp_msg_1_0.flags = 237U;
    tmp_tmp_msg_1_0.lat = 0.9516822864953269;
    tmp_tmp_msg_1_0.lon = 0.23645230393219285;
    tmp_tmp_msg_1_0.start_z = 0.15547345610205465;
    tmp_tmp_msg_1_0.start_z_units = 66U;
    tmp_tmp_msg_1_0.end_z = 0.5976410402868237;
    tmp_tmp_msg_1_0.end_z_units = 154U;
    tmp_tmp_msg_1_0.radius = 0.11813347198539847;
    tmp_tmp_msg_1_0.speed = 0.8834274382950361;
    tmp_tmp_msg_1_0.speed_units = 204U;
    tmp_tmp_msg_1_0.custom.assign("JIBJLKEJLKDIZRZSAQEYLLJWUUULFPHDMBRVTEHCTFWSRTIDNCTVMVHIQGSDZPCWMCXONSYUVJXQZMFQABEUDHMNJTRAEPBSYGGBCLMAOUYMOWKHSKZVFMFQZCQRGHWHTTJEKXJAXFYHQOQDGFINGTEOPCRPDYKWKUBXRXPZSNZIZQIOIVOAUDDAYSEKIGTMFEOZVOLYDNESYXVOVHQPPGNWSVKRBILUAMCBXYUJLRCJWBABXGGLWN");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::RemoteActions tmp_msg_2;
    tmp_msg_2.actions.assign("FNXXYNKBKMRKTSWNGSVCGIVUHKGVNIHBEPLWCCGDJDISHDNWKACPBUHFLQETQLC");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::ImageTxSettings tmp_msg_3;
    tmp_msg_3.fps = 68U;
    tmp_msg_3.quality = 24U;
    tmp_msg_3.reps = 189U;
    tmp_msg_3.tsize = 205U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.14208692968032366);
    msg.setSource(1620U);
    msg.setSourceEntity(110U);
    msg.setDestination(20478U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("NLOJEUUOSYTKOQCJJPAYTGBYWIXFDKXQDQOKFSU");
    msg.description.assign("SCZEBQMQDAPKMBLDTJPLNVIJIEPCOXBCEMDGKMLVTVNFWNIQLPNKJLQAACYZFYLLPZIYXBMVSLIGXXYGQTYBPFJFDNGOJYMXNRAGJSGZOUSDBBQCSKASHSZCMOAFXIBEFWVTWGDOCGTNS");
    msg.vnamespace.assign("UPLUQONJRYBGIYIRXWNTUGSQJJWXCEPHZTEHZQPQDFFAZOCTVXDRIIYRMUXKZLMFWDWAWQRYPXKNSUDGJRTSSKVEPXFLPOVUWQJBTXZMHHAHOCMMCOKODEJTBWLDSRNOGHQFYFIVZJSBFJDZLIZFUWHF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DNPLBWXAWKXZOHWCGETNZSNXOCPTTQQJQFZQTDKQKXIOSJMBTRDOQANFQPANOXKWCMERLFQRHVUPNFCDEEBJSUIDSLZIAYGGIEZCYQYMBXWUNLTAVKTKIKM");
    tmp_msg_0.value.assign("SUUKXUXACKBZZMERSIYQYZFSESBWRTVKMPFITEHRZUQPDQNJYASFTLBBNMJPIWGDGI");
    tmp_msg_0.type = 205U;
    tmp_msg_0.access = 30U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NSSVBMBUBXIRBTORGTMQUTXDNSLJXRWNINIPYOFXGMZAWYCLCVGNGYIBHTVRJMZARNLPUHSJJEHKSTNBHQFLYXHGDWZJSPFYIDZZAPGUUQIHYVOQKKHVICILCCDYZDKSAF");
    IMC::CrudeOil tmp_msg_1;
    tmp_msg_1.value = 0.47063303803136514;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FollowSystem tmp_msg_2;
    tmp_msg_2.system = 8296U;
    tmp_msg_2.duration = 32813U;
    tmp_msg_2.speed = 0.6550209863862694;
    tmp_msg_2.speed_units = 19U;
    tmp_msg_2.x = 0.5513151288143361;
    tmp_msg_2.y = 0.6356020768858518;
    tmp_msg_2.z = 0.7876905850619992;
    tmp_msg_2.z_units = 26U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.8567405986678878);
    msg.setSource(45990U);
    msg.setSourceEntity(189U);
    msg.setDestination(45948U);
    msg.setDestinationEntity(79U);
    msg.maneuver_id.assign("YFMENWRESGUKJNJBXZDZQSMTQVTVHEBVPTOQCOECLJZSUAZJJKBTQABVICRQUSPDTLWBPELAUMRXKCNTFKDCHPHJWQBNPPNGRJSZHROKGREAFWWHMMGIIVQQMNBINPXYALFFCUJRVJDGVYHYFAVDHITEOMVEDULYKLPCYSDBRLQAWRYECWXZMGITFOSTDUOGLONWOCCOHWJLXAFIFXDSKYSGZKZHPQDZVXXFYNLMISTKGYUBXUZIA");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 53880U;
    tmp_msg_0.lat = 0.4633595787505831;
    tmp_msg_0.lon = 0.9665512757246765;
    tmp_msg_0.z = 0.8933367093186231;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.amplitude = 0.3347815559315368;
    tmp_msg_0.pitch = 0.7736760218840052;
    tmp_msg_0.speed = 0.057395431002638886;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.custom.assign("ZKYVQATNHSWSFBYUFLWAMOHPOOAFGUVYTCJBQHLKXIVNCHGFWCRSNVIUSSILNAONAEQIMPGXRPMZEZMDEETXCJYTLMCFDGDHALRYVEICFUAHIVUIRKVRTDJYDJXFGPTZUDFDZQSKEWXOQXJVRXBCZQUCNLUAOTMDRORLPLMJFTGKIKBKQXEBKMDPWNJNGCAQZM");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.9991818927277221;
    tmp_msg_1.y = 0.9210071422859134;
    tmp_msg_1.z = 0.8086801227677642;
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
    msg.setTimeStamp(0.9981473670244608);
    msg.setSource(44730U);
    msg.setSourceEntity(103U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(66U);
    msg.maneuver_id.assign("AHRJCJCESGHKRQKNHOYQDLICDHWKNTXKIKVATZJFGCSGSNTQLFMGGZFDBPMBAGMWOICULZAKMUWTVTDMZIJFFJHXJBEMIHZSSZOQAWQIVYVPTDPFQEYKQXPXWYBGUELJSEXYOBOIOFFZYSBUEDHBRDZWPWJYLSOPTAXUWGMWXPVXHKVTLPTMXNMFISMRCLYBBVERRYAEULNAIKGSVNCAJOR");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("HOOXJUTYQKLURGXZXEZBKSWFNJPJUQCBTFXINDXWKRNJHIGGTAMXEELQKZEGWHQHEXZPMRTCTPVYVSLACDSOBYSMLODUMZCCECMZCALXMJFHZYWNUUBIYESRZWFKMPUTSCHJRVLPAAOFGF");
    tmp_msg_0.formation_name.assign("MSKEDDXRPUCTUHCXGPALKNYHLOFVTCARMR");
    tmp_msg_0.plan_id.assign("CUUENVQVTCYBEJFEK");
    tmp_msg_0.description.assign("HFZKPNMZEOWDIR");
    tmp_msg_0.leader_speed = 0.02664416460886121;
    tmp_msg_0.leader_bank_lim = 0.6735275480009358;
    tmp_msg_0.pos_sim_err_lim = 0.6984414043347923;
    tmp_msg_0.pos_sim_err_wrn = 0.08259899433473128;
    tmp_msg_0.pos_sim_err_timeout = 52389U;
    tmp_msg_0.converg_max = 0.3207309491085689;
    tmp_msg_0.converg_timeout = 35374U;
    tmp_msg_0.comms_timeout = 63349U;
    tmp_msg_0.turb_lim = 0.5802378034712535;
    tmp_msg_0.custom.assign("YIRMAXCYHGTUJWLVVASUOWQLMQLKWTUUDHYPPTHSEBIJATLZICSOKRONOWXVTADDDWJGHDVIPLZXJVFFXXXCEEDSKNUYQAPYLLTVEBZKQDOIRWHCLOZEXONFRLZOMXQORGNCIZZUAZRRKNLBUBWVFHFYJBHJBCCWNFAGJPDKEFKGVPBTATTGHXISPECPRYFIXICAEABCMRQGEBMYPHJEUF");
    msg.data.set(tmp_msg_0);
    IMC::FineOil tmp_msg_1;
    tmp_msg_1.value = 0.591742913255874;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.2042394365975595);
    msg.setSource(51790U);
    msg.setSourceEntity(55U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(173U);
    msg.maneuver_id.assign("DKFHXBSXDKFNJPBIONEWCDUVKIRQQRZIDMWGULGQHAIZYFVUHWLMSFTGLZFQASPTTA");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 56366U;
    tmp_msg_0.lat = 0.8310710447332074;
    tmp_msg_0.lon = 0.5783897970435277;
    tmp_msg_0.z = 0.6262370564392754;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.duration = 10680U;
    tmp_msg_0.speed = 0.30822642923326404;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.type = 137U;
    tmp_msg_0.radius = 0.288973996264424;
    tmp_msg_0.length = 0.5979965484941662;
    tmp_msg_0.bearing = 0.7634466173794157;
    tmp_msg_0.direction = 196U;
    tmp_msg_0.custom.assign("ZQSZVGBAQNOEPKKCQMVSJIGIJQYMBTXJVRXHFFZOVCSULAIGUAWPRAIAKZEXECTDGWGCUEDSXZXOTLWOQIHRANSVLZDGWVMVNOWBPPARWPVOZMWWMWUFDFGECHXPZNDOECUYKIYXQVMAQ");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityInfo tmp_msg_1;
    tmp_msg_1.id = 163U;
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
    msg.setTimeStamp(0.3396789567870603);
    msg.setSource(19892U);
    msg.setSourceEntity(176U);
    msg.setDestination(35853U);
    msg.setDestinationEntity(69U);
    msg.source_man.assign("VPFNLXGIYTGJAMD");
    msg.dest_man.assign("VGHCELUIZHIDUTMHYBYMDABJZAFTINUNTDJCCRWYPESBMPFNVMGDOQTKPZKXUUAKWUWOZHYHSQLZXAVBEZWENBDCGJNFEPYLWXQRKBIXTHCIVZYJVQUZUYPEOOZXMHRSLJJM");
    msg.conditions.assign("SCFNFAJHDQTPPMFICQBITUMDVMZSKSMCSMVRTWJJDVAUE");

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
    msg.setTimeStamp(0.9783304027671071);
    msg.setSource(31759U);
    msg.setSourceEntity(152U);
    msg.setDestination(65222U);
    msg.setDestinationEntity(135U);
    msg.source_man.assign("TWPYOCZAODSSVFYFHAZDQLHVPHFSIRCDRZYIPTJLJROAZLLBIJLWCGBJQPUZXVHFUTJESRISOVVIQMYSEKBLSOMTFJCLYOYTDNDGXRZBAHUEJLKZQRXBKMHXFEDFWQGAEVKMENWTYWGCGXMVSKUVHDHNXRGFHMTAEOUPPBINKMKPUTWIFKSPQXXMNILHGEXTQAWYJNYFUDECAPBKJWGDZOZCQNUOXEDCIMNUNTACBRRQJKRZYPCQWIAOGVWU");
    msg.dest_man.assign("ZOMYWDBORUQEFUVJREKMAIXTJUMQMZLY");
    msg.conditions.assign("FYJLMCSGJIYRIZORCZLBFJNWGVHGWATBMXGVVVCTYQYUGDYORQDZKJECINEZKYFSMNRRNIBSHUGOBFFPPATCLKJAHZUQCSGULSXYWWAQKBZWEOKQKBJUHRHRPAQOVFSMEQQVVRMEVUJMBPXDKXCXWOPNTRETHYNAIOTFNLCOLLTOFKTYRUMIPZOBU");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.8930737556330745;
    tmp_msg_0.z_units = 76U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.04143919547823638);
    msg.setSource(15238U);
    msg.setSourceEntity(112U);
    msg.setDestination(81U);
    msg.setDestinationEntity(184U);
    msg.source_man.assign("YBHDXXRVNSGCGDRDKSKEOCFKAODMFLNJSWXGBPTRIKJWZVNBAWTJPTQMBVCQXUSGFUSCOZFIZZOTNOAIZIVLEZLDGAQULKOUFAXSECJWQDOQXBIPLECTHFVHNKTPNZUUBQBMVYTDFYCXTFMLKVQUROZMYEUIGAYE");
    msg.dest_man.assign("TVIKEUTXDWCPFTNYQIBAVSMJBF");
    msg.conditions.assign("SDWCELFURCQGJCXGGSHFMZLQKLAPFNCIQSJJPPGYZRSKYOBMVRHIZIQGICUDPZDSVTXORXZHWNNRTJERVAIDUYUGTXVDOZEMVOHPJJIERUYYMDTTZFGKINUBJLLLCBYWFVPNUFLAHOAWFWSSSRRVPTSLQJNTQHEOBQLBMVDOKBOVAUKBTBIZAMXECFEAVGX");

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
    msg.setTimeStamp(0.031972275288104424);
    msg.setSource(45334U);
    msg.setSourceEntity(98U);
    msg.setDestination(33743U);
    msg.setDestinationEntity(242U);
    msg.command = 33U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VDSYZYQNCGVMPFUYHFRNCKSJTDGATMLDPJDMUVWXXBCNRHWZAAVREHLNPUYZ");
    tmp_msg_0.description.assign("BWRNUDFEJLPPSQRTWAMGQUFDNZZCYXSKIVVZMLFJKFDHVCQATNYWYTMCVRQOZEUHJWGSBCERFOVYKWXXTEHQWBPGZHVEGHGBVDAMOXPOBHONTTLTNLNBQKINJJTIIMFRSLOLCIDSLJSNRMYKKPXMKBGEGPIRNAPXADCVDGCZGGCFHODXUYRLVKAUEAMOQKZXBOHWQSEDXASJIKVUBEURQYAIWQFOMSPNUTZ");
    tmp_msg_0.vnamespace.assign("LXIDJPSDTTPUORDGXMFWBAUHOEUICLQFYEYKVZDJITZKFEHGXYISLNHRCILKOOAYKMPNNXJBDYNWRJWIIFZHWFGRZWUNSQRVXVPGAOPFDLUNWVYCDABWCWEESTGKUBSYJTIFGBQGBWQMSVRLCCJKZHPLDHQNAFAMLHPEUMHBGXZGFOFNZKMWQGBRAARPZOLZRVUXAQEBKTTNBSEXJVKMHSYJCMLQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JTPXAQMVNXJVDIMGRSQLINAHRPJMYMKKWMKSIBBWXUSQAKWRZOFYXCBQHASUXFIOSKLPRLSMAMRUINEURICOZPWOZHYIGYJPOVZXOEOTEUDYUCWFCLNIATRXHVZRMVACQLGHKDAUBFYGBQEBEWTVHNQBCFKJ");
    tmp_tmp_msg_0_0.value.assign("SYKPNKMREJVYVTDADGVVWBTTLUFDBEEXGPXORTXBBKESPUUOBSMRVGESSIFCENKNJHBPZIDZJIMLYMXSAASUDLNJGPYTEVCHKGYLTKCIGPFBHERACZCLWQDOMIFXOWUCFIUYSKAJBSGDGGUWQIOKAXDRHSHWPMMMNNPJLROAYVOJYQLHODRBCMCTZQBOQZEHQZPXKYGFZHAZTHNXLXYZQFWIQUFKXWJLRNUIDMWHJAWPCCWT");
    tmp_tmp_msg_0_0.type = 121U;
    tmp_tmp_msg_0_0.access = 141U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PDDLAWDIKAHFRLNYREGPABJMDQMKJLSPSSEVSUUECPOQFRCBXWGVFPZGERBGPIZOEILCBJWXHTABOUATUZWTMIHBZHEKQHBMHDXSYYFUZCTNDKQKBSQAJYYMKJKOBILQFHCQJQRTYEVVIYWXMZXVJJUFNKRDNTUDGIPHVUCWEMOSVWXLGKFOANZLAVRMJDINSTBKWCEPYQEHUGOTSFOV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WXKGITVITHQWBEFEVDXQXNXSOJPMJBZZSXSEVOYVYPODUYTUAZXWGI");
    tmp_tmp_msg_0_1.dest_man.assign("SBQWVLFLGKZSQIVRYZHRSEDCVQUXGXZOZMDSMIPVRBCDPZQSNWWQXZGNCGGHEJLQSPAHHPTWOFTXW");
    tmp_tmp_msg_0_1.conditions.assign("ZZLVBLADMSWSMWNRCVHSYZMTMRJFUIABAUDGHONUFQWYUHLGJOIOIKGUAWJYITRCPDPIEPVHIYFRAPITZGXZNXCQYTCVMREWDHHKWSEUDKFSVKNMZBZEJCFGJHJOENOZRVHFBVSRUPBOMJKXVIDBUKXRHSNECSN");
    IMC::Salinity tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.6329302368931488;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.344243483030107);
    msg.setSource(35271U);
    msg.setSourceEntity(246U);
    msg.setDestination(31448U);
    msg.setDestinationEntity(250U);
    msg.command = 113U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JRGDSPAQFQFSTKVMXNRVAIKVTPCWIRUEDUXDCXLZORIPYBAIGWIXJFLPZKOVLXPYJCTI");
    tmp_msg_0.description.assign("LAOSPNXPQIXVIIGRMNEOSKJNDWUADRXQDIXSXCDOSPCYLBOVMLNHHYZALSCEAWATTEGRVUEUJIKLYEISZGVJY");
    tmp_msg_0.vnamespace.assign("OZNDQVGOANFPIZKNQUFXYPESPRORFLTCKNFXOAUJNNTLOUJIWKZLFCYKNSWVVCFJXMXQPHKJBPDYWHZJSABNPEPLHRAOUZGIFZTEIWHISZLDWYZMHAPBGTBXVVETKUEKPCTRUSDMVCLYXATHGOQHLEZRHPOEUUDQSSOVAJOYSEFWQTKEBALCHXXBJALQ");
    tmp_msg_0.start_man_id.assign("OEPHBWDZCQJBQXIJWKRLIJAWZZVCGTZLHTQYLUFFQFBWALDXRDKWTZZNKRLCLEBJIQNPRMTIXKSBOTHWNVVDOPKTRKYVJOYRZKNFBQSNECNHCYDKHEUASUSFJMXKOOCDIMXGPJEMUAGVQSEPPJTWDUSPJMZWZADXOQVCBYIODABONLPPHTUNAYUNCQIXTLMVYCHFUFLEGWKMTHSJQBFRFABEALVHUXINP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BOPJMEEAYSHXNWFLZPDNTTKUOYOLIGRSEWNWWVGMSYZREFDZVUJACLEWWJRXFTPZUTVAMPOEBUPZWGQABKJWSYAMGGFTTMHREQYRXN");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 7491U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.11291199803763774;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.33972447471111866;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6931787056281353;
    tmp_tmp_tmp_msg_0_0_0.z_units = 213U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.9760192521039917;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 181U;
    tmp_tmp_tmp_msg_0_0_0.duration = 8195U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.4775820537318164;
    tmp_tmp_tmp_msg_0_0_0.flags = 58U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WDIXHHEFSNRLJSAMFYWSDKKXCANZMRYVURXOFKEYTCMPZPUXMWVLXOSHFBLHWDRIEEDOSVFBBQNNTONJABNUYFXIATSTIJFPEORXAZQFZDEEULHOJYUUCAWJQUITKGMJDETNJSVMGBZYPZIWNMLFKWEOA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EPSTUCEUEAOYNCFPNVFKEKXVMHSSPQYRJHZJOPGUZGDPKOLMMPVHSKPKJUWUVAFFZYICUTCCEZWOGWQOWBULOFFDRFBHXFNYHIBJMGYQJJTDDLXZGVPAVWORQRAHRQFGQMWDTXMNCSATNOLVYHYIIYEJKUMLQXHXYWMAZUVOVASCDQVTXQZBADLWRTZIEBNXIATWYARRSKLMBIRHINWMXLBQBLGZZBDPIKJIHSEUJKJDBNN");
    tmp_tmp_msg_0_1.dest_man.assign("GBPTDCHINGTPJOGFKSLHFPTMICAZVTJDCEWJGGMTZPBKCAIWSNUNZHJPAKCDTXRVNMWOSFIL");
    tmp_tmp_msg_0_1.conditions.assign("AINYHHPHTJDYKUSGZJRFMPRYQTIMGJUJRMLQCRWGVVMOQOWOMAZYEDXKSGDKVVSLWFIFDGFC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleMedium tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.medium = 242U;
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
    msg.setTimeStamp(0.6219129343196226);
    msg.setSource(54832U);
    msg.setSourceEntity(111U);
    msg.setDestination(20569U);
    msg.setDestinationEntity(164U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IVYTCSPDSAPOZDMRLACDNCRHWGJPCYCLYNBHHWSIKZIWQKYWZLDOFVXJJOAAMLTXPPKYFEERIGHQYFVFHNJSKCGZVVNINJQIFFUSNGMNBSWZGTLZQFBRFYXUTNBKXJRPCT");
    tmp_msg_0.description.assign("KIMKLCGEUMCXBXFFSYLUYLGQWLPZJYKTFYZDXVVEXIYYDHTGBTQEPHFHNQRQBOTQGNUVIIMSDKEPHTTMRESFVZWHHRXHNLIFLOBZOJXIOAPFKSLDDMINAKOJWWBUCXUCVAMZYDRCKCRPUHZSUBSIYJDLATQZPLWDGAJEAPWJEGONNJSHCCOBAZNKOSNVBKALXZGPPXB");
    tmp_msg_0.vnamespace.assign("KYKNPEIXKAKLKGAHZFYDZEMYSWHKWCXLCMVOUEQLJRFGNBZDUSTYPOSTSUSWPVQCNTRSUYLHILHNCCHMPA");
    tmp_msg_0.start_man_id.assign("WQLOAHZHEWNOSJBOYYEOPMNKA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("ZVKUQYTNOZFZIPBJXFTWDXLVAADJWYWTNQHHWCFPILLKSOHSBNHDSQUEQPMWLNVHJVKWRVFBAAOUCVMKRLXTAZEITYJW");
    tmp_tmp_msg_0_0.dest_man.assign("YBKYBJPFSLRQKARIZOHFMAOCRCAWZDRUSWTHCXPYITNGDCASVLGYWKVHUFXIQQUBUSXYJPAXJTLOHWLAFEKNZMPVH");
    tmp_tmp_msg_0_0.conditions.assign("RFRPJBFTPTKMQJYTPUEVVIZKRYDFRIUXNBMIBUNHDOAQPSGFWWLWGKNXNSEEVOSKZREFAFMVCOYCCSVLYVPQC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SaveEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("OTNJIBHCOHGJHSAKFZAHDQWJQASWREJPQCWCZOVFIPVYKMQGPRLGPEYNSCTSOUSLXQWYD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.10069814085680817);
    msg.setSource(24006U);
    msg.setSourceEntity(126U);
    msg.setDestination(61532U);
    msg.setDestinationEntity(200U);
    msg.state = 203U;
    msg.plan_id.assign("VIWJACTKZJZHZYHVUUTQSVSDRRXFEFFSNFRAUCISWEYMDZBMWLRCNDXJUQGLVJFHQSDPABRDMRGCWVJTGOPYXKATMQGMDVKGCEXNKREOTJBLBZWIRNOECETCMZYDRCIBOCHJBOBKVFOAQHAOSINTKUPGXOVXLYSJHBADQMILKYKXHSXYQWQMAPUUJHCAWLFYFHUKWUEXZNG");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.35700416114777556);
    msg.setSource(24700U);
    msg.setSourceEntity(151U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(71U);
    msg.state = 95U;
    msg.plan_id.assign("LHDTOVAGMEGUQQEWFVEIFQIYECUXJWZOJEYICGMBFOEMJMIFGZTJAFDARHEUTYXVULLQDWMPZWUTQSDXFSRKPVZHHNTOCCBKQYORBXBIKXAUWPPPWNSSNOZGXGVEGJWYGDKLYMNSBVRFDTRKSKPZFNFDQTQUHXNYVTAKAMLBJAZOFHUXZIZCCCBUPKOHVIKMRG");
    msg.comm_level = 87U;

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
    msg.setTimeStamp(0.47013768931402944);
    msg.setSource(38087U);
    msg.setSourceEntity(129U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(212U);
    msg.state = 206U;
    msg.plan_id.assign("KKYIRUXWWPEVKGTKJKGSSOTAJKOQVLARNULKJDQSVUDOHWHDYYBOASIBFEPGPXGLOPURNSLZFEJFFZEGCSXBPFIGZMFDNXVWII");
    msg.comm_level = 225U;

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
    msg.setTimeStamp(0.14233014103609698);
    msg.setSource(15656U);
    msg.setSourceEntity(159U);
    msg.setDestination(42758U);
    msg.setDestinationEntity(156U);
    msg.type = 107U;
    msg.op = 204U;
    msg.request_id = 53670U;
    msg.plan_id.assign("YECWBFGMPRWHJVNBLWQDUNEONYWLLJSMOQDTEQRKYPGPHWPGFPMJTGDZTSFVYGFASWMLSSIADXBPMGZYTOQRKCJZQTKTYIDOCKLVARDBTZXDWPVMFBHWTAIKIBNJSNVIEVJFUASRTBQBLAYYRMNUUDPLVOHEXXFQCHAVAYRHJLXUDDPQSONNIHUGXCEKFARZSEWMIFBJNIZGCZJCHGEIQGEHVLN");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4596905098400882;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SVADJGJTLDIVPLCXLMMCGPHBLUIOVNXLQDUJEZGIQFQDKZOUOBNSIGAIBGMAFNBGZMZWIP");

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
    msg.setTimeStamp(0.8101099863291865);
    msg.setSource(25700U);
    msg.setSourceEntity(220U);
    msg.setDestination(9260U);
    msg.setDestinationEntity(221U);
    msg.type = 109U;
    msg.op = 217U;
    msg.request_id = 64406U;
    msg.plan_id.assign("CEAJEPHCXTBYSMP");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 45U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6986795491330469;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5300261668476276;
    tmp_tmp_msg_0_1.z_units = 25U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9429806865523214;
    tmp_msg_0.lon = 0.5623040778232049;
    tmp_msg_0.radius = 0.8883943639076421;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GQHYCYMLPKQTTOAJKJWTXYAQCZVPRAVQADQYSWSJQWELVXVKCYDGICUUMMREYXZIKSMUCBOCPDEVPQFJEITBKHJSDWIXEKBTOIMZUOXPUWCPELJLFRGBKZRDTHUZIURZYZRNDSBRXGIPNGNWHDVYMJKLSQFIAASOBQSIZBSYMVOULTICAVHUXGGKOKAXDDPDAHRHHMBY");

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
    msg.setTimeStamp(0.6290140842350581);
    msg.setSource(52765U);
    msg.setSourceEntity(192U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(37U);
    msg.type = 170U;
    msg.op = 252U;
    msg.request_id = 39174U;
    msg.plan_id.assign("QKWLCTINMBJEXZOIZOBNONXNPYILNLMNSLQRHCNQZOJXWLQWIMXEPBHELHCRFFATRPPFOWNACHFKZFBQASXRZPUURQZDS");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 42254U;
    tmp_msg_0.control_ent = 213U;
    tmp_msg_0.timeout = 0.855894873127275;
    tmp_msg_0.loiter_radius = 0.8025419815624374;
    tmp_msg_0.altitude_interval = 0.42751549168660363;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FIMJBNUUFBHULYWIFRXYQCLFCKISOYSTYPZILKAAMHWYKXOPQJECXQJUSYJDCVCFSIQBOJMUWBEDDAXSRZILYEHBASSP");

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
    msg.setTimeStamp(0.2969613461205871);
    msg.setSource(55658U);
    msg.setSourceEntity(82U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 49804U;
    msg.plan_size = 1949579479U;
    msg.change_time = 0.6538915702092396;
    msg.change_sid = 12311U;
    msg.change_sname.assign("KIXHLQVBYMDMNANYHTYGKQPCKHDDRZJLOZYOWPEDJXQMRVCZTNXAMGEZBLBHMMSGOLUWIYTZRSIOZEEQRKUVTIAKAT");
    const char tmp_msg_0[] = {-18, -14, 33, 55, 46, -63, 4, 13, 118, 96, 37, -90, -13, -56, 34, -50, 37, -76, -73, 101, 15, 96, 16, 125, -52, -79, -37, 89, 81, 54, -8, -89, 2, 26, -89, 30, -52, -48, 15, 88, 51, 69, 5, -28, -24, -22, 5, 122, 34, -28, 54, 13, -97, 93, -71, 63, -125, 108, 30, -93, 71, 0, 11, -128, -114, 112, 18, -31, 38, 74, -45, 50, -26, -63, 97, -104, -29, -105, -52, 101, 55, 57, 44, 60, 114, 17, -114, -117, -53, 76, 47, 15, -108, 60, -113, -104, -61, 34, -98, 30, 113, 126, -88, 33, 103, -86, -111, 36, -123, -86, 22, 38, -81, -50, -80, 113, 43, 112, -93, 45, 40, -112, 107, 53, -42, 121, -70, 113, 14, -2, 17, 92, -118, -16, 60, 104, 76, -10, -14, 82};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XXMOWFVVZLYDPVSZCMHFTQNUVODMDBBGIJXOPXELOSEALJUIVGUFYPVYLQTZRTIIKEKV");
    tmp_msg_1.plan_size = 22206U;
    tmp_msg_1.change_time = 0.638125508360903;
    tmp_msg_1.change_sid = 19745U;
    tmp_msg_1.change_sname.assign("JLYRHJNSNBDEHQOVYIBXGCVRMSTHSLTKQFZALUENXOZOPFBEKOIMAVMOKJAFGCNGZQFWLSVWECGWLAHHTTAHNTCNREEDGLTRAIBXBSYVYWWHPSYGIUBNQATNPMTZGYSOUCMKZDMYIMMXEIWVZVLDFPTHNUUYCO");
    const char tmp_tmp_msg_1_0[] = {-94, -91, -72, 113, -126, -77, -78, -112, 92, -14, -47, -39, 56, -66, 26, 30, -117, -101, 17, -20, 84, 67, 62, 103, -72, -105, 66};
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
    msg.setTimeStamp(0.09331072464869372);
    msg.setSource(39293U);
    msg.setSourceEntity(146U);
    msg.setDestination(31812U);
    msg.setDestinationEntity(93U);
    msg.plan_count = 57869U;
    msg.plan_size = 4010177544U;
    msg.change_time = 0.7737638973344565;
    msg.change_sid = 12278U;
    msg.change_sname.assign("DFXMYWRCTAFMEEYORRHNFBPNSCXORKKMTSZJTPZKWGMFSVWMZJSEMUDJOIXATRBCMTPWIDKCODGRELMUGLOJLYYEZBGWXQYPTJTPQUAEVAPIYKZNCVAQVEQISILHCLZGWJOUIMWYQDSOGGPYXLBJXEOKJIDA");
    const char tmp_msg_0[] = {-90, -40, 69, -57, -62, 98, 10, -43, 92, -40, -29, -126, 67, -117, 92, 27, -63, 38, -47, 66, 12, -20, -14, 5, -73, -43, 12, 107, 2, -115, 33, 114, -62, 57, 124, -8, -34, -126, -87, -1, 101, 100, 121, 108, 52, -63, 83, 112, 19, 71, -128, 113, -105, 21, -3, 92, -77, 90, -106, -51, 20, 11, -58, 94, 32, 57, -72, -59, -62, 111, 39, -80, -38, 82, 47, -84, 62, 76};
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
    msg.setTimeStamp(0.09852054225171747);
    msg.setSource(33784U);
    msg.setSourceEntity(238U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(203U);
    msg.plan_count = 23902U;
    msg.plan_size = 1829765640U;
    msg.change_time = 0.23658306017215902;
    msg.change_sid = 38612U;
    msg.change_sname.assign("LSTAAUVFVSNTNHAGDZJWJOUYXWYUFRWMQLT");
    const char tmp_msg_0[] = {-62, -46, -6, 13, -97, 76, -32, 31, 86, -46, 93, -71, 116, 123, -96, -60, 11, 8, 46, -40, 70, -15, 64, -60, 97, -36, -70, 34, 22, 63, 87, -78, 125, -89, -10, -57, -71, -49, 50, 40, 79, -17, -78, 7, -70, -49, -2, 55, -8, 46, -26, -17, 78, 120, -23, 61, -110, 21, -122, 116, 77, -4, -47, -33, 90, -9, 24, -71, -54, -39, -72, 59, -42, 36, -47, 78, 20, -48, -43, 50, 8, 100, -22, -14, 101, -88, 82, -111, 54, -72, 47, -83, -127, 123, 124, -88, -8, -35, 52, -88, -65, -11, 69, 118, -61, -41, 28, -117, 108, -92, 8, -63, -46, -68, -41, -71, -5, 23, 2, -123, 109, -5, -13, -87, 114, 95, 110, -19, -83, -92, 85, -11, 66, 7, 12, 28, 16, 90, 32, 44, -47, 57, 109, 69, 80, -59, -74, 103, 0, -55, 51, -38, 90, 5, 17, -81, 87, 33, -33, -4, -90, 23, 45, 71, -100, -2, -28, 80};
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
    msg.setTimeStamp(0.31067580476680856);
    msg.setSource(49259U);
    msg.setSourceEntity(81U);
    msg.setDestination(55767U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("QNDRTWDMVTSLGLWUBHFTOSCNRKIBMCWGLQSIHLWVEKNUEJKPXASCUGHBVKV");
    msg.plan_size = 57090U;
    msg.change_time = 0.010069639678363052;
    msg.change_sid = 39828U;
    msg.change_sname.assign("ULYJTQBFTXLYMOVKHPIFFUZOCOZVAUYHHSXNOVCHQVAYVEYLICJWLRETJRKQ");
    const char tmp_msg_0[] = {-11, -94, 102, -68, -109, 91, -88, -85, -3, -72, 17, -124, 24, -70, -66, -25, -90, 106, -101, 80, -118, -85, -2, 37, 22, 17, -29, -96, -100, -60, 52, 122, -2, 12, 29, -124, 110, 71, 2, 97, -2, -97, 22, 7, -15, 34, -18, -65, 124, 8, -1, 96, -88, 84, -45, -123, -42, -111, -11, -86, -35, 58, 99, 71, -85, -11, -41, 100, -75, 10, 103, -8, 98, -84, -67, -122, -18, -60, 59, 66, 41, -101, -78, 104, -12, 15, -37, -58, -36, -128, 26, -114, 45, -74, -125, -20, -39, 30, -19, -111, -127, -97, -5, -20, -72, -97, -74, -1, 116, -8, 37, -116, -44, -123, 50, 27, -111, 61, -118, 93, 122, 7, 34, -67, 16, -75, 105, -122, 48, -70, 112, -117, -11, -13, -27, 37, -100, 79, 91, -34, -16, 70, -114, -41, -109, -9, 113, 7, 16, -96, 75, 122, 54, -24, 4, -5, -103, -76, -73, 40, 82, -51, 114, -100, 9, -109, 4};
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
    msg.setTimeStamp(0.4638884224502017);
    msg.setSource(38691U);
    msg.setSourceEntity(120U);
    msg.setDestination(50217U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("WTBREVGTMTGFZJ");
    msg.plan_size = 16203U;
    msg.change_time = 0.3355382967728421;
    msg.change_sid = 23102U;
    msg.change_sname.assign("GICDSFEJIKASXWNXNBRDEGNZRUBBOCXPCTWBYHOWFAVBJEENGZHCHZSDTMHNGPPIDQTFCHNEIWQDRBVBUIWOKJOTLUJRAZZRJKZNTLROGETMOYI");
    const char tmp_msg_0[] = {104, 44, -115, 102, -9, 85, 121, -11, -37, -102, -53, 111, 108, -15, -123, 56, -48, 120, -55, 80, 120, 98, -62, 59, -91, 70, 58, -54, -15, 22, 82, -13, 28, -4, 5, 34, -44, 45, 96, -18, -76, 67, -22, 31, -48, 69, -38, 91, -28, -8, 30, 51, -62, 21, -73, 90, -83, 51, 34, 32, 114, 70, 52, 31, 97, 7, -61, 34, 54, -102, 18, -20, -99, 27};
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
    msg.setTimeStamp(0.6953494054728218);
    msg.setSource(51169U);
    msg.setSourceEntity(136U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("WNIELRHSGMCEESCINFOAQMRGEUWQUKGPTRXUBIHFKCAVTHWYLDGKMKQSLIHOARCQZYNFKOBUQGWCGDZJZBWBCBRFJQDNFOZVVBQULTLPZMHWOOYIJZPERSGWYCFENYAVHVUINZOHARQCSWEHWLBNOQJAXIMTXQENRBXJMLFASPLVPKOGIIKMJHTDYVWJMADXSHUZPDDTKXSTLDFBFXCTJYJIPVJ");
    msg.plan_size = 4412U;
    msg.change_time = 0.2521313303108582;
    msg.change_sid = 51544U;
    msg.change_sname.assign("VXRRDFRTMBCGXLUQFTUPFBPOCOAQYCMHJTOHBJKVXPEVAKKYPDWSCFSOHEYIWLJIAEUANZSBWPDTGFXNZTSEHTNMURALOVRUYRTFIGOYZPWVSZUIALQKUVIWYQSHEMDLM");
    const char tmp_msg_0[] = {4, 92, -82, 49, 39, -69, -90, -92, 66, 32, 96, -106, -1, 70, -92, 2, -35, -100, -9, 92, 24, -63, -33, 46, -70, 32, 58, -118, -91, -51, -77, -74, 24, 79, 5, -61, -39, 68, 106, -105, -14, 91, 72, 21, -5, 55, -48, 123, -57, 123, 88, -48, 121, 105, 2, -81, -10, 110, -65, -87, 84, -64, -86, -94, -85, -27, -113, -100, -122, 29, 124, -22, 86, 22, 111, 96, 31, 79, -65, 17, 51, 125, -12, 95, 14, 63, -65, -46, -12, 122, -37, 104, -119, 52, -47, 82, 46, 91, -55, 108, -32, -82, -35, 61, 87, -60, 60, 78, 115, -24, -101, -125, -65, -28, 37, 80, 106, -60, 18, -120, 74, -89, -114, -96, -35, 43, -93, 94, -67, -103, 36, -106, 58, -62, -55, 109, 125, -70, 62, -28, -93, -108, -49, -99, -30, -18, 94, -79, -63, 119, 26, 115, -63, -120, -79, 52, -59, -13, -27, 6, -20, 84, -1, 22, 24, 21, 37, -1, 55, -21, -100, -39, -112, -19, -52, -107, -100, 39, 43, -18, 15, -14, 45, 53, 99, 27, -125, -52, 18, 14, -127, 2, -24, -125, 94, 4, 21, 1, 6, -62, 124, -115, 90, -16, 116, 80, 28, -63, -45, -11, -54, -17, -110, 92, 86, 99, 24, 26, -107, -51, -82, -126, -40, -11, -1, -34, -82, -64, -70, 32, 50, 52, -12, 88, -70, 61, -28};
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
    msg.setTimeStamp(0.8516510089604781);
    msg.setSource(33885U);
    msg.setSourceEntity(238U);
    msg.setDestination(38870U);
    msg.setDestinationEntity(88U);
    msg.type = 175U;
    msg.op = 236U;
    msg.request_id = 62360U;
    msg.plan_id.assign("HDZWONABDKJJOZAWCUYLNJLACVFLPXUVTZZSLEKKHKBBUGXPFEADGTKYVMQLONKBWSGQUUJDNXWJYFRRFPHCBMIAKVUXDGCIOIPMVEORZEENCEEUMQQTPAWGLXVFSRTPDIIXITZEUQVBNXOTDUHZWWJOHVXTCZASWRLSBHEAMDVOFGGPRYGKOMHLYTJRPKESPNBQYZHSPTSRHGJCQCFDOYJIYMXXDNFRFVF");
    msg.flags = 13179U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09468761863428377;
    tmp_msg_0.speed_units = 116U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BLEZCMUVEAIAHOYUDHPYIPLFOAXZASBDXMHSGWQUKZKAOIRXENRYPJLCZJWCLNZCKOGUDHQWZIBGVCJTQNYTWRMJNUINFHSPOLLRITKCFUHYKGBCYZXOGZEPSFACRJNHREWSDTFEJQMHTZMVECPGJSMBVVAXFFWCTKMD");

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
    msg.setTimeStamp(0.25479233893442355);
    msg.setSource(38689U);
    msg.setSourceEntity(143U);
    msg.setDestination(18225U);
    msg.setDestinationEntity(223U);
    msg.type = 115U;
    msg.op = 217U;
    msg.request_id = 19648U;
    msg.plan_id.assign("TAJBGPATORHVXCMTGWZFBHNIAJOYNGJEFZBKZ");
    msg.flags = 31599U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4995U;
    tmp_msg_0.off_x = 0.48488983703768807;
    tmp_msg_0.off_y = 0.2838053925306907;
    tmp_msg_0.off_z = 0.4653744627009653;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UNVNRMJOFRGDZVWL");

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
    msg.setTimeStamp(0.844587817123866);
    msg.setSource(30594U);
    msg.setSourceEntity(79U);
    msg.setDestination(57043U);
    msg.setDestinationEntity(30U);
    msg.type = 248U;
    msg.op = 113U;
    msg.request_id = 25245U;
    msg.plan_id.assign("JJGADCEUMPWVITFATSHHCHUELWQFOZDSIFQLYQENBZVIRKZEBZMHEBXDUXYGZMMLWJQQNAPDHPNVBLREYPRCIBWSCLRYAPVZCUIAAUYJXOKCJJJWKISQZKODRDEGKUHSKTGMVNWYXZCUAQATUPXVPTRKCWKFEILBPNISVRCLDOTHFRCOLHDEFXGU");
    msg.flags = 47623U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 25866U;
    tmp_msg_0.control_ent = 174U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 43U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5753123269682692;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 124U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.6204477813369043;
    tmp_tmp_tmp_msg_0_0_1.z_units = 5U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.08350281933256432;
    tmp_tmp_msg_0_0.lon = 0.8160719307332955;
    tmp_tmp_msg_0_0.radius = 0.7579398328094841;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 77U;
    tmp_msg_0.proximity = 149U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JJUINZIGZOQRGSHVIYBZERZTBUZLFFAPRWBAUTSPOUYKCHWSITQYYULIDWQVOJSLJYZUCZBHJAVZHEQJZWCSJTETPVKZSRCEHEFTFKRRMQWPK");

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
    msg.setTimeStamp(0.9316340040381842);
    msg.setSource(15359U);
    msg.setSourceEntity(46U);
    msg.setDestination(3759U);
    msg.setDestinationEntity(64U);
    msg.state = 170U;
    msg.plan_id.assign("GIFCIIPNDWTILBGFVJKVHSGUTQKDGLMQEVHJSUZJUTRZBANCIVEMQQHDBJMOALZPKMJSYVMYXGVLPNXZNPJYHWLZPWMKGWLBORDLIFHRUHOYKHVQXGAODXGZNBFANQRMOPLKAAUXRMTBJDRUNSXPSSCCURAQTZXEHWWBCMFIWBXYACTUR");
    msg.plan_eta = 1084130792;
    msg.plan_progress = 0.9580107330855071;
    msg.man_id.assign("TISOYJCZKZDWQCBHMUWHKDURTSCMUQHKHYGNXEFTUAJWMLNJFPBPTBFXHJSNLASAEQFHOLCWXXIDQJOPVGWSRDRRTDWETASWSXSPJEVAZBYGTVGJQKUIEJKSDOGUUKNATAQRYDXCMSVN");
    msg.man_type = 55955U;
    msg.man_eta = 1329611816;
    msg.last_outcome = 73U;

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
    msg.setTimeStamp(0.1778023445528042);
    msg.setSource(7116U);
    msg.setSourceEntity(131U);
    msg.setDestination(33578U);
    msg.setDestinationEntity(197U);
    msg.state = 232U;
    msg.plan_id.assign("AVTCWLGBRIVGMLKMHFSSXNQETHWNXHSYIWTJMYUNDIYOBFPVR");
    msg.plan_eta = 1910752347;
    msg.plan_progress = 0.4567529102277543;
    msg.man_id.assign("BJRYBZIBWAEIUMPCWNJSQXZMGYWZEKKEIHVDEFBOGFLSGCLRFYUJDJPQQIIBFTJOAMLVSFRQUMDQSPNEHHYHQUAXMWPDPKTWYFNRINHOSNRWAZBATXDSXETLIWTALUPOKGGYSUVHLZ");
    msg.man_type = 30357U;
    msg.man_eta = 2033115848;
    msg.last_outcome = 180U;

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
    msg.setTimeStamp(0.382338235478626);
    msg.setSource(15592U);
    msg.setSourceEntity(151U);
    msg.setDestination(44175U);
    msg.setDestinationEntity(83U);
    msg.state = 34U;
    msg.plan_id.assign("DFQGKJZEBHZPZJIWXSEGHUPKLJVVTQPOGZHAJWLPBENCYLFNDEIYJYOSYLHLEIBUDIFFEVCEDIKKWQNIYOKEH");
    msg.plan_eta = -951132939;
    msg.plan_progress = 0.7395857896811688;
    msg.man_id.assign("QBWKEZHZWMAILYLTDEUKKNOOIRQNGGZVXZPTRBKPTVJSWIWTNPZXEPONSADCPKBPKMRNJBANHAXLDWWPFFSWZAFWQDOMOTIAHJIHJAIXHNMSZFGSFYOCWXBQFUZXPYZRUYTKRUFARTKQIEPBOSKCN");
    msg.man_type = 40364U;
    msg.man_eta = -1106488458;
    msg.last_outcome = 237U;

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
    msg.setTimeStamp(0.8494567600827906);
    msg.setSource(50534U);
    msg.setSourceEntity(209U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(246U);
    msg.name.assign("GLPKYFTORLJZQDQOZJMREZBBEDXBECKZUUPIFRBIVOHKADNMWAKYBHBOQDJFIXJGUKONIQOUYNJWXRBLYEVVMFQSZDCYGZYHZVPMSXQWNAS");
    msg.value.assign("AXLSTUARUAIEZVGGTIEIWZCNPUHNBZKKQDLWLELEQSNRGDGLFJVFACNZNMIUXVYXIVAZCYDCKWJEUFERCBQWYZEKMPBCSOBTSSFJDVTZQFXJWWUNWXUOQVBOSGGPINBTERFMDNRXFPQODYHDCKKAIBPLKMRTMTUZJFLVMISTPCHSLQCYNAXOYVJLWFMWZCJOYJMPBLNGORTJMOFHAGADHYOERK");
    msg.type = 88U;
    msg.access = 82U;

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
    msg.setTimeStamp(0.7154297201412596);
    msg.setSource(9651U);
    msg.setSourceEntity(121U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(1U);
    msg.name.assign("CFDMCZJUJYXAIDBAVVSNLTLOGHFLEXYRIKBOBKGQRNENYZLSMPMTZVMKVCIBQHQLVSMWKJESJAFNKLPGBWWNIUEAHWPCPRYYPPHOGGYYNJAXJAQEPTUKEKJHIHBCUROYPUFQBNRSLNWSIWVWOLGXAXFJDXDOQJZNUXFTFQYTGLD");
    msg.value.assign("ABSLGRSFPCPKFGCPTIZQCEHBXHHKTPRENIDYVSLTHRYDXRXIZDIOABTMWFYQGZDEZLKQAOQJSMJOCKRVBAYOXPDOCIYYECXUJVXCPZIPNGLDZQVXWHNVJRZLPHVQXULNFWTZLJOILOSWIICXYWEYRWKM");
    msg.type = 13U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.29531238163368323);
    msg.setSource(3258U);
    msg.setSourceEntity(217U);
    msg.setDestination(55894U);
    msg.setDestinationEntity(211U);
    msg.name.assign("HMNCOGNWSPHQBPQHSDWUJJQ");
    msg.value.assign("ZREHOVEKVMBHZEDAQEHDVWFVYXEUYTKILSCAQHVWNHJYNKLOGUZXKGOJTWKRMVOVAJZWPNBIFBRCBBOBJCRUTEFAOHGXAPLDSEISZYYDOPLLXQZABRQCPLMIBCUXQNQVYMDNQMIKXOZTTRDWGWTPWYQJSSABAYKJEUFAFRXNTHCNINGXMMETJ");
    msg.type = 124U;
    msg.access = 233U;

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
    msg.setTimeStamp(0.9871282101926138);
    msg.setSource(48339U);
    msg.setSourceEntity(136U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(168U);
    msg.cmd = 21U;
    msg.op = 219U;
    msg.plan_id.assign("RGDGRIPNXDASGVZWXTOSXREJGPLIZDYBANENJFEIRTGSZNQUX");
    msg.params.assign("EFZWBBOWQJPATMFUJLBGIEBDXFZEFYPIROKVEYCZEAYITOAYWVHXNOCAFDXYGTSQXKLCLANNVTVJEJSWLXQGXDOLNIVUURQYRUEEAQAOJQTCQPMIKKLUZNMWXKRDODRSRFMTFSYZDULATMCEIGCGUSFZTTVWBVAPLFRXKKEJKWNYUNSGDGJOBHDCGZPVMPPHRNPKAWWHXYVMOVUSHMGYCMHKRICCBPTISNHIJQOZIHFRJXGPL");

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
    msg.setTimeStamp(0.30866888357409905);
    msg.setSource(9392U);
    msg.setSourceEntity(163U);
    msg.setDestination(45990U);
    msg.setDestinationEntity(210U);
    msg.cmd = 142U;
    msg.op = 236U;
    msg.plan_id.assign("HATQAJHLKEBGFCMJTDSPRKTHIZYVWXBZHXJEWGAMFPNXUPZICJQEPIEOQSMVBBRNARCJICEZLHOWIJIPBUFLFIQPMVGABXZATLYVQQLZHRQWXJWNUAKMQMSCDHEUYGXNTNFLHNWBKNUTZYILTGKBJNXUSUPDRUDRMFDKLPDQDMZOWVDYVUXQJMYVND");
    msg.params.assign("RSSPIWZXQRYDMUFH");

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
    msg.setTimeStamp(0.2770606035388592);
    msg.setSource(47560U);
    msg.setSourceEntity(76U);
    msg.setDestination(53876U);
    msg.setDestinationEntity(11U);
    msg.cmd = 113U;
    msg.op = 169U;
    msg.plan_id.assign("MTBGRBEGFSAYXBVRMRYNVDPMXDNCQIKVBRWTHPZOTXSNXHKOIGSUNKAYEFJLFULLPJZZJCGRIRMVHZO");
    msg.params.assign("FRMUYROUPUZBOMHTENDVKXCOGDSHIARCOCEKIKYTDWNFLEHSAGSZIOGJGPYZEWGUFJRCIIHRSLWLPZIFABVZCCWEMBEBLJLVETTXQALVRBTFMEIHRESTUVYB");

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
    msg.setTimeStamp(0.8318946705236089);
    msg.setSource(63486U);
    msg.setSourceEntity(29U);
    msg.setDestination(21818U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("WVJOGABRTJEWEMBELLMYDGUOJGGENPWBUWJOHLTURSSTGIDVFPOHBGEVSAXNOHXHXXACQCVQTBYWFCREQUPWUKHIMOMWLPJLGUANTKBFIXCJTKZZEDKVYWHDQSDZUSDMICRDVSTAQVIP");
    msg.op = 45U;
    msg.lat = 0.9778841693470377;
    msg.lon = 0.9004158602080323;
    msg.height = 0.5413667107121654;
    msg.x = 0.8558433972913284;
    msg.y = 0.33655367569500494;
    msg.z = 0.66572766005977;
    msg.phi = 0.03376378227983856;
    msg.theta = 0.5598737197237899;
    msg.psi = 0.3722354472877497;
    msg.vx = 0.9099730046679567;
    msg.vy = 0.9864827543572244;
    msg.vz = 0.7935231880089442;
    msg.p = 0.39440930818799114;
    msg.q = 0.0733816801196594;
    msg.r = 0.39653542497942573;
    msg.svx = 0.27963444933982184;
    msg.svy = 0.1703385053552714;
    msg.svz = 0.6451619592879634;

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
    msg.setTimeStamp(0.7874458832181743);
    msg.setSource(18084U);
    msg.setSourceEntity(219U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("YWLRUZXRHWATMDEXTGOLYKQAQDQQMVVINNWZWVSDPMWCHINFVYPINDTRANFVYMEJHJYIFQMJHCQYHJYGXBSWAXSSGSXLCNTIORXTEOUQAVEUBPYOELBOKJPFFPELCZRFMVADZTAIGKNGPTEXPDZGXRMLMHUDST");
    msg.op = 88U;
    msg.lat = 0.09537369762260484;
    msg.lon = 0.5124578860096254;
    msg.height = 0.6091528037493553;
    msg.x = 0.11990616755127737;
    msg.y = 0.8208889199053688;
    msg.z = 0.9638630786080422;
    msg.phi = 0.5627205870870146;
    msg.theta = 0.5882912402415273;
    msg.psi = 0.5007133963251653;
    msg.vx = 0.04870384833499586;
    msg.vy = 0.5242842013865483;
    msg.vz = 0.9133223898437173;
    msg.p = 0.7145021816951328;
    msg.q = 0.5704073728005381;
    msg.r = 0.7391829420972802;
    msg.svx = 0.23755135316121145;
    msg.svy = 0.7409084387765328;
    msg.svz = 0.6036388698317248;

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
    msg.setTimeStamp(0.5752961670818004);
    msg.setSource(25882U);
    msg.setSourceEntity(24U);
    msg.setDestination(25750U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("MFHHMCCXGGEUEZXJPRVOMGQFZCJYSIJZFXCROLMNTEXWOZVDAVNLCFOSDTTNPGV");
    msg.op = 70U;
    msg.lat = 0.0485592281497782;
    msg.lon = 0.23580352647448033;
    msg.height = 0.8329480977898042;
    msg.x = 0.5409635484400749;
    msg.y = 0.09257854167930157;
    msg.z = 0.11673662310304966;
    msg.phi = 0.9159338144100666;
    msg.theta = 0.6913374079469119;
    msg.psi = 0.7646160205776484;
    msg.vx = 0.5524251473745152;
    msg.vy = 0.9648175615909833;
    msg.vz = 0.026025113897902852;
    msg.p = 0.9727098148262635;
    msg.q = 0.8134019154572658;
    msg.r = 0.667634927969529;
    msg.svx = 0.8528152120851753;
    msg.svy = 0.9935809882838841;
    msg.svz = 0.5161512696236361;

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
    msg.setTimeStamp(0.9926456051807105);
    msg.setSource(40435U);
    msg.setSourceEntity(251U);
    msg.setDestination(36695U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("QHQKYXLPSLNPDDYBNVACUVBBGUCJEEXTJQNMTIYMVPLSBUWXVZKKJAAPMGBBTRZUEHCDBHMKKSAMYAHJFFJNZHDILEHJWGBFWROJOULRNNKQTIZIWIOCIMYZMEGEGASHZLDDLXOGAXLRJKRDBHFQSEWIA");
    msg.type = 76U;
    msg.properties = 110U;
    msg.durations.assign("MOEQXGHJJABPQHTNJVZIOQYWKHFOUPZCZTNCDYKOFKAHQVSRCWMFIWISLQABCYGODDPIFKSLOBXSKSUZPJBTDLMGWRDUXKBUCCAASEYEHJTQGOGRORZLBIAEOVSGVZFEIPYJNITFMUXJYFTVTFKMPRYEOAIMUEFHLNMP");
    msg.distances.assign("QZXKPADLWGBIDEEWIHGFTEDJCCSYOQQKOMSFFYDZWTZCAVPTBUUWNLATPOLDICQGXJINLWDNVVXPBEVOMKLBNDIHNSHTNHDMUBSERXQSHCZZJFX");
    msg.actions.assign("EIJTIUQWKMHUQTVJOOKCXGDBOBEPQOPKDWQAUBFOBVNDZAWLHEWVBEVAFTMSPIXMINQGGAAYCSONBX");
    msg.fuel.assign("PQDNBOKTNWDXZSLNEAULPFZIELXHKUZRCZJCSOUWMAQFEZAXVGNPLRZDINIHJNSGJTVYYDUGSBXSCMAYDBFACNMWYBHNJGDHGVMOLYMGRMGUXJUHEGKKDTKOHDPQOCQEMRLEDQIICOFROTJWAIHFEBHWFJRUCQBIQKTYJVGPIRWSBTKRRVFFISJ");

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
    msg.setTimeStamp(0.37280769834925553);
    msg.setSource(5619U);
    msg.setSourceEntity(139U);
    msg.setDestination(121U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("SQBTFJMYBVSILFLXMWCCMUPPTMMWLCJEDMEUDNTGLKIIEYDAFNGFMZDXGKHIBRAYPGHHZWLWUCETQM");
    msg.type = 15U;
    msg.properties = 48U;
    msg.durations.assign("KFAQXOMXZXPUXGLEGXNBKIGNOSUCGDFSDOISAJKLZVUUZHVUOBBVJJKQEUVGEMRANHPEMSQITDHHRTJHXIHRTIKPGAXJFZFRYBYBQPWPDWAWJANBMHXNMQCVERRIOCOIOIERMDAWLUQKDSZTVZWYIKFOLDCQTGEKMTMDNCELJEYCSTBWZJTZVJBRWKUOPBUPGQSPVNSZLYHIOTLKQSYCCYXNYJMSAPYTFNVWQC");
    msg.distances.assign("NJFVNGXUGGSRPEIFBZYHZBFLMECKXFKTHQNZNKAULNKFROAMWJZPJQJUDBYJDXIYOMPJETHTEKIYOLHLPGEMCISPSVKCCTFAAPURBNWCEBHWDZMUVRDBXJYHKQXGNKLGCVZALKPCVQRCIDORGVIRZMSKRLSEOGHZUQHULEBHQPSJJVZCMUEMDXIMNAIYZYYOVDXAPXTCBUJWWANTVFFVFBFDUT");
    msg.actions.assign("ZJGHFELPNADWSWZIHCRAVINBDRIVRJPJYAPOTOJIEGUXQRAGJHVKEJRPDBNYIPXJXFQSOFNUITRUEFBFZFVFSPGAUMTSLZOCLSLDH");
    msg.fuel.assign("MMPMYQDRAMDLFUQPUDNJSUPIURYLESKKXABXTCYISKOFOSUGTMJHZKTCCJLUOTNFPVJPJHZKNZPZHOXVQWXLWSYNNZDQPCG");

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
    msg.setTimeStamp(0.6017379233577435);
    msg.setSource(35844U);
    msg.setSourceEntity(23U);
    msg.setDestination(37582U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("OCJHYEZKDDHVPTNTSWNUVPIBQKYLVSPKOVHTKERGMDCOPWENNIIKCHIGOMUYCUEIRMXVJMGRBPUECEZSOEDCRLUJRTTOZRHCULMMYTOSGFPPYSZZGBAMQJXVNBFIAGFFDSXXCNWRYXXDHEIRQQXMJGWJOJAAIYZSVM");
    msg.type = 244U;
    msg.properties = 216U;
    msg.durations.assign("QTFNQYWJXKIAWDNLWIKDZMVHWEZKEZTGCTJRLKFEXOJGSNJMFEWCYAYOBDDKQGVUTIKHWCJLFQXGWIDSHYZGKUQMFIEZYAGTAVSDRNXMZUQMSPSMUNFRHBBXQUPWPPUTMVYJUEMBHMJNPBWESCALVYDO");
    msg.distances.assign("CPUJNAXLVMMITRWFC");
    msg.actions.assign("OBTIOPLUWTZIGOKEZLHGDFNRCNGTESWRXUGRAYKWBBACPBNAQGEIY");
    msg.fuel.assign("MYPYBDVCNREOSTBBPELXQXVAUWRZOQRVFHXDGZNOVXEDMWCLKXHUVDGSXFEYDCSZQOWZQUOGKHWBEHHYTDJXMNMBIGSRGECMOCQLPJWKWDIBPJPVNMFCUZUVPMRRHAUNPQFKLFSCKHUBJTVGYICFAVWGAUBSJFJMEZDMBNZITAAHFQAOJUPWRWIKPOUEMAEBILPXQYAXXNENGZCSQAITCOLG");

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
    msg.setTimeStamp(0.8899784744772791);
    msg.setSource(31015U);
    msg.setSourceEntity(215U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.43822710587790903;
    msg.lon = 0.2432289037393931;
    msg.depth = 0.08073198618967647;
    msg.roll = 0.7009012118340723;
    msg.pitch = 0.8500215527282163;
    msg.yaw = 0.280891626860834;
    msg.rcp_time = 0.2330346972402384;
    msg.sid.assign("POVTUSPBSQSPQGYLPIFKYBMYLMWWAEVVRVNLCITEDTHGEMZBNOFSNTRQFFDUATPQHXPAOWXMUQIEGCTUZAZILLXWWEHUCSHROBDNJRMCXHLQJQYVJDDOSAKZJUAOADVEHAYRXKXEGCUSBZFKJVPJXKONGOTWJSNGIUTDYAW");
    msg.s_type = 110U;

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
    msg.setTimeStamp(0.007533529714060738);
    msg.setSource(48312U);
    msg.setSourceEntity(242U);
    msg.setDestination(43468U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.8345772634218889;
    msg.lon = 0.20004761481194977;
    msg.depth = 0.438491797447671;
    msg.roll = 0.8070043419285143;
    msg.pitch = 0.8115234007739719;
    msg.yaw = 0.6587579226535523;
    msg.rcp_time = 0.38180059048677273;
    msg.sid.assign("ENNTWDALCAHQXCDCQEWFOZMOJBTMCDDXEMEJZTLLHFHUZSXFZFUPYHKIORVILHXNQAPINOODMESOIAWTMLGQUHPGTSILNZIKHVQYBXLQVVOGURWBIKGCKJXQDYYRTDMGVHBPYBWSPLFHWZATJWVODLMAJFSQSUMRNPJRRGUVNXMSRXPGZBJTIHFIZKTRDKMUPDNECOLVGERSJEYEQAUZJV");
    msg.s_type = 135U;

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
    msg.setTimeStamp(0.7669687478244649);
    msg.setSource(47521U);
    msg.setSourceEntity(130U);
    msg.setDestination(59389U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.18293579193902265;
    msg.lon = 0.019209171400822567;
    msg.depth = 0.7348446968345456;
    msg.roll = 0.5568584821520761;
    msg.pitch = 0.6138572994459588;
    msg.yaw = 0.8736219106809344;
    msg.rcp_time = 0.7247095361957543;
    msg.sid.assign("QUPOQFKNRDOHLUQPKXGJBWGWXJRKQ");
    msg.s_type = 99U;

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
    msg.setTimeStamp(0.00979940896283682);
    msg.setSource(458U);
    msg.setSourceEntity(214U);
    msg.setDestination(40580U);
    msg.setDestinationEntity(93U);
    msg.id.assign("NULMGQHTCAIOBSJUPFUCAFZMVJHQRHHRKDSNQXNBWWIUPFDMLKMRAWDPCYTSBLFYIGEGKIKOLZALJOGGIEFIEYBIGFTOKMTMZQTQMZLDLRTODELHASNYRUCYWJVOKTPYFJVQFOSNECEQAJVBAXVQTJDNWQXVETVIPXWUXWSDXVGHOPCJZBYPWNPXCNSGLZYEJIORELCRESPZAHVZYHOBNVKKSDMMCXZPRDRTIRWFX");
    msg.sensor_class.assign("HWOSUTDYGQWXQCAERAHFVIISGEEQMVDTCYZHKSONNXXZPNBRWTSMZBEYTJBLVSFZNBJQEABCEZFKKXSDLOWFMFQOARGARBIVPQOCCCSOILIFWYMGKCCILMXBLFRTXNDDQAWUOULUXLWZJJRJCHHPZWMHFIYCRNNQXSRHUJXMGRXAHHNYHPTQYYWIKZNILPPOJKVGZQATJDYSEOARDKDUTEVMLPK");
    msg.lat = 0.17539762376978618;
    msg.lon = 0.6522975439772786;
    msg.alt = 0.11719321714817654;
    msg.heading = 0.6249506101908037;
    msg.data.assign("ITWDBEQMXALKHUAGUHEKSMWVTLZSANOCQAVOPLTPUORITPPECCNLCONFJDLZOUBVDXYMEIWCJPSENAXEDQSTSFHFHCIUAWY");

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
    msg.setTimeStamp(0.08980068798959717);
    msg.setSource(3621U);
    msg.setSourceEntity(234U);
    msg.setDestination(49191U);
    msg.setDestinationEntity(193U);
    msg.id.assign("QPEPUHHUWINRRLMQXNHAGMDCXJAJQIORSDEROZFDVWFBCKHYGEAFWCNQTLBGYABDPXZKAABNBXKDTWDHNAXNPSHRJFSUYMSKKUGZQIYTYLGEPPCS");
    msg.sensor_class.assign("HMSCWBUUFWJSNMNVPNDQKLCKNUBZKCLBGPHJLBTJQPEUIFRMGIILTHEHUVECLTIHPZIRVKKSRBTVAEJFGWYSCGUXNIOHNZSAWTAQFUYZXCYLQYYWIGFMWGVFOZJOQEVPARPFCXUEHYJQFJZZJNGVL");
    msg.lat = 0.6572617393416955;
    msg.lon = 0.35082855533781754;
    msg.alt = 0.8942316616712206;
    msg.heading = 0.6898107288033497;
    msg.data.assign("DDFQICSBQLBW");

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
    msg.setTimeStamp(0.04898668970574793);
    msg.setSource(41684U);
    msg.setSourceEntity(245U);
    msg.setDestination(19202U);
    msg.setDestinationEntity(169U);
    msg.id.assign("UWYOJHBONSSEDDVETSSZITGFWSMQATQGYHCOXMJZWVAXPNKKRUQCEJGCVZTPIPQXOSKIOQWPZJWZUYXVRCJMRAVTCJAYRIWUINLHYZUFBEGRFHLJNDMZPDEKBXKLOKJXZGTETIBPBLTLVDHSSLSGARITFANNPALNFCUXKLWOVKEIUUCVPDMROZNARSGYNDAZFTCHQVDFEOE");
    msg.sensor_class.assign("FJBENKANFJJXPOHARWYQGPXZMZTCCMYXJOSYTGZHLDTFIVWLKQJNMJMKMBNYFRTBXWKNSJDEANVDBKWBUCNOPZEOXYTDSDCHFTGZCRRNDXOXEPVKRUHXPSMCERHUBALRVCL");
    msg.lat = 0.8726821210675112;
    msg.lon = 0.7953493097296007;
    msg.alt = 0.7304892700619552;
    msg.heading = 0.8810629073233309;
    msg.data.assign("LREKTOCULZKNWHTQHDTKVWVY");

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
    msg.setTimeStamp(0.4712241237052197);
    msg.setSource(7413U);
    msg.setSourceEntity(66U);
    msg.setDestination(33999U);
    msg.setDestinationEntity(40U);
    msg.id.assign("DZQCOWMAZNWUDYCRUMXEOCMAIDHRBCLFJDALXOAWHMTSZKUQVRBUHEKDIQEZZAYXLZXVIWTYWONGUSPQFTBODRFCEABKBSKGHNDNBPMKTWZTJXSVCLUWPAKPZNMGDHGIJFG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PFVAMGOOECOGFHOQEMXIKSJIMIOWSDCPCIAYQARDOCCANEQMPQTXUSCWZBKDHMONSZKXBJNZEWUEY");
    tmp_msg_0.feature_type = 236U;
    tmp_msg_0.rgb_red = 253U;
    tmp_msg_0.rgb_green = 83U;
    tmp_msg_0.rgb_blue = 210U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2566351858794963;
    tmp_tmp_msg_0_0.lon = 0.9828858843862581;
    tmp_tmp_msg_0_0.alt = 0.5521070708973791;
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
    msg.setTimeStamp(0.10472166240206715);
    msg.setSource(58769U);
    msg.setSourceEntity(225U);
    msg.setDestination(3053U);
    msg.setDestinationEntity(22U);
    msg.id.assign("QRDZBMHHQWVUJPNIQMEKFGKVGPSQGGEZVNDCCCHNWHNLOUHHVLRCDXROSSRLJUGFTYHNRYPYVTLXOTBJDKRREKQQIMUYYVBXTXOJKKWKCQTLQNZYGJVAPFCGXATIOBPSWPRXGWIUIRMXEMIHXSVEJBVTEBOLIGFXSJLDFNSUTPBFDYOHLSDNDCIYWDWWAETIMENWLOBSPMYZPMGZFDMCBAACQEZO");

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
    msg.setTimeStamp(0.6601903649200646);
    msg.setSource(59887U);
    msg.setSourceEntity(76U);
    msg.setDestination(12578U);
    msg.setDestinationEntity(4U);
    msg.id.assign("VDMLTSGNGNOHOZWDFBAVSZVMKPYPAQNEUPWSUOURBGIMJEESKBXADOTIEUTKPMTMFWHTDVZSFTRKPJJX");

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
    msg.setTimeStamp(0.9185911273584925);
    msg.setSource(47621U);
    msg.setSourceEntity(204U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(19U);
    msg.id.assign("ZVAQOFFDKFBJGTOFRLPELAJIOCPBZKLFRUHPDHSIVKNUCONRXSOONVXAJ");
    msg.feature_type = 175U;
    msg.rgb_red = 178U;
    msg.rgb_green = 97U;
    msg.rgb_blue = 195U;

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
    msg.setTimeStamp(0.1866704770642812);
    msg.setSource(60954U);
    msg.setSourceEntity(17U);
    msg.setDestination(5905U);
    msg.setDestinationEntity(197U);
    msg.id.assign("NCDBKFUNEYKIOWCRSUJWIAMCUNFZWGAPRASHXFTGVBNRWRSPZKAZSVIFQEPJUJBFDGLAOIWHKUGZMIYLZDDOLCFIZYKYFNMERRTQJLNFNFPKIIMLAHBWUXMCGFYGWEQEDBBEVXAYRKKLXPMLOCDXWWAPZUDYSJHSJCUSTREHWSGMYJO");
    msg.feature_type = 227U;
    msg.rgb_red = 156U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 185U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2207184692212676;
    tmp_msg_0.lon = 0.06909948606042371;
    tmp_msg_0.alt = 0.3066907884675276;
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
    msg.setTimeStamp(0.5408732229733028);
    msg.setSource(33601U);
    msg.setSourceEntity(248U);
    msg.setDestination(8498U);
    msg.setDestinationEntity(200U);
    msg.id.assign("JDZXLHDSKSKBPLHXMGIIVMOKFKCPAWSPEXOZYTKYTVBIMSWXRKAZWMJIWRIIIZKCQXKHVNBDLUIZVEUFYVEBETNQNUZINGYNPQWOFPDLLVZHFMUPUJQEUXTSGQ");
    msg.feature_type = 80U;
    msg.rgb_red = 101U;
    msg.rgb_green = 125U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.054603854101597404;
    tmp_msg_0.lon = 0.8361423249704588;
    tmp_msg_0.alt = 0.18507926020430532;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5306899151526538);
    msg.setSource(41499U);
    msg.setSourceEntity(48U);
    msg.setDestination(48783U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.38291862316626446;
    msg.lon = 0.9888827126976317;
    msg.alt = 0.5444664083530648;

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
    msg.setTimeStamp(0.4957385989697466);
    msg.setSource(50850U);
    msg.setSourceEntity(238U);
    msg.setDestination(6813U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.05997253639636613;
    msg.lon = 0.20235020111749968;
    msg.alt = 0.9615453004963483;

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
    msg.setTimeStamp(0.6210266210521992);
    msg.setSource(21967U);
    msg.setSourceEntity(90U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.8712000962571799;
    msg.lon = 0.9898687143662998;
    msg.alt = 0.05863651448276952;

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
    msg.setTimeStamp(0.016018411124521514);
    msg.setSource(1083U);
    msg.setSourceEntity(78U);
    msg.setDestination(30104U);
    msg.setDestinationEntity(147U);
    msg.type = 44U;
    msg.id.assign("SJAUKXVZBRMIPNGXLJPSYMOAANZTKPQFAHDTCGMZFJHFBNGJOGUYSEJWLHSDHQNLDHAMOTDOZLDNHCUMICPFQXPQDGTWYBSZTISQJBWSXSCLRBIMAARZSVCWWBVCDIYBMWUVZTWQNZFIXEXGKUVEGEGZUVEKJPORRTIEQMYXECJJLKRLXVVRRYDFWALDPFCKQMYATIQGPFUBRXSOUNYLPVEPJGOZFDANWIBCLEHHTO");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("SBYBUKDREGKGXFEPLNVGAADIAOJRPCXUWFYQYTILLUXAEQEAIOMKJSGBVYNYMCLWTXKUUVXGIKEJFNVVZBKECWXJSMSRFZFDUSJH");
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
    msg.setTimeStamp(0.19242366008170142);
    msg.setSource(58917U);
    msg.setSourceEntity(0U);
    msg.setDestination(1735U);
    msg.setDestinationEntity(18U);
    msg.type = 54U;
    msg.id.assign("VKDGWZLPGUMPZPEGVWJVULTKZEQDAPHZRBUSXPMOXODNHOCNCOPYDESAMIQDIMHXBECBRRWRKHNUSMOOKQAJKVBSESHWBAPPSUUCDETFSRQBYJEEAQJFKVDJZDNLICFMI");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 22360U;
    tmp_msg_0.name.assign("OSOGUPGYKEFVWNLVMCTHBQSXSWDTGDUNSEKJRBGIJKBZIGHAIVEXTCQMYWOSARDPAEYBZAQZCBMRMQSNATQWVNMIPXXSXLPVYHRRWBEQZTJCJAVJVZIGDKTLRPXOFFEADYWFSYRFDVPBJIUJJEUOEDBIFLHDCMCYGMYWJNNZAILLNQBUZFKGUACLSKKK");
    tmp_msg_0.custom.assign("DZXYOQVDLQLKO");
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
    msg.setTimeStamp(0.37471871743432916);
    msg.setSource(31479U);
    msg.setSourceEntity(185U);
    msg.setDestination(39818U);
    msg.setDestinationEntity(153U);
    msg.type = 40U;
    msg.id.assign("PUHAMBXCAAGOEMEIGVADJFFCHIMXEFUJKYRDJCLWUWIIQRQZ");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("XISDWUVSXHAKFIBDYWKAGCHKYMVFGSRCYEPWWOHBPZAURNLNGPZMZKAICGKMLNUCQZCOQEVQRIBHWNLUZ");
    tmp_msg_0.service_type = 62U;
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
    msg.setTimeStamp(0.273295421644674);
    msg.setSource(36666U);
    msg.setSourceEntity(115U);
    msg.setDestination(31006U);
    msg.setDestinationEntity(252U);
    msg.localname.assign("CWGHGFVCGNEMUEXBWTTXTLSBZTVYYJXSAEZIEMGJBIPVOKIVXFLUBARWIYLGMDJCFVZZBCRHMESMKJGMGYDUPLYVLGMJINWOUOPNUGLJSOCWTXTMTILQUGFHYVQCFODDUAE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IJXYNHRCQHZGOWGAAOXCODSUJUBCVSPMITBU");
    tmp_msg_0.sys_type = 143U;
    tmp_msg_0.owner = 40407U;
    tmp_msg_0.lat = 0.9082954954292578;
    tmp_msg_0.lon = 0.5751340163816082;
    tmp_msg_0.height = 0.40484429969475244;
    tmp_msg_0.services.assign("ZYQWUQTOFAVGCVCUFUHLUASOGHWHIQJKWEPJIPKOJTWQNFTCRLVIKRVQGEPMWNRLTIGGNZNWRXMAAMJASKLRA");
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
    msg.setTimeStamp(0.7841300339121796);
    msg.setSource(608U);
    msg.setSourceEntity(28U);
    msg.setDestination(34801U);
    msg.setDestinationEntity(237U);
    msg.localname.assign("YPQFUWNJEPFJSODEZKZMBBTGDTBNCFOHAZEVIQOOIXWNPOEXCRMZDHYSRLNIHFUOAWXHIXLKMHWWQSRKFTVXASZCCAZDNIHXUDMWYVGGKFVRLZBGCYGEYTFVLRDTSPJPKNGLYLPJHKUQLSQIRURSKJM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VYWRMZDEVZTFWAZXFZMXPOAZROERUAGVPUQTZBYBWOQXAMHEQIPSWMSUKIAXBGHWOKMCKMLZAKCNOKIFWIFWZQOLRJII");
    tmp_msg_0.sys_type = 153U;
    tmp_msg_0.owner = 32122U;
    tmp_msg_0.lat = 0.09035517615733912;
    tmp_msg_0.lon = 0.5640335807488308;
    tmp_msg_0.height = 0.962619666997409;
    tmp_msg_0.services.assign("CHZJOXLUKADTWBZSVBGNGMRFUFVGJYZYISXSDCOAPGYC");
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
    msg.setTimeStamp(0.7705703785681178);
    msg.setSource(27372U);
    msg.setSourceEntity(254U);
    msg.setDestination(56808U);
    msg.setDestinationEntity(205U);
    msg.localname.assign("QTSLFBFAPMHUARQMVRBSTNWPXQWEZFFEOZORDNXPVXGYK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QNCQJOMLTBPBNDCZQUSIQMHMSKOIVFCUWAOYBTXXSSNMIJGTPWBRALMHOXLWNKWIBNHJYQAOWUVFIPMCTNEWKCZFYEKBKYRMJDEGDGRVLPCNVZYLCHRBOJOSDAZHLZSCUYHTGKIQEUGCNFHSVDZDXYBDODESKAFURIRFTIXZGNLUBIXUVXQKEFFEHIWYZEZDYGOJAETPTTKMWMSGPTDHRXLRWFVJQ");
    tmp_msg_0.sys_type = 68U;
    tmp_msg_0.owner = 61142U;
    tmp_msg_0.lat = 0.4541174664414471;
    tmp_msg_0.lon = 0.2931356599264432;
    tmp_msg_0.height = 0.18909543708194188;
    tmp_msg_0.services.assign("UPZSDGFZKHKTHRVDQQKJEBWRWYDOOGHEBWJEQNGSSGPNNQVTYCDSZSVTMWRTXFUKXCAKGXVTLZHNSMLJDBDXPENLOUWRRIPEHCFMGYBHUVRQBLVSTNRVFWCCAMOQAZXAGHDRR");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.973665018906857);
    msg.setSource(12272U);
    msg.setSourceEntity(51U);
    msg.setDestination(38730U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("XGOYQXTTOKBGRXFGCDHLSVCYEWFMOXAPZGCPPLWUKGFWQWBMVJPYKDIMNJIXHRCYBFDIKAOAJFRKTOQDCUWEUMVCAHCBBFZFHHUOXZUAALDKZVTDTSVXEEKWETBELIQMBMLUYDGFU");
    msg.predicate.assign("MLGEAHEIWPJOQSFGJWPDHYIXBKCZXCUHBWJQDOUAMIRCOSWQZLNTEPYBCICEKFYXQQNMRHLGKFVZAJWKZPHXNXXEPCPMIQTYADUFFVCDLVUZOTDVTRHAICARGMLVBVSUKNQDHKCXF");
    msg.attributes.assign("HBCPPNSTCWKNUCEUPKADHUWOAYMBKMWZQZPICJMGDHEMDQKDJRAKEIHTARSMFJTMQUBTYGMCESGRXIVTGZUSUCOQXHMAWRZWUOLRFKNPIABTHSHOGFEFEVGNVGWVIJABYXFCBOTZSIGRVYAVDQBJKWZLYGVWPYYPSLONZEQJDEPJSXDXNIJFRELLNNLCCTRXKFKHIUPIRGUFVOXRHQPFDUHVYVEJNOOLQLSZYXFZYSMWWQMABKZCIXXNOLD");

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
    msg.setTimeStamp(0.12963999991146424);
    msg.setSource(7626U);
    msg.setSourceEntity(17U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("FUFDGMOYDSUIBVVDMLIWVKSCWXKPWEKJACSZXESULINSCWYHZJEXZHJZWGWNIMFQSXXKVYAQNVAMOFQTZCMNVGQBZLSIQOJBHRDPAITP");
    msg.predicate.assign("ADXACVOQUEFJWOUKITHZWNLQYALOKXSMSLEWNMCVNBOPITVYSBJJYHFMQXDXHUBMEJPHNRZGRBCVGLLHFFJCYTQSTRDDXQEIZSKURMWAZVG");
    msg.attributes.assign("BFIKDHREKDGIOYYTMUVTZSOWFCNDGTMCKINHUKTUZPGWMMYESNSCOLJFQGGNEFRLRKQMCLXCLEFPA");

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
    msg.setTimeStamp(0.6062406587984609);
    msg.setSource(5309U);
    msg.setSourceEntity(32U);
    msg.setDestination(36437U);
    msg.setDestinationEntity(118U);
    msg.timeline.assign("LGFOVGQKFPWJAGBNEXBGUSPDMHBCZQYTHTJGZYTFDGQKYIISZUXLGMCRTIHXQDDMOPWUREJYKPJVAMNUMWBVGXTBTKXFVEYRO");
    msg.predicate.assign("YXSAOHRGOOYOXJTLRLWTCHODNLOGZAQKVFWIYCQIIKWLEIBVWKNLERCWBZDSRTDIHWGVCXKDAMPTJFURBZNZROIBEYKSHPPSCUOSXZWDDJHCUQUAZJYETQBZDXYBVFXHPNRFGTTEQBKNVNTNPAUBOZQPMLUBEPMIDEPEVFKLSDSTYLSMVUWWGYAFFGSMAMEXPNDKUJQRFHCJNXUEINMGVACGVMZHL");
    msg.attributes.assign("SQGWGPNVXDZAEJLVCVCZYHDYQOCRWEBXHQFEUKBCPEMQBHWWJXXRTUJLOQKDEQVUYTAJVKMSYSWFJURXBMWDFZTCIGDYNDCSGRPLDEKVNELBSYIGAABSOKWIVPTNZXCGRNXHPVKTDKJZHHUOTIPINZPGAZOSEJHGABANJFOBMWYLPRCFZSMOAQXDMSAWYHKURWAGFICTGQIXYUFLMYEEIFDHFJNQOIMVBLZTLMZXTJNKFRRUULN");

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
    msg.setTimeStamp(0.01691982749775056);
    msg.setSource(18474U);
    msg.setSourceEntity(126U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(240U);
    msg.command = 30U;
    msg.goal_id.assign("BKPCMFCRKTNSROIBPLJJHGXJCDRSNJYHJGYULPWIPGVFDDBPEJMFVNFBOYYKSDEOAXCUABRAJWVUQWLGABQGLNUMDEKCZCLEISPTPSUFRWNSPCLARIEGTATULZQKLUSQTYTDJVKYQPCMKFXUMOWTQYTAMBZSZMGIIZUXVOXBIZBQFDVKFWTWEEVGHNJVQRRHOVCOYBQAT");
    msg.goal_xml.assign("EGKOUISNPXSUFGWQKKTYERXHLVMYZEVMUTGDSTMIBGAQRRFQOFNYACOAIRQFGQLLDICWFJVPTIRSJNHDUBDICSBDCKVFCAMAAZUABKELXBTCIJBTUEMFJLWQSRFOHPLVBZUKNHVMXTUPYVMEULSVMYWDRMCWPJRLPESZNXYXJZIW");

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
    msg.setTimeStamp(0.671097366287447);
    msg.setSource(13661U);
    msg.setSourceEntity(248U);
    msg.setDestination(53540U);
    msg.setDestinationEntity(244U);
    msg.command = 14U;
    msg.goal_id.assign("EKAXKYCWXBCCPHGRXJAYUDSAQUBEJKNKNQEPCBRDWMJCFDDZSFHAGIZQUAUXNLVUPHVTBXJFSFUBMDOBGQPYZIPGTAVYMPMIQWVCYJEMSLKTZWESLRIKYTGOQIWTOERLRVOBTKXWDILTHXQIGRVVIKHFHKYFSSFXNLIHCZMMCCJQNDTDWROFJYJ");
    msg.goal_xml.assign("DZMEOKSQJHPFHXJESHBUKVEVMJTAPDZQACGARNBREHMATGYLIZPWXWLIJQLOVJQWLRPIJOPXROSIFYHUITRAVCBFQTDXLOGPMMHFBNSIREVKKWGCYVQCNZYXIXDURKQATSSLKDJDTIPNVGDSXYDSHTHNTNHFCVEUGHNXWGCLBUYRBXBGWKLJQZMRPUEWFFAYPCTOWQLOAZMSLVUIFNUUAMFMGYZCZOBJOSYYCFMGVKB");

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
    msg.setTimeStamp(0.7228249421411844);
    msg.setSource(38266U);
    msg.setSourceEntity(156U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(1U);
    msg.command = 163U;
    msg.goal_id.assign("DHMPBPFXIVUEOENNEWATMKHPZVKZFBSOIOGGNRGXLVXEYJHFQMRTZSAPDMCPLXWUQSUIFGYELCISICFOCLTWALHJMWZFSOFXPAYGZJYKCZNWUMKRHQJYOUUBJKOWUMPHCERHBCDLYZWFXTKPQHVMEYRUDBSZIBEDQHWRDUXDXYEBCJVSST");
    msg.goal_xml.assign("AQJLJUYOIFGZKFEAKTCBEKPASFGIOOTQYDKTZRCAHXSOSDVUHUNEXBSKVSLSJTLLFZMYQTMNFEPJDWVDBTMMPENEWIPNFDYXRGONHPHFJCPJYUMTSJCYUJXPWQQKUHDYLWDOVDCGFJHDSG");

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
    msg.setTimeStamp(0.9599311129791637);
    msg.setSource(41311U);
    msg.setSourceEntity(19U);
    msg.setDestination(64736U);
    msg.setDestinationEntity(171U);
    msg.op = 175U;
    msg.goal_id.assign("CXFJDUDECWUHXEPKIDQJOZIHLOTHZVVUAFSSBHPEIKONCBDJTFYQELLAMFF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JWSODHNCQQZMQIURFJHNXKYEQLDWVSJHIGQCPVCKIKHUUBSVMHIYXDKQANMHEEYPRRHTTVYPDIRKCAVGCOUOABDKHENUZMCZDYJXAESUMWBVMXGIMZJILWEZVAFPVCZXQRWOLWHZQXPDFTXWETRRLKTBOGAPMUBSSNOUQIYLPAFJSYEDGTMFHPGBDFSSILCGSOIAJLWBTYJGWBXFPRBRRFXNNLCZEUG");
    tmp_msg_0.predicate.assign("MSJOYEPBEUEHAYFJMYLJTAZCPPVKMZBHGGFBCUJNKSMDYQLHUNAOZQEEDXINOWOMQGPSXLUOCDHTCQLFDIGKVCTBZMQCHUTDFRPCGMF");
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
    msg.setTimeStamp(0.2178509720521946);
    msg.setSource(52871U);
    msg.setSourceEntity(131U);
    msg.setDestination(65131U);
    msg.setDestinationEntity(164U);
    msg.op = 113U;
    msg.goal_id.assign("NHFSUIDTQGLRQBVWAXBXXCKUXVHIOCNGKETUUJZUVJSDLSMECOGX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YTVZUFEYDMHPDBQILMWVWWPLGXSFFGLQUEHSTKWPAHSJAQNAMMHFJCSKPPNJIDNHBOSDCCAEOOSJ");
    tmp_msg_0.predicate.assign("QHBJTZXVBAOWYTLBMNZCR");
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
    msg.setTimeStamp(0.9337863827352039);
    msg.setSource(54900U);
    msg.setSourceEntity(24U);
    msg.setDestination(38147U);
    msg.setDestinationEntity(56U);
    msg.op = 209U;
    msg.goal_id.assign("NOAKJSONOPUXTQRCBWMKXGWJNKZXIVTFGRMYVGLDLSDHMUTJCTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YSUQGZEGIQYPAEWMCIUSDR");
    tmp_msg_0.predicate.assign("QWRZNIJGSLQMOFYEKVZOSIGYQGTBEZVFWSNVHPTKYPBAFDTDXCQDJASLYRWUBDKFLWXPMBUGTKPVZGLDHZTONIYOERCQOQRPSDJXNOTINXAHDHOOMAYVMLWGCPHNYURMGIKEUWBHHNXIUERAZPGBUSKQSYJEUCMEGIVUVHNLMYSIKJJRBCCPGIFREVTSVNFMCVXBBSAJUQPZJFLKZUT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RVJKCSZQHJUYCMJPKAIKMXEHTRCLRANUVGRSQYFLAOPDXKGQLXEFYQKDIDBSFEAMLXYZKZFTTUROKMSTCWSVGWZDTBTPNXHHAUICTJYZYENXVFNWQKWUNSRJOXIKZRNLBJZPVXFD");
    tmp_tmp_msg_0_0.attr_type = 186U;
    tmp_tmp_msg_0_0.min.assign("IIMXYEKSBARMRJDCIBPZHATWQBBHVQXEZQQNZYLQEXIMPFKTRRZFDKVKXIUERQTDLSOTPGWTXNLWOOUTLKFDORIYPGUPISHUWVAFYLEJWSCGNDAEVEMGUAWFHBBHZDCOJCVAQYVWGLJAFJOCFACXOPKPYBLKJSYBJDDGWEZRNJCJSIHOCHDXUXKUMWQYYNHUFIUSANMIDNZGTKQOVFQZNNUTMZFSPSATXVEMPYMVKJ");
    tmp_tmp_msg_0_0.max.assign("SZXPNUNIJLTVCHUDUGKJIELWNBYK");
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
    msg.setTimeStamp(0.39870160095634066);
    msg.setSource(57445U);
    msg.setSourceEntity(242U);
    msg.setDestination(20009U);
    msg.setDestinationEntity(253U);
    msg.name.assign("WSDVBRYFYDNJSPGVOWGUGFMBZRAHMULXNYVYDYIUCHRGKJLGTUOXKNDVIHTMMUCQRMWKAYSVVDZVIZIKCQCLHULZDEORHPBYEXMUZKIFQJNVEPOIPCMBTIOGZOKUTAQMNPVLWKDZQCJLEGYSMQFXOBMZRDGPFVSHCPONJTXEXNEBJIONEAJXXZECEZHWSASRYABAWUAKHTIRNFWJBTWFQIFATQ");
    msg.attr_type = 128U;
    msg.min.assign("NJLBUBLTZPOSQODHXPRKZIXQPEAOGSVRCSWJMPCFIGTUZFGFKEWSUJHAGWKVQGJKODNMDBBJLSLXWTPVZHGZVEAANUIIVRXLCYPCRIPPFXXFCDAIORDTIHTQMRKMDMMKZDVYEWNLNNMNSQWRAUXTZSCFYYOLBGRHQPSIUASUUGTYABKQNYJWKLMHEBMZTXFUEGAEHNHCEXFCRVJFXTZYEQWYOOSIBQDIJKLVMQTDLDWBNAYYPEWCCJFHGOKH");
    msg.max.assign("KZJGBYWVZYYNRRJMDAUMVGHNEEKQFUTHPOC");

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
    msg.setTimeStamp(0.3731150454258598);
    msg.setSource(57610U);
    msg.setSourceEntity(26U);
    msg.setDestination(38856U);
    msg.setDestinationEntity(134U);
    msg.name.assign("BJCYSJRZAIQXVOETGLIAXPKFUZGQCHUTTFBDNEMKFVAQFDLVHRWSMYGSTJKONJVVRILWHPFHLLQPJWWRZJDMHOZFVUSPBKBNSCRCZCRNBXVHYGMHEYNGLOOEJRMZKVCQAWOOWXTYYWVYCQLEPNGITOBFUAGPSFLDEEPRJDCABZRKDWUISGRMWXFNNBCQPXTNUOWBHQEHZGT");
    msg.attr_type = 251U;
    msg.min.assign("AJRCCFSQTKVWWEUOUWYTUGXNEFJFJMJVSWCQINJGFRSEWPYNFGSHWYPPUIQSRTZBVIADNTEKDGAHTODMMEOBZXEUCMDMJDKQZTIILSKLCMZUHAFLXVGHNHRB");
    msg.max.assign("EUUVFUQSZXELYHRGLTBJKBXIATYZCMDCKKPNNQOSFVTWGOIQIQDPGJHASUTCRXEDNGVFMZITKVDFNAJMWOWAFCHSCHCFZLOTIYMYXVYTGWLPVZITANZLOSESREFNRCKBRPIMECTLDKLYGPRONKMWSUJUWKXMVXBQUEZNIQUOROZWSSRJGAUHYIHYXBNOPGPR");

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
    msg.setTimeStamp(0.31871908417769756);
    msg.setSource(24745U);
    msg.setSourceEntity(2U);
    msg.setDestination(27869U);
    msg.setDestinationEntity(105U);
    msg.name.assign("PKLYDMOCMMMFWHPJGEAZNOCJWQYWEMSPLKDQTLUMENQUPZMRBHJBIGFFRJVJNCKKHGAWIDEJKTNCZY");
    msg.attr_type = 122U;
    msg.min.assign("GOJAIHBKJTYQMZAZENDDBKSJTTU");
    msg.max.assign("FSBKTHYDFZIEGSBVTQAMCBKBSIHNEOESASPVAHDFINUBZLSINVKZYWGVUGJJITINFROUJDATPRFQAYKSCKBAMCCFDYOYEHHDQ");

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
    msg.setTimeStamp(0.18491562849553322);
    msg.setSource(4936U);
    msg.setSourceEntity(222U);
    msg.setDestination(12718U);
    msg.setDestinationEntity(116U);
    msg.timeline.assign("HMAWTGYIZOOHRSWQVNUVUZEJFQRKWODFSEIIJWFBUIXKWDXDSJNNIVTSLFRNHEGZYLQLNYYDKSXZAGZZVBBDJKVZSBMPUOZWJTYTZPNBCGHTEGYFFBSPD");
    msg.predicate.assign("PGCPPGOODEBEXQSZZJGLRKYWYNPZMGKGTFVHMQHLRCOEBFEVTJMQVKHDAWIYNMPBYRGDFCGRRJENKMKMWAQLMSDCZHACSIJOBQEXQJTWKZYLCSVHRUNRQDTTBPXAJCSNNFVXUOBKLOSOVEMNFJIKQYPDWNIWCIKMULXEWGSUOLJGDDRARHTXBHTBFALFCUHI");

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
    msg.setTimeStamp(0.6022775164463585);
    msg.setSource(48329U);
    msg.setSourceEntity(88U);
    msg.setDestination(14269U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("IKRGZMNLBEFFMKRJADUBNVYVIQTIBLWCVGRZRHNXRMTHOGUPXNGPCYSNHLINAYGMHFSPMYHXAHTCTHQIXTXRKWFAFWGQYZTUUKDZEFCTVXEMBDNFOLCLQCCCTLKJHOJXEYUGBQKARJIJZEBVLQ");
    msg.predicate.assign("YOJNFPIEVPZXUJBYMCQPQXXPDXVLLBBYIHDSVJPWEAPOTHKLWRDNNMDLMHARDRNRGPBONIMSCOMTYMNCMAEQELKOVFIVRSBFQBYGTYHGEYEJXEDOEHMCHCZZOJAVFCFKUCZSTOWLGPSCCXBDKWWFJZX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZRKLMWHELOVNJIYXXIXPLTSWYLNFPSIBJOFBIBQFZJTCRCKUBAWEHXAGNONDLRXJCGOJVONWQKOEKGSMMIDHWYXIYJWUDGDFUSZKPSISGZECMVEYTEUKSVTAXVRWAFZGXNJFDVEROPVPBTBYUTXNIADHZTOBCLPARLYKYGWKDTWMSLCNZAPQBQUNZFKYPSSHRUYKDQQEGIATERZUTZHHRVMGMROACCQMNJGQAMVBC");
    tmp_msg_0.attr_type = 107U;
    tmp_msg_0.min.assign("AJVBOHPXUVWDZOXBUICRICLZFRFMHVXWJRCUMMKPOMIQIGBCAHTMBVGGGEJBVRGDQNLJCKYNWQQYGIZDUVYARXMAJWYINOONYLDEBPSCNXXEPDLOAEHTETQZARPJWGXFWSUXISPJQTDUMHFKKMRTKYTLZKSJWRDSGNXVJLTDCDDUQYHXFZSOTUKBEZKNCNIHBWLKVIHMRTULSAOQMZEHPRIFPQLEYPVPBZOUTYHFWCFVL");
    tmp_msg_0.max.assign("JNETIWYRLMIWAIAFCVCQFNYBXNUWUPPQGSTBIJCYQUOTWSMKFWHVKEDZHQZMPQIZMMRLBFGPJYDWLGNJQRSTIRJXAVZBOKNOXTXNFJUZNAXGKCYDQTUGMLAN");
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
    msg.setTimeStamp(0.25761160605587163);
    msg.setSource(54471U);
    msg.setSourceEntity(132U);
    msg.setDestination(10811U);
    msg.setDestinationEntity(88U);
    msg.timeline.assign("RZZASYCYDNUTYBYRQFTPNEZHWZJLQLSBQFBWWCSFGGVFEXRMQDEBRPJXCJAALVFYVTDGDWOXNYUJLFQFVUUZRYSBBCZIRLSDKXMTSOWALHRXJNVNYZPQKNDMAQMQVKUODHTGWOVLUNHWGBTWMEOIGTLEXAKTB");
    msg.predicate.assign("YWPNKJMATCFWBKYOMGOGFFTRAWZQOWMSGMGLUKHQWGPTDVDIFGYZOTHOABINZTDXBQGEFYXIZMMFJYYMUNKQJD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MXHDUDUGQQKYOLPTIVHNEZHHLDWSOXLQOPMNUOUFKVKRQFNDFOKUQVVOUFGLHCJGSGNWVJUSCBTOMMDNAACIAZXIOEERNXQSLZJZBEBPTCFGEAUYARXPJYLYTDCWDIEMINWCNGYKTMAFXCCTFWIZSFRBTXFWKNX");
    tmp_msg_0.attr_type = 49U;
    tmp_msg_0.min.assign("VKATKEDRUEACSLUNXFZYMYDDKILONKOFGIBKQLSBBRVXTLDAPFCNXZBGWTOULVHBZXTGJBLINLIRQSADPKMHUQFQJHWAQXGOMRSKAGNSDUAO");
    tmp_msg_0.max.assign("WAJKQKLEIUPBDEZITOMAYTFIYONQQQUMHPRXDBXRGGCPPOFTHLWRPANTYAVLJHILENJSQUPAPJBBFJWNUWFCYOYZXDRESRBTRZWQCWDREULUSJMYPFHNPAWZPWKUQHGOTYIACGXVFOGDNMXOXBNSZEDNLWHORWMVIHCMAOSHCCXJCKZSTLXVUFQBBLKBVZQLADTEHKQEFHXFSVUVDTGOCZJMGDLJKYNGGTGAKMYKUDMIS");
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
    msg.setTimeStamp(0.24799388650483567);
    msg.setSource(31048U);
    msg.setSourceEntity(214U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(113U);
    msg.reactor.assign("ZICIIRGMBYXYNJXMUKGQFSTYYRXUZUIWCDJSPKLWRFPKXZOVBQABPZZSBZQENFCWRVIMXGOCWOIMZRANOMGBZOLWATAKYSYXSNAHEBVOVLJBCELGTKOYBDYKSASDKMRHEUIAPXCASWQGGLSQHFFMYPTLNHRPVWBUHKIECBOGRDPJRWJOCJEFWLEAQCXDDEPMZEXNVRVSNQTMAJL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KMJZPSAZTUYPQQUFWDHXAYWINDNSWDPMARVXGWOGGFGBJVGZBKLUBJUI");
    tmp_msg_0.predicate.assign("YWXIZQYGMWBTRVOSPLOWZTKOSMJNWNBDEDOJCNBOGOFTQXAWCLEKAEDFUTBOIAVAEUZPRQUP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JSFJZUZOEQRXLLNQIFKUBRHXSNUMZDSMCBWOHQHEYUNAYVPQVDJDSLWNPCGLTJBJRRONCBYSNZTXFJKQXHVQZDYOVZOMYZY");
    tmp_tmp_msg_0_0.attr_type = 79U;
    tmp_tmp_msg_0_0.min.assign("RPYQNHVEDAPAORMLMMIQHNDKTIWRCJHRQCWLVVASEBHBNMRUAVLCPGDMARQTKNKIEJZBTSRWFBSOMGUBOFTNWKZTAUOQVNFADEYXKCQXCLNCXASSTWQEJIJL");
    tmp_tmp_msg_0_0.max.assign("JXUBKALWZASNVXZDVLYQJHWKOYDQADYUOEMRQWNUUDVNHOGECFNEMPEMPBNPIUZXIEDNILFMCYBCOTCRHWWLCPAFSHZLXYPBOXVAOIMZJYSGKXOETYZVGSRSXJUCSLWLAMCLENQTUZGVSKSFJINHOWWDHTYBJOAKXRIRFHAFARBRXJQCTCDIDPWKIVGBHPLUYEFJCTXQKIFTGSJFLVRQDBQZPVDMUKNGGHAJVQOTKWPIMNTHKBMQEYEGSZTURG");
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
    msg.setTimeStamp(0.9348718483778455);
    msg.setSource(59842U);
    msg.setSourceEntity(135U);
    msg.setDestination(22266U);
    msg.setDestinationEntity(9U);
    msg.reactor.assign("CDLDJHZXHEGWLGTZRFIKBTSBU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DQXGEBSBSRANAVMUTRRQKETVIFPMIPYVPXJHIUKIUGFNSJZNDWVMHLKTDIVTOQOWHGORUZOYKAFJMLQYFZXGRKAXTOFTECCMRILKXDEEUSFSCANMCBLIUKBNWPAYYTHSBSICHEKDQDCAEWTEGWRPWDGEFDTBVHOXEHUSPRFVLYWJNJWNVOQQWLQRLHJHSBTIZZKYNAZNOJSGRAFPZNZ");
    tmp_msg_0.predicate.assign("CAHSIBHDQKJMXLNDLVJCWTFHLXGXEZXRGRPOQHYGNIGMFLYKRSXG");
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
    msg.setTimeStamp(0.25214995709651533);
    msg.setSource(3577U);
    msg.setSourceEntity(250U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(207U);
    msg.reactor.assign("LYDDZMRVWXAYSKGDSZRWSXIMOPKMKEXHOVIUVUOIEKDRRBTAJLGAINZHKYRNGZRZBCJWGTEQFNZWGOTNBQNISVJSYFLKTLXYLGOUOQCJWMXEEPDJNYPTOMVOVOMZAHMNBKIHIRZWJBXGRKUIAHFCJSFDVBBYFYCVLBJGZPMFDPCQUXMASVCASLUBTFUPETWVWLBHEDDCNTQTIYRPQEMALPJOQPUSKHISWEQRNXAFXKGT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQDVMNSZSIWMJXQZDXPXLAFYFBNRCBSWECGPMDCELJAHFATMPDHODRDQHJCVQIJZEXGRPKRYCZFXVGWUGFUBIPFPMYSUEUBRTVBUNJVLGZAQOPQOAIKFMDCSPBTGEMPOMEWALOIRZUVLEJYZYAEARVUBLZYPRYKYJRX");
    tmp_msg_0.predicate.assign("CHMBWXACXKSYOFMAKDZOZSLHSJEQVDDVOSYWKMSSHPLAURMBRUTHCKQBPCKGTUPLVLICTTFXZGDXAANNBKH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LGLGVMOTMJTOVVBYZXRDCTIVWHFRUYTPXOSEMDQDCDYKBDUMUMJTSPQXCMLZNWPXRZGVUSLFRFQUEQIIWAARYCBMLPUYENCGYSFNCAAWNIBHDIFYKKZHTDOKTSAASZGEVXEAZXRHWFNCLNOJFPZIPGPJFQKESSMBSOUCHVHQDGWHNQVWQIEAYITCRMOUNJYXJJPDRMXHWIGGLHEWXTEKLKDIYTBQBFVLNXZEKUOHAPJAJRSNVLPBW");
    tmp_tmp_msg_0_0.attr_type = 175U;
    tmp_tmp_msg_0_0.min.assign("NPEPAETRQHDSVPDMVMCWAOQUFNYULGBHIQELIEOZGUJPPHN");
    tmp_tmp_msg_0_0.max.assign("HJKIKHXGBTOMZAOUVVVTAJNOACDNTIAZGSMFQCRZDWKRDUCQCEXSSHNPSXXZPMAGXNFBJTJPPRRKKMOSVVJDNUJTDPCPLEIUYEW");
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
    msg.setTimeStamp(0.8027840438713255);
    msg.setSource(25294U);
    msg.setSourceEntity(229U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(121U);
    msg.topic.assign("OJUOFRZALYVEWGVINRCOKSSYNCUQTGUXD");
    msg.data.assign("KDPGZNGTJWTDRRQIFQWMCDWEBKWBLOVKLNXCAUVDAEJATTDARHRAXXYXZNXBPMUGZMJBAUILSPVQOVUENRSYMKHKKUJYYJMOTPWPIZGZMSTYWBFOMJTOQRNCDOSJAGQAFXEGCDTVOSFWSMMGZFGQVWMVJBPQRKLUONVUSFPEHOIYDCUEQZIIRSNWXTWUYQVXDFBTUKDHLHC");

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
    msg.setTimeStamp(0.29502045560721935);
    msg.setSource(28745U);
    msg.setSourceEntity(114U);
    msg.setDestination(36357U);
    msg.setDestinationEntity(253U);
    msg.topic.assign("TMMCWDOVFULCVNWFGKBSUJMNQURYQCVYNEITTRPBEHOIICJTWYLITWUOKPRSHAVXAYFXBBLRACJFPRZNFTKBORPDUDZGGQSBSXOJSTREKVDKMCDAEIDIVSHTXLQUHGHGHNPNKOHECZOOAXJOMWLNZLFAUPLPQYYQHQUPMZERQWZBAPJYDIUJWIKYCLQGNVXCZGDFEWSEWTYSDSNDJLRKHVCT");
    msg.data.assign("QJAZICFTLCZWPRZWVZQZVFECSPUFEXOSVDGTKPDZLEIAAMRWJBXUJDNRGAJFVSITHDEZJWRFBOVTBELWU");

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
    msg.setTimeStamp(0.3660995794585862);
    msg.setSource(62062U);
    msg.setSourceEntity(67U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(128U);
    msg.topic.assign("MXUIDHBSIBLJWOYXPEGHHEINXLQEUPSZZRWVQMMKSFGZRDRHIBBMQOZATGTFDANNRSXJUYRXKLMWMMBFERVCLLGPWMQOZOSPAY");
    msg.data.assign("EQTPTPIPMROOAPTQWSHODNGRABQUYKSGMSTHEWCCBUZMJRDJMUNPVKAFUZLPRCFNCJDMRHRYIWITHFSSOHLIVRFJMX");

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
    msg.setTimeStamp(0.8815977081173737);
    msg.setSource(60982U);
    msg.setSourceEntity(72U);
    msg.setDestination(53736U);
    msg.setDestinationEntity(90U);
    msg.frameid = 244U;
    const char tmp_msg_0[] = {83, -65, 39, 55, -16, -2, 80, 4, 73, 83, -87, 12, -19, -100, 16, 3, 2, 10, 59, -81, -25, 75, -37, 88, -19, 64, 45, -73, 88, -105, 76, -128, 6, -104, 107, 43, -46, 79, -42, 2, -10, -99, -11, 47, -77, 75, -128, 19, 91, -5, 83, -27, 122, 34, -59, 51, 50, 38, -104, -53, -94, 103, 95, 28, -112, -67, 70, -107, -28, 27, 47, 109, -24, 15, -6, 80, -32, 39, -56, -58, 54, -85, -45, 121, -10, -45, -26, 108, -33, 23, 87, 59, -17, 41, 107, -18, 78, 106, -123, -48, -106, 1, 74, -111, -26, 81, 57, 105, 23, 57, 47, 111, 106, -99, 88, -43, 99, 37, 46, 124, 51, 38, -122, 76, 91, 0, -92, -46, -102, 43, 91, 124, -53, 123, 64, 23, 59, -112, -85, 77, -62, -42};
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
    msg.setTimeStamp(0.7879779755107218);
    msg.setSource(8486U);
    msg.setSourceEntity(199U);
    msg.setDestination(61020U);
    msg.setDestinationEntity(90U);
    msg.frameid = 21U;
    const char tmp_msg_0[] = {-96, -37, -110, -20, -121, 82, -69, -57, 22, -56, 107, -91, 3, 113, -50, -122, 70, 79, 123, 122, -40, 6, -2, 8, -25, -39, -54, 35, -55, 6, 50, -113, -92, 38, 97, 125, -20, -29, 50, -84, -14, 57, 92, 20, 66, -107, 66, 15, -117, -57, -36, -71, 7, 11, -79, 61, -81, -91, -96, -69, 1, -65, 61, -97, -21, 123, -127, 60, 21, -128, -72, 65, 74, 68, 75, -36, 4, 52, 46, 36, -52, 30, 110, -75, 116, -72, 7, 17, -127, 70, -42, -48, -16, -2, 51, -23, 18, -55, -10, 78, 97, -58, 83, -102, 32, -54, 86, -44, -51, 71, 126, -105, 74, -26, 16, -95, 120, 41, -95, 94, -95, 9, -101, 104, -57, -70, -83, 49, 28, -114, -65, 110, 12, 12, -105, 92, -46, -49, 8, -99, 31, -108, 0, -116, 1, -5, -70, 93, -18, -59, 117, 65, 28, -29, -90, 49, 15, 63, 18, -85, -121, 106, -81, -10, 48, 33, -96, -52, -59, -76, -56, -98, 56, 103, -72, 69, 64, -46, -40, 32, 45, 88, 13, -104, -90, -104, -44, -49, -119, 6, -100, -116, 111, 102, -4, 7, 11, 99, -47, -16, 30, 63, 119, 77, 123, -63, 2, -97, -33, -83, -87, 122, -58, 113, -96, 71, -67, -102, 52, 40, -124, -83, -61, 29, -20, -33, -32, -14, 105, -97, 5, 16, 118, -78, -119, 55, -126, -101, -9, -22, 44, -38, 32, 80, -71, -66, -65};
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
    msg.setTimeStamp(0.3182628962783267);
    msg.setSource(12902U);
    msg.setSourceEntity(148U);
    msg.setDestination(54274U);
    msg.setDestinationEntity(175U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {-31, 99, -87, 114, -76, -113, -22, 111, -111, -111, -107, 85, -30, -92, 64, 113, -31, -95, 17, 119, 66, -76, 100, -120, -120, -125, 100, -53, 65, 70, -17, 21, -47, 47, 123, -26, -30, -11, 18, 111, 26, 25, 109, -10, 124, 113, 10, -26, 13, 33, 28, -7, 73, -100, -23, 102, -88};
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
    msg.setTimeStamp(0.8742758465633615);
    msg.setSource(11617U);
    msg.setSourceEntity(213U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(129U);
    msg.fps = 42U;
    msg.quality = 223U;
    msg.reps = 59U;
    msg.tsize = 2U;

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
    msg.setTimeStamp(0.65933786627525);
    msg.setSource(16347U);
    msg.setSourceEntity(242U);
    msg.setDestination(11758U);
    msg.setDestinationEntity(152U);
    msg.fps = 77U;
    msg.quality = 247U;
    msg.reps = 207U;
    msg.tsize = 111U;

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
    msg.setTimeStamp(0.8946968239162235);
    msg.setSource(6293U);
    msg.setSourceEntity(107U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(166U);
    msg.fps = 73U;
    msg.quality = 153U;
    msg.reps = 123U;
    msg.tsize = 210U;

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
    msg.setTimeStamp(0.7126644225155438);
    msg.setSource(54766U);
    msg.setSourceEntity(209U);
    msg.setDestination(6718U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.6019577124126251;
    msg.lon = 0.7143254651647042;
    msg.depth = 8U;
    msg.speed = 0.12185959985862371;
    msg.psi = 0.7283708827628594;

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
    msg.setTimeStamp(0.10496364435009442);
    msg.setSource(44394U);
    msg.setSourceEntity(166U);
    msg.setDestination(64895U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.8385788251374857;
    msg.lon = 0.35472381148278376;
    msg.depth = 198U;
    msg.speed = 0.8283758629394721;
    msg.psi = 0.5206260350326816;

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
    msg.setTimeStamp(0.6765870229528785);
    msg.setSource(14679U);
    msg.setSourceEntity(193U);
    msg.setDestination(624U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.5395005762427908;
    msg.lon = 0.31298749609692256;
    msg.depth = 132U;
    msg.speed = 0.6110731716849076;
    msg.psi = 0.4308210821850921;

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
    msg.setTimeStamp(0.711984773619034);
    msg.setSource(52447U);
    msg.setSourceEntity(53U);
    msg.setDestination(17876U);
    msg.setDestinationEntity(112U);
    msg.label.assign("WQBPXJGEICULXPLRODRCQNPMGEKHEKESU");
    msg.lat = 0.9327428253269775;
    msg.lon = 0.21232196091578603;
    msg.z = 0.19568847064050476;
    msg.z_units = 203U;
    msg.cog = 0.03515834815640684;
    msg.sog = 0.11250442194909027;

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
    msg.setTimeStamp(0.8480514250668181);
    msg.setSource(54428U);
    msg.setSourceEntity(212U);
    msg.setDestination(37122U);
    msg.setDestinationEntity(151U);
    msg.label.assign("CBYUNLWXAJEIQNHZRZJVFAUGKCSYINEGKPMHHGWCNHBJO");
    msg.lat = 0.9139864275170232;
    msg.lon = 0.3246391156300662;
    msg.z = 0.4353374564073894;
    msg.z_units = 164U;
    msg.cog = 0.18410831111997605;
    msg.sog = 0.9011235241418041;

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
    msg.setTimeStamp(0.9510628953547503);
    msg.setSource(28380U);
    msg.setSourceEntity(126U);
    msg.setDestination(41410U);
    msg.setDestinationEntity(71U);
    msg.label.assign("IDNCLZIINAEKGRDMDWMOAUYKSUZEWCSVTMMITUTQWDCGYRBYEOGOTNWPHKJQQIQGRBNAAGSUAIVRKHPZQDEWOFKLHBDKPSSQJEHJYVHEMNPQZZDQMJEPZCYNWQYPUXKCFDRBPUYFMQVVXPJBAGFLOUCOTRPVOJJXCBASSYDYHXTJFNFXMNAE");
    msg.lat = 0.1775790928285903;
    msg.lon = 0.12412862761806187;
    msg.z = 0.41076295834249166;
    msg.z_units = 44U;
    msg.cog = 0.3102619172389759;
    msg.sog = 0.7102619262781331;

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
    msg.setTimeStamp(0.12508728297465066);
    msg.setSource(19106U);
    msg.setSourceEntity(31U);
    msg.setDestination(24683U);
    msg.setDestinationEntity(211U);
    msg.name.assign("XAYIIQPPUBSKDFGMSUNCWUHHKHVQJWJUHAGNVUPIKTIURGFIPLOZJFANSCBIZWGDLZJVBVTJDZFFXSRY");
    msg.value.assign("POSDAAKHGZUFSYNRWDHPZHXFYGTSZLGKRRIVUXYCEBEAJSUOMTDDJVXVYYWICBUDOGPKGWVCEWBIAQFCGBLOJBWHNPLMEEEOTQFGDPBEVIXMHXXFMEUMUCRLTFZKQVTQNZAEONSMTLRGMKHDDRWJPGOAHUJWPTUHIVNSCQSHNQPLBZXNAQFSBSFIVCJKAIRIUJMKYTFDYQKGKROLKVOZRRONLIJCXJWLZUAXPYYNMVLJBCSECYWIQMFTZQZH");

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
    msg.setTimeStamp(0.5361456475023421);
    msg.setSource(24320U);
    msg.setSourceEntity(104U);
    msg.setDestination(21455U);
    msg.setDestinationEntity(160U);
    msg.name.assign("NULQRQYSQOVVSCPBKTBIFSMTEGEKNRRCDTWUGVXPGHBCSQHFIJMAKGQYXHEZYHLVZDQIDPZGSAJFFWCRIKMEFJJBXZHMLTZKXJAXKPCRKWHORSHSWNNXIHJONQPDOOYPOBZFXVWDDLOCCUAYEPEZLFIARNMQTCJVOJGLSPWWJIDEMMTVEELUIUVUPOWKDCGHMXAFNBUEK");
    msg.value.assign("CTNFVRONXCNKLAEQJOUETDNUJIAFGMATCKGLKKVBZNMXBMNDPJSYZKRFQJXEASOAGCBWVLCFPQYYQEIECYOOSWCOJAYLWXIPJDKTVELZTIWBRSXXBSSDNPFZKBBGDXOTWV");

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
    msg.setTimeStamp(0.5140534440941403);
    msg.setSource(13364U);
    msg.setSourceEntity(170U);
    msg.setDestination(52810U);
    msg.setDestinationEntity(76U);
    msg.name.assign("PQZVKTSYWXKMTKLJRLZOCERPXEXVSHQXPIKANZOVQJFVRSKUJYWSUOTMVUPFPIIARHMRUUAMCLWYGDLZHXECHIFSFNSTUBKVEXHUGLEGODGCGYZTLWZHDBCTBEJESAETLBRQGWWJDLZJNNYGMLDYMTLVNKNFWMKICBXPGFCAWECEGAIXTOISUYXRJOJBZDHOBICPUFJACIDNPNADYQBVRQODIS");
    msg.value.assign("IVPDQCBWVKVDWGPBPJINMUMVGZOAZZFFLCJSMWQNJHQAUYQYAEXAIZPSZTKELEXRRCUNMDOZVGJJXKVYMBAVARJBECAFLFOKSCQDVKNSREMESYZWKYPGUXAXFXJBSIIADELSGNOSUHQUDEETIKRGGVSBEOYWMHQTXJFVFTRUBOJXDLRWMRYCHLCTHFZTUNIKNUMFIAQQOHDULYYIDOFKL");

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
    msg.setTimeStamp(0.14570759490528018);
    msg.setSource(25149U);
    msg.setSourceEntity(30U);
    msg.setDestination(37931U);
    msg.setDestinationEntity(124U);
    msg.name.assign("WVVJMCREYNXUROTPZWALDUJHPGQJCVABUTQMULIRADRTFOXHLTBTZWBXSRDGDQJDNAHQEVVOSBGOKXGJTHFUHZOOIUZFKYKXYVXTXLJC");

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
    msg.setTimeStamp(0.47186998096539656);
    msg.setSource(47523U);
    msg.setSourceEntity(74U);
    msg.setDestination(47499U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CGNEUDHTIJJAISHUDGSFRJQUNKORNNBPIIDUCUBMGHNTHDOOACYXQEJHCZOLILZSIABUFYVQXRGCJGLYYYFHXPCWEOBHIWEZSKWMJPELNZFLGUXAUXSLFNHQSWXAIJNOVRFDBPTYFLAPBKIMVLAVQTKWJDTKRNMVBRSPSDWJCFLQYFQOBYRDPYDCTMUXHPVSZHSXLMAOZAZNCRIVGDOZXQKKGTROEYM");

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
    msg.setTimeStamp(0.4907791068775049);
    msg.setSource(33548U);
    msg.setSourceEntity(22U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(236U);
    msg.name.assign("FCJAXIPZQEEJOESPTWFRDJWSHMTGZFKQUXPDTJBLKDHNWRSRDZASNDVDCLZIGTKYYUGWMHWBUFVUNIDCIGLVWKBV");

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
    msg.setTimeStamp(0.7542626586705666);
    msg.setSource(54774U);
    msg.setSourceEntity(58U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(92U);
    msg.name.assign("XBRFZNSJWJDYFFYVSXMTKRSMPWZPRXPYHIWLEOFFLNUBQCLDRHLFYWDMNKGHWMGIUVPCQAWOAKQLGBESLJBVVQBIKOOYUQBDCTTFGWEZMSGZZOBHCYNPNGSFJFBAGJCEQCHUIPWKGHREOSTSEZLXEKQIUKJLFRXPXTSZCDNMRPUII");
    msg.visibility.assign("XTKHHSAWOTPMRTSKXGKVMOHKNJLXHQDBKDCNJADDPJICLYXHZCTRHLHFFIJFGPTSYPVTJXKWNUUAUQJOVBRWOTB");
    msg.scope.assign("TQQTNFUBWZCPZ");

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
    msg.setTimeStamp(0.6436701456247194);
    msg.setSource(40906U);
    msg.setSourceEntity(230U);
    msg.setDestination(21127U);
    msg.setDestinationEntity(105U);
    msg.name.assign("OPZSTGFUNRSIYYUBXJAXKKGJYZAEXLOVHLVEVZIBKTVZTRAYAZXOUBAGIFACIDZTWXNTJUZDOHGZQNGWCIPXQHBJVEEPLNGEOJSBVOTIACYCUDFUP");
    msg.visibility.assign("OBNVZXBQDQBWRHHMMPRGFZXCJMIYUXFLRRIXQTPHQIYIDSTVBKXEGZKD");
    msg.scope.assign("HCMYNYVBXKJXSJOKVDVRGTMKWIGSBCOWUEUWAANMWXZFLSUVHPUAIZQBADFTSRAZTUKTWQMVAZ");

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
    msg.setTimeStamp(0.5956785787097725);
    msg.setSource(32796U);
    msg.setSourceEntity(233U);
    msg.setDestination(21034U);
    msg.setDestinationEntity(208U);
    msg.name.assign("KXAYBKGYRVDDPFABONCXFLAEHMVZFDWSRNWVYKOKIXEUMRTLATBUEMOVGNTRQPMVYCHMHTIPVBYCMUJKXCXDJRBWPKEQEUZEDVWFAWINQPJSLTQQQRJUCPJQDQZHZERWPOTFZHCIDMVNFEUNQLBTYNWVDXRNIDLWFGPOXLTGMYUYIKTXAAOEJUGWPFGGSFOBXJBDPILKGCOVBXSHGKLEZ");
    msg.visibility.assign("MIBJPIEQFIEGHJTGRHFKKNEBVNCYSJRDWOOVQPUFEOFOVGOWIHTXKFZMWHMANSBHKXNQMMSCXNRYPIYWVAAMDVAZLBCTAIDPZXXJAQMGEPSPZYSNQOCOYZULWSCGCQTLSTGLQTRCPLTPNZZLDLJYUFYQSW");
    msg.scope.assign("AUDLVFRWKCHQESMOVXYNCULPNYKCVXRIVHWOMTBPRYQKAIFBNRXWGJYGGCFATEHBFIKJHGCFQXDKUOJHRZPMRWPENTAUXADOIMNVMLTIJODHAMXGBGYWLESSBQGCFMUZBUUMFRNUXZTUNPLKDXDRBJAINEYCXXWHZKHQQQJQCLEEWOLPPBOZQKJYT");

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
    msg.setTimeStamp(0.4569739707228543);
    msg.setSource(37087U);
    msg.setSourceEntity(122U);
    msg.setDestination(15571U);
    msg.setDestinationEntity(168U);
    msg.name.assign("OWFWQWIAOOYZVMRUISJAZTSHYXFDBDEGUCVTDNEEGQCBYDHRBAONZJCGGVHYOJXREIZUQLQEMFGVCAWBGEPWAMWHLTUHKRGMSTZJTVXKITCIZHFKBPLNHCBUIYBTLCKJAKYLLPZV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VWMQRDMFQSJNOIQLFTSUJLFPTTKUCMVWXMVGLHMVVUNXDIZHYQACQLSNRITUINHSBHFLAJQRTZNZCOPYWVVX");
    tmp_msg_0.value.assign("VYIFVMTERVQDLCMTNTQUIF");
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
    msg.setTimeStamp(0.583870400832162);
    msg.setSource(13441U);
    msg.setSourceEntity(177U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(246U);
    msg.name.assign("CHOAEPIVIJSNVNQFEEZCPUPYIACSNHQKPGRWQFLVWBWDXIAFTTQNDKLZCYAFBATYVOMEWIJBLWSSPRFWORJJXADSVKZUTVJQOCKGUOANYDDISNKGHRUWATDKRGPLZENMZQIBONXUJECLGAZXFDAQGIFYRNOLUCPQZKFLCBQYJWJHURK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SUWMYHZDTQAINNUKOBOGUOHFFTWUFJBAYOMYVQUDJFWHPAEWJZMLBZYNKGDFRZKPSJYELEIMQM");
    tmp_msg_0.value.assign("JNOUHROVLETVYXQIOLPYMMHBWSYYZNLISELGMLFKTVMUDDHDBHHRPNDFWCSVKLAXWRGLYCXKRQFWCRHZVQIWOZSKTKAGYUJWJGDZUBNAQREJDRMZKITVYETZYWRPFCBSAISRMQZVOIDUWPAGIGENTFNCDWQOPKEFASIXAQEUVPZTJBJHQZPLAPRKBFTEMKSDXFTUOPUBXGFNDYFQNXBJJUJCKXCNIZVGOMHOAMCQBMNVEHOBCLXYISTG");
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
    msg.setTimeStamp(0.08982159628901543);
    msg.setSource(51496U);
    msg.setSourceEntity(224U);
    msg.setDestination(25778U);
    msg.setDestinationEntity(15U);
    msg.name.assign("SCKOGIVNMYEILSLTFREWNHSJHDMZOPDIKKOCGSZJRR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KCHMZWQZEMFZOHDPEDMSECTEMYKZRSLFSUL");
    tmp_msg_0.value.assign("SPDFUBZVCGFHZSZIDKMIRXGMYFWKBDIHA");
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
    msg.setTimeStamp(0.7175278944563341);
    msg.setSource(23156U);
    msg.setSourceEntity(17U);
    msg.setDestination(17600U);
    msg.setDestinationEntity(151U);
    msg.name.assign("AXRTSULCHRCZCZCGVLEKFSVJKFEQNHUUJFVMKGBAHBPSVWDYROTPUUDDKWVSXIKMBYVEEHWCSWFCUVPBTHNQKAWIOMLQZMLLQNFQTPYONGLXPQCXWKSVOTNPIHRSDMLQMJYUZEYNSMOGZRAGDBNEIZHYODRXXGOYXHJWVBORJQSXXHNJAARDGIAJIXDZMZFEJWEGDCUMYTLFKTBEBVMIWKPFBTSBGYRKWLPNUJHALYTIPIPEOIGCANARTUQQO");

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
    msg.setTimeStamp(0.47318766751076236);
    msg.setSource(5840U);
    msg.setSourceEntity(84U);
    msg.setDestination(14703U);
    msg.setDestinationEntity(97U);
    msg.name.assign("UIOMVUTFWOEFWBATPKYKIVUCIZMVIZOKECCXPOZZLFOCILNOSSZUKOQIPOEFMJCSDCPBVVJLIUZYNUFRTHDRUXFLBWJPXRBJRRETIHKLYQYLXZXVCIRQXKYWDPAMAWTABDE");

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
    msg.setTimeStamp(0.4484152670630116);
    msg.setSource(18849U);
    msg.setSourceEntity(20U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(134U);
    msg.name.assign("KANYEOHNXUKEBQLPFJTOKSAFJDTDDXXSOFAWGXFEHVKJKVFDALQMRACMMLDLILTUPWPRYBJHEWVIDKRICKSFBRSCVQYHVHZJKHWIQURGBYQCEQSIYQGQBTHIPGRMMNFPUXNGGYXZEBKDVDXGTUWPJOLCBMU");

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
    msg.setTimeStamp(0.33415494197986306);
    msg.setSource(26626U);
    msg.setSourceEntity(69U);
    msg.setDestination(27476U);
    msg.setDestinationEntity(240U);
    msg.timeout = 1103334341U;

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
    msg.setTimeStamp(0.3302704516581916);
    msg.setSource(47064U);
    msg.setSourceEntity(29U);
    msg.setDestination(37731U);
    msg.setDestinationEntity(101U);
    msg.timeout = 2019575282U;

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
    msg.setTimeStamp(0.20343880142062687);
    msg.setSource(607U);
    msg.setSourceEntity(50U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(171U);
    msg.timeout = 3058498896U;

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
    msg.setTimeStamp(0.13572356767073745);
    msg.setSource(13044U);
    msg.setSourceEntity(77U);
    msg.setDestination(53353U);
    msg.setDestinationEntity(49U);
    msg.sessid = 720939151U;

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
    msg.setTimeStamp(0.5850788464396649);
    msg.setSource(9664U);
    msg.setSourceEntity(211U);
    msg.setDestination(25040U);
    msg.setDestinationEntity(183U);
    msg.sessid = 1380335123U;

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
    msg.setTimeStamp(0.5392328508012669);
    msg.setSource(54511U);
    msg.setSourceEntity(115U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(113U);
    msg.sessid = 1512554770U;

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
    msg.setTimeStamp(0.9742049201303506);
    msg.setSource(65038U);
    msg.setSourceEntity(165U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(197U);
    msg.sessid = 2841150679U;
    msg.messages.assign("ULBRGRQSIITCWHEHSWSZZGKCOZUCEEVMZCRDFEVRBSHLUYROYJJGXTQPOKWBQWAQCAAOOXERBHXYUJFLZJP");

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
    msg.setTimeStamp(0.7730391827426005);
    msg.setSource(64855U);
    msg.setSourceEntity(232U);
    msg.setDestination(31270U);
    msg.setDestinationEntity(180U);
    msg.sessid = 1998696981U;
    msg.messages.assign("LYMVSMFLGUAKPEDBMPMGVFNQIQKZBXNXAQWRREGRZWMNUNJLLGWFCIDPOYNZETWYIWVYZCRUOROVWXAKBFUUVHRYKIIQEAILMHRCZSTENEOTRDJUJ");

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
    msg.setTimeStamp(0.7142687913175293);
    msg.setSource(12418U);
    msg.setSourceEntity(60U);
    msg.setDestination(47456U);
    msg.setDestinationEntity(19U);
    msg.sessid = 937885028U;
    msg.messages.assign("LBAOVBYKYAZXZOFGTVIZRNZWMGMUSDEAJMFGSSPEZTKTTREPEQXIKT");

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
    msg.setTimeStamp(0.5911119374972832);
    msg.setSource(27591U);
    msg.setSourceEntity(200U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1178776277U;

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
    msg.setTimeStamp(0.13649709760176565);
    msg.setSource(52324U);
    msg.setSourceEntity(231U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(160U);
    msg.sessid = 1970841553U;

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
    msg.setTimeStamp(0.8895176716887051);
    msg.setSource(62088U);
    msg.setSourceEntity(188U);
    msg.setDestination(29757U);
    msg.setDestinationEntity(244U);
    msg.sessid = 2208655839U;

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
    msg.setTimeStamp(0.9099375756047625);
    msg.setSource(60583U);
    msg.setSourceEntity(105U);
    msg.setDestination(41277U);
    msg.setDestinationEntity(78U);
    msg.sessid = 3277279933U;
    msg.status = 254U;

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
    msg.setTimeStamp(0.9452465094104351);
    msg.setSource(42644U);
    msg.setSourceEntity(183U);
    msg.setDestination(17567U);
    msg.setDestinationEntity(158U);
    msg.sessid = 822303835U;
    msg.status = 45U;

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
    msg.setTimeStamp(0.23733127139309174);
    msg.setSource(46535U);
    msg.setSourceEntity(38U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(97U);
    msg.sessid = 318601198U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.5093761973284029);
    msg.setSource(7283U);
    msg.setSourceEntity(82U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(111U);
    msg.name.assign("KEIBMFSBJLGVHDOCKERAAGNVWTEFONYMZFEMHXJODSTIWOWMPSJJEANRKOBLYZJDKGXZHSKMSRUKVWLTVHOUZIWSEUDYXCINVRBFLZBWPLBUYWCUPFTNVRQFRCTJCL");

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
    msg.setTimeStamp(0.054988183509972366);
    msg.setSource(24167U);
    msg.setSourceEntity(144U);
    msg.setDestination(52450U);
    msg.setDestinationEntity(8U);
    msg.name.assign("ATCXNMHYCMBQPJNJQVNOZGELMHCIHRVAFYRXYKVZSWBURJUBUGRFCSCGPIXYWPKVBQBPFZVXSPIGQPITBPHWHHVFKVODRNNLUWKDZEGSFVJKMJDLFPFTYEWQOAXJNBBMFDLSWOOILWTSOTQDKNDOGUUPDXJQYEOCNCVUJFXTQESZLYHEGZZCQEAMELSERLXPAZTFHNB");

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
    msg.setTimeStamp(0.4070947725591373);
    msg.setSource(16761U);
    msg.setSourceEntity(102U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(233U);
    msg.name.assign("WYABUTRAJWNEEPPXHEXQRQDDORRQGLCLFBKZGKZQLKKDMRHGWECXHBYMIHBHHDVJPAZEWGORWZDGMCILEZVUSNZDWCMNOPZWWAAXJJEQKMULLSNSYQBSZLADFBFWZFDONYCRTTCJCFHFRJTKXBCKTSISIRJGYIYKYOBUACTNPIOAUSYMYGUYSFHVPGIJXBI");

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
    msg.setTimeStamp(0.8112364285444679);
    msg.setSource(13142U);
    msg.setSourceEntity(68U);
    msg.setDestination(36121U);
    msg.setDestinationEntity(128U);
    msg.name.assign("QWRKPGYXJEEUPXOXBRADOTHMRJVLFUUHYBRCKBVDGFCHWSJXITAZSRTPPSFRRBZFNMUTTNHFIIBQBKAHYFGWDWENAREKOWSVSOUUJPUJONXDAYSEPPGAYHBLOQHIKNWHOZJKOUXMPVNZYPXLWAJMKIZTMNOXCCDFZIIYLLKVWDYOBVTRVL");

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
    msg.setTimeStamp(0.5402208963277522);
    msg.setSource(35564U);
    msg.setSourceEntity(7U);
    msg.setDestination(21300U);
    msg.setDestinationEntity(212U);
    msg.name.assign("UFCZXTLNPAIPNADBFVZGHJENOUIQEHRNAXQRUBIOCKNJWDWUAJDABZL");

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
    msg.setTimeStamp(0.9794619601332496);
    msg.setSource(30197U);
    msg.setSourceEntity(208U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(63U);
    msg.name.assign("LLYEELOJFVGZVQDXNNAOEKIXBKOAOSLKEMJQQCHVDOFGWVRTZVZTZSYDRSNJBITGJZOAKFBFEQVHOLMUINYVCQJMTRCLKIXNAPVTJGQPEKIWLVLQYAWTIJDF");

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
    msg.setTimeStamp(0.31487378207072625);
    msg.setSource(5684U);
    msg.setSourceEntity(5U);
    msg.setDestination(11874U);
    msg.setDestinationEntity(107U);
    msg.type = 83U;
    msg.error.assign("OXOCLLWMVANDUMEWAJJNPCRRZNDQANWAKJFFKQLCCHQYEQTQRAIDEYRTPZZTOEIQFDBFJTEMOKUMHWGYPDBQWJBHOMPBFDLHPYPMNFK");

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
    msg.setTimeStamp(0.3358577401029619);
    msg.setSource(53767U);
    msg.setSourceEntity(51U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(36U);
    msg.type = 13U;
    msg.error.assign("BYLWBMFMAXUMPZEAWLKBHLDCNHZCVAXYRXUTTFSNBICPSTMJGOKGWJQWTGIAUNSABOQQLYDIUJREFSKUOHZGOIEPYYLQPOFBPEYICDMVVGNKPGSCLGZIDGVRULBTKDCSP");

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
    msg.setTimeStamp(0.8441539361181182);
    msg.setSource(32380U);
    msg.setSourceEntity(56U);
    msg.setDestination(52179U);
    msg.setDestinationEntity(25U);
    msg.type = 199U;
    msg.error.assign("UMUBRJGZJVNMPSIMKVELIPPMEESGDNHKWVJFAVZZTYYFCCAHQIEMATQRXWFAFKTQOFOJOSWYZSABDJVVUOSGRKNXTLCFAICLXKQLBBGWNDKXBNUPPZYRKENMIRJLRCOZDYPCGHVSOMQBSIRJGSZTDUTNDCNBYPBLYPPWBGYKUMGYUUECICHODLVHJXEXUTIMCVRDTWUQFEK");

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
    msg.setTimeStamp(0.5782856412509139);
    msg.setSource(38394U);
    msg.setSourceEntity(142U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(49U);
    msg.seq = 40090U;
    msg.sys_dst.assign("BNGOGNFWHEPWNKAWKIOYHZOWDFY");
    msg.flags = 248U;
    const char tmp_msg_0[] = {-123, -25, 95, 83, -25, 83, 74, 3, -117, -2, 2, 50, 94, 59, -87, 73, 52, 91, 14, 11, -107, -18, 115, 45, 52, -115, -59, -24, -10, -15, -27, -101, 13, -27, -114, -97, 84, 10, 82, -82, 106, -37, -9, 43, 74, 15, -86, 104, -21, -45, -125, 58, -32, -54, -43, -107, 17, -67, 104, -55, 85, -80, 102, 120, 24, -15, -16, -65, 48, 36, 117, -60, 78, 5, -75, 101, -55, -107, -19, 12, -100, -34, -32, -51, -35, 125, 123, 8, 83, 26, -15, 81, 79, 1, 94, -14, 55, 51, -109, 99, 65, 26, -23, -105, 100, -99, 104, -65, -8, 37, -105, 48};
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
    msg.setTimeStamp(0.8864767022058109);
    msg.setSource(30137U);
    msg.setSourceEntity(100U);
    msg.setDestination(59182U);
    msg.setDestinationEntity(134U);
    msg.seq = 28053U;
    msg.sys_dst.assign("MEHZSGBNAFEPEFAHRFKDBBRMVBZPUIPOHXOHUGIJASQRPBOPWGCYIAWIAYWKKRVNQVMZFKHJLTTEDBRSPGDIRUWVBOIOQDMCGYRRJTBXXUJZCTKNNLNFDUCJCNUPRYQSXFWW");
    msg.flags = 6U;
    const char tmp_msg_0[] = {79, -93, -128, 8, -108, 56, -98, 22, -102, -103, -87, -81, 25, -107, 74, -84, 66, 88, -63, 123, -73, 76, -34, 34, -110, -29, -66, 84, -86, -70, -93, -32, -20, -110, 74, 117, -118, -95, -39, -42, -117, 59, 125, -92, -11, 57, -90, -39, 123, -122, 6, -73, 35, -53, -111, -97, -94, 116, 104, 122, -39, -32, -108, 20, 38, -121, -57, 29, 122, -42, -57, 1, -16, -81, 20, 4, -65, -59, 114, -83, -58, -96, -77, 115, -39, 5, -100, -91, -81, -116, -107, 100, 111, 39, 0, -107, -51, -120, 117, -81, -78, -77, 81, -90, -61, -98, 57, -114, 120, 103, 58, -42, 12, -66, -128, -118, -4, 53, 104, -9, -6, -92, -106, -120, 81, 93, 112, 50, 79, 5, 69, 106, -118, -76, 87, 82, -103, 37, -91, -102, -124, -111, -52, -76, 98, -115, -110, -71, 56, 6, 22, -4, 114, -55, 119, -63, -24, 29, 109, 21, -121, 14, 34, 32, -126, 59, -15, 76, 32, 75, 106, -18, 95, 94, 45, 23, -99, 77, -78, -56, 31, -62, 85, 104, -48, 54, -57, 120, -45, 10, -29, -28};
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
    msg.setTimeStamp(0.14030224247467737);
    msg.setSource(36255U);
    msg.setSourceEntity(138U);
    msg.setDestination(5186U);
    msg.setDestinationEntity(192U);
    msg.seq = 20698U;
    msg.sys_dst.assign("HGHRLNDBXZQVEDOXTWYPFMEDJSNQWLMANVIUOIZAHMBHSNZTEDFWPJOEGQOHYWKATYWWXJKTRDGRBDWTNOQWEPSLXCTAG");
    msg.flags = 63U;
    const char tmp_msg_0[] = {12, 69, 108, -90, -127, 0, 111, 13, -75, 43, 89, 95, -102, 45, 69, 56, -68, -112, 126, 75, -101};
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
    msg.setTimeStamp(0.3548115242837131);
    msg.setSource(2472U);
    msg.setSourceEntity(198U);
    msg.setDestination(32634U);
    msg.setDestinationEntity(245U);
    msg.sys_src.assign("OCPCLAFRMBALHYLSVCLHZCYUTEDVNGMEEOQFUVDBKXOPFNWVTNHSCYUVFIBGUQBKMBDR");
    msg.sys_dst.assign("LQQFYFHWIPTSZULZXJSMIPRAJYEGRAFDHEOVCYWXDBBDTVYQJTAVMNIMT");
    msg.flags = 186U;
    const char tmp_msg_0[] = {26, 123, 67, -42, 77, -46, -78, 22, -31, -83, 112, -112, -96, 89, -38, 75, -19, 27, 112, 73, 99, -107, -82, 14, -11, -43, 49, -54, -39, 55, 65, 97, 24, 95, -33, 29, 79, 17, 100, -73, 30, -53, -3, 42, -29, -55, -3, 89, 47, -121, -79, 16, 68, -110, 16, 79, 13, -34, -39, -11, 86, -63, 99, -102, -32, -123, 95, -20, -63, -57, 39, 45};
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
    msg.setTimeStamp(0.7762212144748137);
    msg.setSource(2743U);
    msg.setSourceEntity(79U);
    msg.setDestination(61370U);
    msg.setDestinationEntity(145U);
    msg.sys_src.assign("HPXWSEHILGKFCXOEYFJYVCMUPEDLWGAKKXDXSPIEIDOYGQBJJDUORYNIEOJUIGFMDQWZUSVHYTSIKZZBZHTSXTNEEWTMUKAXKDBOTHERCOFUFRPPQACNRZRQLJGLFBOADNSQKYNCUCOVXSZDQMJWKPGXFZVQYLWJLAMWPHVAOUMHQBVBUQZYTMYDTPAVBAWNBGSCNFBYJPV");
    msg.sys_dst.assign("GJGLEBINEUQDQFTELVNRXIZNSABQSWRZDNFGLLBILRQHBSPWXPIBPBAJPVZJTTCFDOLYGFZXFEAWJACSKMNISKYIDQUZECHCKTMIUUOFLJKESMIQTBBHHWOWYVWDYPUBRLMKZHFTGXJDFAZOGZUITXCMSRWKRKAYODGXJJRJOCSQPUDDVROMXMQNHFVOPOIYRTBGVWYOZVSHUWXRNLVMLZVNXYSXFADGHKNKQECJYMPEVMAUCUCQAK");
    msg.flags = 85U;
    const char tmp_msg_0[] = {-30, -16, 123, -52, 80, 87, 118, 35, 17, 85, 56, 95, 109, -81, -74, 11, -32, 17, 42, 101, -122, -32, 56, 86, -89, 64, -103, -116, -55, 52, -85, -13, 36, -22, 66, -43, 39, -102, 73, 54, -16, 50, -90, -67, -69, -45, 64, -3, -83, -97, -25, 94, 39, 92, 95, -69, 89, 23, 27, 62, -85, -121, -93, 43, 77, -19, -2, -53, -97, -126, -128, 60, 124, -122, 104, -84, 95, 93, 30, -60, -15, 84, -77, -65, 40, -117, 39, 9, 42, -31, -61, -11, -90, 93, -105, -111, -37, -87, 19, 111, -109, -101, -69, -52, 55, 50, -66, -105, 117, 60, -114, 3, 87, 45, -36, -38, 59, -117, -36, -37, 85, -5, -95, 53, 115, 40, -61};
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
    msg.setTimeStamp(0.3576925233643724);
    msg.setSource(45831U);
    msg.setSourceEntity(8U);
    msg.setDestination(15506U);
    msg.setDestinationEntity(149U);
    msg.sys_src.assign("NAWLTVSUNGVFPEQUKGLBEOCBWRCNDKREGPZYMYWCFDKJBZJQFUHJUHSZIHOIAGPTSOWPUWYARZSTNKSEDJ");
    msg.sys_dst.assign("AWOHCNBCDBTKPEFQFMMMRQTIKXKXXNNNSHCDKZYLGGBEUIGJCUAJQVTUILHGSUWZSYVRWXPZRMEPBZKPIMRXRANAZJGLAPEXAOSOQHCMQF");
    msg.flags = 31U;
    const char tmp_msg_0[] = {-15, -58, -1, -120, -119, 70, 55, -81, 76, 125, -114, -76, -69, 62, -99, 126, -105, -22, -36, -3, -52, 26, -49, 10, -69, -58, 17, 23, -28, 43, 86, -64, 25, 81, 25, 120, 58, -17, -25, -30, -16, -14, 38, -17, -12, -10, 114, -72, -70, 113, 33, -49, 37, 69, 66, -10, -17, -10, 50, 7, -110, -19, -76, 53, -53, -97, -6, 105, -76, 53, -123, -9, -88, -113, 57, 42, 82, 60, 43, -8, 67, 100, 16, -82, 52, -121, 6, -44, -98, -15, 103, -24, -42, 35, -17, -57, -124, -12, -33, -58, -64, -56, 55, 51, -75, 9, 34, 109, -36, -10, 16, -102, 51, 115, 89, 16, 47, 15, -57, 27, 48, 52, 26, 62, 71, 10, 116, -104, -119, 126, 4, 59, 27, -109, -44, 63, 44, 63, 10, -115, -89, -60, -109, -33, 26, 48, -34, -54, -110, -32, 6, 109, 111, -94, 118, -39, -43, -4, 108, 21, -120, 50, -104, 93, -80, -16, -75, -63, 67, 36, 53, 71, -33, 126, 93, -80, 6, 20, -99, -27, -99, 80, -68, 104, 104, -9, 39, 113, -2, -51, -88, -110, 119, -37, 112, 115, -44, 26, 60, 19, 13, -126, -27, 13, -113, -44, 72, -110, -20, 105, -60, 125, -71, -74, 11, 5, 107, 37, -77};
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
    msg.setTimeStamp(0.8629456864176002);
    msg.setSource(61622U);
    msg.setSourceEntity(199U);
    msg.setDestination(19478U);
    msg.setDestinationEntity(232U);
    msg.seq = 49318U;
    msg.value = 68U;
    msg.error.assign("ATKWKLHMAGISEHUPXBRWBYLKKOPNAOCJWHDREGCKUMJQEBVQEWGVFTBH");

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
    msg.setTimeStamp(0.7075049107477412);
    msg.setSource(61485U);
    msg.setSourceEntity(251U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(154U);
    msg.seq = 25064U;
    msg.value = 204U;
    msg.error.assign("WJAUHAXTLYVECEPZCYSHSKVTGIZFEVNNQEGREGGYCUVIBLFFLJWENEQYXIEORNFYXBPGXPBPVBEWKLTCIMWBKDXHYLH");

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
    msg.setTimeStamp(0.6181517753451546);
    msg.setSource(56337U);
    msg.setSourceEntity(135U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(189U);
    msg.seq = 168U;
    msg.value = 110U;
    msg.error.assign("KCSZWPLSQUXESIJZMHDFXEAVSICMJMDOKKEUCQOOPDEKLTFYHILUQLHSUURLBO");

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
    msg.setTimeStamp(0.7521203068550109);
    msg.setSource(13328U);
    msg.setSourceEntity(163U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(29U);
    msg.seq = 41713U;
    msg.sys.assign("UYVXHSWHWKDGLSDWMSIGQFNACALJONXLTPWNEEUUVQPNAIFBQUDOJVUGTEBBQQCZKRNHYURIKWHXZPMMJRGKTMOFYRVDUAXZSDUQOBAHGUSC");
    msg.value = 0.7121610444484889;

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
    msg.setTimeStamp(0.22899753407660517);
    msg.setSource(28550U);
    msg.setSourceEntity(249U);
    msg.setDestination(59530U);
    msg.setDestinationEntity(166U);
    msg.seq = 60361U;
    msg.sys.assign("RSAUZCKEHOANSORJCHYFPNWJODYULKSXLVOKQOQFNBEJCLKYCIXJIYLPIOHBFCUPWDZPDLRHMSPBEANTJBAMJFZKINGDOMRZGVKUUMYSEMXYMORPETSBBRAXQIYBOSRWYUTTHFJVTTKWDHUZFVGPDRCKQTMXQNAVYHEWGGWGUINJSNFPVCQNIQVXIFFKRTKMDXHCPDAXQAWRZ");
    msg.value = 0.6228910531470253;

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
    msg.setTimeStamp(0.4094550691177882);
    msg.setSource(5547U);
    msg.setSourceEntity(74U);
    msg.setDestination(33329U);
    msg.setDestinationEntity(112U);
    msg.seq = 65018U;
    msg.sys.assign("ILXSHVXKTEWDTVKUMRSHPTOWHOFLLWIPHQVURTEYZCQEAQDKYIOPXIAGHFUKGNVVCUPPYEHKCHNKIYALRMBCRTMZISNOEJQSRVIQJLPFNPVPEDDGWMAXLZMVAGCDDJUBGDEJOXFRBIDUCYNGPSZEWURBTTQMBKQEZQUSLMJHGYDKAMBFJOMPZCNXAGKFDVYCWLZNIJZACFSUUWSROWGYSXSAJOQYBZNNOXIFTKRHFE");
    msg.value = 0.5321023891981478;

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
    msg.setTimeStamp(0.9591773258088463);
    msg.setSource(1148U);
    msg.setSourceEntity(53U);
    msg.setDestination(22421U);
    msg.setDestinationEntity(238U);
    msg.action = 45U;
    msg.longain = 0.3975940135829522;
    msg.latgain = 0.2533094346319529;
    msg.bondthick = 2546261916U;
    msg.leadgain = 0.6396484991383357;
    msg.deconflgain = 0.11225178580554962;

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
    msg.setTimeStamp(0.6924363095823006);
    msg.setSource(61269U);
    msg.setSourceEntity(208U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(177U);
    msg.action = 91U;
    msg.longain = 0.17524246145906253;
    msg.latgain = 0.4431906325453657;
    msg.bondthick = 1942848597U;
    msg.leadgain = 0.08581471383096229;
    msg.deconflgain = 0.6701349580640498;

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
    msg.setTimeStamp(0.376623545030198);
    msg.setSource(4887U);
    msg.setSourceEntity(145U);
    msg.setDestination(7770U);
    msg.setDestinationEntity(26U);
    msg.action = 232U;
    msg.longain = 0.44494528876282735;
    msg.latgain = 0.4702281336151847;
    msg.bondthick = 1689636396U;
    msg.leadgain = 0.7168343061362367;
    msg.deconflgain = 0.9853471708268787;

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
    msg.setTimeStamp(0.8442563970113002);
    msg.setSource(18732U);
    msg.setSourceEntity(37U);
    msg.setDestination(57327U);
    msg.setDestinationEntity(186U);
    msg.err_mean = 0.8017216288427647;
    msg.dist_min_abs = 0.2119238925242488;
    msg.dist_min_mean = 0.9149279384229834;

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
    msg.setTimeStamp(0.968779547558075);
    msg.setSource(303U);
    msg.setSourceEntity(135U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.4671621360607391;
    msg.dist_min_abs = 0.5632382364684863;
    msg.dist_min_mean = 0.2771552385010754;

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
    msg.setTimeStamp(0.3552527723704396);
    msg.setSource(2353U);
    msg.setSourceEntity(91U);
    msg.setDestination(58386U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.9232828051237165;
    msg.dist_min_abs = 0.9397659807241624;
    msg.dist_min_mean = 0.03912514972779735;

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
    msg.setTimeStamp(0.6881451090844487);
    msg.setSource(23700U);
    msg.setSourceEntity(250U);
    msg.setDestination(22510U);
    msg.setDestinationEntity(190U);
    msg.action = 233U;
    msg.lon_gain = 0.9148162982889995;
    msg.lat_gain = 0.6070207008608791;
    msg.bond_thick = 0.6571082464664366;
    msg.lead_gain = 0.32722737744033037;
    msg.deconfl_gain = 0.8435841357264057;
    msg.accel_switch_gain = 0.6805757477280611;
    msg.safe_dist = 0.09209741711940134;
    msg.deconflict_offset = 0.7989531935908208;
    msg.accel_safe_margin = 0.3189210196310105;
    msg.accel_lim_x = 0.6209095009723508;

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
    msg.setTimeStamp(0.8373291010289401);
    msg.setSource(53604U);
    msg.setSourceEntity(224U);
    msg.setDestination(40208U);
    msg.setDestinationEntity(100U);
    msg.action = 153U;
    msg.lon_gain = 0.29438664396720116;
    msg.lat_gain = 0.8840529013708593;
    msg.bond_thick = 0.06741208140681487;
    msg.lead_gain = 0.529316415595211;
    msg.deconfl_gain = 0.8017210983131231;
    msg.accel_switch_gain = 0.8538325823781525;
    msg.safe_dist = 0.22743375936548382;
    msg.deconflict_offset = 0.519479818629166;
    msg.accel_safe_margin = 0.7690990015947151;
    msg.accel_lim_x = 0.0947118939622904;

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
    msg.setTimeStamp(0.5174001877982963);
    msg.setSource(6119U);
    msg.setSourceEntity(22U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(172U);
    msg.action = 86U;
    msg.lon_gain = 0.1822900787786309;
    msg.lat_gain = 0.854654194215572;
    msg.bond_thick = 0.2860928907629068;
    msg.lead_gain = 0.13997779467604532;
    msg.deconfl_gain = 0.3394033978360623;
    msg.accel_switch_gain = 0.22039408039721287;
    msg.safe_dist = 0.6126730406739735;
    msg.deconflict_offset = 0.7159815893923204;
    msg.accel_safe_margin = 0.6146453713796906;
    msg.accel_lim_x = 0.5601114850323016;

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
    msg.setTimeStamp(0.03464493503740251);
    msg.setSource(31350U);
    msg.setSourceEntity(117U);
    msg.setDestination(63657U);
    msg.setDestinationEntity(41U);
    msg.type = 107U;
    msg.op = 190U;
    msg.err_mean = 0.846338455115656;
    msg.dist_min_abs = 0.7878642010163863;
    msg.dist_min_mean = 0.9063537790308737;
    msg.roll_rate_mean = 0.9828039217827079;
    msg.time = 0.378986101496526;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 188U;
    tmp_msg_0.lon_gain = 0.38126756580084475;
    tmp_msg_0.lat_gain = 0.09882693694201905;
    tmp_msg_0.bond_thick = 0.4679564402607461;
    tmp_msg_0.lead_gain = 0.5354782076086294;
    tmp_msg_0.deconfl_gain = 0.7639261361825387;
    tmp_msg_0.accel_switch_gain = 0.1515509771615322;
    tmp_msg_0.safe_dist = 0.30310372240287775;
    tmp_msg_0.deconflict_offset = 0.37758911612763535;
    tmp_msg_0.accel_safe_margin = 0.945537420975211;
    tmp_msg_0.accel_lim_x = 0.7609429170211433;
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
    msg.setTimeStamp(0.40442359043531384);
    msg.setSource(58347U);
    msg.setSourceEntity(28U);
    msg.setDestination(21359U);
    msg.setDestinationEntity(40U);
    msg.type = 70U;
    msg.op = 68U;
    msg.err_mean = 0.4408768186376316;
    msg.dist_min_abs = 0.29233872828924745;
    msg.dist_min_mean = 0.9651344084492721;
    msg.roll_rate_mean = 0.057168258496425484;
    msg.time = 0.7260597370328478;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 144U;
    tmp_msg_0.lon_gain = 0.722947213188959;
    tmp_msg_0.lat_gain = 0.7984366512381885;
    tmp_msg_0.bond_thick = 0.9986699417773661;
    tmp_msg_0.lead_gain = 0.4607788634616431;
    tmp_msg_0.deconfl_gain = 0.7596432436703284;
    tmp_msg_0.accel_switch_gain = 0.09116094603754354;
    tmp_msg_0.safe_dist = 0.5994302296703489;
    tmp_msg_0.deconflict_offset = 0.40321180446290794;
    tmp_msg_0.accel_safe_margin = 0.46154058136525433;
    tmp_msg_0.accel_lim_x = 0.7471573385761651;
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
    msg.setTimeStamp(0.48022292354366336);
    msg.setSource(22595U);
    msg.setSourceEntity(237U);
    msg.setDestination(41192U);
    msg.setDestinationEntity(98U);
    msg.type = 108U;
    msg.op = 71U;
    msg.err_mean = 0.2230450642232933;
    msg.dist_min_abs = 0.31158627769019664;
    msg.dist_min_mean = 0.6764117505930516;
    msg.roll_rate_mean = 0.35016041473701875;
    msg.time = 0.8289771478507647;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 94U;
    tmp_msg_0.lon_gain = 0.713017341991199;
    tmp_msg_0.lat_gain = 0.8432216509800294;
    tmp_msg_0.bond_thick = 0.2801665021302506;
    tmp_msg_0.lead_gain = 0.2728386454114342;
    tmp_msg_0.deconfl_gain = 0.19958445505414868;
    tmp_msg_0.accel_switch_gain = 0.5179682526267746;
    tmp_msg_0.safe_dist = 0.38699984223673733;
    tmp_msg_0.deconflict_offset = 0.20194154310562984;
    tmp_msg_0.accel_safe_margin = 0.43136997870544413;
    tmp_msg_0.accel_lim_x = 0.04990138730000049;
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
    msg.setTimeStamp(0.09506448756905483);
    msg.setSource(4805U);
    msg.setSourceEntity(176U);
    msg.setDestination(45665U);
    msg.setDestinationEntity(66U);
    msg.uid = 127U;
    msg.frag_number = 161U;
    msg.num_frags = 232U;
    const char tmp_msg_0[] = {112, -50, 93, -44, 12, -125, 126, 113, 46, 15, 108, 57, 116, -7, 104, 59, 120, 81, -115, 63, 16, -115, 45, 40, -1, 48, 60, -63, 76, -106, 14, -104, -85, -121, 77, -114, -128, 3, 114, -13, 104, 92, 101, -28, 20, 28, 86, -98, 28, -128, 30, 9, 106, 76, -50, 124, 3, -15, -19, -121, -106, -26, -27, -61, -74, -42, -47, -11, 9, -56, 69, 31, -64, 15, -33, -76, 66, -112, 68, 87, 87, -38, -105, -109, 31, -43, 125, -99, 51, -59, -15, 62, -77, -124, -24, -47, -116, -48, 25, 81, -81, 47, -9, -3, -116, -56, 74, 24, 38, -78, -53, -94, 120, -3, -16, 15, 109, -81, 98, 0, 33, -12, -105, -97, 28, 94, 94, -80, 14, -19, -114, 99, 25, -36, -114, -39, -19, 45, 99, -91, 108, -26, 34, -40, 69, -42, 106, 83, 120, -57, -51, -79, 5, 52, 120, -31, 61, 55, -112, 66, -125, 107, -90, -76, 13, 31, 112, 3, -127, 92, -54};
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
    msg.setTimeStamp(0.590918759142079);
    msg.setSource(63540U);
    msg.setSourceEntity(4U);
    msg.setDestination(34287U);
    msg.setDestinationEntity(236U);
    msg.uid = 237U;
    msg.frag_number = 136U;
    msg.num_frags = 192U;
    const char tmp_msg_0[] = {-43, 48, 49, -120, -17, -23, 26, 13, 5, -2, 61, 77, 2, -37, -84, -115, 55, -61, -89, 6, 109, -97, -124, 106, 118, -34, 80, -85, -48, -80, -84, -88, 49, -120, -61, 22, -104, -116, -103, 7, -108, -100, 93, -11, 37, 53, -46, 19, 56, -56, 49, 36, -117, -64, -79, 119, 66, 116, -98, 113, 75, 76, 21, -114, 47, -34, 4, 23, 20, -79, -39, -84, 105, -33, -68, -106, 82, 12, 83, 55, -30, 58, -97, 43, -80, 45, 48, 23, -68, 79, -77, -43, -79, -106, -119, -53, -62, -9, -15, 68, 91, -104, 40, -81, 94, 83, 107, 14, 2, 45, -92, 5, 21, -102, 91, 77, 46, -109, -110, -49, -32, -13, 30, -29, 99, 28, -106, 25, 90, 57, -98, -70, -11, -32, 2, -61, -15, 57, 65, -54, 60, 67, 92, -40, 54, -95, 27, 85, -88, 70, -10, 77, -89, 37};
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
    msg.setTimeStamp(0.2706963756594616);
    msg.setSource(45915U);
    msg.setSourceEntity(228U);
    msg.setDestination(9199U);
    msg.setDestinationEntity(152U);
    msg.uid = 104U;
    msg.frag_number = 10U;
    msg.num_frags = 6U;
    const char tmp_msg_0[] = {88, 95, -80, 60, 123, 36, -89, -97, 30, -88, 22, -118, -81, 92, 20, -86, -27, -116, 5, -13, -72, 27, -85, -124, 8, -111, -112, -33, 67, 61, -32, 90, -81, -100, -15, 71, -39, -57, -109, 94, -50, -83, -54, -103, -85, 118, 70, 121, 13, 28, 42, 26, 66, -126, -45, 35, -95, -82, -39, -17, 40, -33, 101, 123, -21, -58, 123, -117, -69, 11, 73, -105, 103, 112, -95, -50, 0, -7, 112, -17, 80, -15, 123, -116, -2, 90, 44, -79, 34, -1, -49, -126, -93, 92, 78, -43, 118, 21, -14, -110, -72, 82, 20, 49, 88, 58, 86, 119, 72, -23, 84, 3, 79, -112, -20, 12, -110, -83, 50, 20, 8, -110, -73, -93, -52, -117, 82, 113};
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
    msg.setTimeStamp(0.7229434199322181);
    msg.setSource(34843U);
    msg.setSourceEntity(63U);
    msg.setDestination(19918U);
    msg.setDestinationEntity(115U);
    msg.content_type.assign("LPRIIDBFMBGTBQOZUTCJGWTNEHEDEKFYAHLSMCDCQPRNGVXVKKWFWTHKBQIFEZVYVCSRXFNYHOZVKNYDYBAXHXQEORHFPSIROBSOBVWKRAZVWLNQKWOZP");
    const char tmp_msg_0[] = {-27, -23, 88, 115, -51, -62, 72, 71, 34, -43, -92, -2, -115, -69, -93, 106, 57, -125, -58, -23, 24, -57, 33, -9, 52, 125, 47, -85, 23, -62, -49, -80, 62, 11, -108, -41, 118, -63, 54, -4, -20, 33, 22, 34, -10, -66, 35, 116, 59, 33, 38, 65, 51, 68, 85, 102, 7, -107, -104, -44, -3, -42, -38, -1, -13, 39, 58, 39, 62, -91, -59, 78, -120, -97, 66, -64, -35, -25, -55, 50, 19, -107, -128, -18, -94, 63, 36, -87, -97, 111, -10, -96, -40, -10, -54, -34, 11, -108, -99, 27, -44, -21, -17, -125, -101, -39, 85, -126, -124, 41, 30, -19, 29, -99, 30, -22, 46, -115, 45, 33, 15, -94, -26, -4, 20, -24, -34, -54, -7, -128, 70, 86, -27, -52, 40, 111, -92, -4, -71, 71, 107, -3, -51, 24, -54, -73, -114, -30, -117, -71, 21, 7, 73, 39, 47, 43, 92, -70, 23, -62, -127, 32, -64, -10, 7, 82, -12, 20, -43, -41, -108, 110, -54, -28, -96, 93, -86, -85, 123, 9, 38, -122, 69, 92, 78, -80, -69, 89, -61, 7, 69, -73, -115, 52, -48, -19, -2, 93, 23, 55, -124, 50, 114, -104, 63, 17, 109, -15, 51, 109, -85, -94, -72, -55, 69, 4, 94, 56, 62, -2, -95, -60, 124, 87, 125, -64, -50, 64, 60, -19, 19, 85, -120, 17, -56, 38, -75, -31, 117, -4, -72, 42, 90, 54, -5, -124, -81, 8, 111, -44, -107, -79, -94, -116};
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
    msg.setTimeStamp(0.4514249382539326);
    msg.setSource(6919U);
    msg.setSourceEntity(142U);
    msg.setDestination(43171U);
    msg.setDestinationEntity(66U);
    msg.content_type.assign("TFSNFQAKVQFMHRATCGFNCSBGWRZJGQHJEWNBQFVSMDWJVKHURQLLHOBAJHZVAPENAIPLFKAUROTTOGCEGHJRYZ");
    const char tmp_msg_0[] = {-22, -31, -66, -123, 105, -18, -52, -127, 32, 63, 1, -116, -28, -9, 45, 6, 81, -40, -23, 27, -111, -100, 123, 62, 31, 16, 104, -108, 50, 94, -49, 57, -124, 81, -123, 42, 24, -94, -8, -85, 87, 84, -75, 22, 12, -8, -102, -1, -21, 73, 108, 97, 117, 33, 115, -19, -6, 72, -39, 43, -77, -9, -48, 3, 53, -48, -6, -106, 91, -21, -51, -41, 75, -43, -122, -105, 43, 103, 29, 84, 117, 115, 27, 64, 112, -39, 28, -38, 50, -106, -45, -6, -116, 96, -81, 29, 29, -80, 108, -78, 2, -122, 106, -61, 99, -51, 36, 75, -128, 68, -30, 21, -72, -44, -52, 100, 79, 109, -75, -101, 80, -78, 15, -26, 91};
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
    msg.setTimeStamp(0.7222280215035941);
    msg.setSource(56138U);
    msg.setSourceEntity(148U);
    msg.setDestination(15888U);
    msg.setDestinationEntity(5U);
    msg.content_type.assign("CIOUMUTSRBIGXZBEIMVQNUPBZKWEIQLQJVGXUPABLYRUFWAFZT");
    const char tmp_msg_0[] = {-56, 103, 97, -74, 86, 35, -120, 16, -61, 22, 70, -33, 19, 44, 91, 50, -58, -73, 103, 102, 85, 54, -36, -75, -75, -101, -9, 74, -96, 58, -113, -127, -114, 115, -69, -36, -71, -90, 77, 124, 100, 63, -19, 36, -48, 119, 0, 11, 31, -35, -29, -122, -99, 119, -113, -40, 36, 99, -36, -15, 83, 38, -35, 125, -30, -107, 12, 9, 32, -117, 54, 92, -89, 75, 113, -25, -5, -88, 124, -80, -111, -21, -21, 109, 14, 103, -127, -101, 117, 98, 28, 122, -122, 84, -80, 47, -66, 15, 63, 108, 75, -104, 29};
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
    msg.setTimeStamp(0.601547251586828);
    msg.setSource(21678U);
    msg.setSourceEntity(205U);
    msg.setDestination(25600U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.0750760406848775);
    msg.setSource(32566U);
    msg.setSourceEntity(122U);
    msg.setDestination(26647U);
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
    msg.setTimeStamp(0.9847925394478946);
    msg.setSource(24972U);
    msg.setSourceEntity(235U);
    msg.setDestination(39652U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.8359396944242591);
    msg.setSource(45622U);
    msg.setSourceEntity(133U);
    msg.setDestination(65435U);
    msg.setDestinationEntity(25U);
    msg.target = 40296U;
    msg.bearing = 0.8996229150270659;
    msg.elevation = 0.21618053988677566;

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
    msg.setTimeStamp(0.19845343202428878);
    msg.setSource(55551U);
    msg.setSourceEntity(215U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(254U);
    msg.target = 5789U;
    msg.bearing = 0.36939141309520607;
    msg.elevation = 0.0017545043774216396;

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
    msg.setTimeStamp(0.5663735719341934);
    msg.setSource(45819U);
    msg.setSourceEntity(46U);
    msg.setDestination(46600U);
    msg.setDestinationEntity(207U);
    msg.target = 14528U;
    msg.bearing = 0.5475800758768945;
    msg.elevation = 0.762856675061384;

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
    msg.setTimeStamp(0.8726795943329386);
    msg.setSource(42304U);
    msg.setSourceEntity(155U);
    msg.setDestination(47291U);
    msg.setDestinationEntity(55U);
    msg.target = 13603U;
    msg.x = 0.39602766370333664;
    msg.y = 0.5031772035790841;
    msg.z = 0.7166377096693209;

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
    msg.setTimeStamp(0.35444648416366276);
    msg.setSource(8554U);
    msg.setSourceEntity(228U);
    msg.setDestination(1391U);
    msg.setDestinationEntity(77U);
    msg.target = 9840U;
    msg.x = 0.7701137584556548;
    msg.y = 0.7817293180083257;
    msg.z = 0.620861400205191;

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
    msg.setTimeStamp(0.5329799161720453);
    msg.setSource(26900U);
    msg.setSourceEntity(28U);
    msg.setDestination(50987U);
    msg.setDestinationEntity(215U);
    msg.target = 30819U;
    msg.x = 0.006154377004431444;
    msg.y = 0.9653758654758748;
    msg.z = 0.553407475140815;

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
    msg.setTimeStamp(0.6926768337811134);
    msg.setSource(3432U);
    msg.setSourceEntity(18U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(147U);
    msg.target = 3191U;
    msg.lat = 0.21345668842375165;
    msg.lon = 0.8375061620600539;
    msg.z_units = 43U;
    msg.z = 0.1672732170871407;

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
    msg.setTimeStamp(0.7229568056542602);
    msg.setSource(44768U);
    msg.setSourceEntity(169U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(233U);
    msg.target = 63359U;
    msg.lat = 0.9578781894539761;
    msg.lon = 0.3088124556243016;
    msg.z_units = 69U;
    msg.z = 0.21168649480217938;

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
    msg.setTimeStamp(0.46205505699463745);
    msg.setSource(54937U);
    msg.setSourceEntity(207U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(188U);
    msg.target = 11913U;
    msg.lat = 0.9063564064375491;
    msg.lon = 0.33221221742810136;
    msg.z_units = 227U;
    msg.z = 0.2973445726750866;

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
    msg.setTimeStamp(0.959205329734076);
    msg.setSource(26354U);
    msg.setSourceEntity(171U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(61U);
    msg.locale.assign("CXXOMTVSNPMNRLIYQDNHYOLEGDXNVAFUSGQHDNKCEKBKTTXPWCENFJCYIZIWGMDMLRTUAAANQRFEDHQFDSOVLSOHJGTGVFHAMXMPCNNNWTBBAUQXURYSTSUFKLCMGWHMVHELRPJUWWBLSLEHPZBZKYZGOXQAYLSTHREDHIZOZJDQBSPWFEJRVOUCEPIZYRDGKUAVBCFYUIOKCTMVXJKYRVAIPGJJFSM");
    const char tmp_msg_0[] = {-23, -32, -120, 48, -5, 56, -21, -13, -77, -83, 122, -84, 100, -119, 85, 41, -93, 5, -13, -79, 71, -86, 76, -31, 17, -70, -12, 0, 40, 56, -28, 94, -10, 46, 115, 24, 64, -99, 52, -115, 23, -39, -28, -85, 46, -33, 32, -91, -44, 109, 36, 18, -31, -117, -94, -11, 43, -2, 109, 48, 20, -82, -91, -11, -52, -66, 48, 12, -15, 90, 115, -35, 126, -5, 39, -86, -19, 4, 7, 84, 49, 126, -41, -72, -53, -33, -82, 115, 54, -120, -2, -64, -25};
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
    msg.setTimeStamp(0.4089327852401361);
    msg.setSource(4476U);
    msg.setSourceEntity(132U);
    msg.setDestination(35532U);
    msg.setDestinationEntity(104U);
    msg.locale.assign("QDZDFBUIGAWXZGSZUMYSYSRRCVLKEANHJTYXFJICCBONZCANMKFPMWSLRORGHLVEDWBYLAHALNCOZMRECKMRJYZLDHLTSVXEVQIBFDYJOVCPLUUKYGQTGQDUHTTPOMJEWXWTXUGEMIYQNBFSQVFGJWEQPPFFWKQXRSZEGNGBHEQTUKMBPOKQNUTIHWJHAVRYXCMXGKLNZXFUPNWOEDDACZILDBSJSKOIHOFBU");
    const char tmp_msg_0[] = {-96, 63, -95, 32, -26, -29, -123, 27, 86, -2, -106, 3, 99, 61, 8, 29, -63, -22, 83, 31, 107, 100, -88, 15, -53, 53, -107, -3, 37, 88, 123, -47, 96, -18, 31, -52, -107, 125, -123, -92, -35, 16, -100, 48, -44, -118, -4, -80, 79, -102, -40, -102, -21, 4, 111, 102, -1, -110, -23, 35, -59, 45, 39, 125, 54, 40, 74, -93, -69, 73, 118, -91, -41, -13, 13, 21, 50, 17, 84, 29, -98, -7, 100, 99, -13, 122, 125, -53, -20, 4, 126, -47, -114, -6, -106, 19, -127, 50, 121, -8, 34, 10, 31, -1, 54, 6, -68, -81, 5, 22, -80, -73, -48, 6, -43, 12, -124, 46, 68, -30, 76, -40, 75, 77, 16, 32, 19, -69, 38, 66, 97, -49, -18, 106, -119, -111, 35, -61, -55, 68, 114, 52, 80};
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
    msg.setTimeStamp(0.6412999510658105);
    msg.setSource(62923U);
    msg.setSourceEntity(70U);
    msg.setDestination(20713U);
    msg.setDestinationEntity(163U);
    msg.locale.assign("UUSTSZXATWPSAZPNOUVCPVEQJWAJCZFEDOSKFNAMRHRMHQIWNJBDNRFELJE");
    const char tmp_msg_0[] = {70, -54, -28, -126, -127, 20, 63, 73, 27, 23, -17, -7, 79, 40, 59, -30, -90, -54, 3, -92, 117, 28, -111, 111, -80, -97, 62, -10, 26, -24, -43, -62, 67, -112, -62, -107, 126, 78, 31, 32, -95, -22, -7, -2, 124, -101, -96, -19, -126, 11, -103, 40, -72, -4, 89, -90, 23, 74, -110, -52, -31, -41, -37, -57, 19, -20, -35, 120, -107, -117, 45, 85, -127, -85, 111, 44, 58, -41, -8, -33, -72, -32, 64, -127, -3, -52, 87, -49};
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
    msg.setTimeStamp(0.7402953728964518);
    msg.setSource(15941U);
    msg.setSourceEntity(169U);
    msg.setDestination(50345U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.7768791773080284);
    msg.setSource(64399U);
    msg.setSourceEntity(241U);
    msg.setDestination(45307U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.540662705009682);
    msg.setSource(50662U);
    msg.setSourceEntity(96U);
    msg.setDestination(50690U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.23276480223967255);
    msg.setSource(56729U);
    msg.setSourceEntity(106U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(104U);
    msg.highpass = 0.840680849514084;
    msg.adot = 0.20869035602453745;
    msg.slope_compensation = 0.9406872805338083;
    msg.slope_compensation_difference = 0.16312211110798758;
    msg.altitude = 0.463917903994135;
    msg.auto_altitude = 0.11097142125142245;

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
    msg.setTimeStamp(0.6091227392494997);
    msg.setSource(50829U);
    msg.setSourceEntity(150U);
    msg.setDestination(352U);
    msg.setDestinationEntity(23U);
    msg.highpass = 0.4299765492050094;
    msg.adot = 0.883901713709412;
    msg.slope_compensation = 0.42238410828316364;
    msg.slope_compensation_difference = 0.49340131765752326;
    msg.altitude = 0.7886554307609684;
    msg.auto_altitude = 0.4851527562797693;

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
    msg.setTimeStamp(0.24698547867743204);
    msg.setSource(51892U);
    msg.setSourceEntity(54U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(147U);
    msg.highpass = 0.7592505365541955;
    msg.adot = 0.5354967790816058;
    msg.slope_compensation = 0.07504175295284932;
    msg.slope_compensation_difference = 0.11149948090954875;
    msg.altitude = 0.15190088235174348;
    msg.auto_altitude = 0.4498096115042076;

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
    msg.setTimeStamp(0.9864575599580244);
    msg.setSource(57906U);
    msg.setSourceEntity(64U);
    msg.setDestination(9907U);
    msg.setDestinationEntity(193U);
    msg.remotecontrolallowed = 149U;
    msg.remotecontrolenabled = 160U;
    msg.remotecontrolactive = 234U;
    msg.depthonlycontrolenabled = 199U;
    msg.directcontrolenabled = 12U;
    msg.returntoclosestpointonline = 236U;
    msg.onshorepower = 231U;
    msg.latitude = 0.2741243080767668;
    msg.longitude = 0.43262712124317226;
    msg.depth = 0.31976961400409565;
    msg.depthref = 0.07061985623877509;
    msg.altitude = 0.7659839263632253;
    msg.altituderef = 0.022192937054993145;
    msg.pitch = 0.0019946294139738807;
    msg.roll = 0.4050530849188476;
    msg.rpm = 0.3884798963193893;
    msg.rpmref = 0.3013294556319469;
    msg.speed = 0.07762204410014861;
    msg.speedref = 0.32786209779161757;
    msg.heading = 0.9325930145379928;
    msg.headingrate = 0.021047357037024428;
    msg.headingref = 0.45676195235923134;
    msg.missionstate = 184U;
    msg.leg = -3616106800807855688;

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
    msg.setTimeStamp(0.7581065384019648);
    msg.setSource(60469U);
    msg.setSourceEntity(123U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(190U);
    msg.remotecontrolallowed = 118U;
    msg.remotecontrolenabled = 53U;
    msg.remotecontrolactive = 21U;
    msg.depthonlycontrolenabled = 203U;
    msg.directcontrolenabled = 13U;
    msg.returntoclosestpointonline = 19U;
    msg.onshorepower = 128U;
    msg.latitude = 0.8004020435480527;
    msg.longitude = 0.34588942999261685;
    msg.depth = 0.7388523362629502;
    msg.depthref = 0.7067603266046308;
    msg.altitude = 0.27412671995311744;
    msg.altituderef = 0.42872471078750096;
    msg.pitch = 0.2977468891901289;
    msg.roll = 0.8097572701520765;
    msg.rpm = 0.5164969525643551;
    msg.rpmref = 0.7759664809992562;
    msg.speed = 0.4085018564286641;
    msg.speedref = 0.45295216355876433;
    msg.heading = 0.16067583137684394;
    msg.headingrate = 0.8462601619780338;
    msg.headingref = 0.09764406668904424;
    msg.missionstate = 164U;
    msg.leg = -3418725634395974307;

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
    msg.setTimeStamp(0.26086459032361997);
    msg.setSource(33902U);
    msg.setSourceEntity(107U);
    msg.setDestination(59562U);
    msg.setDestinationEntity(207U);
    msg.remotecontrolallowed = 138U;
    msg.remotecontrolenabled = 44U;
    msg.remotecontrolactive = 47U;
    msg.depthonlycontrolenabled = 146U;
    msg.directcontrolenabled = 50U;
    msg.returntoclosestpointonline = 249U;
    msg.onshorepower = 31U;
    msg.latitude = 0.7362151668283711;
    msg.longitude = 0.6716424153104573;
    msg.depth = 0.8212535372682033;
    msg.depthref = 0.3541679362989606;
    msg.altitude = 0.039465989497654785;
    msg.altituderef = 0.34159831707469135;
    msg.pitch = 0.7846689770263732;
    msg.roll = 0.643885242675068;
    msg.rpm = 0.6319527361249381;
    msg.rpmref = 0.3946562018642147;
    msg.speed = 0.7746378529548609;
    msg.speedref = 0.20904166701263982;
    msg.heading = 0.4861400536810565;
    msg.headingrate = 0.09929223698071588;
    msg.headingref = 0.3651454172806634;
    msg.missionstate = 86U;
    msg.leg = 47231392706973923;

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
    msg.setTimeStamp(0.3448981650099683);
    msg.setSource(46893U);
    msg.setSourceEntity(206U);
    msg.setDestination(61271U);
    msg.setDestinationEntity(207U);
    msg.name.assign("IOFMVBESHZJQGZSULIEDJAXUUUYCMRRKYSWOIPXRMAAPQZOJYTAPPPBWZFMHXLIABFILA");
    msg.arg1 = 0.295451304304858;
    msg.arg2 = 0.47111069866713895;
    msg.arg3 = 0.7404954476155284;
    msg.arg4 = 0.5631381041177466;

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
    msg.setTimeStamp(0.23484438363659144);
    msg.setSource(35503U);
    msg.setSourceEntity(8U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(7U);
    msg.name.assign("NTQJIUSKSPJYVERXLKCCVCECAJVWXYLRMUYCCGYBVZWPYAIHZBVQTNAOTBHFCUNSQWGSDMWIZQZDNRFZLGWMSFPNOKLXOMXRIMZFSKUZGMERXXAZQFKUOOTPWSVQTSZDEAKJXXBETPTVUDSUAOXTQFBHIMVORQJFVAARQPBJLMGPDCKWUYOZHDWJCMEJGPPTRLBBEHLHIAXNEVYUDDGFDCYOIHYSEHQJLGGGIKKNNHTNLB");
    msg.arg1 = 0.05163519516636239;
    msg.arg2 = 0.4966829562931504;
    msg.arg3 = 0.7680280704801822;
    msg.arg4 = 0.07301827467908095;

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
    msg.setTimeStamp(0.7433164174505134);
    msg.setSource(49136U);
    msg.setSourceEntity(214U);
    msg.setDestination(22735U);
    msg.setDestinationEntity(117U);
    msg.name.assign("STBMJKFOHSKRFUXASOHYUPAVDKHNSTQLZJPKFIVOBPOWUALBDSNHGLVWWAPTFJJOMTXECILEHWZWIJTZXPDFQYDWPIKEYRFTWMUZVUJVDFJNXEZHVRXMQYXQCFUPKKIZXNAGIOGBDEFMVEPVXLYGCTQICHPNUOUIRWLUQCHGGZAM");
    msg.arg1 = 0.8379466166003928;
    msg.arg2 = 0.09309662476078684;
    msg.arg3 = 0.9659701243876905;
    msg.arg4 = 0.5804711870523311;

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
    msg.setTimeStamp(0.7861140223015253);
    msg.setSource(33634U);
    msg.setSourceEntity(8U);
    msg.setDestination(61988U);
    msg.setDestinationEntity(40U);
    msg.range1 = 0.34528032502654993;
    msg.range2 = 0.8894358538284795;
    msg.range3 = 0.6279347263974038;
    msg.range4 = 0.9039886502746025;

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
    msg.setTimeStamp(0.16422537782485758);
    msg.setSource(15544U);
    msg.setSourceEntity(136U);
    msg.setDestination(44804U);
    msg.setDestinationEntity(68U);
    msg.range1 = 0.6890357130897174;
    msg.range2 = 0.3414947034372995;
    msg.range3 = 0.6179434036678367;
    msg.range4 = 0.7806277009085975;

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
    msg.setTimeStamp(0.20313806837860215);
    msg.setSource(26916U);
    msg.setSourceEntity(163U);
    msg.setDestination(50108U);
    msg.setDestinationEntity(53U);
    msg.range1 = 0.4471989237131625;
    msg.range2 = 0.5597009852878696;
    msg.range3 = 0.8715339979457426;
    msg.range4 = 0.6095494750963297;

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
    msg.setTimeStamp(0.7762197229996574);
    msg.setSource(42299U);
    msg.setSourceEntity(202U);
    msg.setDestination(16316U);
    msg.setDestinationEntity(28U);
    msg.msg.assign("AOVNNOLWNHOXIGTVMPFZDPCFTXBLFQCZLSVKQYIJNXTTEZPYRRFYGHKXUUFEYDPQSPGJXDGEFFPQLKJQEWUDCYSKHPUZMOZRXNGAQOCOLNYIGKWBKMSBUVJJREGIBHFSWXYORLGNKMCDHIMXVETTWMZKYWCTUOLXRUMBWNXKVMNDSHIEHAIABBALPLJESVMVONAREHWTSUAFGACHZJKVMRZRPYPAZIQWDIYOEBCJSDTLGABWTRHUQSIJCBUQVD");
    msg.direction = 224U;

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
    msg.setTimeStamp(0.6351959851102907);
    msg.setSource(63012U);
    msg.setSourceEntity(34U);
    msg.setDestination(16244U);
    msg.setDestinationEntity(87U);
    msg.msg.assign("DQPNPAGBUKMJUSZEGRBHPHXKGBDQOKOLXAZGSMNFPWYIEQFRNNJMWRWXMGOXOETPIMNWJBKJIQLCCDAXJZAPCXKDGZZTWGGQJHSTDFYBXZARFYLVKEUJTEZKCCRHVAFATHMUKZSYKJYVVDUONMLYEQTDAEMVYGBVWRBAJIOJVECTNSSPFWWBNFXUTRZHRNLUKCQVUUOIBZFGOIHCLWCIXYWQPTMCSLH");
    msg.direction = 46U;

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
    msg.setTimeStamp(0.10206484663449089);
    msg.setSource(12291U);
    msg.setSourceEntity(236U);
    msg.setDestination(38901U);
    msg.setDestinationEntity(42U);
    msg.msg.assign("VIVFDCSJMBRHCTIPKXLCUYPFRMQUWCRIRZTNFHWUSVVTMOTIFRBOAYXJSMJQMZVZJIYELHHVAPJLUZOEQEFWZUTHOSWCQTVMOGJNDFZRGSVIKTKPAEGDUQ");
    msg.direction = 139U;

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

  return test.getReturnValue();
}
