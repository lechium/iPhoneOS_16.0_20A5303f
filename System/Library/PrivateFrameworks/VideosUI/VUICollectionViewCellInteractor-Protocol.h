//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIView, VUIBaseCollectionViewCell;

@protocol VUICollectionViewCellInteractor

@optional
- (_Bool)vui_handleActionInCell:(VUIBaseCollectionViewCell *)arg1 fromSubview:(UIView *)arg2 details:(NSDictionary *)arg3;
- (void)vui_cellNeedsReloading:(VUIBaseCollectionViewCell *)arg1;
@end

