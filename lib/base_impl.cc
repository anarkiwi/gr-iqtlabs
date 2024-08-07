/* -*- c++ -*- */
/*                                  Apache License
 *                            Version 2.0, January 2004
 *                         http://www.apache.org/licenses/
 *
 *    TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
 *
 *    1. Definitions.
 *
 *       "License" shall mean the terms and conditions for use, reproduction,
 *       and distribution as defined by Sections 1 through 9 of this document.
 *
 *       "Licensor" shall mean the copyright owner or entity authorized by
 *       the copyright owner that is granting the License.
 *
 *       "Legal Entity" shall mean the union of the acting entity and all
 *       other entities that control, are controlled by, or are under common
 *       control with that entity. For the purposes of this definition,
 *       "control" means (i) the power, direct or indirect, to cause the
 *       direction or management of such entity, whether by contract or
 *       otherwise, or (ii) ownership of fifty percent (50%) or more of the
 *       outstanding shares, or (iii) beneficial ownership of such entity.
 *
 *       "You" (or "Your") shall mean an individual or Legal Entity
 *       exercising permissions granted by this License.
 *
 *       "Source" form shall mean the preferred form for making modifications,
 *       including but not limited to software source code, documentation
 *       source, and configuration files.
 *
 *       "Object" form shall mean any form resulting from mechanical
 *       transformation or translation of a Source form, including but
 *       not limited to compiled object code, generated documentation,
 *       and conversions to other media types.
 *
 *       "Work" shall mean the work of authorship, whether in Source or
 *       Object form, made available under the License, as indicated by a
 *       copyright notice that is included in or attached to the work
 *       (an example is provided in the Appendix below).
 *
 *       "Derivative Works" shall mean any work, whether in Source or Object
 *       form, that is based on (or derived from) the Work and for which the
 *       editorial revisions, annotations, elaborations, or other modifications
 *       represent, as a whole, an original work of authorship. For the purposes
 *       of this License, Derivative Works shall not include works that remain
 *       separable from, or merely link (or bind by name) to the interfaces of,
 *       the Work and Derivative Works thereof.
 *
 *       "Contribution" shall mean any work of authorship, including
 *       the original version of the Work and any modifications or additions
 *       to that Work or Derivative Works thereof, that is intentionally
 *       submitted to Licensor for inclusion in the Work by the copyright owner
 *       or by an individual or Legal Entity authorized to submit on behalf of
 *       the copyright owner. For the purposes of this definition, "submitted"
 *       means any form of electronic, verbal, or written communication sent
 *       to the Licensor or its representatives, including but not limited to
 *       communication on electronic mailing lists, source code control systems,
 *       and issue tracking systems that are managed by, or on behalf of, the
 *       Licensor for the purpose of discussing and improving the Work, but
 *       excluding communication that is conspicuously marked or otherwise
 *       designated in writing by the copyright owner as "Not a Contribution."
 *
 *       "Contributor" shall mean Licensor and any individual or Legal Entity
 *       on behalf of whom a Contribution has been received by Licensor and
 *       subsequently incorporated within the Work.
 *
 *    2. Grant of Copyright License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       copyright license to reproduce, prepare Derivative Works of,
 *       publicly display, publicly perform, sublicense, and distribute the
 *       Work and such Derivative Works in Source or Object form.
 *
 *    3. Grant of Patent License. Subject to the terms and conditions of
 *       this License, each Contributor hereby grants to You a perpetual,
 *       worldwide, non-exclusive, no-charge, royalty-free, irrevocable
 *       (except as stated in this section) patent license to make, have made,
 *       use, offer to sell, sell, import, and otherwise transfer the Work,
 *       where such license applies only to those patent claims licensable
 *       by such Contributor that are necessarily infringed by their
 *       Contribution(s) alone or by combination of their Contribution(s)
 *       with the Work to which such Contribution(s) was submitted. If You
 *       institute patent litigation against any entity (including a
 *       cross-claim or counterclaim in a lawsuit) alleging that the Work
 *       or a Contribution incorporated within the Work constitutes direct
 *       or contributory patent infringement, then any patent licenses
 *       granted to You under this License for that Work shall terminate
 *       as of the date such litigation is filed.
 *
 *    4. Redistribution. You may reproduce and distribute copies of the
 *       Work or Derivative Works thereof in any medium, with or without
 *       modifications, and in Source or Object form, provided that You
 *       meet the following conditions:
 *
 *       (a) You must give any other recipients of the Work or
 *           Derivative Works a copy of this License; and
 *
 *       (b) You must cause any modified files to carry prominent notices
 *           stating that You changed the files; and
 *
 *       (c) You must retain, in the Source form of any Derivative Works
 *           that You distribute, all copyright, patent, trademark, and
 *           attribution notices from the Source form of the Work,
 *           excluding those notices that do not pertain to any part of
 *           the Derivative Works; and
 *
 *       (d) If the Work includes a "NOTICE" text file as part of its
 *           distribution, then any Derivative Works that You distribute must
 *           include a readable copy of the attribution notices contained
 *           within such NOTICE file, excluding those notices that do not
 *           pertain to any part of the Derivative Works, in at least one
 *           of the following places: within a NOTICE text file distributed
 *           as part of the Derivative Works; within the Source form or
 *           documentation, if provided along with the Derivative Works; or,
 *           within a display generated by the Derivative Works, if and
 *           wherever such third-party notices normally appear. The contents
 *           of the NOTICE file are for informational purposes only and
 *           do not modify the License. You may add Your own attribution
 *           notices within Derivative Works that You distribute, alongside
 *           or as an addendum to the NOTICE text from the Work, provided
 *           that such additional attribution notices cannot be construed
 *           as modifying the License.
 *
 *       You may add Your own copyright statement to Your modifications and
 *       may provide additional or different license terms and conditions
 *       for use, reproduction, or distribution of Your modifications, or
 *       for any such Derivative Works as a whole, provided Your use,
 *       reproduction, and distribution of the Work otherwise complies with
 *       the conditions stated in this License.
 *
 *    5. Submission of Contributions. Unless You explicitly state otherwise,
 *       any Contribution intentionally submitted for inclusion in the Work
 *       by You to the Licensor shall be under the terms and conditions of
 *       this License, without any additional terms or conditions.
 *       Notwithstanding the above, nothing herein shall supersede or modify
 *       the terms of any separate license agreement you may have executed
 *       with Licensor regarding such Contributions.
 *
 *    6. Trademarks. This License does not grant permission to use the trade
 *       names, trademarks, service marks, or product names of the Licensor,
 *       except as required for reasonable and customary use in describing the
 *       origin of the Work and reproducing the content of the NOTICE file.
 *
 *    7. Disclaimer of Warranty. Unless required by applicable law or
 *       agreed to in writing, Licensor provides the Work (and each
 *       Contributor provides its Contributions) on an "AS IS" BASIS,
 *       WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 *       implied, including, without limitation, any warranties or conditions
 *       of TITLE, NON-INFRINGEMENT, MERCHANTABILITY, or FITNESS FOR A
 *       PARTICULAR PURPOSE. You are solely responsible for determining the
 *       appropriateness of using or redistributing the Work and assume any
 *       risks associated with Your exercise of permissions under this License.
 *
 *    8. Limitation of Liability. In no event and under no legal theory,
 *       whether in tort (including negligence), contract, or otherwise,
 *       unless required by applicable law (such as deliberate and grossly
 *       negligent acts) or agreed to in writing, shall any Contributor be
 *       liable to You for damages, including any direct, indirect, special,
 *       incidental, or consequential damages of any character arising as a
 *       result of this License or out of the use or inability to use the
 *       Work (including but not limited to damages for loss of goodwill,
 *       work stoppage, computer failure or malfunction, or any and all
 *       other commercial damages or losses), even if such Contributor
 *       has been advised of the possibility of such damages.
 *
 *    9. Accepting Warranty or Additional Liability. While redistributing
 *       the Work or Derivative Works thereof, You may choose to offer,
 *       and charge a fee for, acceptance of support, warranty, indemnity,
 *       or other liability obligations and/or rights consistent with this
 *       License. However, in accepting such obligations, You may act only
 *       on Your own behalf and on Your sole responsibility, not on behalf
 *       of any other Contributor, and only if You agree to indemnify,
 *       defend, and hold each Contributor harmless for any liability
 *       incurred by, or claims asserted against, such Contributor by reason
 *       of your accepting any such warranty or additional liability.
 *
 *    END OF TERMS AND CONDITIONS
 *
 *    APPENDIX: How to apply the Apache License to your work.
 *
 *       To apply the Apache License to your work, attach the following
 *       boilerplate notice, with the fields enclosed by brackets "[]"
 *       replaced with your own identifying information. (Don't include
 *       the brackets!)  The text should be enclosed in the appropriate
 *       comment syntax for the file format. We also recommend that a
 *       file or class name and description of purpose be included on the
 *       same "printed page" as the copyright notice for easier
 *       identification within third-party archives.
 *
 *    Copyright [yyyy] [name of copyright owner]
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "base_impl.h"
#include <boost/algorithm/string.hpp>
#include <boost/filesystem.hpp>
#include <chrono>
#include <fstream>
#include <iomanip>
#include <pmt/pmt.h>

namespace gr {
namespace iqtlabs {
std::string base_impl::get_prefix_file_(const std::string &file,
                                        const std::string &prefix) {
  boost::filesystem::path orig_path(file);
  std::string basename(orig_path.filename().c_str());
  std::string dirname(
      boost::filesystem::canonical(orig_path.parent_path()).c_str());
  return dirname + "/" + prefix + basename;
}

std::string base_impl::get_dotfile_(const std::string &file) {
  return get_prefix_file_(file, ".");
}

TIME_T base_impl::host_now_() {
  const auto now_millis = std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::high_resolution_clock::now().time_since_epoch());
  TIME_T now = double(now_millis.count()) / 1e3;
  return now;
}

std::string base_impl::host_now_str_(TIME_T host_now) {
  std::ostringstream ss;
  ss << std::fixed << std::setprecision(3) << host_now;
  return ss.str();
}

pmt::pmt_t base_impl::make_rx_time_key_(TIME_T now) {
  COUNT_T now_sec = COUNT_T(now);
  return pmt::make_tuple(pmt::from_uint64(now_sec),
                         pmt::from_double(now - now_sec));
}

TIME_T base_impl::rx_time_from_tag_(const gr::tag_t tag) {
  return pmt::to_uint64(pmt::tuple_ref(tag.value, 0)) +
         pmt::to_double(pmt::tuple_ref(tag.value, 1));
}

std::string base_impl::secs_dir(const std::string &dir, COUNT_T rotate_secs) {
  if (rotate_secs) {
    const auto now = std::chrono::duration_cast<std::chrono::seconds>(
        std::chrono::high_resolution_clock::now().time_since_epoch());
    COUNT_T ts = now.count() / rotate_secs * rotate_secs;
    const std::string ts_dir = dir + "/" + std::to_string(ts);
    boost::filesystem::create_directories(ts_dir);
    return ts_dir + "/";
  }
  return dir + "/";
}

sigmf_record_t base_impl::create_sigmf(const std::string &source_file,
                                       double timestamp,
                                       const std::string &datatype,
                                       double sample_rate, double gain,
                                       const std::string &description,
                                       double frequency) {
  sigmf_record_t record;
  record.global.access<sigmf::core::GlobalT>().datatype = datatype;
  record.global.access<sigmf::core::GlobalT>().sample_rate = sample_rate;
  record.global.access<sigmf::core::GlobalT>().version = "1.0.0";
  if (description.size()) {
    record.global.access<sigmf::core::GlobalT>().description = description;
  }
  auto capture =
      sigmf::Capture<sigmf::core::DescrT, sigmf::capture_details::DescrT>();
  capture.get<sigmf::core::DescrT>().sample_start = 0;
  capture.get<sigmf::core::DescrT>().global_index = 0;
  std::ostringstream ts_ss;
  time_t timestamp_t = static_cast<time_t>(timestamp);
  ts_ss << std::put_time(gmtime(&timestamp_t), "%FT%TZ");
  capture.get<sigmf::core::DescrT>().datetime = ts_ss.str();
  capture.get<sigmf::capture_details::DescrT>().source_file =
      basename(source_file.c_str());
  capture.get<sigmf::capture_details::DescrT>().gain = gain;
  if (frequency) {
    capture.get<sigmf::core::DescrT>().frequency = frequency;
  }
  record.captures.emplace_back(capture);
  return record;
}

void base_impl::get_tags(const pmt::pmt_t want_tag,
                         const std::vector<tag_t> &all_tags,
                         std::vector<tag_t> &rx_freq_tags,
                         std::vector<TIME_T> &rx_times) {
  for (COUNT_T t = 0; t < all_tags.size(); ++t) {
    const auto &tag = all_tags[t];
    if (tag.key == want_tag) {
      rx_freq_tags.push_back(tag);
      continue;
    }
    if (tag.key == RX_TIME_KEY) {
      rx_times.push_back(rx_time_from_tag_(tag));
      continue;
    }
  }

  if (rx_freq_tags.size() != rx_times.size()) {
    rx_times.clear();
    for (COUNT_T t = 0; t < rx_freq_tags.size(); ++t) {
      rx_times.push_back(host_now_());
    }
  }
}

pmt::pmt_t base_impl::tune_rx_msg(FREQ_T tune_freq, bool tag_now) {
  pmt::pmt_t tune_rx = pmt::make_dict();
  // freq has to be a long in a PMT message.
  tune_rx = pmt::dict_add(tune_rx, pmt::mp("freq"), pmt::from_long(tune_freq));
  if (tag_now) {
    tune_rx = pmt::dict_add(tune_rx, pmt::mp("tag"), pmt::mp("now"));
  }
  return tune_rx;
}

pmt::pmt_t base_impl::string_to_pmt(const std::string &s) {
  return pmt::cons(pmt::make_dict(),
                   pmt::make_blob((const uint8_t *)s.c_str(), s.length()));
}

std::string base_impl::pmt_to_string(const pmt::pmt_t &msg) {
  auto blob = pmt::cdr(msg);
  return std::string(reinterpret_cast<const char *>(pmt::blob_data(blob)),
                     pmt::blob_length(blob));
}

void base_impl::parse_models(const std::string &model_server,
                             const std::string &model_names) {
  // TODO: IPv6 IP addresses
  std::vector<std::string> model_server_parts_;
  boost::split(model_server_parts_, model_server, boost::is_any_of(":"),
               boost::token_compress_on);
  if (model_server_parts_.size() == 2) {
    host_ = model_server_parts_[0];
    port_ = model_server_parts_[1];
  } else {
    std::cerr << "incomplete/missing model server" << std::endl;
    return;
  }
  boost::split(model_names_, model_names, boost::is_any_of(","),
               boost::token_compress_on);
  if (model_names_.size() == 0) {
    std::cerr << "missing model name(s)" << std::endl;
  }
}
} /* namespace iqtlabs */
} /* namespace gr */
