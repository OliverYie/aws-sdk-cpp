﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/StartStreamTranscriptionInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse() : 
    m_vocabularyNamesHasBeenSet(false),
    m_identifyMultipleLanguages(false),
    m_identifyMultipleLanguagesHasBeenSet(false),
    m_languageModelNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_vocabularyFilterNameHasBeenSet(false),
    m_mediaSampleRateHertz(0),
    m_mediaSampleRateHertzHasBeenSet(false),
    m_identifyLanguage(false),
    m_identifyLanguageHasBeenSet(false),
    m_mediaEncoding(MediaEncoding::NOT_SET),
    m_mediaEncodingHasBeenSet(false),
    m_partialResultsStability(PartialResultsStability::NOT_SET),
    m_partialResultsStabilityHasBeenSet(false),
    m_languageOptionsHasBeenSet(false),
    m_vocabularyFilterNamesHasBeenSet(false),
    m_enablePartialResultsStabilization(false),
    m_enablePartialResultsStabilizationHasBeenSet(false),
    m_languageCode(LanguageCode::NOT_SET),
    m_languageCodeHasBeenSet(false),
    m_vocabularyNameHasBeenSet(false),
    m_contentRedactionType(ContentRedactionType::NOT_SET),
    m_contentRedactionTypeHasBeenSet(false),
    m_showSpeakerLabel(false),
    m_showSpeakerLabelHasBeenSet(false),
    m_contentIdentificationType(ContentIdentificationType::NOT_SET),
    m_contentIdentificationTypeHasBeenSet(false),
    m_preferredLanguage(LanguageCode::NOT_SET),
    m_preferredLanguageHasBeenSet(false),
    m_piiEntityTypesHasBeenSet(false),
    m_enableChannelIdentification(false),
    m_enableChannelIdentificationHasBeenSet(false),
    m_numberOfChannels(0),
    m_numberOfChannelsHasBeenSet(false),
    m_vocabularyFilterMethod(VocabularyFilterMethod::NOT_SET),
    m_vocabularyFilterMethodHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse(JsonView jsonValue)
  : StartStreamTranscriptionInitialResponse()
{
  *this = jsonValue;
}

