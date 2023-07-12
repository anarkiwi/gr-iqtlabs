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

#include <cstdint>
#include <fstream>
#include <ios>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <boost/algorithm/string.hpp>
#include <boost/iostreams/copy.hpp>
#include <gnuradio/io_signature.h>
#include "retune_fft_impl.h"

namespace gr {
    namespace iqtlabs {
        const pmt::pmt_t JSON_OUTPUT = pmt::mp("json_output");
        const boost::iostreams::zstd_params zstd_params = boost::iostreams::zstd_params(boost::iostreams::zstd::default_compression);

        retune_fft::sptr
        retune_fft::make(const std::string &tag, int vlen, int nfft, uint64_t samp_rate, uint64_t freq_start, uint64_t freq_end, int tune_step_hz, int tune_step_fft, int skip_tune_step_fft, bool fft_roll, double fft_min, double fft_max, const std::string &sdir, uint64_t write_step_fft, double bucket_range, const std::string &tuning_ranges, const std::string &description, uint64_t rotate_secs)
        {
            return gnuradio::make_block_sptr<retune_fft_impl>(
                                                              tag, vlen, nfft, samp_rate, freq_start, freq_end, tune_step_hz, tune_step_fft, skip_tune_step_fft, fft_roll, fft_min, fft_max, sdir, write_step_fft, bucket_range, tuning_ranges, description, rotate_secs);
        }

        retune_fft_impl::retune_fft_impl(const std::string &tag, int vlen, int nfft, uint64_t samp_rate, uint64_t freq_start, uint64_t freq_end, int tune_step_hz, int tune_step_fft, int skip_tune_step_fft, bool fft_roll, double fft_min, double fft_max, const std::string &sdir, uint64_t write_step_fft, double bucket_range, const std::string &tuning_ranges, const std::string &description, uint64_t rotate_secs)
            : gr::block("retune_fft",
                        gr::io_signature::make(1 /* min inputs */, 1 /* max inputs */, vlen * sizeof(input_type)),
                        gr::io_signature::make(1 /* min outputs */, 1 /*max outputs */, sizeof(output_type))),
              tag_(pmt::intern(tag)),
              vlen_(vlen),
              nfft_(nfft),
              samp_rate_(samp_rate),
              freq_start_(freq_start),
              freq_end_(freq_end),
              tune_step_hz_(tune_step_hz),
              tune_step_fft_(tune_step_fft),
              skip_tune_step_fft_(skip_tune_step_fft),
              skip_fft_count_(skip_tune_step_fft),
              fft_roll_(fft_roll),
              fft_min_(fft_min),
              fft_max_(fft_max),
              sample_(nfft),
              sample_count_(0),
              last_rx_freq_(0),
              last_rx_time_(0),
              fft_count_(0),
              last_sweep_start_(0),
              pending_retune_(0),
              total_tune_count_(0),
              sdir_(sdir),
              write_step_fft_(write_step_fft),
              write_step_fft_count_(write_step_fft),
              bucket_range_(bucket_range),
              description_(description),
              rotate_secs_(rotate_secs)
        {
            outbuf_p.reset(new boost::iostreams::filtering_ostream());
            message_port_register_out(TUNE);
            message_port_register_out(JSON_OUTPUT);
            bucket_offset_ = round(float((vlen_ - round(bucket_range_ * vlen_)) / 2));
            if (tuning_ranges.length() == 0) {
                if (freq_end <= freq_start) {
                    throw std::invalid_argument("invalid freq_start/freq_end (end must be greater than start)");
                }
                d_logger->debug("tuning_ranges empty, will scan from {} to {}", freq_start_, freq_end_);
                tuning_ranges_.push_back(std::pair<uint64_t, uint64_t>(freq_start_, freq_end_));
            } else {
                std::vector<std::string > tuning_ranges_raw;
                boost::split(tuning_ranges_raw, tuning_ranges, boost::is_any_of(","), boost::token_compress_on);
                d_logger->debug("using tuning_ranges");
                freq_start_ = UINT64_MAX;
                freq_end_ = 0;
                for (size_t i = 0; i < tuning_ranges_raw.size(); ++i) {
                    std::vector<std::string> tuning_range_raw;
                    boost::split(tuning_range_raw, tuning_ranges_raw[i], boost::is_any_of("-"), boost::token_compress_on);
                    if (tuning_range_raw.size() != 2) {
                        throw std::invalid_argument("invalid tuning_range (must be min-max)");
                    }
                    uint64_t tuning_range_freq_start = (uint64_t)strtold(tuning_range_raw[0].c_str(), NULL);
                    if (!tuning_range_freq_start) {
                        throw std::invalid_argument("tuning range min cannot be 0");
                    }
                    uint64_t tuning_range_freq_end = (uint64_t)strtold(tuning_range_raw[1].c_str(), NULL);
                    if (!tuning_range_freq_end) {
                        throw std::invalid_argument("tuning range max cannot be 0");
                    }
                    if (tuning_range_freq_end <= tuning_range_freq_start) {
                        throw std::invalid_argument("invalid tuning_range (max must be greater than min)");
                    }
                    if (i) {
                        if (tuning_ranges_.back().second >= tuning_range_freq_start) {
                            throw std::invalid_argument("tuning_ranges must be sorted - cannot have overlapping tuning ranges");
                        }
                    }
                    freq_start_ = std::min(freq_start_, tuning_range_freq_start);
                    freq_end_ = std::max(freq_end_, tuning_range_freq_end);
                    d_logger->debug("tuning range {} will scan from {} to {}", i, tuning_range_freq_start, tuning_range_freq_end);
                    tuning_ranges_.push_back(std::pair<uint64_t, uint64_t>(tuning_range_freq_start, tuning_range_freq_end));
                }
                d_logger->debug("resetting freq_start to {} and freq_end to {} from tuning_ranges", freq_start_, freq_end_);
            }
            tuning_range_ = 0;
            last_tuning_range_ = 0;
            tune_freq_ = tuning_ranges_[0].first;
            d_logger->debug("bucket_offset {}", bucket_offset_);
        }

