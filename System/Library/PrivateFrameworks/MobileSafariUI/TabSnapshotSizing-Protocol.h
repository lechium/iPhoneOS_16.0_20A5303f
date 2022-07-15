//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class UITraitCollection;

@protocol TabSnapshotSizing <NSObject>
@property(readonly, nonatomic) unsigned long long snapshotBorderOptions;
@property(readonly, nonatomic) double desiredSnapshotScale;
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect)arg1 withTraitCollection:(UITraitCollection *)arg2;
- (struct CGSize)snapshotSizeForSuggestedSize:(struct CGSize)arg1;
@end
