//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPResult.h"

@class SPIndexingProgressTableCellView;

@interface SPIndexingProgressResult : SPResult
{
    int _indexingState;
    double _indexedPercentage;
    SPIndexingProgressTableCellView *_progressIndicator;
}

@property(nonatomic) __weak SPIndexingProgressTableCellView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) double indexedPercentage; // @synthesize indexedPercentage=_indexedPercentage;
@property(nonatomic) int indexingState; // @synthesize indexingState=_indexingState;
- (void).cxx_destruct;
- (BOOL)isIndexingProgress;
- (id)init;
- (BOOL)isSelectable;

@end