        retune_fft_impl::~retune_fft_impl()
        {
            close_();
        }

        void retune_fft_impl::write_(const char *data, size_t len) {
            if (!outbuf_p->empty()) {
                outbuf_p->write(data, len);
            }
        }

        void retune_fft_impl::open_(const std::string &file) {
            close_();
            file_ = file;
            outbuf_p->push(boost::iostreams::zstd_compressor(zstd_params));
            outbuf_p->push(boost::iostreams::file_sink(file_));
        }

        void retune_fft_impl::close_() {
             if (!outbuf_p->empty()) {
                 outbuf_p->reset();
                 if (boost::filesystem::exists(file_)) {
                     std::string dotfile = get_dotfile_(file_);
                     rename(dotfile.c_str(), file_.c_str());
                 }
             }
        }

        void retune_fft_impl::retune_now_()
        {
            const double host_now = host_now_();

            d_logger->debug("retuning to {}", tune_freq_);
            ++total_tune_count_;
            ++pending_retune_;
            pmt::pmt_t tune_rx = pmt::make_dict();
            tune_rx = pmt::dict_add(tune_rx, pmt::mp("freq"), pmt::from_long(tune_freq_));
            tune_rx = pmt::dict_add(tune_rx, pmt::mp("tag"), pmt::mp("now"));
            message_port_pub(TUNE, tune_rx);
            last_tuning_range_ = tuning_range_;
            tune_freq_ += tune_step_hz_;
            if (last_sweep_start_ == 0) {
                last_sweep_start_ = host_now;
            } else {
                auto range_end = tuning_ranges_[tuning_range_].second;
                if ((tune_freq_ > range_end) || (tune_freq_ - (samp_rate_ / 2) > range_end)) {
                    tuning_range_ = (tuning_range_ + 1) % tuning_ranges_.size();
                    d_logger->debug("moving to tuning range {}", tuning_range_);
                    tune_freq_ = tuning_ranges_[tuning_range_].first;
                    if (tuning_range_ == 0) {
                        last_sweep_start_ = host_now;
                    }
                }
            }
        }

        void retune_fft_impl::write_items_(const input_type* in)
        {
            if (write_step_fft_count_) {
                if (fft_roll_) {
                    const size_t fft_half_window_size = (sizeof(input_type) * nfft_) / 2;
                    write_((const char*)in + fft_half_window_size, fft_half_window_size);
                    write_((const char*)in, fft_half_window_size);
                } else {
                    write_((const char*)in, sizeof(input_type) * nfft_);
                }
                --write_step_fft_count_;
            }
        }

