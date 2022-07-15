//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;
@protocol CNContactDataSource_Internal;

@interface ContactsURLParser : NSObject
{
    NSURL *_url;	// 8 = 0x8
    id <CNContactDataSource_Internal> _dataSource;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSNumber *_legacyIdenifier;	// 32 = 0x20
}

+ (id)log;	// IMP=0x0020000000001304
- (void).cxx_destruct;	// IMP=0x00200000000019d1
@property(retain, nonatomic) NSNumber *legacyIdenifier; // @synthesize legacyIdenifier=_legacyIdenifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <CNContactDataSource_Internal> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)legacyIdentifierFound;	// IMP=0x0010000000001969
- (id)identifierFound;	// IMP=0x0010000000001957
- (id)identifierFromShowCommandURL:(id)arg1;	// IMP=0x0010000000001644
- (void)readURL:(id)arg1;	// IMP=0x001000000000141b
- (id)initWithURL:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000001360

@end
