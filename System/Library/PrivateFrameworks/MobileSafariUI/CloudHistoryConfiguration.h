//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSCloudHistoryConfiguration.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration
{
    NSArray *_assetsSortedByVersionNumber;	// 8 = 0x8
    NSDictionary *_remoteConfigurationDictionary;	// 16 = 0x10
    _Bool _fetchedAssetData;	// 24 = 0x18
}

+ (id)sharedConfiguration;	// IMP=0x006000000008440c
- (void).cxx_destruct;	// IMP=0x0000000000084edf
- (_Bool)shouldUseLongLivedOperationsToSaveRecords;	// IMP=0x0000000000084ebe
- (void)_reloadConfigurationDataIfNecessary;	// IMP=0x0000000000084c49
- (id)_cloudConfigurationAssetsSortedByVersionNumber;	// IMP=0x00000000000849d6
- (id)remoteConfiguration;	// IMP=0x000000000008459a
- (id)platformBuiltInConfiguration;	// IMP=0x00000000000844dd
- (id)init;	// IMP=0x0000000000084461

@end