        void retune_fft_impl::sum_items_(const input_type* in)
        {
            if (fft_roll_) {
                const size_t fft_half_window_size = nfft_ / 2;
                const input_type* lower_in = in + fft_half_window_size;
                const input_type* upper_in = in;
                for (size_t k = 0; k < fft_half_window_size; ++k) {
                    sample_[k] += *lower_in++;
                }
                for (size_t k = fft_half_window_size; k < nfft_; ++k) {
                    sample_[k] += *upper_in++;
                }
            } else {
                for (size_t k = 0; k < nfft_; ++k) {
                    sample_[k] += *in++;
                }
            }
        }

        void retune_fft_impl::process_items_(size_t c, const input_type* &in)
        {
            for (size_t i = 0; i < c; ++i) {
                for (size_t j = 0; j < (vlen_ / nfft_); ++j, in += nfft_) {
                    if (skip_fft_count_) {
                        --skip_fft_count_;
                        continue;
                    }
                    write_items_(in);
                    sum_items_(in);
                    ++sample_count_;
                    if ((pending_retune_ == 0 || total_tune_count_ == 0) && ++fft_count_ >= tune_step_fft_) {
                        retune_now_();
                    }
                }
            }
            consume_each(c);
        }

        void retune_fft_impl::forecast(int noutput_items, gr_vector_int& ninput_items_required)
        {
            ninput_items_required[0] = 1;
        }

        void retune_fft_impl::output_buckets_(const std::string &name, const std::list<std::pair<double, double>> &buckets, std::stringstream &ss)
        {
            ss << "\"" << name << "\": {";
            for (std::list<std::pair<double, double>>::const_iterator it = buckets.begin(); it != buckets.end(); ++it) {
                if (it != buckets.begin()) {
                    ss << ", ";
                }
                const std::pair<double, double> s = *it;
                ss << "\"" << uint64_t(s.first) << "\": " << s.second;
            }
            ss << "}";
        }

        void retune_fft_impl::reopen_(double host_now, uint64_t rx_freq)
        {
            if (sdir_.length()) {
                std::string bucket_path = secs_dir(sdir_, rotate_secs_) + "fft_" +
                    host_now_str_(host_now) + "_" +
                    std::to_string(uint64_t(nfft_)) + "points_" +
                    std::to_string(uint64_t(rx_freq)) + "Hz_" +
                    std::to_string(uint64_t(samp_rate_)) + "sps.raw.zst";
                open_(bucket_path);
            }
        }

        void retune_fft_impl::write_buckets_(double host_now, uint64_t rx_freq)
        {
            std::list<std::pair<double, double>> buckets;
            const double bucket_size = samp_rate_ / vlen_;
            const double bucket_freq_start = last_rx_freq_ - (samp_rate_ / 2);
            const uint64_t tuning_range_freq_start = tuning_ranges_[last_tuning_range_].first;
            const uint64_t tuning_range_freq_end = tuning_ranges_[last_tuning_range_].second;
            for (size_t i = bucket_offset_; i < (vlen_ - bucket_offset_); ++i) {
                double tuning_range_freq = bucket_freq_start + (i * bucket_size);
                if (tuning_range_freq < tuning_range_freq_start || tuning_range_freq > tuning_range_freq_end) {
                    continue;
                }
                buckets.push_back(std::pair<double, double>(tuning_range_freq, sample_[i]));
            }
            if (buckets.size() == 0) {
                return;
            }
            std::stringstream ss("", std::ios_base::app | std::ios_base::out);
            ss << "{" <<
                "\"ts\": " << host_now_str_(host_now) <<
                ", \"sweep_start\": " << host_now_str_(last_sweep_start_) <<
                ", \"config\": {" <<
                "\"description\": \"" << description_ << "\"" <<
                ", \"tuning_range\": " << last_tuning_range_ <<
                ", \"tuning_range_freq_start\": " << tuning_range_freq_start <<
                ", \"tuning_range_freq_end\": " << tuning_range_freq_end <<
                ", \"freq_start\": " << freq_start_ <<
                ", \"freq_end\": " << freq_end_ <<
                ", \"sample_rate\": " << samp_rate_ <<
                ", \"nfft\": " << nfft_ <<
                ", \"tune_step_fft\": " << tune_step_fft_ <<
                ", \"tune_step_hz\": " << tune_step_hz_ <<
                "}, ";
            output_buckets_("buckets", buckets, ss);
            ss << "}" << std::endl;
            const std::string s = ss.str();
            out_buf_.insert(out_buf_.end(), s.begin(), s.end());
            // TODO: migrate to PMT if/when PMT supports compressed payloads.
            // TODO: compressing multiple messages together if latency not a concern.
            std::stringstream uncompressed_ss(s);
            std::stringstream compressed_ss;
            boost::iostreams::filtering_streambuf<boost::iostreams::input> zstd_out;
            zstd_out.push(boost::iostreams::zstd_compressor(zstd_params));
            zstd_out.push(uncompressed_ss);
            uncompressed_ss.flush();
            boost::iostreams::copy(zstd_out, compressed_ss);
            const std::string compressed_s = compressed_ss.str();
            auto pdu = pmt::cons(pmt::make_dict(), pmt::init_u8vector(compressed_s.length(), (const uint8_t*)compressed_s.c_str()));
            message_port_pub(JSON_OUTPUT, pdu);
        }

