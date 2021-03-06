//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, _PASLPArrayContext, _PASLPDictionaryContext;

@protocol _PASLPReaderProtocol
- (NSObject *)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(_PASLPArrayContext *)arg2;
- (NSObject *)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(_PASLPDictionaryContext *)arg2;
- (NSString *)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(_PASLPDictionaryContext *)arg2;
- (NSObject *)objectForKey:(id)arg1 usingDictionaryContext:(_PASLPDictionaryContext *)arg2;
- (NSObject *)rootObjectWithErrMsg:(id *)arg1;
@end

