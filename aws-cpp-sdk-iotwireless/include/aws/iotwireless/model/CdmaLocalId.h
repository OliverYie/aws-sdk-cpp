﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>CDMA local ID information, which corresponds to the local identification
   * parameters of a CDMA cell.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/CdmaLocalId">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API CdmaLocalId
  {
  public:
    CdmaLocalId();
    CdmaLocalId(Aws::Utils::Json::JsonView jsonValue);
    CdmaLocalId& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline int GetPnOffset() const{ return m_pnOffset; }

    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline bool PnOffsetHasBeenSet() const { return m_pnOffsetHasBeenSet; }

    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline void SetPnOffset(int value) { m_pnOffsetHasBeenSet = true; m_pnOffset = value; }

    /**
     * <p>Pseudo-noise offset, which is a characteristic of the signal from a cell on a
     * radio tower.</p>
     */
    inline CdmaLocalId& WithPnOffset(int value) { SetPnOffset(value); return *this;}


    /**
     * <p>CDMA channel information.</p>
     */
    inline int GetCdmaChannel() const{ return m_cdmaChannel; }

    /**
     * <p>CDMA channel information.</p>
     */
    inline bool CdmaChannelHasBeenSet() const { return m_cdmaChannelHasBeenSet; }

    /**
     * <p>CDMA channel information.</p>
     */
    inline void SetCdmaChannel(int value) { m_cdmaChannelHasBeenSet = true; m_cdmaChannel = value; }

    /**
     * <p>CDMA channel information.</p>
     */
    inline CdmaLocalId& WithCdmaChannel(int value) { SetCdmaChannel(value); return *this;}

  private:

    int m_pnOffset;
    bool m_pnOffsetHasBeenSet = false;

    int m_cdmaChannel;
    bool m_cdmaChannelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