        void retune_fft_impl::process_tags_(const input_type *in, size_t in_count, size_t in_first)
        {
            std::vector<tag_t> all_tags, rx_freq_tags;
            std::vector<double> rx_times;
            get_tags_in_window(all_tags, 0, 0, in_count);

            for (size_t t = 0; t < all_tags.size(); ++t) {
                const auto& tag = all_tags[t];
                if (tag.key == tag_) {
                    rx_freq_tags.push_back(tag);
                    continue;
                }
                if (tag.key == RX_TIME_KEY) {
                    rx_times.push_back(rx_time_from_tag_(tag));
                    continue;
                }
            }

            // fall back to host timestamps.
            if (rx_freq_tags.size() != rx_times.size()) {
                rx_times.clear();
                const double host_now = host_now_();
                for (size_t t = 0; t < rx_freq_tags.size(); ++t) {
                    rx_times.push_back(host_now);
                }
            }

            if (rx_freq_tags.empty()) {
                process_items_(in_count, in);
                return;
            }

            for (size_t t = 0; t < rx_freq_tags.size(); ++t) {
                const auto& tag = rx_freq_tags[t];
                const double rx_time = rx_times[t];
                const auto rel = tag.offset - in_first;
                in_first += rel;

                if (rel > 0) {
                    process_items_(rel, in);
                }

                const uint64_t rx_freq = (uint64_t)pmt::to_double(tag.value);

                if (rx_freq != last_rx_freq_) {
                    d_logger->debug("new rx_freq tag: {}, last {}", rx_freq, last_rx_freq_);
                    if (last_rx_freq_ && sample_count_) {
                        std::transform(sample_.begin(), sample_.end(), sample_.begin(), [=](double &c){ return std::max(fft_min_, std::min(c / sample_count_, fft_max_)); });
                        reopen_(rx_time, rx_freq);
                        write_buckets_(rx_time, rx_freq);
                    }
                    std::transform(sample_.begin(), sample_.end(), sample_.begin(), [](double &c){ return 0; });
                    --pending_retune_;
                    sample_count_ = 0;
                    fft_count_ = 0;
                    skip_fft_count_ = skip_tune_step_fft_;
                    write_step_fft_count_ = write_step_fft_;
                    last_rx_freq_ = rx_freq;
                    last_rx_time_ = rx_time;
                }
            }

            process_items_(1, in);
        }

        int retune_fft_impl::general_work(int noutput_items,
                                          gr_vector_int& ninput_items,
                                          gr_vector_const_void_star& input_items,
                                          gr_vector_void_star& output_items)
        {
            if (!out_buf_.empty()) {
                auto out = static_cast<output_type*>(output_items[0]);
                const size_t leftover = std::min(out_buf_.size(), (size_t)noutput_items);
                auto from = out_buf_.begin();
                auto to = from + leftover;
                std::copy(from, to, out);
                out_buf_.erase(from, to);
                return leftover;
            }

            const input_type *in = static_cast<const input_type*>(input_items[0]);
            size_t in_count = ninput_items[0];
            size_t in_first = nitems_read(0);
            process_tags_(in, in_count, in_first);

            return 0;
        }
    } /* namespace iqtlabs */
} /* namespace gr */
