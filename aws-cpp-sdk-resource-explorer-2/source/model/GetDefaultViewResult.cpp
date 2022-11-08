﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/GetDefaultViewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDefaultViewResult::GetDefaultViewResult()
{
}

GetDefaultViewResult::GetDefaultViewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDefaultViewResult& GetDefaultViewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ViewArn"))
  {
    m_viewArn = jsonValue.GetString("ViewArn");

  }



  return *this;
}
