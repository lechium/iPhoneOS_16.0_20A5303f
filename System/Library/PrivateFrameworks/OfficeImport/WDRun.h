//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject
{
    WDParagraph *mParagraph;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000402385
@property(readonly) __weak WDParagraph *paragraph; // @synthesize paragraph=mParagraph;
- (id)description;	// IMP=0x0000000000402347
- (void)clearProperties;	// IMP=0x0000000000402341
- (_Bool)isEmpty;	// IMP=0x0000000000402339
- (id)initWithParagraph:(id)arg1;	// IMP=0x00000000000d8634
- (id)init;	// IMP=0x000000000040232b
- (int)runType;	// IMP=0x0000000000402323

@end

