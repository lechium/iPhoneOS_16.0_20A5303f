//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSTextAttachment.h>

@class NSObject, NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SKUIBadgeTextAttachment : NSTextAttachment
{
    NSURL *_imageURL;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_imageLoadingSemaphore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a8a90
@property(retain) NSObject<OS_dispatch_semaphore> *imageLoadingSemaphore; // @synthesize imageLoadingSemaphore=_imageLoadingSemaphore;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3;	// IMP=0x00000000002a8910
- (void)_ensureImageIsLoaded;	// IMP=0x00000000002a88cf
@property(readonly, nonatomic) struct CGSize badgeSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a876e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a85e0
- (unsigned long long)hash;	// IMP=0x00000000002a8423
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000002a8151

@end

