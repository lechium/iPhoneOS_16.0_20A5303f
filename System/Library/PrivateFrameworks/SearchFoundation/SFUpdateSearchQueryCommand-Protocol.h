//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFUpdateSearchQueryCommand <SFCommand>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int querySource;
@property(copy, nonatomic) NSString *searchString;
@end
