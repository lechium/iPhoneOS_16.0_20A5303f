//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSString, PGGraphRelationshipProcessor;

@protocol PGRelationshipAnalyzer <NSObject>
@property(readonly, nonatomic) NSString *name;
- (void)runAnalysisWithProgressBlock:(void (^)(double, _Bool *))arg1;
- (id)initWithRelationshipProcessor:(PGGraphRelationshipProcessor *)arg1;
@end

