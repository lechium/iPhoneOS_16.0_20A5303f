//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLShareableContentActionResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000067f91
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0010000000067f71
+ (id)response;	// IMP=0x0010000000067f30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000067fab
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067f99
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000067f8b
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000067f79
- (id)init;	// IMP=0x0000000000067f42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

