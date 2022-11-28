﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/BootMode.h>
#include <aws/mgn/model/LaunchTemplateDiskConf.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class AWS_MGN_API CreateLaunchConfigurationTemplateRequest : public MgnRequest
  {
  public:
    CreateLaunchConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchConfigurationTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Associate public Ip address.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Associate public Ip address.</p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>Associate public Ip address.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Associate public Ip address.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline const BootMode& GetBootMode() const{ return m_bootMode; }

    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }

    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline void SetBootMode(const BootMode& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }

    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline void SetBootMode(BootMode&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }

    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithBootMode(const BootMode& value) { SetBootMode(value); return *this;}

    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithBootMode(BootMode&& value) { SetBootMode(std::move(value)); return *this;}


    /**
     * <p>Copy private Ip.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }

    /**
     * <p>Copy private Ip.</p>
     */
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }

    /**
     * <p>Copy private Ip.</p>
     */
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }

    /**
     * <p>Copy private Ip.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}


    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Copy tags.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>Copy tags.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>Copy tags.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const{ return m_enableMapAutoTagging; }

    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool EnableMapAutoTaggingHasBeenSet() const { return m_enableMapAutoTaggingHasBeenSet; }

    /**
     * <p>Enable map auto tagging.</p>
     */
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTaggingHasBeenSet = true; m_enableMapAutoTagging = value; }

    /**
     * <p>Enable map auto tagging.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}


    /**
     * <p>Large volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetLargeVolumeConf() const{ return m_largeVolumeConf; }

    /**
     * <p>Large volume config.</p>
     */
    inline bool LargeVolumeConfHasBeenSet() const { return m_largeVolumeConfHasBeenSet; }

    /**
     * <p>Large volume config.</p>
     */
    inline void SetLargeVolumeConf(const LaunchTemplateDiskConf& value) { m_largeVolumeConfHasBeenSet = true; m_largeVolumeConf = value; }

    /**
     * <p>Large volume config.</p>
     */
    inline void SetLargeVolumeConf(LaunchTemplateDiskConf&& value) { m_largeVolumeConfHasBeenSet = true; m_largeVolumeConf = std::move(value); }

    /**
     * <p>Large volume config.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithLargeVolumeConf(const LaunchTemplateDiskConf& value) { SetLargeVolumeConf(value); return *this;}

    /**
     * <p>Large volume config.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithLargeVolumeConf(LaunchTemplateDiskConf&& value) { SetLargeVolumeConf(std::move(value)); return *this;}


    /**
     * <p>Launch disposition.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }

    /**
     * <p>Launch disposition.</p>
     */
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }

    /**
     * <p>Launch disposition.</p>
     */
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }

    /**
     * <p>Launch disposition.</p>
     */
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = std::move(value); }

    /**
     * <p>Launch disposition.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}

    /**
     * <p>Launch disposition.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}


    
    inline const Licensing& GetLicensing() const{ return m_licensing; }

    
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }

    
    inline void SetLicensing(const Licensing& value) { m_licensingHasBeenSet = true; m_licensing = value; }

    
    inline void SetLicensing(Licensing&& value) { m_licensingHasBeenSet = true; m_licensing = std::move(value); }

    
    inline CreateLaunchConfigurationTemplateRequest& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}

    
    inline CreateLaunchConfigurationTemplateRequest& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}


    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const{ return m_mapAutoTaggingMpeID; }

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline bool MapAutoTaggingMpeIDHasBeenSet() const { return m_mapAutoTaggingMpeIDHasBeenSet; }

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline void SetMapAutoTaggingMpeID(const Aws::String& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = value; }

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline void SetMapAutoTaggingMpeID(Aws::String&& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = std::move(value); }

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline void SetMapAutoTaggingMpeID(const char* value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID.assign(value); }

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithMapAutoTaggingMpeID(const Aws::String& value) { SetMapAutoTaggingMpeID(value); return *this;}

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithMapAutoTaggingMpeID(Aws::String&& value) { SetMapAutoTaggingMpeID(std::move(value)); return *this;}

    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithMapAutoTaggingMpeID(const char* value) { SetMapAutoTaggingMpeID(value); return *this;}


    /**
     * <p>Launch configuration template post launch actions.</p>
     */
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }

    /**
     * <p>Launch configuration template post launch actions.</p>
     */
    inline bool PostLaunchActionsHasBeenSet() const { return m_postLaunchActionsHasBeenSet; }

    /**
     * <p>Launch configuration template post launch actions.</p>
     */
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = value; }

    /**
     * <p>Launch configuration template post launch actions.</p>
     */
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = std::move(value); }

    /**
     * <p>Launch configuration template post launch actions.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}

    /**
     * <p>Launch configuration template post launch actions.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}


    /**
     * <p>Small volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetSmallVolumeConf() const{ return m_smallVolumeConf; }

    /**
     * <p>Small volume config.</p>
     */
    inline bool SmallVolumeConfHasBeenSet() const { return m_smallVolumeConfHasBeenSet; }

    /**
     * <p>Small volume config.</p>
     */
    inline void SetSmallVolumeConf(const LaunchTemplateDiskConf& value) { m_smallVolumeConfHasBeenSet = true; m_smallVolumeConf = value; }

    /**
     * <p>Small volume config.</p>
     */
    inline void SetSmallVolumeConf(LaunchTemplateDiskConf&& value) { m_smallVolumeConfHasBeenSet = true; m_smallVolumeConf = std::move(value); }

    /**
     * <p>Small volume config.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithSmallVolumeConf(const LaunchTemplateDiskConf& value) { SetSmallVolumeConf(value); return *this;}

    /**
     * <p>Small volume config.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithSmallVolumeConf(LaunchTemplateDiskConf&& value) { SetSmallVolumeConf(std::move(value)); return *this;}


    /**
     * <p>Small volume maximum size.</p>
     */
    inline long long GetSmallVolumeMaxSize() const{ return m_smallVolumeMaxSize; }

    /**
     * <p>Small volume maximum size.</p>
     */
    inline bool SmallVolumeMaxSizeHasBeenSet() const { return m_smallVolumeMaxSizeHasBeenSet; }

    /**
     * <p>Small volume maximum size.</p>
     */
    inline void SetSmallVolumeMaxSize(long long value) { m_smallVolumeMaxSizeHasBeenSet = true; m_smallVolumeMaxSize = value; }

    /**
     * <p>Small volume maximum size.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithSmallVolumeMaxSize(long long value) { SetSmallVolumeMaxSize(value); return *this;}


    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request to associate tags during creation of a Launch Configuration
     * Template.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = std::move(value); }

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}

    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline CreateLaunchConfigurationTemplateRequest& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}

  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    BootMode m_bootMode;
    bool m_bootModeHasBeenSet = false;

    bool m_copyPrivateIp;
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    bool m_enableMapAutoTagging;
    bool m_enableMapAutoTaggingHasBeenSet = false;

    LaunchTemplateDiskConf m_largeVolumeConf;
    bool m_largeVolumeConfHasBeenSet = false;

    LaunchDisposition m_launchDisposition;
    bool m_launchDispositionHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    Aws::String m_mapAutoTaggingMpeID;
    bool m_mapAutoTaggingMpeIDHasBeenSet = false;

    PostLaunchActions m_postLaunchActions;
    bool m_postLaunchActionsHasBeenSet = false;

    LaunchTemplateDiskConf m_smallVolumeConf;
    bool m_smallVolumeConfHasBeenSet = false;

    long long m_smallVolumeMaxSize;
    bool m_smallVolumeMaxSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
