//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (CLDeepCopying)
- (id)cl_deepCopy;	// IMP=0x002000000057c9f4
- (id)cl_hexadecimalString;	// IMP=0x00100000005f2ff2
- (id)_cl_initWithFileDescriptor:(int)arg1;	// IMP=0x001000000076b3db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
