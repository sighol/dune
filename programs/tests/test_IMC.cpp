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
// IMC XML MD5: 71460d645c7a3b246321254631cec2c6                            *
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
    msg.setTimeStamp(0.08048905632459313);
    msg.setSource(9956U);
    msg.setSourceEntity(138U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(24U);
    msg.state = 240U;
    msg.flags = 29U;
    msg.description.assign("LQEWCOVOAQABVCAQYFOKSBRIZOLYNDTRNZGUHNIEYDFWYTVPNHSVMECCTXNJEZLIHFZJCGBDURAEBOXUJYSTJUCHTMYBMOGFUSJQBXHREJDN");

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
    msg.setTimeStamp(0.35939461200835254);
    msg.setSource(51476U);
    msg.setSourceEntity(158U);
    msg.setDestination(63941U);
    msg.setDestinationEntity(63U);
    msg.state = 251U;
    msg.flags = 195U;
    msg.description.assign("NEHDSKHFOZWBTFWTEFBNVWTFLXHAMMPISEPBMZDTUJDCPGQYWYZRGGRCSXHQZHHXUBGEYBAWZAOOLJITJPCLROGADAYKUDKNYVCLCSOMVVXCHGSWRPEBLQPFKJQZOQSEPTYIBGKJRXXRXSYZEMLMYIDYRUSWAFRUBOFTEXZQIWUBOLCZSQNMNRJUFTIRAKPGQDNFANOGX");

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
    msg.setTimeStamp(0.3608097567547528);
    msg.setSource(5364U);
    msg.setSourceEntity(81U);
    msg.setDestination(56424U);
    msg.setDestinationEntity(135U);
    msg.state = 87U;
    msg.flags = 124U;
    msg.description.assign("CFCYUIVLXEQISKUCQONJLHEHIKDWGCYXXNSTPWMJIHQUJGLBMECRPYSVNHMJUVHEAELMDAZQWBEWYAIFZBEFOYJHFSYFLOOZKRGYIMDOGOGVKENSSTSMQXROBQXENWTAXJLBDHDTTPBAONVJKWMVWXNBQOUUWCBLZGHRGR");

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
    msg.setTimeStamp(0.8687239946755836);
    msg.setSource(61999U);
    msg.setSourceEntity(46U);
    msg.setDestination(49700U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.9158148159587467);
    msg.setSource(44103U);
    msg.setSourceEntity(218U);
    msg.setDestination(59606U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.043280217623681505);
    msg.setSource(55006U);
    msg.setSourceEntity(122U);
    msg.setDestination(8213U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9210821356766287);
    msg.setSource(16405U);
    msg.setSourceEntity(13U);
    msg.setDestination(48981U);
    msg.setDestinationEntity(24U);
    msg.id = 0U;
    msg.label.assign("YKLTHYIOQEVJHTBCBAVNVECUUIWZVXXVEJWYPNNDXKTEQOSLIWLPJOFDEMQYXVZMKVRJGMIHQYQMIAOH");
    msg.component.assign("YRXPYWJQGYUZLKLDPRSVXZTFVPXDNDHETOOXERRCIUNYLWTTZLIWSJRONWAEKHWIYCPASYGJGZQPQPLFMQLFHGXMYOPBFUKBCIRWSUSBANWUWDJHCOAXPSGVZXZZLQFCVO");
    msg.act_time = 7649U;
    msg.deact_time = 34484U;

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
    msg.setTimeStamp(0.9950730517992196);
    msg.setSource(29783U);
    msg.setSourceEntity(244U);
    msg.setDestination(62204U);
    msg.setDestinationEntity(79U);
    msg.id = 1U;
    msg.label.assign("TKDOKURZURNLIZEIAYPYDXOFTSUESHAKUSWOWNPXQOAVHSUYZKZYVVZCQGNIWATCQZQKBIZLJNMKUNOGLLTGVEFDQDMFWRWBEIUFAYOUMGTADGBBWJXJTRFVVCCGIFNCNJESQMSROTRDKMWOCXGHZEBHWVXLYCWHJQYEDSRJXPPJFLRMGFHNLZOPARTHBIXKNFTFJPBQPSIEMSWACCKJIHDEGQGXY");
    msg.component.assign("MRPLOVRCMPCANOBBXSXZAZRJZIDYKOVMEIFMAEUQCVSSIIYTLNOXSAVUKEWRVGQODBKMEPMGPTWPRPIJNIWAHQLVDEYDEDFVNEJSHBLLSBYEBRKYLUUGTTXHJBXZUGEBFCTKSUDWOTKIOZHZORXFHNYWDXQVKLWOHNNYCZXZFGUAXRFFSQWQKL");
    msg.act_time = 43829U;
    msg.deact_time = 2380U;

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
    msg.setTimeStamp(0.8328779124045987);
    msg.setSource(25335U);
    msg.setSourceEntity(212U);
    msg.setDestination(33852U);
    msg.setDestinationEntity(146U);
    msg.id = 158U;
    msg.label.assign("NSXVFPAPEVJWOFHIVMKEQEVRZNMYMGCMVCDUBWDHXPMRCZSB");
    msg.component.assign("UUCIMHBOMUTEPIERLNHIDFGLZZTNKPILQWBOYIRBEWWNZAMRUNLSCJUDVJJOGSEKHMBZQAOKCSQJYFJNHFLAFABDXUKJRYAQZEOHZGJBDPYFTXBCQYIUROWPBJTGAVJDINHYCSQSWEGFCVVGIGFZQYBATTLJENYCRHXKTHZVZPCSNLMVSCKXMLENOREXCFSSHWQKARTYPPIAWM");
    msg.act_time = 55573U;
    msg.deact_time = 54685U;

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
    msg.setTimeStamp(0.6286784690103236);
    msg.setSource(21136U);
    msg.setSourceEntity(249U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(156U);
    msg.id = 171U;

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
    msg.setTimeStamp(0.8372892433652392);
    msg.setSource(17452U);
    msg.setSourceEntity(235U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(172U);
    msg.id = 183U;

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
    msg.setTimeStamp(0.23260240986974268);
    msg.setSource(28280U);
    msg.setSourceEntity(161U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(92U);
    msg.id = 232U;

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
    msg.setTimeStamp(0.27959504282944303);
    msg.setSource(63108U);
    msg.setSourceEntity(113U);
    msg.setDestination(38733U);
    msg.setDestinationEntity(157U);
    msg.op = 83U;
    msg.list.assign("MUOGVYKIMZGNMVVENNZCCFPTODUXWKIBYGDQSSMAHZGLQRAMRUFDTXXTHQNWLQZCGMSJAISPEJALWQRUSLKZYJYOGEJLPFECQMOTAOLUPSTZOJAIVRPKXHIEBCRTPGNJGTNKPCZIRBVONRAWEVEUBOBDFXFYOVWERSSXHIQQLUIVHLSDRWDYKEBBNCWJVDFCMBFNUTWJQYPMFBIXYXAPMVFTRJELWHZPCBKKDWO");

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
    msg.setTimeStamp(0.6850072369233211);
    msg.setSource(49073U);
    msg.setSourceEntity(146U);
    msg.setDestination(24263U);
    msg.setDestinationEntity(100U);
    msg.op = 222U;
    msg.list.assign("NOLVDNZVDNAELEYBRQJAYBNPYDLHQIHCLMGOIFTWIJZEECUVYDGHRLALVRTPFTGMKYCNSSTXIRCCDRXQFUIJHFQGJEMKAQQUSVJMQPNBONFYXXZTPSICDJKSVGZTBBLYKFZLUPBMEFWBGJYMOUSAEVZKQOEWHQAFOWHIDXUAWWGEPWDQKRAO");

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
    msg.setTimeStamp(0.6400010866480977);
    msg.setSource(22378U);
    msg.setSourceEntity(10U);
    msg.setDestination(20202U);
    msg.setDestinationEntity(200U);
    msg.op = 176U;
    msg.list.assign("PJMYLFMBJGLMCLIEWRRYGVZRDOUEXTMFODHFNJFLDNTEBTXXVNQCCSLCDQOUDFWOTYSPNMRGOJCPZPKISGPSEBJJSNWJMXWAVWUOUXBSHIVLZTRIIGUBKACCQUYPJBAVMUPFTJYTXXKHIHBMPFCEHLKKWEQYOQBHGVGNEARAZMQZZZSLSLCZRTKGQOASKDJOARTNFVXIOKHK");

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
    msg.setTimeStamp(0.8126744957248456);
    msg.setSource(24655U);
    msg.setSourceEntity(122U);
    msg.setDestination(5320U);
    msg.setDestinationEntity(66U);
    msg.value = 164U;

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
    msg.setTimeStamp(0.7332138794412794);
    msg.setSource(35171U);
    msg.setSourceEntity(110U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(56U);
    msg.value = 252U;

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
    msg.setTimeStamp(0.9050093603283479);
    msg.setSource(22813U);
    msg.setSourceEntity(143U);
    msg.setDestination(8359U);
    msg.setDestinationEntity(15U);
    msg.value = 109U;

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
    msg.setTimeStamp(0.6726481973533167);
    msg.setSource(11350U);
    msg.setSourceEntity(234U);
    msg.setDestination(64133U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("NZLRVNLFHPRSZTUIMFOYWLKIXTEZAVKFWJYFIZPLJTIMMTCSDQHDYARTUYKEIUNYVXJOCNAGJKPJDZECULIZMXTUSKGOQBARNFCTVRQIACFYTPQUCNSDEHQWRXPSEDHTOKSWPWNJFRVEEQMCRWAFKFJPNZZUOVHZLXRMJVYDNLXWQLAHCWXSHS");
    msg.message_id = 32375U;

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
    msg.setTimeStamp(0.2477359057276124);
    msg.setSource(17503U);
    msg.setSourceEntity(187U);
    msg.setDestination(40383U);
    msg.setDestinationEntity(175U);
    msg.consumer.assign("KHHCJYLDEBBORUIGRBQYITAYFHXMWIJMDPGDVVOAFJHPOFKHDZJMOUSCZWZZSKOIMBNKTLVFVOFQSFYGPVWUALCXQSKLQHPNCABGGGPCCWUWLZPUBTOSQJUNYDSEKDKMTRLJIEVJAAPFFWRYORQIVYLGBO");
    msg.message_id = 24034U;

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
    msg.setTimeStamp(0.966954579552239);
    msg.setSource(31393U);
    msg.setSourceEntity(213U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(214U);
    msg.consumer.assign("UTTHXCJMYFQSSRDWFJSIBIAYZVRZNAGDDWPJEYZKNMGLOGQVIJLONZQEIQKHLVQROZOMFKCNYFQGHBCBLHVDXFNXQMUKRWAIDNDYHPXQWJIOAZPPYUQRMOJXBCWOXWKTXSSCNIXVHGETRLRSJKEUF");
    msg.message_id = 21881U;

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
    msg.setTimeStamp(0.07709678159034272);
    msg.setSource(30290U);
    msg.setSourceEntity(196U);
    msg.setDestination(5572U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.09818264337431504);
    msg.setSource(14712U);
    msg.setSourceEntity(140U);
    msg.setDestination(19928U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.891443247590353);
    msg.setSource(13912U);
    msg.setSourceEntity(30U);
    msg.setDestination(49875U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.4787284296887643);
    msg.setSource(20660U);
    msg.setSourceEntity(87U);
    msg.setDestination(12541U);
    msg.setDestinationEntity(203U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.25516483254506517);
    msg.setSource(2512U);
    msg.setSourceEntity(242U);
    msg.setDestination(670U);
    msg.setDestinationEntity(215U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.20431562987416096);
    msg.setSource(60086U);
    msg.setSourceEntity(28U);
    msg.setDestination(32293U);
    msg.setDestinationEntity(181U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.6574753051355492);
    msg.setSource(54119U);
    msg.setSourceEntity(206U);
    msg.setDestination(9840U);
    msg.setDestinationEntity(153U);
    msg.total_steps = 114U;
    msg.step_number = 51U;
    msg.step.assign("LPNKHNRIEKMWALQDVREHAQZFMPUHJNUFGKJSNSAZATLVBHKZOOTDJNGLDWBYLTOWEKWTPTNIZNUUVGRCSPDOMABIAKRDCNGHZCXIFHHAZTNCMQTXYHYZYLRGUIFAGCESQDXBLVFJWBPYXCSKBNQ");
    msg.flags = 22U;

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
    msg.setTimeStamp(0.7506473543129606);
    msg.setSource(57993U);
    msg.setSourceEntity(63U);
    msg.setDestination(56279U);
    msg.setDestinationEntity(70U);
    msg.total_steps = 89U;
    msg.step_number = 12U;
    msg.step.assign("OPRBJIMKVHDZYTPAXWMQYLTWQTBHZUPGMPHWCCGYCBQSMFOSGLFNIVOYCTEVLNIEXDQHUJTMWWZCTSEMGYYJSKMYUMKXTFGUKFFKNRPZKHUAWHUIZPJIYUAUBBHVLLSTVKNVXRITUIKSCXPVKDREBAXBGJWJBCYEQVOAESBWCGKJDDDLPPLGCUNNRARZIQNREEOQQFYJXXZZSFTFOJLQFEZOGVMD");
    msg.flags = 231U;

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
    msg.setTimeStamp(0.7874122708180783);
    msg.setSource(3234U);
    msg.setSourceEntity(95U);
    msg.setDestination(65418U);
    msg.setDestinationEntity(215U);
    msg.total_steps = 27U;
    msg.step_number = 210U;
    msg.step.assign("EBXUCLJADBSTNKMIXRVVGBWULHDJQEOUJNRTVHJTJII");
    msg.flags = 189U;

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
    msg.setTimeStamp(0.5091419033508975);
    msg.setSource(48906U);
    msg.setSourceEntity(235U);
    msg.setDestination(28085U);
    msg.setDestinationEntity(82U);
    msg.state = 145U;
    msg.error.assign("PYZZBOEGAJRKYITDZLKIUPNMNACWGMXISXCFJCBKFSRJODNABAYTKPOARSFSRXVXBUSYGZLDELFNCFWLVRZPKEJHTBXKOIGHPNCLPIJJXVZPHKRJRYTRIZMBTHFVQNMMUVZEVQEACHGJSVDAXEUWLJNKONOYELRDBISTUFDVKADJXNGAVLYQWDMOGCSSYBCMLQNHIUU");

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
    msg.setTimeStamp(0.6616485192557537);
    msg.setSource(3366U);
    msg.setSourceEntity(125U);
    msg.setDestination(57469U);
    msg.setDestinationEntity(243U);
    msg.state = 210U;
    msg.error.assign("ISUUCFXNISJKGMAQWCJOCTDXGSKKKWZGNAYLNVJZBHAQPPYDBRVLEWFSPKLFDUDJGYXPVVDIZAZTZOPBKUHKTXBATWRFQERWJCARCKAHSQPXLMOXYU");

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
    msg.setTimeStamp(0.8089934998253056);
    msg.setSource(58879U);
    msg.setSourceEntity(153U);
    msg.setDestination(12981U);
    msg.setDestinationEntity(180U);
    msg.state = 152U;
    msg.error.assign("OWEXFHGYPQZXHWYJLDSIBDTZRPVOETBFUADJIRWHKGQZHWKOIETMLUVPNVSOWKZHOVUAMUAPVHWPSEALLOGCLRRYQITHPYYOJJYZXRBZEERCZGIEIXLDLTOTSPJMCWXUSJZKGBFHBVYMNSQOIDGDMMKSOVBAXDFVUEFWXTTAKZNNNRLCEQMFKUKBDCADVXGNTDWY");

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
    msg.setTimeStamp(0.7660340491885975);
    msg.setSource(39817U);
    msg.setSourceEntity(182U);
    msg.setDestination(61715U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.906863412729204);
    msg.setSource(8U);
    msg.setSourceEntity(40U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.12225966327579874);
    msg.setSource(11691U);
    msg.setSourceEntity(136U);
    msg.setDestination(900U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.2930365942151142);
    msg.setSource(27868U);
    msg.setSourceEntity(132U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(41U);
    msg.op = 187U;
    msg.speed_min = 0.4429158865258861;
    msg.speed_max = 0.5211510751782198;
    msg.long_accel = 0.3069656224650025;
    msg.alt_max_msl = 0.6193690265806457;
    msg.dive_fraction_max = 0.9155501597535973;
    msg.climb_fraction_max = 0.7745721330695908;
    msg.bank_max = 0.8455114203967978;
    msg.p_max = 0.06409067877265273;
    msg.pitch_min = 0.3290215238850914;
    msg.pitch_max = 0.09853215706462604;
    msg.q_max = 0.6189545807823621;
    msg.g_min = 0.6792822449917527;
    msg.g_max = 0.10975949414520225;
    msg.g_lat_max = 0.9250571875775484;
    msg.rpm_min = 0.3285856434600867;
    msg.rpm_max = 0.4402147670983778;
    msg.rpm_rate_max = 0.13839373322715265;

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
    msg.setTimeStamp(0.997104792733005);
    msg.setSource(13427U);
    msg.setSourceEntity(94U);
    msg.setDestination(62384U);
    msg.setDestinationEntity(91U);
    msg.op = 15U;
    msg.speed_min = 0.4400262992610604;
    msg.speed_max = 0.7825052276783364;
    msg.long_accel = 0.7835577733847241;
    msg.alt_max_msl = 0.05607889947880085;
    msg.dive_fraction_max = 0.07711883334730307;
    msg.climb_fraction_max = 0.9800683476601009;
    msg.bank_max = 0.0937267607676685;
    msg.p_max = 0.9695647393224794;
    msg.pitch_min = 0.8342480729324977;
    msg.pitch_max = 0.2226401760373351;
    msg.q_max = 0.14081084646960074;
    msg.g_min = 0.3255735345413244;
    msg.g_max = 0.14371274980025894;
    msg.g_lat_max = 0.44865807541938196;
    msg.rpm_min = 0.2666719569280329;
    msg.rpm_max = 0.17032696605271125;
    msg.rpm_rate_max = 0.9307906356751301;

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
    msg.setTimeStamp(0.207210751870611);
    msg.setSource(40821U);
    msg.setSourceEntity(202U);
    msg.setDestination(13293U);
    msg.setDestinationEntity(212U);
    msg.op = 159U;
    msg.speed_min = 0.76258703879652;
    msg.speed_max = 0.7007933859426101;
    msg.long_accel = 0.09911811489479228;
    msg.alt_max_msl = 0.9528126418238552;
    msg.dive_fraction_max = 0.7616378266629276;
    msg.climb_fraction_max = 0.7843820927174465;
    msg.bank_max = 0.19704023559558015;
    msg.p_max = 0.16838385643128384;
    msg.pitch_min = 0.6882127816187285;
    msg.pitch_max = 0.39318020109011165;
    msg.q_max = 0.505765706585623;
    msg.g_min = 0.4744297554772857;
    msg.g_max = 0.4112842292554344;
    msg.g_lat_max = 0.9728162659512809;
    msg.rpm_min = 0.26725502867865225;
    msg.rpm_max = 0.5407542095518841;
    msg.rpm_rate_max = 0.4542448948549649;

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
    msg.setTimeStamp(0.38026492234155507);
    msg.setSource(7969U);
    msg.setSourceEntity(166U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(164U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.023920899188160094;
    tmp_msg_0.reason = 30U;
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
    msg.setTimeStamp(0.48957651531992563);
    msg.setSource(28877U);
    msg.setSourceEntity(29U);
    msg.setDestination(56781U);
    msg.setDestinationEntity(187U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 179U;
    tmp_msg_0.htime = 0.9884722301852358;
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
    msg.setTimeStamp(0.7251405957767961);
    msg.setSource(43967U);
    msg.setSourceEntity(215U);
    msg.setDestination(19187U);
    msg.setDestinationEntity(143U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 202U;
    tmp_msg_0.htime = 0.01664304824472529;
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
    msg.setTimeStamp(0.28560613650578637);
    msg.setSource(63952U);
    msg.setSourceEntity(133U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.19639498966902535;
    msg.lon = 0.3181997873446385;
    msg.height = 0.5430161315974209;
    msg.x = 0.6365354690424827;
    msg.y = 0.031690583044234444;
    msg.z = 0.40251533717491883;
    msg.phi = 0.011670022783566991;
    msg.theta = 0.5944717393420531;
    msg.psi = 0.03247968214386532;
    msg.u = 0.2812914348604405;
    msg.v = 0.7365521499293257;
    msg.w = 0.38464821102373015;
    msg.p = 0.7698396933877267;
    msg.q = 0.7893443032932363;
    msg.r = 0.791792453875246;
    msg.svx = 0.0834524188725857;
    msg.svy = 0.9972926920477779;
    msg.svz = 0.6988904068716061;

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
    msg.setTimeStamp(0.4813061255265908);
    msg.setSource(63171U);
    msg.setSourceEntity(8U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.8584258335627816;
    msg.lon = 0.31820817928435763;
    msg.height = 0.5685103989494982;
    msg.x = 0.5981473743255569;
    msg.y = 0.6361848289291565;
    msg.z = 0.6811672809996384;
    msg.phi = 0.8282675220191464;
    msg.theta = 0.47615276507101933;
    msg.psi = 0.5465906622466884;
    msg.u = 0.35637789392078634;
    msg.v = 0.15824944415504472;
    msg.w = 0.607200431967816;
    msg.p = 0.8144630851120624;
    msg.q = 0.679790245406241;
    msg.r = 0.5650189223704105;
    msg.svx = 0.4758855204902662;
    msg.svy = 0.5843722691471404;
    msg.svz = 0.17837524379453118;

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
    msg.setTimeStamp(0.16339856983623968);
    msg.setSource(1142U);
    msg.setSourceEntity(137U);
    msg.setDestination(56902U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.7744540853402587;
    msg.lon = 0.028088528894675724;
    msg.height = 0.05664047752202572;
    msg.x = 0.6030983752948104;
    msg.y = 0.7170335250957867;
    msg.z = 0.42714844238542893;
    msg.phi = 0.6663677152677429;
    msg.theta = 0.32668484296450395;
    msg.psi = 0.5440531263122736;
    msg.u = 0.4139120198616051;
    msg.v = 0.7824529794832404;
    msg.w = 0.7158431374893064;
    msg.p = 0.501030538729822;
    msg.q = 0.3096545428211559;
    msg.r = 0.7529056614398957;
    msg.svx = 0.06194870951568743;
    msg.svy = 0.6027450723807806;
    msg.svz = 0.5290366608263029;

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
    msg.setTimeStamp(0.29385410621105923);
    msg.setSource(31691U);
    msg.setSourceEntity(50U);
    msg.setDestination(54818U);
    msg.setDestinationEntity(2U);
    msg.op = 127U;
    msg.entities.assign("ZMPRHNTMSIFXVYNCWUQVDPQDHYIVXAISDYPLHRGPJUSQWGRCSUEUBJFHYVFIHUSQQEIPQDTKZEITYQRMVNZWOHWSRWQZBXDRHBGJUGRHAWLEMXTEAYYOOTFVLNKYXJZZPTBOFLLMKLBKOBOGMXAMAKFLVHZXWMPKPASB");

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
    msg.setTimeStamp(0.13215153645518252);
    msg.setSource(19127U);
    msg.setSourceEntity(20U);
    msg.setDestination(5962U);
    msg.setDestinationEntity(128U);
    msg.op = 72U;
    msg.entities.assign("BZMBMTGRCXCEYXEUKASOJIFRFPHBWADHIUHEYMZSAMG");

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
    msg.setTimeStamp(0.6671722453540087);
    msg.setSource(31951U);
    msg.setSourceEntity(81U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(191U);
    msg.op = 169U;
    msg.entities.assign("GVGLESXVEGHTNZABMIQHPVKZDFBU");

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
    msg.setTimeStamp(0.663266740546653);
    msg.setSource(32409U);
    msg.setSourceEntity(134U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(185U);
    msg.type = 106U;
    msg.speed = 35783U;
    const char tmp_msg_0[] = {84, 53, 43, -89, -112, -80, -88, 75, -106, -74, 8, -36, 95, -66, 7, -63, 104, -126, 34, -12, 49, 53, -20, -25, 3, 4, -109, -31, 23, 71, -103, -65, -92, -64, -38, 18, 74, 20, 109, 51, -91, -115, -55, 92, 61, -94, -125, 43, 21, -55, 118, -104, -107, 88, -90, 123, -118, 83, 13, -65, -18, 73, -107, 97, 60, -92, 30, 18, 39, 13, -71, 21, 57, 125, 92, -48, -56, -50, 6, 65, 67, 109, 34, 88, -95, 124, -45, 44, 115, -50, -71, 1, -88, -36, 124, 126, 4, 123, -100, -41, -108, -24, 75, 37, 21, -83, 36, 97, 108, -67, -43, -78, 2, 98, -90, -78, 95, 15, 89, 19, 47, 77, 50, 27, -116, 26, -6, -13, 45, 46, -17, -103, -29, -87, 112, -65, -5, 114};
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
    msg.setTimeStamp(0.5490218585174732);
    msg.setSource(30053U);
    msg.setSourceEntity(219U);
    msg.setDestination(13222U);
    msg.setDestinationEntity(219U);
    msg.type = 200U;
    msg.speed = 53212U;
    const char tmp_msg_0[] = {-76, 31, -87, 72, -103, -27, -22, -128, -108, 95, 99, -110, 122, -114, 85, -12, 84, 38, -7, 33, 106, -57, 71, 52, 40, 118, 111, -93, 71, 106, -126, 101, 30, 125, -51, 90, -72, -52, 61, -39, 51, -25, 90, -77, -23, -32, 28, -120, -31, 58, -54, 122, -75, -113, 31, 0, -92, 67, -74, 17, -10, 87, 59, 55, -37, 73, 2, -26, 23, 103, 83, 73, 95, 84, -3, -77, -60, 19, -114, 26, 60, 107, -64, 83, 78, 7, 70, 40, 39, -13, -37, 102, 21, 123, -1, 117, 61, 49, -51, -112, -16, 30, 35, -19, -54, 42, 85, -104, 113, -80, -77, -57, -92, 106, -39, -6, -53, -27, 52, -91, 110, 124, 120, 81, -52, -28, 85, 118, -6, 114, 24, 11, 81, -126, 11, -98, -94, -59, -80, -123, 28, 77, -24, 37, 81, -65, 37, 112, -32, 3, 46, 98, -93, -80, 56, -9, -17, -101, 99, -101, -15, -7, 26, 98, -66, 92, -1, -88, 72, -65, 50, -5, 26, -92, 101, 31, 4, 25, -124, 122, -70, -109, 45, -110, 84, 5, -118, -38, -8, 19, -8};
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
    msg.setTimeStamp(0.022232065560061076);
    msg.setSource(33215U);
    msg.setSourceEntity(94U);
    msg.setDestination(8336U);
    msg.setDestinationEntity(152U);
    msg.type = 110U;
    msg.speed = 38658U;
    const char tmp_msg_0[] = {-96, -49, 75, 0, 41, 6, 25, -23, 15, 40, 105, 79, 85, -44, 65, 99, 76, -104, -77, 113, 22, 51, -92, -36, -94, 58, 103, -111, 57, 55, -74, -86, 21, -41, -121, -88, 91, -35, -60, 97, -2, -1, -104, -111, 21, -33, 61, 58, -119, -38, -119, -46, -95, -110, -24, -111, 88, 10, -27, -54, 8, 6, -112, -108, 83, -106, -84, -89, -54, -39, -56, 92, -110, 59, 120, 71, -99, 77, -68, -25, 36, -47, -13, 68, -59, -105, -127, -12, -59, -92, 90, 6, -9, 119, -66, 86, 105, -88};
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
    msg.setTimeStamp(0.5966511589175697);
    msg.setSource(60264U);
    msg.setSourceEntity(29U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(219U);
    msg.op = 114U;
    msg.tas2acc_pgain = 0.6245284840539911;
    msg.bank2p_pgain = 0.04596263629490627;

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
    msg.setTimeStamp(0.07921806481715155);
    msg.setSource(20492U);
    msg.setSourceEntity(134U);
    msg.setDestination(42810U);
    msg.setDestinationEntity(231U);
    msg.op = 206U;
    msg.tas2acc_pgain = 0.5205305013111986;
    msg.bank2p_pgain = 0.9855514484839183;

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
    msg.setTimeStamp(0.631874117650771);
    msg.setSource(52540U);
    msg.setSourceEntity(139U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(47U);
    msg.op = 197U;
    msg.tas2acc_pgain = 0.48390082305043014;
    msg.bank2p_pgain = 0.5603424375847453;

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
    msg.setTimeStamp(0.26623912505650194);
    msg.setSource(20480U);
    msg.setSourceEntity(44U);
    msg.setDestination(35488U);
    msg.setDestinationEntity(143U);
    msg.available = 1267807263U;
    msg.value = 244U;

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
    msg.setTimeStamp(0.5592183409800998);
    msg.setSource(15632U);
    msg.setSourceEntity(214U);
    msg.setDestination(61900U);
    msg.setDestinationEntity(180U);
    msg.available = 3372567512U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.16940332993681728);
    msg.setSource(4776U);
    msg.setSourceEntity(60U);
    msg.setDestination(51771U);
    msg.setDestinationEntity(142U);
    msg.available = 1894707146U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.8037914197142386);
    msg.setSource(62940U);
    msg.setSourceEntity(130U);
    msg.setDestination(55744U);
    msg.setDestinationEntity(9U);
    msg.op = 13U;
    msg.snapshot.assign("XNNHJJHSZOIAUCTREJEYNVNRVJGZCKVEMUPYLZBAQFCVJZSUOAHQULJHBDXFZRBOQMUMQZCPTIGLGCOBZIAYEHSOIPSICHIBEWJUHTRKSBCVFUBEWMTMITQEYUPITIDFWLPWSFTGWIDDWKGMCFWTJYLQOZLBKTHDEBFYGPARZSDJMXVCRGOKMKPFHYNWGVEDDPPRFGV");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("COBGRVZYLVHVYZGQACZKGATLWIVAOINJPJINFCAHRWWQGLDSDXTQIEKCQOSCTREBFGKXAFQKTKPEYYOHXBLUHCKUZJLGQDPDUJZFMUOGAEZUYEYPNLELZHNYILBFFFTJDMBXXXWZIVXTVZYJQSBPNDAUNTCEPOVEZHNSJFPEMRMRMKQUSIJBCLXRCCJOPKDMTGWSGOJHSUAW");
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
    msg.setTimeStamp(0.359900662348684);
    msg.setSource(7842U);
    msg.setSourceEntity(100U);
    msg.setDestination(665U);
    msg.setDestinationEntity(71U);
    msg.op = 132U;
    msg.snapshot.assign("YKYYVCJNUWCKDRLZPMRCQGGVGTDZFXFZSBQRKCFVEQUMCJWDBUNTRXKYAHAWXOPOBIWSZIXSQZPEPAZYMJHWBT");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 32397U;
    tmp_msg_0.type = 240U;
    tmp_msg_0.utc_year = 25989U;
    tmp_msg_0.utc_month = 173U;
    tmp_msg_0.utc_day = 240U;
    tmp_msg_0.utc_time = 0.09373635750472298;
    tmp_msg_0.lat = 0.35454554159806395;
    tmp_msg_0.lon = 0.2749577653869588;
    tmp_msg_0.height = 0.9789520883792658;
    tmp_msg_0.satellites = 91U;
    tmp_msg_0.cog = 0.7648334134928404;
    tmp_msg_0.sog = 0.7997256575256549;
    tmp_msg_0.hdop = 0.6231567631431134;
    tmp_msg_0.vdop = 0.19422571668239708;
    tmp_msg_0.hacc = 0.36320758185310853;
    tmp_msg_0.vacc = 0.0688405456723904;
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
    msg.setTimeStamp(0.6069633849980983);
    msg.setSource(20352U);
    msg.setSourceEntity(220U);
    msg.setDestination(41481U);
    msg.setDestinationEntity(183U);
    msg.op = 88U;
    msg.snapshot.assign("ZFFWABATKZZDAIQCGQPNDJDALYLRCYKCDUSINEZGIULPUMVWLAZIWKDROJEMNSFCBKMIQDLWQVAJDXEPCZIYUBULCTAHRNFTQGGVBSHTSDPTHNLYBTTJJTNSKKGCGPOLQMUGXBQFJPZZUCHEOPJMRPGOIJPFMWXAXSVJXSVHYOOZSGUNWSEPMROHYQXUOQNXMNIBBWXVEITKKXOVWRRZVKBELADVVYJC");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7795381481333015;
    tmp_msg_0.y = 0.268108561803562;
    tmp_msg_0.z = 0.20756674200271896;
    tmp_msg_0.phi = 0.9445548693933763;
    tmp_msg_0.theta = 0.9030469001144222;
    tmp_msg_0.psi = 0.4028737718971491;
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
    msg.setTimeStamp(0.8293196014225372);
    msg.setSource(44743U);
    msg.setSourceEntity(44U);
    msg.setDestination(49253U);
    msg.setDestinationEntity(197U);
    msg.op = 178U;
    msg.name.assign("TOCUNCZWQBCLVRCOGBVASJIHURSBFVPMXWMZYNUZAXGYNVFNPHDNTLAIOFSFBWAIZDKDJCGRXJEQCLPTRDWOUUJMYBIHEVHRJUZHXKVMNGLLWHOTYFLOVUYPJAVXPAIQIBXVBW");

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
    msg.setTimeStamp(0.9119255423088717);
    msg.setSource(36109U);
    msg.setSourceEntity(111U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(223U);
    msg.op = 101U;
    msg.name.assign("PTVTAPYNJUROOBB");

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
    msg.setTimeStamp(0.36673330536202087);
    msg.setSource(3650U);
    msg.setSourceEntity(105U);
    msg.setDestination(58039U);
    msg.setDestinationEntity(53U);
    msg.op = 228U;
    msg.name.assign("TSNOMTYPTVRDVCBVVQVAPXILBGFNUFMUMPCKBFVHTMGODGSOLIRIMZBRJYWBWXWZOSXQIDYFHIWKEQYKRCUBHCJAGPFONVCENARPEJDPSPZJWA");

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
    msg.setTimeStamp(0.23747616071584732);
    msg.setSource(48650U);
    msg.setSourceEntity(238U);
    msg.setDestination(42888U);
    msg.setDestinationEntity(81U);
    msg.type = 13U;
    msg.htime = 0.04449491494473212;
    msg.context.assign("WZGSYPVDHCIJTIASOFEFFLAKLQGWQCFTESBDOTSKULMNPCSD");
    msg.text.assign("BVZPAGOVUYIPDXEPSMAQFBZXCHVTEVFKOPIJBMCDSEQSDPKONFYUTPGHCUJPKCRWBVOLSKNNDWRIAJWJDQMNHMOSUOALKXMBBUUBWLHJJFTJKJXDBSCRQQBYUONRIVXIIGYFV");

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
    msg.setTimeStamp(0.8796446271354256);
    msg.setSource(48229U);
    msg.setSourceEntity(240U);
    msg.setDestination(17137U);
    msg.setDestinationEntity(249U);
    msg.type = 247U;
    msg.htime = 0.1446418515968786;
    msg.context.assign("SYBJOTZGBJTQNEPZJQUOBXFFWSTNEUMAIHLVDPVBKCABAOYSXLBKMWIZCAZJEUDVYWVDNHGBPQCGDODKUAFFYLVOHCZQSXZDPNQMCPZNHHGCYINLKKO");
    msg.text.assign("DRHIHGRXMEFXVJMRJQVOQVNPJGOQFNIUAGEVSDELCZTR");

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
    msg.setTimeStamp(0.9914846801872691);
    msg.setSource(29843U);
    msg.setSourceEntity(92U);
    msg.setDestination(8029U);
    msg.setDestinationEntity(115U);
    msg.type = 152U;
    msg.htime = 0.7685359213637128;
    msg.context.assign("RUONJIHDSIYBSSMEHGBGZYCWYQVKACHUNAUWTFAVCMLSVKQAKMEFNOWMBZQPFWMXVYPCSJLTGXUWJDTFLVWGKDQJXFXBZOTORTHHSNDHWSACXMUNHMOEGFDFHERXZCZFZBXWGBLGIBIDPAVZFSJORKJADYNYOKNKPWGLVAUPCRRZDCUVRQLUQX");
    msg.text.assign("VTLYKFCNPPQQIDURHJNEUWIDCAOIYJ");

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
    msg.setTimeStamp(0.4434675133796171);
    msg.setSource(61010U);
    msg.setSourceEntity(10U);
    msg.setDestination(49564U);
    msg.setDestinationEntity(187U);
    msg.command = 135U;
    msg.htime = 0.1832333116251771;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 36U;
    tmp_msg_0.htime = 0.4755274481673716;
    tmp_msg_0.context.assign("GIPUURONBRIZSHYLJEOYSPGAXWVMVZOXAVDEZEVRATIYTPKGWEIENWQTKYMIAHMHTQHLKZKYHCBFMNJUDNFO");
    tmp_msg_0.text.assign("OAWRUXKZLEQEGCTFXBTGVZARASCXYAJWPKJJYFRLGOWEEITYDQUNTELSKGNCGWMLHOQWPWSIMHQHBGDFUAFQRHOWKIKPDZCGJZBWZDSLREATZBXRXHJAVQPNSBHULOHBDRDFVMXFQIUQBZSDYRBKKDVSIMMAOHIM");
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
    msg.setTimeStamp(0.6210331109159845);
    msg.setSource(48511U);
    msg.setSourceEntity(130U);
    msg.setDestination(31388U);
    msg.setDestinationEntity(216U);
    msg.command = 196U;
    msg.htime = 0.03137330178715758;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 62U;
    tmp_msg_0.htime = 0.8645973299149252;
    tmp_msg_0.context.assign("SUYOJNBIOQTPYTNZDRZHHTRTFBGUPXHUIBNIUXXTTAWMKRMAGFXLZFWCCIVGYDIAURZCYJVAWFQLMWVHSFKMSEHILUEYROUERGASXKAIXQJWUGQSDKWHLYLNNCFHRSVVSWAFQLKXJGOEHEN");
    tmp_msg_0.text.assign("FIVUFSUEQVOMRCSWBVFPZNMPRAIGBSWUJFVMZWFGKLHHSKCRUNXKOYVHWXWDURVBXRVBKNEOQYPLNFWULPZEOZXMGJJHYQNYQYDOGCVMATECOZUDLMTVDGLZTLWULHYTSLIDDIKTPXFQAXKEU");
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
    msg.setTimeStamp(0.2022942027507062);
    msg.setSource(56840U);
    msg.setSourceEntity(112U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(154U);
    msg.command = 251U;
    msg.htime = 0.3362845530863018;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 21U;
    tmp_msg_0.htime = 0.18718900770332814;
    tmp_msg_0.context.assign("KEITCDJLZNASBMUHDXVUUBTQBDQESPPSALUXULQMXQHFNYFKMYSYBJQOZDJTHYMWWOVQISESCDOKCZKTGOPMNDNVOIGLIGMZCOYWFWNFRFQBJKMNNDKCZMIWJGJTAMGOROPVRT");
    tmp_msg_0.text.assign("MROTTLTZDSVSQQEQVKOIQBHXLUEHJCGTMYNNXNIJUCNQSHTVCKCRDFMOWWSVSUGAGDWLQCXSUTNAZRMUDARAIOZUUDDAIJKOOLRMMMMJNGZANZNPDEWAIIP");
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
    msg.setTimeStamp(0.3662799803541177);
    msg.setSource(59327U);
    msg.setSourceEntity(68U);
    msg.setDestination(16261U);
    msg.setDestinationEntity(160U);
    msg.op = 25U;
    msg.file.assign("UCCRZXFNPOJPKHPPXDRPQRPMYNPWHGMVKSZZNITXHVBJNFHMUEWYLEKOOSJUZHQRXDJGNLEOTUWBOSFSAKVFRZFIILBSBNWADAGNGMLKYUVLEREZAHGTZLTAOGYNDGSTGQBYQYWHAHHOREVFLCFXDWYLSYOXIEWMTOJHEQCZTMTTMPDADURIVZZXDWCJUEAQJSMLQJMIKBLNCCIXVMIBSDQYPBUVFVKRIACBOBIGJJXKCKSEAVQTQGWFRX");

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
    msg.setTimeStamp(0.8640937952192294);
    msg.setSource(54116U);
    msg.setSourceEntity(238U);
    msg.setDestination(30270U);
    msg.setDestinationEntity(69U);
    msg.op = 181U;
    msg.file.assign("PEXQAVHSHATNPJADPAFDQKEELLRUKFUMNBNTTDYIGGBHYUCVFMTWNSFYPRVXGQYSRNIPWCLGFZJULLGMOZQA");

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
    msg.setTimeStamp(0.5729860330385943);
    msg.setSource(1661U);
    msg.setSourceEntity(211U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(109U);
    msg.op = 32U;
    msg.file.assign("YKIFGKZPZLJAYDBACLJNPGQWUBEBFXOJQMYRWTTMMHSNIDAXUBIRVTDNXJEQGLBJCRTTFFUSPGKOATDJWZVFDEWPEGVYDIYYFNCQAHYHZAXUQCSZVAYKLIXOIZPRGVHAMCGHKHUJCLWVQSVEPNRM");

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
    msg.setTimeStamp(0.4410758905581882);
    msg.setSource(60443U);
    msg.setSourceEntity(205U);
    msg.setDestination(56581U);
    msg.setDestinationEntity(90U);
    msg.op = 160U;
    msg.clock = 0.4950369067874125;
    msg.tz = 109;

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
    msg.setTimeStamp(0.54796025683056);
    msg.setSource(5041U);
    msg.setSourceEntity(36U);
    msg.setDestination(1723U);
    msg.setDestinationEntity(172U);
    msg.op = 199U;
    msg.clock = 0.8847267207012304;
    msg.tz = -47;

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
    msg.setTimeStamp(0.7944149463106474);
    msg.setSource(39744U);
    msg.setSourceEntity(226U);
    msg.setDestination(5883U);
    msg.setDestinationEntity(225U);
    msg.op = 69U;
    msg.clock = 0.03221362384802107;
    msg.tz = 56;

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
    msg.setTimeStamp(0.7885913281122179);
    msg.setSource(50418U);
    msg.setSourceEntity(183U);
    msg.setDestination(505U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.9717030501706142);
    msg.setSource(38736U);
    msg.setSourceEntity(174U);
    msg.setDestination(48964U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.48475826705817515);
    msg.setSource(12212U);
    msg.setSourceEntity(84U);
    msg.setDestination(47862U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.6897374602086851);
    msg.setSource(60804U);
    msg.setSourceEntity(225U);
    msg.setDestination(31662U);
    msg.setDestinationEntity(131U);
    msg.sys_name.assign("JHUARFWGWQSUCTJTVRDCTPBZHVSBTSRYVVDNXNIHZCGJNGFCMIQGYYADUWEFKOXBZQYFXXPRNVLAPTKIUGNNHWLXGIDEJRWWYKMHJRYOBFILKPCGTPIEPFWAHIERPHJYQMFOTAWABLZYOVYQMBKSMESBKEFEVZPDBVZATTKWIGUQMOGZYRDNGDBUQTDLZVJBRLLOMCUHXMAFFUJEK");
    msg.sys_type = 92U;
    msg.owner = 15573U;
    msg.lat = 0.7828703288814303;
    msg.lon = 0.9109477389981511;
    msg.height = 0.35182949606624825;
    msg.services.assign("GLGIRNTUQXVOHDGEZZJSZIWLWYUDPMIVAFWTNMTSHVGDXMDPCTVZZPCCUFPNDHBBRYIMPGGCLWFPRHMLYJYAMHGWQUYXUHYFSLADNNYRQPBLDAYEQAJQOLJVOBKLJRBISEZEDEEOUJFSZQKFSIAQXKCBCIHSXGKCIPEOTPWKCJILIERZVLKTUFRMNSOBXMNSKWRUEJKKWFDTTXWMOXCOMNZRZQBUAAFQRBHGQSTFP");

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
    msg.setTimeStamp(0.2629601315234218);
    msg.setSource(47664U);
    msg.setSourceEntity(98U);
    msg.setDestination(8550U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("BTXBXUXIBZBJAPCBPCFORUWGVPRPSPHYVYSHDKNKQLYTFBKQIGEKEVEPZJUMGXAADLWUHDJKQZEDJWMCITLDFHNQMZCTXPDLCIROFZWMDXOLOVQXVUHMKMNSGTHAONOFADZGJSXRRNNJFOACHNSAFEQLQOJEPHSKDSNEYWVIMQVWBWGRBYQTBYMLSSWZLULXPGYVEKEVKIGAMQFYNCJ");
    msg.sys_type = 191U;
    msg.owner = 30811U;
    msg.lat = 0.9230858874131854;
    msg.lon = 0.28751312753848146;
    msg.height = 0.3039884925987679;
    msg.services.assign("QBFVVVHKZICAOPCNXSCIQSSJUAUTEOWQYOEQKCXNXMEAKYOIZTLPFFZHIJWFECLLVMOUGPZCANHWEBZPEBFSZRIKINVWNLTRPAOJHJIQSSSGKIUZYOUPIFJZYKWBVMTDYNJOXNSSMHDOMNVEMGUGTYHCUNNMHBRMQZGTFPRLQOIQXYCAMGAVKTUYUXRXBDMJWBRGELHPPWHXDELXTYZQEATDDDQXLRDKVR");

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
    msg.setTimeStamp(0.25783738405160905);
    msg.setSource(13950U);
    msg.setSourceEntity(120U);
    msg.setDestination(34555U);
    msg.setDestinationEntity(84U);
    msg.sys_name.assign("KXAQQCFAHTTSFKNVKADNWDGDXRHWOXYRGBZRCIXWTEXEEFYRJLSMKZDAMVRFEOJISXUPJTGEHKDRYMRBKWCQZPQAEILRMLBVJESTGZPQNZWOVNFLIBZPSDFBGWGYJBLCPUPAVXNCBBEHIRVFCJZCCWUJPUBIANMFIYTKMXGTOL");
    msg.sys_type = 0U;
    msg.owner = 13372U;
    msg.lat = 0.35035460981068256;
    msg.lon = 0.5172432005760138;
    msg.height = 0.9636657838076286;
    msg.services.assign("BENCZDCQIKGLMEHAYKFXOCTNLVETBNBMKOFQYAKHUSRFXSZJYSJOXNBUKDGIMVIFBMOJWNVZMSDYWGLHHHMIWPIYSQGROFJCHWQFPTOUAVBBELHAQGCIKAZHFHKQNOTGPVMDKIYSABLISLGAJIOUTYNXVQNPLXDCZPBXYRIPEMFJTDWPPJEOLTURLOXSFDXFYZCWSCETJWUUV");

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
    msg.setTimeStamp(0.9676415257428491);
    msg.setSource(11635U);
    msg.setSourceEntity(133U);
    msg.setDestination(60141U);
    msg.setDestinationEntity(85U);
    msg.service.assign("ZAYODQVOXIKDCFMKHHPYIKIQJZSLLPUVDFPLO");
    msg.service_type = 157U;

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
    msg.setTimeStamp(0.1953347859997545);
    msg.setSource(11300U);
    msg.setSourceEntity(82U);
    msg.setDestination(62008U);
    msg.setDestinationEntity(76U);
    msg.service.assign("SUYLLDZAKURZAIHWICGFLZNBNDOCHUUYKZNWYVSEPXYCQPHGLFFSGNURGHVQOEVMGSUAVAMFQTLULWFRFFDPXNRKIKEUESKVKQCPWEYICJZWXUBZNBMTIY");
    msg.service_type = 123U;

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
    msg.setTimeStamp(0.18886087162711296);
    msg.setSource(36823U);
    msg.setSourceEntity(153U);
    msg.setDestination(1354U);
    msg.setDestinationEntity(23U);
    msg.service.assign("IVIHLCAUUYJJQSBTDZXCIQSDPVKDUOKUFXCCMXOUEMDDXPEGHEVNUSYCIYDAMBNGTUXLMKXVTPVHYTNHURCNDEFDJRSLO");
    msg.service_type = 107U;

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
    msg.setTimeStamp(0.12109608098331792);
    msg.setSource(58731U);
    msg.setSourceEntity(164U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(173U);
    msg.value = 0.1837273745058885;

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
    msg.setTimeStamp(0.9961574696389002);
    msg.setSource(31270U);
    msg.setSourceEntity(70U);
    msg.setDestination(1423U);
    msg.setDestinationEntity(171U);
    msg.value = 0.989949068271987;

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
    msg.setTimeStamp(0.9326341762590326);
    msg.setSource(6768U);
    msg.setSourceEntity(225U);
    msg.setDestination(32287U);
    msg.setDestinationEntity(30U);
    msg.value = 0.05145269766737737;

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
    msg.setTimeStamp(0.14168753771008247);
    msg.setSource(49403U);
    msg.setSourceEntity(55U);
    msg.setDestination(10313U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6669618466731165;

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
    msg.setTimeStamp(0.8591428189516804);
    msg.setSource(61384U);
    msg.setSourceEntity(160U);
    msg.setDestination(5855U);
    msg.setDestinationEntity(122U);
    msg.value = 0.021877095194347995;

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
    msg.setTimeStamp(0.1365056757481129);
    msg.setSource(12693U);
    msg.setSourceEntity(15U);
    msg.setDestination(12608U);
    msg.setDestinationEntity(93U);
    msg.value = 0.370892573830953;

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
    msg.setTimeStamp(0.30451382651473546);
    msg.setSource(36942U);
    msg.setSourceEntity(193U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(192U);
    msg.value = 0.3697442819872474;

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
    msg.setTimeStamp(0.7484958759129052);
    msg.setSource(58053U);
    msg.setSourceEntity(103U);
    msg.setDestination(22154U);
    msg.setDestinationEntity(213U);
    msg.value = 0.14697152103785027;

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
    msg.setTimeStamp(0.580281335700077);
    msg.setSource(15052U);
    msg.setSourceEntity(12U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(61U);
    msg.value = 0.4729955797488179;

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
    msg.setTimeStamp(0.5270276514707563);
    msg.setSource(14036U);
    msg.setSourceEntity(91U);
    msg.setDestination(55021U);
    msg.setDestinationEntity(123U);
    msg.number.assign("FLLPNUIQOSWEFJXCAPGYZLBCJEWZDJVSZEOYGGCLRILDQKKQQNVDPYZGEGDZZTUERJFCZJAPNWFDNIKVALWELDVMZRPTTKQJHONKWNHCPBWSNGTUBQFUUBEHFIERIDFYCPOIHYZGOAXITQOMOGWXLIUS");
    msg.timeout = 48911U;
    msg.contents.assign("KRCXOWQWCHLIKJLEPUKHYNLVRTDGRZZLEKMYDDXVRPGKXBLOOBPBWTSG");

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
    msg.setTimeStamp(0.3099959481402349);
    msg.setSource(6726U);
    msg.setSourceEntity(160U);
    msg.setDestination(53180U);
    msg.setDestinationEntity(213U);
    msg.number.assign("DUICPRACUHSNOOGLMK");
    msg.timeout = 16858U;
    msg.contents.assign("COPOAUJNTHGUNKPTYVYZL");

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
    msg.setTimeStamp(0.17499218886135925);
    msg.setSource(49815U);
    msg.setSourceEntity(254U);
    msg.setDestination(42305U);
    msg.setDestinationEntity(0U);
    msg.number.assign("EXFEMMGNKPDUCDMJYYSXMLIVRRPOWZPYEHAEHUCIUYNHWUJWSDTTYAXSTTGNBFILXTGBKUBNNQBNZYFBSVQIBKCDLZPPVHFREULIPGAWVSGNNELMDFHQV");
    msg.timeout = 19958U;
    msg.contents.assign("VSEVAMPQGPFGSOLDNAKSJWNFBLQZHVEMQIPDSXWZQLHMGEOVUZIZAODAZCGUFWRWNYARPHUQHBYBNLKQGYMEJROOGAIWZTEIKBWHJQDBCERRHZEVLRRXQOXKLXMCPVBIJYZYYVLZYISIDHMPFWWTFMFHMXXPRJCSOAMFLCGJEWNNAUONIGIBKURGVSCKDOQYJSKXJCNFKKDTFRIEPNUHAXGLZAHUPOBBUTUTQPLWXCBTYDUEJVTSMTTKJCNTS");

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
    msg.setTimeStamp(0.5839059857730315);
    msg.setSource(19194U);
    msg.setSourceEntity(21U);
    msg.setDestination(27525U);
    msg.setDestinationEntity(84U);
    msg.seq = 3020934711U;
    msg.destination.assign("NLEOJEBBFPEYHOPWFBQJJCRQOCSLSDKCHLYDEXVGVYWMITJZULCZMORQKAFQJZANBCMGVCSQYTCBFQGIHSUADEEOPVYRRPWRUJNPWPUCLADHOIHKVIHUMYIWBPJPVWJDNPZQANKFTHKGSMMXHLSKVSZAYKTGMKWFOUZVMWXCZFHZEXEDUYLXLFREXKQSTGITIKXLNRFRTYNISPDEYONAZJBIXZTTRDLVJSXQVF");
    msg.timeout = 46778U;
    const char tmp_msg_0[] = {-14, -45, -95, 111, 44, 84, -94, 91, -89, 85, 31, -57, -82, -65, 77, 99, -14, 10, 115, -100, 46, 25, 35, 113, 121, -39, 76, 121, 100, 4, -28, -104, -70, -83, 124, -4, 51, -50, -8, -20, -113, -106, -92, 1, 97, 117, 60, -58, 69, -69, 48, -68, -7, -101, 14, 28, 84, 23, 67, 43, 25, 81, -125, 102, -116, 99, 70, 60, 95, 91, -91, -121, -112, -53, -59, -84, -8, 16, 78, -72, -38, 26, -69, -52, 17, 112, -100, 54, 20, -102, -111, -90, -61, 18, -112, -95, 36, -18, -22, -52, 52, -73, -39, 35, -58, -45, -13, 11, -10, 74, -116, 33, -92, -43, -127, 13, 83, -112, 110, -102, -89, -73, -73, 5, -70, -1, -70, -4, -23, -116, 70, -82, 102, -34, -61, -69, 126, -22, -103, -95, -16, -53, -9, 44, 117, -22, -16, -86, -42, -114, 79, 59, 81, 76, 48, -32, -120, -12, -8, -79, -9, -61, 52, -8, -12, -44, -45, -72, -71, -2, -12, -21, 19, 83, -74, -120, -76, -79, -6, 118, -66, 61, 84, 19, 52, -91, -108, 44, 70, -122, -65, 1, -57, -98, 0, 27, -81, -28, 0, 87, -37, 40, -116, -127, -30, -119, -25, 48, -102, 61, -128, 37, 6, 96, -68, 94, 57, -67, 58, -99};
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
    msg.setTimeStamp(0.7572880628322236);
    msg.setSource(2170U);
    msg.setSourceEntity(1U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(211U);
    msg.seq = 962994542U;
    msg.destination.assign("BLNTOUPLMXWSILKZWEPAXGAVECICRKHDNQEZMCWSRYAZLAIJSBSUBTQJCIKQKHRIXQJBZEPEFNTUFOWGSXKQBYOUXLNJKYMCJVTOIFEXYXPJMUDBGSGJFSWHLLCGPQAFVVPPMYCFUBKKCADGVSXIZBNWVNIRFRMANVXTYOXHUFERIVDE");
    msg.timeout = 2817U;
    const char tmp_msg_0[] = {-39, -6, -107, 26, -62, -32, 55, -124, -28, -28, 104, 19, -10, 9, -85, 63, 120, 95, -117, -121, 4, 23, -69, 38, 90, 98, 83, 7, 65, -60, -47, -124, -39, 81, -52, 87, -88, -114, -50, 21, -88, -20, -57, -109, 102, 107, -18, -10, 16, 102, -90, -22, 66, -81, 121, -68, -90, 10, -114, -43, 97, -111, -84, -17, -58, 111, -10, -51, -110, 18};
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
    msg.setTimeStamp(0.3274149506503077);
    msg.setSource(32017U);
    msg.setSourceEntity(132U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(47U);
    msg.seq = 3589582095U;
    msg.destination.assign("TKPEZDVFZHTADDQSBFLJUZSUVCBCHJZMXTJOBPSUKWEQZVWQGDIZTXWWNVREHJJNKXBJFLAQIFNORRHZDVDXQUGCKGYHLPFKGSOMPMTRMRERIMQCXTVIYQSIBIAOYOOAFVCIXPWTXAIMDZTGLPDCMHUCVHMAYYLSFCSNNNWTWENPHQBEWEUZAUW");
    msg.timeout = 32386U;
    const char tmp_msg_0[] = {-36, 37, 35, 28, -54, 30, 31, 8, 49, -38, 31, 91, -48, -77, 32, 125, 88, -42, -75, -9, -39, 122, 55, 83, -68, 1, 96, 126, -73, -59, 8, -79, -88, -121, 85, 15, -59, -96, 116, -73};
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
    msg.setTimeStamp(0.7813515675603144);
    msg.setSource(983U);
    msg.setSourceEntity(248U);
    msg.setDestination(27344U);
    msg.setDestinationEntity(158U);
    msg.source.assign("NHIOUFRSABMJOGHKBENKVHYFLQQNWEMDDDBYQRFNIHTSJIATDIZCZRFWWOQGWLKPEGJHUZVCJORPVKFTQUKNXVNWUSZVXMEVPPBMOSAGBDZPGLWESMOLDNRUCKTWAITPEMDIZWUBIOYXSOEXDJLVMDUNJTQI");
    const char tmp_msg_0[] = {79, 73, -32, 111, 72, 36, -46, -100, 8, 31, 28, -55, -109, 124, -8, -89, 24, -70, 107, 73, 12, 114, 23, -41, 57, -35, 118, -90, -3, 113, 17, 93, -63, -127, -94, -53, -56, -127, -82, 47, 49, -16, 55, -82, -77, 10, 121, 17, 43, -54, 27, 96, 25, -7, -120, -104, 102, 18, 87, -9, -58, -96, -32, -64, 69, -63, -95, 1, 95, 80, 91, 101, 83, -62, -30, -58, 7, -34, -59, 16, -14, -105, 75, -92, 60, 72, -86, -92, 60, 59, 118, -108, -15, -23, -56, -77, -71, -37, 119, -9, -111, -3, -32, -79, -95, -128, 65, 109, 103, 105};
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
    msg.setTimeStamp(0.703494280388303);
    msg.setSource(412U);
    msg.setSourceEntity(197U);
    msg.setDestination(57235U);
    msg.setDestinationEntity(43U);
    msg.source.assign("UPSMCFHTXDWKLLQVIZVUBUAHJGXYZCJSAAFOFDHREFTJDTWLQXLGPAJDKODRRCNLBZZGEILYAAVZQINTEXMDXCMSAWYSUWQLIJVYJSPFXTPDEOBMHCC");
    const char tmp_msg_0[] = {100, -97, 89, -82, 47, -94, -56, 43, 124, 8, 3, 82, -9, -97, 63, -92, 60, -37, -77, 109, -14, 15, 103, 104, 88, 31, -110, 102, 12, 115, -32, 92, -68, 92, -109, -128, -56, 89, 51, -25, 10, 9, 69, 46, 21, -27, 123, 25, -56, -81, 121, 37, 111, -88, -123, -2, 126, 115, 119, 91, 105, 12, 54, 69, -57, -68, 47, -34, 78, -112, 3, 110, -60, -49, -10, -43, 74, 9, 22, 37, -113, 3, 34, 71, -14, 9, -41, 88, -104, 89, 119, 15, 61, 64, -93, 105, -29, -13, 55, -73, 44, 7, -64, 94, 113, -19, -24, -58, 20, 91, 56, -116, 78, 4, 65, -114, -51, -85, 70, 40, 120, -16, 120, 93, 83, 61, -23, -96};
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
    msg.setTimeStamp(0.01092374306149424);
    msg.setSource(26848U);
    msg.setSourceEntity(27U);
    msg.setDestination(46669U);
    msg.setDestinationEntity(12U);
    msg.source.assign("GCZXPHWEXHUTKWFQHBHQGYRINYNLNVLQOALSZBJVQJOXOIVGMALBIBLAEQRMWYYHSETRFAQBCKWIRAOBCGWUGICIEKPXPNZBUTNMWDRPMVJBTEMATZUKHNOHCVPCSSRCNRGXWNQAZDDODDFCVPQJOLGYPJIFQKYUFUYWYERIAUZLOJGNPCFZFXMUKTBJSUVKEFGJKSIISLQELSDKMGCPXFYHSWSMWDXODDXVUTVJYENBHAR");
    const char tmp_msg_0[] = {-32, -31, 77, -93, 31, -34, -105, -108, 97, 24, -48, -35, -39, -26, 101, -97, 21, -57, 50, -81, -113, -16, 10, 57, -38, 84, 66, 22, 105, -21, -31, -83, 117, 41, -51, 78, -82, -46, -81, 49, 28, -83, -110, 4, -118, 43, 117, 55, -79, -85, 96, 3, -10, -25, 103, -92, -35, 79, -89, 9, 3, -80, 77, -47, 11, 59, 72};
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
    msg.setTimeStamp(0.5882882406658573);
    msg.setSource(3428U);
    msg.setSourceEntity(194U);
    msg.setDestination(50636U);
    msg.setDestinationEntity(221U);
    msg.seq = 3884210881U;
    msg.state = 151U;
    msg.error.assign("MVANWBZGNJITUSCHQRILELDRPNXPCDVCOXOOUNCHHESSRHBBTBPARCMUENIKYRBAZDZWGPUMLICKTVVJDENGLEZZJKEGBTVSNTLOALFKDQCPHQAOTDBZRXKFJJEBTVERIZWOFLZNKHJIYWWPWFKJCGHIQYGAPMIPAQAXGTUYUDQSVLTJSMXMFRMCJWYUXEDHBNWQMHSFXVRFNQPUTMLMRYXZSYKVIFWAVUJASOH");

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
    msg.setTimeStamp(0.4906666581445194);
    msg.setSource(60975U);
    msg.setSourceEntity(186U);
    msg.setDestination(26482U);
    msg.setDestinationEntity(11U);
    msg.seq = 1057737112U;
    msg.state = 184U;
    msg.error.assign("HVEFETISJHTTEDBSZYUUUWYVWOPTKFUQVEQPNHZLZAXODQRYYLNCFGANNWVYEIIZPHCQNCVHZKOBMDESOJNKORCVXUSMAXKWLAECMMROPHEXKQXJJABTWLFCGDIFQYHUBGTNDQIKUDFOKTSCDLRWHDLGPYLM");

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
    msg.setTimeStamp(0.463537091611687);
    msg.setSource(12090U);
    msg.setSourceEntity(173U);
    msg.setDestination(57799U);
    msg.setDestinationEntity(17U);
    msg.seq = 2254934644U;
    msg.state = 68U;
    msg.error.assign("UCXRTHALOSUXUDWQIIIHNSQCNQMDVYRKMKTCQMBTZQUFWXEORHHKBBRLKHZGSWALOUHZGRIZCXNVWBZBDTUNMENPVQJKVARHCJHTMPYYGQRYLFYFRATLRUNIWESSKRON");

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
    msg.setTimeStamp(0.8380871667371377);
    msg.setSource(47715U);
    msg.setSourceEntity(172U);
    msg.setDestination(58430U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("SWZCPFLXBRRFXSEMYQZIEAPOPIHGIQGUGVJMMHRSRTFXJCXHEETGRGKDAMVYSUEVSLNWNOJAWOYCTSUDCBDIVKQYSJIAIHOEDMYRQFXBZPZKUXTQZBDKNEUJCZTWCGABQUODPYLB");
    msg.text.assign("KSPMTJPTUNFFUZGMQCKOGIOQLIUGRPBNLPVRJCDVGWDCDKWDFFJYOVQQDXWTVIRUHDJYMAGANZBNYRVEYUMEYKBRPSLTHCLJFHXKILBIRWLARCIUOMDJUBVTJGBCAKYEEKLSVNZNBOQXPSQVCQDZFHMMFSJITOYHLAZNOZXRXFWYSNGZBJUEVXEPJXWHARVAIGQPDTEMC");

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
    msg.setTimeStamp(0.3799628457070072);
    msg.setSource(20568U);
    msg.setSourceEntity(8U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("EJSYZLOPAZWBZICEVJAJIMZNRCVTXYMZVNHFFGPMOZCSMYBYFOSUVYXVFBXFRQMUINFTYJBGTJCUEXROGOVHKEOCMNQOPAQVCLVCZZQGBJRHPCTKQYRPJUTVZBJTKLIUOYTUFUGIGPGIECTVKQDRBLFNPMHRKIHESJWXLBONJHDISHRYKAZEGDDWPHQDIQQLLWKHSSRAWDEBGCLDNWFTNANSXXKOWMQIAXLUSEAMDKUPATRWP");
    msg.text.assign("KTZSYQWRQUPAHFRATEUZPDBEOMCWIPPHZZCM");

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
    msg.setTimeStamp(0.9222506265269155);
    msg.setSource(29248U);
    msg.setSourceEntity(42U);
    msg.setDestination(37621U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("BZTUXATFCOEMONODJEINXAZLTRLULZSPRWJWGWBCQBVXPMSMTAXHLLQREKLCSKJRKOKEZBNBFFIMCCIESKPRHZJDPDHLKSLUMBZPDOMOQCKFBVFSAVDPPMLYFYVKHGTXDOUIYLZHMGYFZQIVSAWPYEAOHEWQH");
    msg.text.assign("WZYNBAQXNRKPXGWCUVFALB");

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
    msg.setTimeStamp(0.82244139731261);
    msg.setSource(36173U);
    msg.setSourceEntity(23U);
    msg.setDestination(4902U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("RPDXCUXREWDURMDJKBMHIFZPCSLLNXBOUEVLQPVLMNCESXODQODAFDWQPAZACKNQDSLFIERMFDUZYGKFRYHJWXGMZGVGCKUWJALCBYEGTVIEJIKUHOYYSQEPLPLPBZKMJAYTDZ");
    msg.htime = 0.4042642611227466;
    msg.lat = 0.30655166701329073;
    msg.lon = 0.3784623220229877;
    const char tmp_msg_0[] = {-34, 108, 7, -43, 79, 114, 44, -86, 38, -65, 84, 18, 40, -70, -37, -35, 29, -11, 73, -26, 25, -60, 76, -37, 110, 93, -33, -55, -93, 16, 8, -98, 123, 121, 41, -109, 52, 19, 59, -104, -56, 1, 123, -121, 123, 50, -28, 105, 33, -36, -20, 58, 66, -60, 60, -72, -6, -23, 36, 98, -12, 115, 93, -32, 105, -111, -9, 119, -23, 99, 111, 39, 62, -52, -17, 58, -20, 120, -74, 42, 85, 101, -5, 116, 77, 99, 31, -115, -127, -125, -92, 84, 86, -75, -84, -26, 67, 11, -82, 79, -62, 95, 44, 106, -38, -10, 99, 23, -125, 74, -79, 114, 2, 29, 17, 40, 85, 89, -114, -98, -89, 25, -117, 28, 21, 6, -42, -112, -118, -71, -125, -47, 77, -76, -88, -104, 24, 81, -55, -120, -79, 101};
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
    msg.setTimeStamp(0.2716112646789757);
    msg.setSource(19216U);
    msg.setSourceEntity(8U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("TEZVUVRFXNQVZJXFSFDWQLZG");
    msg.htime = 0.8503490215232643;
    msg.lat = 0.1188702400101701;
    msg.lon = 0.7149775596408164;
    const char tmp_msg_0[] = {-35, 89, -118, 64, -127, -80, -4, 89, 44, 41, 114, -16, -55, 52, -101, 62, -90, 87, 42, 44, -45, 3, -48, -100, 16, -105, 109, 116, 107, 119, 11, 125, -68, -13, 81, 46, 76, 93, -80, -2, -108, 34, 40, 108, 28, 91, -56, 81, 17, -16, -38, 4, -16, -100, -23, -28, -89, -9, -94, 60, -30, 90, 68, 104, -25, 114, -64, -92, -41, 3, 109, 75, 64, -49, -10, 29, -32, -94, 56, 18, 83, 61, 89, -84, 5, -11, 42, -98, -55, -27, 107, -32, -25, -125, 40, -19, -107, 61, 54, 89, -34, 55, -7, 110, 22, -71, 95, -35, -61, -36, 111, -47, -23, 77, -11, -92, 43, -29, -38, -111, 35, -3, 25, -62, -70, 85, 58, 36, -74, 112, -89, -85, -17, -11, 45, 93, -99, -54, 84, -109, 6, -73, 40, 112, -39, 52, 29, -108, 85, -38, 20, 115, 12, 119, 124, -34, 21, 62, 32, -79, 102, -69, -49, 17, 28, -103, 116, 8, -39, -110, -77};
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
    msg.setTimeStamp(0.7039774156745174);
    msg.setSource(19244U);
    msg.setSourceEntity(39U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("GMDSHQGTFLHHBYEDJPICKUNPAGLCLWZIUSDYWRMREPKSBSRQCIZWNAUXQAMTUVASAIYPYCBQNDGKTOXAFBKLOMMYKQBBVWZAZYOEXEJLWJMXEPFTDQNLOGCBQFJCZNNFHUVQITJMMJRIGKNOXFJVPKEIWMYWLAEZRVLZHGQMWFOXCCPRDRPVBHJSOFDGNGQSUHONEHOHVIXIUZTXTBASHUCJDUXVUEWYOCVAPTYGRSZIKLLTXYKEFWPNRDDSKF");
    msg.htime = 0.703354850599319;
    msg.lat = 0.26355345802065666;
    msg.lon = 0.08831347945982149;
    const char tmp_msg_0[] = {-53, 116, 120, -65, -118, -85, 58, 77, -109, 111, 27, 96, -120, -38, 56, -109, 119, 41, 121, 45, -17, 108, -53, -117, 53, 86, 110, 51, -98, -93, 51, 109, -40, -31, 4, 70, 99, 95, -50, 26, 54, -111, 89, -4, 61, 90, 107, 26, 51, -116, -105, 60, 44, -86, 74, -126, -1, 90, -103, 104, -101, -99, -63, -36, -40, 36, 56, -84, -123, 52, 36, 68, -61, 11, 44, 44, 1, -110, 32, 16, -101, -65, -70, 53, -22, -12, -105, 32, 120, 114, 100, 121, -118, -60, 119, -88, -27, 97, -46, -72, -67, 42, -23};
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
    msg.setTimeStamp(0.6705476351896451);
    msg.setSource(59037U);
    msg.setSourceEntity(241U);
    msg.setDestination(53057U);
    msg.setDestinationEntity(91U);
    msg.req_id = 47793U;
    msg.ttl = 35902U;
    msg.destination.assign("PGMRIYHIPDZKKJQUJYARDNIUTWFGDPYMGMVYZDSGNXAFNLFOCVMRQYRYEOXRTHENIIPBJNHUENEBWCZTBBTOSKWQAODZQJCHTVGJZPLYSHEGXTUTDQIAJFZKKEHYRGGQTLJLPVVBEPJDMCWBRQXQWVUAHAPHYFICCSLRMSDFNDQAHCKNLCOZLXBYFXIOLKBBEBUKJIHZNSWU");
    const char tmp_msg_0[] = {11, -53, -70, -19, -5, -58, 81, -4, 110, 103, 17, -125, -26, 59, 0, -16, -107, 100, 18, -39, -99, -73, -85, -34, -111, -57, 102, 32, -92, 8, -100, -84, 97, -73, 79, 117, -66, -61, -1, 60, 57, 93, 12, -35, 69, -39, 53, -107, 69, 61, 98, 112, -12, 40, -24, -9, 68, -106, -54, 32, 52, 33, -67, 90, -44, -57, -39, -47, 125, -90, -104, 41, 21, 31, -126, -87, -26, 95, 37, -38, -43, 28, 83, 71, -76, -91, 117, 87, 18, -60, -10, -92, -21, -43, -38, 99, 114, 7, 68, -125, -35, 33, -94, 105, 1, -14, -67, 58, -40, 111, 87, -112, -115, -18, 25, -41, -7, -84, -50, 56, 46, 76, 98, -15, -32, 49, -116, 69, -125, 125, -83, 50, -4, -75, 124, 30, 8, 22, 77, 97, 105, -104, -100, -104, -92, -1, 53, -3, -64, -16, -1, 99, 60, 51, -75, 118, 105, -49, 120, 45, 5, -51, -30, -116, 79, -80, -32, 49, -11, 12, 39, 54, -25, 24, -107, -10, -5, 14, 57, 96, 119, -48, -60, 19, -16, -32, 120, 115, -52, -31, -31, 94, 21, 95, 65, 123, -73, 20, -31, 91, 107, -45, 112, -77, 78, 89, 98, -125, 41, 46, -20, 116, -116, -127, 36, -113, -2, 106, 90, 52, 59, -46, 15, -2, 114, -31, 92, -105, -97, 28, -90, 110, -51, 24, -26, -107, 51, 96, -59, 104, 59, -118, -111, 78, 104, 3, 5};
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
    msg.setTimeStamp(0.2543681192909162);
    msg.setSource(17471U);
    msg.setSourceEntity(68U);
    msg.setDestination(19518U);
    msg.setDestinationEntity(61U);
    msg.req_id = 43647U;
    msg.ttl = 28050U;
    msg.destination.assign("SSTTUWMVHZQURY");
    const char tmp_msg_0[] = {-59, -44, -6, -128, -23, 125, -124, 27, 82, 36, 35, -29, -24, -15, -102, 96, -41, 107, 112, -14, 14, 88, 76, -89, 36, -42, -91, -64, -6, -39, 20, 48, -60, 0, -86, 90, 42, -84, 34, -59, 26, 72, 92, -25, -121, -110, 78, -79, -101, 126, 96, -101, 49, -3, 124, -47, -5, -69, -29, -55, 89, 3};
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
    msg.setTimeStamp(0.06969535010120087);
    msg.setSource(64559U);
    msg.setSourceEntity(223U);
    msg.setDestination(63543U);
    msg.setDestinationEntity(98U);
    msg.req_id = 18069U;
    msg.ttl = 63476U;
    msg.destination.assign("SPVANBHOQKRVIMOBBJCILYGTDCHXWIAZLDVGZOVFAJSCOVZWJQKJXKDYDEPCWDTUVWAKSYNPFLHVAJXGOWAPLRETWESMCINHYGWCVTUHQQGAIZEGSILPHEBRISENMKYIL");
    const char tmp_msg_0[] = {-3, 105, 118, 63, -120, 47, -43, -16, -53, -74, 102, 46, 50, -70, -28, -86, 47, 35, -13, -13, -63, -13, 85, -81, 84, -28, -2, -85, -65, -98, 66, 26, -73, -4, -72, -32, -74, -44, -126, -48, 46, 110, 102, -108, -11, -59, 94, 34, -41, -58, 93, -65, 111, -65, 113, -109, 113, -68, -4, 91, 64, 113, 6, -59, -105, 86, -59, 53, -83, 61, 56, -19, -125, -18, -107, 78, -69, 88, 116, -49, 6, -93, 32, -80, -55, 32, 49, -87, -91, -103, -13, -65, 19, 84, -93, 86, -12, 10, -6, 42, 38, 39, 41, -28, 85, -104, -108, -38, -57, -128, -37, 68, -20, 83, -59, 32, -122, -10, -53};
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
    msg.setTimeStamp(0.9734884716619754);
    msg.setSource(39495U);
    msg.setSourceEntity(226U);
    msg.setDestination(42416U);
    msg.setDestinationEntity(127U);
    msg.req_id = 9255U;
    msg.status = 136U;
    msg.text.assign("UYHPQFDWJXACGXIKBLBNIRZLDWJHMLWVDXARCSUINCTDTRUTNVIRGYJXMOFMWWVUPOTGSKCOLNEKSTJAN");

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
    msg.setTimeStamp(0.6367658920227697);
    msg.setSource(8148U);
    msg.setSourceEntity(32U);
    msg.setDestination(2705U);
    msg.setDestinationEntity(90U);
    msg.req_id = 27043U;
    msg.status = 226U;
    msg.text.assign("UZTXEBLXKAUMCEPSTUHWSRHMCZLTLINEJHCZZRKZJYSMRYDQMNVFYWTDIVOIGVVBCMJFZKGDKTRFEVNJBPFUHFNXFWQGVEOHIAEXZADKTMMGLGLKOWYHLQOUUSBQISPGNMLKWXVCWVFDATYRQPYSLYRFCDJMKXWGDICWOSOQALQJZBJGEJRPXHQQRABOOYPUGUWETVFOIBMFWRSXVEQZPUIPNJCTAUPDLAX");

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
    msg.setTimeStamp(0.9385031295111664);
    msg.setSource(11853U);
    msg.setSourceEntity(219U);
    msg.setDestination(40928U);
    msg.setDestinationEntity(2U);
    msg.req_id = 33842U;
    msg.status = 21U;
    msg.text.assign("QWIZNSQOYADNZKWKVENRXIBZHMFNTWNJHLYIHXALPABGMWRVDBPLKDLSCLSBOLDEDYZRASKLAGRHCGIUAPJBEPKLKFQUT");

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
    msg.setTimeStamp(0.029464698302800962);
    msg.setSource(63651U);
    msg.setSourceEntity(54U);
    msg.setDestination(24256U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("YPCFFVUIHAULAAUPGPBCSOCQSXHRDMICWFJSIJPGHBDXRFVORLLMJUZJNYTANOWDHETKGBPIPKYGQEBRUQDMMLVNCHCNLTOOIVSMBVLYEHLJNBRXVITXPQTCFTTECSYVXKKZSDVYHWJSIEDRZJLVYTMHLZMISJPKPKDYKO");
    msg.links = 1839374053U;

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
    msg.setTimeStamp(0.02631737464190731);
    msg.setSource(56288U);
    msg.setSourceEntity(160U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("TUHTSVJQWPCOSKCBBJQSNSNJTYI");
    msg.links = 358786307U;

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
    msg.setTimeStamp(0.9920043803332131);
    msg.setSource(42500U);
    msg.setSourceEntity(164U);
    msg.setDestination(18910U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("VDOOCSYTNEWWOIMSGNYOFVMAKZTQHKEHUWHDEVVSXWNXVKVNKPTCTFAY");
    msg.links = 103805675U;

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
    msg.setTimeStamp(0.029546313667852764);
    msg.setSource(57662U);
    msg.setSourceEntity(131U);
    msg.setDestination(30186U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("KVTHBDMITWXKGLCYXXQCOPVQCIPEBQDKKLZXSPMHFOMVJMGICIUKLBOSWANJGEYEHPISYWNOQWWIINDVSFFNVZNQRTHNUFOAOCNRAJNGRUBRHQWHBBXFIUHODRXOLLAUCRCGZGPMKTHOAAGIEADXAXBSBVCDJ");
    msg.action = 243U;
    msg.grouplist.assign("KWMTUALDYFVDFKSERXZCOBQIJRSPHGVQPZIDHAZYWASYGRPGXSWFZZSMENYHYNKIVEPLQIJDAUNZUCVOVFTDHBXYOMWGLPJDWMZROBYRHJLQCKGEBCTRZIEBVMDCNOTHCRIRTXUAEWBQXHHABPASKQFGGAFCKYMJJWFPNNQNESFCMTVUYZVQPQUNZLDLMFSWOUTAMNGPXLJSUXBKETDFPUTICMVYHOGRIBKWOJXDANC");

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
    msg.setTimeStamp(0.6408870416534316);
    msg.setSource(63086U);
    msg.setSourceEntity(109U);
    msg.setDestination(12558U);
    msg.setDestinationEntity(159U);
    msg.groupname.assign("BUPSXHNNCTYPHISCWUVAIJXXLKMJXQMCSUSWMSWOIAZYDUQROZGFLTKCFUKDIBBEDKWMDUAOYSHHAKVUIPRVEGSALLRFNDOEAIGFTDJVZPXJRIZDGPZQGYMIOXPOPTMDLVYJRCGQFNEGZCCDFORVWEKRMBJNIQHXVKUNLIERORQAWTTZLQVYPQHKSFYFTXQRLNBJAAUKKLWVJHOWHZBAXCUTCSNJBENCV");
    msg.action = 100U;
    msg.grouplist.assign("GYHDDCUEWFPRNQAKGZSPHKCLIQBNBTJHEQRMLBGIYFKSEDDEOIMGUABMLSSMJBZPWFDIVTBIAXQYQHGYZPVYKKXGGBNECTNNIQKLOFIZXUNOCQCNDWNEJTAZPJCWUSXYGLAMVVWSVBWTTACHKGOR");

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
    msg.setTimeStamp(0.43625770866711333);
    msg.setSource(24109U);
    msg.setSourceEntity(124U);
    msg.setDestination(65368U);
    msg.setDestinationEntity(233U);
    msg.groupname.assign("BYFWDWMDVTPJSTXFREWVFYQYBJIIIMEXFCXXPSNLQVNNOGQIZAHHYHSNZPOCLZHOFREFQEFTDCSOKZLTTDAHMXYKJOOWHUANFLTNTJNPEXLLIMMPCDBWJIWUCVSVHDAGGUPERGPUZVBJKZQACLKWGJRXSAYFRMUADXBBHUSIQDHTCAEXWVMIMOSDQNBSTKZNUSYZGRBGQJHOIZAGLUGF");
    msg.action = 68U;
    msg.grouplist.assign("LITLXSLPTFOJTPDXADXGANTYVPNVIPCSCUAIBVREUYEFEGLMYJGUZGNDVNGSVHMWAJRCIWCKTQSEYRUUBORPRVRFXXLYIDTOEUEIHIHWBXQAPQJZCKQFMACQJSHWZRGJGNETQKYRJMGODEZNFHFLWNDNLJHCEUHSPIMKBDTSDKWBJCVRIZKZUMTQFUZQKMUCEAVSCDKWWKVXR");

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
    msg.setTimeStamp(0.23030134118243373);
    msg.setSource(57164U);
    msg.setSourceEntity(122U);
    msg.setDestination(23055U);
    msg.setDestinationEntity(53U);
    msg.id = 149U;
    msg.range = 0.3014776382992147;

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
    msg.setTimeStamp(0.13705108949392475);
    msg.setSource(32898U);
    msg.setSourceEntity(42U);
    msg.setDestination(54130U);
    msg.setDestinationEntity(205U);
    msg.id = 113U;
    msg.range = 0.1400362302317928;

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
    msg.setTimeStamp(0.4093812254068565);
    msg.setSource(10430U);
    msg.setSourceEntity(50U);
    msg.setDestination(40851U);
    msg.setDestinationEntity(87U);
    msg.id = 249U;
    msg.range = 0.54895091412407;

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
    msg.setTimeStamp(0.43328441132568674);
    msg.setSource(55552U);
    msg.setSourceEntity(0U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("YGDRJLEIBTPWERTLNWCCRWXYFECFFNKNNLDCKHFEAJGNIPKRONDQIKQEMOJTAIHMMOXSGSWOJYCUNDIFMZTYGNDLPQUCZAGUQHVOEWZVCKUCVTAYUHCKHSDVOQARAVZRRMOGSWJERDLEHUCJIMOSVBPUQGXWOZXKPVYBIJLZIPBUXLSTWMGHBNBVFVXPLYBLJRASTWTZMBDPSODQJBKAXXA");
    msg.lat = 0.41008703989055706;
    msg.lon = 0.9758933379853286;
    msg.depth = 0.1636007088958079;
    msg.query_channel = 241U;
    msg.reply_channel = 122U;
    msg.transponder_delay = 129U;

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
    msg.setTimeStamp(0.774593029503622);
    msg.setSource(8970U);
    msg.setSourceEntity(21U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("FUMFSWXDMWTNJCAHLFHRDDRVLHNXQQKXZFVUHJKAHKAKNCBSGRGXPPEKSGMYGUCHAQIDTVENTOKVASAOERIZTHTRMEHLMYUDRJTOZMZOLWXZWBVBPVLNYCELSIRYBZWG");
    msg.lat = 0.23195533490233033;
    msg.lon = 0.649080979584764;
    msg.depth = 0.7111552214082963;
    msg.query_channel = 73U;
    msg.reply_channel = 90U;
    msg.transponder_delay = 114U;

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
    msg.setTimeStamp(0.31577722687793197);
    msg.setSource(2127U);
    msg.setSourceEntity(30U);
    msg.setDestination(42503U);
    msg.setDestinationEntity(174U);
    msg.beacon.assign("METZBVCHHJAWKDEFGVNUPPQMCHMXBIROLSZVCSVIJCZHNWHDDOMJKO");
    msg.lat = 0.15345512445859688;
    msg.lon = 0.5158556626551083;
    msg.depth = 0.5542099500611705;
    msg.query_channel = 60U;
    msg.reply_channel = 166U;
    msg.transponder_delay = 130U;

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
    msg.setTimeStamp(0.7899411478009578);
    msg.setSource(12096U);
    msg.setSourceEntity(231U);
    msg.setDestination(33969U);
    msg.setDestinationEntity(116U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.21659107978497383);
    msg.setSource(22884U);
    msg.setSourceEntity(0U);
    msg.setDestination(11058U);
    msg.setDestinationEntity(170U);
    msg.op = 1U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZDKSSMNDPAGKXKFRQWDRHKUUFHRBLISUSTUATJZEISYAIFTXYWZF");
    tmp_msg_0.lat = 0.23939145005308793;
    tmp_msg_0.lon = 0.25511289790522507;
    tmp_msg_0.depth = 0.3967198294485649;
    tmp_msg_0.query_channel = 240U;
    tmp_msg_0.reply_channel = 114U;
    tmp_msg_0.transponder_delay = 169U;
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
    msg.setTimeStamp(0.8757730318206514);
    msg.setSource(36325U);
    msg.setSourceEntity(158U);
    msg.setDestination(47846U);
    msg.setDestinationEntity(233U);
    msg.op = 63U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QCSAAGXGDWTORWUCMRQXGTPNSUPYVEHXUSYVFLSISVFPKKNNC");
    tmp_msg_0.lat = 0.09531086193185312;
    tmp_msg_0.lon = 0.2566456681477134;
    tmp_msg_0.depth = 0.6770392265642948;
    tmp_msg_0.query_channel = 58U;
    tmp_msg_0.reply_channel = 64U;
    tmp_msg_0.transponder_delay = 184U;
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
    msg.setTimeStamp(0.4448046778389302);
    msg.setSource(5394U);
    msg.setSourceEntity(37U);
    msg.setDestination(37497U);
    msg.setDestinationEntity(51U);
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 1850562646U;
    tmp_msg_0.lat = 0.7852303790352226;
    tmp_msg_0.lon = 0.18397511783534892;
    tmp_msg_0.height_ell = 0.21900131568289605;
    tmp_msg_0.height_sea = 0.46682167365090976;
    tmp_msg_0.hacc = 0.20107486480271386;
    tmp_msg_0.vacc = 0.9912916341821074;
    tmp_msg_0.vel_n = 0.5435873957042415;
    tmp_msg_0.vel_e = 0.3665262047259885;
    tmp_msg_0.vel_d = 0.6451577453252191;
    tmp_msg_0.speed = 0.5268922552206645;
    tmp_msg_0.gspeed = 0.796889191826918;
    tmp_msg_0.heading = 0.49615238398658135;
    tmp_msg_0.sacc = 0.9591924551067513;
    tmp_msg_0.cacc = 0.23522365733395678;
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
    msg.setTimeStamp(0.7520600189976013);
    msg.setSource(26948U);
    msg.setSourceEntity(48U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(240U);
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 144U;
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
    msg.setTimeStamp(0.12713460983719405);
    msg.setSource(63343U);
    msg.setSourceEntity(74U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(78U);
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("YEEMHLBYSKDMMKWNAODASFGCMVYSUOXPSJXBVMYRBWYGKZNJUEPCDWQRVAOPHEJDXWTRUZSFMXKOTOFYYZOPMFGANIQSJFKMDJVFYCXUTXXGTNMLQTPVKHDH");
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
    msg.setTimeStamp(0.20491854967367584);
    msg.setSource(30345U);
    msg.setSourceEntity(162U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(132U);
    msg.op = 96U;
    msg.system.assign("AUKPLYCYWPFKACRVDKJOQUHSWGGNEIZBZOHHPTFOXXHTLVNIRGFPLVRUYAUBJBFTCRVJLKKYZPKTAMZSVWETNUNLRQFMXDLDSAHZHTPWEHQIRBFESEDCDKMDTJSXJNDAZMIBIQJGARBXWKWYPOYWOSKEFLDMBWCOMKYGVVURO");
    msg.range = 0.8656787276663443;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("MNLTKXDAYYTPTHHF");
    tmp_tmp_msg_0_0.lat = 0.7334928774048007;
    tmp_tmp_msg_0_0.lon = 0.7033467777943322;
    tmp_tmp_msg_0_0.depth = 0.6600766183914117;
    tmp_tmp_msg_0_0.query_channel = 48U;
    tmp_tmp_msg_0_0.reply_channel = 93U;
    tmp_tmp_msg_0_0.transponder_delay = 181U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.16676579654954382;
    tmp_msg_0.y = 0.29786380759828446;
    tmp_msg_0.var_x = 0.9061325900103011;
    tmp_msg_0.var_y = 0.3044123585217908;
    tmp_msg_0.distance = 0.4577909657349316;
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
    msg.setTimeStamp(0.562096575111435);
    msg.setSource(46321U);
    msg.setSourceEntity(5U);
    msg.setDestination(23778U);
    msg.setDestinationEntity(112U);
    msg.op = 232U;
    msg.system.assign("ZYIFKCSYXIDOMCJWRVOHMQLOZUDNIMWNJABLEMPKRPNSBJIFELMGTPJRJHHTFNBBASZPVJP");
    msg.range = 0.9842262791586917;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.11385715294729626;
    tmp_msg_0.y = 0.6055396936807003;
    tmp_msg_0.z = 0.02385587734824246;
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
    msg.setTimeStamp(0.187684147122386);
    msg.setSource(55009U);
    msg.setSourceEntity(219U);
    msg.setDestination(36503U);
    msg.setDestinationEntity(190U);
    msg.op = 230U;
    msg.system.assign("MVTAAJMIWLK");
    msg.range = 0.12260988765550263;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.8396831166607156);
    msg.setSource(43585U);
    msg.setSourceEntity(103U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.7579370482066907);
    msg.setSource(6784U);
    msg.setSourceEntity(161U);
    msg.setDestination(61215U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.9924255694289614);
    msg.setSource(64631U);
    msg.setSourceEntity(166U);
    msg.setDestination(62967U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.2321773594823685);
    msg.setSource(16026U);
    msg.setSourceEntity(6U);
    msg.setDestination(8125U);
    msg.setDestinationEntity(59U);
    msg.list.assign("ZKMOLDRKRORUCPAYCPRGGJNUVOKSIYOTBMVSUHIEEEZLNBIF");

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
    msg.setTimeStamp(0.6051429692743343);
    msg.setSource(32678U);
    msg.setSourceEntity(218U);
    msg.setDestination(22876U);
    msg.setDestinationEntity(116U);
    msg.list.assign("HZOAMVIZDJBEWNGVMEUEBRRHYBETFCBZZPJOKLKCNXPXTVGOHKZYPBWSVJQXPPPTQQVBLRMVBQEJQYGTQALPYOKODWJAFSWSMWCFHNSKCDHYXSRJXNTZBMTLOGNKQDAQKQCGFWEOXYUBHNWHDUFLRLBSTUXURINKUVEVFIRRUCUFT");

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
    msg.setTimeStamp(0.6869920814332702);
    msg.setSource(25011U);
    msg.setSourceEntity(241U);
    msg.setDestination(15376U);
    msg.setDestinationEntity(108U);
    msg.list.assign("XEBHZHNNYCSAKHQIYIXOJHJC");

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
    msg.setTimeStamp(0.8964229786351956);
    msg.setSource(9573U);
    msg.setSourceEntity(143U);
    msg.setDestination(8187U);
    msg.setDestinationEntity(194U);
    msg.value = 19216;

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
    msg.setTimeStamp(0.2500416040255501);
    msg.setSource(64423U);
    msg.setSourceEntity(23U);
    msg.setDestination(52747U);
    msg.setDestinationEntity(252U);
    msg.value = 651;

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
    msg.setTimeStamp(0.7153268315555653);
    msg.setSource(64556U);
    msg.setSourceEntity(134U);
    msg.setDestination(26734U);
    msg.setDestinationEntity(251U);
    msg.value = -9018;

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
    msg.setTimeStamp(0.1257526217514635);
    msg.setSource(28595U);
    msg.setSourceEntity(123U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(133U);
    msg.value = 0.04368697430806445;

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
    msg.setTimeStamp(0.8431287678036643);
    msg.setSource(24500U);
    msg.setSourceEntity(36U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(150U);
    msg.value = 0.003041893114077654;

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
    msg.setTimeStamp(0.13828718293244358);
    msg.setSource(10760U);
    msg.setSourceEntity(128U);
    msg.setDestination(35726U);
    msg.setDestinationEntity(115U);
    msg.value = 0.29273413053646336;

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
    msg.setTimeStamp(0.5344154960927968);
    msg.setSource(40436U);
    msg.setSourceEntity(208U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8713121995296667;

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
    msg.setTimeStamp(0.25000647846193624);
    msg.setSource(6047U);
    msg.setSourceEntity(144U);
    msg.setDestination(14198U);
    msg.setDestinationEntity(204U);
    msg.value = 0.10847368046055894;

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
    msg.setTimeStamp(0.4124519031820699);
    msg.setSource(31106U);
    msg.setSourceEntity(245U);
    msg.setDestination(46778U);
    msg.setDestinationEntity(178U);
    msg.value = 0.27511628809560507;

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
    msg.setTimeStamp(0.15730000196760718);
    msg.setSource(10301U);
    msg.setSourceEntity(211U);
    msg.setDestination(40956U);
    msg.setDestinationEntity(98U);
    msg.validity = 63886U;
    msg.type = 180U;
    msg.utc_year = 60826U;
    msg.utc_month = 55U;
    msg.utc_day = 202U;
    msg.utc_time = 0.6017381972676125;
    msg.lat = 0.6672729837821706;
    msg.lon = 0.1723200517653103;
    msg.height = 0.5984311037072213;
    msg.satellites = 159U;
    msg.cog = 0.20174618341901096;
    msg.sog = 0.1550540422949882;
    msg.hdop = 0.9194261203514158;
    msg.vdop = 0.9750010506977455;
    msg.hacc = 0.8146415466454056;
    msg.vacc = 0.7894273393851027;

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
    msg.setTimeStamp(0.06741265207085778);
    msg.setSource(48794U);
    msg.setSourceEntity(114U);
    msg.setDestination(35028U);
    msg.setDestinationEntity(242U);
    msg.validity = 40524U;
    msg.type = 62U;
    msg.utc_year = 60661U;
    msg.utc_month = 216U;
    msg.utc_day = 111U;
    msg.utc_time = 0.28006955664769706;
    msg.lat = 0.46280685884895956;
    msg.lon = 0.3143841149021537;
    msg.height = 0.39072943286824546;
    msg.satellites = 54U;
    msg.cog = 0.24957826019082607;
    msg.sog = 0.1305941663154333;
    msg.hdop = 0.05133001857781272;
    msg.vdop = 0.21464727496232072;
    msg.hacc = 0.3459139350317961;
    msg.vacc = 0.607613115711206;

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
    msg.setTimeStamp(0.8027508254179309);
    msg.setSource(17254U);
    msg.setSourceEntity(186U);
    msg.setDestination(49470U);
    msg.setDestinationEntity(12U);
    msg.validity = 61836U;
    msg.type = 93U;
    msg.utc_year = 54795U;
    msg.utc_month = 124U;
    msg.utc_day = 51U;
    msg.utc_time = 0.5795703023921452;
    msg.lat = 0.6940047743845756;
    msg.lon = 0.43399904873125017;
    msg.height = 0.5451728648244059;
    msg.satellites = 86U;
    msg.cog = 0.06508032072579772;
    msg.sog = 0.4381005415441499;
    msg.hdop = 0.6548222870779937;
    msg.vdop = 0.2736265133815091;
    msg.hacc = 0.09485639153827596;
    msg.vacc = 0.16948176164210804;

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
    msg.setTimeStamp(0.15177554211460842);
    msg.setSource(63032U);
    msg.setSourceEntity(199U);
    msg.setDestination(30107U);
    msg.setDestinationEntity(115U);
    msg.time = 0.9153910449381296;
    msg.phi = 0.10844553813352109;
    msg.theta = 0.9167080012421054;
    msg.psi = 0.46037244711939407;
    msg.psi_magnetic = 0.43011397733586687;

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
    msg.setTimeStamp(0.9059588748731101);
    msg.setSource(15853U);
    msg.setSourceEntity(5U);
    msg.setDestination(52563U);
    msg.setDestinationEntity(56U);
    msg.time = 0.8502902826804527;
    msg.phi = 0.5250068987886101;
    msg.theta = 0.5136088022387109;
    msg.psi = 0.7221407667696291;
    msg.psi_magnetic = 0.02278659725135823;

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
    msg.setTimeStamp(0.06500811186764799);
    msg.setSource(30737U);
    msg.setSourceEntity(202U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(230U);
    msg.time = 0.1505020257556956;
    msg.phi = 0.3079040687729827;
    msg.theta = 0.16976608509541302;
    msg.psi = 0.5067573302987416;
    msg.psi_magnetic = 0.17966156099659247;

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
    msg.setTimeStamp(0.38073829597221565);
    msg.setSource(21955U);
    msg.setSourceEntity(235U);
    msg.setDestination(61946U);
    msg.setDestinationEntity(109U);
    msg.time = 0.9784437462043547;
    msg.x = 0.9101992943126905;
    msg.y = 0.6672322073782886;
    msg.z = 0.573840048798747;
    msg.timestep = 0.7172817170495294;

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
    msg.setTimeStamp(0.40591148063167304);
    msg.setSource(18002U);
    msg.setSourceEntity(154U);
    msg.setDestination(21368U);
    msg.setDestinationEntity(243U);
    msg.time = 0.5368377577076394;
    msg.x = 0.8650055691036095;
    msg.y = 0.870127338880044;
    msg.z = 0.4972532609596688;
    msg.timestep = 0.23475383845670938;

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
    msg.setTimeStamp(0.1073952779614693);
    msg.setSource(55810U);
    msg.setSourceEntity(94U);
    msg.setDestination(46142U);
    msg.setDestinationEntity(250U);
    msg.time = 0.32750038991181707;
    msg.x = 0.6564702446969406;
    msg.y = 0.20191138185452628;
    msg.z = 0.26687762232030954;
    msg.timestep = 0.4091824285532871;

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
    msg.setTimeStamp(0.128818341116688);
    msg.setSource(42512U);
    msg.setSourceEntity(61U);
    msg.setDestination(31794U);
    msg.setDestinationEntity(31U);
    msg.time = 0.9117624573420589;
    msg.x = 0.4224242214610313;
    msg.y = 0.5485250256478854;
    msg.z = 0.7354236405206507;

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
    msg.setTimeStamp(0.029000517164580963);
    msg.setSource(31729U);
    msg.setSourceEntity(91U);
    msg.setDestination(36630U);
    msg.setDestinationEntity(191U);
    msg.time = 0.8996376522337594;
    msg.x = 0.3579575731692104;
    msg.y = 0.4956774645470259;
    msg.z = 0.16114379191912143;

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
    msg.setTimeStamp(0.39816761781056964);
    msg.setSource(16587U);
    msg.setSourceEntity(189U);
    msg.setDestination(160U);
    msg.setDestinationEntity(178U);
    msg.time = 0.06250417993085733;
    msg.x = 0.7604523898664742;
    msg.y = 0.6262739604340563;
    msg.z = 0.6323583609483152;

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
    msg.setTimeStamp(0.8626729643975796);
    msg.setSource(10809U);
    msg.setSourceEntity(128U);
    msg.setDestination(22884U);
    msg.setDestinationEntity(251U);
    msg.time = 0.7948507124509424;
    msg.x = 0.3937885169851102;
    msg.y = 0.057287923738842506;
    msg.z = 0.5346759254930149;

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
    msg.setTimeStamp(0.6917135173304829);
    msg.setSource(59087U);
    msg.setSourceEntity(186U);
    msg.setDestination(6447U);
    msg.setDestinationEntity(188U);
    msg.time = 0.2805462147725556;
    msg.x = 0.5185421011344375;
    msg.y = 0.3566554026932617;
    msg.z = 0.9465865515436821;

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
    msg.setTimeStamp(0.3899187773531808);
    msg.setSource(12573U);
    msg.setSourceEntity(223U);
    msg.setDestination(11669U);
    msg.setDestinationEntity(41U);
    msg.time = 0.6898168564693898;
    msg.x = 0.8133273479151063;
    msg.y = 0.25504314519724214;
    msg.z = 0.08093908401881778;

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
    msg.setTimeStamp(0.3423343991816986);
    msg.setSource(18933U);
    msg.setSourceEntity(140U);
    msg.setDestination(60100U);
    msg.setDestinationEntity(145U);
    msg.time = 0.7267748390387605;
    msg.x = 0.4301218136446955;
    msg.y = 0.9158875051761806;
    msg.z = 0.6652418544702331;

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
    msg.setTimeStamp(0.823043667505495);
    msg.setSource(35342U);
    msg.setSourceEntity(217U);
    msg.setDestination(6968U);
    msg.setDestinationEntity(10U);
    msg.time = 0.8907566180582166;
    msg.x = 0.7154143853245625;
    msg.y = 0.33540741160514453;
    msg.z = 0.5892697830804132;

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
    msg.setTimeStamp(0.3761436299583317);
    msg.setSource(58118U);
    msg.setSourceEntity(166U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(32U);
    msg.time = 0.21635768667693767;
    msg.x = 0.4549536368037028;
    msg.y = 0.0936319328639591;
    msg.z = 0.5882816783906708;

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
    msg.setTimeStamp(0.9706958060662871);
    msg.setSource(19198U);
    msg.setSourceEntity(139U);
    msg.setDestination(54564U);
    msg.setDestinationEntity(17U);
    msg.validity = 45U;
    msg.x = 0.3440277216046378;
    msg.y = 0.05382417774187198;
    msg.z = 0.37747457366559023;

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
    msg.setTimeStamp(0.9113844119965391);
    msg.setSource(21303U);
    msg.setSourceEntity(192U);
    msg.setDestination(11611U);
    msg.setDestinationEntity(55U);
    msg.validity = 121U;
    msg.x = 0.9976441705851705;
    msg.y = 0.0019044078412335796;
    msg.z = 0.32781577913571414;

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
    msg.setTimeStamp(0.6664224414803183);
    msg.setSource(13104U);
    msg.setSourceEntity(212U);
    msg.setDestination(40081U);
    msg.setDestinationEntity(207U);
    msg.validity = 234U;
    msg.x = 0.973788758340712;
    msg.y = 0.771197228427465;
    msg.z = 0.42137263244612966;

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
    msg.setTimeStamp(0.9678243897254033);
    msg.setSource(22506U);
    msg.setSourceEntity(105U);
    msg.setDestination(37047U);
    msg.setDestinationEntity(187U);
    msg.validity = 64U;
    msg.x = 0.0008726694085433584;
    msg.y = 0.4978501102088989;
    msg.z = 0.6010701303575497;

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
    msg.setTimeStamp(0.46099740707771997);
    msg.setSource(59944U);
    msg.setSourceEntity(130U);
    msg.setDestination(52424U);
    msg.setDestinationEntity(123U);
    msg.validity = 180U;
    msg.x = 0.18907890587829745;
    msg.y = 0.25294711264353564;
    msg.z = 0.3720433001490976;

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
    msg.setTimeStamp(0.6416165188769583);
    msg.setSource(23950U);
    msg.setSourceEntity(47U);
    msg.setDestination(15845U);
    msg.setDestinationEntity(222U);
    msg.validity = 96U;
    msg.x = 0.22812658612929515;
    msg.y = 0.7942409105196004;
    msg.z = 0.4619613373517756;

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
    msg.setTimeStamp(0.783623648594509);
    msg.setSource(23297U);
    msg.setSourceEntity(221U);
    msg.setDestination(25669U);
    msg.setDestinationEntity(49U);
    msg.time = 0.3179199457531716;
    msg.x = 0.9886833502121172;
    msg.y = 0.7235049946555286;
    msg.z = 0.390603800836023;

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
    msg.setTimeStamp(0.03543134579458673);
    msg.setSource(48045U);
    msg.setSourceEntity(134U);
    msg.setDestination(17219U);
    msg.setDestinationEntity(124U);
    msg.time = 0.9858975286911132;
    msg.x = 0.4025944975968838;
    msg.y = 0.6908973444095973;
    msg.z = 0.8051552780112791;

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
    msg.setTimeStamp(0.7107895874934768);
    msg.setSource(9619U);
    msg.setSourceEntity(45U);
    msg.setDestination(64878U);
    msg.setDestinationEntity(35U);
    msg.time = 0.22403590989617217;
    msg.x = 0.29870038825331;
    msg.y = 0.8242731096482655;
    msg.z = 0.23842662202459952;

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
    msg.setTimeStamp(0.27990600188095127);
    msg.setSource(54584U);
    msg.setSourceEntity(59U);
    msg.setDestination(31336U);
    msg.setDestinationEntity(225U);
    msg.validity = 180U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.807810334445602;
    tmp_msg_0.beam_height = 0.5955933683419514;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3460912460585299;

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
    msg.setTimeStamp(0.9759413385512661);
    msg.setSource(13935U);
    msg.setSourceEntity(6U);
    msg.setDestination(36941U);
    msg.setDestinationEntity(38U);
    msg.validity = 213U;
    msg.value = 0.3668027825326483;

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
    msg.setTimeStamp(0.29168825439019996);
    msg.setSource(17467U);
    msg.setSourceEntity(7U);
    msg.setDestination(49240U);
    msg.setDestinationEntity(48U);
    msg.validity = 72U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.591069603335225;
    tmp_msg_0.y = 0.16098734267180304;
    tmp_msg_0.z = 0.12649544649373834;
    tmp_msg_0.phi = 0.9697576121203971;
    tmp_msg_0.theta = 0.7599567141357756;
    tmp_msg_0.psi = 0.7891163827858073;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.25944182029736396;
    tmp_msg_1.beam_height = 0.7502443430202321;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.442469216394366;

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
    msg.setTimeStamp(0.6984863246134283);
    msg.setSource(7790U);
    msg.setSourceEntity(35U);
    msg.setDestination(47632U);
    msg.setDestinationEntity(119U);
    msg.value = 0.37091237235448815;

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
    msg.setTimeStamp(0.5964619056017757);
    msg.setSource(5812U);
    msg.setSourceEntity(16U);
    msg.setDestination(1075U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8212878952209501;

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
    msg.setTimeStamp(0.2908143851470064);
    msg.setSource(56364U);
    msg.setSourceEntity(239U);
    msg.setDestination(55832U);
    msg.setDestinationEntity(188U);
    msg.value = 0.05978876651025877;

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
    msg.setTimeStamp(0.7939353949233963);
    msg.setSource(2302U);
    msg.setSourceEntity(211U);
    msg.setDestination(12432U);
    msg.setDestinationEntity(95U);
    msg.value = 0.1069110217565683;

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
    msg.setTimeStamp(0.8892196361056507);
    msg.setSource(33918U);
    msg.setSourceEntity(136U);
    msg.setDestination(12502U);
    msg.setDestinationEntity(199U);
    msg.value = 0.11157688720934722;

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
    msg.setTimeStamp(0.577518790207797);
    msg.setSource(45241U);
    msg.setSourceEntity(222U);
    msg.setDestination(39772U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6642633923677018;

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
    msg.setTimeStamp(0.4752535319672112);
    msg.setSource(48433U);
    msg.setSourceEntity(133U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(127U);
    msg.value = 0.025794697177583426;

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
    msg.setTimeStamp(0.997603206110669);
    msg.setSource(826U);
    msg.setSourceEntity(149U);
    msg.setDestination(40930U);
    msg.setDestinationEntity(137U);
    msg.value = 0.2232217211813664;

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
    msg.setTimeStamp(0.16838797356341395);
    msg.setSource(46236U);
    msg.setSourceEntity(110U);
    msg.setDestination(49096U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5397626379065933;

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
    msg.setTimeStamp(0.755428911784574);
    msg.setSource(30229U);
    msg.setSourceEntity(13U);
    msg.setDestination(24005U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5557748384256398;

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
    msg.setTimeStamp(0.44066172990061436);
    msg.setSource(6424U);
    msg.setSourceEntity(50U);
    msg.setDestination(2688U);
    msg.setDestinationEntity(48U);
    msg.value = 0.023473625570553325;

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
    msg.setTimeStamp(0.43065303866475935);
    msg.setSource(49205U);
    msg.setSourceEntity(14U);
    msg.setDestination(63658U);
    msg.setDestinationEntity(229U);
    msg.value = 0.5976399225557908;

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
    msg.setTimeStamp(0.26114190390449576);
    msg.setSource(38958U);
    msg.setSourceEntity(124U);
    msg.setDestination(27133U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6812269190476979;

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
    msg.setTimeStamp(0.26219031508818125);
    msg.setSource(62261U);
    msg.setSourceEntity(148U);
    msg.setDestination(46688U);
    msg.setDestinationEntity(2U);
    msg.value = 0.056243450748515444;

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
    msg.setTimeStamp(0.034373748308817675);
    msg.setSource(9624U);
    msg.setSourceEntity(45U);
    msg.setDestination(28835U);
    msg.setDestinationEntity(221U);
    msg.value = 0.2441146682254125;

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
    msg.setTimeStamp(0.5525778135237952);
    msg.setSource(10253U);
    msg.setSourceEntity(238U);
    msg.setDestination(8973U);
    msg.setDestinationEntity(23U);
    msg.value = 0.4316503569808894;

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
    msg.setTimeStamp(0.9754349318459674);
    msg.setSource(63142U);
    msg.setSourceEntity(222U);
    msg.setDestination(53305U);
    msg.setDestinationEntity(51U);
    msg.value = 0.8385918047818987;

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
    msg.setTimeStamp(0.11236321158309526);
    msg.setSource(40790U);
    msg.setSourceEntity(219U);
    msg.setDestination(41578U);
    msg.setDestinationEntity(235U);
    msg.value = 0.031868270929128695;

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
    msg.setTimeStamp(0.9592544183527878);
    msg.setSource(28412U);
    msg.setSourceEntity(164U);
    msg.setDestination(9857U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3539248287788068;

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
    msg.setTimeStamp(0.7506437663590079);
    msg.setSource(48522U);
    msg.setSourceEntity(117U);
    msg.setDestination(6357U);
    msg.setDestinationEntity(67U);
    msg.value = 0.4176760804840649;

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
    msg.setTimeStamp(0.2572838818404579);
    msg.setSource(9617U);
    msg.setSourceEntity(217U);
    msg.setDestination(52660U);
    msg.setDestinationEntity(8U);
    msg.value = 0.49793886170544976;

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
    msg.setTimeStamp(0.8042815277545302);
    msg.setSource(64257U);
    msg.setSourceEntity(217U);
    msg.setDestination(31803U);
    msg.setDestinationEntity(253U);
    msg.value = 0.6481132411452017;

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
    msg.setTimeStamp(0.3016376311702582);
    msg.setSource(28468U);
    msg.setSourceEntity(213U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(131U);
    msg.value = 0.18261197452593791;

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
    msg.setTimeStamp(0.5154104446565716);
    msg.setSource(40020U);
    msg.setSourceEntity(0U);
    msg.setDestination(50432U);
    msg.setDestinationEntity(116U);
    msg.value = 0.25507386655737074;

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
    msg.setTimeStamp(0.9652845158006084);
    msg.setSource(35808U);
    msg.setSourceEntity(4U);
    msg.setDestination(23257U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.7709130448515645;
    msg.speed = 0.9494512197118701;
    msg.turbulence = 0.8298852842544832;

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
    msg.setTimeStamp(0.7184648941159694);
    msg.setSource(43003U);
    msg.setSourceEntity(1U);
    msg.setDestination(47909U);
    msg.setDestinationEntity(120U);
    msg.direction = 0.9493544460064983;
    msg.speed = 0.43871231492035834;
    msg.turbulence = 0.526826450552771;

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
    msg.setTimeStamp(0.09063698791717101);
    msg.setSource(754U);
    msg.setSourceEntity(79U);
    msg.setDestination(52819U);
    msg.setDestinationEntity(147U);
    msg.direction = 0.39959282059290724;
    msg.speed = 0.7710170296982101;
    msg.turbulence = 0.09240520123266405;

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
    msg.setTimeStamp(0.14901054760110055);
    msg.setSource(33635U);
    msg.setSourceEntity(131U);
    msg.setDestination(56292U);
    msg.setDestinationEntity(64U);
    msg.value = 0.12000509829291273;

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
    msg.setTimeStamp(0.5613887436838608);
    msg.setSource(43486U);
    msg.setSourceEntity(69U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5173218347541081;

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
    msg.setTimeStamp(0.36309584232164016);
    msg.setSource(2710U);
    msg.setSourceEntity(158U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(205U);
    msg.value = 0.20642224104837292;

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
    msg.setTimeStamp(0.4317087501007394);
    msg.setSource(34239U);
    msg.setSourceEntity(251U);
    msg.setDestination(31690U);
    msg.setDestinationEntity(100U);
    msg.value.assign("OLEQBQGIOVXCELFRSEJTKCOZRZNDRWPUHJVMHITTWCXXUFNBLPWFZCPDEOYNUOSOYGRASPQKLYNZCLQBGYRPPDQNSGXHKKIMSVNPCYTWRCOQVTNMLTYAMOSBDZGRMQUQVGAKIZJPBTHJPQNWPKCUGDKYXWATBXVMKFMVODUYEYLQWUSXEFLLAVWHJDSOJSEDGNGJUVUAFIFBKIKZAIRIXBAEIJH");

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
    msg.setTimeStamp(0.6798770283896828);
    msg.setSource(60409U);
    msg.setSourceEntity(241U);
    msg.setDestination(45372U);
    msg.setDestinationEntity(182U);
    msg.value.assign("OHLAUFLWQDLVNDWJPAARDQIRKMPBVRVJVMRFLNAODTZIVFSKADSGVTJMMCNWLDYWWOAXUEPCBTNFBEXEUYWIADFKQVGZFEWLQGVWNIWOKZOCMYAXBPEYLRKPOGYMGBPBKUJIBZLYZXCOOCOCJMHHBNTPYHPYJIM");

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
    msg.setTimeStamp(0.12951151274405592);
    msg.setSource(34410U);
    msg.setSourceEntity(127U);
    msg.setDestination(34857U);
    msg.setDestinationEntity(170U);
    msg.value.assign("XCEEQHTPXUNUFIKIEIGQBMJJCIBXEARYFZDHSHRAVETFPRWMJVBIRHLLSBNBDGCPQ");

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
    msg.setTimeStamp(0.15276901715791413);
    msg.setSource(104U);
    msg.setSourceEntity(136U);
    msg.setDestination(33908U);
    msg.setDestinationEntity(129U);
    const char tmp_msg_0[] = {22, -7, 28, 58, -58, -82, -61, 126, 96, -13, 47, -5, 124, -35, 106, -83, -17, 9, 1, 106, -75, 92, -55, 41, 100, -28, -90, -97, 40, -98, -62, 126, -56, -23, -49, -120, 107, -37, 42, 47, 18, -3, -44, 98, 47, 93, 102, -19, -79, -81, 52, -108, -94, -16, 20, 43, -42, -70, -107, -11, 67, 70, 74, -96, 119, -40, -79, 48, -8, -70, -6, -66, -67, -45, 73, 29, 39, -70, -66, -76, 114, 102, -107, 16, -84, -40, 3, 11, -1, -61, -115, -31, 113, 65, -57, -33, 14, 51, 110, -9, -35, 83, -71, -35, 13, 61, 93, 19, 109, 124, 100, -63, 16, 55, 18, 69, 51, -44, 58, 49};
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
    msg.setTimeStamp(0.8239240689659971);
    msg.setSource(63612U);
    msg.setSourceEntity(195U);
    msg.setDestination(17314U);
    msg.setDestinationEntity(207U);
    const char tmp_msg_0[] = {-107, 111, -82, 93, 74, 102, 67, -125, 18, 117, 110, 114, 97, 41, 116, -126, 26, 116, -77, -94, -11, -2, -46, 63, -92, -116, 94, 92, 13, -49, -40, -117, 53, 21, 70, -62, -100, -66, 39, -111, -26, -70, 116, -2, 27, -77, -75, -16, 122, -80, -16, 67, 92, -90, -30, 100, 63, 88, 97, -16, -98, -30, -85, -117, -120, 3, 54, 83, 11, -14, -15, -45, 25, 67, 102, 58, 105, 91, -117, -100, -20, -83, -58, 96, 7, -28, 100, 3, -109, 85, 124, 3, 5, -106, -5, -75, 29, 79, -42, 126, 84, 21, -100, -10, -60, -29, -67, -119, 121, -89, -42, -110, -51, -62, -36, -55, -99, 115, 89, 23, -110, 70, -52, -43, 123, -109, 4, 3, 73, 61, 119, 9, -110, 116, 51, -126, 21, 30, 71, 72, -7, 56, 26, 91, -116, -22, -86, 84, -103, 5, -98, -51, 23, -49, 103, -125, 98, -4, 113, 57, -123, 56, -54, -37, 76, 125, 55, -57, -109, 102, -60, 74, -78, -112, 25, 89, 121, -77, -57, -53, 3, 72, 4, 9, 110, 111, -63, 2, -6, -79, -114, 103, 39, 64, -21, -67, 74, 18, -79, -68, -34, -40, 57, 88, -69, 75, 61, -41, 2, -35, 90, 11, 63, 117, 45, 119, -126, -5, 25, -40, -42, 117, -68, -117, 76, -107, -50, 95, -40, 27, -7, -3, -93, 65};
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
    msg.setTimeStamp(0.3704302102249629);
    msg.setSource(14345U);
    msg.setSourceEntity(144U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(96U);
    const char tmp_msg_0[] = {39, -90, 30, 12, 95, 42, 107, 71, 75, -22, -4, 91, 15, 78, 67, 1, 111, -86, -21, 124, 44, 28, -94, 27, 7, 91, 97, 55, -118, -114, -4, -50, -127, -68, -5, -125, -119, -71, -122, -52, -30, 57, -8, 53, -69, -75, 87, 90, -22, 112, -44, 37, 21, -59, 123, 93, -128, -97, 8, -48, -107, 27, 1, 79, -60, -62, 8, 105, -66, -102, 28, -60, -80, -60, -55, -83, -63, 93, -25, -89, -60, 50, 110, 65, 23, 121, 92, 38, -3, 36, -60, 90, 58, -30, -123, 61, 54, 38, 94, -100, 32, -2, 55, 59, -80, -77, 42, -128, -35, 3, 75, 49, -76, -64, -120, -28, -2, 121, -106, 18, 103, 115, -35, -9, -15, -52, 59, -63, 111, 122, -4, 7, 44, 56, 96, 50, -124, 51, -42, 100, 72, -63, 26, -56};
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
    msg.setTimeStamp(0.1872346140850636);
    msg.setSource(40489U);
    msg.setSourceEntity(136U);
    msg.setDestination(44010U);
    msg.setDestinationEntity(127U);
    msg.type = 47U;
    msg.frequency = 2754935149U;
    msg.min_range = 14705U;
    msg.max_range = 27888U;
    msg.bits_per_point = 221U;
    msg.scale_factor = 0.2368227138261888;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.24664086197194224;
    tmp_msg_0.beam_height = 0.5142858893341694;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-24, -10, 0, 16, -86, 8, 14, 28, -52, -43, -127, 111, 51, 0, 120, 20, 19, 106, 75, -11, -107, 50, -118, 94, 43, -83, 84, -76, 78, 18, 2, 48, -96, -20, 115, -126, 51, 114, -66, 99, 77, 74, 85, -86, -108, 87, -116, 3, 38, 53, -82, -64, -71, -21, -88, 20, 125, -110, 75, 100, 50, 58, -88, 45, -39, -90, 77, 0, -45, -51, 20, 56, -119, -77, 104, -111, -104, 42, -4, -10, 109, -105, 94, 116, 57, 17, 51, -84, -123, 28, -70, 89, 67, 92, 121, 7, -60, 104, 59, 40, -48, 113, 67, -44, -12, 63, 42, -127, 71, 121, 77, -47, -45, 9, -13, 108, 83, 83, -51, 98, 15, -66, -122, 17, -127, 72, -101, 122, -104, -65, 106, 79, 104, -31, 1, -92, -6, 24, -26, 4, 74, 19, -22, -112, 99, 12, 34, 63, 49, -91, -103, 0, -12, -19, -16, 79, -25, -119, 121, 20, 13, 18, -114, -1, -49, -39, -99, -55, -83, -79, 67, 124, -85, -67, -10, 50, -35, -22, -19, 13, 3, 71, -94, 90, -99, 36};
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
    msg.setTimeStamp(0.3366031872364378);
    msg.setSource(30445U);
    msg.setSourceEntity(12U);
    msg.setDestination(48446U);
    msg.setDestinationEntity(48U);
    msg.type = 0U;
    msg.frequency = 2925796775U;
    msg.min_range = 64090U;
    msg.max_range = 46334U;
    msg.bits_per_point = 152U;
    msg.scale_factor = 0.5029214360800192;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.22990345698466974;
    tmp_msg_0.beam_height = 0.4732149966559235;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {31, 25, 33, -63, 61, 86, 84, -70, -128, -109, -43, -61, 126, 49, 109, 19, -36, 59, 2, -34, -12, 104, 110, -65, 27, 102, 1, -124, -120, -79, 58, -53, -3, 83, -3, 41, -94, 46, 20, 53, 104, 55, 26, 8, -17, 73, -43, -90, -108, 124, 50, 33, -62, -1, -79, 14, 80, -82, 107, -95, 122, -95, 63, -115, 31, -56, -114, 38, -121, 91, 34, 114, 12};
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
    msg.setTimeStamp(0.0713344069419719);
    msg.setSource(52393U);
    msg.setSourceEntity(42U);
    msg.setDestination(3275U);
    msg.setDestinationEntity(93U);
    msg.type = 73U;
    msg.frequency = 3218700105U;
    msg.min_range = 38898U;
    msg.max_range = 19223U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.7195430525616731;
    const char tmp_msg_0[] = {-115, 50, 51, -27, 124, 2, 48, 47, -119, -81, -11, -98, -91, -93, 21, 84, 49, -33, -115, -50, -57, -108, -76, -90, 100, -30, -10, -8, -14, 16, 32, -13, -113, -60, 45, -18, -104, -23, -110, -80, -29, -33, -30, 116, 76, -57, 66, -100, -109, 115, 36, 25, 125, -35, 66, -118, 116, 69, -84, -57, 119, -15, -77, 14, 2, 85, -27, -80, 36, 78, 28, -87, 104, 61, -31, 92, 117, -2, 30, 26, 54, -18, 53, -3, -95, -57, -6, -100};
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
    msg.setTimeStamp(0.6652664099408508);
    msg.setSource(48814U);
    msg.setSourceEntity(208U);
    msg.setDestination(56326U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.10480289475578819);
    msg.setSource(42712U);
    msg.setSourceEntity(69U);
    msg.setDestination(57918U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.2605285743776816);
    msg.setSource(22410U);
    msg.setSourceEntity(66U);
    msg.setDestination(44154U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.43510653740058025);
    msg.setSource(10735U);
    msg.setSourceEntity(50U);
    msg.setDestination(6912U);
    msg.setDestinationEntity(114U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.16701442185597748);
    msg.setSource(29283U);
    msg.setSourceEntity(108U);
    msg.setDestination(18682U);
    msg.setDestinationEntity(165U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.8285761015815837);
    msg.setSource(53911U);
    msg.setSourceEntity(77U);
    msg.setDestination(34666U);
    msg.setDestinationEntity(152U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.6951566312064139);
    msg.setSource(57724U);
    msg.setSourceEntity(151U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(55U);
    msg.value = 0.23392478457441035;
    msg.confidence = 0.1767318689688343;
    msg.opmodes.assign("KCLIOBBBKIHQSQFPMTJRUNJIGUBHRDBGFPSYYMKJVJ");

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
    msg.setTimeStamp(0.5285670947388961);
    msg.setSource(43906U);
    msg.setSourceEntity(246U);
    msg.setDestination(62181U);
    msg.setDestinationEntity(240U);
    msg.value = 0.06577898102443924;
    msg.confidence = 0.5685820449703693;
    msg.opmodes.assign("JLLOIEWESEDVQJAHGQLINCOMWIXYRINIGIEWWKDLZRCQPBNPWPUBSUUGKJAJXUVJTSTPRBAPOUHDMQPGQKVZYQKEWQLRFLOVHMSMNZTHAGPSUVYZIDXTHHDBXLICGFMBNNOMYYYCJFCVHSGMRVNTC");

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
    msg.setTimeStamp(0.8398776567919845);
    msg.setSource(8010U);
    msg.setSourceEntity(132U);
    msg.setDestination(25295U);
    msg.setDestinationEntity(82U);
    msg.value = 0.24316091733455836;
    msg.confidence = 0.455858273105645;
    msg.opmodes.assign("YKVPZRRPFEAVISMGIOQFHJRYZUBGOMQZPVFUSQXADUFTZKBOGTCUZZJYEDRMTJWLWFVIQHNXAGNVBISJKGVEQDHRGIYJPBIWWSCLDKBNQFDRLCYASWSAKZALGSKNUMIENXZIMOJBJAUXTTDELUJYCAHOTCSPFHAO");

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
    msg.setTimeStamp(0.1359949093733297);
    msg.setSource(35045U);
    msg.setSourceEntity(168U);
    msg.setDestination(45797U);
    msg.setDestinationEntity(225U);
    msg.itow = 545528331U;
    msg.lat = 0.2510352260177805;
    msg.lon = 0.6663923319746246;
    msg.height_ell = 0.4590655832090319;
    msg.height_sea = 0.013041361424309894;
    msg.hacc = 0.45707031386988317;
    msg.vacc = 0.4769133575081448;
    msg.vel_n = 0.20459804962599493;
    msg.vel_e = 0.512260153351829;
    msg.vel_d = 0.7273133078603023;
    msg.speed = 0.5653936435486752;
    msg.gspeed = 0.25242267491510606;
    msg.heading = 0.8442082796441905;
    msg.sacc = 0.03031541821100281;
    msg.cacc = 0.7052567490809489;

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
    msg.setTimeStamp(0.31635161150774727);
    msg.setSource(13026U);
    msg.setSourceEntity(223U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(223U);
    msg.itow = 2580598783U;
    msg.lat = 0.9884846518876009;
    msg.lon = 0.3372104344279224;
    msg.height_ell = 0.32160885730835886;
    msg.height_sea = 0.6354165130723716;
    msg.hacc = 0.04370693536075032;
    msg.vacc = 0.03834750715360136;
    msg.vel_n = 0.7675678582760358;
    msg.vel_e = 0.6177655684317441;
    msg.vel_d = 0.516808881772698;
    msg.speed = 0.5569436731980149;
    msg.gspeed = 0.05969222784962391;
    msg.heading = 0.5628335973604831;
    msg.sacc = 0.28113701970913096;
    msg.cacc = 0.6444476119356952;

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
    msg.setTimeStamp(0.8268198950561357);
    msg.setSource(56118U);
    msg.setSourceEntity(249U);
    msg.setDestination(43703U);
    msg.setDestinationEntity(226U);
    msg.itow = 2672865849U;
    msg.lat = 0.09216748326906021;
    msg.lon = 0.2384610772672645;
    msg.height_ell = 0.2947264188780908;
    msg.height_sea = 0.9015134885007667;
    msg.hacc = 0.21560913350998678;
    msg.vacc = 0.5777456482802423;
    msg.vel_n = 0.1407121518239478;
    msg.vel_e = 0.33071803705865244;
    msg.vel_d = 0.9646896906433067;
    msg.speed = 0.9296783115963041;
    msg.gspeed = 0.7405925448857957;
    msg.heading = 0.6232137376159216;
    msg.sacc = 0.09173912639418935;
    msg.cacc = 0.2317185513632526;

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
    msg.setTimeStamp(0.25676434021225747);
    msg.setSource(47310U);
    msg.setSourceEntity(198U);
    msg.setDestination(31148U);
    msg.setDestinationEntity(61U);
    msg.id = 92U;
    msg.value = 0.8958542746261646;

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
    msg.setTimeStamp(0.060607356037556404);
    msg.setSource(9882U);
    msg.setSourceEntity(85U);
    msg.setDestination(63798U);
    msg.setDestinationEntity(112U);
    msg.id = 16U;
    msg.value = 0.4772934367256896;

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
    msg.setTimeStamp(0.04622725461882127);
    msg.setSource(33819U);
    msg.setSourceEntity(103U);
    msg.setDestination(51075U);
    msg.setDestinationEntity(104U);
    msg.id = 192U;
    msg.value = 0.3283098142106422;

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
    msg.setTimeStamp(0.22323586870550505);
    msg.setSource(24259U);
    msg.setSourceEntity(180U);
    msg.setDestination(52896U);
    msg.setDestinationEntity(250U);
    msg.x = 0.13907982122436946;
    msg.y = 0.6598793848920472;
    msg.z = 0.6669261109319452;
    msg.phi = 0.33115195253905494;
    msg.theta = 0.46190368096001455;
    msg.psi = 0.3470100932703545;

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
    msg.setTimeStamp(0.8792711541940476);
    msg.setSource(3339U);
    msg.setSourceEntity(209U);
    msg.setDestination(50398U);
    msg.setDestinationEntity(162U);
    msg.x = 0.5160540932106262;
    msg.y = 0.16545372011622628;
    msg.z = 0.7247580023667213;
    msg.phi = 0.8872253246047023;
    msg.theta = 0.017907000826531294;
    msg.psi = 0.3419639138827182;

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
    msg.setTimeStamp(0.4753429242584829);
    msg.setSource(12456U);
    msg.setSourceEntity(219U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(37U);
    msg.x = 0.7980631744757435;
    msg.y = 0.05662518137091144;
    msg.z = 0.8763048280191763;
    msg.phi = 0.539016168592526;
    msg.theta = 0.004021111971220015;
    msg.psi = 0.5783803847572621;

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
    msg.setTimeStamp(0.6148162717454131);
    msg.setSource(51481U);
    msg.setSourceEntity(249U);
    msg.setDestination(14330U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.8638612194835052;
    msg.beam_height = 0.5603988753213599;

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
    msg.setTimeStamp(0.5490392532554648);
    msg.setSource(63484U);
    msg.setSourceEntity(65U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(59U);
    msg.beam_width = 0.46409401804532946;
    msg.beam_height = 0.07640789937712422;

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
    msg.setTimeStamp(0.207635349240896);
    msg.setSource(52380U);
    msg.setSourceEntity(160U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(66U);
    msg.beam_width = 0.5293788915563669;
    msg.beam_height = 0.9669787579308848;

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
    msg.setTimeStamp(0.7415368011928266);
    msg.setSource(57197U);
    msg.setSourceEntity(254U);
    msg.setDestination(13506U);
    msg.setDestinationEntity(211U);
    msg.sane = 32U;

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
    msg.setTimeStamp(0.8499201416717059);
    msg.setSource(42280U);
    msg.setSourceEntity(91U);
    msg.setDestination(56620U);
    msg.setDestinationEntity(48U);
    msg.sane = 70U;

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
    msg.setTimeStamp(0.6639089119585525);
    msg.setSource(7737U);
    msg.setSourceEntity(135U);
    msg.setDestination(33333U);
    msg.setDestinationEntity(250U);
    msg.sane = 56U;

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
    msg.setTimeStamp(0.6786961283451102);
    msg.setSource(16848U);
    msg.setSourceEntity(151U);
    msg.setDestination(27683U);
    msg.setDestinationEntity(167U);
    msg.value = 0.14655422229631976;

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
    msg.setTimeStamp(0.43877262164509045);
    msg.setSource(32491U);
    msg.setSourceEntity(82U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(96U);
    msg.value = 0.7705929027753793;

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
    msg.setTimeStamp(0.4450230592472846);
    msg.setSource(29617U);
    msg.setSourceEntity(132U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(63U);
    msg.value = 0.24250490185351548;

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
    msg.setTimeStamp(0.5715815658573425);
    msg.setSource(45848U);
    msg.setSourceEntity(56U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(235U);
    msg.value = 0.8529263227576265;

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
    msg.setTimeStamp(0.6406719958848505);
    msg.setSource(41185U);
    msg.setSourceEntity(111U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5858791825933747;

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
    msg.setTimeStamp(0.033458221952350264);
    msg.setSource(40725U);
    msg.setSourceEntity(100U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(37U);
    msg.value = 0.256185203664016;

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
    msg.setTimeStamp(0.8410936486169134);
    msg.setSource(64194U);
    msg.setSourceEntity(213U);
    msg.setDestination(56851U);
    msg.setDestinationEntity(171U);
    msg.value = 0.2888172623728894;

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
    msg.setTimeStamp(0.3582458136798019);
    msg.setSource(30847U);
    msg.setSourceEntity(237U);
    msg.setDestination(53257U);
    msg.setDestinationEntity(124U);
    msg.value = 0.3339109913353774;

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
    msg.setTimeStamp(0.4463384387950339);
    msg.setSource(16081U);
    msg.setSourceEntity(71U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5233715786746113;

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
    msg.setTimeStamp(0.0505977449502526);
    msg.setSource(17019U);
    msg.setSourceEntity(95U);
    msg.setDestination(48518U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9382750921327005;

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
    msg.setTimeStamp(0.7171424154188583);
    msg.setSource(15984U);
    msg.setSourceEntity(229U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(160U);
    msg.value = 0.825808543729297;

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
    msg.setTimeStamp(0.005831329464217383);
    msg.setSource(2400U);
    msg.setSourceEntity(77U);
    msg.setDestination(32725U);
    msg.setDestinationEntity(150U);
    msg.value = 0.1950124855262586;

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
    msg.setTimeStamp(0.5525679732357045);
    msg.setSource(40234U);
    msg.setSourceEntity(22U);
    msg.setDestination(28128U);
    msg.setDestinationEntity(140U);
    msg.id = 244U;
    msg.zoom = 49U;
    msg.action = 109U;

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
    msg.setTimeStamp(0.5115743417118679);
    msg.setSource(41282U);
    msg.setSourceEntity(4U);
    msg.setDestination(20581U);
    msg.setDestinationEntity(91U);
    msg.id = 78U;
    msg.zoom = 218U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.06211012294983331);
    msg.setSource(22282U);
    msg.setSourceEntity(18U);
    msg.setDestination(8412U);
    msg.setDestinationEntity(15U);
    msg.id = 118U;
    msg.zoom = 14U;
    msg.action = 211U;

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
    msg.setTimeStamp(0.44493804420230787);
    msg.setSource(2517U);
    msg.setSourceEntity(58U);
    msg.setDestination(33679U);
    msg.setDestinationEntity(180U);
    msg.id = 147U;
    msg.value = 0.4592517464438852;

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
    msg.setTimeStamp(0.16461021167672885);
    msg.setSource(3737U);
    msg.setSourceEntity(7U);
    msg.setDestination(28406U);
    msg.setDestinationEntity(31U);
    msg.id = 130U;
    msg.value = 0.9937132766714177;

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
    msg.setTimeStamp(0.8350916943017154);
    msg.setSource(43544U);
    msg.setSourceEntity(158U);
    msg.setDestination(35111U);
    msg.setDestinationEntity(165U);
    msg.id = 96U;
    msg.value = 0.6999125395705322;

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
    msg.setTimeStamp(0.6196974131653459);
    msg.setSource(56974U);
    msg.setSourceEntity(201U);
    msg.setDestination(3203U);
    msg.setDestinationEntity(223U);
    msg.id = 244U;
    msg.value = 0.612984188847701;

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
    msg.setTimeStamp(0.8287549497961668);
    msg.setSource(61417U);
    msg.setSourceEntity(224U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(69U);
    msg.id = 130U;
    msg.value = 0.7695988600350255;

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
    msg.setTimeStamp(0.3696661305927543);
    msg.setSource(43212U);
    msg.setSourceEntity(88U);
    msg.setDestination(33918U);
    msg.setDestinationEntity(136U);
    msg.id = 250U;
    msg.value = 0.3275423882443348;

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
    msg.setTimeStamp(0.9018444571775439);
    msg.setSource(19519U);
    msg.setSourceEntity(197U);
    msg.setDestination(58941U);
    msg.setDestinationEntity(56U);
    msg.id = 114U;
    msg.angle = 0.4306455163342239;

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
    msg.setTimeStamp(0.9051879222851141);
    msg.setSource(27144U);
    msg.setSourceEntity(112U);
    msg.setDestination(52467U);
    msg.setDestinationEntity(152U);
    msg.id = 58U;
    msg.angle = 0.9286859126906334;

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
    msg.setTimeStamp(0.9029994315748185);
    msg.setSource(23638U);
    msg.setSourceEntity(254U);
    msg.setDestination(59071U);
    msg.setDestinationEntity(142U);
    msg.id = 142U;
    msg.angle = 0.2333835658450064;

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
    msg.setTimeStamp(0.508786422955218);
    msg.setSource(3819U);
    msg.setSourceEntity(41U);
    msg.setDestination(40203U);
    msg.setDestinationEntity(142U);
    msg.op = 236U;
    msg.actions.assign("AYHRGAMRNBJCWYIQKGFYDCJBDEYVFAHWSHOXKHXIWRFSQZICLXOPTLGJHGELNNZDYLEQVWIZZPXHSJHQGYURVAQSCSTYUFMURZXSONHKBCKLMPBFNMGCLOVDVWJVPPADVYPHZKNWIVAQKRJHYJUIACCFIXJCZQBEPSXTUWNUWQFBLKTMNTEWDTFKGEGMNSQKLOEROMZBAMITFPFIIEUZLRUDTEYRCOXVXVXTMRLSPWENQDB");

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
    msg.setTimeStamp(0.4174667748656551);
    msg.setSource(17791U);
    msg.setSourceEntity(200U);
    msg.setDestination(13907U);
    msg.setDestinationEntity(27U);
    msg.op = 219U;
    msg.actions.assign("CQTEDRUZHJKIIWMWVMQNYTVVQDISNORGHUPLVOPTJWVCFWKRWGGSFYGRCEHFQOXBFTBJNUPHUNCIVNEJMLPUGSXXOWYUCKLBBXJS");

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
    msg.setTimeStamp(0.590915351963062);
    msg.setSource(20441U);
    msg.setSourceEntity(209U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(228U);
    msg.op = 144U;
    msg.actions.assign("EXHTASAILHLTPWEISWGIWUCPVHFDEGASFKADZHOPOQONRWWOQCMTCWXKQMUXTGVUYBAZGWDSKZHARBEOQMDGAMZXJMFOMLWTVLJDSLKBFKQQKMVJSNVFZCJEQYOEIRGXCYYRYQBREXEWHMCNKLSSJKTEARAJDPYUWICQPBTFJZYPNFMGCHOXLYFPSDBCIKNDANSNPZNRDVFTUYUJXJUTBKUJHPIILPUVVIXBRNCGHOIXBNFZZLGOGQVBEMRHRY");

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
    msg.setTimeStamp(0.3983916880275472);
    msg.setSource(28404U);
    msg.setSourceEntity(78U);
    msg.setDestination(65364U);
    msg.setDestinationEntity(228U);
    msg.actions.assign("ADHWNYBELMNBJFY");

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
    msg.setTimeStamp(0.27179814321347096);
    msg.setSource(63141U);
    msg.setSourceEntity(12U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(57U);
    msg.actions.assign("GKJQRHCGMDWNRTLJIQMXNXGHUSUFMITVWDTBPCEXBKPUSMKDTBTMMBRXLWFFYOGLSKAEHJHMJXAUYEZTHRGAFWYOGGFJQNCRWDXLDHLOSSWVQCVPTKGIZTYENNURZPYIKTOVVZXNQVAYJPYALNYLAZZCVDOVSZFYRHXFELBUDRJGOAPDYTZKFFBQANMJGLSIZDBDMEUQNCXRKSVSMPUHPPKIAEQELOVHWCOBOUBERWQAPJNIZWOCIIHE");

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
    msg.setTimeStamp(0.9185320481734571);
    msg.setSource(57057U);
    msg.setSourceEntity(41U);
    msg.setDestination(17742U);
    msg.setDestinationEntity(41U);
    msg.actions.assign("CGVSHFURHSTONCXITHWZZQGILQJHKEFFSONBMJBOYVAIWOGEX");

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
    msg.setTimeStamp(0.4081595478979477);
    msg.setSource(60124U);
    msg.setSourceEntity(189U);
    msg.setDestination(7192U);
    msg.setDestinationEntity(169U);
    msg.button = 234U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.10530062122371475);
    msg.setSource(63911U);
    msg.setSourceEntity(180U);
    msg.setDestination(13928U);
    msg.setDestinationEntity(250U);
    msg.button = 65U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.4092078756217252);
    msg.setSource(56422U);
    msg.setSourceEntity(120U);
    msg.setDestination(37960U);
    msg.setDestinationEntity(124U);
    msg.button = 148U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.5320023831857074);
    msg.setSource(7179U);
    msg.setSourceEntity(81U);
    msg.setDestination(27076U);
    msg.setDestinationEntity(116U);
    msg.op = 80U;
    msg.text.assign("SOWTJRRYULDQHKSSJAKXIYZGFFESIFBFQTMCMHTBPPE");

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
    msg.setTimeStamp(0.27058386656939937);
    msg.setSource(34422U);
    msg.setSourceEntity(170U);
    msg.setDestination(39939U);
    msg.setDestinationEntity(82U);
    msg.op = 95U;
    msg.text.assign("GZIVEJGSAKUAYLRQTNUMZHIVKCAUPZDGGNMNBDXEHLELAHPDIRSFFZVOQYWKCHTNOHKWIXEDTXZZPWMPTLFEIOAYU");

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
    msg.setTimeStamp(0.5298991251762779);
    msg.setSource(60084U);
    msg.setSourceEntity(40U);
    msg.setDestination(43975U);
    msg.setDestinationEntity(225U);
    msg.op = 142U;
    msg.text.assign("PSRNJZVDZMUGHCZZOEDYBPJEMWNLRKATTSJVAKEMYWJOUVJBNOGOZQKKTMUBCUGPCWZNWIHXLKTWPJEUVODTIUGHQGVVLIRMCTHCQVMJXAIMDRKLYPSFDIUSBYAYFYGIODAFYOMLYWLSKZLXX");

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
    msg.setTimeStamp(0.21065018888066311);
    msg.setSource(17354U);
    msg.setSourceEntity(168U);
    msg.setDestination(13362U);
    msg.setDestinationEntity(168U);
    msg.op = 51U;
    msg.time_remain = 0.5747748106468648;
    msg.sched_time = 0.6153198772079865;

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
    msg.setTimeStamp(0.11083329418295063);
    msg.setSource(5691U);
    msg.setSourceEntity(207U);
    msg.setDestination(46185U);
    msg.setDestinationEntity(26U);
    msg.op = 251U;
    msg.time_remain = 0.9536972523557045;
    msg.sched_time = 0.6651361337781346;

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
    msg.setTimeStamp(0.10568509016207395);
    msg.setSource(23495U);
    msg.setSourceEntity(100U);
    msg.setDestination(53592U);
    msg.setDestinationEntity(83U);
    msg.op = 134U;
    msg.time_remain = 0.1304267662992029;
    msg.sched_time = 0.7041931285173543;

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
    msg.setTimeStamp(0.218314779999341);
    msg.setSource(28923U);
    msg.setSourceEntity(59U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(100U);
    msg.name.assign("VRGKMCPMYWWKOEBRLAMBOCHZKSHKUBSSNGQIZECTCYIQJEPOTHZTGYXFRXTNNPCXMSKOFWTSPDXAGGRNPYMEZHZKCAVEZIEUKHBBRMUUEENMXOVGLQGFHFWXYENTTDDUVKXLJWEPMJY");
    msg.op = 45U;
    msg.sched_time = 0.5317820006896364;

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
    msg.setTimeStamp(0.687531009750366);
    msg.setSource(46148U);
    msg.setSourceEntity(109U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(115U);
    msg.name.assign("CILSODIJVDGRDTETQNWSGDDXSEUFGXFMOBZKPKZBNNJYVAAOJGQBDOLCKCOSZSQYFKUUVCWPBEROLWTRHPTFMMFSQJTMJLBTJKHXYIWABVLHNXJOMWMOPV");
    msg.op = 234U;
    msg.sched_time = 0.44950742742020966;

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
    msg.setTimeStamp(0.6987209371631498);
    msg.setSource(20559U);
    msg.setSourceEntity(155U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(92U);
    msg.name.assign("HHRKJBRYUUSOFIMVCPIVAGCDYLODCXWKEAMR");
    msg.op = 202U;
    msg.sched_time = 0.27104363066194337;

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
    msg.setTimeStamp(0.6922189672563701);
    msg.setSource(28394U);
    msg.setSourceEntity(79U);
    msg.setDestination(13188U);
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
    msg.setTimeStamp(0.9739222802439614);
    msg.setSource(55819U);
    msg.setSourceEntity(94U);
    msg.setDestination(5140U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.8519123684831517);
    msg.setSource(23777U);
    msg.setSourceEntity(236U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.803116099193789);
    msg.setSource(16608U);
    msg.setSourceEntity(54U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(111U);
    msg.name.assign("YUFXOYWDVJ");
    msg.state = 162U;

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
    msg.setTimeStamp(0.254358621058119);
    msg.setSource(37858U);
    msg.setSourceEntity(113U);
    msg.setDestination(60723U);
    msg.setDestinationEntity(39U);
    msg.name.assign("YGNPJAKDCRYESIZDHLWFLVHKRAWHZCTVGXBHLZOSFNYJIBQGKGCHNMAAWROLZGGXBSKKLOBNVVLDASBDCTQCJPDRFHFRQUITJKUOJVIFXQXVDSPYXSEFSZNEXCNNTQPWGTCIGYJSRTVOLEQJALOPIUVITMEWJDZOWNTUTJMKQAHWOPFZSMCRTYECXSQDKLBIXDX");
    msg.state = 86U;

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
    msg.setTimeStamp(0.16118708684110616);
    msg.setSource(30445U);
    msg.setSourceEntity(132U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(3U);
    msg.name.assign("CGJYGRTKMJNEZXSEOPPUIYBTPVZNMPKZIBXDFEZJLCWMSHYNWMJGUEMZSYKQHNOOWFQNORXPHDBYNFKSSVQUCBIDAF");
    msg.state = 25U;

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
    msg.setTimeStamp(0.35235298866355536);
    msg.setSource(42943U);
    msg.setSourceEntity(181U);
    msg.setDestination(30813U);
    msg.setDestinationEntity(84U);
    msg.name.assign("HWVHHCNBZWYXTLPUSVRBYBRJZLVJFDINMWNIVTQMAOKUXPGUOMAFGKKCMLEPETDPIGEDOEZQSOXAJGNLVIELSJWFPXFTMCJXRQTOTBBWWWQJBXYIDWYY");
    msg.value = 161U;

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
    msg.setTimeStamp(0.6276746326516596);
    msg.setSource(6034U);
    msg.setSourceEntity(167U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(0U);
    msg.name.assign("YHFXRGDAZHFXKXPPWVGJIUWOTMJQIIIHYEZMIQWQCKZRJJKWADTEFBVXJERNWXPCEBSTOKPOVBNZFLAHQVIRBBDGPUAESNERGXOACBUCYJMNCVLVBZLQZVXSZUHINQIDMOCEAXFKYTHKDFEYARSNPYMTD");
    msg.value = 136U;

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
    msg.setTimeStamp(0.34909655387423577);
    msg.setSource(30450U);
    msg.setSourceEntity(85U);
    msg.setDestination(23438U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BCKEGMSQNOOYLWJRPTSMICEYUHQQHGNOAJEJVEJWZHX");
    msg.value = 117U;

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
    msg.setTimeStamp(0.4353202165899275);
    msg.setSource(29507U);
    msg.setSourceEntity(68U);
    msg.setDestination(59985U);
    msg.setDestinationEntity(166U);
    msg.name.assign("LLTLAXAXNXVFWFKAIFUJHJJKEKQZRVDQIEIAGCGOMYTCXBQWRNJCKGGONGAWYZZUHZPNOOZMPMFSHWAGGYCBTSLMRMPLMKHMYSMPSLOHEQZTFDBECFTKWYQOPSQVDFABWTUJXATKIHXRISHHQNMZNSWLEWDHUDPDISLTDWCZATCFRNBJSZPIKKJVSJ");

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
    msg.setTimeStamp(0.34022246883969853);
    msg.setSource(18923U);
    msg.setSourceEntity(185U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(5U);
    msg.name.assign("CSXGLJOUUMYXMXTTUZHNSBEHNYWFHOBTDWMUHENEKRJKOPQVQIKDKEFVBGPITYLPDEBHFFMSXFOCXSANZQRAYEGJBPTXMZKRVAFLAUTVCVOGFCMDXIOXSQNGIUHIWWYBSWQXGHJKAAVDZNJFKJQURZZTTYKYLCMADILOVREVLCHGBNNGOUUTQNPPWPLQK");

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
    msg.setTimeStamp(0.5462975566996339);
    msg.setSource(36220U);
    msg.setSourceEntity(174U);
    msg.setDestination(5020U);
    msg.setDestinationEntity(205U);
    msg.name.assign("VMZHQOGVFNHTBDUZJZEKOOQABKCYFSVZADPNYCMLVWUJBTXIFKKBC");

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
    msg.setTimeStamp(0.5882660830530929);
    msg.setSource(58921U);
    msg.setSourceEntity(154U);
    msg.setDestination(31077U);
    msg.setDestinationEntity(101U);
    msg.name.assign("OCBBQZHQMIQLAKTEBQSYHHCRZUEIZKOUKWJLRPCUDHPRWWQCQAVXPRSVATTFAXXWHKUPNJ");
    msg.value = 17U;

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
    msg.setTimeStamp(0.8134321433880441);
    msg.setSource(46402U);
    msg.setSourceEntity(141U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(145U);
    msg.name.assign("FDMIBMAFRCVOMKTFDIRKEMSNICOHZYRUHSWCMKNLBUQODYQIWFDXUTOCHYGNPQJFGKTSBWHADQZPQYQZFCGDGJXZCUXBUPVKRKVBBTGRMEGJFCLSXLXHPTIPTVDWPWVLHZLLMVYINVKEIKSAZCSDPRECFOQOIYRYDCVOUWAGJJEAZHZUEJMJAABTSKNPNOMIBVITYGNLBLVXTHQLDSNXEQUXRAKWHGRFGYTXQHNSEPL");
    msg.value = 20U;

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
    msg.setTimeStamp(0.027325024987264745);
    msg.setSource(61252U);
    msg.setSourceEntity(126U);
    msg.setDestination(5092U);
    msg.setDestinationEntity(141U);
    msg.name.assign("WRIFIOLYKNURDDPHJYCVBYWCKWEMKJFOIFBXJSCLMJRVOGUAELYXCZBMDQKKLTJVAFPNEZXXGXXZXVUVDOSBGMKPHMHSBOPYJZFKHGGSTQRACQAPTIEJCSELPTRBVBTPTIHFZQUBVPQJTYZDAQQSZJEGUUNLKLLMUXVFRRZOJOMZASFMWM");
    msg.value = 122U;

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
    msg.setTimeStamp(0.19231407259228228);
    msg.setSource(59574U);
    msg.setSourceEntity(152U);
    msg.setDestination(13001U);
    msg.setDestinationEntity(174U);
    msg.id = 27U;
    msg.period = 44463280U;
    msg.duty_cycle = 2058598272U;

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
    msg.setTimeStamp(0.13484944322613268);
    msg.setSource(31379U);
    msg.setSourceEntity(104U);
    msg.setDestination(10607U);
    msg.setDestinationEntity(179U);
    msg.id = 134U;
    msg.period = 675717609U;
    msg.duty_cycle = 1287440107U;

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
    msg.setTimeStamp(0.4331249909127508);
    msg.setSource(12397U);
    msg.setSourceEntity(160U);
    msg.setDestination(57931U);
    msg.setDestinationEntity(175U);
    msg.id = 158U;
    msg.period = 4092570234U;
    msg.duty_cycle = 3003368772U;

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
    msg.setTimeStamp(0.5258737436040122);
    msg.setSource(65486U);
    msg.setSourceEntity(192U);
    msg.setDestination(34020U);
    msg.setDestinationEntity(140U);
    msg.id = 232U;
    msg.period = 646027295U;
    msg.duty_cycle = 1354430867U;

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
    msg.setTimeStamp(0.7396795407176946);
    msg.setSource(50234U);
    msg.setSourceEntity(172U);
    msg.setDestination(38417U);
    msg.setDestinationEntity(29U);
    msg.id = 221U;
    msg.period = 813803701U;
    msg.duty_cycle = 3062606550U;

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
    msg.setTimeStamp(0.09405107934393497);
    msg.setSource(51442U);
    msg.setSourceEntity(86U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(117U);
    msg.id = 206U;
    msg.period = 731359358U;
    msg.duty_cycle = 884696441U;

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
    msg.setTimeStamp(0.8530366385913295);
    msg.setSource(63993U);
    msg.setSourceEntity(2U);
    msg.setDestination(62045U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.6700620134166864;
    msg.lon = 0.4847662150937634;
    msg.height = 0.8464264950205442;
    msg.x = 0.7261462460634288;
    msg.y = 0.5391689812165319;
    msg.z = 0.8542111272850823;
    msg.phi = 0.8891467269180242;
    msg.theta = 0.7704307905565692;
    msg.psi = 0.7359977767806982;
    msg.u = 0.5990091262752052;
    msg.v = 0.8315609186149051;
    msg.w = 0.7742369152544902;
    msg.vx = 0.1482419061734832;
    msg.vy = 0.8227211197225145;
    msg.vz = 0.44330543617518625;
    msg.p = 0.5391299299343089;
    msg.q = 0.10053994133530153;
    msg.r = 0.545248143302401;
    msg.depth = 0.3773899495385906;
    msg.alt = 0.3103970530282375;

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
    msg.setTimeStamp(0.20453596973536292);
    msg.setSource(6988U);
    msg.setSourceEntity(19U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.19051009553080656;
    msg.lon = 0.6942790479640117;
    msg.height = 0.08344068089874124;
    msg.x = 0.9106983940810743;
    msg.y = 0.04848691971257846;
    msg.z = 0.8302896076386833;
    msg.phi = 0.583713210416374;
    msg.theta = 0.037299705025074736;
    msg.psi = 0.8586291428615235;
    msg.u = 0.2632045192380188;
    msg.v = 0.5409335949467483;
    msg.w = 0.5904348658428149;
    msg.vx = 0.1004187421807552;
    msg.vy = 0.9295092198299689;
    msg.vz = 0.2586899702739206;
    msg.p = 0.21210795531629334;
    msg.q = 0.5756944523504325;
    msg.r = 0.08183361263833322;
    msg.depth = 0.42359845827515574;
    msg.alt = 0.28730382849699476;

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
    msg.setTimeStamp(0.4105204745173322);
    msg.setSource(20301U);
    msg.setSourceEntity(159U);
    msg.setDestination(22026U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.8680202422179801;
    msg.lon = 0.33722236113037574;
    msg.height = 0.8302629021266547;
    msg.x = 0.8509979251291272;
    msg.y = 0.6769434290019977;
    msg.z = 0.36537250397802956;
    msg.phi = 0.9431213514103557;
    msg.theta = 0.10059081850163076;
    msg.psi = 0.012274931520770083;
    msg.u = 0.8463549286025228;
    msg.v = 0.7295986754312042;
    msg.w = 0.3123346117256386;
    msg.vx = 0.3385928299407682;
    msg.vy = 0.4498706261948099;
    msg.vz = 0.5833727362338722;
    msg.p = 0.506017578660226;
    msg.q = 0.7225348657034814;
    msg.r = 0.5936640442614306;
    msg.depth = 0.9029652867812981;
    msg.alt = 0.314112941414332;

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
    msg.setTimeStamp(0.38048653903349783);
    msg.setSource(65300U);
    msg.setSourceEntity(252U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(32U);
    msg.x = 0.8137700985665838;
    msg.y = 0.7255574097354218;
    msg.z = 0.4768597149361692;

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
    msg.setTimeStamp(0.2596627066917695);
    msg.setSource(10733U);
    msg.setSourceEntity(66U);
    msg.setDestination(33534U);
    msg.setDestinationEntity(157U);
    msg.x = 0.9341767868043147;
    msg.y = 0.2232622884494787;
    msg.z = 0.883484450154355;

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
    msg.setTimeStamp(0.6824477509014186);
    msg.setSource(57438U);
    msg.setSourceEntity(117U);
    msg.setDestination(42115U);
    msg.setDestinationEntity(218U);
    msg.x = 0.7120305553505524;
    msg.y = 0.3926622624408408;
    msg.z = 0.04410878307305244;

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
    msg.setTimeStamp(0.0543110514022509);
    msg.setSource(60326U);
    msg.setSourceEntity(85U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(101U);
    msg.value = 0.2871378665159686;

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
    msg.setTimeStamp(0.13934845257376594);
    msg.setSource(64656U);
    msg.setSourceEntity(114U);
    msg.setDestination(44963U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7467424424755409;

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
    msg.setTimeStamp(0.4913118434649635);
    msg.setSource(59860U);
    msg.setSourceEntity(169U);
    msg.setDestination(65432U);
    msg.setDestinationEntity(39U);
    msg.value = 0.4723068548372703;

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
    msg.setTimeStamp(0.4694156233022221);
    msg.setSource(57831U);
    msg.setSourceEntity(74U);
    msg.setDestination(63867U);
    msg.setDestinationEntity(41U);
    msg.value = 0.06232176773602205;

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
    msg.setTimeStamp(0.7499623248298768);
    msg.setSource(12830U);
    msg.setSourceEntity(192U);
    msg.setDestination(20307U);
    msg.setDestinationEntity(237U);
    msg.value = 0.19668231826337645;

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
    msg.setTimeStamp(0.9624506809805772);
    msg.setSource(2320U);
    msg.setSourceEntity(233U);
    msg.setDestination(44759U);
    msg.setDestinationEntity(181U);
    msg.value = 0.16675838729987913;

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
    msg.setTimeStamp(0.08037648590684654);
    msg.setSource(35940U);
    msg.setSourceEntity(42U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(86U);
    msg.x = 0.9073451531250978;
    msg.y = 0.3670501827804986;
    msg.z = 0.029809581208598113;
    msg.phi = 0.7959672069298925;
    msg.theta = 0.4096088017939855;
    msg.psi = 0.5160149306755849;
    msg.p = 0.7532192092230211;
    msg.q = 0.037855021193242244;
    msg.r = 0.3939592075327475;
    msg.u = 0.8684433077938083;
    msg.v = 0.7323044966313839;
    msg.w = 0.7523466863210538;
    msg.bias_psi = 0.6561997980343817;
    msg.bias_r = 0.26500440089117583;

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
    msg.setTimeStamp(0.0034841708912709546);
    msg.setSource(38941U);
    msg.setSourceEntity(3U);
    msg.setDestination(9972U);
    msg.setDestinationEntity(159U);
    msg.x = 0.4407414951190872;
    msg.y = 0.9691892982495294;
    msg.z = 0.8765296463297625;
    msg.phi = 0.8001379252115823;
    msg.theta = 0.45609371931746834;
    msg.psi = 0.7061837232789077;
    msg.p = 0.42174890536325826;
    msg.q = 0.7155908647736757;
    msg.r = 0.2825080075049423;
    msg.u = 0.8821404895334237;
    msg.v = 0.19379233322668432;
    msg.w = 0.8647097038057362;
    msg.bias_psi = 0.29076039485878946;
    msg.bias_r = 0.385888036331003;

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
    msg.setTimeStamp(0.3249535340511085);
    msg.setSource(5745U);
    msg.setSourceEntity(244U);
    msg.setDestination(54680U);
    msg.setDestinationEntity(75U);
    msg.x = 0.24666231600875455;
    msg.y = 0.7988591071404479;
    msg.z = 0.18833230546772606;
    msg.phi = 0.5091986980706025;
    msg.theta = 0.8722048895187383;
    msg.psi = 0.7446639568773377;
    msg.p = 0.8498645140970477;
    msg.q = 0.8557064892759655;
    msg.r = 0.5015075795648974;
    msg.u = 0.9969757248453679;
    msg.v = 0.5961707301912089;
    msg.w = 0.3336359533654193;
    msg.bias_psi = 0.5127237776950027;
    msg.bias_r = 0.4291535857191662;

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
    msg.setTimeStamp(0.3908774198093846);
    msg.setSource(57861U);
    msg.setSourceEntity(12U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(207U);
    msg.bias_psi = 0.48720910166017695;
    msg.bias_r = 0.29754037108775666;
    msg.cog = 0.3350395514275454;
    msg.cyaw = 0.42913527328181345;
    msg.lbl_rej_level = 0.19494177724885076;
    msg.gps_rej_level = 0.1210412566743293;
    msg.custom_x = 0.8029702187510372;
    msg.custom_y = 0.18144256699135508;
    msg.custom_z = 0.2869477261272042;

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
    msg.setTimeStamp(0.8400509688524365);
    msg.setSource(36855U);
    msg.setSourceEntity(62U);
    msg.setDestination(2814U);
    msg.setDestinationEntity(246U);
    msg.bias_psi = 0.24157995048298253;
    msg.bias_r = 0.3028115706432376;
    msg.cog = 0.6105017053800553;
    msg.cyaw = 0.36517161728765024;
    msg.lbl_rej_level = 0.3469637403100897;
    msg.gps_rej_level = 0.6728438095761616;
    msg.custom_x = 0.2621494601288199;
    msg.custom_y = 0.9593046640091283;
    msg.custom_z = 0.18516748882074585;

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
    msg.setTimeStamp(0.44546461854480235);
    msg.setSource(33779U);
    msg.setSourceEntity(151U);
    msg.setDestination(40236U);
    msg.setDestinationEntity(9U);
    msg.bias_psi = 0.7424933697235231;
    msg.bias_r = 0.95490107867416;
    msg.cog = 0.5619889905682938;
    msg.cyaw = 0.8051738023880495;
    msg.lbl_rej_level = 0.3186405494563307;
    msg.gps_rej_level = 0.3216553046705328;
    msg.custom_x = 0.1274168930389662;
    msg.custom_y = 0.9530605019033973;
    msg.custom_z = 0.9445335328623513;

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
    msg.setTimeStamp(0.010750370449983726);
    msg.setSource(24477U);
    msg.setSourceEntity(221U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(166U);
    msg.utc_time = 0.7033800406379948;
    msg.reason = 163U;

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
    msg.setTimeStamp(0.26920938396138694);
    msg.setSource(38874U);
    msg.setSourceEntity(25U);
    msg.setDestination(30623U);
    msg.setDestinationEntity(164U);
    msg.utc_time = 0.8850761614826288;
    msg.reason = 147U;

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
    msg.setTimeStamp(0.34364282496150755);
    msg.setSource(37225U);
    msg.setSourceEntity(123U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(50U);
    msg.utc_time = 0.4325745560726051;
    msg.reason = 73U;

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
    msg.setTimeStamp(0.02324799161786706);
    msg.setSource(62768U);
    msg.setSourceEntity(90U);
    msg.setDestination(16597U);
    msg.setDestinationEntity(206U);
    msg.id = 155U;
    msg.range = 0.07420077027335537;
    msg.acceptance = 49U;

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
    msg.setTimeStamp(0.4317034199178633);
    msg.setSource(47940U);
    msg.setSourceEntity(68U);
    msg.setDestination(268U);
    msg.setDestinationEntity(169U);
    msg.id = 104U;
    msg.range = 0.8903112072598139;
    msg.acceptance = 99U;

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
    msg.setTimeStamp(0.5729859269841097);
    msg.setSource(44236U);
    msg.setSourceEntity(63U);
    msg.setDestination(3561U);
    msg.setDestinationEntity(72U);
    msg.id = 40U;
    msg.range = 0.5390498628693731;
    msg.acceptance = 71U;

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
    msg.setTimeStamp(0.7459087300408336);
    msg.setSource(64360U);
    msg.setSourceEntity(181U);
    msg.setDestination(50923U);
    msg.setDestinationEntity(246U);
    msg.type = 189U;
    msg.reason = 81U;
    msg.value = 0.37721485196376847;
    msg.timestep = 0.518097099080829;

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
    msg.setTimeStamp(0.11229669122630936);
    msg.setSource(17968U);
    msg.setSourceEntity(80U);
    msg.setDestination(11560U);
    msg.setDestinationEntity(90U);
    msg.type = 151U;
    msg.reason = 66U;
    msg.value = 0.6096186450379533;
    msg.timestep = 0.35310193541679513;

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
    msg.setTimeStamp(0.3534219638075412);
    msg.setSource(36658U);
    msg.setSourceEntity(51U);
    msg.setDestination(31687U);
    msg.setDestinationEntity(104U);
    msg.type = 5U;
    msg.reason = 87U;
    msg.value = 0.5886824216281709;
    msg.timestep = 0.1771522610079791;

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
    msg.setTimeStamp(0.5835324213875147);
    msg.setSource(28821U);
    msg.setSourceEntity(66U);
    msg.setDestination(50928U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NXZTIGQBGTSVHIHWOEZBMIATADGRSLLFFQRPBEKHHPGVXNZTPIDJAWIHRCMVVMOXTUOUFBEPBICBMVQSGWXYRBNVKLMLUEGDTSJOVQUNXKKGAIYUEQEJZBYDVU");
    tmp_msg_0.lat = 0.04883158107900787;
    tmp_msg_0.lon = 0.11136036217834366;
    tmp_msg_0.depth = 0.0599940330861608;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 10U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4824650586592333;
    msg.y = 0.9615899010317356;
    msg.var_x = 0.9954834890100743;
    msg.var_y = 0.8783059555836001;
    msg.distance = 0.10990289345121063;

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
    msg.setTimeStamp(0.2767313977681951);
    msg.setSource(5567U);
    msg.setSourceEntity(5U);
    msg.setDestination(52221U);
    msg.setDestinationEntity(118U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WOPMIQDVPXOCYDIRLMXCHPBCNMHITHVGJFEGYNXBOSNJOJWXWHYNSQDXSOHZUZMGZAKVTERXHQVKITSSULETPPDFKSQHXWBUHFTMTSXOBQZOWGCQAWTJEIQFMJRLQNQPFZRPJWJDZKLMKUKI");
    tmp_msg_0.lat = 0.6630105253233586;
    tmp_msg_0.lon = 0.9717887420171033;
    tmp_msg_0.depth = 0.26895490440130265;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 36U;
    tmp_msg_0.transponder_delay = 1U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0418424675364758;
    msg.y = 0.7583338451838628;
    msg.var_x = 0.07134834891667952;
    msg.var_y = 0.8767425318566416;
    msg.distance = 0.5376663991449482;

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
    msg.setTimeStamp(0.6311577045480372);
    msg.setSource(17031U);
    msg.setSourceEntity(209U);
    msg.setDestination(57547U);
    msg.setDestinationEntity(61U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HXIDYYFUBYIRCCYGJTVBMGGESSNCETJJGWNLPIFEUJQXSBEGCIIVLQVYAHKAOYPNMDXOCWNYDUSKOZQCEKBQTBETLVQUNMDCZNYUDHRAUTDKAQRQTGFRZBFWPTIXVGHKDMSFFYPQLHLWIZRHJGFIRZLVSUPESVAZHJZGXJOXDVPUSKWXPPTOIRTWRUZBCYWPLLMKVSDXVHKOARTLGHZOEOBCJNMBEADACZWSKOAQKFMAXFUJM");
    tmp_msg_0.lat = 0.2074559483691476;
    tmp_msg_0.lon = 0.7541081532046762;
    tmp_msg_0.depth = 0.06827110592167096;
    tmp_msg_0.query_channel = 152U;
    tmp_msg_0.reply_channel = 45U;
    tmp_msg_0.transponder_delay = 149U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6612202005255724;
    msg.y = 0.7909269736399317;
    msg.var_x = 0.6386520001193684;
    msg.var_y = 0.9384698714230202;
    msg.distance = 0.9834154358640951;

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
    msg.setTimeStamp(0.275622024210916);
    msg.setSource(14266U);
    msg.setSourceEntity(107U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(204U);
    msg.state = 85U;

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
    msg.setTimeStamp(0.09603593597823645);
    msg.setSource(33636U);
    msg.setSourceEntity(113U);
    msg.setDestination(28236U);
    msg.setDestinationEntity(249U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.8335617411848911);
    msg.setSource(18310U);
    msg.setSourceEntity(143U);
    msg.setDestination(31271U);
    msg.setDestinationEntity(182U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.3357947386057448);
    msg.setSource(41489U);
    msg.setSourceEntity(91U);
    msg.setDestination(32754U);
    msg.setDestinationEntity(179U);
    msg.x = 0.892938689717798;
    msg.y = 0.743519317524681;
    msg.z = 0.3494285100697806;

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
    msg.setTimeStamp(0.6401084213775207);
    msg.setSource(56390U);
    msg.setSourceEntity(201U);
    msg.setDestination(40966U);
    msg.setDestinationEntity(4U);
    msg.x = 0.7714183767657272;
    msg.y = 0.031206124709465155;
    msg.z = 0.23778616062160673;

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
    msg.setTimeStamp(0.2084823553636913);
    msg.setSource(14466U);
    msg.setSourceEntity(156U);
    msg.setDestination(34687U);
    msg.setDestinationEntity(114U);
    msg.x = 0.12657482733015446;
    msg.y = 0.05984567961212661;
    msg.z = 0.8512061806496857;

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
    msg.setTimeStamp(0.18983141138980542);
    msg.setSource(21361U);
    msg.setSourceEntity(233U);
    msg.setDestination(34743U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9760628986427985;

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
    msg.setTimeStamp(0.6131259845308763);
    msg.setSource(1053U);
    msg.setSourceEntity(180U);
    msg.setDestination(57574U);
    msg.setDestinationEntity(185U);
    msg.value = 0.4862464483923632;

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
    msg.setTimeStamp(0.13112540710933418);
    msg.setSource(5572U);
    msg.setSourceEntity(208U);
    msg.setDestination(18706U);
    msg.setDestinationEntity(86U);
    msg.value = 0.018849908817080818;

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
    msg.setTimeStamp(0.859498148333583);
    msg.setSource(6774U);
    msg.setSourceEntity(193U);
    msg.setDestination(35667U);
    msg.setDestinationEntity(23U);
    msg.value = 0.05528265994092041;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.5634601678699062);
    msg.setSource(59360U);
    msg.setSourceEntity(18U);
    msg.setDestination(5530U);
    msg.setDestinationEntity(246U);
    msg.value = 0.38381479466551904;
    msg.z_units = 49U;

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
    msg.setTimeStamp(0.0972851106877769);
    msg.setSource(37652U);
    msg.setSourceEntity(65U);
    msg.setDestination(37239U);
    msg.setDestinationEntity(86U);
    msg.value = 0.4018303113023519;
    msg.z_units = 110U;

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
    msg.setTimeStamp(0.8733050469311754);
    msg.setSource(9681U);
    msg.setSourceEntity(197U);
    msg.setDestination(43108U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5288710033677786;
    msg.speed_units = 148U;

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
    msg.setTimeStamp(0.5029173443993831);
    msg.setSource(42750U);
    msg.setSourceEntity(235U);
    msg.setDestination(29850U);
    msg.setDestinationEntity(110U);
    msg.value = 0.12793555891576958;
    msg.speed_units = 196U;

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
    msg.setTimeStamp(0.6453776246730477);
    msg.setSource(1728U);
    msg.setSourceEntity(222U);
    msg.setDestination(46826U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9954875529027304;
    msg.speed_units = 58U;

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
    msg.setTimeStamp(0.4629168731251071);
    msg.setSource(27173U);
    msg.setSourceEntity(245U);
    msg.setDestination(18955U);
    msg.setDestinationEntity(110U);
    msg.value = 0.4250504010685727;

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
    msg.setTimeStamp(0.524103703750177);
    msg.setSource(63501U);
    msg.setSourceEntity(151U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8043329809159593;

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
    msg.setTimeStamp(0.3261589671535394);
    msg.setSource(47772U);
    msg.setSourceEntity(22U);
    msg.setDestination(62597U);
    msg.setDestinationEntity(227U);
    msg.value = 0.5973790545707242;

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
    msg.setTimeStamp(0.25947287273410924);
    msg.setSource(57397U);
    msg.setSourceEntity(232U);
    msg.setDestination(9512U);
    msg.setDestinationEntity(180U);
    msg.value = 0.8890884676342096;

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
    msg.setTimeStamp(0.2768917068908774);
    msg.setSource(15880U);
    msg.setSourceEntity(233U);
    msg.setDestination(29138U);
    msg.setDestinationEntity(117U);
    msg.value = 0.05835295643317262;

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
    msg.setTimeStamp(0.6658006886363143);
    msg.setSource(5622U);
    msg.setSourceEntity(6U);
    msg.setDestination(21049U);
    msg.setDestinationEntity(156U);
    msg.value = 0.32543334527171586;

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
    msg.setTimeStamp(0.4303936915176325);
    msg.setSource(43U);
    msg.setSourceEntity(162U);
    msg.setDestination(40777U);
    msg.setDestinationEntity(137U);
    msg.value = 0.5889270603719478;

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
    msg.setTimeStamp(0.7474380315280846);
    msg.setSource(55952U);
    msg.setSourceEntity(59U);
    msg.setDestination(55527U);
    msg.setDestinationEntity(237U);
    msg.value = 0.5780049128908128;

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
    msg.setTimeStamp(0.912152518529776);
    msg.setSource(47707U);
    msg.setSourceEntity(230U);
    msg.setDestination(9367U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7460600738229571;

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
    msg.setTimeStamp(0.8406817168148265);
    msg.setSource(3508U);
    msg.setSourceEntity(76U);
    msg.setDestination(23251U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 3274107942U;
    msg.start_lat = 0.6863237747280876;
    msg.start_lon = 0.4241823568329962;
    msg.start_z = 0.73869562074643;
    msg.start_z_units = 10U;
    msg.end_lat = 0.7612071096020426;
    msg.end_lon = 0.5917506809731236;
    msg.end_z = 0.6109462824199503;
    msg.end_z_units = 230U;
    msg.speed = 0.6724460175857405;
    msg.speed_units = 139U;
    msg.lradius = 0.7028131883467533;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.5315592316274454);
    msg.setSource(54786U);
    msg.setSourceEntity(12U);
    msg.setDestination(37840U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 4059383077U;
    msg.start_lat = 0.06669791896162769;
    msg.start_lon = 0.2994610416460872;
    msg.start_z = 0.4491442650306472;
    msg.start_z_units = 245U;
    msg.end_lat = 0.41831874297226523;
    msg.end_lon = 0.6657010752484855;
    msg.end_z = 0.0361631046355777;
    msg.end_z_units = 67U;
    msg.speed = 0.7129604260880943;
    msg.speed_units = 250U;
    msg.lradius = 0.30944248185729506;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.6330624345268601);
    msg.setSource(59766U);
    msg.setSourceEntity(74U);
    msg.setDestination(48896U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 2665806317U;
    msg.start_lat = 0.4376130195469129;
    msg.start_lon = 0.1712026542837476;
    msg.start_z = 0.8951872268356572;
    msg.start_z_units = 207U;
    msg.end_lat = 0.8030714014233996;
    msg.end_lon = 0.5549157275130231;
    msg.end_z = 0.031419565427010854;
    msg.end_z_units = 227U;
    msg.speed = 0.537745313365156;
    msg.speed_units = 253U;
    msg.lradius = 0.004999635126513802;
    msg.flags = 202U;

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
    msg.setTimeStamp(0.3996505612339588);
    msg.setSource(21413U);
    msg.setSourceEntity(69U);
    msg.setDestination(37641U);
    msg.setDestinationEntity(47U);
    msg.x = 0.6743575093315817;
    msg.y = 0.3673933936355547;
    msg.z = 0.75822187823424;
    msg.k = 0.5008674004914723;
    msg.m = 0.548646707513774;
    msg.n = 0.5253222474980115;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.10650823771482842);
    msg.setSource(18393U);
    msg.setSourceEntity(67U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(9U);
    msg.x = 0.9297317069918019;
    msg.y = 0.3468862037541899;
    msg.z = 0.19684856581320298;
    msg.k = 0.28895295564969015;
    msg.m = 0.33108264463710835;
    msg.n = 0.9016566845993226;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.2865678801555489);
    msg.setSource(2696U);
    msg.setSourceEntity(184U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(45U);
    msg.x = 0.35222765854812566;
    msg.y = 0.7872739873387161;
    msg.z = 0.6561039190574923;
    msg.k = 0.9152727195115926;
    msg.m = 0.4985767251144331;
    msg.n = 0.5777317586308661;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.8500788591881089);
    msg.setSource(6043U);
    msg.setSourceEntity(29U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(225U);
    msg.value = 0.025564368742495236;

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
    msg.setTimeStamp(0.6047484028562881);
    msg.setSource(17833U);
    msg.setSourceEntity(244U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9515105781627583;

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
    msg.setTimeStamp(0.4518705113164124);
    msg.setSource(20681U);
    msg.setSourceEntity(198U);
    msg.setDestination(12550U);
    msg.setDestinationEntity(119U);
    msg.value = 0.8506357314655382;

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
    msg.setTimeStamp(0.22475454385446547);
    msg.setSource(56363U);
    msg.setSourceEntity(251U);
    msg.setDestination(50555U);
    msg.setDestinationEntity(216U);
    msg.u = 0.648711436845021;
    msg.v = 0.7939701170104256;
    msg.w = 0.9933869939572709;
    msg.p = 0.6189264594336606;
    msg.q = 0.38575570575863716;
    msg.r = 0.4346689163828946;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.2752471003702657);
    msg.setSource(61242U);
    msg.setSourceEntity(174U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(153U);
    msg.u = 0.254027975615863;
    msg.v = 0.4927670482610148;
    msg.w = 0.10178457882579273;
    msg.p = 0.8298831509844076;
    msg.q = 0.6231366404847982;
    msg.r = 0.9155792113888491;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.8177035539243176);
    msg.setSource(15736U);
    msg.setSourceEntity(50U);
    msg.setDestination(47418U);
    msg.setDestinationEntity(14U);
    msg.u = 0.6344016356502234;
    msg.v = 0.08500482841555523;
    msg.w = 0.7287120391863848;
    msg.p = 0.6528453401962022;
    msg.q = 0.7482793203213175;
    msg.r = 0.7991141309909059;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.973981278677807);
    msg.setSource(31468U);
    msg.setSourceEntity(28U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(103U);
    msg.path_ref = 3979738726U;
    msg.start_lat = 0.5728702221342765;
    msg.start_lon = 0.4216188168556161;
    msg.start_z = 0.8025980244444553;
    msg.start_z_units = 6U;
    msg.end_lat = 0.7130469621242237;
    msg.end_lon = 0.050779540071767326;
    msg.end_z = 0.6994074592223951;
    msg.end_z_units = 235U;
    msg.lradius = 0.8118366150034892;
    msg.flags = 9U;
    msg.x = 0.8776355766683388;
    msg.y = 0.08913529031572287;
    msg.z = 0.06261499882975974;
    msg.vx = 0.3006697829271807;
    msg.vy = 0.746032442564738;
    msg.vz = 0.25396215046391546;
    msg.course_error = 0.6512767309880403;
    msg.eta = 39634U;

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
    msg.setTimeStamp(0.6682564008196434);
    msg.setSource(35486U);
    msg.setSourceEntity(13U);
    msg.setDestination(15815U);
    msg.setDestinationEntity(18U);
    msg.path_ref = 289299579U;
    msg.start_lat = 0.14057778922465503;
    msg.start_lon = 0.3935504512818464;
    msg.start_z = 0.10683476526781199;
    msg.start_z_units = 174U;
    msg.end_lat = 0.923697120677482;
    msg.end_lon = 0.33630440467615685;
    msg.end_z = 0.9259539781092679;
    msg.end_z_units = 164U;
    msg.lradius = 0.9669882849861693;
    msg.flags = 222U;
    msg.x = 0.5227563439863245;
    msg.y = 0.14353915060647238;
    msg.z = 0.25407643995387574;
    msg.vx = 0.24510012086977007;
    msg.vy = 0.5888975159204006;
    msg.vz = 0.5096651237041123;
    msg.course_error = 0.6539580313086318;
    msg.eta = 12774U;

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
    msg.setTimeStamp(0.28794437969510267);
    msg.setSource(47997U);
    msg.setSourceEntity(238U);
    msg.setDestination(52004U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 2276774207U;
    msg.start_lat = 0.562264333036325;
    msg.start_lon = 0.699515403016188;
    msg.start_z = 0.4418304051787494;
    msg.start_z_units = 27U;
    msg.end_lat = 0.15626161489022727;
    msg.end_lon = 0.5875258791402991;
    msg.end_z = 0.48576696771264105;
    msg.end_z_units = 174U;
    msg.lradius = 0.46863241937824884;
    msg.flags = 216U;
    msg.x = 0.6116339888067308;
    msg.y = 0.6918748530732276;
    msg.z = 0.6806914438945384;
    msg.vx = 0.4895606427277257;
    msg.vy = 0.7709495793307835;
    msg.vz = 0.7785215227017548;
    msg.course_error = 0.34960861540441324;
    msg.eta = 41864U;

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
    msg.setTimeStamp(0.5903749792222134);
    msg.setSource(55978U);
    msg.setSourceEntity(243U);
    msg.setDestination(61675U);
    msg.setDestinationEntity(1U);
    msg.k = 0.30866081292283576;
    msg.m = 0.20521592481103634;
    msg.n = 0.7140390240137457;

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
    msg.setTimeStamp(0.08987323350020648);
    msg.setSource(13165U);
    msg.setSourceEntity(194U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(115U);
    msg.k = 0.7447106489269881;
    msg.m = 0.9248145344148884;
    msg.n = 0.1457938048183225;

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
    msg.setTimeStamp(0.36462531105612295);
    msg.setSource(62413U);
    msg.setSourceEntity(66U);
    msg.setDestination(50074U);
    msg.setDestinationEntity(133U);
    msg.k = 0.5443596390624529;
    msg.m = 0.7977192326756004;
    msg.n = 0.5091454131412397;

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
    msg.setTimeStamp(0.8408434015701147);
    msg.setSource(58749U);
    msg.setSourceEntity(12U);
    msg.setDestination(55102U);
    msg.setDestinationEntity(179U);
    msg.p = 0.4463677555628367;
    msg.i = 0.603798044579227;
    msg.d = 0.561028088990193;
    msg.a = 0.09124140975837303;

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
    msg.setTimeStamp(0.8785549646723801);
    msg.setSource(11459U);
    msg.setSourceEntity(26U);
    msg.setDestination(1060U);
    msg.setDestinationEntity(33U);
    msg.p = 0.20990926298009105;
    msg.i = 0.5581735196919339;
    msg.d = 0.08095814302650661;
    msg.a = 0.21906371972345662;

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
    msg.setTimeStamp(0.9555027047133887);
    msg.setSource(56586U);
    msg.setSourceEntity(222U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(209U);
    msg.p = 0.6573723447287606;
    msg.i = 0.9594512095380574;
    msg.d = 0.366827880484365;
    msg.a = 0.947742496286054;

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
    msg.setTimeStamp(0.9035915329368005);
    msg.setSource(58261U);
    msg.setSourceEntity(88U);
    msg.setDestination(17647U);
    msg.setDestinationEntity(195U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.2803354489081762);
    msg.setSource(30166U);
    msg.setSourceEntity(167U);
    msg.setDestination(39070U);
    msg.setDestinationEntity(240U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.1839601472095398);
    msg.setSource(21492U);
    msg.setSourceEntity(221U);
    msg.setDestination(64003U);
    msg.setDestinationEntity(160U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.08086928379026403);
    msg.setSource(31715U);
    msg.setSourceEntity(26U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(178U);
    msg.timeout = 10575U;
    msg.lat = 0.7963978513725042;
    msg.lon = 0.8121313330136526;
    msg.z = 0.34938807727916676;
    msg.z_units = 24U;
    msg.speed = 0.9178640848878792;
    msg.speed_units = 123U;
    msg.roll = 0.34576517705491683;
    msg.pitch = 0.6137606755473264;
    msg.yaw = 0.39557271548696094;
    msg.custom.assign("DPICKEXZAIYIUHYMXMSVWSKLPBHICUTIRLGPCEPMTOUQOLRDYMVCEGETWOKEZUSJORVXXEHFLVFRLZZJAAXPEDLVXGFHUZFIJZWJNIYPDCCQYJMUMZNTJDTFJYQWASJQNVPTCHOONUXTNGBDMHYOYQBALHWLBEKFHZUAYXJJSMKATAETOWOVB");

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
    msg.setTimeStamp(0.8762279928951799);
    msg.setSource(13268U);
    msg.setSourceEntity(116U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(133U);
    msg.timeout = 27841U;
    msg.lat = 0.14386044689233024;
    msg.lon = 0.11220195959372414;
    msg.z = 0.5426700581332645;
    msg.z_units = 95U;
    msg.speed = 0.45132404169169227;
    msg.speed_units = 105U;
    msg.roll = 0.20175250088174035;
    msg.pitch = 0.5110658937557133;
    msg.yaw = 0.8386455929324893;
    msg.custom.assign("JWVEPOSJPRCBDZNMANCMLGCOZMHFVGBZJGPWWUFFAYRIENVMFULVMYSRCSUZONCSDBKCTWYXIYUAGGHYKJWRJAIMVOQTYQQZLZDCWDPBHFLKJRGXZHCPAWXJDNMXWLTEEAESJTVBTXIHRYXUKOKGOKMWBDVYKNLHHEATPGQIFQHIGTBJACAISUUDVXLSVVE");

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
    msg.setTimeStamp(0.043413069599384624);
    msg.setSource(59477U);
    msg.setSourceEntity(25U);
    msg.setDestination(28801U);
    msg.setDestinationEntity(189U);
    msg.timeout = 5997U;
    msg.lat = 0.13164770370598855;
    msg.lon = 0.4342625346467287;
    msg.z = 0.8304377093689203;
    msg.z_units = 1U;
    msg.speed = 0.5885298705973642;
    msg.speed_units = 61U;
    msg.roll = 0.031478110922688596;
    msg.pitch = 0.18063542037256874;
    msg.yaw = 0.6713995234990177;
    msg.custom.assign("YIZAPCQWQXWJTEINMGETOREKFHUPOG");

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
    msg.setTimeStamp(0.4611072389934485);
    msg.setSource(62134U);
    msg.setSourceEntity(247U);
    msg.setDestination(17691U);
    msg.setDestinationEntity(229U);
    msg.timeout = 578U;
    msg.lat = 0.1686863217877791;
    msg.lon = 0.4628781872159198;
    msg.z = 0.3213260397166605;
    msg.z_units = 243U;
    msg.speed = 0.9681901034907491;
    msg.speed_units = 102U;
    msg.duration = 15145U;
    msg.radius = 0.6568984677002594;
    msg.flags = 113U;
    msg.custom.assign("VELDYXTGYGTRXSUUGQBXKOQNHQJUUJZCMFJSRIXRKWCUAEKFBHPCQFKOQSDLYGMRGLPPAJNJJYKISRXYICUERSXHAJKAPQBEWKWEVEQXDONBDDTTFOIKZPKOFZHTRYOBWMHITWMERMMHULARQGQGFYOLLRDVYIZTCBPHLG");

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
    msg.setTimeStamp(0.4807058012111626);
    msg.setSource(3726U);
    msg.setSourceEntity(175U);
    msg.setDestination(64493U);
    msg.setDestinationEntity(71U);
    msg.timeout = 34322U;
    msg.lat = 0.24238662877994432;
    msg.lon = 0.15430754446409378;
    msg.z = 0.300756806080278;
    msg.z_units = 30U;
    msg.speed = 0.5050979502625073;
    msg.speed_units = 195U;
    msg.duration = 8267U;
    msg.radius = 0.46410976030149287;
    msg.flags = 71U;
    msg.custom.assign("YUTZUVTMEYYWIWJBXDARQTNNEHEIRWLWKQYKPBXCBGLIHMUSMNFQVCTCBGTSWOMHNRPYVODJEVMTCVRBRSRODNDXUDUKTBWGMGVIZASXQWKJNNUASDPDGPXCVOWGLKXIDCSUDHFFKOKZRXFIGFNIXPVSZESJIQNFUMBAFKAPDCLZBYUJPAZGZOMECANRZIQOUXLEIRYFTEAHYJVMSPLAPHGBQ");

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
    msg.setTimeStamp(0.5702960277115102);
    msg.setSource(63112U);
    msg.setSourceEntity(251U);
    msg.setDestination(60106U);
    msg.setDestinationEntity(54U);
    msg.timeout = 39665U;
    msg.lat = 0.13158704074599015;
    msg.lon = 0.10893890773330805;
    msg.z = 0.10258076914259695;
    msg.z_units = 167U;
    msg.speed = 0.37616157567275754;
    msg.speed_units = 137U;
    msg.duration = 56288U;
    msg.radius = 0.3318607224207548;
    msg.flags = 69U;
    msg.custom.assign("WWDUANLZSSTSVGICXOMJ");

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
    msg.setTimeStamp(0.7151574868848755);
    msg.setSource(57471U);
    msg.setSourceEntity(112U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(120U);
    msg.custom.assign("PBLHOTYIQFGKTCKZTZHEISPIVBTUKQXQRDWYOSLQWRLYOAWJGZYFKIPANAWUTLJDQPMUCCASCXLKPGSWFUZJWMTUGCHTADCFNCSXUYUSVQCNNVOMWLHZFNUYDRVEGEEZHPNWZOJVBFPTYYTDGXRQYAZQXXIEDBGHSIXRWIKLLIZHFDJAIMKQEAVRYGDVSNUZRIOFJF");

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
    msg.setTimeStamp(0.4916386594968767);
    msg.setSource(46293U);
    msg.setSourceEntity(22U);
    msg.setDestination(47020U);
    msg.setDestinationEntity(215U);
    msg.custom.assign("NZMWYTKFBBMIIPBPDAXZSCWOJLWNBKIDNYOEFCEQGSGPVHEQIBHVIKVWMJOTANUKBOXNBCRCOBEWLTTYDODOSXGHYSSTBVSMEDRHWFXHRHKVVAMARXCCOQIEDMUGNFXFAZGQJKKMRZCFYEJTGUDTLCSOURESRPMIWHMZJDWYGBUQZLEEZUGALRLNVCRNLQYFCZQPGWWRUSSVOVQPQKJTLAJFDPKIYFHFJXDYAMHXUZZHGA");

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
    msg.setTimeStamp(0.2169008163359799);
    msg.setSource(55544U);
    msg.setSourceEntity(49U);
    msg.setDestination(7588U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("XQCCUKPOTNBJFJRNKBOZYCVDQNXEXXKVFIOCELQHNNUZXGUMWTGYTCETHCSKOUXREPNGDVXKVFUAANTHPIHFFRLDDSRKCSXEISRVNNJQTEFUFPBWZJQRWOITJWJBAXOGHVABBDAZCERVSBLXPYMBUZUZLKAOGJSL");

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
    msg.setTimeStamp(0.3313490471424265);
    msg.setSource(1061U);
    msg.setSourceEntity(44U);
    msg.setDestination(60641U);
    msg.setDestinationEntity(184U);
    msg.timeout = 15575U;
    msg.lat = 0.461837818859152;
    msg.lon = 0.5020987642039086;
    msg.z = 0.537431094822924;
    msg.z_units = 0U;
    msg.duration = 14446U;
    msg.speed = 0.21269008621587449;
    msg.speed_units = 215U;
    msg.type = 185U;
    msg.radius = 0.7217515172917286;
    msg.length = 0.7623805447091849;
    msg.bearing = 0.6136594030789879;
    msg.direction = 174U;
    msg.custom.assign("GUSJGQQWUUMICGNKCOKBAVJGYNWDRXKZUPAODBSXXKNZQESLLYXPKXNHEPVZDAKRVZBXIMSYNCONQTJVYZINEKDYLMCDCTTRFDFKJEYAPIFTOWLZHZKQRLIWEHOIAHCAQKCDMQPIMRDRQGWVBXPAUXGRJYCVOIWGTBTLALWTSPHSORVEOYEUJGSILVFNHUHFAROTBUHTJYRFWEMLZJSFJXSAUVZDFS");

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
    msg.setTimeStamp(0.20479596682720358);
    msg.setSource(1298U);
    msg.setSourceEntity(226U);
    msg.setDestination(35014U);
    msg.setDestinationEntity(66U);
    msg.timeout = 63377U;
    msg.lat = 0.15774629921060168;
    msg.lon = 0.35657298639056023;
    msg.z = 0.07229699118605348;
    msg.z_units = 161U;
    msg.duration = 20632U;
    msg.speed = 0.42666784723406215;
    msg.speed_units = 116U;
    msg.type = 133U;
    msg.radius = 0.6035471199021315;
    msg.length = 0.5779528303134714;
    msg.bearing = 0.1288669068410051;
    msg.direction = 246U;
    msg.custom.assign("ZHDVJHMRXAWTZW");

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
    msg.setTimeStamp(0.7212527942936942);
    msg.setSource(625U);
    msg.setSourceEntity(16U);
    msg.setDestination(49428U);
    msg.setDestinationEntity(224U);
    msg.timeout = 57014U;
    msg.lat = 0.49047645656839245;
    msg.lon = 0.644784218198389;
    msg.z = 0.9191476952083268;
    msg.z_units = 201U;
    msg.duration = 65505U;
    msg.speed = 0.23907419734278001;
    msg.speed_units = 253U;
    msg.type = 238U;
    msg.radius = 0.9261378193624153;
    msg.length = 0.6516782946089943;
    msg.bearing = 0.9671960982604741;
    msg.direction = 28U;
    msg.custom.assign("FERUSXXHILLBNZUBVYTMRDDNUBYDFMUFLQJNJSGMJSGIBHWMUCOMOYTWTXSCAEI");

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
    msg.setTimeStamp(0.7525266970202981);
    msg.setSource(25196U);
    msg.setSourceEntity(236U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(170U);
    msg.duration = 54087U;
    msg.custom.assign("SMSEAENXCOUXTQNHIJPDJECTPJKDKRQZWKPYEKUQMGBNXWRYVPPPTVMGXDSIJXKIVWDTFIYLIDLAWVFYTZMFVJODPJQMBFTUASEKUTLDGYCQYRERHOKZHUKZVOGHQSFPBMCDNEIYRCALCRHCKQNUOAOSZRBGLNMWHYWEMKNBVGBUUEHUDVPCADJTALLRZTSAQIINJOBXAFQSOZZHMCJWGWSRNUBWXSTMRFLFYOAJLOXBLZCNFV");

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
    msg.setTimeStamp(0.15005839268562637);
    msg.setSource(2681U);
    msg.setSourceEntity(111U);
    msg.setDestination(42880U);
    msg.setDestinationEntity(9U);
    msg.duration = 7731U;
    msg.custom.assign("JSKJHIICWHYVNDNIEXUBSNRHJRHOMUGYZTGPLQHTPRCVOWECAFCRWOOYNQWLFLAZ");

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
    msg.setTimeStamp(0.527259225987567);
    msg.setSource(2570U);
    msg.setSourceEntity(90U);
    msg.setDestination(26568U);
    msg.setDestinationEntity(107U);
    msg.duration = 13859U;
    msg.custom.assign("DBAWBXKCVSWYWRMCHTWYXTDGGELJNPUJHMUSQXQLFGBKFSQDJPGPOLAQPNEDHGGRORABAEIKBIFXEKNFOWMVKWINSPGTCHVZOZEQTXVLICUZFHNTFMSVWMPPOCTRIVSYBQCVZKHLWQVDRLHLGMGYO");

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
    msg.setTimeStamp(0.8053825623766709);
    msg.setSource(54079U);
    msg.setSourceEntity(179U);
    msg.setDestination(26693U);
    msg.setDestinationEntity(63U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9126123111744959;
    msg.control.set(tmp_msg_0);
    msg.duration = 8474U;
    msg.custom.assign("JQBOHYOSTNZCBBMBMYTTXCRLYWFZDOXUWOPFCGDP");

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
    msg.setTimeStamp(0.9370546892652482);
    msg.setSource(20696U);
    msg.setSourceEntity(124U);
    msg.setDestination(47U);
    msg.setDestinationEntity(35U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.03211671127772209;
    msg.control.set(tmp_msg_0);
    msg.duration = 20934U;
    msg.custom.assign("ACEJKSEXGXZNKWFYNTGAAYBQBZODSIJWMZXEFWTPINLJIHEVDNPULOVRFRKGVHZHACODDXZWHHSKMLQVJPIUGGWWJRCSLXCTTOEJBHBPGJFSRINUNQRLTORRUTZYSYSVPCFGFNPMDMHFPSJOWNEYFWRODDMHTFBUXLDCILHPGYTJUIXCYFVSZCVRBLK");

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
    msg.setTimeStamp(0.8661826219901685);
    msg.setSource(12170U);
    msg.setSourceEntity(123U);
    msg.setDestination(14475U);
    msg.setDestinationEntity(65U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.03614234857535781;
    msg.control.set(tmp_msg_0);
    msg.duration = 49469U;
    msg.custom.assign("DIGLEEDMUOJKWXSIUASAEOAPJOWYKLXNAMPGCNMAQVKGUFSPHHXWRETOSHSSPPAXNLHQDUXKVKBKVFJECAKKDZQWRVOUBLFXIALNQVXRPLTRWOCCSWTHSBJVBLHYPGQYMCBVJYRDYKPYSZQ");

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
    msg.setTimeStamp(0.9411835134582376);
    msg.setSource(58129U);
    msg.setSourceEntity(91U);
    msg.setDestination(4307U);
    msg.setDestinationEntity(199U);
    msg.timeout = 50207U;
    msg.lat = 0.1773115349232628;
    msg.lon = 0.5732156597586848;
    msg.z = 0.07206255352317592;
    msg.z_units = 40U;
    msg.speed = 0.8632290046778299;
    msg.speed_units = 230U;
    msg.bearing = 0.032064977367956105;
    msg.cross_angle = 0.7844051162042265;
    msg.width = 0.9258867084682879;
    msg.length = 0.3036406766819586;
    msg.hstep = 0.5868924231185085;
    msg.coff = 254U;
    msg.alternation = 57U;
    msg.flags = 5U;
    msg.custom.assign("LQFALXIKXGQZEFFUHURDIARMFZBYNJLKOVCPDOREEVEIGORFTJHQOASCFKSZCVURIQJSGXXZYXPLSVUYBHMINWTJEPGMYFECPVHHHKZBJLWJTSOGKVMNCRMGDALCRQCLSAUBDXDWPXVTMAFVHTLQMKZAXKWDWITIBZOKGIQUNJREXBUDANFJUQB");

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
    msg.setTimeStamp(0.507683739935388);
    msg.setSource(55343U);
    msg.setSourceEntity(28U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(72U);
    msg.timeout = 44380U;
    msg.lat = 0.8627830035844002;
    msg.lon = 0.6190524044832243;
    msg.z = 0.7300361143355127;
    msg.z_units = 244U;
    msg.speed = 0.30716831053699567;
    msg.speed_units = 93U;
    msg.bearing = 0.7704924698645881;
    msg.cross_angle = 0.7728139652986148;
    msg.width = 0.3787610022300111;
    msg.length = 0.951962253749934;
    msg.hstep = 0.24601949360222097;
    msg.coff = 222U;
    msg.alternation = 44U;
    msg.flags = 188U;
    msg.custom.assign("BVWCFBQDHHGZGNZDCNUOOFLEFNUWNCYQLOTMEZSZUHBYGBZIZIVYFHVTMQTPGUEEXGZLEFWEIDXHAECSKBCRIECUIOVOCAABNSRRZTFKUQOFVQSHRDROFYKITHNJM");

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
    msg.setTimeStamp(0.378154627009719);
    msg.setSource(20377U);
    msg.setSourceEntity(114U);
    msg.setDestination(50981U);
    msg.setDestinationEntity(137U);
    msg.timeout = 24175U;
    msg.lat = 0.020358201388084196;
    msg.lon = 0.22665502090344536;
    msg.z = 0.33398383435966994;
    msg.z_units = 131U;
    msg.speed = 0.6918341515247324;
    msg.speed_units = 208U;
    msg.bearing = 0.5497352361098327;
    msg.cross_angle = 0.3532795009240307;
    msg.width = 0.9975157023216891;
    msg.length = 0.6827786046256765;
    msg.hstep = 0.47331086597167493;
    msg.coff = 198U;
    msg.alternation = 137U;
    msg.flags = 225U;
    msg.custom.assign("MHCQYRAQHKXHUGQGDUBJARTAOFWJDWRFKEKMPTXVEPGDQELEWPDISRUYFJKYRJUZCCUMCDUUESUJZPKTBBBOGILQXDCXMKHZLGMOZZYUFBCSOZOHVNSNIOBSVXVVFOQXBRTSHYDMFJWYXEHFNTMWKFDQZKYILMOQWPGYGZYRIRKCNNFCIBJSLPLQVXBTORAATSANDJMWSCISLJNKEWTTGP");

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
    msg.setTimeStamp(0.911399040196628);
    msg.setSource(52160U);
    msg.setSourceEntity(160U);
    msg.setDestination(59218U);
    msg.setDestinationEntity(189U);
    msg.timeout = 64492U;
    msg.lat = 0.9601066813841345;
    msg.lon = 0.30312319198067506;
    msg.z = 0.9591995183344365;
    msg.z_units = 147U;
    msg.speed = 0.5700177625170937;
    msg.speed_units = 19U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4248392442777491;
    tmp_msg_0.y = 0.2535158680874241;
    tmp_msg_0.z = 0.8008361084062152;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BQPMBJUIOSSKPOULAGNVCNTBJIXIXAKCBVQBKIRMARAVYFRVOZSZRGPYZJHFGXPYPKYDJUQMMVPLKTNNEXRAMNBKHAHXUFHOPLYZZJOXTIKWTSWEDNBXDFLWDEKAQSRQDASYGTELXFJOUIHUKELWZXFQTNYC");

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
    msg.setTimeStamp(0.49072928248529);
    msg.setSource(53749U);
    msg.setSourceEntity(44U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(166U);
    msg.timeout = 32645U;
    msg.lat = 0.05650459979457023;
    msg.lon = 0.3677994596186962;
    msg.z = 0.05161464825249096;
    msg.z_units = 4U;
    msg.speed = 0.013903818994206119;
    msg.speed_units = 96U;
    msg.custom.assign("NKGIJABTRPSBUEJLJPVFUEELAOGBMZBIIRUOPSUOKNKFYZNJDABRWJDCBYUKFQMAYWNZCMFGYGBBOVCLCCOSSEJZDZUWMGFOSQWFPYLIGEDAMSVYSLRJMMFIDTZRGRNTATIYULKWQDVYWDHAEWRKDVCLPEHTXGFIZSXBOQTZMXDINQZDAYWLHNPPUZMUQXCHQNYHJMJOFONKKVPAEGURSEQPTLTXXJQBVQXFX");

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
    msg.setTimeStamp(0.16315421702726285);
    msg.setSource(53021U);
    msg.setSourceEntity(223U);
    msg.setDestination(24793U);
    msg.setDestinationEntity(102U);
    msg.timeout = 59418U;
    msg.lat = 0.3718995734412408;
    msg.lon = 0.02777640541863824;
    msg.z = 0.8882719928054537;
    msg.z_units = 103U;
    msg.speed = 0.7295695716816909;
    msg.speed_units = 12U;
    msg.custom.assign("ZHOGKNEWSPEWIRYBEWBLRWMQYMCGOLGUYASVJXSBOHSOMTYUJLXOHGUVLTBGBTSVYPSUQWNSXQTHHZ");

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
    msg.setTimeStamp(0.6172732437831473);
    msg.setSource(38779U);
    msg.setSourceEntity(195U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(193U);
    msg.x = 0.13589634868827494;
    msg.y = 0.10045438397952355;
    msg.z = 0.6139723378959907;

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
    msg.setTimeStamp(0.3628152125698306);
    msg.setSource(54983U);
    msg.setSourceEntity(19U);
    msg.setDestination(27354U);
    msg.setDestinationEntity(248U);
    msg.x = 0.6369962053746867;
    msg.y = 0.7975158757313794;
    msg.z = 0.44311075591862636;

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
    msg.setTimeStamp(0.6631731981449579);
    msg.setSource(47180U);
    msg.setSourceEntity(95U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(128U);
    msg.x = 0.5320541119374408;
    msg.y = 0.9971361986635542;
    msg.z = 0.021895099607442403;

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
    msg.setTimeStamp(0.02591087080131116);
    msg.setSource(15158U);
    msg.setSourceEntity(14U);
    msg.setDestination(27845U);
    msg.setDestinationEntity(216U);
    msg.timeout = 61536U;
    msg.lat = 0.3563351882673571;
    msg.lon = 0.12695186051240215;
    msg.z = 0.31284981005653434;
    msg.z_units = 77U;
    msg.amplitude = 0.5247014746424798;
    msg.pitch = 0.24476262183732944;
    msg.speed = 0.3396600126006778;
    msg.speed_units = 26U;
    msg.custom.assign("TSBWPYGWJBOHDIRTFVKJXIDIFCMHMKTUUQYTGWKFYSZGJYVILCJKZDPYVLVSHGRNPMLDCAMOXEZYJVLRGAAZQOHPJZTELEKNQNZJGRLRNKHPFUOJPEFJQWDFINRARNZALDMZSSD");

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
    msg.setTimeStamp(0.7698313194243888);
    msg.setSource(31182U);
    msg.setSourceEntity(31U);
    msg.setDestination(19038U);
    msg.setDestinationEntity(12U);
    msg.timeout = 31425U;
    msg.lat = 0.7794252914761912;
    msg.lon = 0.1926833119187914;
    msg.z = 0.45384158418023113;
    msg.z_units = 218U;
    msg.amplitude = 0.3762500840871853;
    msg.pitch = 0.9267822001821051;
    msg.speed = 0.32867712653371883;
    msg.speed_units = 151U;
    msg.custom.assign("TXVIYJOWZQAPKCPSQIVFZMTZUEYWPPOSIBAXTOGCKAZMJAVNBFUDYMBKYFEQGAGZSVFYKILDBSBGSNTVNLOWCWDCNNLDTRXPTYQOWVIRIHLMCRSN");

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
    msg.setTimeStamp(0.31970450471338596);
    msg.setSource(56287U);
    msg.setSourceEntity(2U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(138U);
    msg.timeout = 52714U;
    msg.lat = 0.77278277085223;
    msg.lon = 0.6148894758922693;
    msg.z = 0.22803306617546382;
    msg.z_units = 216U;
    msg.amplitude = 0.039731609016893654;
    msg.pitch = 0.35376661363210404;
    msg.speed = 0.047098303518641305;
    msg.speed_units = 19U;
    msg.custom.assign("JMGPSNIIIZAGXWKOVGEXXHOBATPJBQXEBYJOMGYKFUJTFGXJNPUFLSLQCLQUCDMVRXLLUFBDCXRXWPYGQSEGZBN");

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
    msg.setTimeStamp(0.2893325706647387);
    msg.setSource(6479U);
    msg.setSourceEntity(166U);
    msg.setDestination(59264U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.31535981563420534);
    msg.setSource(35437U);
    msg.setSourceEntity(134U);
    msg.setDestination(51691U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.451382483228967);
    msg.setSource(1530U);
    msg.setSourceEntity(181U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.8798309084358847);
    msg.setSource(53007U);
    msg.setSourceEntity(115U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.01898821291195152;
    msg.lon = 0.553654943631539;
    msg.z = 0.8522117823921174;
    msg.z_units = 67U;
    msg.radius = 0.7694157286585004;
    msg.duration = 10468U;
    msg.speed = 0.9304202535288795;
    msg.speed_units = 157U;
    msg.custom.assign("PYZUGTQPHYPDCSSAIQPCJQJNNUROQHDUNEOUQLULIKTKAPBVXVKILQFJDTUONVCRBFGHRTKAOBNHCXWDYVGEAZBFVPKUASVBFXLOXCGBHCWFHAZHSLHDCGSUNMIBJTQYPXPKYMLJVWJKJIMIOXULENXEQVEQYECEFPNEZAZAUWBLRIJYKKMZSTTAOZFXRGNGPSTGHCWDDSMXL");

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
    msg.setTimeStamp(0.7770078141445261);
    msg.setSource(9641U);
    msg.setSourceEntity(113U);
    msg.setDestination(6269U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.9507046563501185;
    msg.lon = 0.3959657910245743;
    msg.z = 0.9211531366955323;
    msg.z_units = 172U;
    msg.radius = 0.422452210582445;
    msg.duration = 32486U;
    msg.speed = 0.37136969421673205;
    msg.speed_units = 249U;
    msg.custom.assign("OSPPJZNACWNYTXNCPHDFAUHEKGXVTVMODTYSGDERVOSXYEFPASYULOZBNIWDVBURFTNGLSRWLQGKAKYLFOIFEJGZMIGMHLINBKZBCUSHUAEMTDJZIPOTVJCMCSQXKUVUHKWQBQHTAHGAQBLTRFWPXGMRSWRCYSXDXSILOQPYCQJBOXDIMHEURBLZWYEVVEZKJDTXZHJHFGDYEZVUYRPPIFQMRRPEJMFBQFUZCTCONDNKKGXLOKAWJVNIMBCJL");

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
    msg.setTimeStamp(0.3945044750574276);
    msg.setSource(25857U);
    msg.setSourceEntity(113U);
    msg.setDestination(60001U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.34501372577219414;
    msg.lon = 0.9175327003111473;
    msg.z = 0.6645134242347804;
    msg.z_units = 77U;
    msg.radius = 0.7790927573012163;
    msg.duration = 46046U;
    msg.speed = 0.4263289684081234;
    msg.speed_units = 183U;
    msg.custom.assign("YGHEMEBYJAFWSABVQFQLKVDAKPNYIUATONBAQGPSWPCJSXFMEHEGIWRCKPMFTIRCISICPJZRDURICHIZGDTEUDVMDOFHLZNZDHCBQKBGPGLOZXWLSXVFUXFINJNUTNJBTYGMYCAPSXQOOLCGWZYASZOCYEQRVLTJVMWZPQJOMZQLTADXBMUMYXVJUDLNTPXOCRKWWIRBNRMIKSTAHYFOXEHJGVRKWYNFZAGHEVLKDNQUBSBEKVDOFPH");

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
    msg.setTimeStamp(0.9417235173767908);
    msg.setSource(1755U);
    msg.setSourceEntity(68U);
    msg.setDestination(3314U);
    msg.setDestinationEntity(181U);
    msg.timeout = 50323U;
    msg.flags = 64U;
    msg.lat = 0.036655466022016525;
    msg.lon = 0.6114628571656876;
    msg.start_z = 0.4190359978382636;
    msg.start_z_units = 178U;
    msg.end_z = 0.09503019955337721;
    msg.end_z_units = 29U;
    msg.radius = 0.3115549854947359;
    msg.speed = 0.21326740212883122;
    msg.speed_units = 12U;
    msg.custom.assign("ZADIQMDLWWIVLSIYTKISMUXQPORXGIRBHLWDKJCQOVDVSPFWCWHDBFFBJMKQJRZYCUKACJNGUCHDOJHOZZFAEZYWMTDBNWDOHAZNFNRVHJGE");

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
    msg.setTimeStamp(0.9271975790238043);
    msg.setSource(54780U);
    msg.setSourceEntity(39U);
    msg.setDestination(62434U);
    msg.setDestinationEntity(109U);
    msg.timeout = 48091U;
    msg.flags = 74U;
    msg.lat = 0.9183690201384029;
    msg.lon = 0.937321743838293;
    msg.start_z = 0.13215311124389473;
    msg.start_z_units = 152U;
    msg.end_z = 0.05138150469780001;
    msg.end_z_units = 167U;
    msg.radius = 0.5391892164260195;
    msg.speed = 0.7570604446574722;
    msg.speed_units = 163U;
    msg.custom.assign("OIVDDBDXLDUQGQSXUAHHSATCGKNMOPVQYKZLSRHKAPKHFCNSESBIFOREBKWNMEJYXGFYMSTHTVPCIIYORYCHTVZXUOMENBTWEZJFXZDWJFFZPXFGLYPAL");

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
    msg.setTimeStamp(0.3471155723087379);
    msg.setSource(48913U);
    msg.setSourceEntity(128U);
    msg.setDestination(9041U);
    msg.setDestinationEntity(81U);
    msg.timeout = 17399U;
    msg.flags = 62U;
    msg.lat = 0.008017744228837387;
    msg.lon = 0.4630807795619435;
    msg.start_z = 0.7069591165621238;
    msg.start_z_units = 222U;
    msg.end_z = 0.4677909285450105;
    msg.end_z_units = 16U;
    msg.radius = 0.6450228409751673;
    msg.speed = 0.8679166189679169;
    msg.speed_units = 19U;
    msg.custom.assign("QKDTETHAXQFQFBSSGYNQLUMCPULWPYYVTQBJBFUKWJYFILMRVZGUJRQIEORNIQHQKWNEZHBYIXODGARDTHCMUGFINMJCJEYAXJYLATLEOWHGUXKJVCFRUBVPIUXEYNTLXASZKGSNBDQLZTCNSSPZBSCMBIXHBOLKIPNARPJFZPZHGYOOVNOWSARIXKUDSETWAGXOMCXWMRKEFCDLGDMMZOPCALQVUBSDJGEWPVVFREMJTOVWVY");

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
    msg.setTimeStamp(0.13001405347420036);
    msg.setSource(9751U);
    msg.setSourceEntity(132U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(63U);
    msg.timeout = 54248U;
    msg.lat = 0.3610235329992373;
    msg.lon = 0.79169297482825;
    msg.z = 0.4475035203662092;
    msg.z_units = 38U;
    msg.speed = 0.4912259973602602;
    msg.speed_units = 105U;
    msg.custom.assign("VNEYYLJIZCMTFURSPAZYLLHGDMOGDFPOVQQOXETEJACHXNWIUCABGXMDBSKJFVLDCUVUILUPIDPZVNXHNANIWYTAYTJLKMKBDGQEJVPUKMJQGIQQNBWWZDRTFTMCWLXZSGWVDKJNELPZXHOIZEFMTBOAPCVHWADZRYB");

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
    msg.setTimeStamp(0.14432566144959758);
    msg.setSource(17865U);
    msg.setSourceEntity(112U);
    msg.setDestination(57256U);
    msg.setDestinationEntity(234U);
    msg.timeout = 3988U;
    msg.lat = 0.35723140740863113;
    msg.lon = 0.6628274384776608;
    msg.z = 0.137970047338428;
    msg.z_units = 57U;
    msg.speed = 0.8841780736404105;
    msg.speed_units = 105U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.49781374537381995;
    tmp_msg_0.y = 0.6308346687713281;
    tmp_msg_0.z = 0.4652092789881659;
    tmp_msg_0.t = 0.19642252997345033;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZBCFXBAUBDSAFW");

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
    msg.setTimeStamp(0.8632049732946949);
    msg.setSource(18600U);
    msg.setSourceEntity(50U);
    msg.setDestination(23438U);
    msg.setDestinationEntity(0U);
    msg.timeout = 13511U;
    msg.lat = 0.9221467451070228;
    msg.lon = 0.6258048261099506;
    msg.z = 0.596430730634158;
    msg.z_units = 63U;
    msg.speed = 0.23930993262854783;
    msg.speed_units = 185U;
    msg.custom.assign("LGVMATICFWIOQVJXFCUDKEAWUTIKAWFKZGEUXJQLGRBJHXVZBUCIENWDLPPQZTHGXGKZQTVLHZPBOYSOEZXWOESFUYJAWZARMFQJRCEAHXZXCPNEPFDLBOLPLNKAOZIRUVDKTDLVVSNSPCKQDSHYSBMHINPYWBXBOVFHYXSUVBQCNFVBUPKTCJMMTYIJLIDGEIOKTQJRTMJNOWCRCXDYYWMDRQYARAGIMNJRFQSOS");

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
    msg.setTimeStamp(0.6136875824701366);
    msg.setSource(41490U);
    msg.setSourceEntity(226U);
    msg.setDestination(60414U);
    msg.setDestinationEntity(39U);
    msg.x = 0.15163854139363298;
    msg.y = 0.6663205419018232;
    msg.z = 0.5840069919774157;
    msg.t = 0.42400179776684843;

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
    msg.setTimeStamp(0.19301196132878318);
    msg.setSource(23908U);
    msg.setSourceEntity(242U);
    msg.setDestination(64776U);
    msg.setDestinationEntity(51U);
    msg.x = 0.7643458066741954;
    msg.y = 0.6385598470823977;
    msg.z = 0.34555487539177987;
    msg.t = 0.7812444125259326;

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
    msg.setTimeStamp(0.23235623369218183);
    msg.setSource(8319U);
    msg.setSourceEntity(83U);
    msg.setDestination(60399U);
    msg.setDestinationEntity(88U);
    msg.x = 0.9872402278972451;
    msg.y = 0.7869394285249789;
    msg.z = 0.41402138756559703;
    msg.t = 0.7853452748446257;

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
    msg.setTimeStamp(0.4907499903012763);
    msg.setSource(56294U);
    msg.setSourceEntity(128U);
    msg.setDestination(45418U);
    msg.setDestinationEntity(72U);
    msg.timeout = 60603U;
    msg.name.assign("RCWNRNWSKYZAQAXGMQGVBICXMRMYDYLNHVPMDGVMMJDLEGQBGHYLKDZOJVKO");
    msg.custom.assign("HPUNJCPSTCTKCDXRRZVMBJYHYWYYGJIPQYTTGGMCFTRAFFJWRCFZDSQKWMFXZJCXUALOLSPXBECAOECIOUJDMNHESUXBBAWNDZLWIERLLWHSSALFPNIAEYARURMJQTHUOZBSJ");

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
    msg.setTimeStamp(0.06520936767048757);
    msg.setSource(47144U);
    msg.setSourceEntity(148U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(32U);
    msg.timeout = 696U;
    msg.name.assign("DGUCNGLWOPEVFDWJIVJTXLMCKMOJPGHLJDOESIRTDVAAXWFVZFHEHDPTMXHKMVVMXGGCRQE");
    msg.custom.assign("OPTPCUEDTUNRKUQLFQRRARCMYBLHQLIFNFRNBSACIPWHVEJIKTSDJZMYHXKJGLBZIGVSCPPCHJUNZSGUKENAVMWAZODVSRNTYEBTBUIJNXQULXECLFBKSFIYFX");

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
    msg.setTimeStamp(0.6364101234095099);
    msg.setSource(4661U);
    msg.setSourceEntity(208U);
    msg.setDestination(45401U);
    msg.setDestinationEntity(189U);
    msg.timeout = 38079U;
    msg.name.assign("GHSUGDQZWKBCECEBXTMLRZYDCUQAHGTMUOORVTLXERINDRXKWXCJVKJQLJCKFHKDGZISBTWHQUSLLAYPOKKVUOXHQSWUYNZEVPHLPCQUERRJIQSMKFJVDISXQJ");
    msg.custom.assign("EEIMQXKORVAVVZVUBHGXDUKYUDPXKIQNLUVNEUPMUTQMTNKQCWUJTACYWRAOVJPGFMFTEWGLHMCSXHIHYFDEGWSVIKCHEBXZDAGOGPTAERKHNPZRWBFRCOAKOCVWMRIZYPQILCTCSQGFOJXPNWSFXRPLZQJDBYLAAUIQYGEANSKDTYLJOOEVDZONIBSFHDRIQILFZWGMUBXVJDNJLNDPLHFUASTKRZSZMJBCOSL");

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
    msg.setTimeStamp(0.6946020497003069);
    msg.setSource(62782U);
    msg.setSourceEntity(10U);
    msg.setDestination(12280U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.9621102190561756;
    msg.lon = 0.4705970698738057;
    msg.z = 0.1435823374395634;
    msg.z_units = 59U;
    msg.speed = 0.6206361359648063;
    msg.speed_units = 228U;
    msg.start_time = 0.8399987160442367;
    msg.custom.assign("XNPTRYAWRGWSHUXJAMMGSGAVNAXRMLSVVELJQDWIUZNZQZDLIZFPKHLDGPYKBNPYGBCLHKAOLNDYMRQFWCKDAJUBYAWFUHICSOXLWMCFCETLZCXFIQQUI");

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
    msg.setTimeStamp(0.5690340833862636);
    msg.setSource(13167U);
    msg.setSourceEntity(201U);
    msg.setDestination(23821U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.29784319611031695;
    msg.lon = 0.7133387468320066;
    msg.z = 0.20320136391728727;
    msg.z_units = 254U;
    msg.speed = 0.5372089240490018;
    msg.speed_units = 65U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6854094700419064;
    tmp_msg_0.y = 0.9231097416440903;
    tmp_msg_0.z = 0.639390317300841;
    tmp_msg_0.t = 0.6818622707463615;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 28715U;
    tmp_msg_1.off_x = 0.28170021488569397;
    tmp_msg_1.off_y = 0.29890712740995395;
    tmp_msg_1.off_z = 0.38385758084468946;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6646082542635836;
    msg.custom.assign("XYOTHCTPDVLSMIWQEEDUQZHFJBZRIIGXKOZHLBKGZC");

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
    msg.setTimeStamp(0.476491419445792);
    msg.setSource(4366U);
    msg.setSourceEntity(64U);
    msg.setDestination(1787U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.12798421654549053;
    msg.lon = 0.478033823316915;
    msg.z = 0.04974430020035625;
    msg.z_units = 198U;
    msg.speed = 0.9330711853762023;
    msg.speed_units = 94U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.575496301244556;
    tmp_msg_0.y = 0.06662572003580602;
    tmp_msg_0.z = 0.6321919412502819;
    tmp_msg_0.t = 0.9668381766275717;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15528U;
    tmp_msg_1.off_x = 0.33706525133605847;
    tmp_msg_1.off_y = 0.7946202805442838;
    tmp_msg_1.off_z = 0.3813083309837525;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.512357541686718;
    msg.custom.assign("HNOTRGBWTPGJQLSFIFYKAYOXNADXHYPMWICILPXZRTCGWQJVNCXGZQUANHSMIESASSBDZJKKEOQMOLPBVUUIZGXQJWYBFUNHQJSFMELDAWVRSFTWDQEDHCTFBDUHZIPVTKLEEMWNUKRZJBUELCEUFNRRUOZHQOOKVGQVZKMCXHXITLVARPMTFETLNYVSRAGTKVPKBRAFDOSAMWSJQBIGNDKJDUHERXYXPJYHWBMLCLNJY");

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
    msg.setTimeStamp(0.2547142166702707);
    msg.setSource(64796U);
    msg.setSourceEntity(230U);
    msg.setDestination(45809U);
    msg.setDestinationEntity(199U);
    msg.vid = 23846U;
    msg.off_x = 0.727768188194929;
    msg.off_y = 0.10325666220070684;
    msg.off_z = 0.037599370189239645;

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
    msg.setTimeStamp(0.79972700684362);
    msg.setSource(44472U);
    msg.setSourceEntity(33U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(49U);
    msg.vid = 13041U;
    msg.off_x = 0.10176391695228926;
    msg.off_y = 0.8189945072761822;
    msg.off_z = 0.7642105778256715;

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
    msg.setTimeStamp(0.7119991816626687);
    msg.setSource(48134U);
    msg.setSourceEntity(236U);
    msg.setDestination(27219U);
    msg.setDestinationEntity(129U);
    msg.vid = 26257U;
    msg.off_x = 0.48268890041431534;
    msg.off_y = 0.6677434358999872;
    msg.off_z = 0.07730529590856816;

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
    msg.setTimeStamp(0.8397050933655259);
    msg.setSource(4078U);
    msg.setSourceEntity(131U);
    msg.setDestination(27017U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.03456971243837381);
    msg.setSource(34768U);
    msg.setSourceEntity(13U);
    msg.setDestination(32285U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.7017810206943994);
    msg.setSource(5649U);
    msg.setSourceEntity(191U);
    msg.setDestination(56232U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.4549177034431272);
    msg.setSource(28923U);
    msg.setSourceEntity(248U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(8U);
    msg.mid = 1193U;

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
    msg.setTimeStamp(0.050276460138483525);
    msg.setSource(54403U);
    msg.setSourceEntity(33U);
    msg.setDestination(20264U);
    msg.setDestinationEntity(73U);
    msg.mid = 16618U;

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
    msg.setTimeStamp(0.8940042441213767);
    msg.setSource(16125U);
    msg.setSourceEntity(18U);
    msg.setDestination(2695U);
    msg.setDestinationEntity(204U);
    msg.mid = 50788U;

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
    msg.setTimeStamp(0.11570246385342176);
    msg.setSource(28749U);
    msg.setSourceEntity(157U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(152U);
    msg.state = 8U;
    msg.eta = 7296U;
    msg.info.assign("IKILUWGMYEYXXFNONFTSDEDSTOVGJIZYSGVPOXHKZZRQWVBWPAHCETAWTGCTPBJ");

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
    msg.setTimeStamp(0.07030866802783575);
    msg.setSource(26718U);
    msg.setSourceEntity(182U);
    msg.setDestination(10003U);
    msg.setDestinationEntity(137U);
    msg.state = 11U;
    msg.eta = 37159U;
    msg.info.assign("LFJNAOIIDLMQWZBLGDGEGHNOFQEXFHYMOIUBEKLXPWPCICCGHDMKOBWUYPMKCCEFFRQEBXRXELMXYPJNX");

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
    msg.setTimeStamp(0.8055620271817547);
    msg.setSource(11788U);
    msg.setSourceEntity(56U);
    msg.setDestination(12684U);
    msg.setDestinationEntity(28U);
    msg.state = 154U;
    msg.eta = 49921U;
    msg.info.assign("FCHDGGDTVOFPXLTTDNVPZNPUFLBLNGGHNAAZQUXYBQEHAORRAGBUMFFGCRQZEIDOEIHSUQCTCURNOGWLDZISLZFBAX");

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
    msg.setTimeStamp(0.052789960344322595);
    msg.setSource(55025U);
    msg.setSourceEntity(167U);
    msg.setDestination(856U);
    msg.setDestinationEntity(47U);
    msg.system = 45895U;
    msg.duration = 61634U;
    msg.speed = 0.7082936974269286;
    msg.speed_units = 108U;
    msg.x = 0.2515817832166407;
    msg.y = 0.3036906570064952;
    msg.z = 0.8926940787633353;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.9927847785849145);
    msg.setSource(10120U);
    msg.setSourceEntity(228U);
    msg.setDestination(6628U);
    msg.setDestinationEntity(200U);
    msg.system = 24444U;
    msg.duration = 59556U;
    msg.speed = 0.9178434304789259;
    msg.speed_units = 83U;
    msg.x = 0.906966823020024;
    msg.y = 0.8457805651962166;
    msg.z = 0.2059203891574698;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.3429873241545687);
    msg.setSource(2531U);
    msg.setSourceEntity(182U);
    msg.setDestination(50485U);
    msg.setDestinationEntity(227U);
    msg.system = 23309U;
    msg.duration = 31673U;
    msg.speed = 0.6010461242691212;
    msg.speed_units = 177U;
    msg.x = 0.5622288487314556;
    msg.y = 0.9838492038827116;
    msg.z = 0.2098804895816183;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.7850140418676177);
    msg.setSource(60745U);
    msg.setSourceEntity(152U);
    msg.setDestination(18013U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.25537509032943106;
    msg.lon = 0.5421173537198931;
    msg.speed = 0.7968853150004471;
    msg.speed_units = 187U;
    msg.duration = 43929U;
    msg.sys_a = 49840U;
    msg.sys_b = 17507U;
    msg.move_threshold = 0.277153562576946;

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
    msg.setTimeStamp(0.8641297371940475);
    msg.setSource(61706U);
    msg.setSourceEntity(7U);
    msg.setDestination(56006U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.5124442205802019;
    msg.lon = 0.9670763064003132;
    msg.speed = 0.16282283308079148;
    msg.speed_units = 2U;
    msg.duration = 64853U;
    msg.sys_a = 37748U;
    msg.sys_b = 54772U;
    msg.move_threshold = 0.49800647680007126;

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
    msg.setTimeStamp(0.968329143397713);
    msg.setSource(40362U);
    msg.setSourceEntity(83U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.013188261985633276;
    msg.lon = 0.7366551291927801;
    msg.speed = 0.9024180609021428;
    msg.speed_units = 26U;
    msg.duration = 49369U;
    msg.sys_a = 31229U;
    msg.sys_b = 17298U;
    msg.move_threshold = 0.40505692222659284;

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
    msg.setTimeStamp(0.7858797412922877);
    msg.setSource(65063U);
    msg.setSourceEntity(50U);
    msg.setDestination(16061U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.4764611191717363;
    msg.lon = 0.30783132536104174;
    msg.z = 0.5992362210112248;
    msg.z_units = 134U;
    msg.speed = 0.8666701371763633;
    msg.speed_units = 177U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.649335731954483;
    tmp_msg_0.lon = 0.6096568177422852;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WBESLFYFKZJNBUTNOCCGEXMLNLVBHCESZOIWGQYKRMPNCTJQMLADXHZCKPTZWLJFCMITETOFDZUJLMVSLUUSPUHCHIYZOYLCWKGSGPQNDXNQMPQHXJEDUQHECWRBVYMVANOGNXSBEGXFKDEBWTABFDQDUAJPBDWUYSKIESDTJPRPPUVXSRLIRLUZXRKQFXXHRMYVTGSIOGVYBOOZIVJRAMWBJZVIWMWGFYFKADJAKNOPQRAINHQHHZ");

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
    msg.setTimeStamp(0.6926040626019438);
    msg.setSource(8085U);
    msg.setSourceEntity(108U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.7367563144334905;
    msg.lon = 0.537509493243093;
    msg.z = 0.5185371142747868;
    msg.z_units = 133U;
    msg.speed = 0.9914260784064411;
    msg.speed_units = 123U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.26415373197844294;
    tmp_msg_0.lon = 0.45724127970807515;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MJOGSEUANWGVQZQATXRRZANITFPJCHFVPGLRHJLWXLNSWVPJLAPTBLEIKMIZHNUWAUKKBRBDBPXFETANODMHTCBJFWKKGQYEWVJSEQUCGHKCEZDETUUMOBOOQHEKBLYLRVEYQCRJQXONICFUSSDIMLDZHXGYAPXRKDYIXRQTKCEKNVZDNBFBWGNHSAZWVUJFCSVXWIPDOGZIVCRMZYIMQUOZOHDGFFLJPSYNWPFTTSBJIQYOHUSCRYAAT");

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
    msg.setTimeStamp(0.863685895625928);
    msg.setSource(22578U);
    msg.setSourceEntity(177U);
    msg.setDestination(18172U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.4672081802838973;
    msg.lon = 0.2978764540542852;
    msg.z = 0.21105336803699948;
    msg.z_units = 68U;
    msg.speed = 0.6835998803744698;
    msg.speed_units = 205U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8208722113191973;
    tmp_msg_0.lon = 0.1487957369076094;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DTAWWQIRNMRKBIEJMKNKPQHMXUHKAJFQASLEXGSIADPJZSUTSGWPYQYJUXEUWHXVTIZESBPRADLHZVCRLRANJBQPSYLFETCDDFMFEDGZSJMMQLVCOZCFMWZSSULNQYVDJ");

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
    msg.setTimeStamp(0.11657817990959662);
    msg.setSource(44093U);
    msg.setSourceEntity(30U);
    msg.setDestination(39830U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.7441319806439706;
    msg.lon = 0.9087380974950174;

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
    msg.setTimeStamp(0.052609626491274986);
    msg.setSource(12900U);
    msg.setSourceEntity(149U);
    msg.setDestination(39575U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.2682595467946479;
    msg.lon = 0.3984897140852717;

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
    msg.setTimeStamp(0.7523839466120803);
    msg.setSource(54631U);
    msg.setSourceEntity(238U);
    msg.setDestination(22277U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.3078732288774435;
    msg.lon = 0.4083544399432414;

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
    msg.setTimeStamp(0.8612540707303251);
    msg.setSource(13742U);
    msg.setSourceEntity(45U);
    msg.setDestination(61906U);
    msg.setDestinationEntity(193U);
    msg.timeout = 7308U;
    msg.lat = 0.16958707671916862;
    msg.lon = 0.9133329793368825;
    msg.z = 0.48120740539247886;
    msg.z_units = 121U;
    msg.pitch = 0.8860627561319523;
    msg.amplitude = 0.5273286145957353;
    msg.duration = 51088U;
    msg.speed = 0.9683275136828662;
    msg.speed_units = 224U;
    msg.radius = 0.533710911097049;
    msg.direction = 127U;
    msg.custom.assign("ZYPXAUDHNTTTHNESEXQARLTQSMLEZCYZPTAKKJPVLBWKKBEQDUXXUOFRXCIFWOQYGJHIXVLNPUTNDQFLRCQORKVACGDCOBBFUUGNJADOOYHFVARDD");

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
    msg.setTimeStamp(0.4698866593727592);
    msg.setSource(56163U);
    msg.setSourceEntity(88U);
    msg.setDestination(30556U);
    msg.setDestinationEntity(34U);
    msg.timeout = 31529U;
    msg.lat = 0.10563137759313079;
    msg.lon = 0.764929318220097;
    msg.z = 0.6959721148917154;
    msg.z_units = 158U;
    msg.pitch = 0.09869523453534723;
    msg.amplitude = 0.9769002784007902;
    msg.duration = 44752U;
    msg.speed = 0.5118193174354537;
    msg.speed_units = 26U;
    msg.radius = 0.41735612126351374;
    msg.direction = 159U;
    msg.custom.assign("YFYVZKKXCGQFBNVGROOEJBWOMDNECEBKGSEWAUZOXEVZVLVTQMAVSREXUCMTZLBTEBGTRSCGDATHGNHJHDVMUBQFXZXVBFTKUIQMJQNMGUISQ");

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
    msg.setTimeStamp(0.5994024128050902);
    msg.setSource(61680U);
    msg.setSourceEntity(126U);
    msg.setDestination(52112U);
    msg.setDestinationEntity(15U);
    msg.timeout = 58674U;
    msg.lat = 0.07326167593111022;
    msg.lon = 0.48117772135140935;
    msg.z = 0.2561544281396858;
    msg.z_units = 205U;
    msg.pitch = 0.675678826892253;
    msg.amplitude = 0.711723691932404;
    msg.duration = 32393U;
    msg.speed = 0.19513535985144048;
    msg.speed_units = 178U;
    msg.radius = 0.7428620783682494;
    msg.direction = 238U;
    msg.custom.assign("CURHXQFNFORDQMPTUZHHSOCZLSBEHAVXFVZKJGKFUCANMZLSMOSTTJWZGIO");

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
    msg.setTimeStamp(0.08514544532145474);
    msg.setSource(45042U);
    msg.setSourceEntity(84U);
    msg.setDestination(55863U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("YAJYSIBIPXHVJXFHGMRGHBMDNVUNPCAHFRYACDNJAHVSXIOBPMFUXJKBPOSHGIFRQOBKRLGZNFLJGNDFCRUKWQJQNMMCGQKLBVHSTOLQPZEIAAZAVQZQXWXHCYEYMGEGCYCLZNFPCEEOKVDRSKAYQDIESRWPTJTBTDKKTIVODBDWYNWZDJNYMPCLQXGLSUTQKLETGYLJDROCSWBMMHJREOPWXAXVIEUNUMVSHVIRFTZEUWXWBUS");
    msg.reference_frame = 190U;
    msg.custom.assign("NKHCFFEBCPJRZZQVJ");

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
    msg.setTimeStamp(0.683682102148823);
    msg.setSource(49593U);
    msg.setSourceEntity(128U);
    msg.setDestination(12483U);
    msg.setDestinationEntity(90U);
    msg.formation_name.assign("SZVGXZMJVDGUKSMAXGQUAQJWXSLWVNRIXOMXCEZVDAQJUQBYAWFGPLOZSENWCYBDQNEWBOGFYTERHNUVAPCONPKCT");
    msg.reference_frame = 202U;
    msg.custom.assign("SPKWEFGGRUCQWNKCZQASROCZSKYUGJYMYUPPUBNKFQHZSXOOXFWNRFBMSBYSTDAJZVURRGXMQQDBIKIVDJHHCLTMWTAIITAADVREXKCZHLGFGNILHJKOVPXFTSIRLSODGXRSZTWL");

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
    msg.setTimeStamp(0.4844944027995014);
    msg.setSource(52494U);
    msg.setSourceEntity(130U);
    msg.setDestination(61199U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("DDMSYBCAYFPUDRCIYDVKIHUTMIIKAJTJKORSEVCGWNPVQQIRRZTJIZWFTBRBLBXVCOUNYNJUZVGLKUGCYQXLMTEXRGXMUHDTALXWZNJYMXYBLKKYZOCHTCPAXWPOMEOYMSCAOGAQAYSVWNTTFBDNDDSLNSNPIIFKXSPFLKFQMUJOFAPFNNSDMJSGKEWEOGGUKQIHLZA");
    msg.reference_frame = 180U;
    msg.custom.assign("KRGLZFJILOMVAOULPOYICZYZMRFBFTXBNJSZJBQNCJMRDDXOOIQNBDLOHNRCICLEKRPIJXIESQRWKDFTJSMXSQNIHFEVZICSKPAVAZWSFDASCUSDASBRUGDTOEYHKWFQTFNHBKNHGOYGAPGTXKTLYYYVBAVEBECHQVVPHEBDVGQTWJXJOIKUJTPUMTWWZ");

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
    msg.setTimeStamp(0.013076481112677119);
    msg.setSource(25275U);
    msg.setSourceEntity(111U);
    msg.setDestination(28118U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("BYZZXFNZYIOPMJCXUQLYDKWPAUJGFZKYRZUHWGTCXTTUOVMCJTPLBSQWQOACPCBHHISQELUBJPVJEHJBCAI");
    msg.formation_name.assign("JNDPZXJRXGSAKAVLXRLBOTTMZYOKYQNMCKWFD");
    msg.plan_id.assign("TJYPJDSJKGOZZLGEHLMBZXIRNIXXLWHWNOIMFLAVTDKXBDQYYYMRIIFAXFSQYJAPFOPWZVGRGCEHTBZLESZTCMBXGPFSMKEYFDZSAIZJUFODPITVYXNTKUVDKWGHBQUICABAOMMRGBZYNVULOMSBWHOCVWNEDMULQHQIWYNEPFXUQSNWXAWVGIDLCMPPKKGOJRKQBRJROAUYDJQPEVRHEG");
    msg.description.assign("AFWXKPFCRIVKHBCBGZWWZZGADYYSALONDAXRKELAGLNQHFWPYTEXVCEXUCVDLOFJEOBDBLUTHAVQIPIKMGNGOVUKBSIQEZTQDRVJJEKUSTMATMDUSSHEQXLMIPIPFUCPWYHTWRWOMHXQJTTSVNGKJIQASGFNRYEEMOJQHQAFUMYPWUWCNFLPCZVVSORCYNMAEORDYORJHBCLMJDTXIZDFGXXKIMPLGYGYCKISDQBLJJNPXTBHFRKSBZ");
    msg.leader_speed = 0.657484111818401;
    msg.leader_bank_lim = 0.9579805060481623;
    msg.pos_sim_err_lim = 0.5294726493852123;
    msg.pos_sim_err_wrn = 0.6335171086387337;
    msg.pos_sim_err_timeout = 17324U;
    msg.converg_max = 0.7558819471198897;
    msg.converg_timeout = 26476U;
    msg.comms_timeout = 32721U;
    msg.turb_lim = 0.9380551494787168;
    msg.custom.assign("PTEESNRIFYIAMFHSRFCSDWXJOMXJAHOCKEZXZEKNCPSLYLDLZJBBURHHJQGQVXMYVGAIG");

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
    msg.setTimeStamp(0.6235601650893965);
    msg.setSource(4465U);
    msg.setSourceEntity(201U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("KKPUOGXZAYOFPBQJJUKPARVAT");
    msg.formation_name.assign("UBDKQMSOPDZAOVUNDFSSRUVYUTCQGQ");
    msg.plan_id.assign("HWXGMFTONZVLTDNBARECYKKSMFIQURIQWQQPRHQFJUGPNXCKHDUPUEHKJMFFHCILLYQAAILDPLCWEVGKXYAI");
    msg.description.assign("VRDXNDJIYVFJLZQPLMUXDYATOKOZDSWGKJQKREIWJCBVKDUVLHPWOFKJYCHPZHAXRLMFWMCIRSEHYNAEHUXDKDKCUHNEXFZALOTGKTNNARTZNYISQFZBHKMSRXLAXLYXFTIQQGVRUUSRQH");
    msg.leader_speed = 0.23082375555978785;
    msg.leader_bank_lim = 0.18770516155773387;
    msg.pos_sim_err_lim = 0.1212821980365838;
    msg.pos_sim_err_wrn = 0.4411474618010778;
    msg.pos_sim_err_timeout = 296U;
    msg.converg_max = 0.39771253514120875;
    msg.converg_timeout = 45604U;
    msg.comms_timeout = 5900U;
    msg.turb_lim = 0.39863299821972775;
    msg.custom.assign("BEEWRZDIDNIHNSGVCKZOYKTRUFJDHWUDLVIIUBYRTQHBXEEQCTJUPDEKLJIHWAGVTLIROONSKHCVXVSZJNGXZJYQEBWEFLYCQXFLPTVGHLNCKIBNPDCOJABQFWSGDSKUDKGEXJZNNWMQTDO");

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
    msg.setTimeStamp(0.8971833628027004);
    msg.setSource(3922U);
    msg.setSourceEntity(30U);
    msg.setDestination(63616U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("VQPIZUJEOSAKVKUB");
    msg.formation_name.assign("LDKFIRDYEHHLERQKLVQGCTUADMYKASWUBUBITLTSPFPCSB");
    msg.plan_id.assign("RAPOSZGXMBPNMCOQHDVHRQOANWOSDIZXYWCGXTTNVDDHYHAHJKSTXKQJWZHUQBBCWNHINGSEELUXGBKCZCEDVQYNPKYLRRNTMVGQUXSSOXVHIRLEAVEBYJITJDZXBTNFYUVAPKGCMFUMLKUPAJTEGBZLOQEZLGZIGOBMQFVFWZHPTYEBUROUDZODSLJSRMELKFWWAVRTSWIFWSJQMRFHQLUNFBICYTUYAKDGNAIACX");
    msg.description.assign("IEDOORWOHGMKSTQWKZAPLAGLISOIUWTIIUGQESMHYPBPHTWDERJNUTQMEIBQNHIDSCYEODOKBBZAVEVVSQYULLTUXDZCEOZQALZXHXPJIMYRKKIHGMXMVWSHKDGFDPVFTZVNNAZYBX");
    msg.leader_speed = 0.33682991375952476;
    msg.leader_bank_lim = 0.14816505974000238;
    msg.pos_sim_err_lim = 0.41524103078766816;
    msg.pos_sim_err_wrn = 0.7024177898414555;
    msg.pos_sim_err_timeout = 42944U;
    msg.converg_max = 0.7219385517167489;
    msg.converg_timeout = 36688U;
    msg.comms_timeout = 45419U;
    msg.turb_lim = 0.09723705149880613;
    msg.custom.assign("DWFUKNVQKOWTXIDXPHHIIDGKDYMPNZXFEBXQTLHXVZOSGGJYSUVWPMHFETJMSKWTBKJPZDCHLOIASVKTGEUAIQNRJEFJLPMILNHOTYETDBFNKPNQYXQEGTRDVVVSJCCJBRMYDBGA");

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
    msg.setTimeStamp(0.5459021540867173);
    msg.setSource(53114U);
    msg.setSourceEntity(242U);
    msg.setDestination(53630U);
    msg.setDestinationEntity(133U);
    msg.control_src = 23888U;
    msg.control_ent = 219U;
    msg.timeout = 0.3356235926846971;
    msg.loiter_radius = 0.5557089829165649;
    msg.altitude_interval = 0.7165722661216992;

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
    msg.setTimeStamp(0.4748662416875732);
    msg.setSource(49929U);
    msg.setSourceEntity(217U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(156U);
    msg.control_src = 34979U;
    msg.control_ent = 60U;
    msg.timeout = 0.31281270203726264;
    msg.loiter_radius = 0.01748614213724875;
    msg.altitude_interval = 0.3090658756547767;

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
    msg.setTimeStamp(0.8355599888186317);
    msg.setSource(1057U);
    msg.setSourceEntity(10U);
    msg.setDestination(1133U);
    msg.setDestinationEntity(4U);
    msg.control_src = 25641U;
    msg.control_ent = 191U;
    msg.timeout = 0.9638014415690512;
    msg.loiter_radius = 0.01664666797868508;
    msg.altitude_interval = 0.5417670395534897;

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
    msg.setTimeStamp(0.7724960642779035);
    msg.setSource(44844U);
    msg.setSourceEntity(75U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(107U);
    msg.flags = 153U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.23287109684400742;
    tmp_msg_0.speed_units = 55U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7790865122076619;
    tmp_msg_1.z_units = 85U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7696194676308139;
    msg.lon = 0.5211432394159408;
    msg.radius = 0.3770446708326691;

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
    msg.setTimeStamp(0.07619896067223753);
    msg.setSource(64261U);
    msg.setSourceEntity(177U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(214U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4202030719372528;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6192094298311481;
    tmp_msg_1.z_units = 193U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.756386393423191;
    msg.lon = 0.5870120124759354;
    msg.radius = 0.11454473152907596;

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
    msg.setTimeStamp(0.8140257592500431);
    msg.setSource(11422U);
    msg.setSourceEntity(154U);
    msg.setDestination(4596U);
    msg.setDestinationEntity(61U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9587864027241859;
    tmp_msg_0.speed_units = 26U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08727999841033973;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5898031172890011;
    msg.lon = 0.14014113539038564;
    msg.radius = 0.571787982996991;

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
    msg.setTimeStamp(0.49416974554432436);
    msg.setSource(50599U);
    msg.setSourceEntity(149U);
    msg.setDestination(4644U);
    msg.setDestinationEntity(56U);
    msg.control_src = 41028U;
    msg.control_ent = 105U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 62U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.28892232245947314;
    tmp_tmp_msg_0_0.speed_units = 47U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5358365099620928;
    tmp_tmp_msg_0_1.z_units = 170U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4684941880832949;
    tmp_msg_0.lon = 0.5421698622522271;
    tmp_msg_0.radius = 0.41702533949420184;
    msg.reference.set(tmp_msg_0);
    msg.state = 107U;
    msg.proximity = 81U;

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
    msg.setTimeStamp(0.20467984624186542);
    msg.setSource(59216U);
    msg.setSourceEntity(78U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(54U);
    msg.control_src = 60871U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8035461754026496;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8663298414359073;
    tmp_tmp_msg_0_1.z_units = 192U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.39273846659522793;
    tmp_msg_0.lon = 0.34511712516088233;
    tmp_msg_0.radius = 0.4637905681492206;
    msg.reference.set(tmp_msg_0);
    msg.state = 220U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.12856858456014975);
    msg.setSource(7504U);
    msg.setSourceEntity(152U);
    msg.setDestination(26959U);
    msg.setDestinationEntity(92U);
    msg.control_src = 13444U;
    msg.control_ent = 208U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 207U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8108603023324081;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9619898030912384;
    tmp_tmp_msg_0_1.z_units = 22U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8546993294722078;
    tmp_msg_0.lon = 0.9372955957134284;
    tmp_msg_0.radius = 0.37998612262667497;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 203U;

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
    msg.setTimeStamp(0.5373970444465813);
    msg.setSource(21436U);
    msg.setSourceEntity(214U);
    msg.setDestination(34869U);
    msg.setDestinationEntity(36U);
    msg.ax_cmd = 0.2057174210686813;
    msg.ay_cmd = 0.673534048058436;
    msg.az_cmd = 0.9070521211766658;
    msg.ax_des = 0.69007004165548;
    msg.ay_des = 0.16593951288874342;
    msg.az_des = 0.1541871838173634;
    msg.virt_err_x = 0.020128684054844026;
    msg.virt_err_y = 0.8374427577086659;
    msg.virt_err_z = 0.19271970399794047;
    msg.surf_fdbk_x = 0.6258328750676521;
    msg.surf_fdbk_y = 0.7118108223459488;
    msg.surf_fdbk_z = 0.5167066747701852;
    msg.surf_unkn_x = 0.8361307308887416;
    msg.surf_unkn_y = 0.7357227662473821;
    msg.surf_unkn_z = 0.6758177203500735;
    msg.ss_x = 0.682745895936158;
    msg.ss_y = 0.21137631188006034;
    msg.ss_z = 0.18402747274386555;

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
    msg.setTimeStamp(0.6648516849391156);
    msg.setSource(44735U);
    msg.setSourceEntity(174U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(58U);
    msg.ax_cmd = 0.9982038269193815;
    msg.ay_cmd = 0.2369508231137708;
    msg.az_cmd = 0.813908931487188;
    msg.ax_des = 0.14888565651547025;
    msg.ay_des = 0.2393346794560839;
    msg.az_des = 0.49814562848577293;
    msg.virt_err_x = 0.5386457678407277;
    msg.virt_err_y = 0.5278063042332416;
    msg.virt_err_z = 0.42165340806607576;
    msg.surf_fdbk_x = 0.9458617297786871;
    msg.surf_fdbk_y = 0.2233135918622251;
    msg.surf_fdbk_z = 0.12072936925903566;
    msg.surf_unkn_x = 0.7832365461594265;
    msg.surf_unkn_y = 0.19282919842267543;
    msg.surf_unkn_z = 0.8084638072666963;
    msg.ss_x = 0.48072991975148716;
    msg.ss_y = 0.9872447313586856;
    msg.ss_z = 0.454037361938169;

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
    msg.setTimeStamp(0.1919415865735804);
    msg.setSource(11756U);
    msg.setSourceEntity(155U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(167U);
    msg.ax_cmd = 0.22449378339651482;
    msg.ay_cmd = 0.38776675232960833;
    msg.az_cmd = 0.3279232673389033;
    msg.ax_des = 0.5518938693485217;
    msg.ay_des = 0.9851157580441353;
    msg.az_des = 0.5227284084763638;
    msg.virt_err_x = 0.3895857847825861;
    msg.virt_err_y = 0.08909329951543066;
    msg.virt_err_z = 0.3387260289441425;
    msg.surf_fdbk_x = 0.6734336669468479;
    msg.surf_fdbk_y = 0.31097104322994173;
    msg.surf_fdbk_z = 0.2909061830261225;
    msg.surf_unkn_x = 0.8746136507753457;
    msg.surf_unkn_y = 0.7040107902685658;
    msg.surf_unkn_z = 0.2585418697903228;
    msg.ss_x = 0.5709483262122584;
    msg.ss_y = 0.14408683239728615;
    msg.ss_z = 0.7262504350095665;

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
    msg.setTimeStamp(0.6154629453602893);
    msg.setSource(48378U);
    msg.setSourceEntity(77U);
    msg.setDestination(52979U);
    msg.setDestinationEntity(165U);
    msg.s_id.assign("RVNWNTCZAWJAWJKQGONQHHYGIRDEZRKQGOMTCAKZWHUYYLKTULMYXVTPIBTLIELNVJVGEVHTZKAYSDKNPWPMCTKTSFDARJXBEDUZDEEXCCERIGUQRJXMCKNPHMNFLXZJOXPNSQSRFPFJVZIODFBIAPXHLFCYUYSFKBOYYTSJEHVHZTIOKULGFLCGXVUBMZVJSSGADEYRGGLREWCOMMIRMUQCJQBBDOAZIBNQMW");
    msg.dist = 0.33624902290393643;
    msg.err = 0.5995356377105387;
    msg.ctrl_imp = 0.3407226288660825;
    msg.rel_dir_x = 0.5468769778218711;
    msg.rel_dir_y = 0.1350143842123518;
    msg.rel_dir_z = 0.5279761957626335;
    msg.err_x = 0.27826720224126844;
    msg.err_y = 0.07902015413300323;
    msg.err_z = 0.9589149954798167;
    msg.rf_err_x = 0.3395371686883857;
    msg.rf_err_y = 0.28889229394929716;
    msg.rf_err_z = 0.8005191485044595;
    msg.rf_err_vx = 0.880478886172467;
    msg.rf_err_vy = 0.8645794413910554;
    msg.rf_err_vz = 0.9687541523912496;
    msg.ss_x = 0.5265071163904675;
    msg.ss_y = 0.9780449409899253;
    msg.ss_z = 0.2441492448424596;
    msg.virt_err_x = 0.810027023844124;
    msg.virt_err_y = 0.925997482019341;
    msg.virt_err_z = 0.09228351105507915;

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
    msg.setTimeStamp(0.1576297649493441);
    msg.setSource(47265U);
    msg.setSourceEntity(52U);
    msg.setDestination(6101U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("JNSYUPXNLTZMGWXJXMKRXQLTQZYVUITOQQFGXSIJCTHSJLNHINFLCLWUUWAOVVRPMWXIKOPKANBYFHEAYNXCZFTZZBHJWGURCMTVEUBLCYJZPSRDQFBMCPZJTMPSIXKOBVVPSWUYIFPGRKALAEDASDWCHXUVRQKTNINYTFDFOPDOBIESHBHYSLMECWOIPKGHBLGDDQHABRBTAWJZMZSECUMEVQFZEGHYRXGK");
    msg.dist = 0.7942013052695853;
    msg.err = 0.7124376522480873;
    msg.ctrl_imp = 0.6890623015647616;
    msg.rel_dir_x = 0.11106248276748187;
    msg.rel_dir_y = 0.8140094107752075;
    msg.rel_dir_z = 0.028732117226612286;
    msg.err_x = 0.7078174882826751;
    msg.err_y = 0.6305480891146727;
    msg.err_z = 0.05904925180496534;
    msg.rf_err_x = 0.8469483280621973;
    msg.rf_err_y = 0.9960913014541114;
    msg.rf_err_z = 0.462246892800923;
    msg.rf_err_vx = 0.0675027995581553;
    msg.rf_err_vy = 0.8822452833504396;
    msg.rf_err_vz = 0.08464295818779766;
    msg.ss_x = 0.8376455569166419;
    msg.ss_y = 0.8288296989678663;
    msg.ss_z = 0.15969968778781674;
    msg.virt_err_x = 0.48540645452407105;
    msg.virt_err_y = 0.8351464293114921;
    msg.virt_err_z = 0.9932065235681939;

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
    msg.setTimeStamp(0.6561538052803778);
    msg.setSource(27562U);
    msg.setSourceEntity(189U);
    msg.setDestination(48793U);
    msg.setDestinationEntity(74U);
    msg.s_id.assign("YUUWKNPXGFTHUNIPLQDDWISTQEISJNZGAAKQEWBYAJNCACSWBKTTXMMGIVYGXYRDPKDMC");
    msg.dist = 0.5116481474540554;
    msg.err = 0.9288946843957476;
    msg.ctrl_imp = 0.4562136813731361;
    msg.rel_dir_x = 0.853011929834952;
    msg.rel_dir_y = 0.9368178299424539;
    msg.rel_dir_z = 0.22982068943137046;
    msg.err_x = 0.9038810496591564;
    msg.err_y = 0.5583264313018056;
    msg.err_z = 0.010664730396588551;
    msg.rf_err_x = 0.30692558075815424;
    msg.rf_err_y = 0.9204827747904804;
    msg.rf_err_z = 0.6112996274483641;
    msg.rf_err_vx = 0.8839132764910865;
    msg.rf_err_vy = 0.9656489627360577;
    msg.rf_err_vz = 0.048215851414840416;
    msg.ss_x = 0.1497608519704332;
    msg.ss_y = 0.6452746152168967;
    msg.ss_z = 0.983941238171518;
    msg.virt_err_x = 0.6430547958411734;
    msg.virt_err_y = 0.05842196909742714;
    msg.virt_err_z = 0.5215905580044604;

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
    msg.setTimeStamp(0.5983773182260702);
    msg.setSource(59177U);
    msg.setSourceEntity(237U);
    msg.setDestination(18785U);
    msg.setDestinationEntity(95U);
    msg.timeout = 25782U;
    msg.rpm = 0.16537050450529045;
    msg.direction = 70U;
    msg.custom.assign("CDWWKDJBFCGTASQXBCXTKBFSNQEGEBYQRAFUEFUJLSXHYXBAWGPEIGYOVLYXSUBTCXRWKKHIXZSUAVPDS");

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
    msg.setTimeStamp(0.7510580921352854);
    msg.setSource(21150U);
    msg.setSourceEntity(32U);
    msg.setDestination(56935U);
    msg.setDestinationEntity(75U);
    msg.timeout = 32773U;
    msg.rpm = 0.585665634538046;
    msg.direction = 1U;
    msg.custom.assign("FFYBYNJWTBERGUQRJHXIGMIIRSTZEOSKZQMHFYGQSAJIDHHHCLIIFTCRWHDXDIDUBADLBNZGOTJLXXZMPVDNRTPETSGQSNHMEKPDPOKCYGUANZWONAVVLZPPSTZWUGRLODYFEXGPOMCYAJOMXCJJWJVTWKQACFRWHCFPAUQUBLLWKZHEEYKKUEOPYTVQCXFXXBULZMNLMIHYKCBUJIANDYGMRQFZVNBNRXGREOSDAVQOVAVUMVSQF");

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
    msg.setTimeStamp(0.4923494076673871);
    msg.setSource(55397U);
    msg.setSourceEntity(252U);
    msg.setDestination(65042U);
    msg.setDestinationEntity(1U);
    msg.timeout = 11906U;
    msg.rpm = 0.22836631775593785;
    msg.direction = 136U;
    msg.custom.assign("EZARJYCOMLCBZNUAG");

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
    msg.setTimeStamp(0.7351834102296924);
    msg.setSource(8696U);
    msg.setSourceEntity(15U);
    msg.setDestination(6367U);
    msg.setDestinationEntity(17U);
    msg.formation_name.assign("CFBNUNKMSNJXXDFHUMHDAEHQQCFDGUSCTZEVYQAMHSRVWLBDKSSKYOLFJLPNQREUDEEWSWFNZYHIXKVNGOHPUYMWZAZIMTGUYROKDPARGNGLMZWFGYOOHAOGRUPIAWKXJPCWGHOABJDCCNMOROQCHTTVTRXSYTCNRBPYEZVLHDZQBIPZKUCSMRVZFKABJPWJNDWVXIEZIIJVIVESTQLWPLM");
    msg.type = 215U;
    msg.op = 175U;
    msg.group_name.assign("SNHTZSCRUEHYZZVQIHEGXYTFGLSGBPLXSKNKFGOLUOSBNBRYRUDYWDKBGBQDAJSBJCJOHMKSZUFFUCBKWQFCVNYSTAYAZXCAVTTCTYRGDDXOMJXTQMFQPEPVZYRLHNVWINXJIFPNMOKJIZICBERAKFAIQANC");
    msg.plan_id.assign("RGDUOUVFKIPULPCYTCZGAILLMNHKFTQFVDGWOPOSYHBXDNVAQAGLUSOLRNRYDUTMRHBIXJYZOWGAGTQZIIFCWXQXMEFRLTYZTUEXCHEMALLJQASNZEUNZVCGWMZSECAZSJWXBDBVWIWDSBOKRTFLPKVSMMVAUVYBIZZNOEQONVEEBVPCJXFPHBUTMEJHKRFTBFOGCDSDINNKJRUGWKRLDPKHXJDGQQIBYHKATOWKSSYCRFAQXJ");
    msg.description.assign("JLXAQGNPBYREXDYVCPEHKE");
    msg.reference_frame = 222U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7749U;
    tmp_msg_0.off_x = 0.1237814627590339;
    tmp_msg_0.off_y = 0.9011150639704832;
    tmp_msg_0.off_z = 0.429234753185605;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5420798523995621;
    msg.leader_speed_min = 0.45389346812123377;
    msg.leader_speed_max = 0.41443555851354097;
    msg.leader_alt_min = 0.9077703849664822;
    msg.leader_alt_max = 0.9224040717905595;
    msg.pos_sim_err_lim = 0.36174627976754237;
    msg.pos_sim_err_wrn = 0.6091239483216627;
    msg.pos_sim_err_timeout = 392U;
    msg.converg_max = 0.777831665834221;
    msg.converg_timeout = 45140U;
    msg.comms_timeout = 9517U;
    msg.turb_lim = 0.8013484369244602;
    msg.custom.assign("IEBAMHHBAMYLZGWZTCEBBDACFLPKZKDPYYVFTFOEPJVGURCOGPKVJQCAFWRGRUNXXEVLUZTDIWCPCRWIRNUEUJRJWHKGKJSQGDTBHIYBNAVJUCPY");

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
    msg.setTimeStamp(0.2940776405959741);
    msg.setSource(34373U);
    msg.setSourceEntity(131U);
    msg.setDestination(55317U);
    msg.setDestinationEntity(149U);
    msg.formation_name.assign("EKPWKYMLBWYODANLAAKHJOAZILCUOLPGJIISMKFIAGUJTTRPCTWBCRSXVFGRNHVSDZARDNBOMNLBUFVIEZISKIXNJZEUJVKCKQJUQUDWYTIFPEULLEMGZBBWOMGJHWWSOVBQTFVRMMOVKQRDAIDXFXFQGBTNHYSKZVHMOFYPDCQGUCYEYDFWXYYXOHXGRLGUXETHCNCMQJZZNU");
    msg.type = 59U;
    msg.op = 96U;
    msg.group_name.assign("XXOVBBUABIIGUOHECICJRXZLQRLVAHEYZZMBGDFPYNUVSKNCUQEASCPUYNXERDQACDMRLJFMWMJRFFVXHLSSCOXG");
    msg.plan_id.assign("QXHFICEOWROGUOTELHKLGDTFMSGHDKABNXSHYAUJLWMNYBKRDGVMTOSIPRPNVEMVZZPUWJQWOZZRHQLEHNUWVVCFYIADEXJGXJHRHZWBRPCJWXYDLSDYCBGCIMVCGYAIPKLBDMFRFEYXNTDUNFZXCFUCSEJQOMHIABZPJPAUQEYNJAVXLNQLNEKVTFZ");
    msg.description.assign("FYSKECOKGQISDQYZKKNFUVPHBCVEBSVXBZDGNGCBJCISEOJUKIMQYNTSUCATGQPMRJUWZOXVKLJCOXCRBDAIYHTGEOWGSOQJHFMNEOMMQNGWZURKABNHWXKTRJVNNDMIFVXVAWYQBPYWOOTKAMCPJPWVLIEAZEFTMRRYPWUEILSLGMZECTWDUNGHTVPXXHPHRSDJFQZAWARHTBISXUTFJAQ");
    msg.reference_frame = 10U;
    msg.leader_bank_lim = 0.15988617818421058;
    msg.leader_speed_min = 0.6420977152986821;
    msg.leader_speed_max = 0.22981968703973643;
    msg.leader_alt_min = 0.4024566824461768;
    msg.leader_alt_max = 0.4278595952054529;
    msg.pos_sim_err_lim = 0.8359040268887344;
    msg.pos_sim_err_wrn = 0.6963876794508845;
    msg.pos_sim_err_timeout = 24137U;
    msg.converg_max = 0.6290276700409068;
    msg.converg_timeout = 39608U;
    msg.comms_timeout = 15817U;
    msg.turb_lim = 0.7532511941439661;
    msg.custom.assign("SKYMHUMMBNELNRFULMOGKIRJYNKNCPEFALMNLBUXRXDCAIAUDVWQOXNZDZSPLWHGVTPCZRAAUWMFDLXOAHQIBBLCEKGVWJXVCZBQPTJVJWJUIYOSFGKKURZFOMAZN");

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
    msg.setTimeStamp(0.43598803402633557);
    msg.setSource(918U);
    msg.setSourceEntity(55U);
    msg.setDestination(64229U);
    msg.setDestinationEntity(148U);
    msg.formation_name.assign("TJQSAWIUZHYHKEAYELWMFVCXIUMWTZQSAZCMZOUKOMMCJEMAXVQBNVPNRNOQUFKBTTHRUBYLZGSDDRNJWTELCGGYGEDLJHMQMFFOHWFSJ");
    msg.type = 235U;
    msg.op = 16U;
    msg.group_name.assign("TODCDSYDQWRXPZPEELYPNTWKONJUCBFEEBMQHGNPRCTVKXTMAFFXVNKBAUYANHIIYTFZRSBNBLSPHJGHNHXVKIDCWNLIYCYCYZLQVOOGHUGSNSDVNZXDBGJIFTXEOQZLORVSKOUGCJMKDZMYXMHTDZWQPVHACPJAQVLRXVKUOGURIJIBFIMQOAJRRXUBIWTAJKFWELQWCJFMSMDIBPUAQKB");
    msg.plan_id.assign("FYRFNGKAQMGXKLYDUWJGQNXPTFUOOPKDHSTFIWLHXAJQTHEQCTORZAKSWOBFBKLKLGJUFKJYYMZJUYVVFIJJGXIVEWBCDDNQUVOVVHZUWORZERQITKWZCALPBHAUG");
    msg.description.assign("DXITXBCUPSKPBCJHLAPODWQKGDUEMQQMIMEVECNUGHWYRZLWUUVMZKHKNYUOBYVAKBJDHBHETVHFQFPIWTKMGODBEXSOWGQJEYFALPJHZFJXJZYGRPSUULTRJWJCHTOHJMQPVRRSIGYQXHNDXLVIIXVASCVOZYDEGTLIDIICDCAKUMXGFNOTULCRQXFIKOFBANLAFYNBMWSRASZGSSYZTZFKAMOBEPTYCNLCJREZSRGDFVXTQPVMKNAWW");
    msg.reference_frame = 232U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36214U;
    tmp_msg_0.off_x = 0.1469784887476815;
    tmp_msg_0.off_y = 0.6357543364287943;
    tmp_msg_0.off_z = 0.0013424332053476595;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2756386420260203;
    msg.leader_speed_min = 0.5480010975845794;
    msg.leader_speed_max = 0.3547999068521338;
    msg.leader_alt_min = 0.676215441858418;
    msg.leader_alt_max = 0.9809697503146031;
    msg.pos_sim_err_lim = 0.9230011655140916;
    msg.pos_sim_err_wrn = 0.4169589524339271;
    msg.pos_sim_err_timeout = 41189U;
    msg.converg_max = 0.861067021711602;
    msg.converg_timeout = 47250U;
    msg.comms_timeout = 55329U;
    msg.turb_lim = 0.2512376337642084;
    msg.custom.assign("PDNHBCUFIJNMEFTDSECFHCYCZGDCWYUDUKJQNGWUVTQUEDCVTXLE");

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
    msg.setTimeStamp(0.32065231161235463);
    msg.setSource(52880U);
    msg.setSourceEntity(118U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(82U);
    msg.op_mode = 189U;
    msg.error_count = 186U;
    msg.error_ents.assign("HSKUKPJTFOSFRNVLLANLVIJFRJXRCXXFOYQGCIUKZASGTOEYOHEGBPZNEBWROTTMRMBQHSKBWZWHRJWCQQOPHYFG");
    msg.maneuver_type = 45972U;
    msg.maneuver_stime = 0.11426013602440732;
    msg.maneuver_eta = 19253U;
    msg.control_loops = 233906797U;
    msg.flags = 69U;
    msg.last_error.assign("PCJTFDOETJTYMHTPFXMYRIIFKIMSASBMWYTCGLNWUZNJBKQQSESZLABGABHGDENOAZLVBRXKAYHXSEOXOCXLSZGQGEKMVYHMJEKTPKJJCCRPVFANGKDDVIBOTCRWGPDUNOYLBISZDXUHMZVLODWPOUERT");
    msg.last_error_time = 0.8920832099370908;

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
    msg.setTimeStamp(0.6207148520406393);
    msg.setSource(35990U);
    msg.setSourceEntity(28U);
    msg.setDestination(27806U);
    msg.setDestinationEntity(80U);
    msg.op_mode = 139U;
    msg.error_count = 119U;
    msg.error_ents.assign("CHUEMSXCEOFKCQAPEZONUVWAODVGJPEJWMIMJMEGLZTOXUSTQRPZFAYXDWOFUAMNKYTPQZSFVDORTZCGMQROISAXPVDRVGXPJLBKZUJLXEYNEKUMLSZQNMMCDQVCZBEVBINYKIKFGJQFTBYIZJTVHTSGUYCWHRXNXACLSYLLUVRRYBNVPWCSLH");
    msg.maneuver_type = 15258U;
    msg.maneuver_stime = 0.5597041529931392;
    msg.maneuver_eta = 47680U;
    msg.control_loops = 4060661343U;
    msg.flags = 53U;
    msg.last_error.assign("UDKEYCQXBDEULINZNSQVKBXXOIWMUDJHFUKCACPOIYFNRGPXGGDRGOMBJASZFMFSAUWYCXKOUIQPLJJPFKDIHDFZLRQPPAELQTSSKEYDOGKHPCTZNMGJVSFBYTACLOIQPGAIRXCXRVECYEORRZBGWIESVAWRHNZDFMFMXPSQZUDTKYVZVGNHNONJRLNCWTXELIMJGVTOQSV");
    msg.last_error_time = 0.13532632583600013;

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
    msg.setTimeStamp(0.9943442664881035);
    msg.setSource(12991U);
    msg.setSourceEntity(48U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(184U);
    msg.op_mode = 190U;
    msg.error_count = 27U;
    msg.error_ents.assign("QWWHAQYUNBDSIFCCLRYDIRTEYONZVJGAHSKSZXWMHLDCCMIRASXHOFRHVIXLKYLZDVWPQKRPFXWWLJXEHJEUAKRUELUNTTQYUHCJOWMT");
    msg.maneuver_type = 26126U;
    msg.maneuver_stime = 0.10226608289241557;
    msg.maneuver_eta = 11969U;
    msg.control_loops = 2837015009U;
    msg.flags = 133U;
    msg.last_error.assign("NNIEUYMFTCLVKNQWCAJPVWRLAHTTVQKCFQRKNLVAHUEWQWKWD");
    msg.last_error_time = 0.8642603206618141;

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
    msg.setTimeStamp(0.13051343817694538);
    msg.setSource(57079U);
    msg.setSourceEntity(87U);
    msg.setDestination(43560U);
    msg.setDestinationEntity(160U);
    msg.type = 26U;
    msg.request_id = 36293U;
    msg.command = 15U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 48266U;
    tmp_msg_0.lat = 0.014290413156563653;
    tmp_msg_0.lon = 0.7753475448170479;
    tmp_msg_0.z = 0.5709888065642932;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.amplitude = 0.8749617279779152;
    tmp_msg_0.pitch = 0.5057384716094276;
    tmp_msg_0.speed = 0.22091072122544853;
    tmp_msg_0.speed_units = 233U;
    tmp_msg_0.custom.assign("SXTMPYLJRHCEXWLWQSMTBNBPAYXOOPOFHVIOXKTNSKPJMSEMDHOYHONUSCJFLWQGAHRBGQURYUCRRNXAZCUFMDHFLUCZYMJOLBSKGIEVWSGKDTHCQYXEYSILYWBGPUPFPGLUPWANXB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64919U;
    msg.info.assign("BTRDWWHVLWOVOZUPAMZYHCXKGWLDQNLJQCNZLQKSUSOUCOHRZGPUVOEQUIBPKDOZADIEIOVFKMYPQPFWEMMPPUUHQTIGSAKQGWYGPNKFMYYPUTAXSEYWKFTYTRIDDBHABJJXRFATOECYHVNBQBCCLLVHVDMXGP");

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
    msg.setTimeStamp(0.38868985749708174);
    msg.setSource(5095U);
    msg.setSourceEntity(77U);
    msg.setDestination(13817U);
    msg.setDestinationEntity(3U);
    msg.type = 237U;
    msg.request_id = 15981U;
    msg.command = 81U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 59782U;
    tmp_msg_0.lat = 0.3328574313837347;
    tmp_msg_0.lon = 0.8754269718437646;
    tmp_msg_0.z = 0.20705997945115073;
    tmp_msg_0.z_units = 247U;
    tmp_msg_0.amplitude = 0.3109416649564998;
    tmp_msg_0.pitch = 0.6116939300084214;
    tmp_msg_0.speed = 0.6100733579605395;
    tmp_msg_0.speed_units = 159U;
    tmp_msg_0.custom.assign("NOEMKWFNYBRSLGQHSRMIIRJJTIOHPUZQDKKQXBQFZTSYPNXIXCWXOJNDMVKJDTMHHFDAEGVGGBYOMTVDLSFRXJIUBUCOPCVOLXCNGZHRYFVB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55545U;
    msg.info.assign("MQMWYUHPAPUTXWOUBGZNDARNRYHRJUFCEBHVVEJSZMLSKAXATKCHXNHSHOBWNQAHZNFDEWOOMYE");

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
    msg.setTimeStamp(0.1876174125270097);
    msg.setSource(58989U);
    msg.setSourceEntity(141U);
    msg.setDestination(64747U);
    msg.setDestinationEntity(132U);
    msg.type = 32U;
    msg.request_id = 29363U;
    msg.command = 38U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 34487U;
    tmp_msg_0.control_ent = 170U;
    tmp_msg_0.timeout = 0.003749957806541082;
    tmp_msg_0.loiter_radius = 0.9790783061539817;
    tmp_msg_0.altitude_interval = 0.025747181581219247;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63147U;
    msg.info.assign("AAHNNYQTPYVPSUXQMFOVAKYMAWBALZCOSCCUOWYKMDWRCSQLJUEVDGXGEXDZSHBFZUUTQUMMJNZZZUXSKNRHCGVYYQFPPOGIMDLRT");

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
    msg.setTimeStamp(0.03341535317152289);
    msg.setSource(35788U);
    msg.setSourceEntity(114U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(19U);
    msg.command = 230U;
    msg.entities.assign("QKAYXUQMRBPEHRICHJVWNUETHYSU");

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
    msg.setTimeStamp(0.08650827447441078);
    msg.setSource(37829U);
    msg.setSourceEntity(166U);
    msg.setDestination(37955U);
    msg.setDestinationEntity(138U);
    msg.command = 137U;
    msg.entities.assign("GOUTEUTCEAHUQXKDFOKJPCLBLSMPGRNDLOPJBGMJZTTJRIMRVKMEZGQZDVIHVDKFXEPTNXBSKDBLRRFYAGQJCFTJPFKNO");

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
    msg.setTimeStamp(0.5997429846348599);
    msg.setSource(6012U);
    msg.setSourceEntity(198U);
    msg.setDestination(22021U);
    msg.setDestinationEntity(176U);
    msg.command = 212U;
    msg.entities.assign("LWDXRYTPQZXYNEFZDAFHKNTITRCIEYDDSMJIBTGBFXRVKJLGYEBUQQMOYEVPXVDEBHQAKRDPOITZWOSQMJOAOCOWANJRNEGIAVHCNZMPSTWGXAWYBWLLMGSCZPUKJXKQUISAYSLOZQKWGHPHSNTVLOHWCSCTUTEHUMLGUFDKSBJVPLFTCNYEVNQIOX");

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
    msg.setTimeStamp(0.17815801413447374);
    msg.setSource(37084U);
    msg.setSourceEntity(190U);
    msg.setDestination(51057U);
    msg.setDestinationEntity(205U);
    msg.mcount = 36U;
    msg.mnames.assign("VDYGFXRPLIRRADWYABAOHTXLCJIIKKUBYBYBLN");
    msg.ecount = 242U;
    msg.enames.assign("XRZSWMHDGHKQVWHIWUDWNYNTUIVPDISIEZITUNDXWIAJE");
    msg.ccount = 62U;
    msg.cnames.assign("AVWQLUMZTKLMBHQCRZEGIHZPDTQQPCDYUNDROSYGVVPVNTCBPKJJMWBCXLCEFUPSFIPUDNTIULASUEGHLBGEKVMRKLKMLQFPZHWJAOCHMXOJWVLVEMXTKJNXKRTCZVTSNIQGYFRNMAXNQYKJDMBGJGFTYCFHBISFHOSAZEZY");
    msg.last_error.assign("VDXUWOOZKXLLSJRXUHUPHKTAYJQXZGOBPYTIKKFNQUANGFOTZWFMGQLSILBPJDKLSMXMMJEOLZIKOHWSGORRRDXETBIVYRNICHGJUQLFNQBDDBZWNWSRWQOWHJUFTCRZEZSBSLAJWFSLKUYXTCQPHKATUPAQM");
    msg.last_error_time = 0.5044635321019616;

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
    msg.setTimeStamp(0.565268945863539);
    msg.setSource(42208U);
    msg.setSourceEntity(24U);
    msg.setDestination(27443U);
    msg.setDestinationEntity(9U);
    msg.mcount = 247U;
    msg.mnames.assign("ZEZICSQYALDSIXPHPCAXRWBULNXEECAWSJHVP");
    msg.ecount = 173U;
    msg.enames.assign("BJMBZJWXKMKFUXLCZVKUWMCDCOTYIOUGIBVDXPDHLGLWZVREQAREWQPANRCODKQNTOJVHSUPPEJFGINDYJZNIPAWSLQYUFFTYDICUMXLWRGDPAVYKYVG");
    msg.ccount = 117U;
    msg.cnames.assign("WWPNCXSVHADPDGVPJSIJYQXVRFFMDNQUSAHPCDMWZBSNEMRBRUSUFDQJZSXFGDNYOECQZLRWBGILKQVTOCDAZYEINWHQDCFJOGMKAUVWONATVYOBQTJZZBRTEAH");
    msg.last_error.assign("SRYAABERPBLOYYKFFMDIIOTKZMCWELYOJKZLGYQADPIRCMWFRHWKPSKGINUEZDSTXZHNGBQUNDPNFDASVZATEFQJCVXGTUJPHLIKOZTMVQAXLDXTBTWZSXRIRVILDOMSQEPYWXLGRX");
    msg.last_error_time = 0.807665830457285;

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
    msg.setTimeStamp(0.6490410111024504);
    msg.setSource(7285U);
    msg.setSourceEntity(178U);
    msg.setDestination(59947U);
    msg.setDestinationEntity(176U);
    msg.mcount = 183U;
    msg.mnames.assign("JTQDPGUNEBEIKAFNNVSSPKJOUFDHBWSUBDGGHDTDVTLSDAQJGXGWITCGLFEDYHWFGKAXMJYPKMMVZEGSJDNJCCVXXKPZIBOFBWUAGCDLQXTXGEPIFSIVQWOABHYHIPIAKABOQKXRHLKYSBSBKJMLRWREQZLPZZMZVUINFUCRLZZRWECXTOACEZIHLZWCWVDOATXNJRHFRRTYU");
    msg.ecount = 151U;
    msg.enames.assign("VBXGUMTXOIWWHMCXAVIVUKRRKDBBGELYFNVLLVLTMQSZPOJLHNJSBXOHNIEKFZBYXEQIIIZTGNQCMOXDWURAQTNLXTXFLZPCRJTJKOCDAGGDMXJWYDQHGHGUGAMJSUQCPZREYGJPSYEUPMYMAISONFRZRVVUJRRHWWQEVDMHOKGHNSMYQSUIBWEWEOQFFDHASZAAWNUOUJPDOINFZTKSCNDVBWTCAYJEPZVZAFYFISPFKECKLKL");
    msg.ccount = 188U;
    msg.cnames.assign("IUXHUIVUSXFOIWTJXWTJZLVCMAUMFWGREHBBBOVDYMQKAXDKREPWPAGSNRTEUPNIZTIKJVCZWHCIQOGPCMZBYLYFJFFKGJSNNDQR");
    msg.last_error.assign("DNATEYXOCNQZZIGUFESKYJVPVBNWSSWLGJZ");
    msg.last_error_time = 0.839942042010507;

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
    msg.setTimeStamp(0.2555189914246164);
    msg.setSource(35526U);
    msg.setSourceEntity(241U);
    msg.setDestination(48105U);
    msg.setDestinationEntity(90U);
    msg.mask = 9U;
    msg.max_depth = 0.23687833412113835;
    msg.min_altitude = 0.22756777350962165;
    msg.max_altitude = 0.350683999922316;
    msg.min_speed = 0.8638424752347426;
    msg.max_speed = 0.41783255841663625;
    msg.max_vrate = 0.1641935920812444;
    msg.lat = 0.5170200495596137;
    msg.lon = 0.019631731424606724;
    msg.orientation = 0.9486778263005413;
    msg.width = 0.9699874643734869;
    msg.length = 0.8144519219045516;

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
    msg.setTimeStamp(0.5294273641318507);
    msg.setSource(21699U);
    msg.setSourceEntity(198U);
    msg.setDestination(21225U);
    msg.setDestinationEntity(115U);
    msg.mask = 162U;
    msg.max_depth = 0.5401743866444126;
    msg.min_altitude = 0.9616626001276368;
    msg.max_altitude = 0.49952580338335706;
    msg.min_speed = 0.01737706865834432;
    msg.max_speed = 0.956346671869469;
    msg.max_vrate = 0.46577360309230065;
    msg.lat = 0.14140087507551935;
    msg.lon = 0.348448838888493;
    msg.orientation = 0.5545310933839558;
    msg.width = 0.2877678332980793;
    msg.length = 0.3068668084772418;

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
    msg.setTimeStamp(0.17056352273746145);
    msg.setSource(18244U);
    msg.setSourceEntity(150U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(4U);
    msg.mask = 197U;
    msg.max_depth = 0.6008385010545592;
    msg.min_altitude = 0.5497561137540288;
    msg.max_altitude = 0.733679795836278;
    msg.min_speed = 0.3846702024634391;
    msg.max_speed = 0.9334589440853246;
    msg.max_vrate = 0.8793388057246858;
    msg.lat = 0.5803378829791785;
    msg.lon = 0.45972592444733973;
    msg.orientation = 0.015528618115361548;
    msg.width = 0.9049203886812527;
    msg.length = 0.6098037312022483;

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
    msg.setTimeStamp(0.4991124404044396);
    msg.setSource(64273U);
    msg.setSourceEntity(55U);
    msg.setDestination(41858U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.9856239674588506);
    msg.setSource(19377U);
    msg.setSourceEntity(234U);
    msg.setDestination(1619U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.3399208507735476);
    msg.setSource(27922U);
    msg.setSourceEntity(199U);
    msg.setDestination(32830U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.5558093690927982);
    msg.setSource(10706U);
    msg.setSourceEntity(132U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(2U);
    msg.duration = 39461U;

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
    msg.setTimeStamp(0.6863384069801026);
    msg.setSource(49217U);
    msg.setSourceEntity(111U);
    msg.setDestination(29083U);
    msg.setDestinationEntity(45U);
    msg.duration = 9156U;

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
    msg.setTimeStamp(0.3220834294302678);
    msg.setSource(32154U);
    msg.setSourceEntity(145U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(228U);
    msg.duration = 43037U;

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
    msg.setTimeStamp(0.2716713380056016);
    msg.setSource(25169U);
    msg.setSourceEntity(133U);
    msg.setDestination(30987U);
    msg.setDestinationEntity(101U);
    msg.enable = 97U;
    msg.mask = 3433886602U;
    msg.scope_ref = 926057735U;

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
    msg.setTimeStamp(0.9511292236349361);
    msg.setSource(29892U);
    msg.setSourceEntity(145U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(137U);
    msg.enable = 39U;
    msg.mask = 1384196367U;
    msg.scope_ref = 1613573937U;

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
    msg.setTimeStamp(0.7751085470389982);
    msg.setSource(22974U);
    msg.setSourceEntity(240U);
    msg.setDestination(15238U);
    msg.setDestinationEntity(95U);
    msg.enable = 23U;
    msg.mask = 921270385U;
    msg.scope_ref = 2752881668U;

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
    msg.setTimeStamp(0.23764037651324688);
    msg.setSource(47255U);
    msg.setSourceEntity(40U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(179U);
    msg.medium = 244U;

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
    msg.setTimeStamp(0.31460231617579126);
    msg.setSource(29762U);
    msg.setSourceEntity(52U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(130U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.663905212614379);
    msg.setSource(23854U);
    msg.setSourceEntity(128U);
    msg.setDestination(64645U);
    msg.setDestinationEntity(126U);
    msg.medium = 161U;

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
    msg.setTimeStamp(0.5530574072994815);
    msg.setSource(21783U);
    msg.setSourceEntity(62U);
    msg.setDestination(30512U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8694949636341044;
    msg.type = 188U;

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
    msg.setTimeStamp(0.354974638972709);
    msg.setSource(4016U);
    msg.setSourceEntity(57U);
    msg.setDestination(7785U);
    msg.setDestinationEntity(109U);
    msg.value = 0.2735790053405577;
    msg.type = 188U;

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
    msg.setTimeStamp(0.8228016242343721);
    msg.setSource(24876U);
    msg.setSourceEntity(233U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(102U);
    msg.value = 0.04132663457989216;
    msg.type = 249U;

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
    msg.setTimeStamp(0.4781991182096422);
    msg.setSource(56223U);
    msg.setSourceEntity(191U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(168U);
    msg.possimerr = 0.5068481878163829;
    msg.converg = 0.059620012383323484;
    msg.turbulence = 0.7824964762436064;
    msg.possimmon = 180U;
    msg.commmon = 118U;
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
    msg.setTimeStamp(0.4176217699148218);
    msg.setSource(60503U);
    msg.setSourceEntity(1U);
    msg.setDestination(21506U);
    msg.setDestinationEntity(62U);
    msg.possimerr = 0.06015786427535175;
    msg.converg = 0.9982746467939374;
    msg.turbulence = 0.031236843481655563;
    msg.possimmon = 178U;
    msg.commmon = 134U;
    msg.convergmon = 165U;

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
    msg.setTimeStamp(0.19018070669609366);
    msg.setSource(33231U);
    msg.setSourceEntity(28U);
    msg.setDestination(42492U);
    msg.setDestinationEntity(187U);
    msg.possimerr = 0.8570261850322368;
    msg.converg = 0.6599092801825349;
    msg.turbulence = 0.760368824057394;
    msg.possimmon = 138U;
    msg.commmon = 19U;
    msg.convergmon = 115U;

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
    msg.setTimeStamp(0.8938633934248101);
    msg.setSource(12044U);
    msg.setSourceEntity(170U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(206U);
    msg.autonomy = 217U;
    msg.mode.assign("ZOQXGDDUXTDOQTSSNSGCFJJPBNDWEKDXHCDXCEY");

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
    msg.setTimeStamp(0.863119377408145);
    msg.setSource(50735U);
    msg.setSourceEntity(196U);
    msg.setDestination(57059U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 18U;
    msg.mode.assign("MJBKCZFCMIYAGXDSHLDNKQRZIQCRANDHLJITUAAUJQOWWFGODPEMONTPRUQRHHWUGTGVCRXJYRSBWQBBSVRKFOPVTUJYCVIEHPFSTVSLCDTCHEPREKVHDZXNWNETPFVZOXEWLPNMIEDYZSPLLSXFLRMAYUGABDZOCUIEHOVIYOWXTQBXBRQEDCKEGZYPZDAPNXFHMAWULVMGYBB");

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
    msg.setTimeStamp(0.7310657791796256);
    msg.setSource(29833U);
    msg.setSourceEntity(0U);
    msg.setDestination(4355U);
    msg.setDestinationEntity(63U);
    msg.autonomy = 207U;
    msg.mode.assign("GHAPKJIJESWYMOCMYWSZWQPSRBRGYFXOUBKAAWLVTVYAQDBLMGFQSPOJQETCCXUJEQDNKL");

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
    msg.setTimeStamp(0.8240246791228931);
    msg.setSource(28593U);
    msg.setSourceEntity(191U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(191U);
    msg.type = 62U;
    msg.op = 90U;
    msg.possimerr = 0.36499587895865404;
    msg.converg = 0.009746891014412062;
    msg.turbulence = 0.34998178329676755;
    msg.possimmon = 180U;
    msg.commmon = 133U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.3854964543464463);
    msg.setSource(38149U);
    msg.setSourceEntity(14U);
    msg.setDestination(26175U);
    msg.setDestinationEntity(107U);
    msg.type = 175U;
    msg.op = 133U;
    msg.possimerr = 0.6699193587822743;
    msg.converg = 0.23679934366568023;
    msg.turbulence = 0.25828269041051954;
    msg.possimmon = 41U;
    msg.commmon = 149U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.9311776746750474);
    msg.setSource(41989U);
    msg.setSourceEntity(149U);
    msg.setDestination(52698U);
    msg.setDestinationEntity(7U);
    msg.type = 98U;
    msg.op = 136U;
    msg.possimerr = 0.8044976797342687;
    msg.converg = 0.023017315789958914;
    msg.turbulence = 0.813655963965035;
    msg.possimmon = 47U;
    msg.commmon = 123U;
    msg.convergmon = 98U;

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
    msg.setTimeStamp(0.669889194298172);
    msg.setSource(62369U);
    msg.setSourceEntity(163U);
    msg.setDestination(8289U);
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
    msg.setTimeStamp(0.7267246120524405);
    msg.setSource(40665U);
    msg.setSourceEntity(247U);
    msg.setDestination(64643U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.9101157554777313);
    msg.setSource(52603U);
    msg.setSourceEntity(219U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.9187280818561594);
    msg.setSource(38365U);
    msg.setSourceEntity(163U);
    msg.setDestination(54993U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("JFZPGEVOYGBXPCBGGIUHCDDNDVVVXWQLMQVHXPLTUOOPLLXRVUZVQWNYNENAAXPSVENHLQKMDWQFZTAIKGIAYBXBJNO");
    msg.description.assign("CHAMSQNQWAOKBKAJDVFGLDGCBDRRGWDNUXZFYOBITCLZIAGEZNXMPIHDGBQOIFIIGHONEPRHTPU");
    msg.vnamespace.assign("DSGJNUAXGBGTSKMGEISSIGWWYLJYBWJRXOJIFBPWRZQUZLBLSMROAMOHUWIVCLUCMCWFGBAYOPLUEJJLFWULSIDDPODAMKLXUZOTZPGWYJUQNNTKDFSTXQDRTPYEKYZ");
    msg.start_man_id.assign("JGWFBRXTMPXMADPMPYSLIIQWDGZTXOFNV");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("IKGWECVHESUHAPUJXEUMQMEHFFDFTTKNOOCQJXKNGKSKAMUJQWWZDBZRGBCYXDPRMQFFRPPDSDJBENUAQGLPCONVFMXGZOMBNCSVOLQBTKGTRAPKDFNQZUIYBXSAJBZILYRIQNYPXOBQLNLDVAURFDHZXXTTURYLEYLGWIUISPCMOWHSTDZVBIXIEEUHCRNWKNQCSHTSJEHSZVCVHFLWTWFOIJYKJTIJDJLZRAAGZAWRYVHKYOY");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("AVWKVZJTLDXMXPCJPURNYXKHBJVCQHIWEBTAZVVQMWGRPR");
    tmp_tmp_msg_0_0.formation_name.assign("WKCLOYWWSFPDTMIDQGMRPORKPXQGVSSWSHTMYNDAXIAZGRDHYERNFIEXYFNOBGPFURLXHZFSDEHMZLAKWAXQHCUBKGMQPAUMCWJZEBXXYXALEDCVEFJALWONPTRDLZVUUKKPOQUITBKWHFHMDPSGOGEHOOUQNITFLBZTJTCBUYOUGVSBTJVIHYVBVKPRNENQGJQCFDULQIXTWR");
    tmp_tmp_msg_0_0.plan_id.assign("ITNJGMOJHWDMBBEIUJSZYQQQGTBHXOKSLYQBSHGMAZSMBUQVUIDYDZCEKPZLMQJ");
    tmp_tmp_msg_0_0.description.assign("MBOKMYEULEUAUVSRUWLTCDDXHHRTVTERCTLCKKRXRGQQSUBSIIGLYKIZZPLTKSYMXXAMXPPJTBCQSPNEBFWHBOPQIMJSGYFHHRCZYWDQDWCSATFFGILZYQWFWPAJKUEJOHUBDIOJZYQWIFENXTPDJRCHGJSMVINCDNVBGHRVJVWDCGVOPKZLQFCNLAUMAQNQRODLIXKWLKTFPOFAV");
    tmp_tmp_msg_0_0.leader_speed = 0.3174516813517795;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.744150014688407;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.057038396895135124;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.12617816674146298;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 748U;
    tmp_tmp_msg_0_0.converg_max = 0.7869724815210097;
    tmp_tmp_msg_0_0.converg_timeout = 61562U;
    tmp_tmp_msg_0_0.comms_timeout = 60350U;
    tmp_tmp_msg_0_0.turb_lim = 0.05105542376302219;
    tmp_tmp_msg_0_0.custom.assign("AUIMIDSNXMKJPJONTYAXATLKLPZERCPIVXZTLFIBNDZLRSJUVKOHQMSSGTDPTSAUWCTBWRHRURIBHHAAHOCZGNHVCNRFEOEZXYFUVDABWGASZMQJFOCXMPZIFVAYMDXPBEQFKMBNXWDFWZMIVDBGRHGKZKQPNEJCWFOXPLSUDLLQVQEUGCJIREYOGEUSWRLWCPCVWPBGJDHMLEQSQJBXCTXUHKVMRDOSWQYNNYFGGKYZY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PWM tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 24U;
    tmp_tmp_msg_0_1.period = 4283144142U;
    tmp_tmp_msg_0_1.duty_cycle = 1122225841U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::FormState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.possimerr = 0.7315481851296263;
    tmp_tmp_msg_0_2.converg = 0.3916878665975174;
    tmp_tmp_msg_0_2.turbulence = 0.49594845525393605;
    tmp_tmp_msg_0_2.possimmon = 223U;
    tmp_tmp_msg_0_2.commmon = 12U;
    tmp_tmp_msg_0_2.convergmon = 246U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("MLIRJEGQNLTKRHTJHQQZEGYJQU");
    tmp_msg_1.dest_man.assign("SLKIHXXYQFVLMVFHNTGLAPDKVBAKYNMDPSRSCWKPGRPKLJBHONTZNGCTROFYTSJNETVWZBJJZESQUOUOIOAHJPTNBCXDAYMGVFSOICIDBXMUWWUQEXQXZIVSAZXZXGHVQPMQKFBCUSAILQUPLO");
    tmp_msg_1.conditions.assign("CDJBCRNHKDQPZZSQCERDJMEDWJYDNKYZSXUYCGWNEODHVTORQLRJTFWAOBGIGWVRRNXXZVKPVOWEFNHWFNHBMJZNMWZGIURGBWUZZKEUUBTQHAQHLXTLUVOHY");
    IMC::GpsNavData tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.itow = 1381586871U;
    tmp_tmp_msg_1_0.lat = 0.5383918235607718;
    tmp_tmp_msg_1_0.lon = 0.9286187179374982;
    tmp_tmp_msg_1_0.height_ell = 0.13103408006855966;
    tmp_tmp_msg_1_0.height_sea = 0.03869273748004565;
    tmp_tmp_msg_1_0.hacc = 0.698382057028613;
    tmp_tmp_msg_1_0.vacc = 0.7484727523282183;
    tmp_tmp_msg_1_0.vel_n = 0.06983191541100953;
    tmp_tmp_msg_1_0.vel_e = 0.7292284056988553;
    tmp_tmp_msg_1_0.vel_d = 0.4130896495040006;
    tmp_tmp_msg_1_0.speed = 0.8739081333245661;
    tmp_tmp_msg_1_0.gspeed = 0.9340687279715488;
    tmp_tmp_msg_1_0.heading = 0.8185230806036254;
    tmp_tmp_msg_1_0.sacc = 0.7794300663649004;
    tmp_tmp_msg_1_0.cacc = 0.5555953854799852;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6253843142741243);
    msg.setSource(1410U);
    msg.setSourceEntity(72U);
    msg.setDestination(3417U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("RBFQFSJAUOUVBFEWWZXDWZJEBDZGMEOSIADTNXJILMDNBISLXPKDRRAPJZYOZTOPQKWCBYWJCHAPKUFYBURIAIBYLQNDALUPTMOFIHUTLWGXEDFVQZCRCQOXENITLVXEVRKFRDYWCSITMSKQOKLVORMVTAZNGBAQUGGIDFERBQJHBOPKHHSAGAJPLOQVQXYKMUYCVCSRNNHCHTHGSPHCPNZLEXEVZ");
    msg.description.assign("ZZLPTQHFPXMMIQJUVIHGCHBFTMGDNQWHHMVFHKYRKFVDWIQEOLGZZFUXFUCASRCLEJNRQQT");
    msg.vnamespace.assign("TSOQXOQGMGJLXVJBTRRBEUZBTGJICYEXEYUHIVQDLQIDNGLOPAHWCZQMBMEGITBERRFKWMNUJXQKHJGVOVCBHHGKKZCOPOOXASWFIADCILAWJDSDVPZDUUIUWNCICPBHWNHZKSRYFMZLKYUXQSAXYASFC");
    msg.start_man_id.assign("HUVCZQEUSHFLBYPPKAYYEKWOFRNLSJUBSDSZVUQTFTEPPCIZTROTLMGBJARJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FFYUFKCXPQGWFQICUEQXOEVENRCRXOVOXHSZIGQTPUXBEZSNKISVIOJYTTSXKGVZJIHAOMVJSYXG");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4584828832577764;
    tmp_tmp_msg_0_0.lon = 0.11170352004506112;
    tmp_tmp_msg_0_0.z = 0.1964962345498571;
    tmp_tmp_msg_0_0.z_units = 127U;
    tmp_tmp_msg_0_0.speed = 0.4265276787123049;
    tmp_tmp_msg_0_0.speed_units = 62U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 24588U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.19159277280927833;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.3494595552315165;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.9504525918158282;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.7632217845541207;
    tmp_tmp_msg_0_0.custom.assign("GKWLIQDOELSPGMPSAGEVCNXUZYBZNDZFGSIHPMQRUBNBUYMVMDOCGXLXENWNDKVRPKWSKRAQJSIKTADEXMFSSIZBOXAGJJAZTKQXQZBCRBKCFAYRUTAIRCWZBFMLQKOWHYDOMJMGXRCUTHETNFCWPKJVEYPWEQCHXXIWHJEPVYVJTMBSLQWNDNWLFYRAVAYILIVPIDHSIOTUSRJCMOFOJLGZQUVBEN");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NFJZZPGTTKELYQS");
    tmp_msg_1.dest_man.assign("TSDJMZDBBZWYLBKASSXUYDPRGEHWVZXVGVSVRNBGEIZPFXSEXBIHIZWACAKOGIHEUHHFVTNTJLYIMWXMQMLRKCXHXTVNDWYPPUERFMOMDBMGCQFFZJVSJBSYYFZBJENFKGUOOJGOLQFXYPWANCUTNXUTXTNIUB");
    tmp_msg_1.conditions.assign("QMBYELJCUNYBWEKLXIRHRX");
    IMC::QueryLedBrightness tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("KEQNLTQTIPYPVLPMMVVQXUVZCSGRVBWCCJLGOBDMRURGCFUJXDTEWLOKSYEGKFLNKOCWEWXGEYEWNA");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::CreateSession tmp_msg_2;
    tmp_msg_2.timeout = 2774836566U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VehicleCommand tmp_msg_3;
    tmp_msg_3.type = 193U;
    tmp_msg_3.request_id = 32564U;
    tmp_msg_3.command = 106U;
    IMC::CompassCalibration tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.timeout = 44524U;
    tmp_tmp_msg_3_0.lat = 0.8345469821645447;
    tmp_tmp_msg_3_0.lon = 0.7850714530337894;
    tmp_tmp_msg_3_0.z = 0.5888130558961384;
    tmp_tmp_msg_3_0.z_units = 204U;
    tmp_tmp_msg_3_0.pitch = 0.22496115296261698;
    tmp_tmp_msg_3_0.amplitude = 0.9933405217057799;
    tmp_tmp_msg_3_0.duration = 50702U;
    tmp_tmp_msg_3_0.speed = 0.4257223290379686;
    tmp_tmp_msg_3_0.speed_units = 33U;
    tmp_tmp_msg_3_0.radius = 0.11593105689501515;
    tmp_tmp_msg_3_0.direction = 125U;
    tmp_tmp_msg_3_0.custom.assign("HUMXYNVVWFALXSDXPICFLBPZYYKBMKWMQESLRSLVLHNYWKGNIQTTGWSGDWOJODBPZCPWNQLXKYTGNAOCEFDIJAFGUNOMNMJSVRWFQCQRNWKLIAZCOHBKGDKVAETULETBXFJROHCUUIWQTOOUUYIUSP");
    tmp_msg_3.maneuver.set(tmp_tmp_msg_3_0);
    tmp_msg_3.calib_time = 23556U;
    tmp_msg_3.info.assign("QNNBFIXVRVETMFSKIJCJVSMGEFMWLRLFOOZBWIWXVKRA");
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
    msg.setTimeStamp(0.3875247846592721);
    msg.setSource(40566U);
    msg.setSourceEntity(173U);
    msg.setDestination(22419U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("DRVZHCKVCORWZVLZDJIUJZHOYZCTWCPGUGJNKIZJWZVHNBZZHANBBXPQTIOTHQGDESNEBXUKOSDIMXWPLQSBBIITJLYPVOETRAGCLUKCVONHDNEXARQUYFKXGSURGSQGLJKSGJEGMLUOFHFBFODYCDCWPAEPFFDIMHEHPOLFMBKNSRPDXMTTXWMQYFTSBJQIOBQENWVKEXKAKMZTXMYENNWUYMVJRJUAIQDTWPWFAYSLMAPUVRHCA");
    msg.description.assign("ZAQIOHJVIBUJULTURSYXQKNQRHVZGQFJFGAMOCFXLNSBAUIVUGEBPFWGLLUAMJXTXJEIOEMTAZCOVYTZRNPLJGAXTNJAYWMQINNROEKXF");
    msg.vnamespace.assign("MNZAIQHPFRWZBLATSJYBUARINMQDXAAEUKHJLGLUHMOWRELVTVWJFAHTXEEIPCWFSGJKXOTCTXOBIBPMLJDBKZGEOYZPBFVHDFVFPRXOGYNPQXJWLUMNRMGTLJDCFMBECJONISOTLYNYPVHHQIOVMRCZRTDDQFVKXVAWSKLXCDMDGKUCBSSIVQQSQCOWQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EHOZWBMNDMQNTCJYMVHJLUDWYGYDKXXTIACLKEKTIPKYHDYWSTZJBKYUDKMOAHKHNBEOVOVEZHNSNCAGRMKPCULFELTSRPJARGAKVVVVINESLCYQMFUJRQGADQRFXMQSQHBJZCWACDSPMXTHIZFNYQTWDLBTJOVQFZGIIFXAZQXLBZOFJFWOCPUEXPS");
    tmp_msg_0.value.assign("LPNHTOJEECEOZEHPMSXRDFAQCTLMLXMOKMANUPAPYBHIZWKHDMOYRHPDLVVMKTQNBWWTAMDSRQVFNASAGGNIYG");
    tmp_msg_0.type = 178U;
    tmp_msg_0.access = 134U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AIEWPARCJSBGDINLVMYDIRDKNJOLBPZZISGVPLQSKSCWPVAMXVLPSBCWFZ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YKFEFLRQQIIHDNOCHEWSJPCAFZBRNZMABXGILEFIYNEYXMRKWBSMBPYXQOEUOEVAVCBWNDJOACKSGVMNIPJSMTGJFFYJHZRQQQJWYULHUOWXR");
    tmp_msg_1.dest_man.assign("LVXBINLTVJTOLPVKTTFCKQWGHARWERBFRKXLSWMYXXUTBSPFNSUVWXSUHCEMUINBBMBELGITIAUJYVZMFNRNNQAQJEVAGPBZFRHRCGMUAHJ");
    tmp_msg_1.conditions.assign("HEQRPSGEDTCRYRFUGQEWZVJMKTONIHNSBIPHJGFOARTKZDSZHWQFHVRLYABMUTBWHZVNNRSZQUYRBWQLYTCLLYPSNCJEEVOKLZWQKIDBWCJFPMXMVIMOJUUGLJOGFZZAADMGQELDFLNPNDPUMBPUIXCXRYTBCBVDPUPMATACWXENKSHYKXZSKWYSVAKGQHILNQMRDAXJAHEDIDFERFPXUXBOCGOTSQYHVUBWJGSCVO");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3468097629404836);
    msg.setSource(4548U);
    msg.setSourceEntity(245U);
    msg.setDestination(51281U);
    msg.setDestinationEntity(208U);
    msg.maneuver_id.assign("HOKKNYJJRQWVSCCNBDSVXCBAHJMMZNZTLWVBTBGODYJAAZSOXLKVQYNZAVILFMHUOSXFUWDCPXGUPRKMXMUBITFSHMAVKEIFTHQLEUUZJRTGNCTEFEPQUPGXTRDJQGDKRRBADSXICVYAZNCHQMIEOLNPDMHJFLWZDCFYGXAWGZIDNBEKASPGEJYQTSFVYIYMDPFENBQLBVLQHNHPTIZUOSRBEEOQHJCWIZLOCUYIWRFWVGW");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 17719U;
    tmp_msg_0.lat = 0.7113161458689471;
    tmp_msg_0.lon = 0.018013262590759527;
    tmp_msg_0.z = 0.5225937250755661;
    tmp_msg_0.z_units = 183U;
    tmp_msg_0.speed = 0.9435029251991255;
    tmp_msg_0.speed_units = 198U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.20412635765279863;
    tmp_tmp_msg_0_0.y = 0.6235787920750733;
    tmp_tmp_msg_0_0.z = 0.10974678604761179;
    tmp_tmp_msg_0_0.t = 0.4041867709586131;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OUHDFRZUKBBILDKUSKIMZSCYVXEMITHUVRAYGAWDHUUHCSMIMGAORLZKFWMQEXGKDCAYZCJEYPEZXOOOJEMYVHXWULJXPOU");
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.07929584300747539;
    tmp_msg_1.x = 0.35812239329431217;
    tmp_msg_1.y = 0.6411149887420114;
    tmp_msg_1.z = 0.5552048695506837;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PowerChannelControl tmp_msg_2;
    tmp_msg_2.name.assign("OPCJHVYBOMVNRQVEKKTQEZBDHBFVTQAICGDMNNUGKCPRJZXDAGUPONOSEYQLLMHEQVPKJUNDJWYBHTVVTJTNZHORVCTLDKWZLSLWVJRJFXHSRCWYIFQLKUDPSAFUMTUHAEBAGIWPNYWQGQZEDCQXRSBAIUXFYMJMBUGTOYCWPQZYMXFNIGCLXCIYLPXEKKENDICIWAIMUOXBHVYFSFLGJEDRMASOGPOEHSKRIFS");
    tmp_msg_2.op = 189U;
    tmp_msg_2.sched_time = 0.6125906991952362;
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
    msg.setTimeStamp(0.7147929382405954);
    msg.setSource(62755U);
    msg.setSourceEntity(93U);
    msg.setDestination(13956U);
    msg.setDestinationEntity(155U);
    msg.maneuver_id.assign("OLEMNDFVRFQGICBLLODKEWJAKMECTSLYYRFYPTXPUKRHQQYEJBMPOSXBAWVCBVSLTSAXVSKVNMEJHIZBXJUBIXPQDZWXSYJVGEMJOWFNSZEFRLKUGWIWIRHYJTNQIXZGHCMZQCHDGZBDXIOOAYKWHXBDUSASFCJELULTDOOHOUKQGZUZPWVPADVDTIKYTFGRKNEFAHOMUFPCTPNRVNACEKZ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.2854080412499177;
    tmp_msg_0.lon = 0.7937819658428622;
    tmp_msg_0.z = 0.4181999098763355;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.radius = 0.43581653970595713;
    tmp_msg_0.duration = 50945U;
    tmp_msg_0.speed = 0.282217540525593;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.custom.assign("BCCPKPGSYPYJIYJHGZMLTLBFEDJLSZVFFBCXQVKATZPJXFLIKYWPPZNJOVYMBMRZIUCLZKFINLRGGMUVXWUFQICYEHSOAXAINNWRCTIRUEZAAXSUZMHKGOGRMGBTANTMYBIRQNSQVERAWWEOOUVSOFEDGKBSPQALRQONFLCUYXUYKZMXPHTHTNHDDDODTKWHQSOFLDJLIQUMKKWGBU");
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
    msg.setTimeStamp(0.21240925864505134);
    msg.setSource(7596U);
    msg.setSourceEntity(158U);
    msg.setDestination(11148U);
    msg.setDestinationEntity(37U);
    msg.maneuver_id.assign("HSXDWEPLFHUWBUGPCWBCEMOCAVGCNITJJHOZPHADNHKMNOYIVAPUNSQXKDSJPXNUKZQOXSXRMUXDWYTRXYCJEJGNQPSZEGCKULGRDZVQLIOXSTJAPDVOBTRCKJPNDMVBZBMQIUFTBGOTKLBIALCHCEYMORCMEVZODIQLTBIIGULYKFTAYYZOPVVSWFWXYFFRSNNLXBPAAQG");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 7723U;
    tmp_msg_0.lat = 0.09786733484354271;
    tmp_msg_0.lon = 0.7373656658258765;
    tmp_msg_0.z = 0.2432933862038914;
    tmp_msg_0.z_units = 145U;
    tmp_msg_0.speed = 0.2108736665372174;
    tmp_msg_0.speed_units = 182U;
    tmp_msg_0.bearing = 0.5780121137185297;
    tmp_msg_0.cross_angle = 0.8645468427698065;
    tmp_msg_0.width = 0.18392189191919506;
    tmp_msg_0.length = 0.6301974470700265;
    tmp_msg_0.hstep = 0.24747886590989687;
    tmp_msg_0.coff = 195U;
    tmp_msg_0.alternation = 155U;
    tmp_msg_0.flags = 117U;
    tmp_msg_0.custom.assign("KBLNHXXOPXZITSNDYGUTJU");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityInfo tmp_msg_1;
    tmp_msg_1.id = 222U;
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
    msg.setTimeStamp(0.4802015862374196);
    msg.setSource(54543U);
    msg.setSourceEntity(144U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(191U);
    msg.source_man.assign("FTBKUHKFQPMSIVKIAOVHISTDIXKPTPJOYQJZINNAYQGDUHVFZGLTEZRCBKGMGMVYDQVTM");
    msg.dest_man.assign("UWOOXJDZTOKOTIEZFVGLRNAOLCDLMCLROJHXPFCBNFGVHEMFJDRIKGRSBJMXZEQCTKTBDVVWGTX");
    msg.conditions.assign("QLHLDTMXPRWDPCJJYVHMILLBPUFURQWICTWUIRXQYSKO");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("PLGDJVHLBRLTAMFPGNICEOCTYUWESXHEJDQUERVXYREMPNSKKCFWICKSOEMZOJVWJSVBZQKBBBMQRXOIGAFARGECTZQESJYKZOXNUXSYSOQTAFJTTDKS");
    tmp_msg_0.type = 211U;
    tmp_msg_0.op = 61U;
    tmp_msg_0.group_name.assign("OUMKCAHRMDCVFPEEDFIOOHWIWWMGABTPCCXZBNEGOMAEDSNHVYGEDKTASWUKPLKAZXRTSZUWIRLVMQDITBURBVBWPNATKRMMJQUPTYJHRBLCAMYPJKUBFCFWXGQWLWONUBXJVNJMFSZJIRCAZVSKGAHXQKPCQEUDNHYFDOYFZNTTIVBEGXGGZPSJFYBQLUTALJID");
    tmp_msg_0.plan_id.assign("RFQCNRSVNXJEENSCNKJVWGZZHUFKKUQXFUFJCDCBYVHYYWHCSWKHXWTPAFSGIMPMPYTTBLVRATAMBGLSWILZZLDXQLBOAKHMGEEAPGOJTNZOMPIUSAUGGXXLQIDBEEAUERZFVEMWMC");
    tmp_msg_0.description.assign("SNRIVWQKHUELXXBFLBOITMZKKQJOMGUSBXTUWWKLDYUEAEDCVNZPPZUYIOEBFXTMDPOSDYQOGHTLAMAGVFNRSUZGLSYFCANPGERJNAYIGAWBBPJAIDHOJHYRENZFQDHJRLMDKFCXOYTYVQVWVDONPUETKXAWRVWBXNVILIDGHWJKJRQMECMZWXFEYMPZHCRKBCXPLIBVRDKSYKGLHPZSQFFCGOUJSZPTNQLNCTTUSHJMCQEFIMWUQOTHZ");
    tmp_msg_0.reference_frame = 193U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 38961U;
    tmp_tmp_msg_0_0.off_x = 0.1895963156825784;
    tmp_tmp_msg_0_0.off_y = 0.6847475894739188;
    tmp_tmp_msg_0_0.off_z = 0.458687495987126;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.26540814358132014;
    tmp_msg_0.leader_speed_min = 0.33982793519475196;
    tmp_msg_0.leader_speed_max = 0.7042716172863152;
    tmp_msg_0.leader_alt_min = 0.16644775871420914;
    tmp_msg_0.leader_alt_max = 0.9044260695823746;
    tmp_msg_0.pos_sim_err_lim = 0.7097503440896189;
    tmp_msg_0.pos_sim_err_wrn = 0.6157594649619633;
    tmp_msg_0.pos_sim_err_timeout = 5763U;
    tmp_msg_0.converg_max = 0.5059953306930163;
    tmp_msg_0.converg_timeout = 16055U;
    tmp_msg_0.comms_timeout = 56466U;
    tmp_msg_0.turb_lim = 0.24049814095267963;
    tmp_msg_0.custom.assign("FEXHTMUKWGAIDROMBOJPZGGXLFPMLZPMZOYZWLWJNCANHKPEZYQNGQEJGFUQZDKXUYDBWAKFOBXKSTCDRSQQRYZJLIJTGOELUBTVHRDUQWFRQCRTAINXXPFHSNAQKHTRGWZBWHYKPXESBEQOVFVTWZMMHPSJCBLFDOHNUFVWDWCYENDUMCIXCXUFCYPGIPGYASLPEOLSDKSNUDGCANRHYRIRZASEI");
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
    msg.setTimeStamp(0.7864798470368434);
    msg.setSource(45217U);
    msg.setSourceEntity(240U);
    msg.setDestination(21522U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("KGYFDKEYQSXQHWJQOGMCORDPMDZYYTCCAYWVKFXSEHGENRLTFPRELLHWZDVPOIXLSXTIUWODNVVGJCRQQJYJQWDESQAORLZETABAKTSNGPJAOQWBLNX");
    msg.dest_man.assign("YRRWAZJQOWEUGEIHMMOOGMQRPGPGNWWKDYJTRNYFDBTDNNRWDXSZKYINLTDGGNPVESHSGIHUVEIXPLAOXJJJCKVSPMKSDBDHKBAZCILLQNYFRZSCYCBTSTZJKPFUVBYZWW");
    msg.conditions.assign("CESOHBAXEGWTADYKDHENWKRHQP");

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
    msg.setTimeStamp(0.4766490713192397);
    msg.setSource(3079U);
    msg.setSourceEntity(34U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(138U);
    msg.source_man.assign("MFFQXLDUQHTJTFRJKLOSDWTRGOSLOHAWMPBFXTQVGATVFGXBQNZQPCEBAPBMVZNDVYWXGIQQVRIPGKJUKIVCELUAMPLDRAZIINBRYIYYMNWKCOJJIRCPYNTXW");
    msg.dest_man.assign("GLASDZBHIDWIZMQXAEUGNBWAMVZAUNJZXFXHRTJARILSGGKVUEFXDSRKOHJQPQUWXIOLXKTNBZZUWHWLIPEUVJMNHCGHFBEYEDLTVIMXQTJRKLOSFMCAYDQYDDIQPQFXROPVOFOQKORGDHTUINLCYNDJFCMYLTTYVEGOYJLQBCZEKNJPWCUSYHXHKTPWBAVGTVWRGSEPIAZU");
    msg.conditions.assign("UVEUSFYJVERIXGIMKUYOBIVBUGVQFIEUZTTMYZDCKQAYJXWLIJQRAXKTFRPDWQPBZFPYPGAQHERXWZKMCLONNCUBOJDAQTSKMWRKMXTGJTSFRPASLUNUNOXXHEENPUECWYGSZIIYDTPQK");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 111U;
    tmp_msg_0.name.assign("KSKVTCUTIFHXCMYJOBUUPTUVOQIKHXWQZHXXJYLWCVBWGRJDDQOJVJPITGZTFMDNFUAFUXIHPXRTBWLGWYYVJCSNLTXAIEWPGYTNABPMMBVAGWRQELZQSEZBSVSSZAENGESHHDROMLMIPCPYRHQOBRKVGSFRYLGZGKKAOJIPKCUURNXCNPFQBJOADAKTJFZMQRRIAFHWHEUNDJNQNNUKPO");
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
    msg.setTimeStamp(0.6435848297861447);
    msg.setSource(35528U);
    msg.setSourceEntity(112U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(131U);
    msg.command = 7U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NOGOTXWBIPKLCERZTXSKSGCIBHBUJMOUMURJTWVTHBWHXTXPQZASUNMEZDDMYVQLXFSPKMBSGXINMHOPKSEFTQQCYFDKIEULPETNVCRNWWVGXQGFGNPZFAJAAAPLKSBUVGLDPMYMJTGUBEWYZVPCUZDUAWERYRPDGNJQQRHYRFFWJYVKCTMRLQYKKOXCDCXWVOTRHJFDHZKICYYXIRAHBHUDQOJFDJZLWIQOANSMEOSA");
    tmp_msg_0.description.assign("BNBDVGZSRKRSQNCBGRIEBAQWPSVAJYFNTYUCFBQTBTSRZAJHTJDWKEKPAVKOCIJCYKOZUYNVJYEHNYGIYKEXIJFHMFRMEPLNLHARVRPWFWWSQPSCGVVJRLXINXMEODM");
    tmp_msg_0.vnamespace.assign("CJFCTGGYMMXDYZLAPIUVKBNWJVGOIBEPIBDWPKUGZHDZNKUFZAEGTNPAJZYQLXUYJSVANSIYLUCYAQBIHCEETOFIXPGYQIKLHTCJSSVFQAIQWLRJPMYZTKWLUPVFZZMUECEXOEQDZSOFHYIRNHKXDOBNZFUBNERWFNVORATJSTGKMCDDRAKHJWXEFMXKJDHHARGC");
    tmp_msg_0.start_man_id.assign("SRKIACPIKETWGGTJTPREKYDHEANNOSCFCLNPKBFTLDVUNDSHMIKQZOJYMHYZAWJKXLWMEABFWLFSIRGGHUWRCJKHNBUCUYFNDNVOMYPMIJSXQCVVXENHVBBJEWJEUQJAPPGBEPBXZTZKLUZMFCDFOQAUSZLQPVYDQWGSFTXGQJRQL");
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
    msg.setTimeStamp(0.4386698972730816);
    msg.setSource(24006U);
    msg.setSourceEntity(152U);
    msg.setDestination(34660U);
    msg.setDestinationEntity(27U);
    msg.command = 209U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KFOUSQKZSFRZPNXBIFMHIFXGBDJRELBTDJTSWEUHQXPKXXLTOETONDDRJIYSVEIHMJDCAEWWFNPYHWUGASRVPUJZQGRCMNZICVRLSYHYOBWIRSSKEMYOPNAWALEKUZWICVHIXQOLXZLTCZKMNQQBCGVKOOMUAPNQEBLIFPDTJETAZYGHVYT");
    tmp_msg_0.description.assign("EHFGBQXCTKHGFTOILKKEYPYLJCTQEOJHVNGWFGQIFVKZEZQYAMIQRWTLAZYOKVJOJWXDOXAFCLEWVSXGQFBUOWHPLGTRPAGTAIIUYDQRRPMICJZWDVEQVFKAVZDTMNLVSYOUOYUSUAKHXBSKMBMEJSMXDHELUXCHXFLZUCPBWDPDPXSWIBHYBTHNNZJCPUNCRAZAMRLJRJKPFNURBNQCSZQYPEVWCWRM");
    tmp_msg_0.vnamespace.assign("ZPEBJLWZGOUHYNHTBONFRLDQSGKCLVWIBKHAMEVDAFBSTEARICXQAGPYEZQWBYFICJKHQCMTQYCDBRIFOZOAPLIHSJMDUKZVEGOSMDIOYBNXFULNENANMLTNFZYVQFVDAXTPVYSJJZSOYOTRHXRYZKX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RQZNALFHBWYFZJSXLHUCHMEQNGXSYDWW");
    tmp_tmp_msg_0_0.value.assign("CQSKDWTCXHVHCYB");
    tmp_tmp_msg_0_0.type = 88U;
    tmp_tmp_msg_0_0.access = 232U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TRNIYSFMDPQWIVTTKMOMRNCLNKLULXLFIHVJDHTBEUCWBUJXFOQUSJXISWSJJQEKTCHIAQBKHBOAGUDJWGGDRHVMSY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RWXVFNZHLPAQBFMBLZMGLFHAIALYUSJLWIDQPTYSSVTIBDEVTXVRMECMCWMUXEBSKNPWGOEZPIYECOUREYNQOACQUWDJXVPZSDIONGCEVGWRCAPTYURZSIURAHJTXLJVPJMJYHUWIVDOGCQFFNAYXKGSBQUKPMSAGTXYCZWADKWKVFNYHCNRDBGIEBRHKMTONZKJOQKYNTFGAQLKJFLPXTBGSDEXEFSJ");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 52482U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.010153628196012288;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3132029475366578;
    tmp_tmp_tmp_msg_0_1_0.z = 0.3937000488749941;
    tmp_tmp_tmp_msg_0_1_0.z_units = 75U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6578485024905841;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 66U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TWTSYQRCATHYXGPMQXEAIVKMKPHOJPAMORJROXVVHPXDZELLLUHOOBTUMKGDVKCIWHPARZFJUGBFQCQEYBMHI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("STPFMOYWZCEIUQDGFQBDVASAAXPCXOSNIGLJZZRJRPEMPNVRTUYXYBYGHNLSKHLWHRJVKQAOIWCMGEUZEPI");
    tmp_tmp_msg_0_2.dest_man.assign("EUZOAUAYMFTMHNCHFUKRXBEJFOPEDCPQLIUXBHPETLYCZWPBQGNIVQOYFCQKNRSKCDJWCOCBIZUSRJKSNXFPMAGTYNPWFPDVTXK");
    tmp_tmp_msg_0_2.conditions.assign("UPPTEDDTKKJDKZIAYLQYZDAOSYKQSJRYYQRMZCBJYLVTLFEVEOWQSTXBNJFIHMVULXNRKVFDMWJSGORXQZWUINWXRWASMJNFBTRGIHIVKZRKCZUQWPRL");
    IMC::Reference tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.flags = 125U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.value = 0.5413330088980607;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.speed_units = 171U;
    tmp_tmp_tmp_msg_0_2_0.speed.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_2_0_1;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.value = 0.21686026619668708;
    tmp_tmp_tmp_tmp_msg_0_2_0_1.z_units = 129U;
    tmp_tmp_tmp_msg_0_2_0.z.set(tmp_tmp_tmp_tmp_msg_0_2_0_1);
    tmp_tmp_tmp_msg_0_2_0.lat = 0.13898584527798208;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.34416603275682955;
    tmp_tmp_tmp_msg_0_2_0.radius = 0.20108390832683076;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SetLedBrightness tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("YNZKCTZFEKUXHKZYBJDKDMZKDLTNPXVFQGVYASJFXWYHFKUEHQQEVELWHXEIDQGGJGITDEUGJBJZERKDSDHDUYBCLUOVSNOBJHALDQCJOTCWWMYPNIQMLLLOYPSBSZMPAZZBZRTTNMMQERPAPXRCPYAMXSSLVOEUJFKKRVFOCHGOSXHCYDCWWWXHJCWBLEFVVNGOIPMZWQSGBTRAUITXGIVRRFNCAOAIM");
    tmp_tmp_msg_0_3.value = 52U;
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
    msg.setTimeStamp(0.13755173646226182);
    msg.setSource(16713U);
    msg.setSourceEntity(3U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(110U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HOEELSUFMFGEXNXJCWQYKJNMAEIKOIGNSJNQEKMNWXLKVWDCQFDSGZRLRMEQRECYUXNRROQZSPMLPUSDKAYBYXCPTVZBPUGYFMLISJ");
    tmp_msg_0.description.assign("FSTFASFVEMTPATCFWSIHJDRKOKNMBTNHDBJBXCSJLXZIUZGWNUIDWMQQWGIZZDOFCKGLGEKQMNBECMARLYDUKSWJZDQFHPGAAJMTKOXTIHVYHBJLGTEZXRVRXSYGOMXNZZXRDPQUNVKNAVNXHQFPUERLVQSFUWFRICHUALGFEVDMPASYAXMHCWCITJYLIGJ");
    tmp_msg_0.vnamespace.assign("SIUKKASXJRDPGAKDXIBBFCMWJNEERFASOHWOTVDIYFHZFJXEZVGIWDEMVWNGJKGEONVRENHAHAOPVCXAIUDGJTYOIPFUPPEQDUCBSUPBYEALYVHRVEAIAWTZLMSRUDQTSOEPCUSQZQWJMBZJNHRUYGZUYSMDRQQZMBDCATIYYOKC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ROXEQYWTNHRDNFKDFUALXMZBFJJUGMSRSWZJSHYKVZKGJJOFPFFDNCRSMBBVVPRDSFYPDKNSHGOEUHMIINLPFRMWXVUUPJJCTEIKNKAHOBIAHVRQTMLBKDVFUBYYAEKZOZWXLQBLQONPRXECGDDGZYXAZBLVYQOPVSHJRWDFZOTWTRITLNGSKGMCWTQSENTCLTOEEIIYUCLIXCKUEXIDGHYXUVEGZWJJMSAAALAMWHTZPGPOBICANHMXW");
    tmp_tmp_msg_0_0.value.assign("RYLCHBPNNNPZQBWEBZBZEKTNXIMDRCVQOZUWSETCHROFDAPSBRLKJVTVBMPRGQMLUNCJFJEDGKYNXTQJUTRFLVGLSPQLXQNYR");
    tmp_tmp_msg_0_0.type = 177U;
    tmp_tmp_msg_0_0.access = 11U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EPRBEQUZTTOAOSVKCBRKEHSRJDQCKSGBJXNYMXWTIPPNUBPMQZJCHLXNCDYESBFSVFFOCFWMCWVHUPJIGTMLSWSXLCUGJSOABANKUKWZXDZBXKOUIJZHDSRDAREWLJYLNIMDPFIZQYMRVTWDSR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FTPEJWTDBLSJKPWVONMITIGNAMNCRYUMAUCKIIYXGCOAICUQNXWLFOLTVPPBKLRRPASVJZUCVKXSBHYGGRXIVOIHRNKAMMQVHNRPJJCQCENHOUZMSDEWTZLBDOPUZXOQGRDCZPWVSFAGVCZMFSGKJRTKDPKUEFHIFMHSDYDYYEFBUHXJIKBWCUXSWFMTYQFWQOBZBENQFGELMYDQRPVQDZASTWQKLL");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LLEOCPTYMRKCGHROPWNIPEVBZZPQRVQJDCFVQYNSUMVHTVVKZAJFIUKIJDHBVOCRDWJWKYZRIWQNYTDKQVGHHYLMUJHEVHAJTRTGWSCFYIBOALXOMPZNENPL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PowerChannelControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("DZZHKYXHSZQEAGBKULVMYDLJCPSTHXRQKI");
    tmp_tmp_tmp_msg_0_1_1.op = 174U;
    tmp_tmp_tmp_msg_0_1_1.sched_time = 0.9289353837764621;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::WindSpeed tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.direction = 0.3032821113734552;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.7952816833224935;
    tmp_tmp_tmp_msg_0_1_2.turbulence = 0.8189121393827836;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ZEKUQLMBOKSIAPCHRPBGWVFNONNHLGJSLQYCTDEWBYHRTVUTBFGZXDFKWBUAZAJICNZXSRNFTNUEWRRFIUOMEQQWGWNTQORHXSUDSTOQCPBWFNIEDYDPXTGWWTUCBYJMKYPZVIYAVAWEYPAYTPJOXJSABXAKQVMGDMFLVBJZMIHDFDVGPLX");
    tmp_tmp_msg_0_2.dest_man.assign("HNNCSZKXNQXQHWDFJ");
    tmp_tmp_msg_0_2.conditions.assign("TBRNMQJISIIUZDNTVLEDQSCKABIBJZGUJPVRQODVIQGABZMGKSMXJKDINWFJXRRXSHTQENFFCWHSBXEFYMCGPAYURLSKDDLTVAOKNEDZQNTSJGXMFOBQYHIYYJEYBAPIEMCGAKKTIIOVZHFLOTVPSPMJHSVBYZLOHBXRCPORLQLWEEPDYQHYUKFZGCZCPNDRUPLXVAAULAXNSMHUAXUKWGB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::RelativeState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.s_id.assign("AODQMWYYNHPMZZCBUPI");
    tmp_tmp_msg_0_3.dist = 0.3666288945342929;
    tmp_tmp_msg_0_3.err = 0.5027754591879092;
    tmp_tmp_msg_0_3.ctrl_imp = 0.46127295340457897;
    tmp_tmp_msg_0_3.rel_dir_x = 0.9812808007455119;
    tmp_tmp_msg_0_3.rel_dir_y = 0.20446236597565504;
    tmp_tmp_msg_0_3.rel_dir_z = 0.18320755186129123;
    tmp_tmp_msg_0_3.err_x = 0.0029065243816749353;
    tmp_tmp_msg_0_3.err_y = 0.1532620224337673;
    tmp_tmp_msg_0_3.err_z = 0.3936417956416427;
    tmp_tmp_msg_0_3.rf_err_x = 0.946127165687763;
    tmp_tmp_msg_0_3.rf_err_y = 0.8683007885979971;
    tmp_tmp_msg_0_3.rf_err_z = 0.5644681386452047;
    tmp_tmp_msg_0_3.rf_err_vx = 0.15448271755037501;
    tmp_tmp_msg_0_3.rf_err_vy = 0.13767131772892882;
    tmp_tmp_msg_0_3.rf_err_vz = 0.22261776003206823;
    tmp_tmp_msg_0_3.ss_x = 0.42854494945424926;
    tmp_tmp_msg_0_3.ss_y = 0.18023195015776272;
    tmp_tmp_msg_0_3.ss_z = 0.5485600039503953;
    tmp_tmp_msg_0_3.virt_err_x = 0.7609646529093838;
    tmp_tmp_msg_0_3.virt_err_y = 0.5250549550292193;
    tmp_tmp_msg_0_3.virt_err_z = 0.07287653893025181;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.5098865495845107);
    msg.setSource(10413U);
    msg.setSourceEntity(145U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(67U);
    msg.state = 243U;
    msg.plan_id.assign("QXVRQKTMEGZRCJXQNWYHXPABFIONLIZKRBWMTTODTLPP");
    msg.comm_level = 106U;

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
    msg.setTimeStamp(0.5435312400215807);
    msg.setSource(50878U);
    msg.setSourceEntity(3U);
    msg.setDestination(62898U);
    msg.setDestinationEntity(69U);
    msg.state = 90U;
    msg.plan_id.assign("QZTUCELVQOGFWTPHVZMFUKYRBKPDVSWJQJNXRTDADTQNJRGPXYJEIMDMVFRVX");
    msg.comm_level = 143U;

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
    msg.setTimeStamp(0.7900925852210329);
    msg.setSource(29105U);
    msg.setSourceEntity(53U);
    msg.setDestination(35722U);
    msg.setDestinationEntity(172U);
    msg.state = 140U;
    msg.plan_id.assign("XHGOXBWVEKEFCZPDPOLJXQYZYTCOPJFLMDDFCLANRYZRIFQXMALXPGTQWMJBFBLKMGDHSCYFJREFUEQEFINOHJZPIVMLSIBIGDSVCVWJKVSZEYGVVIZEGYMDKAHNNTRSKGXTQAAZTUOTIUYCGQDMBUNLUZOYRFMBQMHWJHXNUTHXGUTTCWPKKHXOJHUXIEYDCPPCNKFEJRQSAAILBKWOOBHATWZDRSAPLPQNVCOSJNWB");
    msg.comm_level = 82U;

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
    msg.setTimeStamp(0.19724588913070795);
    msg.setSource(20145U);
    msg.setSourceEntity(124U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(19U);
    msg.type = 199U;
    msg.op = 219U;
    msg.request_id = 29104U;
    msg.plan_id.assign("CJOLGPDCEFCAAHGYXZNVKIEDQZPXRHWSEYSFPKPMJHCQIFELXVCABMLMGVIAIJKKTU");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AHCXATMEXKIDCVRRJRVRGSBVSPKAVGGLCVIYTGZASSOODBXHLTTIETQTUGFBRYBXWBKCRXPYBEFSQWKYYKPCKZZRXQLIQONJFPENNEOFUTWSGHJQOWHHOBPSAQWHZRQFDDJDJEJNCKOVLYIGAQLCWGOYUGXKBKYVFEPNCMBFJLGLMVXQFDZEJUMUINNUOWWLTAUSFIKVJIMHPNMNMAZPXPHVB");
    tmp_msg_0.dist = 0.04963195336830406;
    tmp_msg_0.err = 0.3418158540024895;
    tmp_msg_0.ctrl_imp = 0.5350381760875963;
    tmp_msg_0.rel_dir_x = 0.6997580056206801;
    tmp_msg_0.rel_dir_y = 0.24920917414771315;
    tmp_msg_0.rel_dir_z = 0.7488841403888401;
    tmp_msg_0.err_x = 0.8638274898706093;
    tmp_msg_0.err_y = 0.30679452800492624;
    tmp_msg_0.err_z = 0.46965391236317455;
    tmp_msg_0.rf_err_x = 0.4610406621962858;
    tmp_msg_0.rf_err_y = 0.6106481854030349;
    tmp_msg_0.rf_err_z = 0.15395574935045786;
    tmp_msg_0.rf_err_vx = 0.1582693458345228;
    tmp_msg_0.rf_err_vy = 0.1597764513423754;
    tmp_msg_0.rf_err_vz = 0.7633172466112446;
    tmp_msg_0.ss_x = 0.106765548351892;
    tmp_msg_0.ss_y = 0.36287385375453196;
    tmp_msg_0.ss_z = 0.3370680627442576;
    tmp_msg_0.virt_err_x = 0.5714783620645846;
    tmp_msg_0.virt_err_y = 0.6330349754103741;
    tmp_msg_0.virt_err_z = 0.07668318235611216;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NBRYUXUWLPXJJIOKEESONQMMGVOTJYRAADWTXQYCPTDUUEBHLBTMUDJXKSXJQIRFLXFRPBI");

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
    msg.setTimeStamp(0.09628055437848149);
    msg.setSource(62816U);
    msg.setSourceEntity(234U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(89U);
    msg.type = 1U;
    msg.op = 19U;
    msg.request_id = 64652U;
    msg.plan_id.assign("QQKTDVJWWUJSWPWGCVONCLSOHEZZSJIMTGZNSDGNJBQSLUTZAFCMFBBRKBHXWSQGHECKDXLGUAMIIHPOSEVRQIYPYIADXQZFXANSYLWORUISRJJZCAKYMXFTVDOJFMCQRYTFRJAMLWHEUZAPOCLIDEBROFTPPRPOJWTVRGCLGAEDEZBITZQYWNTUMDBGLE");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.2163456340406117;
    tmp_msg_0.y = 0.12239873999394912;
    tmp_msg_0.z = 0.13630120745614482;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GNBBYZRMWRWHSDUTYXZFEMNDLJWGJWPHPJNOZWTIZITPQIBDWPLJNJRDAUSYYCSGNNCROOFZMXQRIPYHSLWKKPFATNNCQXRDBVVLIVFVLEHOHQLPYEQTHEMLMHFEOBOVTUUCCIRFNZVWQYWGBRSFADUDSXFDPJKIAUYXFKNAOKCAZGRZXCJDUAWJESKMSTIGXUSELVMCBI");

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
    msg.setTimeStamp(0.696497838957869);
    msg.setSource(35361U);
    msg.setSourceEntity(211U);
    msg.setDestination(41403U);
    msg.setDestinationEntity(48U);
    msg.type = 179U;
    msg.op = 73U;
    msg.request_id = 22240U;
    msg.plan_id.assign("XSJHVFOAUKJTTJGLFEQFPFGJAKRSFHGNZQDWQZLSHVPWTZIBVSQBHCPXYHEKAYVCUIPOWVPMOYDQZXVYUQJIUJCIAGMNCSNJXMFRMAZCGCTOXDDYRTLCFPZKJTTHEQLWPMWGNIRXOLUESGIEMZWOKYOXYPJYMVBVDGWKDUXEBRZLHYLDHSOWTQFLHIQNXCANBMKBDQBSAB");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 3U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NOUEIHNNXEMLQOFMMBTIYHHXHWQGUCRAFNBWZBIDICTMYSZOQYVCTNXBWRAFBUNLKPVGPKKBOQICOPJELZNGVGLRJWUBUHCLTBAQZLVDTMMLEJZCTFUUCZPETDKEKHVNVXLPYQGMJAHHORR");

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
    msg.setTimeStamp(0.21929225733145552);
    msg.setSource(37667U);
    msg.setSourceEntity(195U);
    msg.setDestination(10709U);
    msg.setDestinationEntity(212U);
    msg.plan_count = 25547U;
    msg.plan_size = 1944717699U;
    msg.change_time = 0.46153048249437045;
    msg.change_sid = 21741U;
    msg.change_sname.assign("PAHYCMDYQIBGRJVEMCWZIZDXCQPXMOAULBHQQVRTIQOI");
    const char tmp_msg_0[] = {122, 125, -44, 28, 51, -106, 115, 2, -39, -81, 111, -128, -46, 39, 21, 29, -6, -73, -95, 126, 40, -64, 100, -57, 19, -87, 34, -85, 65, 86, 27, -84, 91, -92, -21, 15, -58, -3, 65, 113, -127, -1, 60, -82, -60, -65, -112, -115, -50, -112, 124, 107, -123, 111, 109, 2, -13, 120, -10, 70, -95, -101, 75, 112, -16, 70, 23, 50, 115, 58, -62, 9, 17, -69, 21, 101, 94, -74, 115, -54, 85, -81, 45, -79, -2, 28, 116, 14, -113, 114, -110, -102, 57, 38, -91, -10, 102, 123, -14, -31, -110, 74, 15, -46, 72, -36, -109, -46, 10, 70, 125, 86, 115, -58, -33, -106, 69, -3, 89, 86, 84, 11, 53, -50, 99, 67, -52, 75, 84, 76, 20, -127, 67, 36, -85, 111, -67, 93, -80, 47, 28, 48, 56, 119, -87, -114, 39, 26, -44, 110, 28, -13, 89, 6, -62, -82, -112, -78, 59, 31, -68, -39, -103, 79, 122, -56, 25, 115, 96, 16, -128, 21, 30, 69, 102, 41, -107, -95, -11, -22, 101, 15, -53, -87, 69, 27, -86, -78, 51, -119, 79, 86, -91, -39, 86, -14, -83, 69, 96, -90, -103, -40, -104, -44, 20, -19, -67, -87, 93, -115, 79, -70, 81, -9, 84, -113, 53, 91, -80, -7, -79, 38, -11, -85, 83, -16, -118, -122, -126, 49, -101, -67, -21, 25, 1, -105, 43, 126, 14, -114, 86, -51, -98, -2, -92};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IOTNVOMAFHEQSDSSXIAPRFYUPCCVBQUKPCKFBPAANUGWZUIHKHZOZR");
    tmp_msg_1.plan_size = 20823U;
    tmp_msg_1.change_time = 0.8427598492252997;
    tmp_msg_1.change_sid = 26744U;
    tmp_msg_1.change_sname.assign("KMCBOFZWSPBIEAKQUKEDXKPOYWYNFOSOXUPFQCKATKNLIFGKYTTPPCOCSZSZDDJVWMXVTGVBGHZMISXZWVIHGURDXITJHJAWEBNMYRMHRXKHMGAOWGRULHAWHAEAOBOFGKYQZFNRTYGBRUQQRWQSHMDJPIPMVRRSIEYEVYMCFTQZZBILHXHNALUYINSDLSCJLEKAUZUNOJTTXBPVJNXBQEVWSACEFWNGVIVD");
    const char tmp_tmp_msg_1_0[] = {105, 97, -17, 11, -82, 84, 26, -99, -6, -9, 52, 82, 37, -32, 113, -61, 32, -89, 108, 78, 28, -75, -113, -29, 33, 18, 71, 13, 126, -61, 37, -19, -34, 87, -121, -73, -43, -99, 8, 22, -99, -43, -24, -86, 100, -37, -55, 29, -34, 108, -18, 6, -127, -128, 53, -42, 75, 41, -4, 104, -30, 31, 27, 106, 6, -84, -19, -125, 53, 61, 12};
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
    msg.setTimeStamp(0.35851430754532265);
    msg.setSource(13592U);
    msg.setSourceEntity(129U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 61208U;
    msg.plan_size = 1620230479U;
    msg.change_time = 0.027703357362562908;
    msg.change_sid = 46159U;
    msg.change_sname.assign("ZPMWKWGEKUOBDBLOFQVNUXFAXKZDNEWFTSYGNUWQVMTDLVLPQMPBLRTJTOUKHLKXGFPXBHKEDVHJZEFCP");
    const char tmp_msg_0[] = {13, 19, 115, -55, -29, -108, -20, -17, 78, -62, -32, -13, 15, -74, -73, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EOOKIWDMCHGYUFQORXNVCQJKGBJEPNWWMPZWEUPXQDDOWNOELXGHCSHNMIUAUPYHNCWHKVMRVDAZSAPRQRGPXDTYJJHDONJOBCPTBBHQQMQBHZDZCIZZEAL");
    tmp_msg_1.plan_size = 64538U;
    tmp_msg_1.change_time = 0.2837263043810162;
    tmp_msg_1.change_sid = 32981U;
    tmp_msg_1.change_sname.assign("LSQOJFEGSQHDWRXXPWKYMLEMCZFXZALSCVJNTPAWXNCCSIAHSLFJJOADPHMBQKHIDUIEFRXCUKKGJBMBNBLZGDVUSWSQRQPAVBVFVNTQDAVVQHKYXDBUHRDFMYKREOZOXAUFLBZTJEAPIKZGGWKLWIQTBIJIPYUSKYDMRGIWELEGRRUNTOJCVFUIXMUQFUHYNJHEGIBYYNDWMHNZOAVMRYPZCCB");
    const char tmp_tmp_msg_1_0[] = {-76, 56, -94, -18, -65, -58, -39, 7, -2, 76, -118, 114, -34, -98, -34, 35, -62, 108, 7, 105, -62, -18, 49, 60, -123, -51, 85, 41, -65, 77, -43, 28, -6, 105, 26, -114, -32, -109, 10, -14, 68, 94, 71, -124, 50, -65, -98, 117, 117, -41, -3, -19, -11, -44, -28, -124, -106, 31, 44, -48, -119, -127, -54, -67, -91, -84, 58, -120, 53, 21, 22, -8, -100, -33, 36, 46, -29, -94, -8, -70, 11, -54, 12, 0, 86, -112, 125, -7, -40, 83, 97, -86, 61, -36, 113, -67, 55, 81, -32, -38, 107, 125, -18, -93, 29, 77, 6, 113, 6, -125, -119, 85, -121, -70, 109, 34, -93, 16, 38, -16, 14, -47, -61, -79, 53, -119, -31, -91, 13, -128, -63, 79, -46, 68, -49, 6, 20, 7, -115, 60, 119, 57, 84, -6, -123, -42, 21, -67, 70, -45, 43, -112, -84, -63, 111, -82, 80, 51, 104, 23, 23, 21, 41, -80, 17, 35, -12, 25, -128, 124, 66, 113, 36, 25, -23, -101, 10, 8, -36, -108, -69, 25, 112, -24, -31, -72, -22, 13, -57, -9, 111, 9, -71, 52, -108, 108, -81, -20, 92, -6, -106, 89, 3, 98, 100, 85, -57, -105, 91, 61, -46, 79, 57, 67, -32, 64, 36, -32, -75, -114, -106, -126, 50, 37, 50, -77, 36, -76, 104, 80, -20, -69, -29, -97, 22, 56, -41, -91, 52, 100, 124, 35, -65, 114};
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
    msg.setTimeStamp(0.043503286513837836);
    msg.setSource(21128U);
    msg.setSourceEntity(202U);
    msg.setDestination(22777U);
    msg.setDestinationEntity(158U);
    msg.plan_count = 48943U;
    msg.plan_size = 1120397640U;
    msg.change_time = 0.1364204991134781;
    msg.change_sid = 38505U;
    msg.change_sname.assign("NUAAZJKVUCHVXMDFVOTHLRZSSFJDQUQQEXRGLVPREZSYCWTGPPQOMIWBEDKHFLVYAWMVHSNUFIWPINPCBZCROAUTRXNCYZUWENNTQMNRYHPAFARTCSIBLHTKUYOGIEAKGQDKCYGBKGOCWLKLOJQQDQXZVAVPLOLUH");
    const char tmp_msg_0[] = {-81, 26, 26, 109, -79, 36, -25, -56, -69, 45, 70, 82, 40, 47, 68, 109, 122, 7, -105, -51, 60, 31, 20, -62, -121, 87, -103, 106, 21, 88, -48, 46, 96, 88, 105, 43, -92, 39, 65, 51, -86, 52, 115, -121, -93, 97, 119, 37, -34, -41, 36, 63, -118, 89, -25, -108, -109, -27, 66, -71, 27, -26, 51, 76, -54, 83, 35, 93, -121, 108, -112, 66, 85, -4, 35, -62, 25, 83, 90, 19, 6, -97, -82, 21, -4, 61, 30, 87, -72, -45, 122, 85, -37, 39, -32, -41, 54, -106, -103, -85, -31, 79, 51, 26, -120, 8, -94, 107, -97, 1, -121, 39, 68, -55, 95, -63, 61, -112, 59, 13, -17, -78, -31, -18, -66, -114, 17, 85, 67, 59, -43, 35, -55, 89, 101, 109, -51, 3, 51, 10, -5, -62, -78, -6, 39, 98, -121, 100, 107, -111, 86, 7, 71, 40, -121, 13, -50, -55, -36, 105, -38, 75, 114, 70, 96, -85, 39, -118, -35, -118, 28, -55, 100, -123, 38, -115, 9, -104, -74, -86, 105, 45, 110, 92, 121, -10, 75, 28, 60, -45, -4, -85, 49, 72, -28, -58, -83, -38, 25, 107, 104, -85, -14, -46};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CZCEWGERTAKHUDPZXOUVGVKFZZEBULWGXTTLWJNOEMOPFPXNZBYHJTPPWFJKTWLVMIQQZMANEBXVGFHODBWCXNYMYUYOJVPNGNCSZCRHAYSMINRFWNIQKBURMWDUXQAZJRKTTOEHMHLGXTDXCRDWDILDYVLXALELABI");
    tmp_msg_1.plan_size = 53252U;
    tmp_msg_1.change_time = 0.3951711090917348;
    tmp_msg_1.change_sid = 10712U;
    tmp_msg_1.change_sname.assign("GRQUBGCPHSIBGYUJGBUNTXRVSEOODKOGBAYKZFLPTRXCBUWQMUTAFEWPZZIRF");
    const char tmp_tmp_msg_1_0[] = {84, 11, -125, -39, 102, 101, -56, 63, -62, -16, 112, -49, -31, -44, -8, 63, 60, -120, 43, 2, -31, 106, 32, 105, 36, -126, 49, -30, -101, 22, -28, 70, -119, -24, -65, -8, 44, -65, 101, 89, -56, -76, -126, 31, 77, -66, 47, 66, 45, 105, 54, -64, 51, -78, 104, -92, 27, -108, 40, -11, 39, 106, -70, 74, -97, -51, 104, -44, 5, 70, 67, 35, -117, -75, -90, -98, -44, 104, -10, -48, 54, 21, 115, -88, -26, 98, 99, -87, -58, 31, -105, 36, -94, 33, 86, 111, -66, -24, 80, -72, 47, 13, 99, 1, 69, 84};
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
    msg.setTimeStamp(0.7939722050634482);
    msg.setSource(48454U);
    msg.setSourceEntity(103U);
    msg.setDestination(26709U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("NFHCHBXUAOQPJDZALBTIPJIODDOGUNTWCJANVFLMPMSEDBBUBMXNCDMMAFQVVZJDFJSIYGNQTYJLGWBSEEGPCPVJFFLNACIHGZEXNRSBOYSOLDMHQLWDQOWTTHUYOJTKYZTXIGCDWTMALFLF");
    msg.plan_size = 1697U;
    msg.change_time = 0.35448782780649646;
    msg.change_sid = 30705U;
    msg.change_sname.assign("YKYUFMJKULRQODIUZIVIVIFSSLPVZFMVGJHMRESNUOTTBWAHNUFBGJEUSHPUOYWJD");
    const char tmp_msg_0[] = {-72, 32, -66, -14, -60, -53, -49, -102, 66, 1, 83, 38, -62, 35, 95, -19, -27, -119, -27, -18, 33, -53, 56};
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
    msg.setTimeStamp(0.427183900273992);
    msg.setSource(43331U);
    msg.setSourceEntity(56U);
    msg.setDestination(18294U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("GYELPJXIDIBVMKMJMZFQOOLWACMYWSPBTUWGBUSQSSIFZRMNRCLTRXNZLEEKICUQSYOJMZDJDVGHZTWQFZKKRVSEVYFBGPCFNIYPMQETTBEWOPSQQBHUUPVHNKOTDNSLJTAI");
    msg.plan_size = 15251U;
    msg.change_time = 0.28824967077677854;
    msg.change_sid = 6728U;
    msg.change_sname.assign("POJKBZFJDECYSFUZYPAMTSICHGEBHLLZKIKXPIQMTZQPPAVDQWEMAKGJRNBDSVQMUTHWURUCKVRWYXNM");
    const char tmp_msg_0[] = {-90, -35, 39, 43, -119, 4, 86, -13, -42, -109, -115, -74, 111, 122, 83, -124, -86, -60, -5, -43, -62, -71, 90, -101, 13, 126, -123, -106, 8, 29, 106, 10, 55, -102, -10, 38, 23, -6, -51, 91, 69, 123, -40, 76, 26, -108, 31, -37, -93, 4, 65, -71, -38, -49, 48, 47, 123, 112, -90, 76, 21, 3, -8, 109, 14, -61, 79, -4, -118, 41, 67, -49, -89, -44, -19, -21, -95, -58, 79, -31};
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
    msg.setTimeStamp(0.3390612542488749);
    msg.setSource(398U);
    msg.setSourceEntity(237U);
    msg.setDestination(54277U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("TLWPIDDBFDODXALGPKIGHXNICMZIXQICIEQTOMJLSWFOQVHZCVVGZRDYAPGHTEKOFKJTUFYNPNBLTYINQYYYKPBYDJXEGCSJAXXUPAVZLVOSZMPSGHLRHJFZRSFUCBZKDOLHOEEJGVUZTEVTMDKWAEWRCSIMCYMHRXWDFISGPLRAWUXQJRZNLORUNKMWQFQWSJWHMR");
    msg.plan_size = 13470U;
    msg.change_time = 0.3771216105208548;
    msg.change_sid = 12339U;
    msg.change_sname.assign("PUNRJYVDHGUTLHVIEDJHKNMHRXJXLCWSSMGAENKPHYQAFWOIZKDSSMIYOKRSEFLPPNMRMZVHZPELREUBSDWTKLFRJOAHCPCBSTCARQAJFGYAMONDNVUPFOHKTZQHDEBQNBTFUDPTWEQNWXDAVKMYRWUQLETXTIGKVTUUNLGIGWSQYOMPDGCIRSIBYKMGJXXVCWZVOXATACAQLXWLBCZCJJJGXPFEKZMRBZLU");
    const char tmp_msg_0[] = {34, 36, 22, -100, -99, -22, -10, 37, -67, 23, 24, 11, -42, -75, 5, 87, 1, 89, -47, 3, 67, -99, 43, -74, 2, -3, 70, -116, 71, 107, 14, 125, 62, 64};
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
    msg.setTimeStamp(0.6843708967325963);
    msg.setSource(22270U);
    msg.setSourceEntity(76U);
    msg.setDestination(7488U);
    msg.setDestinationEntity(39U);
    msg.type = 44U;
    msg.op = 103U;
    msg.request_id = 52541U;
    msg.plan_id.assign("NBZROWZCWBIHPQJCUTKNRCNEMYYMXCHJJXFACFTMPLRHMLAHVKPAXFSXOWKIKCVIYIVBDEETNPPRFUGODBOIHOMNRVVFG");
    msg.flags = 38896U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.35473565116280403;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.876055137830864;
    tmp_tmp_msg_0_1.z_units = 233U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26213009592673453;
    tmp_msg_0.lon = 0.8835404954461187;
    tmp_msg_0.radius = 0.1078377907036362;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GNXECHYCQKOLKWPMCAPCUGWKCITCYYFHSQJYESEKUVSTZXYWIQFSBFUZHWFBKOJNMUPKNAVZCV");

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
    msg.setTimeStamp(0.0555996553791136);
    msg.setSource(15509U);
    msg.setSourceEntity(54U);
    msg.setDestination(57096U);
    msg.setDestinationEntity(106U);
    msg.type = 150U;
    msg.op = 122U;
    msg.request_id = 62203U;
    msg.plan_id.assign("ISZSBKARURZVBEZVLCEJGUCOYPKSLNUJZDPKILSOWOCHLTFRWHCBGFYXRQGXDPRPYLGZJAPRBIUFBRVLNJOAALMXADZAXNEJBWXDZVMKIKNINHCTDHNPWHBZHSRPKQJTEPJRQFKATVHLOYMPDNEDCUWWMETEYKVFQYHUXUJCZNUFWOKFAOHFCQBGYI");
    msg.flags = 25347U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 68U;
    tmp_msg_0.speed_min = 0.21193746084696363;
    tmp_msg_0.speed_max = 0.8948520500202757;
    tmp_msg_0.long_accel = 0.3706460998202017;
    tmp_msg_0.alt_max_msl = 0.319338547671291;
    tmp_msg_0.dive_fraction_max = 0.7913571771953848;
    tmp_msg_0.climb_fraction_max = 0.557751630550197;
    tmp_msg_0.bank_max = 0.850716480187171;
    tmp_msg_0.p_max = 0.06881200900639017;
    tmp_msg_0.pitch_min = 0.6892701726478404;
    tmp_msg_0.pitch_max = 0.3123673929421935;
    tmp_msg_0.q_max = 0.7597792856400055;
    tmp_msg_0.g_min = 0.6652453094327487;
    tmp_msg_0.g_max = 0.9808071658276568;
    tmp_msg_0.g_lat_max = 0.16237297625708302;
    tmp_msg_0.rpm_min = 0.5088239813510602;
    tmp_msg_0.rpm_max = 0.2800306188150442;
    tmp_msg_0.rpm_rate_max = 0.6096770125382073;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MBYFOFADQDOINQYNGXDQUSEADVCLVTAKNTACFIJTHMBUSRFEYREKSMVQUPUTIVGWPMXGYPRUTQHJRPNTQREOIUEKWJCNOFEMCMKKVHFQWOMGBXYAUHSUNZYSZWRCRCLDZSTHLYWSRYOIFWUHXJFZPWAXDVXJLVVDIPKDUSCXBZPWRDMVLCRZXVA");

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
    msg.setTimeStamp(0.955160649931585);
    msg.setSource(62716U);
    msg.setSourceEntity(82U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(184U);
    msg.type = 10U;
    msg.op = 193U;
    msg.request_id = 64656U;
    msg.plan_id.assign("TIKGFMCBREBJHRXIHHSBAVOKLDKRAJJVSLLWWNPBDBPFXZPNFAFRYYAGWXGZRHUIOSQVJZTVCKCGLQLNEGUWEATYTWVDVBSVQOZDUYXIZAJSONHFGATFMSCDQSWPYGIYHEQXNQEJCYICPHDOTHEPOREZCAQFVQMOWURRAOTMEVWMDXETQYKXSUS");
    msg.flags = 4982U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.7308752130604526;
    tmp_msg_0.x = 0.914999037787759;
    tmp_msg_0.y = 0.32412523366610724;
    tmp_msg_0.z = 0.12921542886502302;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TODWRRVDUVJSOOKLQNFXGMMDUZPPAUNMOCKWCXEDRKBHDSEXSFAJXSMHPWKDQROCXMWWIWPVQJOJGKWZCVEIBTYFIQLOIFQBTXLYJZGWBQSTEYCKIAHSKDMEGEUYXZLOQMW");

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
    msg.setTimeStamp(0.18926058089599151);
    msg.setSource(1846U);
    msg.setSourceEntity(8U);
    msg.setDestination(52956U);
    msg.setDestinationEntity(234U);
    msg.state = 147U;
    msg.plan_id.assign("PMTYRQMWVJUQFVOHBFALUJRICSDLORCFKWLNWUMJXUSYDHPCVNLOVQQAHYHZBDTXQYBGTUEZNCYZRGWPELATXOEIYIOLACPZZKCFQUNZAEOGTMNMXVKSMLSVFDDWHNNGCEPWVEYRZTHBLOQXSMELHTNXQVXUDAFFATGSCGUKAHUVNKKYJFPGCGXOKBBJPRIJDQLWEKZDYSWIFDRGWIBRCJRGBPZQEBJHROEBDKASSZUIMXT");
    msg.plan_eta = 991891684;
    msg.plan_progress = 0.5390093643700306;
    msg.man_id.assign("TOCTFFBZCUW");
    msg.man_type = 21281U;
    msg.man_eta = 39243775;
    msg.last_outcome = 152U;

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
    msg.setTimeStamp(0.9995325431578901);
    msg.setSource(42568U);
    msg.setSourceEntity(103U);
    msg.setDestination(31174U);
    msg.setDestinationEntity(176U);
    msg.state = 245U;
    msg.plan_id.assign("NXSHLRGWVOBPBJBWAYWSCCOWQWPMNDGULQGZCQNHDUFGTKOKJWRXQ");
    msg.plan_eta = -1834263811;
    msg.plan_progress = 0.4669621029818489;
    msg.man_id.assign("HIFPHZVCUIMHBMYEURBNJFHFLLWWFGDTIYVBJQLLXTKEZVGYCGYPNWIEOUXOQ");
    msg.man_type = 40922U;
    msg.man_eta = 764927031;
    msg.last_outcome = 5U;

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
    msg.setTimeStamp(0.6041600158608078);
    msg.setSource(30231U);
    msg.setSourceEntity(174U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(154U);
    msg.state = 73U;
    msg.plan_id.assign("TYBAXLZZKEPHNSDTBKMIYCLEWKJAZMCPVZUZIGUHGQCLNJMRETSHODGSXMMARRNBQHVKTXXIZILINTLMPXBDYPSLQFYCZO");
    msg.plan_eta = 1568195593;
    msg.plan_progress = 0.21894621056651742;
    msg.man_id.assign("NEMNODWBYRGPOSFRFI");
    msg.man_type = 34201U;
    msg.man_eta = 1534275400;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.7202869264096247);
    msg.setSource(953U);
    msg.setSourceEntity(182U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TISPOXXCDOHPVZNJKPQPXBMNUWIUFCLTHCHYYUQWHVWPHNAOQOZKMRYEFTJDXVSPKCFPBEUBDGZZMULSFQLLDWIULINVOEYYGKYTVLIAZSNPGHJAOKFBWBLHYIANMRERDVXJCZYHEHNRKAIAYEIBTWXESGKXDJGCYQRSQTGKVSIAOXSUBMTZKFRTWPMFJNPGIXXZOQQJSCEEJDJCGMJDURFHSWNCVQCMFKQARBOROABTTGVLUAWUMZRVDBZDME");
    msg.value.assign("LMJESBTFSHSENJNGAWWQUPVUREOUOMOLQZPJAOXZYYPKVHMJQPVECTUVVTAJRSFHGLYIHICNODFRLUDBHOCOGPIKENMWARRUDXZEINOYHTTVXKFCTQQGWSAHCUWVIWME");
    msg.type = 155U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.7289239250454326);
    msg.setSource(9365U);
    msg.setSourceEntity(159U);
    msg.setDestination(37492U);
    msg.setDestinationEntity(86U);
    msg.name.assign("QMASGLFNFVMDLISZKUSYONLTERUOGOTRAYHTDTIEVIWAZEITIHQDMLAKOFYPTBJKMMNQGJBRKBGEXIYXJNTBQPJAGDRXLRGCCKXHHUCDRQPOQQJDEEMSYDWSWNVPAKVPOCSKWAWJYDUXWFMAWXZMPBBLHFJZ");
    msg.value.assign("XRETMGXXUNRWLNMVMSRLFOETFXLMGIWHALVWYADQIRCLGQKAZAKPUNYZBKVJXGURAZQVTBHHOBDRCYXMNHFAAOWNLCEZXRKDTXIWHTRZOLVKHCJMNGPHDMIMSETKPWFHBLJMUDRGCGWJKAHVVVBFJYSPDBONPOZSOABGXQLUSEWKYZPVUMQGPKTCRDSQEOJEQQPZBNFUPCFSFQQUBYIWOZLYYYJEINTDACWHFIDFDUJUCCKYS");
    msg.type = 124U;
    msg.access = 37U;

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
    msg.setTimeStamp(0.5874920901723505);
    msg.setSource(12463U);
    msg.setSourceEntity(203U);
    msg.setDestination(64804U);
    msg.setDestinationEntity(152U);
    msg.name.assign("RYQEYHVEDLAGNZBEJJGIKFRGZIACVNYI");
    msg.value.assign("QKNSQGDCZTEZNSIGJCHSYMPKLNUWKSARUGOIRFSVQRGYGFUVKKDEPPVBDPHMWJDTLFXAPPEEMNJOAJTGMLYKMCRYIANOLNXRHVVITACYXCXQUBXGPPLPBWZSEANXWVITZXMBQDRMHYSURZVWEEWDABTKMBZRHGQVHIQBFBFEAMYESUUAYQVFOJXKVNOUWNGZHRWFQUIUDRGKH");
    msg.type = 21U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.8643159301091352);
    msg.setSource(59759U);
    msg.setSourceEntity(74U);
    msg.setDestination(27634U);
    msg.setDestinationEntity(122U);
    msg.cmd = 250U;
    msg.op = 101U;
    msg.plan_id.assign("FIBUTZDNWDVHF");
    msg.params.assign("FYURJDZBMPVTDJESQNWYZHQOCLVLSDISTEDVFRPKQXMILMSNUYAFIGWORGMKWDZEUJLIJZERBIPGFONLXMOCYPOAWSBGOPPZFHTYGOFZMAVTCPIIUPVAWEJLTJJVJZTMADVJWXQUAPMACHYBHNSLQGIBMOQBCNNECZXDLYXZ");

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
    msg.setTimeStamp(0.469972015961441);
    msg.setSource(31670U);
    msg.setSourceEntity(103U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(47U);
    msg.cmd = 100U;
    msg.op = 119U;
    msg.plan_id.assign("ZVQEZGIOGEIEUEKJOQQYONUNAUDNMCIQEETWZVWOPDQWJPRZCJSJSNEPFJJIKTUQIKDTVPBGAFMYRXLWEABMSNQPDARMXJFLMVZAMANYXTCAPLSIDDFWOKCINDHTHBRXEFCSFHGBZMHJCLDHPHTSUKLTRMBWOFRSYONTHKIAHHHRYWWXMLPTQLSGVOIGVXXJZXWYCRKOABLXBUKLQYQZVIFRCDUGKFDBNGVBKGCYNVSLAUWPXCT");
    msg.params.assign("LXLIXMPBIWOWSRAACSXTCFTKWXLOJSSDAUMVBQOSAZMEXGFANCEGZVICAGZDDNLXMXUQEBKFBYBGZNHCTYYZCSHKUOWLXPHJYPRQEMGHANPMCJKOIXUDRGTCZEJQYBYYMEHWRVU");

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
    msg.setTimeStamp(0.16844322712645077);
    msg.setSource(50750U);
    msg.setSourceEntity(117U);
    msg.setDestination(9862U);
    msg.setDestinationEntity(179U);
    msg.cmd = 173U;
    msg.op = 90U;
    msg.plan_id.assign("GHUZGJCKMPFGZAMWZYVCSUOSWTIBGLOKTOMABRWIWRSDQSNYIKQLVFKOQPTRBPRIWYFDYXNUARVDJKXSHNT");
    msg.params.assign("ZCHGXJIOFCQZHYKUBNWPDQETSMRKJQICVZWLEZJGEGPQJOJMEEXIGTUTQNFNCAANPLCPBATSFSBTNLYRIOXPNYGDXYUNLWFRTVFBWVDSDMXRHUOVHWKNDVMRVBABKVVOEGLRYQIQJRQIWBQHDACOYIKHCYMAYDSISIFJXFXAZDKUPTJWXMKLGCMUHZYMEVFEUCUKTL");

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
    msg.setTimeStamp(0.2722340640937563);
    msg.setSource(33281U);
    msg.setSourceEntity(143U);
    msg.setDestination(15455U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("JLVNCGAJZMALOQEVSNZAXIFBAVCDLQVIRBDZUTXHUMNXMROZHJYMPRSYIIQCHUGCCDWIEYBMKLKSYQLKLJYFYNQTOSFFKSGJCAGYWAHXMWKJCEMPXECEWPWNMOBKHUVHWSPFQGFIXZHYPGDSIVESTDJONHRHPBTLPBUNJXRPWQUGQIUEBRLOZQTMBWNFEGERPFITJRFCLTUV");
    msg.op = 226U;
    msg.lat = 0.27034048139079736;
    msg.lon = 0.5631055632776473;
    msg.height = 0.5981101024968711;
    msg.x = 0.07688389678043017;
    msg.y = 0.9408570467498424;
    msg.z = 0.5359377166534238;
    msg.phi = 0.879053639718099;
    msg.theta = 0.9313667034239461;
    msg.psi = 0.9026530415562701;
    msg.vx = 0.7535241253081754;
    msg.vy = 0.8166606833483051;
    msg.vz = 0.4056070581745619;
    msg.p = 0.052111945484443645;
    msg.q = 0.08941807362569132;
    msg.r = 0.40382299506439345;
    msg.svx = 0.04660143957291707;
    msg.svy = 0.0479075191850874;
    msg.svz = 0.37150221419222074;

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
    msg.setTimeStamp(0.038561040698602556);
    msg.setSource(10075U);
    msg.setSourceEntity(41U);
    msg.setDestination(42154U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("XHARCGSEFHHTVCHTNEOWEZSSQNEZRPABKGBCPPFJVALYYRILWJUZCHGITMWTTGOHOTUVN");
    msg.op = 97U;
    msg.lat = 0.8685772410792791;
    msg.lon = 0.08967893101060587;
    msg.height = 0.12346287634967157;
    msg.x = 0.5838102642596514;
    msg.y = 0.6228766669408001;
    msg.z = 0.8913732417369526;
    msg.phi = 0.48325492262890946;
    msg.theta = 0.644068183403261;
    msg.psi = 0.6449108566227265;
    msg.vx = 0.7066945969167762;
    msg.vy = 0.32679860391455773;
    msg.vz = 0.34368917986579695;
    msg.p = 0.020057576325461568;
    msg.q = 0.6310258236767561;
    msg.r = 0.26662744906387514;
    msg.svx = 0.5171658584775265;
    msg.svy = 0.5060702457199058;
    msg.svz = 0.3927266693264396;

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
    msg.setTimeStamp(0.25307878671992523);
    msg.setSource(49866U);
    msg.setSourceEntity(85U);
    msg.setDestination(55338U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("PWLYPKTCHFFIIQYWSPBKNSLEFCUQTCRITFHRTOUBJHQGRLBGGAKKATAWJJBSUXOOPEKGKTOZSVXOJQCFHANIXHNBSIHVJUXKLTVGFZCEEDNQCNQDLYKOGRJRSTWSEZLQDFHBGRECPRDOMIHLVUWZMYZYXXCRDKWUEBGCMSPOPJLZYPNVDGMMFAZXNSZIJJVXUMCWQZTAXVUDAPWLNH");
    msg.op = 5U;
    msg.lat = 0.1639719631712674;
    msg.lon = 0.22968184043197692;
    msg.height = 0.5420238419504942;
    msg.x = 0.8711405951749756;
    msg.y = 0.9865202682921259;
    msg.z = 0.8094141129857508;
    msg.phi = 0.9388818348688708;
    msg.theta = 0.7966418695839353;
    msg.psi = 0.30588345174310094;
    msg.vx = 0.7156118542832977;
    msg.vy = 0.39325043755692213;
    msg.vz = 0.9001973979993502;
    msg.p = 0.6453165264885097;
    msg.q = 0.4005358248926487;
    msg.r = 0.6986579563058944;
    msg.svx = 0.7619340326728471;
    msg.svy = 0.11254216727499344;
    msg.svz = 0.9206786887059342;

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
    msg.setTimeStamp(0.42834090967665783);
    msg.setSource(34672U);
    msg.setSourceEntity(16U);
    msg.setDestination(52852U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("TIUYGCMJYOEYFPTMRUKGAPEEPIALONUDXNTRCLJHKTJRIHDWRWFNBEBKZSFVQEWAPVBHHIGDZDRDYWKTBVOZSYTCNCEUNGRJJGUVUZMGTAXMSCVEFWJISXPAWSLZBMZQFQWYLKWY");
    msg.type = 167U;
    msg.properties = 41U;
    msg.durations.assign("SOORKCFUVKRKYTVXSCNIPMFMBNIVJFTUAMNEOFZANJKBXGLTGJDOEKBGQLAZTLMFDCRPTOHUNHVDDTMZOUARLWVSAAZVVQLFJBJJYGYXDGYGQYJTANFMHRJSECKPJIWPMERZPHXGBC");
    msg.distances.assign("EVPRZDLNCGBHWHFJPBLGQFDCWIKZCGRWFTGEAMCQCHCW");
    msg.actions.assign("RROEPSBWIWODIDFUZMENKBSQQXXGLIUSYQEXCUPXWGUSYOKMYBQAPRHAFUQIGRSPABYHOHBXOKOTRBYLZXEPJYHBUVWMAZQCAYMKRJRAJZCQQHDVLQYLODDARLPEINCTSKFZXDHHJMJAGHNKMIUCZVKNNLDDWIQSSFWDXLVMAHMIVVWBEFEFUSGYEGPIIYNNFFJWJDWFENVKCOLZRWZCEGZGTNHNMJVATSTTORPPFLXOTCCKMBXK");
    msg.fuel.assign("ZEUOTEEVMNWDTOBUHRYNEZXVFLXNVFTIFOJCWUJZFYKVCHAXYJAXPQLSMBJRYQFGIZGPGIMWABKCWKRWUPDLXNLQUATSDTRHVKRDFLDZYLCUOQZXUYHSACHAVQQSZVNMELJSNOKLXGDRSTKKIVOKETDNQTPYRJOEMWVIPJDISFEKHJPIXIWQIMHARSJFBGUSBSYMRCAOYPNPFOCUTGBGAPQZJGT");

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
    msg.setTimeStamp(0.832207838957775);
    msg.setSource(16921U);
    msg.setSourceEntity(120U);
    msg.setDestination(8589U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("CMMBXQBOWGRXPYWGXHQCYAIXESUQGLYWNUJDLUHIGQYYGSOBVTDCFGVTWTTLVCZFXRHJLBAAAUFJVIIMXHKRCPMWARDQ");
    msg.type = 43U;
    msg.properties = 180U;
    msg.durations.assign("ZRGSHWUEIZOPVDTWPGNCYVBXBEKNHHJFQPUJJNFMWHOLUZGTCIBYKURTHISKECMLJXRZGCJLXFXLRMKMEORFTAQLRKCNBBXGTFTOLTQIJNOGDARSCSDSCLDKQVAYCFYPNFDVVKALIMHQUP");
    msg.distances.assign("VTCPAALYSLVBIZMGWKNYDIOZGJYVVBPOEXJPCRNHIUFLNNDWZIWDSQVVXQNJCTPW");
    msg.actions.assign("RYLEAWSDYSBXPYWPRXQBKXYIADKNTZSNZZUVJPPTSXNHAVRFCSNIVHZBXCEJMIYSFLXVCPUGGGDQWBMHOAMKIJMUICINPKZZWLHCNAZEHWRQJPQWRKRLQAYMGIOROJWKJSKAVBDWMYQOLQRGUBVLMHISVFXPLGEHJUYTYVLNULJQUOTMKYFFZJGDBCZUFLXTZNRFKDEIVSMXSRQVOEOTWWDGBTKEFOPOMBUCXNJQHCHCA");
    msg.fuel.assign("WDAZDOPAOTBSDEFQGFAUQJUQEZQVOONELNJGLPKEEUFMHMXLPTXCVHBCOYZDUYHTRQGSS");

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
    msg.setTimeStamp(0.923330208574315);
    msg.setSource(55007U);
    msg.setSourceEntity(247U);
    msg.setDestination(63173U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("ZDQNQPDNSTKCVXIWUUXMRZJQRZHSYOHXQQPGEEYAMBBFQDTZAXKROEUVDCLVCNWTDLPSAUJMMIBDENXLSQGJHKRWANSOXNXWYSFCJRYQKZYYFXQVRSBJPALKWCNRLPGIKTAHHOFPBIDZEKRZOLENSPTGOYJFFXJHEEEWJIQBOCCUSAFZYGCVH");
    msg.type = 206U;
    msg.properties = 212U;
    msg.durations.assign("ZAQXCARKGAQXINISBBHWKNVRYHZARPKNVTUMKGVCJVIRXCJEFHMRXZW");
    msg.distances.assign("XNTRZFXIPQEOVDDGMZASZFUMTNTANKRVOIMHYQAULAYREIHKEZJBZHJWXYYLUSPUOFJJNFTEEYGCCJIOPMQMYOCTNZDDCRIWHPSDVGHJGRLQDSKBVITFJHOBMVGHISGGKZVXDLWJVWZUNCXMYENTKNBRXUCA");
    msg.actions.assign("HXGRNEMSLYBSPWRTBGWUFSUFWPOMYEKQNJUYSZZHVQXNPQDLCJYLYVTAMWACMLVFDBJCRRODKPCWPRRYAWQTTNLGRMKYDSEIOVUMTUDPZIGGLSQKXOPHHAMCBGLFTMDJIANIBFKRSBNHHQEWUZCAZHPNASCARUIXFXEMDQUXJQ");
    msg.fuel.assign("RBFDIWLWSPEEINREDCHPJZNKIDJSXAUDSUJNWIZVWVKELNYGZIKLJDFOURQZGIWMCLWTASFUAUTQ");

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
    msg.setTimeStamp(0.549779379490676);
    msg.setSource(35395U);
    msg.setSourceEntity(153U);
    msg.setDestination(46677U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.130826910472835;
    msg.lon = 0.9282380757248458;
    msg.depth = 0.5351797072253128;
    msg.roll = 0.7203830684652376;
    msg.pitch = 0.1227567098832838;
    msg.yaw = 0.132276573418165;
    msg.rcp_time = 0.46999099580286463;
    msg.sid.assign("UIHTTUCAGGCOEMAGIDIOIHAQAFSKNHWGX");
    msg.s_type = 87U;

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
    msg.setTimeStamp(0.03777241926430852);
    msg.setSource(41424U);
    msg.setSourceEntity(227U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.18099467940773217;
    msg.lon = 0.9500186578082769;
    msg.depth = 0.32324297049109707;
    msg.roll = 0.08526615569116935;
    msg.pitch = 0.49679693311406137;
    msg.yaw = 0.5191882051396246;
    msg.rcp_time = 0.6651919808332519;
    msg.sid.assign("NEQUFWBYVUFYRSMIDZFRVMDXJJZAWFWFBMXBJNEYAVLCJNTSPYESZLFPSTITUOGYCRCHZBXORCGQGMQQOKTNOOMACDUEQPOIFDWDHZPMWENS");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.06407454544016422);
    msg.setSource(40087U);
    msg.setSourceEntity(219U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.39467854058238794;
    msg.lon = 0.5265425018900817;
    msg.depth = 0.8189731767527291;
    msg.roll = 0.4822016799432731;
    msg.pitch = 0.39120064394897747;
    msg.yaw = 0.08305141308637243;
    msg.rcp_time = 0.7697343009911105;
    msg.sid.assign("EXOCTIXSFNYEBAKRQMYUMINVRTJDCWPKPLKCZHMGZQLIBGPSRNQIIUATSMUYAWOODXSHVUYLPLZJPJRVGDTOZWUWNHKXNJBCQVKLLGHREJTRCKAHQLDPZSYIVVTGSCJVIUWENJFAVTSFHDNBPWUSLBGUMFNWORIKHQGGZQYMFKMQDOUCPVAJWIFCBDDF");
    msg.s_type = 45U;

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
    msg.setTimeStamp(0.2204174746626857);
    msg.setSource(19446U);
    msg.setSourceEntity(19U);
    msg.setDestination(44420U);
    msg.setDestinationEntity(84U);
    msg.id.assign("CATAJTKTXGMGMULKDSSKOKLGTIGXSIDMDYHXDSNLLMZWEBDFQOQWIQMRPNYIDQEFAGTYEBOGDDWBUUEHNILPNPNJHXVBRORH");
    msg.sensor_class.assign("HYLBRRFCNKBKDQVITULQNRLIFHJPDKGAQFMEGGLCOEAEJNUOSTYEBUUIYMUPDNCJMDHTVUJWTUTXFAHBJFWJTWIZWZWIQZGQKZGIXAQPXKRKDZNRHWXWECOBVHFPCNXTALGRFDDJFZMGPSZDRCXTSVXLASXEMIKBYIRSZQEOMVLMIYPXJJMKSPMPLYUGLVVFQWIHUSOVLGOCORAENRPTCANZOGEBBHQNHTCUAWHYSPJYQS");
    msg.lat = 0.23016693913781316;
    msg.lon = 0.8315804152452867;
    msg.alt = 0.9632732741760729;
    msg.heading = 0.15059595313561014;
    msg.data.assign("DHYMJLQDPKKVELYAPXINSWPEXWSGAVIPRZZXPTRCMCHXGBVGFQNFSIHAHMSTAZGSXJOGBCXUKZRQFUXTFC");

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
    msg.setTimeStamp(0.45226614306886603);
    msg.setSource(11088U);
    msg.setSourceEntity(222U);
    msg.setDestination(38966U);
    msg.setDestinationEntity(61U);
    msg.id.assign("LRIZVLHFBMPOQKUMBTZHZGGNKQAJIASJCGCEWYAXEGLARWEHKAAIKZESYRPVRVDYOLRUGVXNRKDWUOJGMEFCHCHJVMMAPBNTRWFWEIFUIVFXMKOECAJUOLKYBWQSYWCCHBJJNPX");
    msg.sensor_class.assign("HVGYHIZXNSONXXFARNDXODUQVCQHRMTCIEKF");
    msg.lat = 0.579942509912391;
    msg.lon = 0.46787395447387303;
    msg.alt = 0.048477377239761754;
    msg.heading = 0.15079983267199126;
    msg.data.assign("KUBEQVHKINPSASIWQJMGPGLFCUHQCDRAHEBHCEFVSEJUKJXRCLXQBQGVOIRIPJHZWMCDJBPZYWZSFYZABITUJDOIAULIVTMKWSEKTDMEYRXFVANYXOOQFLRMBORRNFDSXEFZNUYDCINFPGUPWHAMGCLIVTFCCHBWLCLRSOPTTGOSPQHUKKYDOQASAZGH");

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
    msg.setTimeStamp(0.2892607378930363);
    msg.setSource(62004U);
    msg.setSourceEntity(157U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(166U);
    msg.id.assign("CSMSPFITIZHOZJBSALWVOKPEUKROWSHOQGEUEFJBBSRJHLZSNDPZVFBCUKVXWFBBJTEXHAYPNPVKNIRPLMAZMSCTAEORGBEDXPGWKLNDGUUCLDXUKRITTZMVTJGMXQLUAWMHWHEXPQUPRTQLWQRWLCGOMYJNAYRAWCUGKFPINGNRNFCLKYAIECGKJRYYYQODXLMCTIOJVVBSUJXATFZ");
    msg.sensor_class.assign("DWWPOQXRVTUNVVPBHGTMOHHZGAAFVHFMNRFCIGOIZPETTQLRYJEGMSTCNDVNRXIZOXDDIMGASAXFCOSPHBUNGKFSILWSTYYAJFDCAMGKVRTPKRFAOVXSUOLBCQQQKKSCTIIEMNLZMQPXCYWYKXRWWO");
    msg.lat = 0.8797472714731757;
    msg.lon = 0.024596249663176528;
    msg.alt = 0.7041604163368742;
    msg.heading = 0.9595835112556657;
    msg.data.assign("BNFASMFRDEUGGMDYIHSYZBZAPGXIJBRYDEJJWNMVQSHUFMQJQCUWGPVIAGTEQQPGJYOGOYWEXGRSMLWZZDQBVLNKDLPDRAWOOPRHCZVLTNKTXHSWEIWHPVBFWENIBOKCAHXXQTYUWYYVDAMHNEKPVDEJBULUHANISZTZLGIRKMFOJDFXZNTUIFQXHAUZUBQNBFTLFLZTHOCSNFRCITLARERKPCMIGKKOUJMCSXKXQCTKRPPMX");

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
    msg.setTimeStamp(0.14238464070208012);
    msg.setSource(50741U);
    msg.setSourceEntity(88U);
    msg.setDestination(65360U);
    msg.setDestinationEntity(156U);
    msg.id.assign("DOBDHABITGLNSCFHHOREEJIRCVLVULASQKAFBUAZLJSYWJUMZJBRXJAOZOFRZSVTVQSOMQGXGREKMH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SCYMCUNJZVSTOFSVIPEZKQUHVMJNPRTBLMBOQHEFRFSIXTVGLXDYQXYGTHVCAQCJIWIPGNFELTRECRWYGBELMXPCJWNDYQLOURQEYMPVSXHAAGKWNHLZTXEJOZMWWKYQVFBEDVANJSPPDIVUNMFZWSBMZUTRMOFGKROHHOCDIXGYPGCJDBULFOBZDGYIBUQGDKXZJCUTLSXUNQODFLCIZJIAUHIKPT");
    tmp_msg_0.feature_type = 222U;
    tmp_msg_0.rgb_red = 47U;
    tmp_msg_0.rgb_green = 92U;
    tmp_msg_0.rgb_blue = 113U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.974915870468926;
    tmp_tmp_msg_0_0.lon = 0.8482721664906374;
    tmp_tmp_msg_0_0.alt = 0.7057076037337051;
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
    msg.setTimeStamp(0.8837039248481514);
    msg.setSource(3370U);
    msg.setSourceEntity(219U);
    msg.setDestination(21722U);
    msg.setDestinationEntity(124U);
    msg.id.assign("WVUMSVGZORXXFXNORGLCFRLHMHCQNIVHBKARNHYJNCUVIXEADFHYCZMFSYPVUNSLRJMYFCHLOGKIPXETEGIA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EHVREWIVMEHAWUOAJCLORKAPYYZXGCRKWTVRBQFKBCNVYTUJXMCLYIYKLNMNUYVKVZCNWSFHTDOYDAXHJANYMKDLQFEWHFJKUIXGMGZFWXOELITZDTGXQUIQHFPBZQDKMTGBRJQPLKRHPFDSPSBVVEUJFDJNWXEWSZFIUSOAGMJZORLULSCPPVWCBOISISRQLOITWBZXESUAYYTGGTENJGODMERDMBSZBOHGNQVA");
    tmp_msg_0.feature_type = 116U;
    tmp_msg_0.rgb_red = 21U;
    tmp_msg_0.rgb_green = 80U;
    tmp_msg_0.rgb_blue = 143U;
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
    msg.setTimeStamp(0.2952322643284122);
    msg.setSource(22528U);
    msg.setSourceEntity(242U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(27U);
    msg.id.assign("LBWBILDBEVTWLAMGETSNYQWDUUQPJVPVCWPZZJJBRHKTVX");

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
    msg.setTimeStamp(0.9215832849024533);
    msg.setSource(58525U);
    msg.setSourceEntity(90U);
    msg.setDestination(10969U);
    msg.setDestinationEntity(217U);
    msg.id.assign("IDLIHRSVDCOBCUKNENJFGVLPYJRXMWFMXQRKTWTGQZKOPXLECPOYZHRJXUPVGXSIZUYVPMFZCROZ");
    msg.feature_type = 158U;
    msg.rgb_red = 88U;
    msg.rgb_green = 245U;
    msg.rgb_blue = 246U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.07775459508415838;
    tmp_msg_0.lon = 0.5066791780697799;
    tmp_msg_0.alt = 0.9406198278440457;
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
    msg.setTimeStamp(0.782686070102799);
    msg.setSource(63575U);
    msg.setSourceEntity(246U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(65U);
    msg.id.assign("PWHHHWSGZOEA");
    msg.feature_type = 4U;
    msg.rgb_red = 240U;
    msg.rgb_green = 10U;
    msg.rgb_blue = 96U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.40948878327349203;
    tmp_msg_0.lon = 0.5364999161383683;
    tmp_msg_0.alt = 0.7960589288473269;
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
    msg.setTimeStamp(0.3044567193680213);
    msg.setSource(38365U);
    msg.setSourceEntity(164U);
    msg.setDestination(33261U);
    msg.setDestinationEntity(10U);
    msg.id.assign("RHWFPGHSYJAOVDSIUCDWWLUUXHEMFOYRDKCBDVKJYPALXFIBWMMGEMPROFGANQFKHIJTHXWCTBOVMYWWDDOPKNZTFTQ");
    msg.feature_type = 11U;
    msg.rgb_red = 141U;
    msg.rgb_green = 213U;
    msg.rgb_blue = 148U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4651071962525143;
    tmp_msg_0.lon = 0.3750085149936643;
    tmp_msg_0.alt = 0.05855014220981747;
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
    msg.setTimeStamp(0.8251778690893293);
    msg.setSource(34984U);
    msg.setSourceEntity(220U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.3963969400866708;
    msg.lon = 0.5135285281355848;
    msg.alt = 0.8828436985008792;

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
    msg.setTimeStamp(0.8276817562216658);
    msg.setSource(61350U);
    msg.setSourceEntity(185U);
    msg.setDestination(39991U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.23188463568532136;
    msg.lon = 0.03221545008548343;
    msg.alt = 0.7431012588350419;

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
    msg.setTimeStamp(0.3625255924805799);
    msg.setSource(12493U);
    msg.setSourceEntity(89U);
    msg.setDestination(5421U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.012704133415868513;
    msg.lon = 0.5618229723524226;
    msg.alt = 0.7600369831480381;

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
    msg.setTimeStamp(0.9325147936117155);
    msg.setSource(2441U);
    msg.setSourceEntity(11U);
    msg.setDestination(32766U);
    msg.setDestinationEntity(213U);
    msg.type = 114U;
    msg.id.assign("MDVEMKIANVOHYJAXSOBONMRCWYRZAGDZHPRPIAKCUWSQILQDBYQMPOLJFAKNKPTFRDSBTZUNUZPRMWTETARVHXUPPMC");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 238U;
    tmp_msg_0.value = 0.24094493261977434;
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
    msg.setTimeStamp(0.06869604069244062);
    msg.setSource(36437U);
    msg.setSourceEntity(122U);
    msg.setDestination(44280U);
    msg.setDestinationEntity(129U);
    msg.type = 241U;
    msg.id.assign("QDMGZVHNZHXTEFBARHAOLSCUGLCJRCOFLZTXKMBLWPKUPNWRNANGWHYQOXWFECZWYCKIMBZVHITRYAGCIFDUNSHQMYTFOOWJUATSOKHLGOWCIJSQWULXGGNAJARAVPTNEZSDTLFBFUMYSRCXTRJETINVEJCSUEPIXVKJVREKMIQY");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.7045173696340568;
    tmp_msg_0.y = 0.5411159623447245;
    tmp_msg_0.z = 0.3855741591112407;
    tmp_msg_0.phi = 0.756367291756913;
    tmp_msg_0.theta = 0.7898379663463498;
    tmp_msg_0.psi = 0.17583666166577572;
    tmp_msg_0.p = 0.9398146573248833;
    tmp_msg_0.q = 0.1998033767857812;
    tmp_msg_0.r = 0.6900056612141835;
    tmp_msg_0.u = 0.33864852543940005;
    tmp_msg_0.v = 0.7334493840465219;
    tmp_msg_0.w = 0.5794107401894952;
    tmp_msg_0.bias_psi = 0.5309148839493886;
    tmp_msg_0.bias_r = 0.09289920558675757;
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
    msg.setTimeStamp(0.839767768856893);
    msg.setSource(42805U);
    msg.setSourceEntity(216U);
    msg.setDestination(5110U);
    msg.setDestinationEntity(0U);
    msg.type = 204U;
    msg.id.assign("IGVVGMANYQALIFODIDWNMPFDFYLLKMOWWNZRFTYOUQPRUNVCCJWXYDKAQCKZFOADSMCTBTPEPEPTHTBBFSJJGXQZZHDFCRUKDXQHEENIHOJTMZXXMJEURNWPBAUOZBBUCBBDSZYJWPTDSEIHWAIFECLQSYWPJGZX");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 18U;
    tmp_msg_0.frag_number = 23U;
    tmp_msg_0.num_frags = 189U;
    const char tmp_tmp_msg_0_0[] = {-68, 119, -20, 82, 109, 13, -93, -102, -48, -110, 5, 4, 103, 5, 70, -12, -125, 110, -6, -93, 95, 76, 97, 114, -114, 18, -106, -61, -102, 43, 92, -98, 7, 76, -82, 18, 89, -34, -63, -102, 8, 6, 89, -60, -73, 41, 82, 122, -15, 81, 48, -10, -126, -18, -69, 46, -39, -44, 67, -15, 53, 47, 44, -31, -6, -50, -7, -83, -72, 11, -18, -26, -93, 89, 21, 125, -17, -19, 25, 74, -2, 31, -41, 83, 77, -105, 8, -91, -44, -62, -118, -15, 45, -94, 42, -12, 104, 70, -5, 54, -17, 47, 39, -108, 53, -74, -89, -86, 35, -54, -94, 116, -62, 84, 98, -1, -1, -27, 50, -124, -42, 63, -31, 101, 98, -57, -46, 11, 87, 100, 93, 33, 85, -36, -98, 108, -48, 112, -2, -126, 16, -26, 90, 20, -46, 98, 87, -108, -85, -21, -97, -80, -34, 118, -25, 123, -57, -117, -18, 72, -22, -122, 7, -108, -56, 50, -1, 114, -47, 6, 119, 8, -114, -40, -100, 65, 64, 86, 35, -124, -71, 94, -118, 95, 74, -44, -103, -42, -127, -1, 25, -14, -71, 21, -75, -6, 100, 92, 37, -93, 101, -3, -81, -25, 79, -118, 13, -114, -82, -79, 71, 29, -52, -44, 120, 73, 90, -38, 80, 27, 9, -27, -25, -120, 122, -64, -12, 81, -110, -37, -67, -91, -105, -102, -126, -110, -14, 14, -52, -17};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.2517659927012741);
    msg.setSource(26050U);
    msg.setSourceEntity(148U);
    msg.setDestination(18771U);
    msg.setDestinationEntity(232U);
    msg.localname.assign("DLPAUYYYHOWQCULZMLMPSOQEKDWUWVBLXCGXRZJOMVNKYQVLBJLHVIDYDBPXHNUXZDPSZAZPHQORTHLJISKCQEAZLRIIZNBAWKMFOYGDKCFGOWQFKYAXERFHOVSPUBRCSNMSK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ITSBDBGZKXTCFFNXQMGOONRLGXNKWAEHQXIZLVUWUFLOGETAZESHODNFEAWNRNPCHXSYVJCORHBPWLXTDPUVTBLJBXKDQWXCHIOWJOMQJVUELSNYDUIMSSMPTBQHGHFMZDRKFIYUCGPKGLYBRMDURYZMQWWZRLPRQUFJCMNEMAGCPIIRLXVCFAYKAVYQNBB");
    tmp_msg_0.sys_type = 78U;
    tmp_msg_0.owner = 20302U;
    tmp_msg_0.lat = 0.5449510104328359;
    tmp_msg_0.lon = 0.48029880658630786;
    tmp_msg_0.height = 0.78557930986027;
    tmp_msg_0.services.assign("QKTVDLKRBQIJYSDQGULCOHEHXNILUPBDNTHYZA");
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
    msg.setTimeStamp(0.6726131070288093);
    msg.setSource(11466U);
    msg.setSourceEntity(197U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(58U);
    msg.localname.assign("ROQVQGWMWDLCJQPEMDPNBWFQJVACDMEBRFYKOCLRMUXQKZINBLSZBKNTDKAIFKELTRWEVENGUJYOPMXOFOIIGZLTXQMGVFCHBJGUHWVSOSARRAFHKGSSQKZOPZPJWCRGOIZBSPATWGJPDFZXINPLRTX");

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
    msg.setTimeStamp(0.18827182185436764);
    msg.setSource(33139U);
    msg.setSourceEntity(177U);
    msg.setDestination(53832U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("LCHZZEEXRUAWIIPOVFNNSBHXCUYUAHBTSPQLUKNFEOZLZAFFXJEVNQYUHJYDULPOBFQQXMTEGDKOPZKIWVVCPQVPQDYXWGMUGCJGAKODRNJLKPVNTZIRMWEARDRZNSTQKUFWKLGSQECFADBYLOBPURVXTNIOKFJGNHZWPBYHNJMDAJPXGMQYBBSTCCCEYSMVVIWIUBIRCZGBECDGJWAFTHMVFIXXSJMJSLAOQROHGRWMWRTKYOXHSL");

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
    msg.setTimeStamp(0.20102229841549923);
    msg.setSource(25663U);
    msg.setSourceEntity(239U);
    msg.setDestination(32448U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("JEOESLKIICYNVQBRCTBTSNMNTNIKFBAJDTRSUUZLCWDENDSXSEHAEJKRDP");
    msg.predicate.assign("AXLYYKKAPJOBFASVKXQUZCUBAHJGAZSSOURQVVKVLRMMONILQZBZXWJSNYUDWLAGNDELULVGOIIDTCWDATBGGVHHWWYEEETPDOEHZMDCYPPBAQYFPCXUSNIDSNXEFKKJIVOXNZEEDDWRW");
    msg.attributes.assign("UDIBHGUMZXDSDVDUZIFTOKAOCFTMQEFDLAGRZERIZSGVWHJPHZFWLVTRIPSXOLTVPDBLHGMVFKVCCFSSBSQQYUBGHSQYGXXTUJRIZZJAKVFCTBRWELUKYPKJTFSSORMRVYXBDXEBMBJKBWKDLGHIAFPIOAPMUFMWNUBQMNNNYZDWAEQMHKA");

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
    msg.setTimeStamp(0.40318633558735684);
    msg.setSource(6478U);
    msg.setSourceEntity(21U);
    msg.setDestination(16010U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("SDQTCPFQHRPJFSBOGHSEDXGCHEFTDYUPQYUYKBPBJNZBRZSWAIUTCOEOLNMAEGINKVOOZRIGSJSMXTNNRCIZDWACSPJMHTPTUVZLGATLIZMEOIGMKJBDFWLEVNATAYHZFLDXDAAGQWRKILFVRHKXYGHLXNUYRNDZSUHILNRIGTLOBWCVEFDKLUVEOJQU");
    msg.predicate.assign("URHXFGKDJUPZYFAZFIXGTUJKMMQUDVBGXTGNAYALVMOFQLZRBKTHVHSOIYLNRMQPCCKZJHHEFACSBCDTFKOGYIQJMRRPVEFWLXEVWJSVMHIKTNCYNMDOXAJPBJLMSJRJQJOTWSNZXQADECIWIDTGUWPDWMCYOYOBQDPEGLNUIHBHQNDQFZOWULSYNLLRABXEZVUIBHHWQNGRYYKVXTXGZSGULKSPKCDPEXPFROUEATIRNOBEWZEZVMTVAABKCW");
    msg.attributes.assign("TKFFQKKRGPYOERQPAJUMLYDLGYBXMMDPLHIOPAOBZRXTMIJABNXNEIYCNJTGJLKDHEVULQYDUZPUWOHIWWFVAMVUDDJQVLUJFTQCSNCHVRWUOAJFRARYFLJZTZMFYSBDNHEEWXZGSUTSGZIYNJTHXBAHZVFCMME");

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
    msg.setTimeStamp(0.8441558583278579);
    msg.setSource(25095U);
    msg.setSourceEntity(23U);
    msg.setDestination(11590U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("OAJSCOPCENZBZGUBVXRAAINBSQDOROGGIHMKETISOCHQCHYZMGSKARTDRHSXBWADYVLMRINIZRFNVGWPMLEHHBSZBG");
    msg.predicate.assign("ZYKXTLCQJJKZWGWAUCBRQLSBBYKLFXVHFSIAHEORRMIBHXHJXWAFYNNYFVLCSXEYNKKKGJSRUCRSGBWHVUTOLXVAPOPOEHIHQBPR");
    msg.attributes.assign("GOOGSGILYDSKCKWWOLCIAZEZTLEDHKIYCMGARNPDQLADSUJVSRFUJGUJSHRWBYHZCOARQSUPMAKYNHWDPZUHVGMBHBLKWGUCJZCNFJYXFUIAIBYXWTZXBKSFAFVDZUENDTQKC");

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
    msg.setTimeStamp(0.4949314435204778);
    msg.setSource(8361U);
    msg.setSourceEntity(127U);
    msg.setDestination(25103U);
    msg.setDestinationEntity(18U);
    msg.command = 170U;
    msg.goal_id.assign("PZPSYLOQURJPESTDXRXCPARVBRYAKWTGZUIBKWNVSNSBQIQGUCKFDJTLTLAFFQADQXLMKAUGACONJPSIBHWKZEVREYFXYBUPHVHJHBQXYUIJNZRVTEEIOJDCFGPSCGLFTYOGVWXMTPMNBNSDJLHGNHXWRDZMHMWGWJEAYTCAOBHZJLYDURYWOWUVNFZQKVKAIMDTK");
    msg.goal_xml.assign("IDTUILPZCINHLMFGSQWJTPAWDCHNVMQBLJSTGKVNJNUVBOGPYCXXTZCWYFQQXLVBVPXNNUJYLZFWKPAHJAOGHOLIYQMHNFRMWMNZUBEKPQZNHEVRYSGSGIWXRJTBLVGFAMKHUOSJVYLWHQXGOTTMKPDISADGSWXSUDUEDSLAS");

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
    msg.setTimeStamp(0.160820855447947);
    msg.setSource(40197U);
    msg.setSourceEntity(152U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(146U);
    msg.command = 246U;
    msg.goal_id.assign("LBLHMEDMRGZBPZMHTTDVINUEVWHYAQVMIRJUQNPJUKRTAAVQCIXOEAGTVLXSKLUOG");
    msg.goal_xml.assign("CROADONXIUZHVUTRMFXNNAKQUQAACKPUBLXEHEMMYBDCWDSIYHEMNSPWCSLRBBJWXGHZTMKXICUFEWAPGNQIQBOTLRHKJWGVTHORZTXCCKJICKBAGPMIGYDKISPNCUGZTRDDUQYIHQEYOFALSDFJZGZSLINNZYMDFMDEVVWLKHXFNHMUOESTRFVBWTFPLBWWPOIZ");

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
    msg.setTimeStamp(0.9115634340896137);
    msg.setSource(64957U);
    msg.setSourceEntity(34U);
    msg.setDestination(20732U);
    msg.setDestinationEntity(45U);
    msg.command = 190U;
    msg.goal_id.assign("XQUFDJNAZPWZCWKJYRLSVRPYXZUBZQSOSYMANCXFONFSWPJUEQHWNWCLIGERBVPCNWKBFKBBUTIXGEPUQWLTAUPAKDXO");
    msg.goal_xml.assign("IPOZHGXEMQPJOKTRKZFMZEIKJNQOLFFWXRDRHGIVKQEUXFPVZJRCLDZVMMSDEJSANLLKWMQGHAWCRDAHZMWAPKBTCXSHLQVKTHZOSPIMAACYNQDTFGBNEUNMACGYXPFFTGJLJAHGWNJTNNDLQUYSBYOBJSGLZZRGUPHQSCYQCUDEK");

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
    msg.setTimeStamp(0.3528730960983055);
    msg.setSource(64623U);
    msg.setSourceEntity(234U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(102U);
    msg.op = 141U;
    msg.goal_id.assign("QOFGTYXCJPASDBDNMILDTMTUBEAZVSIHCDAMBPQPILNYUQHKPHHK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZRBQVNSRCKFRKULMDVZOOGZZMLKSVROHBXCSKROCGEUICZNLTLTIXVWSGFWOHFHQATAWYEUYFPGAYBBLMSDXPEPACNFIARLOPJNFJTNDRLWVDSEBJBEXWQCMINICXBDIHKYLYSKVEOAGGHTVPUETUVGJDTDXC");
    tmp_msg_0.predicate.assign("HQENQLHYVKNPYQGRLCORZJPUYNUSZHWPMBOOLWUFJMXTQUKANDBGVHGRIYBTACWCHMKBULIUQZAOVVMWCMEDEFOFSCKPWWKXWIIGGJPMXNKDPQSCKZCWTBPOUQRFNCZ");
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
    msg.setTimeStamp(0.5657685867394294);
    msg.setSource(30782U);
    msg.setSourceEntity(96U);
    msg.setDestination(26283U);
    msg.setDestinationEntity(134U);
    msg.op = 119U;
    msg.goal_id.assign("UHRJSELWLRCTWIZQBIGQEANZJYVNNZJXDRJEMCIWMWKHKJF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FIXTLKXKMOHELSECHBFYNNIGMGWAUJKVMTUOGDGJORVOMWZCBHFEQFFXTTQUZBTNKPTIWLCENKHXDCHWAXJSCAULQFPPVVYLHULRNVBRFNQIJYUCPOLAIOXNOIKKKFUIJGSAOEREJFSLADCMSNJVYZMEWAOBQZWQKDUZVCMDDBMZYHPZFPKSQWHPYQHRZZVMBYDIRGTATHACEPIYUDOGBSETPDNAEZVJBCBMLRSIQGUJWRXNW");
    tmp_msg_0.predicate.assign("NKSZYXWIRAZMFKKGNSURYEIDHSXZSTAQXVPEMAQLLRDPXECRQGBVG");
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
    msg.setTimeStamp(0.463068963953045);
    msg.setSource(46085U);
    msg.setSourceEntity(72U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(11U);
    msg.op = 187U;
    msg.goal_id.assign("VDLNWHLUSCPJRKAMZGSYYWEHUMYVQXOKQBPIQDBCORLYCMVHHADWTMPODJIFZQRYNQPQGNBVWMZWGJMISAOLETMKT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KTPNXINEWTAJOBYCBJDONZXDZOJZMHDBPCQSTMLZWDCCIPATEDNTAMMRKDAMBSRHKPFULAXOVEOFWMRQEIMFJNYLFBFNOWVOPEWLLSJERYSXJGIXGUIJGAHSXSKYFVEKQRULNEIISNZTKYYVKQUYBHEFRPUONZIHANQLMSCHHICACXCVDAVZUHQBFCWJYZHUQTKBQCDGVUMUKGGWGAOVGYROFPSPZLHRMSX");
    tmp_msg_0.predicate.assign("ERBTTFLUCSEXROSIQWWOGUFYOZVHKSVPAQPDGYPPIMQMIRYJDYTCWDLDFXSNKWEFMWMBSODMHCWCKJQAMXIFPZODBCARGOSBOIEFZIZCVMGARTEMOYZMCXMAAPFDLBTQLNPKVDTRRPCOJBNHXFEJNPBVGRTI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NLNXRSDMUXHPYZREKBSDJGOLSVUDMMBNNLERYOGRZFNPTLUAMCOFRKKTQJXZUHUKSDVFSVAJWYAEGQYCXQTGJVPVJRNAKQOJZLKHEICLDGMPFZ");
    tmp_tmp_msg_0_0.attr_type = 168U;
    tmp_tmp_msg_0_0.min.assign("SSMQMOYLPZPWJOEFOSBFPGSLKRVPUPILGWSNIECVGJQACHUEZONCJCKPVBIFCNLIQUXOMTKZALSWUJSAPTVCKBKIBAXRFXGTMVANZNKWYEMBEZHOEYACWYBLMYTXSFKJLRQTIBAINUERJDXFKOLZGOYHNEHWGEAFGWBFVXEHXHVSRQGNWQJCMXZGFLLDHUIRQJTTZDITTDOY");
    tmp_tmp_msg_0_0.max.assign("GTIHQOMVOKFUQQUENVZFWKPNKGJJKTFKFNOJENBYLWVXWCREXDSIFHWTFTLRUBGMGLVBZRVIJJZRGRSZHLXLRZPIMKMQANQLDSOAZQUYYDPYRNVIJHIPQYUPEOKAXMSPLHOHFWCCDBJIAVPMXAODBVJIJIGBDWLRBYBAQYPWMUPCNSCHVUBEDXOZNQDTDANMPBOZEENXAGMXTXXYSAUYQTHTTJLSCEKEWAGCUFCZGRWKYCVKRFMZGHOSIECS");
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
    msg.setTimeStamp(0.6858322556255296);
    msg.setSource(22392U);
    msg.setSourceEntity(9U);
    msg.setDestination(61205U);
    msg.setDestinationEntity(200U);
    msg.name.assign("AZKEXJMWFNKCUTFWLJRFILDGOBYOJMKMWQLSCIVZXYRKSGLREZBYCIKXYUGTPCPNUHRMNJZMWSYBZKHLGQEQVHODOHARNXDWLHCGDFPRTLFGHOWNXUMTUFXDUCZSOLIKVGENFAGPSHAEMEAXPXWZDVQRHDBIKTJPIJTORNPMJBVIGDVSPQTFWCQPMBBIDJAOFWKUYAXICNVBNJRAIYBSOEAYCKLTVSETSNBQHWXGYREZFTM");
    msg.attr_type = 93U;
    msg.min.assign("ZAKLMJVHTQHJWCNQKTPGGAXTIYZUOBKBNFGQEQGTLMQSWQELHSFRUE");
    msg.max.assign("MOVNIZKJYJORORBWCRUHTDQJSZQDGNTKDPBDYGHRLUZPXAIVFGXVKSZEGXJESVFBGEHZBPCVFYPMFSNQLPINMAOXTZUVLMXHLQMQEWXBUUPPKTZRCOQSNZPKMMQJLCOCFOYJDQHVWNTBVTCXUXANJNBDJWKRHHLGXOEUWVIQOKUNWUKAEAWMC");

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
    msg.setTimeStamp(0.577794677560679);
    msg.setSource(42467U);
    msg.setSourceEntity(77U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(206U);
    msg.name.assign("CUOEYRKCUUYXTGXXOCRGEYNFKIBGCTIXCFHQEUCDABILIFCFTYADQSWLPMKRLCYHRASBHAFOWCXBXTLJGTHKXSAVUKWJEAMQQMIDBASUASVHZCNJDXWDZKTVSNFOEHZVMFFYEWGZMSPRDIVRGWNHENQWUVWPIHQREIGPOQVPNJKVZWKBBPTNQJIIFMXLSYYJGJEXKOZRPMUNTWSBYLGGDAARVM");
    msg.attr_type = 7U;
    msg.min.assign("ZTGDRTBSFJFMNVHOMOPGQUCVOIOZXEIYKPOAWCNRDEVHHXULPBONATILXLDWTOHYVMVZEUDFJHBDMJYXUAGESTPRHRPTINCDNSYSWAUFJMINKKDRXEFBCVBNZZFIVTROCRRPCDMXCPGFQWZALGAGYSNBLEMXRQAQKTWYEYCACAOBXKULIFLGWUBZEJYSWHNFUGKBQCSKLUYAHFWSLMDKXMQREWIGJJHIVMSYKVBSPNUEXJZOPQLPGVZD");
    msg.max.assign("BBKUFFCPJRHGIIMIGDBFCRVCLEMKINQUORVLQYWEODTPCMWZYDHWPPBGCHQCYAMPSGYDFUAZQVNCVVPRZOGZVKLROXEUKLMLHZSUWKFMHJXLFXPBNDRFQEXBQEQTMJJEPDQOXSTIVVSA");

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
    msg.setTimeStamp(0.8534852059949334);
    msg.setSource(9267U);
    msg.setSourceEntity(138U);
    msg.setDestination(52885U);
    msg.setDestinationEntity(219U);
    msg.name.assign("HFTKILRDVJPNSFXVTXKNWJZUGSHEVQEOTDMCLREFUKQKDDOMSQKOJIWHRQWBEZUJSCVJBGYOOAVMJWEFYISLYGGRXUMBMAQXDVZRGSYNCQBLUPKLGFAUHKPIXSTAMIFERVMYZZATRLYDBOTXXFX");
    msg.attr_type = 221U;
    msg.min.assign("GLUFJKMPDBBKAIUPLXCLCUIYVJAFMTNOQATOYJSAVQVYYWQBDRLDATMESJVJOJBZTBRQFC");
    msg.max.assign("CJEJYLNUTRMIHSLXWGFNRODYYVAOJGHPWFRYKHSNPHXIKMYKGLXUZDTAFQYRTNWDKSGKZGLVANCEVWBORYDLOBIPWMCMBCTABMYAHQFDEELYSGFGAPVFGPKMVQDAZEBTJIOKSXERUBTATUZGOXZHSFIZQKSIHJOQFMEKANQTSCBTSIWPXRPBSCUJDOZFUHJMQEUYDTKBPLOHXIXORNMAVJWWWLRDBHJ");

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
    msg.setTimeStamp(0.9871756212700616);
    msg.setSource(4038U);
    msg.setSourceEntity(244U);
    msg.setDestination(58098U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("PZEWNDFYUVIRLVIWJVNEIOPFZYQKMCLRGQKYFHABCDUKPXSOASMYXMALPZGHSBCVTOWGBXXVMTNPYQSDQLTTSCJUQUCEJOWFVAJGAQWNKFOJGBKBRSHPRTRXNRTHMKFEOPEEYGIVWRBNGQXBWYVSKJMPBHURYNCFELZDVNDNYXHAZQRAUMHDVOHPLTMYTIJZTUXCCDTRDHUBECAFLWWOOGJEGLKMWJQKDZXILXGOZZHAFSM");
    msg.predicate.assign("KTZDGSLKQRCZAAZPYUTOQTJPOVHHMR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EDKCEFCXKESTYDTCLZBUNTHSBTBGZMWHSIWFBPZRWVPRSNTQHUMFOMRAIPSZHKFAYGEMHQGCNFHUTOOJBSZBOKWXIRCNZLIKPHRADHSIIKLGQAPOELXFOJWPAVVBLYYZQUBBZHOUJQJKEMMGOQAQUPCEVXUCGWWIDXMVOPYIGAXYKRUAEKCGHJDOZGX");
    tmp_msg_0.attr_type = 64U;
    tmp_msg_0.min.assign("NHKDKQGVFZJMGXCBMFHUCWGWXKKRYOAXOBUYEAXJISOHZRYGQQLBZIFKQPUYXDOBAVESQCENCCSWMSJFBQVLRNJEVTPDUOWGIYTTWVPHLPBUMRXWOYXYJDORIZ");
    tmp_msg_0.max.assign("AKBIJJZDEYYBOCPSWRNEKIDJKIUZEUONOAEMGVPRKMFMFOYHKGUOXFRB");
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
    msg.setTimeStamp(0.8352890987617864);
    msg.setSource(39104U);
    msg.setSourceEntity(82U);
    msg.setDestination(61643U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("VQFNXEFLXBRLVAZVSEGWLFUVNPYEDOHPUZVDUCPKRDMPTIBMLGWISQTZYXT");
    msg.predicate.assign("PYDEWSJLRARPMLCLPKDCDBYGWKJQWJXOQBNWDPMSIHUJDWKYYRZARZZCHXP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DWZADBOWVZALIVFUJPZVXPIMVJYQRKCEWNKRBZZILATBSFOFEQJIIUQLIKJEAOAMPLLVGXGYBEXUXQRPLHFXRBHUHMURQYKZXCSDGONPQFPEKFFMNWUCSWQNFRFCLWVRVHNHRD");
    tmp_msg_0.attr_type = 12U;
    tmp_msg_0.min.assign("GWPYFZXQGBL");
    tmp_msg_0.max.assign("BYPWYCWVBCALKHINFAHQPXLATMAFXGEURGJBMKJIWHUXENRZGCSZCCSUFJHFUCQTMGUSGIYJYBDOOEJYGMENXQKYDROQEKGONIEWMAXHWAVOSYIEMNVZRBNOGXXUJTAZYPTDCRCODNJZRUFOQTAZPKWKLHFLPISAERLEQDWBDDWXMUMKBGDSHZTWFFJRVHTCZJBD");
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
    msg.setTimeStamp(0.04397242793791656);
    msg.setSource(34285U);
    msg.setSourceEntity(233U);
    msg.setDestination(10097U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("MMIJDTAAIPOBEPEMKUSHAVXFOCLGRXMAORAJJTHTNYGVAZBGPOKABWHUDDBFSBIBWYNLZKKXCRVSKJLRQPZBTFYCPYBXQGOQERGTVEWGCUPUCKWDYYHFORUVQEXMPLBNC");
    msg.predicate.assign("NEQTDCTUJULNBLPLBJETVEDGQKPCWCTUIUMSEEOJBUQDHMKTWMGSMZHTEZAKXHERAXOCSYIXSQITVDAJHDLMVONWHRKFNYWYQSFUIVSLDRBFAHARBYUOWGDTOCIFZIWMVLKCVWTQKIROGOBOPVOPCULQYEDFKGJVXNKCJJMOJWEXHNQFPRYBZRGZNPQAXLZFNFSBMYRACPZXDHGMHSDCPRFZIANBZVWSAPUIVLWXUEAYMBGJTY");

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
    msg.setTimeStamp(0.08805950948083674);
    msg.setSource(21440U);
    msg.setSourceEntity(133U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(126U);
    msg.reactor.assign("IHNSAYARCLUJJBCPCQKBGSYRQWQEB");

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
    msg.setTimeStamp(0.12386234293048126);
    msg.setSource(63653U);
    msg.setSourceEntity(222U);
    msg.setDestination(52635U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("ZGBJZRCSITRAIDJRPDHWKYTUYJQUPETNFYQIWXMUBAKDQJLOXQLPLJNTUSXHDPCYFZFVRZMTNLGRFFWGJULPAVOUDDCRTCJSXQINSXIERFHSZCMAFEZKNXHGOMKPUPYAIPSKQQWIXJMUYFLNNGSWSPWARMEGCZ");

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
    msg.setTimeStamp(0.4529117912890791);
    msg.setSource(45094U);
    msg.setSourceEntity(26U);
    msg.setDestination(37146U);
    msg.setDestinationEntity(182U);
    msg.reactor.assign("PZWTUFFEHNCQQRMOSZDYDPNFEIKKYVOMEJHFMHUZAKYULPXBQCVSYQTGAWCZRDTZISFUXNMUPKJOJKGTVCOMLTHBNXYIWFEIIMFGLUQGEPNAIAHSHGLKRDZYLJMJQTFNRXTBICVBLISDVXYQDBWKGASJOLEVUWDOYCOPURZDGEVCCRPBLVM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EMTSJTMJAFILBRFEBIOWBRQDXLDRZAAMVVSBENQDUBHLFCYWLLVSUCPFAPCHHTYDPVWMHIFBXPZFOENGJMESCPLKHGWKNCXZTFJKDQJEODSKSFYRBOIGPJZTJHCVUYKQCWFMWOSNGGUSQEBGIJUVRJYRICKXCPBHDBWVXHOQYIRATYVLVMUXQMTL");
    tmp_msg_0.predicate.assign("KWZMMUHYFQSPVZITDEYOGQSRNTLQJUHTJQYQMCPSIGDJXMTWPCUKETIKVXNQGHWWQVLNHKNRRALKGKIJUWHWKETULPXVNXEXPMIVIVXWRRSIVLACBSOYIGANMDABFKDMRQYCAQVPFOLUXNYYOKFEHRNUGMXEEVCJBOASPSQJYHYGTDSMZWZGTBODCWEIOBDBAA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YFVDEIIKEJWSXWMRUMBZTHBZRVXHBXEULMGHTCDSWQLMVTELDPPOECQRWOTBCDJYBQKNAPNNHZK");
    tmp_tmp_msg_0_0.attr_type = 208U;
    tmp_tmp_msg_0_0.min.assign("TFZWKLMSRXRXWWYNGQOQGLQCDRAWVBYDWXRVCDOSDGGZJIGCFVANXHKIQBDLUJEVFHZAZZEIMQJFTCFFNJERIVNLOXBWWHLOMDUEQVIUYUCXPHNDENKWYGJBHBVVKNLVZOQYFHLKFBAQVTTDOMIERZYCPZBNKGWNSZDXKMGKPRLPAPGUFUSMPBHJLNDYJTWJ");
    tmp_tmp_msg_0_0.max.assign("KUHSIOXBRWTFQTTJIRCGFUBOJETJIKFKGUDDTPBGRXHTLOTAXUHZLLAMERHLCDAGYJCKSLEUOSISXWVEAIBCGWVNBKXVGMVLPJBOUSCMYWNQBVZVUZPNHRFSTFQIYFPPYWUVREZZSPGPIMHZMNTINVQQNAQODSRMEYSAAFKEUWBVMJQXPEHLNBICNBNZHQWCMJY");
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
    msg.setTimeStamp(0.6697378884186719);
    msg.setSource(58917U);
    msg.setSourceEntity(152U);
    msg.setDestination(14857U);
    msg.setDestinationEntity(79U);
    msg.topic.assign("UVFMPCOKLWDXCYXDCCYUBTIHXNIQWJCNMLSXSKKCUENFEIHSJDZLZRXNPQLWSHY");
    msg.data.assign("GPFCWOJHSFIROJWCIWLYCXYHGFEKNNDLELYQMSVBZEYVMKXJPDDSKELWWHMMUYZPJKPNIAHDYXIOKKJHBHSH");

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
    msg.setTimeStamp(0.1631165184548311);
    msg.setSource(23869U);
    msg.setSourceEntity(89U);
    msg.setDestination(63634U);
    msg.setDestinationEntity(155U);
    msg.topic.assign("HQPVGBKNAOAXFJCOCSMLGLIRPPBPIOVJBSJSDNSGXBBCQUZRHHQSOTHXHKFDGYCYFJQELPDAWVEQEAWMMGTRPILIUMGFCMLFLZHXIMDNLWNMRNYBWUWDKVNJULKNSSWKVAVIVHRUXCHYPQOXGSOTGWKUTJLYDHTYBEGIZWFVFBHUYDEZACNDTKOQVLPNZDXQEFSJAJEEAKIKCRZYMWTPSXNFXZCJQRYUTVUJZQDUFMTBYRPMBEOITAZCOW");
    msg.data.assign("NCINESFAYNTXTRZKAKHFKASDPYGUKQRWBCMJSMZIPOGXYUIIUOHOMAQXXBDPRLEWVQTOXCGGCHWMQCOZNWKRLZDOTRZGTMGBDLFVIVURZBCCUHGLGQFFSQYARBKLVHNKEWPLTVDUTFLVYPAKDHSVNTDNULBNOAZSETYKJNZP");

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
    msg.setTimeStamp(0.47002993763446477);
    msg.setSource(29797U);
    msg.setSourceEntity(222U);
    msg.setDestination(32330U);
    msg.setDestinationEntity(68U);
    msg.topic.assign("VSKUXGRUFNCFSEDNIFSULEPNAKPVTNMUVYVWZZZEGDBJXGLDUOHRJKWAXYJVTIWALKVTSMNGJDFCSNVXWLPMIKMPTMHPGPFWIQMQUCMORJRTVPCHSHGAZLLWACOOTGAPX");
    msg.data.assign("GXUDFMSJHMHSHFUHQOBICWAMWZSVOKEFDVZOTJCPSRGYXIKKAQVEHZGMESBEOQTDEBVVKRXOPMSSTRHJROMKNTL");

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
    msg.setTimeStamp(0.41156829587563826);
    msg.setSource(25428U);
    msg.setSourceEntity(55U);
    msg.setDestination(64186U);
    msg.setDestinationEntity(203U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {21, -49, 27, 53, 0, 126, 22, -37, 38, 66, -26, -43, 18, 24, 79, 43, -111, 92, -28, 119, 84, -101, 59, 103, 86, 16, 96, -44, 66, 24, -109, 78, -31, -69, 87, -63, -101, -53, -119, -55, -55, -116, -104, -6, 41, -23, -89, -29, -125, -34, 72, 91, 53, -11, -89, 82, 37, -106, 26, 75, -15, 24, -31, -45, -62, 62, -1, 87, 47, 118, 34, 50, -46, -17, 93, 126, 93, -47, 62, -42, -57, -92, 46, -81, 80, 22, 20, 8, 69, 104, -85, -20, 0, -89, -38, 70, -69, -31, -83, -24, 53, 94, 23, -73, -102, -26, 81, 82, -6, -108, -91, 72, 119, 66, 6, 106, -91, 125, 124, 49, 56, 99, -11, 36, 45, 40, 31, 10, 91, 102, -23, 59, 51, 13, 115, 32, 25, 67, -6, 23, -65, 109, 27, 55, 23, -9, -9, 108, -2, 16, -87, 122, -104, -111, -99, 100, -128, -13, -17, -121, -46, 3, -107, -14, -44, -118, -35, 10, -5, -72, -69, -114, -36, 4, -121, -112, 55, -2, 15, 15, 121, 76, -56, -40, 45, 7, 38, -38, -11, -22, 99, 51, 9, -102, 124, -128, 102, 39, 51, 125};
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
    msg.setTimeStamp(0.8850088943154968);
    msg.setSource(55384U);
    msg.setSourceEntity(51U);
    msg.setDestination(42503U);
    msg.setDestinationEntity(244U);
    msg.frameid = 98U;
    const char tmp_msg_0[] = {-38, -68, 66, 31, 69, -22, -64, -120, -27, -9, -22, -94, -1, 76, -123, -86, -27, -59, -41, 77, 94, 5, -67, -42, 56, 54, -95, 74, -33, -108, 1, -72, -107, -107, -29, 88, -55, 30, 79, -35, 50, 24, -101, 58, -122, -65, -26, 123, -58, -116, 89, 114, 12, -26, -93, 86, 29, 14, 0, -34, 26, 121, -51, -8, -59, 56, 106, 65, -60, 5, 20, 46, -119, 100, 118, 28, 62, -28, -100, -93, 68, -35, 38, 120, 98, -38, -114, 22, 56, 0, -71, 50, -66, 122, 125, -114, -76, 105, -87, 87, -28, 47, 56, -21, 85, 81, -61, -109, -63, 113, 59, 71, 95, -28, -98, -48, -35, -117, -99, -103, -16, 60, 120, 125, 112, 124, 104, -128, -3, -69, -65, 48, -36, -36, -57, -95, 0, 116, -120, 5, -27, 111, 7, -48, 85, -93, -48, -7, 15, 0, 53, 56, 119, 50, -45, 33, 54, 17, -50, 7, 87, 61, -81, 102, -22, 20, -83, -2, 116, -46, -60, -92, 110, -40, -53, -57, 8, 19, -98, 87, -22, -51, -64, 60, 90};
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
    msg.setTimeStamp(0.8909157481735989);
    msg.setSource(58526U);
    msg.setSourceEntity(203U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(75U);
    msg.frameid = 41U;
    const char tmp_msg_0[] = {-52, -81, 117, -97, -100, 108, 106, 71, 84, 43, -99, 15, 109, 7, -46, 5, -28, 86, -2, 83, -95, -87, 78, -123, -9, 111, -38, -67, -17, -125, -55, -121, 26, 4, 101, -114, 96, 28, -72, -38, -104, -36, 32, 74, 104, -42, -115, 117, -122, -27, -96, -121, 5, 89, -100, -89, 108, -16, 44, -4, -112, -8, 18, 57, 1, 90, 9, -85, 83, 35, -81, -30, 21, -120, -103, -41, 28, -62, -125, -30, -66, -107, -123, 77, -46, 52, -55, 67, 64, 62, -51, 68, 21, 25, -85, -2, -14, 123, -22, 45, -107, 46, 50, 117, -40, 66, 52, -17, 106, 126, -116, 62, -58, 48, -49, 0, -105, 24, -90, 45, -97, -100, 94, -38, 115, -26, -55, -47, 101, -128, -123, -31, -99, -98, -54, -46, -126, -114, -68, 2, -51};
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
    msg.setTimeStamp(0.2105530915972188);
    msg.setSource(43515U);
    msg.setSourceEntity(71U);
    msg.setDestination(4925U);
    msg.setDestinationEntity(83U);
    msg.fps = 205U;
    msg.quality = 206U;
    msg.reps = 77U;
    msg.tsize = 85U;

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
    msg.setTimeStamp(0.9558377245087311);
    msg.setSource(29251U);
    msg.setSourceEntity(124U);
    msg.setDestination(21520U);
    msg.setDestinationEntity(92U);
    msg.fps = 203U;
    msg.quality = 57U;
    msg.reps = 215U;
    msg.tsize = 65U;

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
    msg.setTimeStamp(0.8332444206022043);
    msg.setSource(8476U);
    msg.setSourceEntity(33U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(179U);
    msg.fps = 48U;
    msg.quality = 33U;
    msg.reps = 173U;
    msg.tsize = 82U;

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
    msg.setTimeStamp(0.9548584476042321);
    msg.setSource(42911U);
    msg.setSourceEntity(214U);
    msg.setDestination(50385U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.939538863127539;
    msg.lon = 0.8374856012827784;
    msg.depth = 188U;
    msg.speed = 0.34657408738575834;
    msg.psi = 0.8960024593242966;

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
    msg.setTimeStamp(0.2668219355783842);
    msg.setSource(13019U);
    msg.setSourceEntity(191U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.6554662649840469;
    msg.lon = 0.5285732682375562;
    msg.depth = 17U;
    msg.speed = 0.37180746649130625;
    msg.psi = 0.8385936779776979;

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
    msg.setTimeStamp(0.3285384727478944);
    msg.setSource(23437U);
    msg.setSourceEntity(165U);
    msg.setDestination(25837U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.06552370059803592;
    msg.lon = 0.0006915758433427843;
    msg.depth = 31U;
    msg.speed = 0.506571854562207;
    msg.psi = 0.7856468087750684;

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
    msg.setTimeStamp(0.5569456311148043);
    msg.setSource(4380U);
    msg.setSourceEntity(36U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(45U);
    msg.label.assign("JXNTDRIODGUGBLPAIZSXIWJPLIZKGRTWDFJONBFPYQ");
    msg.lat = 0.2990314505963668;
    msg.lon = 0.5737119365027381;
    msg.z = 0.00059522109270993;
    msg.z_units = 248U;
    msg.cog = 0.5844031448598346;
    msg.sog = 0.6449781540851115;

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
    msg.setTimeStamp(0.267178525454019);
    msg.setSource(31846U);
    msg.setSourceEntity(110U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(8U);
    msg.label.assign("MCQKCPBAQNBEWWMLWZHWUFJOHDEDLCBTQPYIKVTKSEEZQUZOSANJGLCIJNIKLHWJ");
    msg.lat = 0.7443216801064009;
    msg.lon = 0.5676027033274595;
    msg.z = 0.8528922928190524;
    msg.z_units = 16U;
    msg.cog = 0.9103035577171397;
    msg.sog = 0.7680914846689901;

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
    msg.setTimeStamp(0.06889198629108206);
    msg.setSource(13202U);
    msg.setSourceEntity(146U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(43U);
    msg.label.assign("FOHGKPXSBVXWOLHALVZPRGCPEYYWITGWUFRIAMSZOEBUDFLQKBNAJIMLHUFVEGIKOBBYDXOZKJIFKQKQPJOTXMTICYLIBFVXTVDSNNKTGDYIQAVYNWWMFHSGEJWU");
    msg.lat = 0.14129539430120208;
    msg.lon = 0.26725638456373924;
    msg.z = 0.06554636095761623;
    msg.z_units = 232U;
    msg.cog = 0.9611363853221594;
    msg.sog = 0.4158567612917331;

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
    msg.setTimeStamp(0.4111468780805029);
    msg.setSource(40432U);
    msg.setSourceEntity(174U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(209U);
    msg.name.assign("KUAFMJUGXLRFXMHPECAQKDZFEKVELTPFZHPVDIOKYQRUIRPOURIQZJLCWWEYMJPXGDAFTJZRKOVIDTZCSUNPSOURSJAPTNAOWBGMMWYUIEHALBH");
    msg.value.assign("WKTBENSKIZVQDBFOVYNEJPKRDHCNOXVUESNZTIORNFPIYMUWJBLZWEWDPTQUKUAAEJSLVNRDIHFACTZGQCRGQWPCXYVWCKLNRGXXFWCGVECLFZYLWOAQPHNERCDFVNURLQEIVROYXYUWJIGXPUIOAFSIHBHEBAKTKHJGHGIPQDJRPPADXMJHBMQXEJUDKULZDSGSJFSDQTYHBYXABZRCQSNMLOAOTPZLXIYTYMBLHTMSWVGUMVMOM");

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
    msg.setTimeStamp(0.31465624446811946);
    msg.setSource(58546U);
    msg.setSourceEntity(92U);
    msg.setDestination(39790U);
    msg.setDestinationEntity(69U);
    msg.name.assign("AVPAGEIOOKGUJMHLNDWCALJKGFOQOGLXEPSTZZXAXTBVDZXHBLUWYHPBSHPJVWXMJNNGVUISYAMSOFXZVCAUNRTIQQPEJHEVZZDOFCHUMWSKDUURPBEJAUQLHRTINFYMKRSFUISXIKFJKZWYIKMKRQWHJBPMEDSCAXPYTNGPYWDYBMLOG");
    msg.value.assign("HLMWUJIWSXIHSZTNKDHYJCXBEKGGUJJLMZRDJFMZDDGCCCHMCNONMZ");

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
    msg.setTimeStamp(0.34492825349216305);
    msg.setSource(26955U);
    msg.setSourceEntity(63U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(10U);
    msg.name.assign("LZYJHRPWXSKJRNIYJUGGKQVMNYKLGMKWPEGQBISVPLHIAURUCODOPTXHXCSCMYVYFSWRXBQWSWHHDESMIOJWEKWCKXJUTCNSSDMIJUBZYVQDDHXFFORXUANFOYJHNFLDVVGBO");
    msg.value.assign("WSFAVGULUKSDZIXLCLJCMTQZLMNLCRLMPSHMUGBPLBAMTOKFPWOWIHVDNJTGWDGDMTJGNHQAAXEEDVTIMSGRBQTFRXHOOBJQVJGSFYVOTIBEVLBJERKUEXXCLNPZVCICRAYEEFUFEYNDYJAFUQWZZENV");

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
    msg.setTimeStamp(0.8485479369729633);
    msg.setSource(24039U);
    msg.setSourceEntity(236U);
    msg.setDestination(46383U);
    msg.setDestinationEntity(224U);
    msg.name.assign("RSHWQEQZVSAPULYBOFNHDVBXYXMOZLZWNPAVSIDMSSBUCAZSLQQDGYOGNVRXPKRNNDNVKUIFXXFYGEAOVYJZIUWUBPUQGXCRDAZPFQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RYDAVDOLTFKRXDFLYATCHBNDHGSTNIFUFGZSKNMOFOLMYNBKEXLWPWZRMZHQJEAZECWASKXHVGYPVWLSNCAEWJPATIAEHQYUOCBLWMQFCFARRZCZEBQJUEXVVBTRWBWRIKDMUBKIICEDAUIXGKPUUMBYYDGQSXPKJRKHUZPJOJMXESLMLOQHZDQGPJLVSOTDGYQCRUVJBURQNMVJZZNOWCBWYHIHJGNCAIKMQGNVTFHPFDXGETLPSSIPY");
    tmp_msg_0.value.assign("BNQDOTHVETLBHDDIYGMMPWJWCANABAVGNBCQVFEKZTAOHPUOXRNFPJUZSGLQOCBVXGEPCTIBWTRUSRMYVUBJJGKXOHZHQSEAIUOJMRZOELBIY");
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
    msg.setTimeStamp(0.7412002812037665);
    msg.setSource(60050U);
    msg.setSourceEntity(91U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(227U);
    msg.name.assign("UTLWVESGLFA");

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
    msg.setTimeStamp(0.37475487690016596);
    msg.setSource(48971U);
    msg.setSourceEntity(76U);
    msg.setDestination(35333U);
    msg.setDestinationEntity(228U);
    msg.name.assign("BBXEECDIZDGXO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HROSNQZDKGOLHIGXZBTAZUTKQKCJSVTACMNHDOVSHMFERKYRUBUJPASNVBFJGHYIBRFROQQQAGVRMDZEPYOTWUATWMLGBVYUTRCBWMXCWPNWWMQZEZTMOLSSNYMDGDAOJXTXFVIJVPZF");
    tmp_msg_0.value.assign("AUDGTABJVBNJPEGQGQUAJYFDJODNNZXNFCWIRCULCDPBOZBKZXNMVVDPVJPIPBFYWZKFJIDWSXLVQRCMEXAFDOEPMEKZNMMTBZRLMEGUWURQJQGXGYALY");
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
    msg.setTimeStamp(0.40785171477178006);
    msg.setSource(38346U);
    msg.setSourceEntity(76U);
    msg.setDestination(41017U);
    msg.setDestinationEntity(221U);
    msg.name.assign("CAHOKERXLLINHGEJVZWYRQXHFJOJKVDMXCBAYUKZ");
    msg.visibility.assign("KEJESJHIVCWGAHMZOGXBISAUKIRAWXXGUODTBXQUKOHWGWSVGGEMC");
    msg.scope.assign("ULFEWJZMQAGKRMIBUUYNFHWBCJPPOXFJTDRCAELJXMLVDHZXGGYULBJOXRAOGEIHAVLXEQDNZNMXHKGRKRMCDUVQCHCAQBHYZSTFWCNZGQUFQQVWVSONCFYIBUZEIDRIAPAMCOKLAJKTZREQTVBXYYSUWPPMEMSETHWBOTZSLQVAJLYLZIKPGDSQGLOETKEO");

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
    msg.setTimeStamp(0.33283627832724394);
    msg.setSource(59917U);
    msg.setSourceEntity(227U);
    msg.setDestination(3297U);
    msg.setDestinationEntity(2U);
    msg.name.assign("WSBDYTMYKDXMZIVHJNTHPWDVCUFLPENOBDEAMXUUXRQGJBWRUYRTXISFLSJYPXBADARNOTCIXKZHXYSOLHAFMFJKJMVZDMFFILYWCAQXLGCROKOWKSURDGQIDBHLLEYZQAOUVNEHSWBKBGPURFWOLKSOSYMNEMDSJCPVZJGBGGPMPVLZWUJLBJEQPJXTZNEQFNWQPBDGITVATGCVKIQYY");
    msg.visibility.assign("HGPUQYTPRZMWKLDRLQKDIIUWJEJWZKDBBCTIDNSUGMPMNDWPZXNNWTEOTPKRVBFLKIMAGUYEHARH");
    msg.scope.assign("RQMVSLBYYBGWELVZXTCNZDYGJARVUTGFDTNWTULVDHXQMKTIEBEFPKXZCPZGUOQSPSDNGOENKPPVMDQBRNZDJAUCIXTWJQFVBYUHLVCAHAZWBVOQFHOPZGGNAIXBEKVACM");

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
    msg.setTimeStamp(0.31993735368399845);
    msg.setSource(22622U);
    msg.setSourceEntity(147U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(110U);
    msg.name.assign("HYMVXXYCZBWWURLDRDWZKHZMXXZBBCTFLXRABAPBPQMTTULNZBOODRLSYEZUHNIPLAFAJIGOKOOPFFTCYOELNWQGKCQTEUENVDXRIVMSHTXGFECPYWXYVVJTSKVVPXRSQIGUWJGOGOGFIMVDHCJWQCFSUAHIIGYJDDAROPYITNUPQKWKJHAPMBAUGDESYNWNNDLFSUKLMEQOAMJFVLESCXQUZBHJKQEIVGFZ");
    msg.visibility.assign("OYJLRHAHKITEJUODGVJXSCWKAWZRZURKNTVOXBASYWJLUQCFXWWEHXVIWDZQXXLRZKAWCGAPTBMGPDQPJXBQFDOGOISUPHSCYDPSSPWROXNLYNFYDPFGSVNAGMACUJMKTPLAEIIPCICELRKTTDBTGPZBYOMVEXLORZSUQGZIMLYURQVFRCUBHVVWAADJGXBQZLMNRISKJQQOSZETDHIHYYZNFMFYQKBNMVUFTINGE");
    msg.scope.assign("ISMYYFQRILJ");

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
    msg.setTimeStamp(0.9442266780283896);
    msg.setSource(4886U);
    msg.setSourceEntity(181U);
    msg.setDestination(53493U);
    msg.setDestinationEntity(112U);
    msg.name.assign("IVRVHNCFFZGWMS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZWLPUWIYRMIIETOHCAKFKMAEJVBHTVEA");
    tmp_msg_0.value.assign("BGLTATUPOUJSFKLDTKONSVVOGROGAMXLVIGYBRHHVOVWXOJCWBUMJJRSTDROPXBCACWNDFHCIRNUAIQHAQPSAZHKUUMMRNYBPNTYXRUGWIBZJPNUWMQFEXFFPMUKJNCGLDEPCMKLIYDCRAGLXOIJJWHYSKHXIQQSIEMWZDIZSTZQHEWUXDNBYFVDKGYJBEMVDFKZNLLIPGVQYZZATZHBYDQFWTKPEFSXSHECMAGTECVFBRNAWRTEVPEYJLSQK");
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
    msg.setTimeStamp(0.26429423591349177);
    msg.setSource(27730U);
    msg.setSourceEntity(115U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(59U);
    msg.name.assign("VOYUZEYITQIFACDCFKZCONXWVXQBLTSRLIJEHMMMQMVZIXBATVKSLSAYWERGBGCDHXIOGYOPCKECQFAYUQMUCQAWSRUXAQBLGZBSBNLWHAPTFIHZGOGZYGFKUISPDFKUUHIJQHXMLJEGTKYRMDWBMDERSDYNOXXKJSPPWDKNMBQEJRWPRFNTHEUBJCF");

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
    msg.setTimeStamp(0.5388278470347133);
    msg.setSource(62067U);
    msg.setSourceEntity(242U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(143U);
    msg.name.assign("RKKWBLNYEXJVRXIOXXEGVJGBSUPQCQEJDQBOPMFULWWGMCIGSAMPTLRFXOJORCUYFYIAAYBACODNAGDZWZXAGNDIZWTMNAYVIESUTCMVEPZHUFJYQTWVBFHJBMEEJSLJIZINHKOPQQAXRLWPYZKHKDFNNBGAEYQLHABJEITXOKHUURTBRJLZMFISMQBYOFNRLVWEWNFHRIKWVKLRCDOPUSSSZHUCSUGVZDNCXVGDDTYKTZHCFLPTQVM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EORPCEMKVJUJLZXTNWFOYRAVZXPVANQEFPVZDRGVVNFQKMWRURNIBMXCPQFIMAUQFAGPZOYPQJWGOKSWKXRSTWELBDERYUTPEDHZLAOBAWO");
    tmp_msg_0.value.assign("AFZLTTJGJFAGQTCZHLVTLLLVVKCUOFENACXMUTWMYVOQKYZFSUHVHWHMMBNBIQRTOYTKBPFRQPJZEOBIMSPQLEIQAWEUUXAZNBGGYAHRUIYDBQHJXCKJVOVKGLXYXKFHQBWOGSTGBUSRNKOETEWOJQWJVKSYHSZDTBVGFZLNRNDXRHSWBFWESIRXP");
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
    msg.setTimeStamp(0.10685542625009536);
    msg.setSource(63955U);
    msg.setSourceEntity(34U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(194U);
    msg.name.assign("FNZJGVKKQMMRUMONOIRLSUJTHKFEYGNGOULAJUUXCBTHCSJMHBRMIKWVCDDDPUVBUEAKHNPNPACJFHJEPDSBZPFVNNOIHCAPSDAAVQTTXIIIQZWEXYCMSQAHGNC");

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
    msg.setTimeStamp(0.051984298029189135);
    msg.setSource(36145U);
    msg.setSourceEntity(31U);
    msg.setDestination(47583U);
    msg.setDestinationEntity(11U);
    msg.name.assign("JNSMDCMBWTVNTWWLAOWEEDEZFVOAUWLIBZRFXHELMBXBYCSFGIXKSRPOGKQLHEPAQRPEOVPGJOMKQIZXSYHPCVCYYGFJHDQPNHZLWWFDUEWQZAKXCSTOHUSSJANCGQQJMSUNNBPCLRTTIBAJXTRQTUVPROSNHVITGXZZDFANAQHPKKVK");

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
    msg.setTimeStamp(0.39027148579165905);
    msg.setSource(28457U);
    msg.setSourceEntity(30U);
    msg.setDestination(56628U);
    msg.setDestinationEntity(170U);
    msg.name.assign("EJSKINHUTVUGIVOBXBFYCDXBDEBRTNUACKLTWZHMEALXCOTZNPJYYOLHBIOFAESULICVSUDPPOMSZRCZDMVWOWMZIJTPNQDHYSNENILJFWGERNAGFJVMIDUZGYKJROKDFACUJVHCWGXKPMBEXWQORGKMCPSYQMBGJFCATDUAXRZLQIALJGELKTWFGPASYVMOIDXQNDHTBGL");

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
    msg.setTimeStamp(0.9393631017071195);
    msg.setSource(6793U);
    msg.setSourceEntity(91U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(21U);
    msg.timeout = 1848618645U;

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
    msg.setTimeStamp(0.911243669088131);
    msg.setSource(10845U);
    msg.setSourceEntity(48U);
    msg.setDestination(62267U);
    msg.setDestinationEntity(47U);
    msg.timeout = 1566721657U;

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
    msg.setTimeStamp(0.6376582113548893);
    msg.setSource(15255U);
    msg.setSourceEntity(170U);
    msg.setDestination(56568U);
    msg.setDestinationEntity(52U);
    msg.timeout = 887677280U;

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
    msg.setTimeStamp(0.27891986419073356);
    msg.setSource(47638U);
    msg.setSourceEntity(222U);
    msg.setDestination(17139U);
    msg.setDestinationEntity(5U);
    msg.sessid = 1214234200U;

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
    msg.setTimeStamp(0.09406152179795435);
    msg.setSource(31138U);
    msg.setSourceEntity(196U);
    msg.setDestination(12358U);
    msg.setDestinationEntity(88U);
    msg.sessid = 2598226036U;

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
    msg.setTimeStamp(0.028537141371228314);
    msg.setSource(35574U);
    msg.setSourceEntity(81U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(164U);
    msg.sessid = 1090133941U;

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
    msg.setTimeStamp(0.14535081376666303);
    msg.setSource(3463U);
    msg.setSourceEntity(110U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(112U);
    msg.sessid = 2179501829U;
    msg.messages.assign("BMVCOTGEZSFAVUHMMIEJVPOTAYNNWIDWZCHBEEPEZDSFV");

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
    msg.setTimeStamp(0.9618591217987467);
    msg.setSource(1445U);
    msg.setSourceEntity(44U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(240U);
    msg.sessid = 2925400075U;
    msg.messages.assign("ABRNSONZDDBETFVXCDKWMUUO");

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
    msg.setTimeStamp(0.7780291033852157);
    msg.setSource(20418U);
    msg.setSourceEntity(214U);
    msg.setDestination(5005U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1321432751U;
    msg.messages.assign("TFLXYYBOCEXUZZSJQNGUMISLFEQHKUKVJTVJAHCJSSSFNEJTIDWBBOEQBSCLNGDJGYZCVRUWCOGLBKPIMHKAFNDMVGGNPPAYEHOVWPWUEIQAOCATGBENUHDRDLTWJYCQVCZMXVHWNUMBRTHIQEPCPIJZMXWBSDGUVDZNKZQTBSYVZWSPRRHRHNUJAYANXKYFYOMYFKMFRBRITXL");

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
    msg.setTimeStamp(0.1878434978938226);
    msg.setSource(13796U);
    msg.setSourceEntity(115U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(35U);
    msg.sessid = 4069008224U;

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
    msg.setTimeStamp(0.870468352774268);
    msg.setSource(10539U);
    msg.setSourceEntity(252U);
    msg.setDestination(61470U);
    msg.setDestinationEntity(9U);
    msg.sessid = 3527757799U;

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
    msg.setTimeStamp(0.059367158002902376);
    msg.setSource(23172U);
    msg.setSourceEntity(44U);
    msg.setDestination(35943U);
    msg.setDestinationEntity(118U);
    msg.sessid = 3358832952U;

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
    msg.setTimeStamp(0.5125939057564156);
    msg.setSource(30203U);
    msg.setSourceEntity(32U);
    msg.setDestination(56038U);
    msg.setDestinationEntity(130U);
    msg.sessid = 1794767698U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.5768508030997647);
    msg.setSource(28811U);
    msg.setSourceEntity(63U);
    msg.setDestination(26878U);
    msg.setDestinationEntity(94U);
    msg.sessid = 399723504U;
    msg.status = 118U;

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
    msg.setTimeStamp(0.6655273137969367);
    msg.setSource(12166U);
    msg.setSourceEntity(1U);
    msg.setDestination(50587U);
    msg.setDestinationEntity(159U);
    msg.sessid = 954126105U;
    msg.status = 41U;

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
    msg.setTimeStamp(0.6096134278269308);
    msg.setSource(20383U);
    msg.setSourceEntity(89U);
    msg.setDestination(25150U);
    msg.setDestinationEntity(217U);
    msg.name.assign("JMAYUDOYCMGYHEDJDJXBZRCOKAJNDEYXSLXGMYPUHFYERXVCQHOMSZDCBAWPJBBEUFTSKGQPALZON");

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
    msg.setTimeStamp(0.7409716627347595);
    msg.setSource(62099U);
    msg.setSourceEntity(159U);
    msg.setDestination(431U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ZKCPOXCXTZZEKRKXTQNCDCKZZRNEVFDYQBKTDSNRVXINIWODYGQUFGGWMQXIOERGWGBJVVFWQIMYBULMSLVUJUAVQUCOGDSCMPMATQJKXYSTRPXBOSQOGREBXATVCIFLBSCISGFYTHYJDOTQKY");

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
    msg.setTimeStamp(0.3136605259620615);
    msg.setSource(45187U);
    msg.setSourceEntity(144U);
    msg.setDestination(55854U);
    msg.setDestinationEntity(18U);
    msg.name.assign("MPWJWZAKXPBTOYPOMQRKIZSKCOYYMSXAFCPLIFAUNOLTOWNJYHDOLJUVECNZMVWVFDTEOAWZXAEHPDLDJSKUKMTYTFAUBTKCZTGFIXDHLQIJYPHCMIABGGDSTXVGXEKNTNQXLWMYHSRJFLRAQEVKJNDTBHBYUPFKSQCIYILRFRQXWUBCAZWDSGVCNEMVXNVSQMUPZCPKUOFGSEPILJEELXB");

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
    msg.setTimeStamp(0.9598119713658733);
    msg.setSource(60874U);
    msg.setSourceEntity(12U);
    msg.setDestination(8035U);
    msg.setDestinationEntity(148U);
    msg.name.assign("KWNBFSTXFCAZUABUWDUVZWBNZJUYHYQYSMAEUCEUXXLDEFXTEVOLGWMGILOKQQPOAQHNWLTAJSEIJKVNLBELRRLHNDMORCROVCSXSQKFXFDBKMQJFTPJTRNVMSVIPOWAJPBPBAISPRWZJTN");

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
    msg.setTimeStamp(0.7030610237081709);
    msg.setSource(52759U);
    msg.setSourceEntity(42U);
    msg.setDestination(23193U);
    msg.setDestinationEntity(110U);
    msg.name.assign("RIJKUVOHWBEYVEBSSGBHYXQITDVQENAEMQPHNDUIUVFEFLQDZGGHSCFDRZGPCXLJXIGWQNOLTFJHJPKTUABRKQWCJGEUDONKANFTMXJAOMQIXAHVYSHXACVXYWLOZQWTGXTTSMPCGPCLSJIBJNRPFFBLWBMSEZSWPKLYNCUQUZFGHMDEJNOCEZUZYFZARBTCKRMLVKKXIGVROIODAAE");

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
    msg.setTimeStamp(0.428194078842715);
    msg.setSource(26046U);
    msg.setSourceEntity(61U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(116U);
    msg.name.assign("JEWZSAZZJTUDFPCCWOACRTVCUGRDIKTWJQXDSGAEDKZNLWGBXBIYHMVBHXIXKVQDFYMOEOVAPJPDKULISMVUNJAODYTGCZNNOECARHKQDBYLBWN");

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
    msg.setTimeStamp(0.5068866937315133);
    msg.setSource(28033U);
    msg.setSourceEntity(174U);
    msg.setDestination(13256U);
    msg.setDestinationEntity(22U);
    msg.type = 78U;
    msg.error.assign("SYXSQVAEJDNNECJUKFQFWYTPUVHCMNTLRZYHNGOGQXJNTTCCKRDZX");

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
    msg.setTimeStamp(0.0015044943351423257);
    msg.setSource(53937U);
    msg.setSourceEntity(14U);
    msg.setDestination(49334U);
    msg.setDestinationEntity(246U);
    msg.type = 232U;
    msg.error.assign("HXOPSTVWTKIQUMUOOBEGVEQNDLWHDGUZXVAHIUXMLWXAQPGUSHZACZCZTILFWTFVYRTSCFJZXEGOVWMDOJXZJHSTUKRWORSBFOQSMWODRDMUZTVWPHBAQDIXFWFMGJMVDTKWDLJIKLACJAQELABRRBQEYVANSHHURQFVTKOCPKJYIHNYBFEZZNOPCSNQDIGVENLBJYEQPFGPYCMMUPXRGBUCIZRKYFKNANKJML");

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
    msg.setTimeStamp(0.08114870224948978);
    msg.setSource(14876U);
    msg.setSourceEntity(153U);
    msg.setDestination(53945U);
    msg.setDestinationEntity(149U);
    msg.type = 80U;
    msg.error.assign("KVODYSBEEZWOVLBQENQCXIXTXXMPSYILVZRGASTWZYKSZRPWJKVHLEUOWOMTSMDAWINFRICJKBNARBAKUYUYSSOI");

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
    msg.setTimeStamp(0.4098895062661675);
    msg.setSource(36983U);
    msg.setSourceEntity(67U);
    msg.setDestination(22814U);
    msg.setDestinationEntity(173U);
    msg.seq = 50107U;
    msg.sys_dst.assign("QJBZHQFJATGWBTSJEU");
    msg.flags = 117U;
    const char tmp_msg_0[] = {34, -30, -20, -127, -64, -35, 41, -9, 8, -80, -37, -69, 124, -102, 31, 34, -61, 67, -128, -84, -88, 95, 54, 105, 11, 31, -48, -86, -75, -59, 89, -6, -110, -64, 54, -124, 90, -58, -68, 76, -39, -60, -69, -51, 39, -57, 114, 73, -90, -62, -83, 25, 126, -127, -82, -47, -33, -77, -1, -17, -95, 36, 122, -28, 60, -96, 68, 100, 116, 30, -81, -74, -53, -97, -82, -31, 122, -86, 108, -107, 84, -105, -83, 61, -5, 98, 1, -72, 36, 51, -96, 53, -51, -7, -64, -71, -66, 73, 81, -47, 47, -20, 20, -60, -58, 55, -51, 120, 39, -66, 3, -63, 14, 13, 107, -58, 100, 69, -113, -121, -5, 48, -47, -12, -99, -18, 114, 6, -93, -104, -84, 104, -52, 89, 50, -41, -19, 23, 77, 90, 112, -103, 105, 93, 107, -62, 110, 64, -7};
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
    msg.setTimeStamp(0.970940363316914);
    msg.setSource(3324U);
    msg.setSourceEntity(124U);
    msg.setDestination(28402U);
    msg.setDestinationEntity(165U);
    msg.seq = 5582U;
    msg.sys_dst.assign("KMHTRLKCYDSSPZHTRRSJHLTFZIZYAHBPDUAGYAZSIDMWEXIPHETXMTBDPNVWEZUTWFYCLMBGAFOCWDRAJXRXHLUJPGFRBXBOEZQWOVHHIUWCNVOSMJYLFUIBYNKGGLJJDQCUICYOFPGXQWKNITXVSMPJNEDKIJNJOLSAFFSVVNCQKRRBHMYQSBCY");
    msg.flags = 95U;
    const char tmp_msg_0[] = {101, -46, 42, 124, -108, -30, 25, -6, -105, -77, 72, -84, -119, 123, -80, 111, 81, -74, 26, -113, 93, 96, -94, -81, -40, -17, -56, 94, -26, -81, -115, -121, -38, -35, 1, 48, -47, 66, -54, -82, 106, 31, -103, -101, 61, 43, -91, -45, 91, 112, 4, 71, 19, -87, -57, 39, -118, 113, 47, -92, 105, -22, -24, 83, 38, -103, 113, 111, -97, -33, -7, 54, 17, -75, -123, 25, -62, 57, 117, 103, 61, 37, -30, -62, 66, -50, 90, -127, -54, 92, 103, -24, 122, 80, -126, -64, -11, -45, -48, 1, -88, -6, -10, -88, -52, 77, -19, -80, -6, 82, -126, -6, -128, -71, 93, -84, 14, 88, -82, -126, -39, 88, -73, 4, 106, 3, 42, 20, -64, 3, 92, 71};
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
    msg.setTimeStamp(0.14454608891540133);
    msg.setSource(12446U);
    msg.setSourceEntity(84U);
    msg.setDestination(22977U);
    msg.setDestinationEntity(228U);
    msg.seq = 60896U;
    msg.sys_dst.assign("GSLKYDGVFSAMERBLRRJKTWKHABJRVUEJOGOTZUUXAWGJ");
    msg.flags = 242U;
    const char tmp_msg_0[] = {45, -16, -34, 92, -48, 80, -73, -63, -18, 125, 60, 85, -109, 5, -80, -41, 98, -76, 111, -103, 58, -122, -117, -82, -68, 95, -44, -66, -100, 28, 90, -87, 54, 36, 66, -92, -116, 81, 63, -100, -70, 39, -65, 105, 81, -1, 77, -60, 115, 54, -43, 76, 72, -95, -95, -13, 71, -101, -108, -52, 38, -37, -76, -65, -127, -54, -94, -70, -114, -24, -35, 23, 82, -36, -61, -75, 37, -68, -113, -23, -118, 65, 70, -39, -58, -100, 39, -18, 63, 83, -110, 64, -52, 17, -35, -85, -11, -55, 99, 75, -13, -63, -27, 84, -35, -10, -4, -102, -91, -127, -65, 104, -23, 35, 6, -24, 50, 85, -10, -36, 69, -82, 90, 22, -97, 30, -54, -10, 11, 102, 70, -127, -6, 121, 65, -106, -98, -61, 97, -69, -121, -113, 47, 89, 113, 12, -125, -37, 121, 41, 90, 16, 122, 53, -35, 77, 52, -83, 56, -125, -33, 64, 12, 35, 20, -23, -33, -96, 115, -9, -124, 85, -112, -119, 67, 115, -128, -59, 14, 8, -111, -36, -30, 17, 89, -110, -73, 22, -118, -100, -18, -38, -46, 12, -111, 44, -69, 98, 51, 82, 41, -57, -18, 73, 26, 42, -79, 102, -61, 35, -64, 52, 22, 25, 32, 118, 98, 104, -26, 74};
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
    msg.setTimeStamp(0.09068201214358462);
    msg.setSource(27249U);
    msg.setSourceEntity(75U);
    msg.setDestination(40587U);
    msg.setDestinationEntity(234U);
    msg.sys_src.assign("VMMOMHVYGJNUBAAPXDDFVNULOTDOQHICQOZKXVUZYDUCUYEOWMSWPGKCKBKYPVXXRNQFRIDEMKHAILLPQIKUSFZXCTBTEQVYOZZLRXPTQHXYFALBNXXHAHWGGZICSIGWUWFVSNLJUNETXWIGRRMDAIMFBWRESZMDETAQNBVCEOKBLRFR");
    msg.sys_dst.assign("VUWSQBBOKJFVOAKQXVUQNRPKBGEXMDRYOUJWXCWPVIZCAVVJSISCADMJOZZRHSWLCDNESNTELJBCYBFGMHTFRENEOFZYHNSMBSIMTEYCVATZFXKIDGHHNTULAHKRHTDSXKOYRCRIAUEQJWXYHVYZCRQWZNIYGDGRDMGXTWFPNAQCDSQCMAIFIJNQPXLZJFAG");
    msg.flags = 12U;
    const char tmp_msg_0[] = {100, -122, 126, -113, 37, -2, -51, 96, -35, -33, 124, 54, 7, 58, -101, -45, 44, 29, -91, -53, 23, 18, -13, 88, -41, -35, 41, -106, 118, 103, 3, -26, 104, 41, 38, 118, 73, 87, 70, -23, -10, 99, 76, -59, 35, -51, -92, -25, -24, -62, -40, 117, 9, -8, 90, -11, -70, 117, 4, 106, 119, 94, -119, 50, 114, 53, 64, 0, -5, -98, -57, -3, -103, -38, -61, -87, -53, 53, -92, 84, -17, 32, -61, 5, -97, 8, -97, -65, 85, 115, 36, -109, 110, -126, -107, 21, 28, 109, 65, 101, 0, -47, 59, -38, 99, -96, -60, -88, -105, -39, 47, 107, -27, 77, 106, 28, -43, -28, -37, -52, 35, -52, 27, 55, -110, -88, -90, 61, 9, -79, -113, 118, 107, -122, 94, 63, -122, -48, 74, -40, 0, 106, -83, -118, -120, 53, -35, 36, 20, -19, 94, 2, 2, 18, 114, 9, -110, 24, 101, 33, 48, -38, 61, 18, -102, 60, -37, 124, 58, -78, 40, 75, 78, 105, 121, 111, 39, -105, -28, 12, -97, -115, -33, 64, 87, -38, -34, -118, -119, -21, -54, -43, -49, -127, 106, 61, -56, -104, -62};
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
    msg.setTimeStamp(0.5730771858177393);
    msg.setSource(49831U);
    msg.setSourceEntity(247U);
    msg.setDestination(22133U);
    msg.setDestinationEntity(89U);
    msg.sys_src.assign("GONLNLUYVLBHZBRXTEGSHQQRACIBSMKWYEOZFMCQBOJFQCHMMPLVWUJOBEKAZSHOIJMNHMIPEYBKZIXRUPVTBTCJKVOJTHLXPSRZLDTZPGTPSQTRDFLKAJVQQOHKDVWRIISYNJAFDREJOSENXNBOWKWFWYGHGSWHQXTMIICTYDVQZIMDEGDOYUUKEYYWKELPGXSXADDGCZUMCNFZNPCWYXCRAUBGUPLACIJGFTN");
    msg.sys_dst.assign("OFCBWHDABCLOWFFREDVPMBMZYJGBIHOISIAWGRNYPWLOOMNGMSBAHCIUJMLCKOWRYUMDFNSTEVTTVGXHTHBZYKJLJDVETTFDGGNURCVHMHDPIBSGQHICXMFBYQAXQQUUJXTVCAHZFUOQXMZARTXKDKMIRSUNLVEGUSKKRYVGDSZXFUAPSWJQJNLSZLPQQEEYOVCERPZNOFVNDKZSDLNCHQBRWZKEPKZPTOWLJPIKQA");
    msg.flags = 4U;
    const char tmp_msg_0[] = {64, 103, 27, -64, 60, -58, -127, 31, 53, -92, -26, 57, -74, -47, -123, 1, -66, 49, -124, 57, -11, 110, 64, 63, -93, -41, -8, -69, -100};
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
    msg.setTimeStamp(0.901382150334819);
    msg.setSource(17208U);
    msg.setSourceEntity(89U);
    msg.setDestination(48283U);
    msg.setDestinationEntity(111U);
    msg.sys_src.assign("YORJAHTQIJOJVCRDESUJSZQUFIEGTFQYWBMPBSKGGTPZDOPQCGMSUQMHZAVRSHNBFWSXRMJDRGRNOWUONUCMOMGKEYAKXPYAXLIQDVTRBZXECHEEFNQLFILVDPVDNGVYRR");
    msg.sys_dst.assign("QLOIUKLSEPHGKJPXYXNJWQBTMHYUJZKLGNCPCBCUXTBVXLGFFEIXDTGKVHND");
    msg.flags = 91U;
    const char tmp_msg_0[] = {31, 104, -4, -91, -96, -108, 126, 20, 114, 35, 54, -14, -81, -19, 116, 85, 28, 1, -59, 74, 122, -2, -14, -95, 49, -17, -42, 65, 111, 58, 26, -110, -20, 5, 111, -68, 126, 104, 9, 9, -28, 7, 53, -2, -122, 54, -1, -33, 93, 124, -47, 70, -65, 96, -21, 120, 25, -56};
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
    msg.setTimeStamp(0.6367606676100396);
    msg.setSource(20706U);
    msg.setSourceEntity(28U);
    msg.setDestination(60278U);
    msg.setDestinationEntity(85U);
    msg.seq = 57714U;
    msg.value = 244U;
    msg.error.assign("CBLTBECSJRGAYARASFZWVNUPYJNHMOXJU");

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
    msg.setTimeStamp(0.24221420372391522);
    msg.setSource(42638U);
    msg.setSourceEntity(30U);
    msg.setDestination(43013U);
    msg.setDestinationEntity(91U);
    msg.seq = 6878U;
    msg.value = 119U;
    msg.error.assign("RHDEPJULKOJXZMCZUGUCSHCFVUXEITEBIGYXKADBEUYPOVTOMKPTINLHKJIQHFZIVKQRLCIFAXQHMHRGARQXHZMJYXWDWSSRRFXALTZZVYOQLPEBKIKSBNCWAQKFTCDUMAULISACYKNOBNJPHSGGSZYGCFTOYNSDWBHSZUZFPGGKYOMF");

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
    msg.setTimeStamp(0.7627159087299381);
    msg.setSource(65142U);
    msg.setSourceEntity(164U);
    msg.setDestination(47612U);
    msg.setDestinationEntity(146U);
    msg.seq = 13914U;
    msg.value = 219U;
    msg.error.assign("EQLYGCTSFHBFWNVGMCLJYMPTURBPNYAZTOBSDHDZLCHHKOTIBOKIIJHCLWLKURKIGXHANRBXQTQMJZPXKATCZMMJGIOTEVFOVHQYLIVCRUGKEYWQQZMOFEOPUASVTIOWJENMWMSHLGXRAWSSJRQHLFLDQXUKZVRRGZXCAFYHTGEVUFRAKUEZNQFAZETVXSNZBCLDGWWAYNKDYSPNIPSWRFUJBDDFDQPOXXPBSPCUVWBMOJEPYIDDVJKYNC");

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
    msg.setTimeStamp(0.01257924029831281);
    msg.setSource(90U);
    msg.setSourceEntity(202U);
    msg.setDestination(64662U);
    msg.setDestinationEntity(40U);
    msg.seq = 1549U;
    msg.sys.assign("EZDYRTUDYGJBELRRZDFCMSBJXOOLCKEKITLCCQPKXIHVUZLFUFHBLVTZGEGDMWBUYOHIVXUCMJATVMQHJSDREUPGXDSABNSXOHZXJRQBKTOATZQSCUGFXYAIENZNUPWNGKVBOLXRFXYVZCOVRAQJAPLQUYDNVIOKLCFTDISKFXWEPIMIEIWRMWGAYWWGQASTRTBJYV");
    msg.value = 0.7472698973527199;

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
    msg.setTimeStamp(0.27174921256196805);
    msg.setSource(55903U);
    msg.setSourceEntity(28U);
    msg.setDestination(33242U);
    msg.setDestinationEntity(24U);
    msg.seq = 5565U;
    msg.sys.assign("VCLRHNEJNBBCVLHCFOUQPBICQUYRTDGUWPSWGLCBIEODTGBFKCILLITPKZLKIQRFTMMPVVRGRYKEEBFHVYZPKPMIZRGDUPWDZXYASKJWOWWTQSUJJXJDMFHDSXOIDNEQETZAAQ");
    msg.value = 0.854405261947013;

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
    msg.setTimeStamp(0.8303412865079357);
    msg.setSource(50163U);
    msg.setSourceEntity(251U);
    msg.setDestination(32455U);
    msg.setDestinationEntity(155U);
    msg.seq = 6911U;
    msg.sys.assign("EUFKZUBLJZTHGXPYIBQHCZAXUBUELMQFPJBFWYJCNMCKMHLVTTFESDKUSRGQERVRIJRARDNDIWRYVVFKNYMGBPOARCEPVRXQYBNYOOKEZHVIJOTFUXNWLBPBKLRAJMSISLNWZKEKRFYCVUSHBGYDONADQIWJUEDPGK");
    msg.value = 0.5030087450703059;

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
    msg.setTimeStamp(0.3520715316029952);
    msg.setSource(36071U);
    msg.setSourceEntity(44U);
    msg.setDestination(63677U);
    msg.setDestinationEntity(111U);
    msg.action = 228U;
    msg.longain = 0.7630155859846064;
    msg.latgain = 0.014434739778592665;
    msg.bondthick = 2423188972U;
    msg.leadgain = 0.38195592788470756;
    msg.deconflgain = 0.06273365180351864;

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
    msg.setTimeStamp(0.5619530024549941);
    msg.setSource(53180U);
    msg.setSourceEntity(45U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(240U);
    msg.action = 54U;
    msg.longain = 0.5723348548283297;
    msg.latgain = 0.6245601260774227;
    msg.bondthick = 212973111U;
    msg.leadgain = 0.06145000698224112;
    msg.deconflgain = 0.4569252499533214;

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
    msg.setTimeStamp(0.30299611608486376);
    msg.setSource(11717U);
    msg.setSourceEntity(96U);
    msg.setDestination(13591U);
    msg.setDestinationEntity(227U);
    msg.action = 208U;
    msg.longain = 0.027912910396965196;
    msg.latgain = 0.23318968474871005;
    msg.bondthick = 3004360632U;
    msg.leadgain = 0.813598141420734;
    msg.deconflgain = 0.9652216228840902;

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
    msg.setTimeStamp(0.6257053631160625);
    msg.setSource(32922U);
    msg.setSourceEntity(156U);
    msg.setDestination(34898U);
    msg.setDestinationEntity(238U);
    msg.err_mean = 0.7842672064912886;
    msg.dist_min_abs = 0.8263342534692172;
    msg.dist_min_mean = 0.4573041061351959;

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
    msg.setTimeStamp(0.5442776429924511);
    msg.setSource(33815U);
    msg.setSourceEntity(243U);
    msg.setDestination(65071U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.7208526801348174;
    msg.dist_min_abs = 0.12179222659162048;
    msg.dist_min_mean = 0.6630727764547163;

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
    msg.setTimeStamp(0.3318159773690049);
    msg.setSource(58713U);
    msg.setSourceEntity(22U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(200U);
    msg.err_mean = 0.927320780023579;
    msg.dist_min_abs = 0.6731651157717554;
    msg.dist_min_mean = 0.9072475828867277;

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
    msg.setTimeStamp(0.7711431338525228);
    msg.setSource(1999U);
    msg.setSourceEntity(18U);
    msg.setDestination(55647U);
    msg.setDestinationEntity(238U);
    msg.action = 73U;
    msg.lon_gain = 0.4904236017360165;
    msg.lat_gain = 0.4609159600249634;
    msg.bond_thick = 0.6871597625103207;
    msg.lead_gain = 0.422263313405429;
    msg.deconfl_gain = 0.6146795694658774;
    msg.accel_switch_gain = 0.4380061226960327;
    msg.safe_dist = 0.08632082556653375;
    msg.deconflict_offset = 0.7221224883179143;
    msg.accel_safe_margin = 0.06103775983464277;
    msg.accel_lim_x = 0.8478815856867177;

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
    msg.setTimeStamp(0.5223217850063295);
    msg.setSource(23549U);
    msg.setSourceEntity(122U);
    msg.setDestination(10695U);
    msg.setDestinationEntity(85U);
    msg.action = 23U;
    msg.lon_gain = 0.8389531780511669;
    msg.lat_gain = 0.5637529923908913;
    msg.bond_thick = 0.5725692907499466;
    msg.lead_gain = 0.7890853606787026;
    msg.deconfl_gain = 0.49110502696534686;
    msg.accel_switch_gain = 0.9788973359376449;
    msg.safe_dist = 0.17753539591576506;
    msg.deconflict_offset = 0.3653489357915277;
    msg.accel_safe_margin = 0.2693053285439013;
    msg.accel_lim_x = 0.9022412043227243;

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
    msg.setTimeStamp(0.5439804018530207);
    msg.setSource(17783U);
    msg.setSourceEntity(5U);
    msg.setDestination(30974U);
    msg.setDestinationEntity(123U);
    msg.action = 194U;
    msg.lon_gain = 0.41565999739049664;
    msg.lat_gain = 0.9470450373317747;
    msg.bond_thick = 0.14660947905412103;
    msg.lead_gain = 0.823920779763232;
    msg.deconfl_gain = 0.20084728499379567;
    msg.accel_switch_gain = 0.4473051080632713;
    msg.safe_dist = 0.26841279002966845;
    msg.deconflict_offset = 0.7851756290973337;
    msg.accel_safe_margin = 0.4626241290405767;
    msg.accel_lim_x = 0.4245497396404657;

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
    msg.setTimeStamp(0.03671003151740193);
    msg.setSource(42041U);
    msg.setSourceEntity(197U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(11U);
    msg.type = 48U;
    msg.op = 204U;
    msg.err_mean = 0.5973598273767243;
    msg.dist_min_abs = 0.7922377058923684;
    msg.dist_min_mean = 0.4519844368505912;
    msg.roll_rate_mean = 0.8220211437373324;
    msg.time = 0.5148849553351625;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 17U;
    tmp_msg_0.lon_gain = 0.5305164173146883;
    tmp_msg_0.lat_gain = 0.09508456140216881;
    tmp_msg_0.bond_thick = 0.6546917582645422;
    tmp_msg_0.lead_gain = 0.4804372393331586;
    tmp_msg_0.deconfl_gain = 0.628125015791945;
    tmp_msg_0.accel_switch_gain = 0.8933359846631832;
    tmp_msg_0.safe_dist = 0.27686147458601496;
    tmp_msg_0.deconflict_offset = 0.8235993053672559;
    tmp_msg_0.accel_safe_margin = 0.028870612461605494;
    tmp_msg_0.accel_lim_x = 0.43611602423739493;
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
    msg.setTimeStamp(0.49971401183267805);
    msg.setSource(44999U);
    msg.setSourceEntity(236U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(218U);
    msg.type = 29U;
    msg.op = 172U;
    msg.err_mean = 0.4858502950783452;
    msg.dist_min_abs = 0.5942712129441231;
    msg.dist_min_mean = 0.9457886964769348;
    msg.roll_rate_mean = 0.5107929540562491;
    msg.time = 0.4887922075061596;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 241U;
    tmp_msg_0.lon_gain = 0.5423108600280672;
    tmp_msg_0.lat_gain = 0.9611939119793708;
    tmp_msg_0.bond_thick = 0.7192647308258231;
    tmp_msg_0.lead_gain = 0.7940186343569998;
    tmp_msg_0.deconfl_gain = 0.5950323400552859;
    tmp_msg_0.accel_switch_gain = 0.17050928374633256;
    tmp_msg_0.safe_dist = 0.11766422151607281;
    tmp_msg_0.deconflict_offset = 0.25391731626303726;
    tmp_msg_0.accel_safe_margin = 0.27411766308841357;
    tmp_msg_0.accel_lim_x = 0.13693651160388376;
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
    msg.setTimeStamp(0.37217396305983685);
    msg.setSource(57514U);
    msg.setSourceEntity(148U);
    msg.setDestination(58901U);
    msg.setDestinationEntity(31U);
    msg.type = 90U;
    msg.op = 52U;
    msg.err_mean = 0.9748407698323297;
    msg.dist_min_abs = 0.452946446225569;
    msg.dist_min_mean = 0.06623530973426561;
    msg.roll_rate_mean = 0.04423876311608432;
    msg.time = 0.8492783997739577;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 67U;
    tmp_msg_0.lon_gain = 0.8274527834391318;
    tmp_msg_0.lat_gain = 0.6243501288086403;
    tmp_msg_0.bond_thick = 0.3607085691145864;
    tmp_msg_0.lead_gain = 0.5151485261830576;
    tmp_msg_0.deconfl_gain = 0.6751078543747973;
    tmp_msg_0.accel_switch_gain = 0.40412643679300664;
    tmp_msg_0.safe_dist = 0.5946695012138932;
    tmp_msg_0.deconflict_offset = 0.566780297994704;
    tmp_msg_0.accel_safe_margin = 0.474704832230769;
    tmp_msg_0.accel_lim_x = 0.8835548219986125;
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
    msg.setTimeStamp(0.6970297313692486);
    msg.setSource(7956U);
    msg.setSourceEntity(208U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(205U);
    msg.uid = 228U;
    msg.frag_number = 25U;
    msg.num_frags = 142U;
    const char tmp_msg_0[] = {-103, 111, -63, -11, -94, -71, 47, 45, 76, -58, 102, 17, 44, -87, 101, -64, 102, 102, 109, -28, 112, 55, 122, 57, -19, -111, 79, 101, -29, -4, -70, 19, 118, 64, -93, -1, -90, 112, 125, 115, 113, 115, -122, 60, -43, 101, 47, 61, -79, 29, 52, 53, 113, -26, 74, -111, -48, -20};
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
    msg.setTimeStamp(0.6223632592268421);
    msg.setSource(57U);
    msg.setSourceEntity(25U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(50U);
    msg.uid = 140U;
    msg.frag_number = 182U;
    msg.num_frags = 223U;
    const char tmp_msg_0[] = {71, 14, -3, -121, -47, 68, 9, -70, 48, -119, 118, 122, -76, 50, 108, -46, 44, 70, -75, -66, -91, 3, 71, -56, -115, -49, 1, -125, 60, -40, 12, 109};
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
    msg.setTimeStamp(0.07314658489127035);
    msg.setSource(4649U);
    msg.setSourceEntity(67U);
    msg.setDestination(25790U);
    msg.setDestinationEntity(249U);
    msg.uid = 161U;
    msg.frag_number = 238U;
    msg.num_frags = 168U;
    const char tmp_msg_0[] = {-87, 56, 53, 63, -67, -51, -73, 89, -112, 12, -5, 41, -66, 121, -49, -41, 36, -10, -20, 49, 43, 86};
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
    msg.setTimeStamp(0.33849386441151164);
    msg.setSource(59611U);
    msg.setSourceEntity(181U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(138U);
    msg.content_type.assign("GHUPXOZLFDIPARTCNCLEEQTYCKVLVTPUSCJZONPEKVCWXYMHNFXXUBUUJFQBOZSIKRCZEBWDWLEMQGVSNJXLOJDMASHHNZWOPDAHOSF");
    const char tmp_msg_0[] = {-29, 22, -64, -24, 33, -109, -29, -16, 115, 38, -22, 57, 95, -7, 113, -122, -22, 108, -65, -107, 13, -83, -94, -102, -77, 80, 111, 12, -27, -31, -86, -16, -117, 12, 4, -13, 108, 85, 110, 104, -41, -96, -27, -104, 25, -39, -10, -58, -19, -79, -66, -122, -1, -95, -75, -126, -50, -2, -2, 100, -93, -58, 108, -99, 6, 106, -49, -29, -7, 116, 25, -52, -21, -59, -60, 25, -38, 14, 17, -41, -109, 66, 29, -32, -56, -93, 106, 61, -114, 8, -24, -21, 66, -4, -64, 62, -111, 108, -19, -103, 77, -65, -31};
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
    msg.setTimeStamp(0.46456415838755416);
    msg.setSource(15762U);
    msg.setSourceEntity(247U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(226U);
    msg.content_type.assign("CXRLLMWXPZOCJBLQFVHYGRHFPREXTJCPBYJGYUMEYFLXKNPXNFDBDQIAHDPSDRWCIUSUTBSGJPIAQDMQVLCOVONGYTONQWDDFPJAJOWVMTSDGKBXNHIPNZYVKKJTESAIUWWF");
    const char tmp_msg_0[] = {58, -32, 111, -39, -91, 53, 95, -34, 43, 54, -24, 117, -91, -41, 60, 97, 5, -44, -61, -107, 74, 97, 105, 89, 97, -63, 62, 83, -59, -6, 85, -80, 87, -58, -70, -108, -36, -72, 21, -2, -61, 70, 119, -32, -122, 89, -104, 0, 116, -68};
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
    msg.setTimeStamp(0.19797379048933017);
    msg.setSource(42664U);
    msg.setSourceEntity(3U);
    msg.setDestination(48600U);
    msg.setDestinationEntity(126U);
    msg.content_type.assign("VICRCOQXEFZGJTZDYTYPZEQJYKDVHLOSEPFDJGXCBGRUKHUPWNOIMMWBASCZHADFDGJGNTLKJBPTTUQLNWIHBOIQWQMNBZEDNMEAYUSLTIGDZDTBLHJEBIHVYWXWPXFRVKYZXORWZOAESMSKROSPUMQVISPAORFDANIJORRYXKAYXXGGVKHCPVMKDEWRKYBTQJJMRSISI");
    const char tmp_msg_0[] = {-118, 37, 57, -88, 123, 120, -27, 72, -75, 59, -104, 79, -38, 125, -10, 85, -14, -122, -114, 13, 123, -64, 8, -34, -92, -43, -106, 91, 14, 22, -15, -68, 16, -106, -84, 110, 24, 102, 99, -114, 27, -82, -120, 25, -124, -42, 54, 24, 42, -64, 95, -69, 115, -25, -32, -120, 8, -35, 43, -123, -66, 29, 86, 124, -104, -64, -38, 80, 54, 126, -32, 47, 62, -35, 32, 43, -12, -78, 81, -122, 26, -94, -128, 33, 125, 69, 67, 83, -72, -81, 122, 36, -121, 105, -104, 22, -110, 24, -107, -36, 81, -107, 54, -21, 120, 1, -118, -125};
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
    msg.setTimeStamp(0.6817899442631863);
    msg.setSource(33468U);
    msg.setSourceEntity(49U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.9022056173718435);
    msg.setSource(54338U);
    msg.setSourceEntity(172U);
    msg.setDestination(50220U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.14961237925355964);
    msg.setSource(57833U);
    msg.setSourceEntity(170U);
    msg.setDestination(23378U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.6199418959085784);
    msg.setSource(33422U);
    msg.setSourceEntity(15U);
    msg.setDestination(3512U);
    msg.setDestinationEntity(4U);
    msg.target = 58961U;
    msg.bearing = 0.6746033926191382;
    msg.elevation = 0.9427032680942232;

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
    msg.setTimeStamp(0.5192035623560854);
    msg.setSource(41570U);
    msg.setSourceEntity(165U);
    msg.setDestination(27581U);
    msg.setDestinationEntity(163U);
    msg.target = 31471U;
    msg.bearing = 0.6287396141248487;
    msg.elevation = 0.8851582487130039;

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
    msg.setTimeStamp(0.025645298005530948);
    msg.setSource(45253U);
    msg.setSourceEntity(194U);
    msg.setDestination(57508U);
    msg.setDestinationEntity(201U);
    msg.target = 65450U;
    msg.bearing = 0.26882901948457505;
    msg.elevation = 0.29228334510265397;

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
    msg.setTimeStamp(0.30832806102371024);
    msg.setSource(17414U);
    msg.setSourceEntity(42U);
    msg.setDestination(16330U);
    msg.setDestinationEntity(142U);
    msg.target = 58691U;
    msg.x = 0.5489745902527341;
    msg.y = 0.04726823839795413;
    msg.z = 0.6493388807013305;

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
    msg.setTimeStamp(0.16916498029541127);
    msg.setSource(19937U);
    msg.setSourceEntity(121U);
    msg.setDestination(35094U);
    msg.setDestinationEntity(91U);
    msg.target = 29632U;
    msg.x = 0.463318430949741;
    msg.y = 0.28346810054073424;
    msg.z = 0.9599580265388935;

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
    msg.setTimeStamp(0.05486135745124088);
    msg.setSource(12717U);
    msg.setSourceEntity(56U);
    msg.setDestination(32733U);
    msg.setDestinationEntity(135U);
    msg.target = 44421U;
    msg.x = 0.055407550172060005;
    msg.y = 0.4839445370667902;
    msg.z = 0.5566022402131073;

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
    msg.setTimeStamp(0.2243529963720059);
    msg.setSource(29736U);
    msg.setSourceEntity(112U);
    msg.setDestination(14414U);
    msg.setDestinationEntity(118U);
    msg.target = 52287U;
    msg.lat = 0.1719781109809997;
    msg.lon = 0.8123280083663988;
    msg.z_units = 87U;
    msg.z = 0.3980273323538217;

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
    msg.setTimeStamp(0.4758042139109867);
    msg.setSource(9944U);
    msg.setSourceEntity(226U);
    msg.setDestination(52624U);
    msg.setDestinationEntity(88U);
    msg.target = 7553U;
    msg.lat = 0.19689148026561398;
    msg.lon = 0.9809897861869205;
    msg.z_units = 115U;
    msg.z = 0.1298922969239421;

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
    msg.setTimeStamp(0.9682629595484311);
    msg.setSource(21318U);
    msg.setSourceEntity(239U);
    msg.setDestination(63760U);
    msg.setDestinationEntity(171U);
    msg.target = 3061U;
    msg.lat = 0.9307047275994816;
    msg.lon = 0.9908829328900474;
    msg.z_units = 58U;
    msg.z = 0.4728229277304271;

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
    msg.setTimeStamp(0.04488026895494335);
    msg.setSource(29986U);
    msg.setSourceEntity(123U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(156U);
    msg.locale.assign("CPVKBYTTHTFRCGCONQOLTSUJEYVCYWGAYHGFYAEIUGQRNQVDWXRPMPBAOVABRP");
    const char tmp_msg_0[] = {29, 96, 115, -3, -106, 46, 35, 90, 36, -80, 124, -86, 77, 115, -83, 22, 76, -95, -106, -31, 90, 12, -6, 78, -91, -24, -66, 126, 113, -46, 61, -85, -108, -24, -34, -115, 78, -69, 97, 3, 47, 100, -62, 15, 40, -25, -8, -86, 112, 74, -73, 19, -89, 100, 94, -86, -80, 125, -18, 22, 35, 40, -74, -7, -52, -39, 28, -90, 46, -42, -106, 24, -107, 54, 34, -47, 120, -72, 7, 58, 64, -22, 102, -41, 34, -93, -119, 55, 76, 120, -126, -30, -92, -123, -27, -19, -68, -7, 85, 113, -123, -122, 70, -97, -27, -60, 65, -111, -113, -88, -13, 51, -83, 8, 3, 69, -35, 93, -48, -59, -42, 59, 77, -73, -119, 53, 117, -37, 120, 73, -37, 59, 74, -54, -84, 102, 52, 11, 53, 81, -59, -46, -89, 99, -8, -53, 117, -39, -102, 96, -73, -99, -51, 126, -63, 65, 11, 86, -18, 60, 25, -97, 117, 2, -46, -66, -60, 126, 19, 62, 123, 100, 67, -6, 44, 80, 96, -95, -13, 76, 17, -39, 69, 19, -14, 15, 47, -37, -12, 94, -113, -86, 23, 33};
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
    msg.setTimeStamp(0.613826826562521);
    msg.setSource(28016U);
    msg.setSourceEntity(223U);
    msg.setDestination(6047U);
    msg.setDestinationEntity(153U);
    msg.locale.assign("NVENXPQSLRGDGQEPVTOZCDIMZLKETBQRFUHHDSILOHUFFBOXLKHGKLCQBAGNHMVQLMDKWQFNJZWYOKABNCZAMNSITOWLRQNYRHBTUACISZJFDJAFHUMVEPVRJOKCCWDEELKARJYPVUAZXSZPYOKPMSBSXYOTAQGXPFNGEGWHRMEWTJDSCWXNRECCAZZUQEVPRFUTMM");
    const char tmp_msg_0[] = {-31, 80, 62, -7, 28, -103, -62, 114, -86, 23, -36, -38, -100, -22, -88, 76, 97, 23, -46, -63, 104, -24, 9, 72, 56, 62, -124, 83, -20, -82, -85, 124, -37, 102, 118, -104, -60, -72, -11, -30, 111, -82, -18, 67, 85, -82, -123, -67, -62, -98, 107, -40, 49, -101, 23, -29, -104, 116, 47, 38, -123, -56, -106, -112, -88, 104, 29, 49, -109, -49, 21, -49, 106, -28, 24, 37, -35, 90, 25, 9, 107, 43, 12, 70, -71, -81, 108, -86, 49, -48, 27, 57, -74, 86, 111, -14, 10, 41, 119, 68, -117, 121, 103, -66, -118, -63, -91, 52, 90, 55, 62, -11, 108, -125, -96, 75, 46, -9, -18, 39, 112, 66, 123};
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
    msg.setTimeStamp(0.47923214094684996);
    msg.setSource(33398U);
    msg.setSourceEntity(146U);
    msg.setDestination(63141U);
    msg.setDestinationEntity(230U);
    msg.locale.assign("SNRHLDMZRVPGJQCCUUHGNTR");
    const char tmp_msg_0[] = {-69, 31, -79, 85, 113, -20, 95, 91, 92, 124, 43, 0, -127, 24, -88, -23, 11, -53, -19, -104, 39, -92, 102, 31, 109, 62};
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
    msg.setTimeStamp(0.8694460036618006);
    msg.setSource(16266U);
    msg.setSourceEntity(221U);
    msg.setDestination(59996U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.0008500096938139912);
    msg.setSource(5191U);
    msg.setSourceEntity(46U);
    msg.setDestination(50681U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.247974625431997);
    msg.setSource(31595U);
    msg.setSourceEntity(68U);
    msg.setDestination(10920U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.8257730574340658);
    msg.setSource(42387U);
    msg.setSourceEntity(64U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(158U);
    msg.highpass = 0.03340783955010307;
    msg.adot = 0.6635930872094683;
    msg.slope_compensation = 0.860440200579768;
    msg.slope_compensation_difference = 0.6771385900672363;
    msg.altitude = 0.8916082608691158;
    msg.auto_altitude = 0.4471545276476292;

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
    msg.setTimeStamp(0.5728346301703743);
    msg.setSource(27895U);
    msg.setSourceEntity(81U);
    msg.setDestination(6596U);
    msg.setDestinationEntity(52U);
    msg.highpass = 0.4034016706631076;
    msg.adot = 0.35349652163024836;
    msg.slope_compensation = 0.48082520557895203;
    msg.slope_compensation_difference = 0.665611277981952;
    msg.altitude = 0.5270591365076103;
    msg.auto_altitude = 0.17958737539823244;

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
    msg.setTimeStamp(0.3798992108111806);
    msg.setSource(14420U);
    msg.setSourceEntity(55U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(169U);
    msg.highpass = 0.28141195819426523;
    msg.adot = 0.2582598387672361;
    msg.slope_compensation = 0.3919295047914184;
    msg.slope_compensation_difference = 0.9134493470533631;
    msg.altitude = 0.37707576549040533;
    msg.auto_altitude = 0.4988694481679935;

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
    msg.setTimeStamp(0.6301975761700596);
    msg.setSource(28077U);
    msg.setSourceEntity(244U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(148U);
    msg.remote_control_allowed = 8U;
    msg.remote_control_enabled = 24U;
    msg.remote_control_active = 101U;
    msg.depth_only_control_enabled = 57U;
    msg.direct_control_enabled = 15U;
    msg.return_to_closest_point_on_line = 20U;
    msg.on_shore_power = 87U;
    msg.latitude = 0.718243396919858;
    msg.longitude = 0.9933655668026281;
    msg.depth = 0.4158321503054665;
    msg.depth_ref = 0.9588778273850852;
    msg.altitude = 0.8650977528854029;
    msg.altitude_ref = 0.17623198875020696;
    msg.pitch = 0.31301475712481;
    msg.roll = 0.4691989225887836;
    msg.rpm = 0.34305321706132874;
    msg.rpm_ref = 0.991572297056752;
    msg.speed = 0.7611257771029355;
    msg.speed_ref = 0.1533503807015274;
    msg.heading = 0.9959650971087997;
    msg.heading_rate = 0.3159348031960256;
    msg.heading_ref = 0.20511127238036997;
    msg.mission_state = 107U;
    msg.leg = -928746049259920978;

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
    msg.setTimeStamp(0.12426304638686303);
    msg.setSource(28849U);
    msg.setSourceEntity(243U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(197U);
    msg.remote_control_allowed = 104U;
    msg.remote_control_enabled = 72U;
    msg.remote_control_active = 104U;
    msg.depth_only_control_enabled = 251U;
    msg.direct_control_enabled = 143U;
    msg.return_to_closest_point_on_line = 212U;
    msg.on_shore_power = 160U;
    msg.latitude = 0.6556658784985705;
    msg.longitude = 0.8989925937574216;
    msg.depth = 0.7912321984969745;
    msg.depth_ref = 0.9255613042337698;
    msg.altitude = 0.16054570762709808;
    msg.altitude_ref = 0.1484616951015162;
    msg.pitch = 0.8699092254907747;
    msg.roll = 0.6749483768325666;
    msg.rpm = 0.1868550666792298;
    msg.rpm_ref = 0.7372197044086326;
    msg.speed = 0.388129512875683;
    msg.speed_ref = 0.28100935610702016;
    msg.heading = 0.2507142296949758;
    msg.heading_rate = 0.71431200884897;
    msg.heading_ref = 0.5270068292044658;
    msg.mission_state = 45U;
    msg.leg = 225747214252300062;

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
    msg.setTimeStamp(0.7700789590708351);
    msg.setSource(59453U);
    msg.setSourceEntity(176U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(158U);
    msg.remote_control_allowed = 166U;
    msg.remote_control_enabled = 189U;
    msg.remote_control_active = 47U;
    msg.depth_only_control_enabled = 224U;
    msg.direct_control_enabled = 216U;
    msg.return_to_closest_point_on_line = 250U;
    msg.on_shore_power = 206U;
    msg.latitude = 0.7455622805240145;
    msg.longitude = 0.385417152207557;
    msg.depth = 0.7813917743756967;
    msg.depth_ref = 0.04280982193791505;
    msg.altitude = 0.4124643481215967;
    msg.altitude_ref = 0.911546822168143;
    msg.pitch = 0.13659623574794355;
    msg.roll = 0.2357722119233545;
    msg.rpm = 0.5519463437535478;
    msg.rpm_ref = 0.9141551475148074;
    msg.speed = 0.7988428888607437;
    msg.speed_ref = 0.4524760180928147;
    msg.heading = 0.8713160648854341;
    msg.heading_rate = 0.14504847115594166;
    msg.heading_ref = 0.6562256494255532;
    msg.mission_state = 82U;
    msg.leg = -4449346156646782931;

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
    msg.setTimeStamp(0.34248921159651335);
    msg.setSource(25756U);
    msg.setSourceEntity(152U);
    msg.setDestination(38298U);
    msg.setDestinationEntity(95U);
    msg.name.assign("ULHPTAEUDOWNYZPSHXIGMKXZOKSFZVSMKGCOVIIUFGFEMVXOPCTXFZZCAIUBDSFSTVXEGCWPG");
    msg.arg1 = 0.34453023507271163;
    msg.arg2 = 0.9881096079605342;
    msg.arg3 = 0.5153087929593854;
    msg.arg4 = 0.38712421779333284;

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
    msg.setTimeStamp(0.3202565517971432);
    msg.setSource(32337U);
    msg.setSourceEntity(114U);
    msg.setDestination(27881U);
    msg.setDestinationEntity(141U);
    msg.name.assign("TZFNBDEUWRGAFUCALVDPT");
    msg.arg1 = 0.1669387453989002;
    msg.arg2 = 0.10599642100384365;
    msg.arg3 = 0.23080935863823138;
    msg.arg4 = 0.03502168300562236;

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
    msg.setTimeStamp(0.28977565250597603);
    msg.setSource(46106U);
    msg.setSourceEntity(36U);
    msg.setDestination(60303U);
    msg.setDestinationEntity(57U);
    msg.name.assign("TBQSGWOMNZNNXIKVUAGLLRWXRMUEFRLAPYZSGSDCYGBOWGPRVLFYBMYWVIDBHTRQGDXJSCDZFMKCMCJFWOHYINXZTOTEPJZCGVGVLBPPBXFCTAEBSFOAKINNONJKEBHESARXSJAKCQKDSCVIUMJXKUZLUNPQAEOQMPVXAZIHZYOUAHFNHGQDLRWE");
    msg.arg1 = 0.8554839365298451;
    msg.arg2 = 0.6172160723887757;
    msg.arg3 = 0.41905679322138534;
    msg.arg4 = 0.7864818661305425;

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
    msg.setTimeStamp(0.47799098578702515);
    msg.setSource(45795U);
    msg.setSourceEntity(91U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(251U);
    msg.direction = 2U;
    msg.range1 = 0.09250997999858901;
    msg.range2 = 0.9144639759873973;
    msg.range3 = 0.4929960345808754;
    msg.range4 = 0.2967820256725284;

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
    msg.setTimeStamp(0.8378876160189467);
    msg.setSource(62516U);
    msg.setSourceEntity(226U);
    msg.setDestination(31738U);
    msg.setDestinationEntity(248U);
    msg.direction = 75U;
    msg.range1 = 0.9846521686016503;
    msg.range2 = 0.8385648963132789;
    msg.range3 = 0.41274938275748296;
    msg.range4 = 0.14094683976186673;

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
    msg.setTimeStamp(0.0033171813031825925);
    msg.setSource(22977U);
    msg.setSourceEntity(209U);
    msg.setDestination(56988U);
    msg.setDestinationEntity(195U);
    msg.direction = 1U;
    msg.range1 = 0.40196385215515473;
    msg.range2 = 0.6316988153914058;
    msg.range3 = 0.7815999389774074;
    msg.range4 = 0.03882325508886786;

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
    msg.setTimeStamp(0.5370474971142021);
    msg.setSource(64495U);
    msg.setSourceEntity(178U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(39U);
    msg.msg.assign("WTCWZWOZFLYVSDYPLPGAKVKZYKHETUSREJARIWXSMBOZDDNHNCTIUIJCRJKQQXQDJSUBVZEYBIAAYNGNUBFZPHHNCVGHITDMFHAECYNLMTAFKJSXUTLEEGDHIKWROQSLXBFFCPVRQTMBZPMZLQOGQZELDVLOQOAXHUCXYUBGNXGQSKCBPEPFUFSVDJVSLFBJMENZGPXPSKWICO");
    msg.direction = 159U;

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
    msg.setTimeStamp(0.10810384706920095);
    msg.setSource(15697U);
    msg.setSourceEntity(90U);
    msg.setDestination(61599U);
    msg.setDestinationEntity(96U);
    msg.msg.assign("MTVXZDUBDSHRBTBNOAQHFVROPTBGLMEFNSFDMDSHUACEYQXGKRLYFHNGPKCGECOWOWAVXLSUKHVVEJUWBGZLAFAKYOGHSYRBDZCMVERUHDDYXGUJJAIAIXVVLXCOIZWEKDFXIGZZYSAQFMINQQSDCMIFMQNBJHYKDSOJRBQWYPFPKLXZIKJMXLTQTJJPRBPBEHCWNNRVLPKOOGFIKGSEWIPMPXT");
    msg.direction = 126U;

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
    msg.setTimeStamp(0.6653063691834565);
    msg.setSource(46690U);
    msg.setSourceEntity(71U);
    msg.setDestination(30544U);
    msg.setDestinationEntity(15U);
    msg.msg.assign("MTAMHNRBKAIJHUBAMJLVQDLZNCRBWFDWNCJJNTXELGLWCQEOUQYMJVUIZPVZPWLDOQPMKWAHLBBFHTTFRSXURODEZSXPRLFXYAEILJWASIGIANT");
    msg.direction = 193U;

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
    msg.setTimeStamp(0.2492258161501919);
    msg.setSource(2011U);
    msg.setSourceEntity(190U);
    msg.setDestination(36493U);
    msg.setDestinationEntity(6U);
    msg.state = 191U;

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
    msg.setTimeStamp(0.17217371437456075);
    msg.setSource(40822U);
    msg.setSourceEntity(202U);
    msg.setDestination(56373U);
    msg.setDestinationEntity(161U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.749085879625105);
    msg.setSource(1288U);
    msg.setSourceEntity(208U);
    msg.setDestination(59414U);
    msg.setDestinationEntity(26U);
    msg.state = 113U;

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

  return test.getReturnValue();
}
