#pragma once

namespace exlib {
	class Book {
		public:
			Book() = default;
			Book(std::string t_title
					,std::string t_author
					,std::string t_publisher
					,int t_year
					,int t_pages
					,std::string t_coverage
					,std::string t_position
					,bool t_favourite
					,bool t_readed) 
				: title(t_title)
				  ,author{t_author}
				  ,publisher{t_publisher}
				  ,year{t_year}
				  ,pages{t_pages}
				  ,coverage{t_coverage}
				  ,position{t_position}
				  ,favourite{t_favourite}
				  ,readed{t_readed}
			{}

			std::string title;
			std::string author;
			std::string publisher;
			int year;
			int pages;
			std::string coverage;
			std::string position;
			bool favourite;
			bool readed;
	}; // class Book
}; // namespace exlib
