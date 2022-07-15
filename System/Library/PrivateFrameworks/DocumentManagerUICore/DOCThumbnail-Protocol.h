//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DocumentManagerUICore/NSObject-Protocol.h>

@class UIColor, UIImage;
@protocol DOCThumbnailListener;

@protocol DOCThumbnail <NSObject>
@property(readonly) _Bool hasFinishedTryingToFetchCorrectThumbnail;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, nonatomic) _Bool isRepresentativeIcon;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (_Bool)registerGenerationCompletionHandler:(void (^)(void))arg1;
- (void)scheduleUpdateIfNeeded;
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)addListener:(id <DOCThumbnailListener>)arg1;
- (UIColor *)averageColorInRect:(struct CGRect)arg1;
@end
