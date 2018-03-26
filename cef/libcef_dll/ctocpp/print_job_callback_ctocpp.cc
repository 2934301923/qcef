// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=8213d4426eef64d20c16ae466f5c03c1cae911dd$
//

#include "libcef_dll/ctocpp/print_job_callback_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

void CefPrintJobCallbackCToCpp::Continue() {
  cef_print_job_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cont(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefPrintJobCallbackCToCpp::CefPrintJobCallbackCToCpp() {}

template <>
cef_print_job_callback_t* CefCToCppRefCounted<
    CefPrintJobCallbackCToCpp,
    CefPrintJobCallback,
    cef_print_job_callback_t>::UnwrapDerived(CefWrapperType type,
                                             CefPrintJobCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefPrintJobCallbackCToCpp,
                                         CefPrintJobCallback,
                                         cef_print_job_callback_t>::DebugObjCt =
    0;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefPrintJobCallbackCToCpp,
                                   CefPrintJobCallback,
                                   cef_print_job_callback_t>::kWrapperType =
    WT_PRINT_JOB_CALLBACK;
