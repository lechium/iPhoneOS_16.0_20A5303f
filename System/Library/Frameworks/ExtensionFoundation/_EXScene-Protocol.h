//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/NSObject-Protocol.h>

@class NSXPCConnection, _EXSceneSession;

@protocol _EXScene <NSObject>

@optional
@property(retain) id delegate;
- (void)connectToSession:(_EXSceneSession *)arg1;
- (_Bool)shouldAcceptConnection:(NSXPCConnection *)arg1;
@end
