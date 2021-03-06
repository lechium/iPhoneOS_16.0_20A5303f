//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TouchML/JSExport-Protocol.h>

@class TMLRect, TMLSize;

@protocol TMLSizeJSExports <JSExport>
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (TMLSize *)max:(double)arg1:(double)arg2;
- (TMLSize *)min:(double)arg1:(double)arg2;
- (TMLRect *)asRect;
- (TMLSize *)scale:(double)arg1:(double)arg2;
- (TMLSize *)extend:(double)arg1:(double)arg2;
@end

