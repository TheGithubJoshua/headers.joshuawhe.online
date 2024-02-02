<?php include 'list_files.php'; ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>iOS Headers</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script>
    $(document).ready(function() {
        var offset = 0;
        var limit = 20;
        var isLoading = false;
           
        function loadMoreHeaders() {
            var searchTerm = '<?php echo htmlspecialchars($_GET['search'] ?? '', ENT_QUOTES); ?>';
            if (isLoading) return;
            isLoading = true;

            $.ajax({
                url: 'load_headers.php',
                type: 'GET',
                data: {
                    offset: offset,
                    limit: limit,
                    search: searchTerm
                },
                success: function(data) {
                    if (data.trim()) {
                        $('#headers-list').append(data);
                        offset += limit;
                    } else {
                        // No more data to load or end of search results
                        $(window).off('scroll', onScroll);
                    }
                    isLoading = false;
                }
            });
        }

        function onScroll() {
            if ($(window).scrollTop() >= $(document).height() - $(window).height() - 10) {
                loadMoreHeaders();
            }
        }

        $(window).on('scroll', onScroll);
        loadMoreHeaders(); // Load the first batch of headers
    });
    </script>
</head>
<body>
    <form action="12.php" method="get">
        <input type="text" name="search" placeholder="Search headers..." value="<?php echo htmlspecialchars($_GET['search'] ?? '', ENT_QUOTES); ?>">
        <input type="submit" value="Search">
    </form>

    <div id="headers-list">
        <!-- Headers will be loaded here -->
    </div>
</body>
</html>


