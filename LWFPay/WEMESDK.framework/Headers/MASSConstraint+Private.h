//
//  MASSConstraint+Private.h
//  MASSonry
//
//  Created by Nick Tymchenko on 29/04/14.
//  Copyright (c) 2014 cloudling. All rights reserved.
//

#import "MASSConstraint.h"

@protocol MASSConstraintDelegate;


@interface MASSConstraint ()

/**
 *  Whether or not to check for an existing constraint instead of adding constraint
 */
@property (nonatomic, assign) BOOL updateExisting;

/**
 *	Usually MASSConstraintMaker but could be a parent MASSConstraint
 */
@property (nonatomic, weak) id<MASSConstraintDelegate> delegate;

/**
 *  Based on a provided value type, is equal to calling:
 *  NSNumber - setOffset:
 *  NSValue with CGPoint - setPointOffset:
 *  NSValue with CGSize - setSizeOffset:
 *  NSValue with MASSEdgeInsets - setInsets:
 */
- (void)setLayoutConstantWithValue:(NSValue *)value;

@end


@interface MASSConstraint (Abstract)

/**
 *	Sets the constraint relation to given NSLayoutRelation
 *  returns a block which accepts one of the following:
 *    MASSViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (MASSConstraint * (^)(id, NSLayoutRelation))equalToWithRelation;

/**
 *	Override to set a custom chaining behaviour
 */
- (MASSConstraint *)addConstraintWithLayoutAttribute:(NSLayoutAttribute)layoutAttribute;

@end


@protocol MASSConstraintDelegate <NSObject>

/**
 *	Notifies the delegate when the constraint needs to be replaced with another constraint. For example
 *  A MASSViewConstraint may turn into a MASSCompositeConstraint when an array is passed to one of the equality blocks
 */
- (void)constraint:(MASSConstraint *)constraint shouldBeReplacedWithConstraint:(MASSConstraint *)replacementConstraint;

- (MASSConstraint *)constraint:(MASSConstraint *)constraint addConstraintWithLayoutAttribute:(NSLayoutAttribute)layoutAttribute;

@end
