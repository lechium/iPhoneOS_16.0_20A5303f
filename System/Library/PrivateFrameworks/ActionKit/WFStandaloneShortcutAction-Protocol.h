//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@protocol WFStandaloneShortcutAction <NSObject>
- (void)generateStandaloneShortcutRepresentation:(void (^)(WFStandaloneShortcutRepresentation *))arg1;

@optional
- (void)generateShortcutRepresentation:(void (^)(INShortcut *, NSError *))arg1;
@end
