﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListLegalHoldsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLegalHoldsResult::ListLegalHoldsResult()
{
}

ListLegalHoldsResult::ListLegalHoldsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLegalHoldsResult& ListLegalHoldsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("LegalHolds"))
  {
    Aws::Utils::Array<JsonView> legalHoldsJsonList = jsonValue.GetArray("LegalHolds");
    for(unsigned legalHoldsIndex = 0; legalHoldsIndex < legalHoldsJsonList.GetLength(); ++legalHoldsIndex)
    {
      m_legalHolds.push_back(legalHoldsJsonList[legalHoldsIndex].AsObject());
    }
  }



  return *this;
}
