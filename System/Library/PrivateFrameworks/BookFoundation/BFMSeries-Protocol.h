//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookFoundation/BFMResource-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol BFMSeries <BFMResource>
@property(nonatomic, readonly) NSArray *assets;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) _Bool isOrdered;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) _Bool isAudiobookSeries;
@property(nonatomic, readonly) _Bool isBookSeries;
@end

