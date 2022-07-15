//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSAssetDownloadingOption : NSObject
{
    _Bool _allowVoiceTriggerAssetDownloading;	// 8 = 0x8
    _Bool _allowEndpointAssetDownloading;	// 9 = 0x9
    _Bool _allowLanguageDetectorAssetDownloading;	// 10 = 0xa
    _Bool _allowAdBlockerAssetDownloading;	// 11 = 0xb
    _Bool _allowSpeakerRecognitionAssetDownloading;	// 12 = 0xc
    _Bool _allowVoiceTriggerAccessoryAssetDownloading;	// 13 = 0xd
}

@property(nonatomic) _Bool allowVoiceTriggerAccessoryAssetDownloading; // @synthesize allowVoiceTriggerAccessoryAssetDownloading=_allowVoiceTriggerAccessoryAssetDownloading;
@property(nonatomic) _Bool allowSpeakerRecognitionAssetDownloading; // @synthesize allowSpeakerRecognitionAssetDownloading=_allowSpeakerRecognitionAssetDownloading;
@property(nonatomic) _Bool allowAdBlockerAssetDownloading; // @synthesize allowAdBlockerAssetDownloading=_allowAdBlockerAssetDownloading;
@property(nonatomic) _Bool allowLanguageDetectorAssetDownloading; // @synthesize allowLanguageDetectorAssetDownloading=_allowLanguageDetectorAssetDownloading;
@property(nonatomic) _Bool allowEndpointAssetDownloading; // @synthesize allowEndpointAssetDownloading=_allowEndpointAssetDownloading;
@property(nonatomic) _Bool allowVoiceTriggerAssetDownloading; // @synthesize allowVoiceTriggerAssetDownloading=_allowVoiceTriggerAssetDownloading;
- (id)description;	// IMP=0x001000000004df05
- (id)init;	// IMP=0x001000000004dec6

@end
