//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSXPCStoreManagedObjectArchivingToken : NSObject
{
    NSURL *_managedObjectReferenceURI;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000019aae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019def
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019b76
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019b53
- (void)dealloc;	// IMP=0x0000000000019b10
- (id)URI;	// IMP=0x0000000000019b06
- (id)initWithURI:(id)arg1;	// IMP=0x0000000000019ab6

@end

