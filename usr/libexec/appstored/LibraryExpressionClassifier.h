//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol LibraryQueryEvaluator;

@interface LibraryExpressionClassifier : NSObject
{
    id <LibraryQueryEvaluator> _evaluator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006b95b
- (id)_resultEnumeratorForKeyPath:(id)arg1 matchingValues:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006b89b
- (id)_resultEnumeratorForComparisonPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b674
- (id)resultEnumeratorForPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b5f2
- (id)initWithEvalulator:(id)arg1;	// IMP=0x001000000006b587

@end
