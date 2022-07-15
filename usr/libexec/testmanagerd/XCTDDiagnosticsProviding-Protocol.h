//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDate, XCTSpindumpRequestSpecification, XCTTailspinRequest;

@protocol XCTDDiagnosticsProviding <NSObject>
- (void)requestTailspinWithRequest:(XCTTailspinRequest *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)requestSpindumpWithSpecification:(XCTSpindumpRequestSpecification *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)requestLogArchiveForUser:(unsigned int)arg1 startDate:(NSDate *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
@end
