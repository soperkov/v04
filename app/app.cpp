#include "app.h"
#include <algorithm>

namespace vsite::oop::v4
{
	uint32_t insect::legs() const {
		return 6;
	}

	uint32_t bird::legs() const {
		return 2;
	};

	uint32_t spider::legs() const {
		return 8;
	};

	std::string sparrow::species() const {
		return "sparrow";
	};

	std::string tarantula::species() const {
		return "tarantula";
	};

	std::string cockroach::species() const {
		return "cockroach";
	};

	std::unique_ptr<animal> animal_factory(int which) {
		switch (which) {
		case 1:
			return std::make_unique<cockroach>();
		case 2:
			return std::make_unique<sparrow>();
		case 3:
			return std::make_unique<tarantula>();
		default:
			return nullptr;
		};
	}

	std::string leg_counter::add_animal(animal* a) {
		lc += a->legs();
		return a->species();
	}

	uint32_t leg_counter::legs() {
		return lc;
	}


}