//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;

@protocol PXPeopleDetailSettingsDataSource <NSObject>
@property(readonly, nonatomic) long long action;
@property(readonly, nonatomic) _Bool hasMoreDetails;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(copy, nonatomic) NSString *title;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 resultHandler:(void (^)(UIImage *, struct CGRect))arg4;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(void (^)(UIImage *))arg3;

@optional
- (id)modelObjectForIndex:(long long)arg1;
- (long long)verifyTypeAtIndex:(long long)arg1;
- (unsigned long long)faceCount:(long long)arg1;
- (NSString *)personNameAtIndex:(long long)arg1;
@end
