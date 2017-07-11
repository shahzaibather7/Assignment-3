//
//  Header2.h
//  Toyotaz are cars too
//
//  Created by Mohammad Shahzaib Ather on 2017-07-11.
//  Copyright © 2017 Mohammad Shahzaib Ather. All rights reserved.
//

#ifndef Header2_h
#define Header2_h

@interface Toyota : Car
@property NSString *newmodel;
-(void) drive ;
-(void) initWithModel:(NSString *)_model;


@end
@implementation Toyota

-(void) drive {
    NSLog (@"The car im driving is %@", _newmodel );
}
-(void) initWithModel:(NSString *) model {
    _newmodel = @"Prius";
}

@end
#endif /* Header2_h */
