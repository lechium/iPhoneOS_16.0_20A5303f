//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthAlgorithms/NSObject-Protocol.h>

@class NSDictionary;
@protocol NSFastEnumeration;

@protocol SRSampleExporting <NSObject>

@optional
- (id <NSFastEnumeration>)sr_exportRepresentationEnumerator;
- (NSDictionary *)sr_dictionaryRepresentation;
@end

