//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPContext, NSArray, NSDictionary;

@protocol CDPDOctagonTrustProxy <NSObject>
@property(retain, nonatomic) CDPContext *cdpContext;
- (NSArray *)fetchAllEscrowRecords:(NSDictionary *)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)fetchEscrowRecords:(NSDictionary *)arg1 forceFetch:(_Bool)arg2 error:(id *)arg3;
- (id)initWithContext:(CDPContext *)arg1;
@end

