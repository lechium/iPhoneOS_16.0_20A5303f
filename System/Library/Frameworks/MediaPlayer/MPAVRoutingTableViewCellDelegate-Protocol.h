//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVRoutingTableViewCell;

@protocol MPAVRoutingTableViewCellDelegate <NSObject>

@optional
- (void)routingCellDidTapToExpand:(MPAVRoutingTableViewCell *)arg1;
- (void)routingCell:(MPAVRoutingTableViewCell *)arg1 mirroringSwitchValueDidChange:(_Bool)arg2;
@end
