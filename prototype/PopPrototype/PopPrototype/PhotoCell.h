//
//  PhotoCell.h
//  PopPrototype
//
//  Created by Sam Davies on 22/08/2014.
//  Copyright (c) 2014 ShinobiControls. All rights reserved.
//

@import UIKit;

@interface PhotoCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *photoImageView;

- (void)prepareGestureRecogniser;

@end
