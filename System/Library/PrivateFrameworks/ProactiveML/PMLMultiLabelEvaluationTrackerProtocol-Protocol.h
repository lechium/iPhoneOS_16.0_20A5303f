//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class AWDProactiveModelFittingMinibatchStats, NSDictionary;

@protocol PMLMultiLabelEvaluationTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (NSDictionary *)trackPrecisionAtK:(NSDictionary *)arg1 minibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg2;
- (NSDictionary *)trackPrecisionAtK:(NSDictionary *)arg1;
@end
