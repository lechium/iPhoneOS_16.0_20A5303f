//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDWPSectionTemplatePage : NSObject
{
    struct __CFString *mHeaderIdentifier;	// 8 = 0x8
    struct __CFString *mFooterIdentifier;	// 16 = 0x10
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x001000000004b649
- (struct __CFString *)footerIdentifier;	// IMP=0x000000000004b585
- (struct __CFString *)headerIdentifier;	// IMP=0x000000000004b57b
- (void)dealloc;	// IMP=0x000000000004b52e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
