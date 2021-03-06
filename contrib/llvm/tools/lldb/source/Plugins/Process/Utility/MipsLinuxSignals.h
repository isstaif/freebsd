//===-- MipsLinuxSignals.h ------------------------------------------*- C++
//-*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef liblldb_MipsLinuxSignals_H_
#define liblldb_MipsLinuxSignals_H_

#include "lldb/Target/UnixSignals.h"

namespace lldb_private {

/// Linux specific set of Unix signals.
class MipsLinuxSignals : public UnixSignals {
public:
  MipsLinuxSignals();

private:
  void Reset() override;
};

} // namespace lldb_private

#endif // liblldb_MipsLinuxSignals_H_
