//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FRFeldsparContext;

@interface FROnboardingImageFetcher : NSObject
{
    FRFeldsparContext *_feldsparContext;	// 8 = 0x8
}

+ (id)sharedFetcher;	// IMP=0x00400000000e1027
- (void).cxx_destruct;	// IMP=0x00200000000e1d7d
@property(retain, nonatomic) FRFeldsparContext *feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void)_startDownloadingImagesForFeeds:(id)arg1;	// IMP=0x00100000000e17e5
- (void)startDownloadingImagesForItems:(id)arg1;	// IMP=0x00100000000e1777
- (void)fetchImageForItem:(id)arg1 preferredContentSizeCategory:(id)arg2 parentBackgroundColor:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e107c

@end

