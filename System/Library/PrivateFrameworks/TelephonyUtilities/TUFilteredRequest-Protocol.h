//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol TUContactsDataSource;

@protocol TUFilteredRequest <NSObject>
- (NSDictionary *)contactNamesByHandleWithContactsDataSource:(id <TUContactsDataSource>)arg1;
- (NSSet *)handles;
- (NSString *)bundleIdentifier;
@end
