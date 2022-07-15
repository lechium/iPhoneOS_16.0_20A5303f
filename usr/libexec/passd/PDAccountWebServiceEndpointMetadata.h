//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PDAccountWebServiceEndpointMetadata : NSObject
{
    _Bool _isDirty;	// 8 = 0x8
    unsigned long long _endpoint;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
    NSDate *_lastUpdated;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000024c105
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) unsigned long long endpoint; // @synthesize endpoint=_endpoint;
- (id)initWithAccountIdentifier:(id)arg1 endpoint:(unsigned long long)arg2;	// IMP=0x001000000024c037

@end
