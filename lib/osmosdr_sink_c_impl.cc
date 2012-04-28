/* -*- c++ -*- */
/*
 * Copyright 2012 Dimitri Stolnikov <horiz0n@gmx.net>
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

/*
 * config.h is generated by configure.  It contains the results
 * of probing for features, options etc.  It should be the first
 * file included in your .cc file.
 */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <osmosdr_sink_c_impl.h>
#include <gr_io_signature.h>

/*
 * Create a new instance of osmosdr_sink_c_impl and return
 * a boost shared_ptr.  This is effectively the public constructor.
 */
osmosdr_sink_c_sptr
osmosdr_make_sink_c (const std::string &args)
{
  return gnuradio::get_initial_sptr(new osmosdr_sink_c_impl (args));
}

/*
 * Specify constraints on number of input and output streams.
 * This info is used to construct the input and output signatures
 * (2nd & 3rd args to gr_block's constructor).  The input and
 * output signatures are used by the runtime system to
 * check that a valid number and type of inputs and outputs
 * are connected to this block.  In this case, we accept
 * only 1 input and 0 output.
 */
static const int MIN_IN = 1;	// mininum number of input streams
static const int MAX_IN = 1;	// maximum number of input streams
static const int MIN_OUT = 0;	// minimum number of output streams
static const int MAX_OUT = 0;	// maximum number of output streams

/*
 * The private constructor
 */
osmosdr_sink_c_impl::osmosdr_sink_c_impl (const std::string &args)
  : gr_hier_block2 ("osmosdr_sink_c_impl",
        gr_make_io_signature (MIN_IN, MAX_IN, sizeof (gr_complex)),
        gr_make_io_signature (MIN_OUT, MAX_OUT, sizeof (gr_complex)))
{
  //connect(_src, 0, self(), 0);
}
