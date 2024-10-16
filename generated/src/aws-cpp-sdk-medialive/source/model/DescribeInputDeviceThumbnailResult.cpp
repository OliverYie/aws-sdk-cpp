﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputDeviceThumbnailResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

DescribeInputDeviceThumbnailResult::DescribeInputDeviceThumbnailResult() : 
    m_contentType(ContentType::NOT_SET),
    m_contentLength(0)
{
}

DescribeInputDeviceThumbnailResult::DescribeInputDeviceThumbnailResult(DescribeInputDeviceThumbnailResult&& toMove) : 
    m_body(std::move(toMove.m_body)),
    m_contentType(toMove.m_contentType),
    m_contentLength(toMove.m_contentLength),
    m_eTag(std::move(toMove.m_eTag)),
    m_lastModified(std::move(toMove.m_lastModified)),
    m_requestId(std::move(toMove.m_requestId))
{
}

DescribeInputDeviceThumbnailResult& DescribeInputDeviceThumbnailResult::operator=(DescribeInputDeviceThumbnailResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_body = std::move(toMove.m_body);
   m_contentType = toMove.m_contentType;
   m_contentLength = toMove.m_contentLength;
   m_eTag = std::move(toMove.m_eTag);
   m_lastModified = std::move(toMove.m_lastModified);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

DescribeInputDeviceThumbnailResult::DescribeInputDeviceThumbnailResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
  : DescribeInputDeviceThumbnailResult()
{
  *this = std::move(result);
}

DescribeInputDeviceThumbnailResult& DescribeInputDeviceThumbnailResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = ContentTypeMapper::GetContentTypeForName(contentTypeIter->second);
  }

  const auto& contentLengthIter = headers.find("content-length");
  if(contentLengthIter != headers.end())
  {
     m_contentLength = StringUtils::ConvertToInt64(contentLengthIter->second.c_str());
  }

  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  const auto& lastModifiedIter = headers.find("last-modified");
  if(lastModifiedIter != headers.end())
  {
    m_lastModified = DateTime(lastModifiedIter->second, Aws::Utils::DateFormat::RFC822);
    if(!m_lastModified.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("MediaLive::DescribeInputDeviceThumbnailResult", "Failed to parse lastModified header as an RFC822 timestamp: " << lastModifiedIter->second.c_str());
    }
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
