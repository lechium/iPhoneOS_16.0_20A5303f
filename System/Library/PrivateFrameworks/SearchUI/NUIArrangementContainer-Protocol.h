//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@protocol NUIArrangementItem;

@protocol NUIArrangementContainer <NSObject>
- (struct CGRect)layoutFrameForArrangedSubview:(id <NUIArrangementItem>)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id <NUIArrangementItem>)arg2;

@optional
- (long long)effectiveUserInterfaceLayoutDirection;
- (double)displayScale;
@end