StartStreamTranscriptionInitialResponse& StartStreamTranscriptionInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartStreamTranscriptionInitialResponse::StartStreamTranscriptionInitialResponse(const Http::HeaderValueCollection& headers) : StartStreamTranscriptionInitialResponse()
{
  const auto& identifyMultipleLanguagesIter = headers.find("x-amzn-transcribe-identify-multiple-languages");
  if(identifyMultipleLanguagesIter != headers.end())
  {
     m_identifyMultipleLanguages = StringUtils::ConvertToBool(identifyMultipleLanguagesIter->second.c_str());
  }

  const auto& vocabularyNamesIter = headers.find("x-amzn-transcribe-vocabulary-names");
  if(vocabularyNamesIter != headers.end())
  {
    m_vocabularyNames = vocabularyNamesIter->second;
  }

  const auto& languageModelNameIter = headers.find("x-amzn-transcribe-language-model-name");
  if(languageModelNameIter != headers.end())
  {
    m_languageModelName = languageModelNameIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  const auto& vocabularyFilterNameIter = headers.find("x-amzn-transcribe-vocabulary-filter-name");
  if(vocabularyFilterNameIter != headers.end())
  {
    m_vocabularyFilterName = vocabularyFilterNameIter->second;
  }

  const auto& mediaSampleRateHertzIter = headers.find("x-amzn-transcribe-sample-rate");
  if(mediaSampleRateHertzIter != headers.end())
  {
     m_mediaSampleRateHertz = StringUtils::ConvertToInt32(mediaSampleRateHertzIter->second.c_str());
  }

  const auto& mediaEncodingIter = headers.find("x-amzn-transcribe-media-encoding");
  if(mediaEncodingIter != headers.end())
  {
    m_mediaEncoding = MediaEncodingMapper::GetMediaEncodingForName(mediaEncodingIter->second);
  }

  const auto& identifyLanguageIter = headers.find("x-amzn-transcribe-identify-language");
  if(identifyLanguageIter != headers.end())
  {
     m_identifyLanguage = StringUtils::ConvertToBool(identifyLanguageIter->second.c_str());
  }

  const auto& partialResultsStabilityIter = headers.find("x-amzn-transcribe-partial-results-stability");
  if(partialResultsStabilityIter != headers.end())
  {
    m_partialResultsStability = PartialResultsStabilityMapper::GetPartialResultsStabilityForName(partialResultsStabilityIter->second);
  }

  const auto& languageOptionsIter = headers.find("x-amzn-transcribe-language-options");
  if(languageOptionsIter != headers.end())
  {
    m_languageOptions = languageOptionsIter->second;
  }

  const auto& vocabularyFilterNamesIter = headers.find("x-amzn-transcribe-vocabulary-filter-names");
  if(vocabularyFilterNamesIter != headers.end())
  {
    m_vocabularyFilterNames = vocabularyFilterNamesIter->second;
  }

  const auto& languageCodeIter = headers.find("x-amzn-transcribe-language-code");
  if(languageCodeIter != headers.end())
  {
    m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(languageCodeIter->second);
  }

  const auto& enablePartialResultsStabilizationIter = headers.find("x-amzn-transcribe-enable-partial-results-stabilization");
  if(enablePartialResultsStabilizationIter != headers.end())
  {
     m_enablePartialResultsStabilization = StringUtils::ConvertToBool(enablePartialResultsStabilizationIter->second.c_str());
  }

  const auto& vocabularyNameIter = headers.find("x-amzn-transcribe-vocabulary-name");
  if(vocabularyNameIter != headers.end())
  {
    m_vocabularyName = vocabularyNameIter->second;
  }

  const auto& contentRedactionTypeIter = headers.find("x-amzn-transcribe-content-redaction-type");
  if(contentRedactionTypeIter != headers.end())
  {
    m_contentRedactionType = ContentRedactionTypeMapper::GetContentRedactionTypeForName(contentRedactionTypeIter->second);
  }

  const auto& showSpeakerLabelIter = headers.find("x-amzn-transcribe-show-speaker-label");
  if(showSpeakerLabelIter != headers.end())
  {
     m_showSpeakerLabel = StringUtils::ConvertToBool(showSpeakerLabelIter->second.c_str());
  }

  const auto& contentIdentificationTypeIter = headers.find("x-amzn-transcribe-content-identification-type");
  if(contentIdentificationTypeIter != headers.end())
  {
    m_contentIdentificationType = ContentIdentificationTypeMapper::GetContentIdentificationTypeForName(contentIdentificationTypeIter->second);
  }

  const auto& piiEntityTypesIter = headers.find("x-amzn-transcribe-pii-entity-types");
  if(piiEntityTypesIter != headers.end())
  {
    m_piiEntityTypes = piiEntityTypesIter->second;
  }

  const auto& preferredLanguageIter = headers.find("x-amzn-transcribe-preferred-language");
  if(preferredLanguageIter != headers.end())
  {
    m_preferredLanguage = LanguageCodeMapper::GetLanguageCodeForName(preferredLanguageIter->second);
  }

  const auto& enableChannelIdentificationIter = headers.find("x-amzn-transcribe-enable-channel-identification");
  if(enableChannelIdentificationIter != headers.end())
  {
     m_enableChannelIdentification = StringUtils::ConvertToBool(enableChannelIdentificationIter->second.c_str());
  }

  const auto& vocabularyFilterMethodIter = headers.find("x-amzn-transcribe-vocabulary-filter-method");
  if(vocabularyFilterMethodIter != headers.end())
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(vocabularyFilterMethodIter->second);
  }

  const auto& numberOfChannelsIter = headers.find("x-amzn-transcribe-number-of-channels");
  if(numberOfChannelsIter != headers.end())
  {
     m_numberOfChannels = StringUtils::ConvertToInt32(numberOfChannelsIter->second.c_str());
  }

  const auto& sessionIdIter = headers.find("x-amzn-transcribe-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
  }

}

JsonValue StartStreamTranscriptionInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
