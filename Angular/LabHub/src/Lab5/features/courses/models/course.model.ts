export type CourseLevel =
  | 'beginner'
  | 'intermediate'
  | 'advanced';

export interface Course {
  id: number;
  title: string;
  description: string;
  price: number;
  discount: number;
  startDate: string;
  level: CourseLevel;
  seatsLeft: number;
}